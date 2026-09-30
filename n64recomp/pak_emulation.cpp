#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <vector>

#include "recomp.h"
#include "librecomp/helpers.hpp"

namespace {
constexpr size_t kPakCapacity = 0x7B00; // 123 Controller Pak pages.
constexpr int32_t PFS_ERR_INVALID = 5;
std::mutex pak_mutex;
std::vector<uint8_t> pak_data;
bool pak_file_exists = false;
uint32_t pak_file_size = 0;
bool trace_save() { return std::getenv("ISS64_TRACE_SAVE") != nullptr; }

const std::filesystem::path& pak_path() {
    static const std::filesystem::path path = ".iss64/saves/iss64.pak";
    return path;
}

std::filesystem::path pak_size_path() { return pak_path().string() + ".size"; }

void load_pak() {
    if (!pak_data.empty()) return;
    pak_data.assign(kPakCapacity, 0);
    std::ifstream in(pak_path(), std::ios::binary);
    if (in) {
        in.read(reinterpret_cast<char*>(pak_data.data()), pak_data.size());
        pak_file_exists = true;
        pak_file_size = static_cast<uint32_t>(std::max<std::streamsize>(in.gcount(), 0));
        std::ifstream size_in(pak_size_path());
        uint32_t saved_size = 0;
        if (size_in >> saved_size && saved_size <= kPakCapacity) pak_file_size = saved_size;
    }
}

void flush_pak() {
    std::filesystem::create_directories(pak_path().parent_path());
    const auto temporary = pak_path().string() + ".tmp";
    {
        std::ofstream out(temporary, std::ios::binary | std::ios::trunc);
        out.write(reinterpret_cast<const char*>(pak_data.data()), pak_data.size());
    }
    std::error_code error;
    std::filesystem::rename(temporary, pak_path(), error);
    if (error) {
        std::filesystem::remove(pak_path(), error);
        std::filesystem::rename(temporary, pak_path(), error);
    }
    std::ofstream(pak_size_path(), std::ios::trunc) << pak_file_size << '\n';
}

void set_s32(uint8_t* rdram, gpr address, int32_t value) {
    MEM_W(0, address) = static_cast<uint32_t>(value);
}

// Stack arguments are loaded from emulated memory as 32-bit values.  KSEG0
// pointers (0x80000000+) must be sign-extended before they are passed to the
// MEM_* macros; zero-extending them makes the macro calculate an enormous
// host offset and was the cause of the delayed save-menu crash.
gpr stack_pointer_arg(uint32_t address) {
    return static_cast<gpr>(static_cast<int64_t>(static_cast<int32_t>(address)));
}
}

extern "C" void osPfsInitPak_recomp(uint8_t*, recomp_context* ctx) {
    if (trace_save()) std::fprintf(stderr, "[iss64 save] Controller Pak initialized\n");
    ctx->r2 = 0;
}
extern "C" void osPfsChecker_recomp(uint8_t*, recomp_context* ctx) { ctx->r2 = 0; }
extern "C" void osPfsRepairId_recomp(uint8_t*, recomp_context* ctx) { ctx->r2 = 0; }

extern "C" void osPfsIsPlug_recomp(uint8_t* rdram, recomp_context* ctx) {
    const gpr pattern = ctx->r5;
    MEM_B(0, pattern) = 1; // Controller port 1 has a virtual Controller Pak.
    ctx->r2 = 0;
}

extern "C" void osPfsFreeBlocks_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    set_s32(rdram, ctx->r5, static_cast<int32_t>(
        kPakCapacity - std::min<size_t>(pak_file_size, kPakCapacity)));
    ctx->r2 = 0;
}

extern "C" void osPfsNumFiles_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    set_s32(rdram, ctx->r5, 16);
    set_s32(rdram, ctx->r6, pak_file_exists ? 1 : 0);
    ctx->r2 = 0;
}

extern "C" void osPfsFindFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    const uint32_t raw_file_no = _arg<5, uint32_t>(rdram, ctx);
    const gpr file_no = stack_pointer_arg(raw_file_no);
    set_s32(rdram, file_no, pak_file_exists ? 0 : -1);
    if (trace_save()) std::fprintf(stderr, "[iss64 save] find: %s (file_no=%08X)\n",
                                   pak_file_exists ? "found" : "not found", raw_file_no);
    ctx->r2 = pak_file_exists ? 0 : PFS_ERR_INVALID;
}

extern "C" void osPfsAllocateFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    const uint32_t requested_size = _arg<5, uint32_t>(rdram, ctx);
    const gpr file_no = stack_pointer_arg(_arg<6, uint32_t>(rdram, ctx));
    if (requested_size == 0 || requested_size > kPakCapacity) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    pak_file_exists = true;
    pak_file_size = requested_size;
    set_s32(rdram, file_no, 0);
    flush_pak();
    if (trace_save()) std::fprintf(stderr, "[iss64 save] allocated %u bytes\n", requested_size);
    ctx->r2 = 0;
}

extern "C" void osPfsDeleteFile_recomp(uint8_t*, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    std::fill(pak_data.begin(), pak_data.end(), 0);
    pak_file_exists = false;
    pak_file_size = 0;
    std::error_code error;
    std::filesystem::remove(pak_path(), error);
    std::filesystem::remove(pak_size_path(), error);
    ctx->r2 = 0;
}

extern "C" void osPfsFileState_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    if (!pak_file_exists || static_cast<int32_t>(ctx->r5) != 0) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    const gpr state = ctx->r6;
    for (uint32_t i = 0; i < 32; ++i) MEM_B(i, state) = 0;
    MEM_W(0, state) = pak_file_size;
    ctx->r2 = 0;
}

extern "C" void osPfsReadWriteFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(pak_mutex);
    load_pak();
    const int32_t file_no = static_cast<int32_t>(ctx->r5);
    const uint8_t flag = static_cast<uint8_t>(ctx->r6);
    const int32_t offset = static_cast<int32_t>(ctx->r7);
    const int32_t size = _arg<4, int32_t>(rdram, ctx);
    const gpr buffer = stack_pointer_arg(_arg<5, uint32_t>(rdram, ctx));
    if (!pak_file_exists || file_no != 0 || offset < 0 || size <= 0 ||
        static_cast<size_t>(offset) + static_cast<size_t>(size) > pak_data.size()) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    if (flag == 0) {
        for (int32_t i = 0; i < size; ++i) MEM_B(i, buffer) = pak_data[offset + i];
    } else {
        for (int32_t i = 0; i < size; ++i) pak_data[offset + i] = MEM_B(i, buffer);
        pak_file_size = std::max(pak_file_size, static_cast<uint32_t>(offset + size));
        flush_pak();
    }
    if (trace_save()) std::fprintf(stderr, "[iss64 save] %s offset=%d size=%d\n",
                                   flag == 0 ? "read" : "write", offset, size);
    ctx->r2 = 0;
}

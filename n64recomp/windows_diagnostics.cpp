#include "windows_diagnostics.hpp"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <dxgi.h>
#include <intrin.h>
#include <io.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <csignal>
#include <cwchar>
#include <cstdint>

namespace {
HANDLE crash_file = INVALID_HANDLE_VALUE;
volatile LONG reporting_crash = 0;

void write_crash(const char* text) {
    if (crash_file != INVALID_HANDLE_VALUE) {
        DWORD written;
        WriteFile(crash_file, text, static_cast<DWORD>(std::strlen(text)), &written, nullptr);
        FlushFileBuffers(crash_file);
    }
}

LONG WINAPI report_exception(EXCEPTION_POINTERS* exception) {
    if (InterlockedExchange(&reporting_crash, 1)) return EXCEPTION_CONTINUE_SEARCH;
    const auto* record = exception->ExceptionRecord;
    HMODULE module = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(record->ExceptionAddress), &module);
    wchar_t module_path[1024]{};
    if (module) GetModuleFileNameW(module, module_path, 1024);
    const wchar_t* name = std::wcsrchr(module_path, L'\\');
    char module_name[2048]{};
    WideCharToMultiByte(CP_UTF8, 0, name ? name + 1 : module_path, -1,
        module_name, sizeof(module_name), nullptr, nullptr);
    char text[4096];
    std::snprintf(text, sizeof(text),
        "Build: %s %s\nException: 0x%08lX\nThread: %lu\nModule: %s\n"
        "Address: %p\nModule base: %p\nModule offset: 0x%llX\n",
        __DATE__, __TIME__, record->ExceptionCode, GetCurrentThreadId(), module_name,
        record->ExceptionAddress, static_cast<void*>(module),
        static_cast<unsigned long long>(reinterpret_cast<uintptr_t>(record->ExceptionAddress) - reinterpret_cast<uintptr_t>(module)));
    write_crash(text);
    if (record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && record->NumberParameters >= 2) {
        std::snprintf(text, sizeof(text), "Access (0=read,1=write,8=execute): %llu\nTarget: 0x%llX\n",
            static_cast<unsigned long long>(record->ExceptionInformation[0]),
            static_cast<unsigned long long>(record->ExceptionInformation[1]));
        write_crash(text);
    }
    // Preserve normal Windows crash reporting. Do not attempt to keep running.
    return EXCEPTION_CONTINUE_SEARCH;
}

void report_abort(int) {
    write_crash("Process aborted (SIGABRT). See diagnostico.log for the exception or graphics error.\n");
}
}

void iss64_start_windows_diagnostics() {
    MoveFileExW(L"diagnostico.log", L"diagnostico-anterior.log", MOVEFILE_REPLACE_EXISTING);
    if (FILE* log = _wfreopen(L"diagnostico.log", L"wb", stdout)) {
        // GUI apps launched from Explorer can have _fileno(stderr) == -2.
        // Open it first; passing that invalid descriptor to _dup2 aborts.
        if (FILE* errors = _wfreopen(L"diagnostico.log", L"ab", stderr))
            _dup2(_fileno(log), _fileno(errors));
        std::setvbuf(stdout, nullptr, _IONBF, 0);
        std::setvbuf(stderr, nullptr, _IONBF, 0);
    }
    MoveFileExW(L"crash.txt", L"crash-anterior.txt", MOVEFILE_REPLACE_EXISTING);
    crash_file = CreateFileW(L"crash.txt", GENERIC_WRITE, FILE_SHARE_READ, nullptr,
        CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    SetUnhandledExceptionFilter(report_exception);
    std::signal(SIGABRT, report_abort);
    std::set_terminate([] {
        std::fprintf(stderr, "[fatal] std::terminate\n");
        if (auto exception = std::current_exception()) {
            try { std::rethrow_exception(exception); }
            catch (const std::exception& e) { std::fprintf(stderr, "[fatal] %s\n", e.what()); }
            catch (...) { std::fprintf(stderr, "[fatal] Unknown C++ exception\n"); }
        }
        std::abort();
    });
    std::fprintf(stderr, "[iss64] Windows diagnostic build %s %s\n", __DATE__, __TIME__);
    using RtlGetVersionFn = LONG (WINAPI*)(OSVERSIONINFOW*);
    auto get_version = reinterpret_cast<RtlGetVersionFn>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"), "RtlGetVersion"));
    OSVERSIONINFOW version{};
    version.dwOSVersionInfoSize = sizeof(version);
    if (get_version && get_version(&version) == 0)
        std::fprintf(stderr, "Windows: %lu.%lu build %lu\n", version.dwMajorVersion, version.dwMinorVersion, version.dwBuildNumber);
    int cpu[4]{};
    char brand[49]{};
    __cpuid(cpu, static_cast<int>(0x80000000u));
    if (static_cast<unsigned>(cpu[0]) >= 0x80000004u) {
        for (unsigned i = 0; i < 3; ++i) {
            __cpuid(cpu, static_cast<int>(0x80000002u + i));
            std::memcpy(brand + i * 16, cpu, 16);
        }
    }
    std::fprintf(stderr, "CPU: %s\n", brand);
    MEMORYSTATUSEX memory{};
    memory.dwLength = sizeof(memory);
    if (GlobalMemoryStatusEx(&memory))
        std::fprintf(stderr, "RAM: total=%llu MiB available=%llu MiB\n", memory.ullTotalPhys >> 20, memory.ullAvailPhys >> 20);
    IDXGIFactory1* factory = nullptr;
    const HRESULT result = CreateDXGIFactory1(IID_PPV_ARGS(&factory));
    std::fprintf(stderr, "DXGI enumeration: 0x%08lX\n", static_cast<unsigned long>(result));
    if (SUCCEEDED(result)) {
        for (UINT i = 0; ; ++i) {
            IDXGIAdapter1* adapter = nullptr;
            if (FAILED(factory->EnumAdapters1(i, &adapter))) break;
            DXGI_ADAPTER_DESC1 desc{};
            if (SUCCEEDED(adapter->GetDesc1(&desc))) {
                char name[512]{};
                WideCharToMultiByte(CP_UTF8, 0, desc.Description, -1, name, sizeof(name), nullptr, nullptr);
                LARGE_INTEGER driver{};
                const auto status = adapter->CheckInterfaceSupport(__uuidof(IDXGIDevice), &driver);
                std::fprintf(stderr, "GPU %u: %s vendor=%04X device=%04X dedicated=%llu MiB shared=%llu MiB software=%u\n",
                    i, name, desc.VendorId, desc.DeviceId, static_cast<unsigned long long>(desc.DedicatedVideoMemory >> 20),
                    static_cast<unsigned long long>(desc.SharedSystemMemory >> 20), (desc.Flags & DXGI_ADAPTER_FLAG_SOFTWARE) != 0);
                std::fprintf(stderr, "GPU driver: %u.%u.%u.%u (query=0x%08lX)\n",
                    HIWORD(driver.HighPart), LOWORD(driver.HighPart), HIWORD(driver.LowPart), LOWORD(driver.LowPart),
                    static_cast<unsigned long>(status));
            }
            adapter->Release();
        }
        factory->Release();
    }
    std::fprintf(stderr, "[iss64] Hardware enumeration finished\n");
}
#endif

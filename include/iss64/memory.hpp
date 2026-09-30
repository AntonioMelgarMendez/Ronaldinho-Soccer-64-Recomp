#pragma once

#include <cstdint>
#include <filesystem>
#include <array>
#include <unordered_map>
#include <string>
#include <vector>

namespace iss64 {

class Memory {
public:
    static constexpr std::size_t kRdramSize = 8 * 1024 * 1024;

    bool load_rom(const std::filesystem::path& path, std::string& error);
    void boot_hle();
    void tick();
    bool external_interrupt() const;
    bool dump_framebuffer(const std::filesystem::path& path, std::string& error) const;
    void set_mmio_trace(bool enabled) { trace_mmio_ = enabled; }

    std::uint8_t load8(std::uint32_t address) const;
    std::uint16_t load16(std::uint32_t address) const;
    std::uint32_t load32(std::uint32_t address) const;
    std::uint64_t load64(std::uint32_t address) const;
    void store8(std::uint32_t address, std::uint8_t value);
    void store16(std::uint32_t address, std::uint16_t value);
    void store32(std::uint32_t address, std::uint32_t value);
    void store64(std::uint32_t address, std::uint64_t value);

    const std::vector<std::uint8_t>& rom() const { return rom_; }
    std::uint64_t mmio_reads() const { return mmio_reads_; }
    std::uint64_t mmio_writes() const { return mmio_writes_; }
    std::uint64_t sp_tasks() const { return sp_tasks_; }
    std::uint64_t graphics_tasks() const { return graphics_tasks_; }
    std::uint64_t audio_tasks() const { return audio_tasks_; }
    std::uint64_t rdp_commands() const { return rdp_commands_; }

private:
    std::vector<std::uint8_t> rdram_ = std::vector<std::uint8_t>(kRdramSize);
    std::vector<std::uint8_t> rom_;
    mutable std::uint64_t mmio_reads_{};
    mutable std::uint64_t mmio_writes_{};
    std::array<std::uint8_t, 0x2000> sp_mem_{};
    std::array<std::uint8_t, 64> pif_ram_{};
    std::unordered_map<std::uint32_t, std::uint32_t> hw_;
    std::uint32_t mi_intr_{};
    std::uint32_t mi_mask_{};
    std::uint64_t ticks_{};
    bool trace_mmio_{};
    std::uint32_t sp_status_{1};
    std::uint64_t sp_tasks_{};
    std::uint64_t graphics_tasks_{};
    std::uint64_t audio_tasks_{};
    std::uint64_t rdp_commands_{};

    static std::uint32_t physical(std::uint32_t address);
    std::uint32_t mmio_load32(std::uint32_t physical) const;
    void mmio_store32(std::uint32_t physical, std::uint32_t value);
    void set_interrupt(std::uint32_t bit) { mi_intr_ |= bit; }
    void clear_interrupt(std::uint32_t bit) { mi_intr_ &= ~bit; }
    void sp_dma(bool rdram_to_sp, std::uint32_t descriptor);
    void run_sp_task_hle();
    void run_display_list(std::uint32_t address, unsigned depth = 0);
    void fill_rect(unsigned x0, unsigned y0, unsigned x1, unsigned y1, std::uint32_t color);
};

} // namespace iss64

#include "iss64/memory.hpp"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

namespace iss64 {
namespace {
std::uint32_t be32(const std::uint8_t* p) {
    return (std::uint32_t(p[0]) << 24) | (std::uint32_t(p[1]) << 16) |
           (std::uint32_t(p[2]) << 8) | p[3];
}
}

std::uint32_t Memory::physical(std::uint32_t address) {
    return address & 0x1FFFFFFFu;
}

bool Memory::load_rom(const std::filesystem::path& path, std::string& error) {
    std::ifstream stream(path, std::ios::binary);
    if (!stream) { error = "cannot open ROM: " + path.string(); return false; }
    rom_.assign(std::istreambuf_iterator<char>(stream), {});
    if (rom_.size() < 0x101000) { error = "ROM is too small"; return false; }

    const auto magic = be32(rom_.data());
    if (magic == 0x37804012u) {
        for (std::size_t i = 0; i + 1 < rom_.size(); i += 2) std::swap(rom_[i], rom_[i + 1]);
    } else if (magic == 0x40123780u) {
        for (std::size_t i = 0; i + 3 < rom_.size(); i += 4) {
            std::swap(rom_[i], rom_[i + 3]); std::swap(rom_[i + 1], rom_[i + 2]);
        }
    } else if (magic != 0x80371240u) {
        error = "not a recognized N64 ROM byte order"; return false;
    }
    return true;
}

void Memory::boot_hle() {
    std::fill(rdram_.begin(), rdram_.end(), 0);
    // IPL3 copies the cartridge payload at 0x1000 to RDRAM 0x400 before jumping
    // to the header entry point. One MiB is sufficient for this title's loader.
    const auto count = std::min<std::size_t>(rom_.size() - 0x1000, 0x100000);
    std::copy_n(rom_.begin() + 0x1000, count, rdram_.begin() + 0x400);
}

std::uint8_t Memory::load8(std::uint32_t address) const {
    const auto p = physical(address);
    if (p < rdram_.size()) return rdram_[p];
    if (p >= 0x04000000u && p < 0x04002000u) return sp_mem_[p - 0x04000000u];
    if (p >= 0x1FC007C0u && p < 0x1FC00800u) return pif_ram_[p - 0x1FC007C0u];
    if (p >= 0x10000000u && p - 0x10000000u < rom_.size()) return rom_[p - 0x10000000u];
    const auto word = mmio_load32(p & ~3u);
    return std::uint8_t(word >> ((3 - (p & 3)) * 8));
}
std::uint16_t Memory::load16(std::uint32_t a) const { return (std::uint16_t(load8(a)) << 8) | load8(a + 1); }
std::uint32_t Memory::load32(std::uint32_t a) const {
    const auto p = physical(a);
    if (p >= 0x03F00000u && p < 0x05000000u) return mmio_load32(p);
    return (std::uint32_t(load16(a)) << 16) | load16(a + 2);
}
std::uint64_t Memory::load64(std::uint32_t a) const { return (std::uint64_t(load32(a)) << 32) | load32(a + 4); }
void Memory::store8(std::uint32_t address, std::uint8_t value) {
    const auto p = physical(address);
    if (p < rdram_.size()) rdram_[p] = value;
    else if (p >= 0x04000000u && p < 0x04002000u) sp_mem_[p - 0x04000000u] = value;
    else if (p >= 0x1FC007C0u && p < 0x1FC00800u) pif_ram_[p - 0x1FC007C0u] = value;
    else ++mmio_writes_;
}
void Memory::store16(std::uint32_t a, std::uint16_t v) { store8(a, v >> 8); store8(a + 1, v); }
void Memory::store32(std::uint32_t a, std::uint32_t v) {
    const auto p = physical(a);
    if (p >= 0x03F00000u && p < 0x05000000u) mmio_store32(p, v);
    else store16(a, v >> 16), store16(a + 2, v);
}
void Memory::store64(std::uint32_t a, std::uint64_t v) { store32(a, v >> 32); store32(a + 4, v); }

std::uint32_t Memory::mmio_load32(std::uint32_t p) const {
    ++mmio_reads_;
    std::uint32_t value = 0;
    if (p == 0x04300004u) value = 0x02020102u;       // MI_VERSION
    else if (p == 0x04300008u) value = mi_intr_;     // MI_INTR
    else if (p == 0x0430000Cu) value = mi_mask_;     // MI_MASK
    else if (p == 0x04400010u) value = (ticks_ / 1500) % 525; // VI_CURRENT
    else if (p == 0x04600010u) value = 0;            // PI_STATUS idle
    else if (p == 0x04800018u) value = 0;            // SI_STATUS idle
    else if (p == 0x04040010u) value = sp_status_;
    else if (p == 0x04040018u || p == 0x0404001Cu) value = 0;
    else if (auto it = hw_.find(p); it != hw_.end()) value = it->second;
    if (trace_mmio_) std::cerr << "MMIO R " << std::hex << p << " -> " << value << std::dec << '\n';
    return value;
}

void Memory::mmio_store32(std::uint32_t p, std::uint32_t value) {
    ++mmio_writes_;
    if (trace_mmio_) std::cerr << "MMIO W " << std::hex << p << " <- " << value << std::dec << '\n';
    hw_[p] = value;
    if (p == 0x04040008u) sp_dma(true, value);
    else if (p == 0x0404000Cu) sp_dma(false, value);
    else if (p == 0x04040010u) {
        if(value&1)sp_status_&=~1u; if(value&2)sp_status_|=1u; if(value&4)sp_status_&=~2u;
        if(value&8)clear_interrupt(1u); if(value&0x10)set_interrupt(1u);
        if(value&0x20)sp_status_&=~0x20u; if(value&0x40)sp_status_|=0x20u;
        if(value&0x80)sp_status_&=~0x40u; if(value&0x100)sp_status_|=0x40u;
        for(unsigned n=0;n<8;++n){const auto c=1u<<(9+n*2),s=1u<<(10+n*2),b=1u<<(7+n);if(value&c)sp_status_&=~b;if(value&s)sp_status_|=b;}
        if(!(sp_status_&1u))run_sp_task_hle();
    } else if (p == 0x0430000Cu) { // MI_INTR_MASK uses paired clear/set command bits.
        for (unsigned n = 0; n < 6; ++n) {
            if (value & (1u << (n * 2))) mi_mask_ &= ~(1u << n);
            if (value & (1u << (n * 2 + 1))) mi_mask_ |= 1u << n;
        }
    } else if (p == 0x04400010u) clear_interrupt(1u << 3); // VI_CURRENT
    else if (p == 0x04500004u) set_interrupt(1u << 2);     // AI_LEN
    else if (p == 0x0450000Cu) clear_interrupt(1u << 2);   // AI_STATUS
    else if (p == 0x0460000Cu) { // PI_WR_LEN: cartridge -> RDRAM
        const auto dram = hw_[0x04600000u] & 0x00FFFFFFu;
        const auto cart = hw_[0x04600004u];
        const auto cart_offset = cart & 0x0FFFFFFFu;
        const auto length = (value & 0x00FFFFFFu) + 1;
        // PI_CART_ADDR is commonly programmed as a domain-relative value
        // (e.g. 0x00704540), not necessarily a CPU-visible 0x1xxxxxxx address.
        if (cart_offset < rom_.size() && dram < rdram_.size()) {
            const auto count = std::min<std::size_t>({length, rom_.size() - cart_offset, rdram_.size() - dram});
            std::copy_n(rom_.begin() + cart_offset, count, rdram_.begin() + dram);
        }
        set_interrupt(1u << 4);
    } else if (p == 0x04600010u && (value & 2)) clear_interrupt(1u << 4); // PI_STATUS
    else if (p == 0x04800004u || p == 0x04800010u) { // SI 64-byte DMA
        const auto dram = hw_[0x04800000u] & 0x00FFFFFFu;
        if (dram + 64 <= rdram_.size()) {
            if (p == 0x04800004u) std::copy(pif_ram_.begin(), pif_ram_.end(), rdram_.begin() + dram);
            else std::copy_n(rdram_.begin() + dram, 64, pif_ram_.begin());
        }
        set_interrupt(1u << 1);
    } else if (p == 0x04800018u) clear_interrupt(1u << 1);
}

void Memory::tick() {
    ++ticks_;
    // Rough NTSC cadence. Accurate timing can replace this without changing CPU API.
    if (ticks_ % 100000 == 0) set_interrupt(1u << 3);
}

bool Memory::external_interrupt() const { return (mi_intr_ & mi_mask_) != 0; }

void Memory::sp_dma(bool rdram_to_sp, std::uint32_t d) {
    auto mem=hw_[0x04040000u]&0x1FFFu, dram=hw_[0x04040004u]&0x00FFFFFFu;
    const auto length=(d&0xFFFu)+1, count=((d>>12)&0xFFu)+1, skip=(d>>20)&0xFFFu;
    for(unsigned block=0;block<count;++block){
        for(unsigned n=0;n<length;++n)if(mem+n<sp_mem_.size()&&dram+n<rdram_.size()){
            if(rdram_to_sp)sp_mem_[mem+n]=rdram_[dram+n];else rdram_[dram+n]=sp_mem_[mem+n];
        }
        mem=(mem+length)&0x1FFFu;dram+=length+skip;
    }
    hw_[0x04040000u]=mem;hw_[0x04040004u]=dram;
}

void Memory::run_sp_task_hle() {
    auto word=[&](unsigned off){return be32(sp_mem_.data()+0xFC0+off);};
    const auto type=word(0),data=word(0x30),size=word(0x34);
    if(!type||!data||!size){sp_status_|=1u;return;}
    ++sp_tasks_;
    if(type==1){++graphics_tasks_;run_display_list(data);}else if(type==2)++audio_tasks_;
    sp_status_|=3u;set_interrupt(1u);
}

void Memory::fill_rect(unsigned x0,unsigned y0,unsigned x1,unsigned y1,std::uint32_t color){
    const auto origin=hw_[0x04400004u]&0x00FFFFFFu,width=hw_[0x04400008u]&0xFFFu;
    if(!width||x0>=width)return;x1=std::min(x1,width-1);y1=std::min(y1,575u);
    const auto px=std::uint16_t(color>>16);
    for(unsigned y=y0;y<=y1;++y)for(unsigned x=x0;x<=x1;++x){const auto o=origin+(y*width+x)*2;if(o+1<rdram_.size()){rdram_[o]=px>>8;rdram_[o+1]=px;}}
}

void Memory::run_display_list(std::uint32_t address,unsigned depth){
    if(depth>16)return;
    std::array<std::uint32_t,16> segment{};
    auto resolve=[&](std::uint32_t a){const auto s=a>>24;return s<16&&segment[s]?segment[s]+(a&0xFFFFFFu):(a&0x1FFFFFFFu);};
    auto pc=resolve(address);std::uint32_t fill_color=0;
    for(unsigned count=0;count<200000&&pc+7<rdram_.size();++count,pc+=8){
        const auto w0=load32(pc),w1=load32(pc+4),op=w0>>24;++rdp_commands_;
        if(op==0xDF)break;
        if(op==0xDE){run_display_list(resolve(w1),depth+1);if(w0&0x10000u)break;}
        else if(op==0xDB&&((w0>>16)&0xFFu)==6){const auto index=(w0&0xFFFFu)/4;if(index<16)segment[index]=w1&0x1FFFFFFFu;}
        else if(op==0xF7)fill_color=w1;
        else if(op==0xF6){const auto x1=(w0>>12)&0xFFFu,y1=w0&0xFFFu,x0=(w1>>12)&0xFFFu,y0=w1&0xFFFu;fill_rect(x0/4,y0/4,x1/4,y1/4,fill_color);}
    }
    set_interrupt(1u<<5);
}

bool Memory::dump_framebuffer(const std::filesystem::path& path, std::string& error) const {
    const auto get = [&](std::uint32_t reg) { auto it=hw_.find(reg); return it==hw_.end()?0u:it->second; };
    const auto control=get(0x04400000u), origin=get(0x04400004u)&0x00FFFFFFu;
    const auto width=get(0x04400008u)&0xFFFu;
    const auto vstart=get(0x04400028u), start=(vstart>>16)&0x3FFu, end=vstart&0x3FFu;
    auto height=(end>start)?(end-start)/2:240u;
    if (!width || height<100 || height>576 || origin>=rdram_.size()) { error="VI has no valid framebuffer"; return false; }
    std::ofstream out(path, std::ios::binary);
    if (!out) { error="cannot create framebuffer dump"; return false; }
    out << "P6\n" << width << ' ' << height << "\n255\n";
    const auto type=control&3u;
    for (unsigned y=0;y<height;++y) for(unsigned x=0;x<width;++x) {
        std::uint8_t rgb[3]{};
        if (type==2 && origin+(y*width+x)*2+1<rdram_.size()) {
            auto px=std::uint16_t(rdram_[origin+(y*width+x)*2]<<8)|rdram_[origin+(y*width+x)*2+1];
            rgb[0]=std::uint8_t(((px>>11)&31)*255/31); rgb[1]=std::uint8_t(((px>>6)&31)*255/31); rgb[2]=std::uint8_t(((px>>1)&31)*255/31);
        } else if(type==3 && origin+(y*width+x)*4+2<rdram_.size()) {
            rgb[0]=rdram_[origin+(y*width+x)*4]; rgb[1]=rdram_[origin+(y*width+x)*4+1]; rgb[2]=rdram_[origin+(y*width+x)*4+2];
        }
        out.write(reinterpret_cast<char*>(rgb),3);
    }
    return true;
}
} // namespace iss64

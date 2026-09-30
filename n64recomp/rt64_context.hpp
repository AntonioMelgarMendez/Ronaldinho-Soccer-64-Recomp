#pragma once

#include <memory>
#include "ultramodern/renderer_context.hpp"

namespace RT64 { struct Application; }

class Iss64RT64Context final : public ultramodern::renderer::RendererContext {
public:
    Iss64RT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window, bool developer_mode);
    ~Iss64RT64Context() override;
    bool valid() override { return app != nullptr; }
    bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override;
    void enable_instant_present() override;
    void send_dl(const OSTask* task) override;
    void send_dummy_workload(uint32_t fb_address) override;
    void update_screen() override;
    void shutdown() override;
    uint32_t get_display_framerate() const override;
    float get_resolution_scale() const override;

private:
    std::unique_ptr<RT64::Application> app;
    uint32_t display_framerate = 60;
    float resolution_scale = 1.0f;
};

std::unique_ptr<ultramodern::renderer::RendererContext> iss64_create_render_context(
    uint8_t* rdram, ultramodern::renderer::WindowHandle window, bool developer_mode);

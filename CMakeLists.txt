cmake_minimum_required(VERSION 3.16)
project(iss64_recomp LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(iss64_recomp
    src/main.cpp
    src/cpu.cpp
    src/memory.cpp
    generated/recomp.cpp
)
target_include_directories(iss64_recomp PRIVATE include generated)
target_compile_options(iss64_recomp PRIVATE -Wall -Wextra -Wpedantic)

enable_testing()
add_executable(cpu_tests tests/cpu_tests.cpp src/cpu.cpp src/memory.cpp generated/recomp.cpp)
target_include_directories(cpu_tests PRIVATE include generated)
add_test(NAME cpu_tests COMMAND cpu_tests)

# Official N64Recomp output.  Keep this as a separate target while the old
# diagnostic core remains useful for locating functions and collecting traces.
option(ISS64_BUILD_N64RECOMP "Build the official N64Recomp generated code" ON)
option(ISS64_BUILD_RT64 "Build RT64 for the official runtime frontend" OFF)

if(ISS64_BUILD_N64RECOMP)
    if(ISS64_BUILD_RT64)
        set(RT64_STATIC ON CACHE BOOL "" FORCE)
        set(RT64_SDL_WINDOW_VULKAN ON CACHE BOOL "" FORCE)
        add_compile_definitions(HLSL_CPU)
        add_subdirectory(third_party/rt64 EXCLUDE_FROM_ALL)
    endif()

    add_subdirectory(third_party/N64ModernRuntime EXCLUDE_FROM_ALL)

    file(GLOB ISS64_RECOMPILED_C CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/n64recomp/generated/*.c"
    )

    add_library(iss64_recompiled_funcs STATIC
        ${ISS64_RECOMPILED_C}
        n64recomp/generated/lookup.cpp
        n64recomp/runtime_stubs.cpp
    )
    target_compile_options(iss64_recompiled_funcs PRIVATE
        -fno-strict-aliasing
        $<$<COMPILE_LANGUAGE:C>:-Wno-unused-variable>
        $<$<COMPILE_LANGUAGE:C>:-Wno-unused-but-set-variable>
    )
    target_include_directories(iss64_recompiled_funcs PRIVATE
        n64recomp/include
        n64recomp/generated
        third_party/N64ModernRuntime/N64Recomp/include
        third_party/N64ModernRuntime/librecomp/include
        third_party/N64ModernRuntime/ultramodern/include
    )

    if(ISS64_BUILD_RT64)
        find_package(SDL2 REQUIRED)

        # Mupen64Plus' standalone RSP-HLE core handles the standard ABI,
        # Nintendo EAD, naudio and MusyX audio command lists. plugin.c is not
        # used: n64recomp/rsp_hle_adapter.cpp supplies the small host API.
        set(RSP_HLE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third_party/mupen64plus-rsp-hle/src")
        add_library(iss64_rsp_hle STATIC
            ${RSP_HLE_DIR}/alist.c
            ${RSP_HLE_DIR}/alist_audio.c
            ${RSP_HLE_DIR}/alist_naudio.c
            ${RSP_HLE_DIR}/alist_nead.c
            ${RSP_HLE_DIR}/audio.c
            ${RSP_HLE_DIR}/cicx105.c
            ${RSP_HLE_DIR}/hle.c
            ${RSP_HLE_DIR}/hvqm.c
            ${RSP_HLE_DIR}/jpeg.c
            ${RSP_HLE_DIR}/memory.c
            ${RSP_HLE_DIR}/mp3.c
            ${RSP_HLE_DIR}/musyx.c
            ${RSP_HLE_DIR}/re2.c
        )
        target_include_directories(iss64_rsp_hle PUBLIC ${RSP_HLE_DIR})
        target_compile_options(iss64_rsp_hle PRIVATE -Wno-unused-parameter)

        add_executable(iss64_official
            n64recomp/official_main.cpp
            n64recomp/register_overlays.cpp
            n64recomp/rt64_context.cpp
            n64recomp/rsp_hle_adapter.cpp
            n64recomp/pak_emulation.cpp
        )
        target_include_directories(iss64_official PRIVATE
            n64recomp/include
            n64recomp
            third_party/N64ModernRuntime/N64Recomp/include
            third_party/N64ModernRuntime/librecomp/include
            third_party/N64ModernRuntime/ultramodern/include
            third_party/rt64/src
            third_party/rt64/src/contrib
            third_party/rt64/src/contrib/hlslpp/include
            ${SDL2_INCLUDE_DIRS}
        )
        target_link_libraries(iss64_official PRIVATE
            iss64_recompiled_funcs iss64_rsp_hle librecomp ultramodern rt64 SDL2::SDL2
        )
    endif()
endif()

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_LMEM_WARMUP_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(// This shader is a workaround for a quirk in NVIDIA OpenGL drivers
)" R"(// Shaders using local memory see a great performance benefit if a shader that was dispatched
)" R"(// before it had more local memory allocated.
)" R"(// This shader allocates the maximum local memory allowed on NVIDIA drivers to ensure that
)" R"(// subsequent shaders see the performance boost.
)" R"(
)" R"(// NOTE: This shader does no actual meaningful work and returns immediately,
)" R"(// it is simply a means to have the driver expect a shader using lots of local memory.
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
)" R"(
)" R"(layout(location = 0) uniform uint uniform_data;
)" R"(
)" R"(layout(binding = 0, rgba8) uniform writeonly restrict image2DArray dest_image;
)" R"(
)" R"(#define MAX_LMEM_SIZE 4080 // Size chosen to avoid errors in Nvidia's GLSL compiler
)" R"(#define NUM_LMEM_CONSTANTS 1
)" R"(#define ARRAY_SIZE MAX_LMEM_SIZE - NUM_LMEM_CONSTANTS
)" R"(
)" R"(uint lmem_0[ARRAY_SIZE];
)" R"(const uvec4 constant_values[NUM_LMEM_CONSTANTS] = uvec4[](uvec4(0));
)" R"(
)" R"(void main() {
)" R"(    const uint global_id = gl_GlobalInvocationID.x;
)" R"(    if (global_id <= 128) {
)" R"(        // Since the shader is called with a dispatch of 1x1x1
)" R"(        // This should always be the case, and this shader will not actually execute
)" R"(        return;
)" R"(    }
)" R"(    for (uint t = 0; t < uniform_data; t++) {
)" R"(        const uint offset = (t * uniform_data);
)" R"(        lmem_0[offset] = t;
)" R"(    }
)" R"(    const uint offset = (gl_GlobalInvocationID.y * uniform_data + gl_GlobalInvocationID.x);
)" R"(    const uint value = lmem_0[offset];
)" R"(    const uint const_value = constant_values[offset / 4][offset % 4];
)" R"(    const uvec4 color = uvec4(value + const_value);
)" R"(
)" R"(    // A "side-effect" is needed so the variables don't get optimized out,
)" R"(    // but this should never execute so there should be no clobbering of previously bound state.
)" R"(    imageStore(dest_image, ivec3(gl_GlobalInvocationID), color);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

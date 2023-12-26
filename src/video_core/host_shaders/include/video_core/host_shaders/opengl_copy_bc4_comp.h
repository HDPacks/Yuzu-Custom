// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_COPY_BC4_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 430 core
)" R"(#extension GL_ARB_gpu_shader_int64 : require
)" R"(
)" R"(layout (local_size_x = 4, local_size_y = 4) in;
)" R"(
)" R"(layout(binding = 0, rg32ui) readonly uniform uimage3D bc4_input;
)" R"(layout(binding = 1, rgba8ui) writeonly uniform uimage3D bc4_output;
)" R"(
)" R"(layout(location = 0) uniform uvec3 src_offset;
)" R"(layout(location = 1) uniform uvec3 dst_offset;
)" R"(
)" R"(// https://www.khronos.org/registry/OpenGL/extensions/ARB/ARB_texture_compression_rgtc.txt
)" R"(uint DecompressBlock(uint64_t bits, uvec2 coord) {
)" R"(    const uint code_offset = 16 + 3 * (4 * coord.y + coord.x);
)" R"(    const uint code = uint(bits >> code_offset) & 7;
)" R"(    const uint red0 = uint(bits >> 0) & 0xff;
)" R"(    const uint red1 = uint(bits >> 8) & 0xff;
)" R"(    if (red0 > red1) {
)" R"(        switch (code) {
)" R"(        case 0:
)" R"(            return red0;
)" R"(        case 1:
)" R"(            return red1;
)" R"(        case 2:
)" R"(            return (6 * red0 + 1 * red1) / 7;
)" R"(        case 3:
)" R"(            return (5 * red0 + 2 * red1) / 7;
)" R"(        case 4:
)" R"(            return (4 * red0 + 3 * red1) / 7;
)" R"(        case 5:
)" R"(            return (3 * red0 + 4 * red1) / 7;
)" R"(        case 6:
)" R"(            return (2 * red0 + 5 * red1) / 7;
)" R"(        case 7:
)" R"(            return (1 * red0 + 6 * red1) / 7;
)" R"(        }
)" R"(    } else {
)" R"(        switch (code) {
)" R"(        case 0:
)" R"(            return red0;
)" R"(        case 1:
)" R"(            return red1;
)" R"(        case 2:
)" R"(            return (4 * red0 + 1 * red1) / 5;
)" R"(        case 3:
)" R"(            return (3 * red0 + 2 * red1) / 5;
)" R"(        case 4:
)" R"(            return (2 * red0 + 3 * red1) / 5;
)" R"(        case 5:
)" R"(            return (1 * red0 + 4 * red1) / 5;
)" R"(        case 6:
)" R"(            return 0;
)" R"(        case 7:
)" R"(            return 0xff;
)" R"(        }
)" R"(    }
)" R"(    return 0;
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    uvec2 packed_bits = imageLoad(bc4_input, ivec3(gl_WorkGroupID + src_offset)).rg;
)" R"(    uint64_t bits = packUint2x32(packed_bits);
)" R"(    uint red = DecompressBlock(bits, gl_LocalInvocationID.xy);
)" R"(    uvec4 color = uvec4(red & 0xff, 0, 0, 0xff);
)" R"(    imageStore(bc4_output, ivec3(gl_GlobalInvocationID + dst_offset), color);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

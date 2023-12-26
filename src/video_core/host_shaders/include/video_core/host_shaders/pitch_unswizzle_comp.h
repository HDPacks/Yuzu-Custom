// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PITCH_UNSWIZZLE_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 430
)" R"(
)" R"(#ifdef VULKAN
)" R"(
)" R"(#extension GL_EXT_shader_16bit_storage : require
)" R"(#extension GL_EXT_shader_8bit_storage : require
)" R"(#define HAS_EXTENDED_TYPES 1
)" R"(#define BEGIN_PUSH_CONSTANTS layout(push_constant) uniform PushConstants {
)" R"(#define END_PUSH_CONSTANTS };
)" R"(#define UNIFORM(n)
)" R"(#define BINDING_INPUT_BUFFER 0
)" R"(#define BINDING_OUTPUT_IMAGE 1
)" R"(
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(
)" R"(#extension GL_NV_gpu_shader5 : enable
)" R"(#ifdef GL_NV_gpu_shader5
)" R"(#define HAS_EXTENDED_TYPES 1
)" R"(#else
)" R"(#define HAS_EXTENDED_TYPES 0
)" R"(#endif
)" R"(#define BEGIN_PUSH_CONSTANTS
)" R"(#define END_PUSH_CONSTANTS
)" R"(#define UNIFORM(n) layout (location = n) uniform
)" R"(#define BINDING_INPUT_BUFFER 0
)" R"(#define BINDING_OUTPUT_IMAGE 0
)" R"(
)" R"(#endif
)" R"(
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(UNIFORM(0) uvec2 origin;
)" R"(UNIFORM(1) ivec2 destination;
)" R"(UNIFORM(2) uint bytes_per_block;
)" R"(UNIFORM(3) uint pitch;
)" R"(END_PUSH_CONSTANTS
)" R"(
)" R"(#if HAS_EXTENDED_TYPES
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly buffer InputBufferU8 { uint8_t u8data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly buffer InputBufferU16 { uint16_t u16data[]; };
)" R"(#endif
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly buffer InputBufferU32 { uint u32data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly buffer InputBufferU64 { uvec2 u64data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly buffer InputBufferU128 { uvec4 u128data[]; };
)" R"(
)" R"(layout(binding = BINDING_OUTPUT_IMAGE) writeonly uniform uimage2D output_image;
)" R"(
)" R"(layout(local_size_x = 32, local_size_y = 32, local_size_z = 1) in;
)" R"(
)" R"(uvec4 ReadTexel(uint offset) {
)" R"(    switch (bytes_per_block) {
)" R"(#if HAS_EXTENDED_TYPES
)" R"(    case 1:
)" R"(        return uvec4(u8data[offset], 0, 0, 0);
)" R"(    case 2:
)" R"(        return uvec4(u16data[offset / 2], 0, 0, 0);
)" R"(#else
)" R"(    case 1:
)" R"(        return uvec4(bitfieldExtract(u32data[offset / 4], int((offset * 8) & 24), 8), 0, 0, 0);
)" R"(    case 2:
)" R"(        return uvec4(bitfieldExtract(u32data[offset / 4], int((offset * 8) & 16), 16), 0, 0, 0);
)" R"(#endif
)" R"(    case 4:
)" R"(        return uvec4(u32data[offset / 4], 0, 0, 0);
)" R"(    case 8:
)" R"(        return uvec4(u64data[offset / 8], 0, 0);
)" R"(    case 16:
)" R"(        return u128data[offset / 16];
)" R"(    }
)" R"(    return uvec4(0);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    uvec2 pos = gl_GlobalInvocationID.xy + origin;
)" R"(
)" R"(    uint offset = 0;
)" R"(    offset += pos.x * bytes_per_block;
)" R"(    offset += pos.y * pitch;
)" R"(
)" R"(    const uvec4 texel = ReadTexel(offset);
)" R"(    const ivec2 coord = ivec2(gl_GlobalInvocationID.xy) + destination;
)" R"(    imageStore(output_image, coord, texel);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

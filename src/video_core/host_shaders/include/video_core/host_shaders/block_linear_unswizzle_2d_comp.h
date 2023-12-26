// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BLOCK_LINEAR_UNSWIZZLE_2D_COMP = {
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
)" R"(#define BINDING_SWIZZLE_BUFFER 0
)" R"(#define BINDING_INPUT_BUFFER 1
)" R"(#define BINDING_OUTPUT_IMAGE 2
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
)" R"(#define BINDING_SWIZZLE_BUFFER 0
)" R"(#define BINDING_INPUT_BUFFER 1
)" R"(#define BINDING_OUTPUT_IMAGE 0
)" R"(
)" R"(#endif
)" R"(
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(UNIFORM(0) uvec3 origin;
)" R"(UNIFORM(1) ivec3 destination;
)" R"(UNIFORM(2) uint bytes_per_block_log2;
)" R"(UNIFORM(3) uint layer_stride;
)" R"(UNIFORM(4) uint block_size;
)" R"(UNIFORM(5) uint x_shift;
)" R"(UNIFORM(6) uint block_height;
)" R"(UNIFORM(7) uint block_height_mask;
)" R"(END_PUSH_CONSTANTS
)" R"(
)" R"(layout(binding = BINDING_SWIZZLE_BUFFER, std430) readonly buffer SwizzleTable {
)" R"(    uint swizzle_table[];
)" R"(};
)" R"(
)" R"(#if HAS_EXTENDED_TYPES
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU8 { uint8_t u8data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU16 { uint16_t u16data[]; };
)" R"(#endif
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU32 { uint u32data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU64 { uvec2 u64data[]; };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU128 { uvec4 u128data[]; };
)" R"(
)" R"(layout(binding = BINDING_OUTPUT_IMAGE) uniform writeonly uimage2DArray output_image;
)" R"(
)" R"(layout(local_size_x = 32, local_size_y = 32, local_size_z = 1) in;
)" R"(
)" R"(const uint GOB_SIZE_X = 64;
)" R"(const uint GOB_SIZE_Y = 8;
)" R"(const uint GOB_SIZE_Z = 1;
)" R"(const uint GOB_SIZE = GOB_SIZE_X * GOB_SIZE_Y * GOB_SIZE_Z;
)" R"(
)" R"(const uint GOB_SIZE_X_SHIFT = 6;
)" R"(const uint GOB_SIZE_Y_SHIFT = 3;
)" R"(const uint GOB_SIZE_Z_SHIFT = 0;
)" R"(const uint GOB_SIZE_SHIFT = GOB_SIZE_X_SHIFT + GOB_SIZE_Y_SHIFT + GOB_SIZE_Z_SHIFT;
)" R"(
)" R"(const uvec2 SWIZZLE_MASK = uvec2(GOB_SIZE_X - 1, GOB_SIZE_Y - 1);
)" R"(
)" R"(uint SwizzleOffset(uvec2 pos) {
)" R"(    pos = pos & SWIZZLE_MASK;
)" R"(    return swizzle_table[pos.y * 64 + pos.x];
)" R"(}
)" R"(
)" R"(uvec4 ReadTexel(uint offset) {
)" R"(    switch (bytes_per_block_log2) {
)" R"(#if HAS_EXTENDED_TYPES
)" R"(    case 0:
)" R"(        return uvec4(u8data[offset], 0, 0, 0);
)" R"(    case 1:
)" R"(        return uvec4(u16data[offset / 2], 0, 0, 0);
)" R"(#else
)" R"(    case 0:
)" R"(        return uvec4(bitfieldExtract(u32data[offset / 4], int((offset * 8) & 24), 8), 0, 0, 0);
)" R"(    case 1:
)" R"(        return uvec4(bitfieldExtract(u32data[offset / 4], int((offset * 8) & 16), 16), 0, 0, 0);
)" R"(#endif
)" R"(    case 2:
)" R"(        return uvec4(u32data[offset / 4], 0, 0, 0);
)" R"(    case 3:
)" R"(        return uvec4(u64data[offset / 8], 0, 0);
)" R"(    case 4:
)" R"(        return u128data[offset / 16];
)" R"(    }
)" R"(    return uvec4(0);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    uvec3 pos = gl_GlobalInvocationID + origin;
)" R"(    pos.x <<= bytes_per_block_log2;
)" R"(
)" R"(    // Read as soon as possible due to its latency
)" R"(    const uint swizzle = SwizzleOffset(pos.xy);
)" R"(
)" R"(    const uint block_y = pos.y >> GOB_SIZE_Y_SHIFT;
)" R"(
)" R"(    uint offset = 0;
)" R"(    offset += pos.z * layer_stride;
)" R"(    offset += (block_y >> block_height) * block_size;
)" R"(    offset += (block_y & block_height_mask) << GOB_SIZE_SHIFT;
)" R"(    offset += (pos.x >> GOB_SIZE_X_SHIFT) << x_shift;
)" R"(    offset += swizzle;
)" R"(
)" R"(    const uvec4 texel = ReadTexel(offset);
)" R"(    const ivec3 coord = ivec3(gl_GlobalInvocationID) + destination;
)" R"(    imageStore(output_image, coord, texel);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

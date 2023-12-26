// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view QUERIES_PREFIX_SCAN_SUM_NOSUBGROUPS_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2015 Graham Sellers, Richard Wright Jr. and Nicholas Haemel
)" R"(// SPDX-License-Identifier: MIT
)" R"(
)" R"(// Code obtained from OpenGL SuperBible, Seventh Edition by Graham Sellers, Richard Wright Jr. and
)" R"(// Nicholas Haemel. Modified to suit needs.
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(#ifdef VULKAN
)" R"(
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
)" R"(#define UNIFORM(n) layout(location = n) uniform
)" R"(#define BINDING_INPUT_BUFFER 0
)" R"(#define BINDING_OUTPUT_IMAGE 0
)" R"(
)" R"(#endif
)" R"(
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(UNIFORM(0) uint min_accumulation_base;
)" R"(UNIFORM(1) uint max_accumulation_base;
)" R"(UNIFORM(2) uint accumulation_limit;
)" R"(UNIFORM(3) uint buffer_offset;
)" R"(END_PUSH_CONSTANTS
)" R"(
)" R"(#define LOCAL_RESULTS 4
)" R"(#define QUERIES_PER_INVOC 2048
)" R"(
)" R"(layout(local_size_x = QUERIES_PER_INVOC / LOCAL_RESULTS) in;
)" R"(
)" R"(layout(std430, binding = 0) readonly buffer block1 {
)" R"(    uvec2 input_data[gl_WorkGroupSize.x * LOCAL_RESULTS];
)" R"(};
)" R"(
)" R"(layout(std430, binding = 1) writeonly coherent buffer block2 {
)" R"(    uvec2 output_data[gl_WorkGroupSize.x * LOCAL_RESULTS];
)" R"(};
)" R"(
)" R"(layout(std430, binding = 2) coherent buffer block3 {
)" R"(    uvec2 accumulated_data;
)" R"(};
)" R"(
)" R"(shared uvec2 shared_data[gl_WorkGroupSize.x * LOCAL_RESULTS];
)" R"(
)" R"(uvec2 AddUint64(uvec2 value_1, uvec2 value_2) {
)" R"(    uint carry = 0;
)" R"(    uvec2 result;
)" R"(    result.x = uaddCarry(value_1.x, value_2.x, carry);
)" R"(    result.y = value_1.y + value_2.y + carry;
)" R"(    return result;
)" R"(}
)" R"(
)" R"(void main(void) {
)" R"(    uint id = gl_LocalInvocationID.x;
)" R"(    uvec2 base_value[LOCAL_RESULTS];
)" R"(    const uvec2 accum = accumulated_data;
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        base_value[i] = (buffer_offset + id * LOCAL_RESULTS + i) < min_accumulation_base
)" R"(                            ? accumulated_data
)" R"(                            : uvec2(0);
)" R"(    }
)" R"(    uint work_size = gl_WorkGroupSize.x;
)" R"(    uint rd_id;
)" R"(    uint wr_id;
)" R"(    uint mask;
)" R"(    uvec2 inputs[LOCAL_RESULTS];
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        inputs[i] = input_data[buffer_offset + id * LOCAL_RESULTS + i];
)" R"(    }
)" R"(    // The number of steps is the log base 2 of the
)" R"(    // work group size, which should be a power of 2
)" R"(    const uint steps = uint(log2(work_size)) + uint(log2(LOCAL_RESULTS));
)" R"(    uint step = 0;
)" R"(
)" R"(    // Each invocation is responsible for the content of
)" R"(    // two elements of the output array
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        shared_data[id * LOCAL_RESULTS + i] = inputs[i];
)" R"(    }
)" R"(    // Synchronize to make sure that everyone has initialized
)" R"(    // their elements of shared_data[] with data loaded from
)" R"(    // the input arrays
)" R"(    barrier();
)" R"(    memoryBarrierShared();
)" R"(    // For each step...
)" R"(    for (step = 0; step < steps; step++) {
)" R"(        // Calculate the read and write index in the
)" R"(        // shared array
)" R"(        mask = (1 << step) - 1;
)" R"(        rd_id = ((id >> step) << (step + 1)) + mask;
)" R"(        wr_id = rd_id + 1 + (id & mask);
)" R"(        // Accumulate the read data into our element
)" R"(
)" R"(        shared_data[wr_id] = AddUint64(shared_data[rd_id], shared_data[wr_id]);
)" R"(        // Synchronize again to make sure that everyone
)" R"(        // has caught up with us
)" R"(        barrier();
)" R"(        memoryBarrierShared();
)" R"(    }
)" R"(    // Add the accumulation
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        shared_data[id * LOCAL_RESULTS + i] =
)" R"(            AddUint64(shared_data[id * LOCAL_RESULTS + i], base_value[i]);
)" R"(    }
)" R"(    barrier();
)" R"(    memoryBarrierShared();
)" R"(
)" R"(    // Finally write our data back to the output buffer
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        output_data[buffer_offset + id * LOCAL_RESULTS + i] = shared_data[id * LOCAL_RESULTS + i];
)" R"(    }
)" R"(    if (id == 0) {
)" R"(        if (min_accumulation_base >= accumulation_limit + 1) {
)" R"(            accumulated_data = shared_data[accumulation_limit];
)" R"(            return;
)" R"(        }
)" R"(        uvec2 reset_value = shared_data[max_accumulation_base - 1];
)" R"(        uvec2 final_value = shared_data[accumulation_limit];
)" R"(        // Two complements
)" R"(        reset_value = AddUint64(uvec2(1, 0), ~reset_value);
)" R"(        accumulated_data = AddUint64(final_value, reset_value);
)" R"(    }
)" R"(}
)" 
};

} // namespace HostShaders

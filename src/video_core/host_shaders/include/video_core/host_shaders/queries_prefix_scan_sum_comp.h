// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view QUERIES_PREFIX_SCAN_SUM_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(#extension GL_KHR_shader_subgroup_basic : require
)" R"(#extension GL_KHR_shader_subgroup_shuffle : require
)" R"(#extension GL_KHR_shader_subgroup_shuffle_relative : require
)" R"(#extension GL_KHR_shader_subgroup_arithmetic : require
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
)" R"(#define LOCAL_RESULTS 8
)" R"(#define QUERIES_PER_INVOC 2048
)" R"(
)" R"(layout(local_size_x = QUERIES_PER_INVOC / LOCAL_RESULTS) in;
)" R"(
)" R"(layout(std430, binding = 0) readonly buffer block1 {
)" R"(    uvec2 input_data[];
)" R"(};
)" R"(
)" R"(layout(std430, binding = 1) coherent buffer block2 {
)" R"(    uvec2 output_data[];
)" R"(};
)" R"(
)" R"(layout(std430, binding = 2) coherent buffer block3 {
)" R"(    uvec2 accumulated_data;
)" R"(};
)" R"(
)" R"(shared uvec2 shared_data[128];
)" R"(
)" R"(// Simple Uint64 add that uses 2 uint variables for GPUs that don't support uint64
)" R"(uvec2 AddUint64(uvec2 value_1, uvec2 value_2) {
)" R"(    uint carry = 0;
)" R"(    uvec2 result;
)" R"(    result.x = uaddCarry(value_1.x, value_2.x, carry);
)" R"(    result.y = value_1.y + value_2.y + carry;
)" R"(    return result;
)" R"(}
)" R"(
)" R"(// do subgroup Prefix Sum using Hillis and Steele's algorithm
)" R"(uvec2 subgroupInclusiveAddUint64(uvec2 value) {
)" R"(    uvec2 result = value;
)" R"(    for (uint i = 1; i < gl_SubgroupSize; i *= 2) {
)" R"(        uvec2 other = subgroupShuffleUp(result, i); // get value from subgroup_inv_id - i;
)" R"(        if (i <= gl_SubgroupInvocationID) {
)" R"(            result = AddUint64(result, other);
)" R"(        }
)" R"(    }
)" R"(    return result;
)" R"(}
)" R"(
)" R"(// Writes down the results to the output buffer and to the accumulation buffer
)" R"(void WriteResults(uvec2 results[LOCAL_RESULTS]) {
)" R"(    const uint current_id = gl_LocalInvocationID.x;
)" R"(    const uvec2 accum = accumulated_data;
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        uvec2 base_data = current_id * LOCAL_RESULTS + i < min_accumulation_base ? accum : uvec2(0, 0);
)" R"(        AddUint64(results[i], base_data);
)" R"(    }
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        output_data[buffer_offset + current_id * LOCAL_RESULTS + i] = results[i];
)" R"(    }
)" R"(    uint index = accumulation_limit % LOCAL_RESULTS;
)" R"(    uint base_id = accumulation_limit / LOCAL_RESULTS;
)" R"(    if (min_accumulation_base >= accumulation_limit + 1) {
)" R"(        if (current_id == base_id) {
)" R"(            accumulated_data = results[index];
)" R"(        }
)" R"(        return;
)" R"(    }
)" R"(    // We have that ugly case in which the accumulation data is reset in the middle somewhere.
)" R"(    barrier();
)" R"(    groupMemoryBarrier();
)" R"(
)" R"(    if (current_id == base_id) {
)" R"(        uvec2 reset_value = output_data[max_accumulation_base - 1];
)" R"(        // Calculate two complement / negate manually
)" R"(        reset_value = AddUint64(uvec2(1,0), ~reset_value);
)" R"(        accumulated_data = AddUint64(results[index], reset_value);
)" R"(    }
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    const uint subgroup_inv_id = gl_SubgroupInvocationID;
)" R"(    const uint subgroup_id = gl_SubgroupID + gl_WorkGroupID.x * gl_NumSubgroups;
)" R"(    const uint last_subgroup_id = subgroupMax(subgroup_inv_id);
)" R"(    const uint current_id = gl_LocalInvocationID.x;
)" R"(    const uint total_work = accumulation_limit;
)" R"(    const uint last_result_id = LOCAL_RESULTS - 1;
)" R"(    uvec2 data[LOCAL_RESULTS];
)" R"(    for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(        data[i] = input_data[buffer_offset + current_id * LOCAL_RESULTS + i];
)" R"(    }
)" R"(    uvec2 results[LOCAL_RESULTS];
)" R"(    results[0] = data[0];
)" R"(    for (uint i = 1; i < LOCAL_RESULTS; i++) {
)" R"(        results[i] = AddUint64(data[i], results[i - 1]);
)" R"(    }
)" R"(    // make sure all input data has been loaded
)" R"(    subgroupBarrier();
)" R"(    subgroupMemoryBarrier();
)" R"(
)" R"(    // on the last local result, do a subgroup inclusive scan sum
)" R"(    results[last_result_id] = subgroupInclusiveAddUint64(results[last_result_id]);
)" R"(    // get the last local result from the subgroup behind the current
)" R"(    uvec2 result_behind = subgroupShuffleUp(results[last_result_id], 1);
)" R"(    if (subgroup_inv_id != 0) {
)" R"(        for (uint i = 1; i < LOCAL_RESULTS; i++) {
)" R"(            results[i - 1] = AddUint64(results[i - 1], result_behind);
)" R"(        }
)" R"(    }
)" R"(
)" R"(    // if we had less queries than our subgroup, just write down the results.
)" R"(    if (total_work <= gl_SubgroupSize * LOCAL_RESULTS) { // This condition is constant per dispatch.
)" R"(        WriteResults(results);
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    // We now have more, so lets write the last result into shared memory.
)" R"(    // Only pick the last subgroup.
)" R"(    if (subgroup_inv_id == last_subgroup_id) {
)" R"(        shared_data[subgroup_id] = results[last_result_id];
)" R"(    }
)" R"(    // wait until everyone loaded their stuffs
)" R"(    barrier();
)" R"(    memoryBarrierShared();
)" R"(
)" R"(    // only if it's not the first subgroup
)" R"(    if (subgroup_id != 0) {
)" R"(        // get the results from some previous invocation
)" R"(        uvec2 tmp = shared_data[subgroup_inv_id];
)" R"(        subgroupBarrier();
)" R"(        subgroupMemoryBarrierShared();
)" R"(        tmp = subgroupInclusiveAddUint64(tmp);
)" R"(        // obtain the result that would be equivalent to the previous result
)" R"(        uvec2 shuffled_result = subgroupShuffle(tmp, subgroup_id - 1);
)" R"(        for (uint i = 0; i < LOCAL_RESULTS; i++) {
)" R"(            results[i] = AddUint64(results[i], shuffled_result);
)" R"(        }
)" R"(    }
)" R"(    WriteResults(results);
)" R"(}
)" 
};

} // namespace HostShaders

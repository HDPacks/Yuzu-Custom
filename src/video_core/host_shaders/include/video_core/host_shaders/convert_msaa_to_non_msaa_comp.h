// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_MSAA_TO_NON_MSAA_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(layout (local_size_x = 8, local_size_y = 8, local_size_z = 1) in;
)" R"(
)" R"(layout (binding = 0, rgba8) uniform readonly restrict image2DMSArray msaa_in;
)" R"(layout (binding = 1, rgba8) uniform writeonly restrict image2DArray output_img;
)" R"(
)" R"(void main() {
)" R"(    const ivec3 coords = ivec3(gl_GlobalInvocationID);
)" R"(    if (any(greaterThanEqual(coords, imageSize(msaa_in)))) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    // TODO: Specialization constants for num_samples?
)" R"(    const int num_samples = imageSamples(msaa_in);
)" R"(    const ivec3 msaa_size = imageSize(msaa_in);
)" R"(    const ivec3 out_size = imageSize(output_img);
)" R"(    const ivec3 scale = out_size / msaa_size;
)" R"(    for (int curr_sample = 0; curr_sample < num_samples; ++curr_sample) {
)" R"(        const vec4 pixel = imageLoad(msaa_in, coords, curr_sample);
)" R"(
)" R"(        const int single_sample_x = scale.x * coords.x + (curr_sample & 1);
)" R"(        const int single_sample_y = scale.y * coords.y + ((curr_sample / 2) & 1);
)" R"(        const ivec3 dest_coords = ivec3(single_sample_x, single_sample_y, coords.z);
)" R"(
)" R"(        if (any(greaterThanEqual(dest_coords, imageSize(output_img)))) {
)" R"(            continue;
)" R"(        }
)" R"(        imageStore(output_img, dest_coords, pixel);
)" R"(    }
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

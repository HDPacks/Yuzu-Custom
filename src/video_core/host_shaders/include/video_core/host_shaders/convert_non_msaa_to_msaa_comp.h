// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_NON_MSAA_TO_MSAA_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(layout (local_size_x = 8, local_size_y = 8, local_size_z = 1) in;
)" R"(
)" R"(layout (binding = 0, rgba8) uniform readonly restrict image2DArray img_in;
)" R"(layout (binding = 1, rgba8) uniform writeonly restrict image2DMSArray output_msaa;
)" R"(
)" R"(void main() {
)" R"(    const ivec3 coords = ivec3(gl_GlobalInvocationID);
)" R"(    if (any(greaterThanEqual(coords, imageSize(output_msaa)))) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    // TODO: Specialization constants for num_samples?
)" R"(    const int num_samples = imageSamples(output_msaa);
)" R"(    const ivec3 msaa_size = imageSize(output_msaa);
)" R"(    const ivec3 out_size = imageSize(img_in);
)" R"(    const ivec3 scale = out_size / msaa_size;
)" R"(    for (int curr_sample = 0; curr_sample < num_samples; ++curr_sample) {
)" R"(        const int single_sample_x = scale.x * coords.x + (curr_sample & 1);
)" R"(        const int single_sample_y = scale.y * coords.y + ((curr_sample / 2) & 1);
)" R"(        const ivec3 single_coords = ivec3(single_sample_x, single_sample_y, coords.z);
)" R"(
)" R"(        if (any(greaterThanEqual(single_coords, imageSize(img_in)))) {
)" R"(            continue;
)" R"(        }
)" R"(        const vec4 pixel = imageLoad(img_in, single_coords);
)" R"(        imageStore(output_msaa, coords, curr_sample, pixel);
)" R"(    }
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

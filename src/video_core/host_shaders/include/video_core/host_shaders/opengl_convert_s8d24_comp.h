// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_CONVERT_S8D24_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2022 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 430 core
)" R"(
)" R"(layout(local_size_x = 16, local_size_y = 8) in;
)" R"(
)" R"(layout(binding = 0, rgba8ui) restrict uniform uimage2D destination;
)" R"(layout(location = 0) uniform uvec3 size;
)" R"(
)" R"(void main() {
)" R"(    if (any(greaterThanEqual(gl_GlobalInvocationID, size))) {
)" R"(        return;
)" R"(    }
)" R"(    uvec4 components = imageLoad(destination, ivec2(gl_GlobalInvocationID.xy));
)" R"(    imageStore(destination, ivec2(gl_GlobalInvocationID.xy), components.wxyz);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

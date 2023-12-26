// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view RESOLVE_CONDITIONAL_RENDER_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(local_size_x = 1) in;
)" R"(
)" R"(layout(std430, binding = 0) buffer Query {
)" R"(    uvec2 initial;
)" R"(    uvec2 unknown;
)" R"(    uvec2 current;
)" R"(};
)" R"(
)" R"(layout(std430, binding = 1) buffer Result {
)" R"(    uint result;
)" R"(};
)" R"(
)" R"(void main() {
)" R"(    result = all(equal(initial, current)) ? 1 : 0;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

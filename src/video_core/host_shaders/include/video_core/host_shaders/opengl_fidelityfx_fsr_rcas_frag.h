// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_FIDELITYFX_FSR_RCAS_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 460 core
)" R"(#extension GL_GOOGLE_include_directive : enable
)" R"(
)" R"(#define USE_RCAS 1
)" R"(
)" R"(#include "opengl_fidelityfx_fsr.frag"
)" R"(
)" 
};

} // namespace HostShaders

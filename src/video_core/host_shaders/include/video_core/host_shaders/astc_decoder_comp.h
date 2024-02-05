// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view ASTC_DECODER_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(#ifdef VULKAN
)" R"(
)" R"(#define BEGIN_PUSH_CONSTANTS layout(push_constant) uniform PushConstants {
)" R"(#define END_PUSH_CONSTANTS };
)" R"(#define UNIFORM(n)
)" R"(#define BINDING_INPUT_BUFFER 0
)" R"(#define BINDING_OUTPUT_IMAGE 1
)" R"(
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(
)" R"(#define BEGIN_PUSH_CONSTANTS
)" R"(#define END_PUSH_CONSTANTS
)" R"(#define UNIFORM(n) layout(location = n) uniform
)" R"(#define BINDING_INPUT_BUFFER 0
)" R"(#define BINDING_OUTPUT_IMAGE 0
)" R"(
)" R"(#endif
)" R"(
)" R"(layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;
)" R"(
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(UNIFORM(1) uvec2 block_dims;
)" R"(UNIFORM(2) uint layer_stride;
)" R"(UNIFORM(3) uint block_size;
)" R"(UNIFORM(4) uint x_shift;
)" R"(UNIFORM(5) uint block_height;
)" R"(UNIFORM(6) uint block_height_mask;
)" R"(END_PUSH_CONSTANTS
)" R"(
)" R"(struct EncodingData {
)" R"(    uint data;
)" R"(};
)" R"(
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) readonly restrict buffer InputBufferU32 {
)" R"(    uvec4 astc_data[];
)" R"(};
)" R"(
)" R"(layout(binding = BINDING_OUTPUT_IMAGE, rgba8) uniform writeonly restrict image2DArray dest_image;
)" R"(
)" R"(const uint GOB_SIZE_X_SHIFT = 6;
)" R"(const uint GOB_SIZE_Y_SHIFT = 3;
)" R"(const uint GOB_SIZE_SHIFT = GOB_SIZE_X_SHIFT + GOB_SIZE_Y_SHIFT;
)" R"(
)" R"(const uint BYTES_PER_BLOCK_LOG2 = 4;
)" R"(
)" R"(const uint JUST_BITS = 0u;
)" R"(const uint QUINT = 1u;
)" R"(const uint TRIT = 2u;
)" R"(
)" R"(// ASTC Encodings data, sorted in ascending order based on their BitLength value
)" R"(// (see GetBitLength() function)
)" R"(const uint encoding_values[22] = uint[](
)" R"(    (JUST_BITS), (JUST_BITS | (1u << 8u)), (TRIT), (JUST_BITS | (2u << 8u)),
)" R"(    (QUINT), (TRIT | (1u << 8u)), (JUST_BITS | (3u << 8u)), (QUINT | (1u << 8u)),
)" R"(    (TRIT | (2u << 8u)), (JUST_BITS | (4u << 8u)), (QUINT | (2u << 8u)), (TRIT | (3u << 8u)),
)" R"(    (JUST_BITS | (5u << 8u)), (QUINT | (3u << 8u)), (TRIT | (4u << 8u)), (JUST_BITS | (6u << 8u)),
)" R"(    (QUINT | (4u << 8u)), (TRIT | (5u << 8u)), (JUST_BITS | (7u << 8u)), (QUINT | (5u << 8u)),
)" R"(    (TRIT | (6u << 8u)), (JUST_BITS | (8u << 8u)));
)" R"(
)" R"(// Input ASTC texture globals
)" R"(int total_bitsread = 0;
)" R"(uvec4 local_buff;
)" R"(
)" R"(// Color data globals
)" R"(uvec4 color_endpoint_data;
)" R"(int color_bitsread = 0;
)" R"(
)" R"(// Global "vector" to be pushed into when decoding
)" R"(// At most will require BLOCK_WIDTH x BLOCK_HEIGHT in single plane mode
)" R"(// At most will require BLOCK_WIDTH x BLOCK_HEIGHT x 2 in dual plane mode
)" R"(// So the maximum would be 144 (12 x 12) elements, x 2 for two planes
)" R"(#define DIVCEIL(number, divisor) (number + divisor - 1) / divisor
)" R"(#define ARRAY_NUM_ELEMENTS 144
)" R"(#define VECTOR_ARRAY_SIZE DIVCEIL(ARRAY_NUM_ELEMENTS * 2, 4)
)" R"(uint result_vector[ARRAY_NUM_ELEMENTS * 2];
)" R"(
)" R"(int result_index = 0;
)" R"(uint result_vector_max_index;
)" R"(bool result_limit_reached = false;
)" R"(
)" R"(// EncodingData helpers
)" R"(uint Encoding(EncodingData val) {
)" R"(    return bitfieldExtract(val.data, 0, 8);
)" R"(}
)" R"(uint NumBits(EncodingData val) {
)" R"(    return bitfieldExtract(val.data, 8, 8);
)" R"(}
)" R"(uint BitValue(EncodingData val) {
)" R"(    return bitfieldExtract(val.data, 16, 8);
)" R"(}
)" R"(uint QuintTritValue(EncodingData val) {
)" R"(    return bitfieldExtract(val.data, 24, 8);
)" R"(}
)" R"(
)" R"(void Encoding(inout EncodingData val, uint v) {
)" R"(    val.data = bitfieldInsert(val.data, v, 0, 8);
)" R"(}
)" R"(void NumBits(inout EncodingData val, uint v) {
)" R"(    val.data = bitfieldInsert(val.data, v, 8, 8);
)" R"(}
)" R"(void BitValue(inout EncodingData val, uint v) {
)" R"(    val.data = bitfieldInsert(val.data, v, 16, 8);
)" R"(}
)" R"(void QuintTritValue(inout EncodingData val, uint v) {
)" R"(    val.data = bitfieldInsert(val.data, v, 24, 8);
)" R"(}
)" R"(
)" R"(EncodingData CreateEncodingData(uint encoding, uint num_bits, uint bit_val, uint quint_trit_val) {
)" R"(    return EncodingData(((encoding) << 0u) | ((num_bits) << 8u) |
)" R"(                        ((bit_val) << 16u) | ((quint_trit_val) << 24u));
)" R"(}
)" R"(
)" R"(
)" R"(void ResultEmplaceBack(EncodingData val) {
)" R"(    if (result_index >= result_vector_max_index) {
)" R"(        // Alert callers to avoid decoding more than needed by this phase
)" R"(        result_limit_reached = true;
)" R"(        return;
)" R"(    }
)" R"(    result_vector[result_index] = val.data;
)" R"(    ++result_index;
)" R"(}
)" R"(
)" R"(uvec4 ReplicateByteTo16(uvec4 value) {
)" R"(    return value * 0x101;
)" R"(}
)" R"(
)" R"(uint ReplicateBitTo7(uint value) {
)" R"(    return value * 127;
)" R"(}
)" R"(
)" R"(uint ReplicateBitTo9(uint value) {
)" R"(    return value * 511;
)" R"(}
)" R"(
)" R"(uint ReplicateBits(uint value, uint num_bits, uint to_bit) {
)" R"(    if (value == 0 || num_bits == 0) {
)" R"(        return 0;
)" R"(    }
)" R"(    if (num_bits >= to_bit) {
)" R"(        return value;
)" R"(    }
)" R"(    const uint v = value & uint((1 << num_bits) - 1);
)" R"(    uint res = v;
)" R"(    uint reslen = num_bits;
)" R"(    while (reslen < to_bit) {
)" R"(        const uint num_dst_bits_to_shift_up = min(num_bits, to_bit - reslen);
)" R"(        const uint num_src_bits_to_shift_down = num_bits - num_dst_bits_to_shift_up;
)" R"(
)" R"(        res <<= num_dst_bits_to_shift_up;
)" R"(        res |= (v >> num_src_bits_to_shift_down);
)" R"(        reslen += num_bits;
)" R"(    }
)" R"(    return res;
)" R"(}
)" R"(
)" R"(uint FastReplicateTo8(uint value, uint num_bits) {
)" R"(    return ReplicateBits(value, num_bits, 8);
)" R"(}
)" R"(
)" R"(uint FastReplicateTo6(uint value, uint num_bits) {
)" R"(    return ReplicateBits(value, num_bits, 6);
)" R"(}
)" R"(
)" R"(uint Div3Floor(uint v) {
)" R"(    return (v * 0x5556) >> 16;
)" R"(}
)" R"(
)" R"(uint Div3Ceil(uint v) {
)" R"(    return Div3Floor(v + 2);
)" R"(}
)" R"(
)" R"(uint Div5Floor(uint v) {
)" R"(    return (v * 0x3334) >> 16;
)" R"(}
)" R"(
)" R"(uint Div5Ceil(uint v) {
)" R"(    return Div5Floor(v + 4);
)" R"(}
)" R"(
)" R"(uint Hash52(uint p) {
)" R"(    p ^= p >> 15;
)" R"(    p -= p << 17;
)" R"(    p += p << 7;
)" R"(    p += p << 4;
)" R"(    p ^= p >> 5;
)" R"(    p += p << 16;
)" R"(    p ^= p >> 7;
)" R"(    p ^= p >> 3;
)" R"(    p ^= p << 6;
)" R"(    p ^= p >> 17;
)" R"(    return p;
)" R"(}
)" R"(
)" R"(uint Select2DPartition(uint seed, uint x, uint y, uint partition_count) {
)" R"(    if ((block_dims.y * block_dims.x) < 32) {
)" R"(        x <<= 1;
)" R"(        y <<= 1;
)" R"(    }
)" R"(
)" R"(    seed += (partition_count - 1) * 1024;
)" R"(
)" R"(    const uint rnum = Hash52(uint(seed));
)" R"(    uint seed1 = uint(rnum & 0xF);
)" R"(    uint seed2 = uint((rnum >> 4) & 0xF);
)" R"(    uint seed3 = uint((rnum >> 8) & 0xF);
)" R"(    uint seed4 = uint((rnum >> 12) & 0xF);
)" R"(    uint seed5 = uint((rnum >> 16) & 0xF);
)" R"(    uint seed6 = uint((rnum >> 20) & 0xF);
)" R"(    uint seed7 = uint((rnum >> 24) & 0xF);
)" R"(    uint seed8 = uint((rnum >> 28) & 0xF);
)" R"(
)" R"(    seed1 = (seed1 * seed1);
)" R"(    seed2 = (seed2 * seed2);
)" R"(    seed3 = (seed3 * seed3);
)" R"(    seed4 = (seed4 * seed4);
)" R"(    seed5 = (seed5 * seed5);
)" R"(    seed6 = (seed6 * seed6);
)" R"(    seed7 = (seed7 * seed7);
)" R"(    seed8 = (seed8 * seed8);
)" R"(
)" R"(    uint sh1, sh2;
)" R"(    if ((seed & 1) > 0) {
)" R"(        sh1 = (seed & 2) > 0 ? 4 : 5;
)" R"(        sh2 = (partition_count == 3) ? 6 : 5;
)" R"(    } else {
)" R"(        sh1 = (partition_count == 3) ? 6 : 5;
)" R"(        sh2 = (seed & 2) > 0 ? 4 : 5;
)" R"(    }
)" R"(    seed1 >>= sh1;
)" R"(    seed2 >>= sh2;
)" R"(    seed3 >>= sh1;
)" R"(    seed4 >>= sh2;
)" R"(    seed5 >>= sh1;
)" R"(    seed6 >>= sh2;
)" R"(    seed7 >>= sh1;
)" R"(    seed8 >>= sh2;
)" R"(
)" R"(    uint a = seed1 * x + seed2 * y + (rnum >> 14);
)" R"(    uint b = seed3 * x + seed4 * y + (rnum >> 10);
)" R"(    uint c = seed5 * x + seed6 * y + (rnum >> 6);
)" R"(    uint d = seed7 * x + seed8 * y + (rnum >> 2);
)" R"(
)" R"(    a &= 0x3F;
)" R"(    b &= 0x3F;
)" R"(    c &= 0x3F;
)" R"(    d &= 0x3F;
)" R"(
)" R"(    if (partition_count < 4) {
)" R"(        d = 0;
)" R"(    }
)" R"(    if (partition_count < 3) {
)" R"(        c = 0;
)" R"(    }
)" R"(
)" R"(    if (a >= b && a >= c && a >= d) {
)" R"(        return 0;
)" R"(    } else if (b >= c && b >= d) {
)" R"(        return 1;
)" R"(    } else if (c >= d) {
)" R"(        return 2;
)" R"(    } else {
)" R"(        return 3;
)" R"(    }
)" R"(}
)" R"(
)" R"(uint ExtractBits(uvec4 payload, int offset, int bits) {
)" R"(    if (bits <= 0) {
)" R"(        return 0;
)" R"(    }
)" R"(    if (bits > 32) {
)" R"(        return 0;
)" R"(    }
)" R"(    const int last_offset = offset + bits - 1;
)" R"(    const int shifted_offset = offset >> 5;
)" R"(    if ((last_offset >> 5) == shifted_offset) {
)" R"(        return bitfieldExtract(payload[shifted_offset], offset & 31, bits);
)" R"(    }
)" R"(    const int first_bits = 32 - (offset & 31);
)" R"(    const int result_first = int(bitfieldExtract(payload[shifted_offset], offset & 31, first_bits));
)" R"(    const int result_second = int(bitfieldExtract(payload[shifted_offset + 1], 0, bits - first_bits));
)" R"(    return result_first | (result_second << first_bits);
)" R"(}
)" R"(
)" R"(uint StreamBits(uint num_bits) {
)" R"(    const int int_bits = int(num_bits);
)" R"(    const uint ret = ExtractBits(local_buff, total_bitsread, int_bits);
)" R"(    total_bitsread += int_bits;
)" R"(    return ret;
)" R"(}
)" R"(
)" R"(void SkipBits(uint num_bits) {
)" R"(    const int int_bits = int(num_bits);
)" R"(    total_bitsread += int_bits;
)" R"(}
)" R"(
)" R"(uint StreamColorBits(uint num_bits) {
)" R"(    const int int_bits = int(num_bits);
)" R"(    const uint ret = ExtractBits(color_endpoint_data, color_bitsread, int_bits);
)" R"(    color_bitsread += int_bits;
)" R"(    return ret;
)" R"(}
)" R"(
)" R"(EncodingData GetEncodingFromVector(uint index) {
)" R"(    const uint data = result_vector[index];
)" R"(    return EncodingData(data);
)" R"(}
)" R"(
)" R"(// Returns the number of bits required to encode n_vals values.
)" R"(uint GetBitLength(uint n_vals, uint encoding_index) {
)" R"(    const EncodingData encoding_value = EncodingData(encoding_values[encoding_index]);
)" R"(    const uint encoding = Encoding(encoding_value);
)" R"(    uint total_bits = NumBits(encoding_value) * n_vals;
)" R"(    if (encoding == TRIT) {
)" R"(        total_bits += Div5Ceil(n_vals * 8);
)" R"(    } else if (encoding == QUINT) {
)" R"(        total_bits += Div3Ceil(n_vals * 7);
)" R"(    }
)" R"(    return total_bits;
)" R"(}
)" R"(
)" R"(uint GetNumWeightValues(uvec2 size, bool dual_plane) {
)" R"(    uint n_vals = size.x * size.y;
)" R"(    if (dual_plane) {
)" R"(        n_vals *= 2;
)" R"(    }
)" R"(    return n_vals;
)" R"(}
)" R"(
)" R"(uint GetPackedBitSize(uvec2 size, bool dual_plane, uint max_weight) {
)" R"(    const uint n_vals = GetNumWeightValues(size, dual_plane);
)" R"(    return GetBitLength(n_vals, max_weight);
)" R"(}
)" R"(
)" R"(uint BitsBracket(uint bits, uint pos) {
)" R"(    return ((bits >> pos) & 1);
)" R"(}
)" R"(
)" R"(uint BitsOp(uint bits, uint start, uint end) {
)" R"(    const uint mask = (1 << (end - start + 1)) - 1;
)" R"(    return ((bits >> start) & mask);
)" R"(}
)" R"(
)" R"(void DecodeQuintBlock(uint num_bits) {
)" R"(    uvec3 m;
)" R"(    uvec4 qQ;
)" R"(    m[0] = StreamColorBits(num_bits);
)" R"(    qQ.w = StreamColorBits(3);
)" R"(    m[1] = StreamColorBits(num_bits);
)" R"(    qQ.w |= StreamColorBits(2) << 3;
)" R"(    m[2] = StreamColorBits(num_bits);
)" R"(    qQ.w |= StreamColorBits(2) << 5;
)" R"(    if (BitsOp(qQ.w, 1, 2) == 3 && BitsOp(qQ.w, 5, 6) == 0) {
)" R"(        qQ.x = 4;
)" R"(        qQ.y = 4;
)" R"(        qQ.z = (BitsBracket(qQ.w, 0) << 2) | ((BitsBracket(qQ.w, 4) & ~BitsBracket(qQ.w, 0)) << 1) |
)" R"(              (BitsBracket(qQ.w, 3) & ~BitsBracket(qQ.w, 0));
)" R"(    } else {
)" R"(        uint C = 0;
)" R"(        if (BitsOp(qQ.w, 1, 2) == 3) {
)" R"(            qQ.z = 4;
)" R"(            C = (BitsOp(qQ.w, 3, 4) << 3) | ((~BitsOp(qQ.w, 5, 6) & 3) << 1) | BitsBracket(qQ.w, 0);
)" R"(        } else {
)" R"(            qQ.z = BitsOp(qQ.w, 5, 6);
)" R"(            C = BitsOp(qQ.w, 0, 4);
)" R"(        }
)" R"(        if (BitsOp(C, 0, 2) == 5) {
)" R"(            qQ.y = 4;
)" R"(            qQ.x = BitsOp(C, 3, 4);
)" R"(        } else {
)" R"(            qQ.y = BitsOp(C, 3, 4);
)" R"(            qQ.x = BitsOp(C, 0, 2);
)" R"(        }
)" R"(    }
)" R"(    for (uint i = 0; i < 3; i++) {
)" R"(        const EncodingData val = CreateEncodingData(QUINT, num_bits, m[i], qQ[i]);
)" R"(        ResultEmplaceBack(val);
)" R"(    }
)" R"(}
)" R"(
)" R"(void DecodeTritBlock(uint num_bits) {
)" R"(    uvec4 m;
)" R"(    uvec4 t;
)" R"(    uvec3 Tm5t5;
)" R"(    m[0] = StreamColorBits(num_bits);
)" R"(    Tm5t5.x = StreamColorBits(2);
)" R"(    m[1] = StreamColorBits(num_bits);
)" R"(    Tm5t5.x |= StreamColorBits(2) << 2;
)" R"(    m[2] = StreamColorBits(num_bits);
)" R"(    Tm5t5.x |= StreamColorBits(1) << 4;
)" R"(    m[3] = StreamColorBits(num_bits);
)" R"(    Tm5t5.x |= StreamColorBits(2) << 5;
)" R"(    Tm5t5.y = StreamColorBits(num_bits);
)" R"(    Tm5t5.x |= StreamColorBits(1) << 7;
)" R"(    uint C = 0;
)" R"(    if (BitsOp(Tm5t5.x, 2, 4) == 7) {
)" R"(        C = (BitsOp(Tm5t5.x, 5, 7) << 2) | BitsOp(Tm5t5.x, 0, 1);
)" R"(        Tm5t5.z = 2;
)" R"(        t[3] = 2;
)" R"(    } else {
)" R"(        C = BitsOp(Tm5t5.x, 0, 4);
)" R"(        if (BitsOp(Tm5t5.x, 5, 6) == 3) {
)" R"(            Tm5t5.z = 2;
)" R"(            t[3] = BitsBracket(Tm5t5.x, 7);
)" R"(        } else {
)" R"(            Tm5t5.z = BitsBracket(Tm5t5.x, 7);
)" R"(            t[3] = BitsOp(Tm5t5.x, 5, 6);
)" R"(        }
)" R"(    }
)" R"(    if (BitsOp(C, 0, 1) == 3) {
)" R"(        t[2] = 2;
)" R"(        t[1] = BitsBracket(C, 4);
)" R"(        t[0] = (BitsBracket(C, 3) << 1) | (BitsBracket(C, 2) & ~BitsBracket(C, 3));
)" R"(    } else if (BitsOp(C, 2, 3) == 3) {
)" R"(        t[2] = 2;
)" R"(        t[1] = 2;
)" R"(        t[0] = BitsOp(C, 0, 1);
)" R"(    } else {
)" R"(        t[2] = BitsBracket(C, 4);
)" R"(        t[1] = BitsOp(C, 2, 3);
)" R"(        t[0] = (BitsBracket(C, 1) << 1) | (BitsBracket(C, 0) & ~BitsBracket(C, 1));
)" R"(    }
)" R"(    for (uint i = 0; i < 4; i++) {
)" R"(        const EncodingData val = CreateEncodingData(TRIT, num_bits, m[i], t[i]);
)" R"(        ResultEmplaceBack(val);
)" R"(    }
)" R"(    const EncodingData val = CreateEncodingData(TRIT, num_bits, Tm5t5.y, Tm5t5.z);
)" R"(    ResultEmplaceBack(val);
)" R"(}
)" R"(
)" R"(void DecodeIntegerSequence(uint max_range, uint num_values) {
)" R"(    EncodingData val = EncodingData(encoding_values[max_range]);
)" R"(    const uint encoding = Encoding(val);
)" R"(    const uint num_bits = NumBits(val);
)" R"(    uint vals_decoded = 0;
)" R"(    while (vals_decoded < num_values && !result_limit_reached) {
)" R"(        switch (encoding) {
)" R"(        case QUINT:
)" R"(            DecodeQuintBlock(num_bits);
)" R"(            vals_decoded += 3;
)" R"(            break;
)" R"(        case TRIT:
)" R"(            DecodeTritBlock(num_bits);
)" R"(            vals_decoded += 5;
)" R"(            break;
)" R"(        case JUST_BITS:
)" R"(            BitValue(val, StreamColorBits(num_bits));
)" R"(            ResultEmplaceBack(val);
)" R"(            vals_decoded++;
)" R"(            break;
)" R"(        }
)" R"(    }
)" R"(}
)" R"(
)" R"(void DecodeColorValues(uvec4 modes, uint num_partitions, uint color_data_bits, out uint color_values[32]) {
)" R"(    uint num_values = 0;
)" R"(    for (uint i = 0; i < num_partitions; i++) {
)" R"(        num_values += ((modes[i] >> 2) + 1) << 1;
)" R"(    }
)" R"(    // Find the largest encoding that's within color_data_bits
)" R"(    // TODO(ameerj): profile with binary search
)" R"(    int range = 0;
)" R"(    while (++range < encoding_values.length()) {
)" R"(        const uint bit_length = GetBitLength(num_values, range);
)" R"(        if (bit_length > color_data_bits) {
)" R"(            break;
)" R"(        }
)" R"(    }
)" R"(    DecodeIntegerSequence(range - 1, num_values);
)" R"(    uint out_index = 0;
)" R"(    for (int itr = 0; itr < result_index; ++itr) {
)" R"(        if (out_index >= num_values) {
)" R"(            break;
)" R"(        }
)" R"(        const EncodingData val = GetEncodingFromVector(itr);
)" R"(        const uint encoding = Encoding(val);
)" R"(        const uint bitlen = NumBits(val);
)" R"(        const uint bitval = BitValue(val);
)" R"(        uint A = 0, B = 0, C = 0, D = 0;
)" R"(        A = ReplicateBitTo9((bitval & 1));
)" R"(        switch (encoding) {
)" R"(        case JUST_BITS:
)" R"(            color_values[++out_index] = FastReplicateTo8(bitval, bitlen);
)" R"(            break;
)" R"(        case TRIT: {
)" R"(            D = QuintTritValue(val);
)" R"(            switch (bitlen) {
)" R"(            case 1:
)" R"(                C = 204;
)" R"(                break;
)" R"(            case 2: {
)" R"(                C = 93;
)" R"(                const uint b = (bitval >> 1) & 1;
)" R"(                B = (b << 8) | (b << 4) | (b << 2) | (b << 1);
)" R"(                break;
)" R"(            }
)" R"(            case 3: {
)" R"(                C = 44;
)" R"(                const uint cb = (bitval >> 1) & 3;
)" R"(                B = (cb << 7) | (cb << 2) | cb;
)" R"(                break;
)" R"(            }
)" R"(            case 4: {
)" R"(                C = 22;
)" R"(                const uint dcb = (bitval >> 1) & 7;
)" R"(                B = (dcb << 6) | dcb;
)" R"(                break;
)" R"(            }
)" R"(            case 5: {
)" R"(                C = 11;
)" R"(                const uint edcb = (bitval >> 1) & 0xF;
)" R"(                B = (edcb << 5) | (edcb >> 2);
)" R"(                break;
)" R"(            }
)" R"(            case 6: {
)" R"(                C = 5;
)" R"(                const uint fedcb = (bitval >> 1) & 0x1F;
)" R"(                B = (fedcb << 4) | (fedcb >> 4);
)" R"(                break;
)" R"(            }
)" R"(            }
)" R"(            break;
)" R"(        }
)" R"(        case QUINT: {
)" R"(            D = QuintTritValue(val);
)" R"(            switch (bitlen) {
)" R"(            case 1:
)" R"(                C = 113;
)" R"(                break;
)" R"(            case 2: {
)" R"(                C = 54;
)" R"(                const uint b = (bitval >> 1) & 1;
)" R"(                B = (b << 8) | (b << 3) | (b << 2);
)" R"(                break;
)" R"(            }
)" R"(            case 3: {
)" R"(                C = 26;
)" R"(                const uint cb = (bitval >> 1) & 3;
)" R"(                B = (cb << 7) | (cb << 1) | (cb >> 1);
)" R"(                break;
)" R"(            }
)" R"(            case 4: {
)" R"(                C = 13;
)" R"(                const uint dcb = (bitval >> 1) & 7;
)" R"(                B = (dcb << 6) | (dcb >> 1);
)" R"(                break;
)" R"(            }
)" R"(            case 5: {
)" R"(                C = 6;
)" R"(                const uint edcb = (bitval >> 1) & 0xF;
)" R"(                B = (edcb << 5) | (edcb >> 3);
)" R"(                break;
)" R"(            }
)" R"(            }
)" R"(            break;
)" R"(        }
)" R"(        }
)" R"(        if (encoding != JUST_BITS) {
)" R"(            uint T = (D * C) + B;
)" R"(            T ^= A;
)" R"(            T = (A & 0x80) | (T >> 2);
)" R"(            color_values[++out_index] = T;
)" R"(        }
)" R"(    }
)" R"(}
)" R"(
)" R"(ivec2 BitTransferSigned(int a, int b) {
)" R"(    ivec2 transferred;
)" R"(    transferred.y = b >> 1;
)" R"(    transferred.y |= a & 0x80;
)" R"(    transferred.x = a >> 1;
)" R"(    transferred.x &= 0x3F;
)" R"(    if ((transferred.x & 0x20) > 0) {
)" R"(        transferred.x -= 0x40;
)" R"(    }
)" R"(    return transferred;
)" R"(}
)" R"(
)" R"(uvec4 ClampByte(ivec4 color) {
)" R"(    return uvec4(clamp(color, 0, 255));
)" R"(}
)" R"(
)" R"(ivec4 BlueContract(int a, int r, int g, int b) {
)" R"(    return ivec4(a, (r + b) >> 1, (g + b) >> 1, b);
)" R"(}
)" R"(
)" R"(void ComputeEndpoints(out uvec4 ep1, out uvec4 ep2, uint color_endpoint_mode, uint color_values[32],
)" R"(                      inout uint colvals_index) {
)" R"(#define READ_UINT_VALUES(N)                                                                        ;    uvec4 V[2];                                                                                    ;    for (uint i = 0; i < N; i++) {                                                                 ;        V[i / 4][i % 4] = color_values[++colvals_index];                      ;    }
)" R"(#define READ_INT_VALUES(N)                                                                         ;    ivec4 V[2];                                                                                    ;    for (uint i = 0; i < N; i++) {                                                                 ;        V[i / 4][i % 4] = int(color_values[++colvals_index]);                      ;    }
)" R"(
)" R"(    switch (color_endpoint_mode) {
)" R"(    case 0: {
)" R"(        READ_UINT_VALUES(2)
)" R"(        ep1 = uvec4(0xFF, V[0].x, V[0].x, V[0].x);
)" R"(        ep2 = uvec4(0xFF, V[0].y, V[0].y, V[0].y);
)" R"(        break;
)" R"(    }
)" R"(    case 1: {
)" R"(        READ_UINT_VALUES(2)
)" R"(        const uint L0 = (V[0].x >> 2) | (V[0].y & 0xC0);
)" R"(        const uint L1 = min(L0 + (V[0].y & 0x3F), 0xFFU);
)" R"(        ep1 = uvec4(0xFF, L0, L0, L0);
)" R"(        ep2 = uvec4(0xFF, L1, L1, L1);
)" R"(        break;
)" R"(    }
)" R"(    case 4: {
)" R"(        READ_UINT_VALUES(4)
)" R"(        ep1 = uvec4(V[0].z, V[0].x, V[0].x, V[0].x);
)" R"(        ep2 = uvec4(V[0].w, V[0].y, V[0].y, V[0].y);
)" R"(        break;
)" R"(    }
)" R"(    case 5: {
)" R"(        READ_INT_VALUES(4)
)" R"(        ivec2 transferred = BitTransferSigned(V[0].y, V[0].x);
)" R"(        V[0].y = transferred.x;
)" R"(        V[0].x = transferred.y;
)" R"(        transferred = BitTransferSigned(V[0].w, V[0].z);
)" R"(        V[0].w = transferred.x;
)" R"(        V[0].z = transferred.y;
)" R"(        ep1 = ClampByte(ivec4(V[0].z, V[0].x, V[0].x, V[0].x));
)" R"(        ep2 = ClampByte(ivec4(V[0].z + V[0].w, V[0].x + V[0].y, V[0].x + V[0].y, V[0].x + V[0].y));
)" R"(        break;
)" R"(    }
)" R"(    case 6: {
)" R"(        READ_UINT_VALUES(4)
)" R"(        ep1 = uvec4(0xFF, (V[0].x * V[0].w) >> 8, (V[0].y * V[0].w) >> 8, (V[0].z * V[0].w) >> 8);
)" R"(        ep2 = uvec4(0xFF, V[0].x, V[0].y, V[0].z);
)" R"(        break;
)" R"(    }
)" R"(    case 8: {
)" R"(        READ_UINT_VALUES(6)
)" R"(        if ((V[0].y + V[0].w + V[1].y) >= (V[0].x + V[0].z + V[1].x)) {
)" R"(            ep1 = uvec4(0xFF, V[0].x, V[0].z, V[1].x);
)" R"(            ep2 = uvec4(0xFF, V[0].y, V[0].w, V[1].y);
)" R"(        } else {
)" R"(            ep1 = uvec4(BlueContract(0xFF, int(V[0].y), int(V[0].w), int(V[1].y)));
)" R"(            ep2 = uvec4(BlueContract(0xFF, int(V[0].x), int(V[0].z), int(V[1].x)));
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    case 9: {
)" R"(        READ_INT_VALUES(6)
)" R"(        ivec2 transferred = BitTransferSigned(V[0].y, V[0].x);
)" R"(        V[0].y = transferred.x;
)" R"(        V[0].x = transferred.y;
)" R"(        transferred = BitTransferSigned(V[0].w, V[0].z);
)" R"(        V[0].w = transferred.x;
)" R"(        V[0].z = transferred.y;
)" R"(        transferred = BitTransferSigned(V[1].y, V[1].x);
)" R"(        V[1].y = transferred.x;
)" R"(        V[1].x = transferred.y;
)" R"(        if ((V[0].y + V[0].w + V[1].y) >= 0) {
)" R"(            ep1 = ClampByte(ivec4(0xFF, V[0].x, V[0].z, V[1].x));
)" R"(            ep2 = ClampByte(ivec4(0xFF, V[0].x + V[0].y, V[0].z + V[0].w, V[1].x + V[1].y));
)" R"(        } else {
)" R"(            ep1 = ClampByte(BlueContract(0xFF, V[0].x + V[0].y, V[0].z + V[0].w, V[1].x + V[1].y));
)" R"(            ep2 = ClampByte(BlueContract(0xFF, V[0].x, V[0].z, V[1].x));
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    case 10: {
)" R"(        READ_UINT_VALUES(6)
)" R"(        ep1 = uvec4(V[1].x, (V[0].x * V[0].w) >> 8, (V[0].y * V[0].w) >> 8, (V[0].z * V[0].w) >> 8);
)" R"(        ep2 = uvec4(V[1].y, V[0].x, V[0].y, V[0].z);
)" R"(        break;
)" R"(    }
)" R"(    case 12: {
)" R"(        READ_UINT_VALUES(8)
)" R"(        if ((V[0].y + V[0].w + V[1].y) >= (V[0].x + V[0].z + V[1].x)) {
)" R"(            ep1 = uvec4(V[1].z, V[0].x, V[0].z, V[1].x);
)" R"(            ep2 = uvec4(V[1].w, V[0].y, V[0].w, V[1].y);
)" R"(        } else {
)" R"(            ep1 = uvec4(BlueContract(int(V[1].w), int(V[0].y), int(V[0].w), int(V[1].y)));
)" R"(            ep2 = uvec4(BlueContract(int(V[1].z), int(V[0].x), int(V[0].z), int(V[1].x)));
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    case 13: {
)" R"(        READ_INT_VALUES(8)
)" R"(        ivec2 transferred = BitTransferSigned(V[0].y, V[0].x);
)" R"(        V[0].y = transferred.x;
)" R"(        V[0].x = transferred.y;
)" R"(        transferred = BitTransferSigned(V[0].w, V[0].z);
)" R"(        V[0].w = transferred.x;
)" R"(        V[0].z = transferred.y;
)" R"(
)" R"(        transferred = BitTransferSigned(V[1].y, V[1].x);
)" R"(        V[1].y = transferred.x;
)" R"(        V[1].x = transferred.y;
)" R"(
)" R"(        transferred = BitTransferSigned(V[1].w, V[1].z);
)" R"(        V[1].w = transferred.x;
)" R"(        V[1].z = transferred.y;
)" R"(
)" R"(        if ((V[0].y + V[0].w + V[1].y) >= 0) {
)" R"(            ep1 = ClampByte(ivec4(V[1].z, V[0].x, V[0].z, V[1].x));
)" R"(            ep2 = ClampByte(ivec4(V[1].w + V[1].z, V[0].x + V[0].y, V[0].z + V[0].w, V[1].x + V[1].y));
)" R"(        } else {
)" R"(            ep1 = ClampByte(BlueContract(V[1].z + V[1].w, V[0].x + V[0].y, V[0].z + V[0].w, V[1].x + V[1].y));
)" R"(            ep2 = ClampByte(BlueContract(V[1].z, V[0].x, V[0].z, V[1].x));
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    default: {
)" R"(        // HDR mode, or more likely a bug computing the color_endpoint_mode
)" R"(        ep1 = uvec4(0xFF, 0xFF, 0, 0);
)" R"(        ep2 = uvec4(0xFF, 0xFF, 0, 0);
)" R"(        break;
)" R"(    }
)" R"(    }
)" R"(#undef READ_UINT_VALUES
)" R"(#undef READ_INT_VALUES
)" R"(}
)" R"(
)" R"(uint UnquantizeTexelWeight(EncodingData val) {
)" R"(    const uint encoding = Encoding(val);
)" R"(    const uint bitlen = NumBits(val);
)" R"(    const uint bitval = BitValue(val);
)" R"(    const uint A = ReplicateBitTo7((bitval & 1));
)" R"(    uint B = 0, C = 0, D = 0;
)" R"(    uint result = 0;
)" R"(    const uint bitlen_0_results[5] = {0, 16, 32, 48, 64};
)" R"(    switch (encoding) {
)" R"(    case JUST_BITS:
)" R"(        return FastReplicateTo6(bitval, bitlen);
)" R"(    case TRIT: {
)" R"(        D = QuintTritValue(val);
)" R"(        switch (bitlen) {
)" R"(        case 0:
)" R"(            return bitlen_0_results[D * 2];
)" R"(        case 1: {
)" R"(            C = 50;
)" R"(            break;
)" R"(        }
)" R"(        case 2: {
)" R"(            C = 23;
)" R"(            const uint b = (bitval >> 1) & 1;
)" R"(            B = (b << 6) | (b << 2) | b;
)" R"(            break;
)" R"(        }
)" R"(        case 3: {
)" R"(            C = 11;
)" R"(            const uint cb = (bitval >> 1) & 3;
)" R"(            B = (cb << 5) | cb;
)" R"(            break;
)" R"(        }
)" R"(        default:
)" R"(            break;
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    case QUINT: {
)" R"(        D = QuintTritValue(val);
)" R"(        switch (bitlen) {
)" R"(        case 0:
)" R"(            return bitlen_0_results[D];
)" R"(        case 1: {
)" R"(            C = 28;
)" R"(            break;
)" R"(        }
)" R"(        case 2: {
)" R"(            C = 13;
)" R"(            const uint b = (bitval >> 1) & 1;
)" R"(            B = (b << 6) | (b << 1);
)" R"(            break;
)" R"(        }
)" R"(        }
)" R"(        break;
)" R"(    }
)" R"(    }
)" R"(    if (encoding != JUST_BITS && bitlen > 0) {
)" R"(        result = D * C + B;
)" R"(        result ^= A;
)" R"(        result = (A & 0x20) | (result >> 2);
)" R"(    }
)" R"(    if (result > 32) {
)" R"(        result += 1;
)" R"(    }
)" R"(    return result;
)" R"(}
)" R"(
)" R"(void UnquantizeTexelWeights(uvec2 size, bool is_dual_plane) {
)" R"(    const uint num_planes = is_dual_plane ? 2 : 1;
)" R"(    const uint area = size.x * size.y;
)" R"(    const uint loop_count = min(result_index, area * num_planes);
)" R"(    for (uint itr = 0; itr < loop_count; ++itr) {
)" R"(        result_vector[itr] =
)" R"(            UnquantizeTexelWeight(GetEncodingFromVector(itr));
)" R"(    }
)" R"(}
)" R"(
)" R"(uint GetUnquantizedTexelWeight(uint offset_base, uint plane, bool is_dual_plane) {
)" R"(    const uint offset = is_dual_plane ? 2 * offset_base + plane : offset_base;
)" R"(    return result_vector[offset];
)" R"(}
)" R"(
)" R"(uvec4 GetUnquantizedWeightVector(uint t, uint s, uvec2 size, uint plane_index, bool is_dual_plane) {
)" R"(    const uint Ds = uint((block_dims.x * 0.5f + 1024) / (block_dims.x - 1));
)" R"(    const uint Dt = uint((block_dims.y * 0.5f + 1024) / (block_dims.y - 1));
)" R"(    const uint area = size.x * size.y;
)" R"(
)" R"(    const uint cs = Ds * s;
)" R"(    const uint ct = Dt * t;
)" R"(    const uint gs = (cs * (size.x - 1) + 32) >> 6;
)" R"(    const uint gt = (ct * (size.y - 1) + 32) >> 6;
)" R"(    const uint js = gs >> 4;
)" R"(    const uint fs = gs & 0xF;
)" R"(    const uint jt = gt >> 4;
)" R"(    const uint ft = gt & 0x0F;
)" R"(    const uint w11 = (fs * ft + 8) >> 4;
)" R"(    const uint w10 = ft - w11;
)" R"(    const uint w01 = fs - w11;
)" R"(    const uint w00 = 16 - fs - ft + w11;
)" R"(    const uvec4 w = uvec4(w00, w01, w10, w11);
)" R"(    const uint v0 = jt * size.x + js;
)" R"(
)" R"(    uvec4 p0 = uvec4(0);
)" R"(    uvec4 p1 = uvec4(0);
)" R"(
)" R"(    if (v0 < area) {
)" R"(        const uint offset_base = v0;
)" R"(        p0.x = GetUnquantizedTexelWeight(offset_base, 0, is_dual_plane);
)" R"(        p1.x = GetUnquantizedTexelWeight(offset_base, 1, is_dual_plane);
)" R"(    }
)" R"(    if ((v0 + 1) < (area)) {
)" R"(        const uint offset_base = v0 + 1;
)" R"(        p0.y = GetUnquantizedTexelWeight(offset_base, 0, is_dual_plane);
)" R"(        p1.y = GetUnquantizedTexelWeight(offset_base, 1, is_dual_plane);
)" R"(    }
)" R"(    if ((v0 + size.x) < (area)) {
)" R"(        const uint offset_base = v0 + size.x;
)" R"(        p0.z = GetUnquantizedTexelWeight(offset_base, 0, is_dual_plane);
)" R"(        p1.z = GetUnquantizedTexelWeight(offset_base, 1, is_dual_plane);
)" R"(    }
)" R"(    if ((v0 + size.x + 1) < (area)) {
)" R"(        const uint offset_base = v0 + size.x + 1;
)" R"(        p0.w = GetUnquantizedTexelWeight(offset_base, 0, is_dual_plane);
)" R"(        p1.w = GetUnquantizedTexelWeight(offset_base, 1, is_dual_plane);
)" R"(    }
)" R"(
)" R"(    const uint primary_weight = (uint(dot(p0, w)) + 8) >> 4;
)" R"(
)" R"(    uvec4 weight_vec = uvec4(primary_weight);
)" R"(
)" R"(    if (is_dual_plane) {
)" R"(        const uint secondary_weight = (uint(dot(p1, w)) + 8) >> 4;
)" R"(        for (uint c = 0; c < 4; c++) {
)" R"(            const bool is_secondary = ((plane_index + 1u) & 3u) == c;
)" R"(            weight_vec[c] = is_secondary ? secondary_weight : primary_weight;
)" R"(        }
)" R"(    }
)" R"(    return weight_vec;
)" R"(}
)" R"(
)" R"(int FindLayout(uint mode) {
)" R"(    if ((mode & 3) != 0) {
)" R"(        if ((mode & 8) != 0) {
)" R"(            if ((mode & 4) != 0) {
)" R"(                if ((mode & 0x100) != 0) {
)" R"(                    return 4;
)" R"(                }
)" R"(                return 3;
)" R"(            }
)" R"(            return 2;
)" R"(        }
)" R"(        if ((mode & 4) != 0) {
)" R"(            return 1;
)" R"(        }
)" R"(        return 0;
)" R"(    }
)" R"(    if ((mode & 0x100) != 0) {
)" R"(        if ((mode & 0x80) != 0) {
)" R"(            if ((mode & 0x20) != 0) {
)" R"(                return 8;
)" R"(            }
)" R"(            return 7;
)" R"(        }
)" R"(        return 9;
)" R"(    }
)" R"(    if ((mode & 0x80) != 0) {
)" R"(        return 6;
)" R"(    }
)" R"(    return 5;
)" R"(}
)" R"(
)" R"(
)" R"(void FillError(ivec3 coord) {
)" R"(    for (uint j = 0; j < block_dims.y; j++) {
)" R"(        for (uint i = 0; i < block_dims.x; i++) {
)" R"(            imageStore(dest_image, coord + ivec3(i, j, 0), vec4(0.0, 0.0, 0.0, 0.0));
)" R"(        }
)" R"(    }
)" R"(}
)" R"(
)" R"(void FillVoidExtentLDR(ivec3 coord) {
)" R"(    SkipBits(52);
)" R"(    const uint r_u = StreamBits(16);
)" R"(    const uint g_u = StreamBits(16);
)" R"(    const uint b_u = StreamBits(16);
)" R"(    const uint a_u = StreamBits(16);
)" R"(    const float a = float(a_u) / 65535.0f;
)" R"(    const float r = float(r_u) / 65535.0f;
)" R"(    const float g = float(g_u) / 65535.0f;
)" R"(    const float b = float(b_u) / 65535.0f;
)" R"(    for (uint j = 0; j < block_dims.y; j++) {
)" R"(        for (uint i = 0; i < block_dims.x; i++) {
)" R"(            imageStore(dest_image, coord + ivec3(i, j, 0), vec4(r, g, b, a));
)" R"(        }
)" R"(    }
)" R"(}
)" R"(
)" R"(bool IsError(uint mode) {
)" R"(    if ((mode & 0x1ff) == 0x1fc) {
)" R"(        if ((mode & 0x200) != 0) {
)" R"(            // params.void_extent_hdr = true;
)" R"(            return true;
)" R"(        }
)" R"(        if ((mode & 0x400) == 0 || StreamBits(1) == 0) {
)" R"(            return true;
)" R"(        }
)" R"(        return false;
)" R"(    }
)" R"(    if ((mode & 0xf) == 0) {
)" R"(        return true;
)" R"(    }
)" R"(    if ((mode & 3) == 0 && (mode & 0x1c0) == 0x1c0) {
)" R"(        return true;
)" R"(    }
)" R"(    return false;
)" R"(}
)" R"(
)" R"(uvec2 DecodeBlockSize(uint mode) {
)" R"(    uint A, B;
)" R"(    switch (FindLayout(mode)) {
)" R"(    case 0:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 7) & 0x3;
)" R"(        return uvec2(B + 4, A + 2);
)" R"(    case 1:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 7) & 0x3;
)" R"(        return uvec2(B + 8, A + 2);
)" R"(    case 2:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 7) & 0x3;
)" R"(        return uvec2(A + 2, B + 8);
)" R"(    case 3:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 7) & 0x1;
)" R"(        return uvec2(A + 2, B + 6);
)" R"(    case 4:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 7) & 0x1;
)" R"(        return uvec2(B + 2, A + 2);
)" R"(    case 5:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        return uvec2(12, A + 2);
)" R"(    case 6:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        return uvec2(A + 2, 12);
)" R"(    case 7:
)" R"(        return uvec2(6, 10);
)" R"(    case 8:
)" R"(        return uvec2(10, 6);
)" R"(    case 9:
)" R"(        A = (mode >> 5) & 0x3;
)" R"(        B = (mode >> 9) & 0x3;
)" R"(        return uvec2(A + 6, B + 6);
)" R"(    default:
)" R"(        return uvec2(0);
)" R"(    }
)" R"(}
)" R"(
)" R"(uint DecodeMaxWeight(uint mode) {
)" R"(    const uint mode_layout = FindLayout(mode);
)" R"(    uint weight_index = (mode & 0x10) != 0 ? 1 : 0;
)" R"(    if (mode_layout < 5) {
)" R"(        weight_index |= (mode & 0x3) << 1;
)" R"(    } else {
)" R"(        weight_index |= (mode & 0xc) >> 1;
)" R"(    }
)" R"(    weight_index -= 2;
)" R"(    if ((mode_layout != 9) && ((mode & 0x200) != 0)) {
)" R"(        weight_index += 6;
)" R"(    }
)" R"(    return weight_index + 1;
)" R"(}
)" R"(
)" R"(void DecompressBlock(ivec3 coord) {
)" R"(    uint mode = StreamBits(11);
)" R"(    if (IsError(mode)) {
)" R"(        FillError(coord);
)" R"(        return;
)" R"(    }
)" R"(    if ((mode & 0x1ff) == 0x1fc) {
)" R"(        // params.void_extent_ldr = true;
)" R"(        FillVoidExtentLDR(coord);
)" R"(        return;
)" R"(    }
)" R"(    const uvec2 size_params = DecodeBlockSize(mode);
)" R"(    if ((size_params.x > block_dims.x) || (size_params.y > block_dims.y)) {
)" R"(        FillError(coord);
)" R"(        return;
)" R"(    }
)" R"(    const uint num_partitions = StreamBits(2) + 1;
)" R"(    const uint mode_layout = FindLayout(mode);
)" R"(    const bool dual_plane = (mode_layout != 9) && ((mode & 0x400) != 0);
)" R"(    if (num_partitions > 4 || (num_partitions == 4 && dual_plane)) {
)" R"(        FillError(coord);
)" R"(        return;
)" R"(    }
)" R"(    uint partition_index = 1;
)" R"(    uvec4 color_endpoint_mode = uvec4(0);
)" R"(    uint ced_pointer = 0;
)" R"(    uint base_cem = 0;
)" R"(    if (num_partitions == 1) {
)" R"(        color_endpoint_mode.x = StreamBits(4);
)" R"(        partition_index = 0;
)" R"(    } else {
)" R"(        partition_index = StreamBits(10);
)" R"(        base_cem = StreamBits(6);
)" R"(    }
)" R"(    const uint base_mode = base_cem & 3;
)" R"(    const uint max_weight = DecodeMaxWeight(mode);
)" R"(    const uint weight_bits = GetPackedBitSize(size_params, dual_plane, max_weight);
)" R"(    uint remaining_bits = 128 - weight_bits - total_bitsread;
)" R"(    uint extra_cem_bits = 0;
)" R"(    if (base_mode > 0) {
)" R"(        switch (num_partitions) {
)" R"(        case 2:
)" R"(            extra_cem_bits += 2;
)" R"(            break;
)" R"(        case 3:
)" R"(            extra_cem_bits += 5;
)" R"(            break;
)" R"(        case 4:
)" R"(            extra_cem_bits += 8;
)" R"(            break;
)" R"(        default:
)" R"(            return;
)" R"(        }
)" R"(    }
)" R"(    remaining_bits -= extra_cem_bits;
)" R"(    const uint plane_selector_bits = dual_plane ? 2 : 0;
)" R"(    remaining_bits -= plane_selector_bits;
)" R"(    if (remaining_bits > 128) {
)" R"(        // Bad data, more remaining bits than 4 bytes
)" R"(        // return early
)" R"(        return;
)" R"(    }
)" R"(    // Read color data...
)" R"(    const uint color_data_bits = remaining_bits;
)" R"(    while (remaining_bits > 0) {
)" R"(        const int nb = int(min(remaining_bits, 32U));
)" R"(        const uint b = StreamBits(nb);
)" R"(        color_endpoint_data[ced_pointer] = uint(bitfieldExtract(b, 0, nb));
)" R"(        ++ced_pointer;
)" R"(        remaining_bits -= nb;
)" R"(    }
)" R"(    const uint plane_index = uint(StreamBits(plane_selector_bits));
)" R"(    if (base_mode > 0) {
)" R"(        const uint extra_cem = StreamBits(extra_cem_bits);
)" R"(        uint cem = (extra_cem << 6) | base_cem;
)" R"(        cem >>= 2;
)" R"(        uvec4 C = uvec4(0);
)" R"(        for (uint i = 0; i < num_partitions; i++) {
)" R"(            C[i] = (cem & 1);
)" R"(            cem >>= 1;
)" R"(        }
)" R"(        uvec4 M = uvec4(0);
)" R"(        for (uint i = 0; i < num_partitions; i++) {
)" R"(            M[i] = cem & 3;
)" R"(            cem >>= 2;
)" R"(        }
)" R"(        for (uint i = 0; i < num_partitions; i++) {
)" R"(            color_endpoint_mode[i] = base_mode;
)" R"(            if (C[i] == 0) {
)" R"(                --color_endpoint_mode[i];
)" R"(            }
)" R"(            color_endpoint_mode[i] <<= 2;
)" R"(            color_endpoint_mode[i] |= M[i];
)" R"(        }
)" R"(    } else if (num_partitions > 1) {
)" R"(        const uint cem = base_cem >> 2;
)" R"(        for (uint i = 0; i < num_partitions; i++) {
)" R"(            color_endpoint_mode[i] = cem;
)" R"(        }
)" R"(    }
)" R"(
)" R"(    uvec4 endpoints0[4];
)" R"(    uvec4 endpoints1[4];
)" R"(    {
)" R"(        // This decode phase should at most push 32 elements into the vector
)" R"(        result_vector_max_index = 32;
)" R"(        uint color_values[32];
)" R"(        uint colvals_index = 0;
)" R"(        DecodeColorValues(color_endpoint_mode, num_partitions, color_data_bits, color_values);
)" R"(        for (uint i = 0; i < num_partitions; i++) {
)" R"(            ComputeEndpoints(endpoints0[i], endpoints1[i], color_endpoint_mode[i], color_values,
)" R"(                             colvals_index);
)" R"(        }
)" R"(    }
)" R"(    color_endpoint_data = local_buff;
)" R"(    color_endpoint_data = bitfieldReverse(color_endpoint_data).wzyx;
)" R"(    const uint clear_byte_start = (weight_bits >> 3) + 1;
)" R"(
)" R"(    const uint byte_insert = ExtractBits(color_endpoint_data, int(clear_byte_start - 1) * 8, 8) &
)" R"(                             uint(((1 << (weight_bits % 8)) - 1));
)" R"(    const uint vec_index = (clear_byte_start - 1) >> 2;
)" R"(    color_endpoint_data[vec_index] = bitfieldInsert(color_endpoint_data[vec_index], byte_insert,
)" R"(                                                    int((clear_byte_start - 1) % 4) * 8, 8);
)" R"(    for (uint i = clear_byte_start; i < 16; ++i) {
)" R"(        const uint idx = i >> 2;
)" R"(        color_endpoint_data[idx] = bitfieldInsert(color_endpoint_data[idx], 0, int(i % 4) * 8, 8);
)" R"(    }
)" R"(
)" R"(    // Re-init vector variables for next decode phase
)" R"(    result_index = 0;
)" R"(    color_bitsread = 0;
)" R"(    result_limit_reached = false;
)" R"(
)" R"(    // The limit for the Unquantize phase, avoids decoding more data than needed.
)" R"(    result_vector_max_index = size_params.x * size_params.y;
)" R"(    if (dual_plane) {
)" R"(        result_vector_max_index *= 2;
)" R"(    }
)" R"(    DecodeIntegerSequence(max_weight, GetNumWeightValues(size_params, dual_plane));
)" R"(
)" R"(    UnquantizeTexelWeights(size_params, dual_plane);
)" R"(    for (uint j = 0; j < block_dims.y; j++) {
)" R"(        for (uint i = 0; i < block_dims.x; i++) {
)" R"(            uint local_partition = 0;
)" R"(            if (num_partitions > 1) {
)" R"(                local_partition = Select2DPartition(partition_index, i, j, num_partitions);
)" R"(            }
)" R"(            const uvec4 C0 = ReplicateByteTo16(endpoints0[local_partition]);
)" R"(            const uvec4 C1 = ReplicateByteTo16(endpoints1[local_partition]);
)" R"(            const uvec4 weight_vec = GetUnquantizedWeightVector(j, i, size_params, plane_index, dual_plane);
)" R"(            const vec4 Cf =
)" R"(                vec4((C0 * (uvec4(64) - weight_vec) + C1 * weight_vec + uvec4(32)) / 64);
)" R"(            const vec4 p = (Cf / 65535.0f);
)" R"(            imageStore(dest_image, coord + ivec3(i, j, 0), p.gbar);
)" R"(        }
)" R"(    }
)" R"(}
)" R"(
)" R"(uint SwizzleOffset(uvec2 pos) {
)" R"(    const uint x = pos.x;
)" R"(    const uint y = pos.y;
)" R"(    return ((x % 64) / 32) * 256 + ((y % 8) / 2) * 64 +
)" R"(            ((x % 32) / 16) * 32 + (y % 2) * 16 + (x % 16);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    uvec3 pos = gl_GlobalInvocationID;
)" R"(    pos.x <<= BYTES_PER_BLOCK_LOG2;
)" R"(    const uint swizzle = SwizzleOffset(pos.xy);
)" R"(    const uint block_y = pos.y >> GOB_SIZE_Y_SHIFT;
)" R"(
)" R"(    uint offset = 0;
)" R"(    offset += pos.z * layer_stride;
)" R"(    offset += (block_y >> block_height) * block_size;
)" R"(    offset += (block_y & block_height_mask) << GOB_SIZE_SHIFT;
)" R"(    offset += (pos.x >> GOB_SIZE_X_SHIFT) << x_shift;
)" R"(    offset += swizzle;
)" R"(
)" R"(    const ivec3 coord = ivec3(gl_GlobalInvocationID * uvec3(block_dims, 1));
)" R"(    if (any(greaterThanEqual(coord, imageSize(dest_image)))) {
)" R"(        return;
)" R"(    }
)" R"(    local_buff = astc_data[offset / 16];
)" R"(    DecompressBlock(coord);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

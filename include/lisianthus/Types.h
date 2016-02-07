#pragma once

#include <cinttypes>


namespace lsth {

    using s64 = std::int64_t;
    using u64 = std::uint64_t;
    using s32 = std::int32_t;
    using u32 = std::uint32_t;
    using s16 = std::int16_t;
    using u16 = std::uint16_t;
    using s8 = std::int8_t;
    using u8 = std::uint8_t;
    
    using f64 = double;
    using f32 = float;

    using PADDING = u8;

    enum class CPUID
    {
        CPUID_INVALID = -1,
        CPUID_0,
        CPUID_1,
        CPUID_2,
        CPUID_3,
        CPUID_4,
        CPUID_5,
        CPUID_6,
        CPUID_7,
        CPUID_8,
        CPUID_9,
        CPUID_10,
        CPUID_12,
    };

    // 8bit
    union VAL8
    {
        s8 s8_;
        u8 u8_;
    };

    // 16bit
    union VAL16
    {
        s8 s8_[2];
        u8 u8_[2];
        s16 s16_;
        u16 u16_;
    };

    // 32bit
    union VAL32
    {
        s8 s8_[4];
        u8 u8_[4];
        s16 s16_[2];
        u16 u16_[2];
        s32 s32_;
        u32 u32_;
        f32 f32_;
    };

    // 64bit
    union VAL64
    {
        s8 s8_[8];
        u8 u8_[8];
        s16 s16_[4];
        u16 u16_[4];
        s32 s32_[2];
        u32 u32_[2];
        f32 f32_[2];
        s64 s64_;
        u64 u64_;
        f64 f64_;
    };

    // 128bit
    union VAL128
    {
        s8 s8_[16];
        u8 u8_[16];
        s16 s16_[8];
        u16 u16_[8];
        s32 s32_[4];
        u32 u32_[4];
        f32 f32_[4];
        s64 s64_[2];
        u64 u64_[2];
        f64 f64_[2];
    };

}
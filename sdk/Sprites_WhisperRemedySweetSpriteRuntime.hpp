#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Sprites_WhisperRemedySweetSpriteRuntime
{
    struct SpriteWhisperRemedySweetCreatureAnimInstance
    {
        static constexpr std::string_view Name = "SpriteWhisperRemedySweetCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpriteCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ReturnValueYPitch = 0x280;
            static constexpr std::uintptr_t bRaiseSprite = 0x284;
            static constexpr std::uintptr_t bIsTargeting = 0x285;
            static constexpr std::uintptr_t FP_IdleToTargeting = 0x286;
            static constexpr std::uintptr_t RaiseSpriteTagName = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ReturnValueYPitch", 0x280, "FloatProperty"},
            {"bRaiseSprite", 0x284, "BoolProperty"},
            {"bIsTargeting", 0x285, "BoolProperty"},
            {"FP_IdleToTargeting", 0x286, "BoolProperty"},
            {"RaiseSpriteTagName", 0x288, "StructProperty"},
        }};
    };

}

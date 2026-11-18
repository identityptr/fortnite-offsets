#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Sprites_AirSpriteRuntime
{
    struct SpriteAirCreatureAnimInstance
    {
        static constexpr std::string_view Name = "SpriteAirCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpriteCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFleeing = 0x260;
            static constexpr std::uintptr_t bIsBackpack_Idle = 0x261;
            static constexpr std::uintptr_t bIsEquipped_Idle = 0x262;
            static constexpr std::uintptr_t bIsCooldown = 0x263;
            static constexpr std::uintptr_t bIsPawnSkydiving = 0x264;
            static constexpr std::uintptr_t bIsMoving = 0x265;
            static constexpr std::uintptr_t bDisableSprings = 0x266;
            static constexpr std::uintptr_t WalkPlayrate = 0x268;
            static constexpr std::uintptr_t RunPlayrate = 0x270;
            static constexpr std::uintptr_t bEnterRun = 0x278;
            static constexpr std::uintptr_t bEnterWalk = 0x279;
            static constexpr std::uintptr_t bEnterIdle = 0x27A;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bIsFleeing", 0x260, "BoolProperty"},
            {"bIsBackpack_Idle", 0x261, "BoolProperty"},
            {"bIsEquipped_Idle", 0x262, "BoolProperty"},
            {"bIsCooldown", 0x263, "BoolProperty"},
            {"bIsPawnSkydiving", 0x264, "BoolProperty"},
            {"bIsMoving", 0x265, "BoolProperty"},
            {"bDisableSprings", 0x266, "BoolProperty"},
            {"WalkPlayrate", 0x268, "DoubleProperty"},
            {"RunPlayrate", 0x270, "DoubleProperty"},
            {"bEnterRun", 0x278, "BoolProperty"},
            {"bEnterWalk", 0x279, "BoolProperty"},
            {"bEnterIdle", 0x27A, "BoolProperty"},
        }};
    };

}

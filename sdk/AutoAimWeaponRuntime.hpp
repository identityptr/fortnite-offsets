#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AutoAimWeaponRuntime
{
    struct AutoAimWeaponKismetLibrary
    {
        static constexpr std::string_view Name = "AutoAimWeaponKismetLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AutoAimWeaponPawnComponent
    {
        static constexpr std::string_view Name = "AutoAimWeaponPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UseSingleLocationTargetingPawnTags = 0xC8;
            static constexpr std::uintptr_t LowPriorityTargetPawnTags = 0xE8;
            static constexpr std::uintptr_t MultiSocketTargetingBoneSegmentDatas = 0x108;
            static constexpr std::uintptr_t LockOnTimeReticleCenter = 0x118;
            static constexpr std::uintptr_t LockOnTimeReticleEdge = 0x140;
            static constexpr std::uintptr_t MaxLockOns = 0x168;
            static constexpr std::uintptr_t LineOfSightTraceChannel = 0x190;
            static constexpr std::uintptr_t ProgressTowardNextLockOn = 0x194;
            static constexpr std::uintptr_t CurrentLockOnCount = 0x198;
            static constexpr std::uintptr_t TargetToReticleDistanceNormalized = 0x19C;
            static constexpr std::uintptr_t LockOnTarget = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"UseSingleLocationTargetingPawnTags", 0xC8, "StructProperty"},
            {"LowPriorityTargetPawnTags", 0xE8, "StructProperty"},
            {"MultiSocketTargetingBoneSegmentDatas", 0x108, "ArrayProperty"},
            {"LockOnTimeReticleCenter", 0x118, "StructProperty"},
            {"LockOnTimeReticleEdge", 0x140, "StructProperty"},
            {"MaxLockOns", 0x168, "StructProperty"},
            {"LineOfSightTraceChannel", 0x190, "ByteProperty"},
            {"ProgressTowardNextLockOn", 0x194, "FloatProperty"},
            {"CurrentLockOnCount", 0x198, "IntProperty"},
            {"TargetToReticleDistanceNormalized", 0x19C, "FloatProperty"},
            {"LockOnTarget", 0x1A0, "WeakObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicCapsuleCodeRuntime
{
    struct AnimNotifyState_SetCapsuleSize
    {
        static constexpr std::string_view Name = "AnimNotifyState_SetCapsuleSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetCapsuleRadius = 0x30;
            static constexpr std::uintptr_t TargetCapsuleHalfHeight = 0x34;
            static constexpr std::uintptr_t bAdjustRelativeMeshHeight = 0x38;
            static constexpr std::uintptr_t TargetRelativeMeshHeight = 0x3C;
            static constexpr std::uintptr_t CapsuleSizeTag = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetCapsuleRadius", 0x30, "FloatProperty"},
            {"TargetCapsuleHalfHeight", 0x34, "FloatProperty"},
            {"bAdjustRelativeMeshHeight", 0x38, "BoolProperty"},
            {"TargetRelativeMeshHeight", 0x3C, "FloatProperty"},
            {"CapsuleSizeTag", 0x40, "StructProperty"},
        }};
    };

    struct DynamicCapsuleComponent
    {
        static constexpr std::string_view Name = "DynamicCapsuleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicCapsuleEntryStack = 0xC8;
            static constexpr std::uintptr_t ReplicatedCapsuleState = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicCapsuleEntryStack", 0xC8, "ArrayProperty"},
            {"ReplicatedCapsuleState", 0xD8, "StructProperty"},
        }};
    };

}

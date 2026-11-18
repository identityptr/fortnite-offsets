#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SegmentedReloadRuntime
{
    struct FortAnimNotify_ReloadCheckpoint
    {
        static constexpr std::string_view Name = "FortAnimNotify_ReloadCheckpoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t Checkpoint = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Checkpoint", 0x38, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_SegmentedReload
    {
        static constexpr std::string_view Name = "FortGameplayAbility_SegmentedReload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Reload";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTimesReloaded = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumTimesReloaded", 0xB40, "IntProperty"},
        }};
    };

    struct FortWeaponComponent_SegmentedReload
    {
        static constexpr std::string_view Name = "FortWeaponComponent_SegmentedReload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReloadCheckpoints = 0xC8;
            static constexpr std::uintptr_t bAllowInterruptCancel = 0xD8;
            static constexpr std::uintptr_t ConditionalReloadMontages = 0xE0;
            static constexpr std::uintptr_t OnReloadCheckpointReached = 0xF0;
            static constexpr std::uintptr_t OnSegmentedReloadComplete = 0x100;
            static constexpr std::uintptr_t CurrentCheckpoint = 0x110;
            static constexpr std::uintptr_t NextCheckpoint = 0x114;
            static constexpr std::uintptr_t LastServerReloadCompletionTime = 0x118;
            static constexpr std::uintptr_t StateData = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ReloadCheckpoints", 0xC8, "MapProperty"},
            {"bAllowInterruptCancel", 0xD8, "BoolProperty"},
            {"ConditionalReloadMontages", 0xE0, "ArrayProperty"},
            {"OnReloadCheckpointReached", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnSegmentedReloadComplete", 0x100, "MulticastInlineDelegateProperty"},
            {"CurrentCheckpoint", 0x110, "StructProperty"},
            {"NextCheckpoint", 0x114, "StructProperty"},
            {"LastServerReloadCompletionTime", 0x118, "DoubleProperty"},
            {"StateData", 0x130, "StructProperty"},
        }};
    };

    struct SegmentedReloadCondition
    {
        static constexpr std::string_view Name = "SegmentedReloadCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

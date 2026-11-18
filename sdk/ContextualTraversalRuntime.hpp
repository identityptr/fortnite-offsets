#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ContextualTraversalRuntime
{
    struct FortContextualTraversalComponent
    {
        static constexpr std::string_view Name = "FortContextualTraversalComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoringDistanceCurve = 0xC8;
            static constexpr std::uintptr_t ScoringAngleCurve = 0xD0;
            static constexpr std::uintptr_t LockedInteractionTime = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ScoringDistanceCurve", 0xC8, "ObjectProperty"},
            {"ScoringAngleCurve", 0xD0, "ObjectProperty"},
            {"LockedInteractionTime", 0x100, "FloatProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicTraversalBase
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicTraversalBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t SynchedActionTag = 0x1E0;
            static constexpr std::uintptr_t PreventWeaponHolsterTag = 0x1E4;
            static constexpr std::uintptr_t MontageStartSectionName = 0x1E8;
            static constexpr std::uintptr_t bUseNextSectionAnimName = 0x1EC;
            static constexpr std::uintptr_t OverrideServerAllowablePositionError = 0x1F0;
            static constexpr std::uintptr_t OverrideAnimBlendOutTimeWhenLanding = 0x1F4;
            static constexpr std::uintptr_t AllowWeaponHolster = 0x1F8;
            static constexpr std::uintptr_t DisableRotatePawnToCamera = 0x228;
            static constexpr std::uintptr_t EndOnRootMotionSourceHasFinished = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SynchedActionTag", 0x1E0, "StructProperty"},
            {"PreventWeaponHolsterTag", 0x1E4, "StructProperty"},
            {"MontageStartSectionName", 0x1E8, "NameProperty"},
            {"bUseNextSectionAnimName", 0x1EC, "BoolProperty"},
            {"OverrideServerAllowablePositionError", 0x1F0, "FloatProperty"},
            {"OverrideAnimBlendOutTimeWhenLanding", 0x1F4, "FloatProperty"},
            {"AllowWeaponHolster", 0x1F8, "StructProperty"},
            {"DisableRotatePawnToCamera", 0x228, "StructProperty"},
            {"EndOnRootMotionSourceHasFinished", 0x250, "StructProperty"},
        }};
    };

    struct FortMovementMode_TraversalBaseRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TraversalBaseRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimMontage = 0x38;
            static constexpr std::uintptr_t MontageStartSectionName = 0x40;
            static constexpr std::uintptr_t MontageMiddleSectionName = 0x44;
            static constexpr std::uintptr_t SynchedActionWarpPointInfo = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimMontage", 0x38, "ObjectProperty"},
            {"MontageStartSectionName", 0x40, "NameProperty"},
            {"MontageMiddleSectionName", 0x44, "NameProperty"},
            {"SynchedActionWarpPointInfo", 0x50, "StructProperty"},
        }};
    };

}

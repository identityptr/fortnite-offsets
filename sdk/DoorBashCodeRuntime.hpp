#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DoorBashCodeRuntime
{
    struct FortGameplayAbility_DoorBash
    {
        static constexpr std::string_view Name = "FortGameplayAbility_DoorBash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t HF_DoorBashEnabled = 0xB40;
            static constexpr std::uintptr_t HF_ForwardDoorCheckMult = 0xB68;
            static constexpr std::uintptr_t HF_ForwardDoorBoostAdditionalDistance = 0xB90;
            static constexpr std::uintptr_t HF_LaunchPawnImpulseMult = 0xBB8;
            static constexpr std::uintptr_t HF_PawnVelocityMinThreshold = 0xBE0;
            static constexpr std::uintptr_t HF_EndAbilityGracePeriod = 0xC08;
            static constexpr std::uintptr_t HF_DoorCheckPeriod = 0xC30;
            static constexpr std::uintptr_t HF_PawnLaunchOverlapRadius = 0xC58;
            static constexpr std::uintptr_t HF_DelayNewDoorCheckTimerAfterSuccess = 0xC80;
            static constexpr std::uintptr_t DoorBashMale = 0xCA8;
            static constexpr std::uintptr_t DoorBashFemale = 0xCB0;
            static constexpr std::uintptr_t GC_DoorImpact = 0xCB8;
            static constexpr std::uintptr_t GC_LaunchPlayer = 0xCBC;
            static constexpr std::uintptr_t AdditionalQuestSourceTags = 0xCC0;
            static constexpr std::uintptr_t DoorCheckQueryTypes = 0xCE0;
            static constexpr std::uintptr_t PawnObjectQueryTypes = 0xCF0;
            static constexpr std::uintptr_t SkipAnimationTag = 0xD00;
            static constexpr std::uintptr_t AllowActionWithoutSprintTag = 0xD04;
            static constexpr std::uintptr_t EventDoorBashSuccessTag = 0xD08;
            static constexpr std::uintptr_t BoostForwardDoorCheckTag = 0xD0C;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"HF_DoorBashEnabled", 0xB40, "StructProperty"},
            {"HF_ForwardDoorCheckMult", 0xB68, "StructProperty"},
            {"HF_ForwardDoorBoostAdditionalDistance", 0xB90, "StructProperty"},
            {"HF_LaunchPawnImpulseMult", 0xBB8, "StructProperty"},
            {"HF_PawnVelocityMinThreshold", 0xBE0, "StructProperty"},
            {"HF_EndAbilityGracePeriod", 0xC08, "StructProperty"},
            {"HF_DoorCheckPeriod", 0xC30, "StructProperty"},
            {"HF_PawnLaunchOverlapRadius", 0xC58, "StructProperty"},
            {"HF_DelayNewDoorCheckTimerAfterSuccess", 0xC80, "StructProperty"},
            {"DoorBashMale", 0xCA8, "ObjectProperty"},
            {"DoorBashFemale", 0xCB0, "ObjectProperty"},
            {"GC_DoorImpact", 0xCB8, "StructProperty"},
            {"GC_LaunchPlayer", 0xCBC, "StructProperty"},
            {"AdditionalQuestSourceTags", 0xCC0, "StructProperty"},
            {"DoorCheckQueryTypes", 0xCE0, "ArrayProperty"},
            {"PawnObjectQueryTypes", 0xCF0, "ArrayProperty"},
            {"SkipAnimationTag", 0xD00, "StructProperty"},
            {"AllowActionWithoutSprintTag", 0xD04, "StructProperty"},
            {"EventDoorBashSuccessTag", 0xD08, "StructProperty"},
            {"BoostForwardDoorCheckTag", 0xD0C, "StructProperty"},
        }};
    };

}

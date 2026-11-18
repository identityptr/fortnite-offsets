#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RagdollCode
{
    struct FortMovementMode_ExtLogicRagdoll
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicRagdoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxGroundActiveTime = 0x1C0;
            static constexpr std::uintptr_t MinimumGroundActiveTime = 0x1E8;
            static constexpr std::uintptr_t MinHorizontalSpeed = 0x210;
            static constexpr std::uintptr_t AcceptableMaxSlopeAngle = 0x238;
            static constexpr std::uintptr_t InputInfluenceMultiplier = 0x260;
            static constexpr std::uintptr_t MaxBrakingDeceleration = 0x288;
            static constexpr std::uintptr_t DBNORagdollEnabled = 0x290;
            static constexpr std::uintptr_t DBNORagdollCooldown = 0x2B8;
            static constexpr std::uintptr_t RagdollStatusTag = 0x2E0;
            static constexpr std::uintptr_t RagdollIsAllowedTag = 0x2E4;
            static constexpr std::uintptr_t AdditionalTagsToPush = 0x2E8;
            static constexpr std::uintptr_t PreventHolsterTags = 0x308;
            static constexpr std::uintptr_t bWeaponHolsterIsApplicable = 0x328;
            static constexpr std::uintptr_t DisableJumpInputTime = 0x330;
            static constexpr std::uintptr_t IntroAnimMontageDefault = 0x358;
            static constexpr std::uintptr_t OutroAnimMontageDefault = 0x360;
            static constexpr std::uintptr_t OutroAnimMontageOnHit = 0x368;
            static constexpr std::uintptr_t bAllowRagdollInAir = 0x370;
            static constexpr std::uintptr_t bUseRagdollSlowdown = 0x371;
            static constexpr std::uintptr_t RagdollSlowdownLength = 0x378;
            static constexpr std::uintptr_t RagdollDeactivatedTime = 0x3A0;
            static constexpr std::uintptr_t OutroTimeReductionFactor = 0x3A8;
            static constexpr std::uintptr_t SlopeAccelerationCurve = 0x3D0;
            static constexpr std::uintptr_t IntroSpeedCurve = 0x3D8;
            static constexpr std::uintptr_t OutroSpeedCurve = 0x3E0;
            static constexpr std::uintptr_t RagdollAnimLayer = 0x400;
            static constexpr std::uintptr_t AudioLoopHandle = 0x408;
            static constexpr std::uintptr_t AudioLoopGameplayEffect = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"MaxGroundActiveTime", 0x1C0, "StructProperty"},
            {"MinimumGroundActiveTime", 0x1E8, "StructProperty"},
            {"MinHorizontalSpeed", 0x210, "StructProperty"},
            {"AcceptableMaxSlopeAngle", 0x238, "StructProperty"},
            {"InputInfluenceMultiplier", 0x260, "StructProperty"},
            {"MaxBrakingDeceleration", 0x288, "OptionalProperty"},
            {"DBNORagdollEnabled", 0x290, "StructProperty"},
            {"DBNORagdollCooldown", 0x2B8, "StructProperty"},
            {"RagdollStatusTag", 0x2E0, "StructProperty"},
            {"RagdollIsAllowedTag", 0x2E4, "StructProperty"},
            {"AdditionalTagsToPush", 0x2E8, "StructProperty"},
            {"PreventHolsterTags", 0x308, "StructProperty"},
            {"bWeaponHolsterIsApplicable", 0x328, "BoolProperty"},
            {"DisableJumpInputTime", 0x330, "StructProperty"},
            {"IntroAnimMontageDefault", 0x358, "ObjectProperty"},
            {"OutroAnimMontageDefault", 0x360, "ObjectProperty"},
            {"OutroAnimMontageOnHit", 0x368, "ObjectProperty"},
            {"bAllowRagdollInAir", 0x370, "BoolProperty"},
            {"bUseRagdollSlowdown", 0x371, "BoolProperty"},
            {"RagdollSlowdownLength", 0x378, "StructProperty"},
            {"RagdollDeactivatedTime", 0x3A0, "FloatProperty"},
            {"OutroTimeReductionFactor", 0x3A8, "StructProperty"},
            {"SlopeAccelerationCurve", 0x3D0, "ObjectProperty"},
            {"IntroSpeedCurve", 0x3D8, "ObjectProperty"},
            {"OutroSpeedCurve", 0x3E0, "ObjectProperty"},
            {"RagdollAnimLayer", 0x400, "ClassProperty"},
            {"AudioLoopHandle", 0x408, "StructProperty"},
            {"AudioLoopGameplayEffect", 0x420, "ClassProperty"},
        }};
    };

    struct FortMovementMode_RagdollBaseRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_RagdollBaseRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t ElapsedGroundTime = 0x38;
            static constexpr std::uintptr_t NetRagdollInitDirection = 0x40;
            static constexpr std::uintptr_t NetInitSpeed = 0x58;
            static constexpr std::uintptr_t CurrentSlopeAngleInMoveDirection = 0x6C;
            static constexpr std::uintptr_t BounceCount = 0xBC;
            static constexpr std::uintptr_t BounceTime = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ElapsedGroundTime", 0x38, "FloatProperty"},
            {"NetRagdollInitDirection", 0x40, "StructProperty"},
            {"NetInitSpeed", 0x58, "FloatProperty"},
            {"CurrentSlopeAngleInMoveDirection", 0x6C, "FloatProperty"},
            {"BounceCount", 0xBC, "IntProperty"},
            {"BounceTime", 0xC0, "FloatProperty"},
        }};
    };

    struct RagdollLibrary
    {
        static constexpr std::string_view Name = "RagdollLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

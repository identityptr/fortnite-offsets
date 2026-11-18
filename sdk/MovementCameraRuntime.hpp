#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MovementCameraRuntime
{
    struct FortCameraMode_Movement
    {
        static constexpr std::string_view Name = "FortCameraMode_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialOffsetCurve = 0x2080;
            static constexpr std::uintptr_t bInitialOffsetIsAdditive = 0x2088;
            static constexpr std::uintptr_t AccelerationOffsetDeadzone = 0x2090;
            static constexpr std::uintptr_t AccelerationMaxOffset = 0x20B8;
            static constexpr std::uintptr_t bUseViewRotationForYawDelta = 0x20E0;
            static constexpr std::uintptr_t RightAccelerationOffsetCurve = 0x20E8;
            static constexpr std::uintptr_t UpAccelerationOffsetCurve = 0x20F0;
            static constexpr std::uintptr_t AccelerationOffsetInterpSpeed = 0x20F8;
            static constexpr std::uintptr_t MaxCameraYawSpeedForAdjustment = 0x2110;
            static constexpr std::uintptr_t MaxVelocityForAdjustment = 0x2138;
            static constexpr std::uintptr_t bClampYawRelativeToVelocity = 0x2160;
            static constexpr std::uintptr_t YawMinRelativeToVelocity = 0x2168;
            static constexpr std::uintptr_t YawMaxRelativeToVelocity = 0x2190;
            static constexpr std::uintptr_t bClampPitchRelativeToVelocity = 0x21B8;
            static constexpr std::uintptr_t PitchMinRelativeToVelocity = 0x21C0;
            static constexpr std::uintptr_t PitchMaxRelativeToVelocity = 0x21E8;
            static constexpr std::uintptr_t InitialHoldInterpSpeed = 0x2210;
            static constexpr std::uintptr_t InitialHoldInterpSpeedCurve = 0x2228;
            static constexpr std::uintptr_t InitialHoldInterpSpeedTime = 0x2230;
            static constexpr std::uintptr_t InitialInterpSpeedBlendOutTime = 0x2258;
            static constexpr std::uintptr_t bInitialHoldDuringSlowdown = 0x2280;
            static constexpr std::uintptr_t InitialInterpSpeedBlendCurve = 0x2288;
            static constexpr std::uintptr_t MaxFOV = 0x2290;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"InitialOffsetCurve", 0x2080, "ObjectProperty"},
            {"bInitialOffsetIsAdditive", 0x2088, "BoolProperty"},
            {"AccelerationOffsetDeadzone", 0x2090, "StructProperty"},
            {"AccelerationMaxOffset", 0x20B8, "StructProperty"},
            {"bUseViewRotationForYawDelta", 0x20E0, "BoolProperty"},
            {"RightAccelerationOffsetCurve", 0x20E8, "ObjectProperty"},
            {"UpAccelerationOffsetCurve", 0x20F0, "ObjectProperty"},
            {"AccelerationOffsetInterpSpeed", 0x20F8, "StructProperty"},
            {"MaxCameraYawSpeedForAdjustment", 0x2110, "StructProperty"},
            {"MaxVelocityForAdjustment", 0x2138, "StructProperty"},
            {"bClampYawRelativeToVelocity", 0x2160, "BoolProperty"},
            {"YawMinRelativeToVelocity", 0x2168, "StructProperty"},
            {"YawMaxRelativeToVelocity", 0x2190, "StructProperty"},
            {"bClampPitchRelativeToVelocity", 0x21B8, "BoolProperty"},
            {"PitchMinRelativeToVelocity", 0x21C0, "StructProperty"},
            {"PitchMaxRelativeToVelocity", 0x21E8, "StructProperty"},
            {"InitialHoldInterpSpeed", 0x2210, "StructProperty"},
            {"InitialHoldInterpSpeedCurve", 0x2228, "ObjectProperty"},
            {"InitialHoldInterpSpeedTime", 0x2230, "StructProperty"},
            {"InitialInterpSpeedBlendOutTime", 0x2258, "StructProperty"},
            {"bInitialHoldDuringSlowdown", 0x2280, "BoolProperty"},
            {"InitialInterpSpeedBlendCurve", 0x2288, "ObjectProperty"},
            {"MaxFOV", 0x2290, "StructProperty"},
        }};
    };

    struct FortCameraModifier_Movement
    {
        static constexpr std::string_view Name = "FortCameraModifier_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseNativeCalculation = 0x80;
            static constexpr std::uintptr_t LeadInForwardCurve = 0x88;
            static constexpr std::uintptr_t LeadInCurveMax = 0x90;
            static constexpr std::uintptr_t LeadInTime = 0xC0;
            static constexpr std::uintptr_t ForwardOffsetPlayerSpeedOldRange = 0xF0;
            static constexpr std::uintptr_t ForwardOffsetPlayerSpeedNewRange = 0x100;
            static constexpr std::uintptr_t ForwardOffsetUpSpeedOldRange = 0x110;
            static constexpr std::uintptr_t ForwardOffsetUpSpeedNewRange = 0x120;
            static constexpr std::uintptr_t ForwardOffsetSprintingAdditive = 0x130;
            static constexpr std::uintptr_t ForwardOffsetBaseAdditive = 0x160;
            static constexpr std::uintptr_t ForwardOffsetInterpSpeed = 0x190;
            static constexpr std::uintptr_t RightOffsetRightSpeedOldRange = 0x1C0;
            static constexpr std::uintptr_t RightOffsetRightSpeedNewRange = 0x1D0;
            static constexpr std::uintptr_t RightOffsetForwardOffsetOldRange = 0x1E0;
            static constexpr std::uintptr_t RightOffsetForwardOffsetNewRange = 0x1F0;
            static constexpr std::uintptr_t RightOffsetPositiveRightSpeedMultiplier = 0x200;
            static constexpr std::uintptr_t RightOffsetNegativeRightSpeedMultiplier = 0x230;
            static constexpr std::uintptr_t RightOffsetInterpSpeed = 0x260;
            static constexpr std::uintptr_t UpOffsetUpSpeedOldRange = 0x290;
            static constexpr std::uintptr_t UpOffsetUpSpeedNewRange = 0x2A0;
            static constexpr std::uintptr_t UpOffsetForwardOffsetOldRange = 0x2B0;
            static constexpr std::uintptr_t UpOffsetForwardOffsetNewRange = 0x2C0;
            static constexpr std::uintptr_t UpOffsetPositiveUpSpeedMultiplier = 0x2D0;
            static constexpr std::uintptr_t UpOffsetNegativeUpSpeedMultiplier = 0x300;
            static constexpr std::uintptr_t UpOffsetSprintingAdditive = 0x330;
            static constexpr std::uintptr_t UpOffsetBaseAdditive = 0x360;
            static constexpr std::uintptr_t UpOffsetInterpSpeed = 0x390;
            static constexpr std::uintptr_t FOVOffsetSprintingInterpTarget = 0x3C0;
            static constexpr std::uintptr_t FOVOffsetBaseInterpTarget = 0x3F0;
            static constexpr std::uintptr_t FOVOffsetInterpSpeed = 0x420;
            static constexpr std::uintptr_t FinalizeOffsetCurrentStraightnessMultiplier = 0x450;
            static constexpr std::uintptr_t FinalizeOffsetUpOffsetAdditive = 0x480;
            static constexpr std::uintptr_t FinalizeOffsetLeanOffsetMultiplier = 0x4B0;
            static constexpr std::uintptr_t FinalizeOffsetViewRotationForwardMultipler = 0x4E0;
            static constexpr std::uintptr_t FinalizeOffsetViewRotationUpMultipler = 0x510;
            static constexpr std::uintptr_t FinalizeOffsetViewRotationRightMultipler = 0x540;
            static constexpr std::uintptr_t FinalizeOffsetInterpSpeed = 0x570;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"bUseNativeCalculation", 0x80, "BoolProperty"},
            {"LeadInForwardCurve", 0x88, "ObjectProperty"},
            {"LeadInCurveMax", 0x90, "StructProperty"},
            {"LeadInTime", 0xC0, "StructProperty"},
            {"ForwardOffsetPlayerSpeedOldRange", 0xF0, "StructProperty"},
            {"ForwardOffsetPlayerSpeedNewRange", 0x100, "StructProperty"},
            {"ForwardOffsetUpSpeedOldRange", 0x110, "StructProperty"},
            {"ForwardOffsetUpSpeedNewRange", 0x120, "StructProperty"},
            {"ForwardOffsetSprintingAdditive", 0x130, "StructProperty"},
            {"ForwardOffsetBaseAdditive", 0x160, "StructProperty"},
            {"ForwardOffsetInterpSpeed", 0x190, "StructProperty"},
            {"RightOffsetRightSpeedOldRange", 0x1C0, "StructProperty"},
            {"RightOffsetRightSpeedNewRange", 0x1D0, "StructProperty"},
            {"RightOffsetForwardOffsetOldRange", 0x1E0, "StructProperty"},
            {"RightOffsetForwardOffsetNewRange", 0x1F0, "StructProperty"},
            {"RightOffsetPositiveRightSpeedMultiplier", 0x200, "StructProperty"},
            {"RightOffsetNegativeRightSpeedMultiplier", 0x230, "StructProperty"},
            {"RightOffsetInterpSpeed", 0x260, "StructProperty"},
            {"UpOffsetUpSpeedOldRange", 0x290, "StructProperty"},
            {"UpOffsetUpSpeedNewRange", 0x2A0, "StructProperty"},
            {"UpOffsetForwardOffsetOldRange", 0x2B0, "StructProperty"},
            {"UpOffsetForwardOffsetNewRange", 0x2C0, "StructProperty"},
            {"UpOffsetPositiveUpSpeedMultiplier", 0x2D0, "StructProperty"},
            {"UpOffsetNegativeUpSpeedMultiplier", 0x300, "StructProperty"},
            {"UpOffsetSprintingAdditive", 0x330, "StructProperty"},
            {"UpOffsetBaseAdditive", 0x360, "StructProperty"},
            {"UpOffsetInterpSpeed", 0x390, "StructProperty"},
            {"FOVOffsetSprintingInterpTarget", 0x3C0, "StructProperty"},
            {"FOVOffsetBaseInterpTarget", 0x3F0, "StructProperty"},
            {"FOVOffsetInterpSpeed", 0x420, "StructProperty"},
            {"FinalizeOffsetCurrentStraightnessMultiplier", 0x450, "StructProperty"},
            {"FinalizeOffsetUpOffsetAdditive", 0x480, "StructProperty"},
            {"FinalizeOffsetLeanOffsetMultiplier", 0x4B0, "StructProperty"},
            {"FinalizeOffsetViewRotationForwardMultipler", 0x4E0, "StructProperty"},
            {"FinalizeOffsetViewRotationUpMultipler", 0x510, "StructProperty"},
            {"FinalizeOffsetViewRotationRightMultipler", 0x540, "StructProperty"},
            {"FinalizeOffsetInterpSpeed", 0x570, "StructProperty"},
        }};
    };

}

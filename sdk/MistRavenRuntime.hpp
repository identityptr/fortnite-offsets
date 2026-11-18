#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MistRavenRuntime
{
    struct FortCameraModifier_MistRavenWraithForm
    {
        static constexpr std::string_view Name = "FortCameraModifier_MistRavenWraithForm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeForwardPercentCurve = 0x80;
            static constexpr std::uintptr_t NativeSprintingUpOffsetMultiplier = 0x88;
            static constexpr std::uintptr_t NativeBaseUpOffsetMultiplier = 0xB8;
            static constexpr std::uintptr_t NativeLeadInTime = 0xE4;
            static constexpr std::uintptr_t NativeLeanRight = 0xE8;
            static constexpr std::uintptr_t NativeUnNormalizedForwardPercentCurveValueStart = 0xEC;
            static constexpr std::uintptr_t NativeUnNormalizedForwardPercentCurveValueEnd = 0xF0;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYOldRangeX = 0xF4;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYOldRangeY = 0xF8;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYNewRangeX = 0xFC;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYNewRangeY = 0x100;
            static constexpr std::uintptr_t NativeRemappedVelocityLengthXYMultiplier = 0x104;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSOldRangeX = 0x108;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSOldRangeY = 0x10C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSNewRangeX = 0x110;
            static constexpr std::uintptr_t NativeRemappedUpSpeedABSNewRangeY = 0x114;
            static constexpr std::uintptr_t NativeCurrentForwardTacticalSprintingAdditive = 0x118;
            static constexpr std::uintptr_t NativeCurrentForwardInterpToSpeed = 0x11C;
            static constexpr std::uintptr_t NativeRemappedRightSpeedOldRangeX = 0x120;
            static constexpr std::uintptr_t NativeRemappedRightSpeedOldRangeY = 0x124;
            static constexpr std::uintptr_t NativeRemappedRightSpeedNewRangeX = 0x128;
            static constexpr std::uintptr_t NativeRemappedRightSpeedNewRangeY = 0x12C;
            static constexpr std::uintptr_t NativeRemappedRightSpeedMultiplierA = 0x130;
            static constexpr std::uintptr_t NativeRemappedRightSpeedMultiplierB = 0x134;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSOldRangeX = 0x138;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSOldRangeY = 0x13C;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSNewRangeX = 0x140;
            static constexpr std::uintptr_t NativeCurrentRightRemappedCurrentForwardABSNewRangeY = 0x144;
            static constexpr std::uintptr_t NativeCurrentRightInterpToSpeed = 0x148;
            static constexpr std::uintptr_t NativeRemappedUpSpeedOldRangeX = 0x14C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedOldRangeY = 0x150;
            static constexpr std::uintptr_t NativeRemappedUpSpeedNewRangeX = 0x154;
            static constexpr std::uintptr_t NativeRemappedUpSpeedNewRangeY = 0x158;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSOldRangeX = 0x15C;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSOldRangeY = 0x160;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSNewRangeX = 0x164;
            static constexpr std::uintptr_t NativeCurrentUpRemappedCurrentForwardABSNewRangeY = 0x168;
            static constexpr std::uintptr_t NativeRemappedUpSpeedMultiplierA = 0x16C;
            static constexpr std::uintptr_t NativeRemappedUpSpeedMultiplierB = 0x170;
            static constexpr std::uintptr_t NativeCurrentUpTacticalSprintingAdditiveA = 0x174;
            static constexpr std::uintptr_t NativeCurrentUpTacticalSprintingAdditiveB = 0x178;
            static constexpr std::uintptr_t NativeCurrentUpInterpToSpeed = 0x17C;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSOldRangeX = 0x180;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSOldRangeY = 0x184;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSNewRangeX = 0x188;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSNewRangeY = 0x18C;
            static constexpr std::uintptr_t NativeRemappedForwardSpeedABSMultiplier = 0x190;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToTargetOldRangeX = 0x194;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToTargetOldRangeY = 0x198;
            static constexpr std::uintptr_t NativeCurrentLeanInterpToSpeed = 0x19C;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToTargetA = 0x1A0;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToTargetB = 0x1A4;
            static constexpr std::uintptr_t NativeCurrentFOVInterpToSpeed = 0x1A8;
            static constexpr std::uintptr_t NativeRemappedSpeedOldRangeX = 0x1AC;
            static constexpr std::uintptr_t NativeRemappedSpeedOldRangeY = 0x1B0;
            static constexpr std::uintptr_t NativeRemappedSpeedNewRangeX = 0x1B4;
            static constexpr std::uintptr_t NativeRemappedSpeedNewRangeY = 0x1B8;
            static constexpr std::uintptr_t NativeCurrentOffsetInterpToSpeed = 0x1BC;
            static constexpr std::uintptr_t NativeCurrentStraightnessMultiplier = 0x1C0;
            static constexpr std::uintptr_t NativeCurrentUpSubtrahend = 0x1C4;
            static constexpr std::uintptr_t NativeCurrentOffsetVectorInterpToSpeed = 0x1C8;
            static constexpr std::uintptr_t NativeNewViewForwardVectorMultiplier = 0x1CC;
            static constexpr std::uintptr_t NativeNewViewUpVectorMultiplier = 0x1D0;
            static constexpr std::uintptr_t NativeNewViewRightVectorMultiplier = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 64> Properties{{
            {"NativeForwardPercentCurve", 0x80, "ObjectProperty"},
            {"NativeSprintingUpOffsetMultiplier", 0x88, "StructProperty"},
            {"NativeBaseUpOffsetMultiplier", 0xB8, "StructProperty"},
            {"NativeLeadInTime", 0xE4, "FloatProperty"},
            {"NativeLeanRight", 0xE8, "FloatProperty"},
            {"NativeUnNormalizedForwardPercentCurveValueStart", 0xEC, "FloatProperty"},
            {"NativeUnNormalizedForwardPercentCurveValueEnd", 0xF0, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYOldRangeX", 0xF4, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYOldRangeY", 0xF8, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYNewRangeX", 0xFC, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYNewRangeY", 0x100, "FloatProperty"},
            {"NativeRemappedVelocityLengthXYMultiplier", 0x104, "FloatProperty"},
            {"NativeRemappedUpSpeedABSOldRangeX", 0x108, "FloatProperty"},
            {"NativeRemappedUpSpeedABSOldRangeY", 0x10C, "FloatProperty"},
            {"NativeRemappedUpSpeedABSNewRangeX", 0x110, "FloatProperty"},
            {"NativeRemappedUpSpeedABSNewRangeY", 0x114, "FloatProperty"},
            {"NativeCurrentForwardTacticalSprintingAdditive", 0x118, "FloatProperty"},
            {"NativeCurrentForwardInterpToSpeed", 0x11C, "FloatProperty"},
            {"NativeRemappedRightSpeedOldRangeX", 0x120, "FloatProperty"},
            {"NativeRemappedRightSpeedOldRangeY", 0x124, "FloatProperty"},
            {"NativeRemappedRightSpeedNewRangeX", 0x128, "FloatProperty"},
            {"NativeRemappedRightSpeedNewRangeY", 0x12C, "FloatProperty"},
            {"NativeRemappedRightSpeedMultiplierA", 0x130, "FloatProperty"},
            {"NativeRemappedRightSpeedMultiplierB", 0x134, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSOldRangeX", 0x138, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSOldRangeY", 0x13C, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSNewRangeX", 0x140, "FloatProperty"},
            {"NativeCurrentRightRemappedCurrentForwardABSNewRangeY", 0x144, "FloatProperty"},
            {"NativeCurrentRightInterpToSpeed", 0x148, "FloatProperty"},
            {"NativeRemappedUpSpeedOldRangeX", 0x14C, "FloatProperty"},
            {"NativeRemappedUpSpeedOldRangeY", 0x150, "FloatProperty"},
            {"NativeRemappedUpSpeedNewRangeX", 0x154, "FloatProperty"},
            {"NativeRemappedUpSpeedNewRangeY", 0x158, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSOldRangeX", 0x15C, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSOldRangeY", 0x160, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSNewRangeX", 0x164, "FloatProperty"},
            {"NativeCurrentUpRemappedCurrentForwardABSNewRangeY", 0x168, "FloatProperty"},
            {"NativeRemappedUpSpeedMultiplierA", 0x16C, "FloatProperty"},
            {"NativeRemappedUpSpeedMultiplierB", 0x170, "FloatProperty"},
            {"NativeCurrentUpTacticalSprintingAdditiveA", 0x174, "FloatProperty"},
            {"NativeCurrentUpTacticalSprintingAdditiveB", 0x178, "FloatProperty"},
            {"NativeCurrentUpInterpToSpeed", 0x17C, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSOldRangeX", 0x180, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSOldRangeY", 0x184, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSNewRangeX", 0x188, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSNewRangeY", 0x18C, "FloatProperty"},
            {"NativeRemappedForwardSpeedABSMultiplier", 0x190, "FloatProperty"},
            {"NativeCurrentLeanInterpToTargetOldRangeX", 0x194, "FloatProperty"},
            {"NativeCurrentLeanInterpToTargetOldRangeY", 0x198, "FloatProperty"},
            {"NativeCurrentLeanInterpToSpeed", 0x19C, "FloatProperty"},
            {"NativeCurrentFOVInterpToTargetA", 0x1A0, "FloatProperty"},
            {"NativeCurrentFOVInterpToTargetB", 0x1A4, "FloatProperty"},
            {"NativeCurrentFOVInterpToSpeed", 0x1A8, "FloatProperty"},
            {"NativeRemappedSpeedOldRangeX", 0x1AC, "FloatProperty"},
            {"NativeRemappedSpeedOldRangeY", 0x1B0, "FloatProperty"},
            {"NativeRemappedSpeedNewRangeX", 0x1B4, "FloatProperty"},
            {"NativeRemappedSpeedNewRangeY", 0x1B8, "FloatProperty"},
            {"NativeCurrentOffsetInterpToSpeed", 0x1BC, "FloatProperty"},
            {"NativeCurrentStraightnessMultiplier", 0x1C0, "FloatProperty"},
            {"NativeCurrentUpSubtrahend", 0x1C4, "FloatProperty"},
            {"NativeCurrentOffsetVectorInterpToSpeed", 0x1C8, "FloatProperty"},
            {"NativeNewViewForwardVectorMultiplier", 0x1CC, "FloatProperty"},
            {"NativeNewViewUpVectorMultiplier", 0x1D0, "FloatProperty"},
            {"NativeNewViewRightVectorMultiplier", 0x1D4, "FloatProperty"},
        }};
    };

    struct FortMovementMode_MistRavenWraithForm
    {
        static constexpr std::string_view Name = "FortMovementMode_MistRavenWraithForm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bDeactivateMMEOnLaunch = 0x1B8;
            static constexpr std::uintptr_t AccelerationRate = 0x1C0;
            static constexpr std::uintptr_t DecelerationRate = 0x1E8;
            static constexpr std::uintptr_t CombinedFastSpeed = 0x210;
            static constexpr std::uintptr_t CombinedSlowSpeed = 0x238;
            static constexpr std::uintptr_t RegularFastSpeed = 0x260;
            static constexpr std::uintptr_t RegularSlowSpeed = 0x288;
            static constexpr std::uintptr_t BoostFallOffDuration = 0x2B0;
            static constexpr std::uintptr_t BoostSpeedFallOffCurve = 0x2D8;
            static constexpr std::uintptr_t UpDownSensitivityMultiplier = 0x2E0;
            static constexpr std::uintptr_t bUseConstantUpDownSensitivity = 0x308;
            static constexpr std::uintptr_t UpDownSensitivityCurve = 0x310;
            static constexpr std::uintptr_t UpDownSensitivityDampeningFalloffDuration = 0x318;
            static constexpr std::uintptr_t bSeparateUpDownVelocityComponent = 0x340;
            static constexpr std::uintptr_t VelocityDragRate = 0x348;
            static constexpr std::uintptr_t EnableVelocityDrag = 0x370;
            static constexpr std::uintptr_t ZSpeedClampEnabled = 0x398;
            static constexpr std::uintptr_t ZClampNormal = 0x3C0;
            static constexpr std::uintptr_t ZClampCombined = 0x3E8;
            static constexpr std::uintptr_t bEnableGroundHoverLogic = 0x410;
            static constexpr std::uintptr_t GroundHoverDistance = 0x438;
            static constexpr std::uintptr_t HoverSpeed = 0x460;
            static constexpr std::uintptr_t InitialActivationWindowDelayTime = 0x488;
            static constexpr std::uintptr_t IndestructibleIgnoreActorsCache = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"bDeactivateMMEOnLaunch", 0x1B8, "BoolProperty"},
            {"AccelerationRate", 0x1C0, "StructProperty"},
            {"DecelerationRate", 0x1E8, "StructProperty"},
            {"CombinedFastSpeed", 0x210, "StructProperty"},
            {"CombinedSlowSpeed", 0x238, "StructProperty"},
            {"RegularFastSpeed", 0x260, "StructProperty"},
            {"RegularSlowSpeed", 0x288, "StructProperty"},
            {"BoostFallOffDuration", 0x2B0, "StructProperty"},
            {"BoostSpeedFallOffCurve", 0x2D8, "ObjectProperty"},
            {"UpDownSensitivityMultiplier", 0x2E0, "StructProperty"},
            {"bUseConstantUpDownSensitivity", 0x308, "BoolProperty"},
            {"UpDownSensitivityCurve", 0x310, "ObjectProperty"},
            {"UpDownSensitivityDampeningFalloffDuration", 0x318, "StructProperty"},
            {"bSeparateUpDownVelocityComponent", 0x340, "BoolProperty"},
            {"VelocityDragRate", 0x348, "StructProperty"},
            {"EnableVelocityDrag", 0x370, "StructProperty"},
            {"ZSpeedClampEnabled", 0x398, "StructProperty"},
            {"ZClampNormal", 0x3C0, "StructProperty"},
            {"ZClampCombined", 0x3E8, "StructProperty"},
            {"bEnableGroundHoverLogic", 0x410, "StructProperty"},
            {"GroundHoverDistance", 0x438, "StructProperty"},
            {"HoverSpeed", 0x460, "StructProperty"},
            {"InitialActivationWindowDelayTime", 0x488, "FloatProperty"},
            {"IndestructibleIgnoreActorsCache", 0x490, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_MistRavenWraithFormRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_MistRavenWraithFormRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpInput = 0x38;
            static constexpr std::uintptr_t bDownInput = 0x39;
            static constexpr std::uintptr_t InputVector = 0x40;
            static constexpr std::uintptr_t ControlRotation = 0x50;
            static constexpr std::uintptr_t TotalTimeUpdated = 0x68;
            static constexpr std::uintptr_t RequestedVelocity = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bUpInput", 0x38, "BoolProperty"},
            {"bDownInput", 0x39, "BoolProperty"},
            {"InputVector", 0x40, "StructProperty"},
            {"ControlRotation", 0x50, "StructProperty"},
            {"TotalTimeUpdated", 0x68, "FloatProperty"},
            {"RequestedVelocity", 0x70, "StructProperty"},
        }};
    };

    struct MistRavenLayerAnimInstance
    {
        static constexpr std::string_view Name = "MistRavenLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t DrainAOAlpha = 0x1180;
            static constexpr std::uintptr_t bIsReloadOutroNormal = 0x1184;
            static constexpr std::uintptr_t bIsReloadOutroCrouchMove = 0x1185;
            static constexpr std::uintptr_t bIsReloadOutroSprint = 0x1186;
            static constexpr std::uintptr_t bIsTendrilDrain = 0x1187;
            static constexpr std::uintptr_t IsTendrilDrainActiveTagName = 0x1188;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DrainAOAlpha", 0x1180, "FloatProperty"},
            {"bIsReloadOutroNormal", 0x1184, "BoolProperty"},
            {"bIsReloadOutroCrouchMove", 0x1185, "BoolProperty"},
            {"bIsReloadOutroSprint", 0x1186, "BoolProperty"},
            {"bIsTendrilDrain", 0x1187, "BoolProperty"},
            {"IsTendrilDrainActiveTagName", 0x1188, "StructProperty"},
        }};
    };

    struct MistRavenPlayerComponent
    {
        static constexpr std::string_view Name = "MistRavenPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StartGrimStrutLocation = 0xC8;
            static constexpr std::uintptr_t bRepWFActive = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartGrimStrutLocation", 0xC8, "StructProperty"},
            {"bRepWFActive", 0xE0, "BoolProperty"},
        }};
    };

    struct MistRavenProjectileOptimizationComponent
    {
        static constexpr std::string_view Name = "MistRavenProjectileOptimizationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableNativeOptimizations = 0xC0;
            static constexpr std::uintptr_t EnableSimProxyTraces = 0xE8;
            static constexpr std::uintptr_t RadiusIncreasePerSec = 0x110;
            static constexpr std::uintptr_t StartingRadius = 0x138;
            static constexpr std::uintptr_t EnableDebugRow = 0x160;
            static constexpr std::uintptr_t TimerFrequency = 0x188;
            static constexpr std::uintptr_t CombinedItemTag = 0x18C;
            static constexpr std::uintptr_t HitGCTag = 0x190;
            static constexpr std::uintptr_t HitSoftGCTag = 0x194;
            static constexpr std::uintptr_t HitGCCombinedTag = 0x198;
            static constexpr std::uintptr_t HitSoftGCCombinedTag = 0x19C;
            static constexpr std::uintptr_t RecentlyHitTag = 0x1A0;
            static constexpr std::uintptr_t SphereOverlapTraceChannel = 0x1A4;
            static constexpr std::uintptr_t LOSPawnTraceChannel = 0x1A5;
            static constexpr std::uintptr_t LOSCameraTraceChannel = 0x1A6;
            static constexpr std::uintptr_t bRequirePawnLOSCheckHitActor = 0x1A7;
            static constexpr std::uintptr_t GECombinedItemVictim = 0x1A8;
            static constexpr std::uintptr_t GESingleItemVictim = 0x1B0;
            static constexpr std::uintptr_t DelayEffectsToApply = 0x1B8;
            static constexpr std::uintptr_t CachedIgnoreActors = 0x268;
            static constexpr std::uintptr_t PendingTargetValidations = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"EnableNativeOptimizations", 0xC0, "StructProperty"},
            {"EnableSimProxyTraces", 0xE8, "StructProperty"},
            {"RadiusIncreasePerSec", 0x110, "StructProperty"},
            {"StartingRadius", 0x138, "StructProperty"},
            {"EnableDebugRow", 0x160, "StructProperty"},
            {"TimerFrequency", 0x188, "FloatProperty"},
            {"CombinedItemTag", 0x18C, "StructProperty"},
            {"HitGCTag", 0x190, "StructProperty"},
            {"HitSoftGCTag", 0x194, "StructProperty"},
            {"HitGCCombinedTag", 0x198, "StructProperty"},
            {"HitSoftGCCombinedTag", 0x19C, "StructProperty"},
            {"RecentlyHitTag", 0x1A0, "StructProperty"},
            {"SphereOverlapTraceChannel", 0x1A4, "ByteProperty"},
            {"LOSPawnTraceChannel", 0x1A5, "ByteProperty"},
            {"LOSCameraTraceChannel", 0x1A6, "ByteProperty"},
            {"bRequirePawnLOSCheckHitActor", 0x1A7, "BoolProperty"},
            {"GECombinedItemVictim", 0x1A8, "ClassProperty"},
            {"GESingleItemVictim", 0x1B0, "ClassProperty"},
            {"DelayEffectsToApply", 0x1B8, "ArrayProperty"},
            {"CachedIgnoreActors", 0x268, "ArrayProperty"},
            {"PendingTargetValidations", 0x278, "MapProperty"},
        }};
    };

    struct WraithFormMistRavenCCPAnimInstance
    {
        static constexpr std::string_view Name = "WraithFormMistRavenCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SimSpaceSettings = 0x640;
            static constexpr std::uintptr_t Cape_LookAt_Target = 0x6A8;
            static constexpr std::uintptr_t GravityOverride = 0x6C0;
            static constexpr std::uintptr_t ChaosClothingInteractor = 0x6D8;
            static constexpr std::uintptr_t BwdMovement = 0x6E0;
            static constexpr std::uintptr_t bRbanOrCloth = 0x6E8;
            static constexpr std::uintptr_t PhysicsAsset = 0x6F0;
            static constexpr std::uintptr_t SkydivingAlpha = 0x6F8;
            static constexpr std::uintptr_t WindGustLocalSettings = 0x710;
            static constexpr std::uintptr_t ClothCoreSettings = 0x728;
            static constexpr std::uintptr_t SimSpaceSettings_Base = 0x7A8;
            static constexpr std::uintptr_t SimSpaceSettings_GrindingWeaponActive = 0x810;
            static constexpr std::uintptr_t SimSpaceSettings_GrindTarget = 0x878;
            static constexpr std::uintptr_t WraithFormCharacterDynamicsParameters = 0x8E0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SimSpaceSettings", 0x640, "StructProperty"},
            {"Cape_LookAt_Target", 0x6A8, "StructProperty"},
            {"GravityOverride", 0x6C0, "StructProperty"},
            {"ChaosClothingInteractor", 0x6D8, "ObjectProperty"},
            {"BwdMovement", 0x6E0, "DoubleProperty"},
            {"bRbanOrCloth", 0x6E8, "BoolProperty"},
            {"PhysicsAsset", 0x6F0, "ObjectProperty"},
            {"SkydivingAlpha", 0x6F8, "StructProperty"},
            {"WindGustLocalSettings", 0x710, "StructProperty"},
            {"ClothCoreSettings", 0x728, "StructProperty"},
            {"SimSpaceSettings_Base", 0x7A8, "StructProperty"},
            {"SimSpaceSettings_GrindingWeaponActive", 0x810, "StructProperty"},
            {"SimSpaceSettings_GrindTarget", 0x878, "StructProperty"},
            {"WraithFormCharacterDynamicsParameters", 0x8E0, "ObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HoverGameplayRuntime
{
    struct FortGameplayCueNotifyLoop_Hover
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_Hover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotifyLoop_SoundIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPawn = 0xCA0;
            static constexpr std::uintptr_t BackpackMesh = 0xCA8;
            static constexpr std::uintptr_t MovementModeRuntimeData = 0xCB0;
            static constexpr std::uintptr_t FuelAttribute = 0xCB8;
            static constexpr std::uintptr_t GroundTraceSocketName = 0xCF0;
            static constexpr std::uintptr_t GroundFXLocation = 0xCF8;
            static constexpr std::uintptr_t GroundFXRotation = 0xD10;
            static constexpr std::uintptr_t GroundFXHeight = 0xD28;
            static constexpr std::uintptr_t bIsSimulatedProxy = 0xD2C;
            static constexpr std::uintptr_t FXUpdateRate = 0xD30;
            static constexpr std::uintptr_t MaxGroundFXDistance = 0xD58;
            static constexpr std::uintptr_t LowFuelThreshold = 0xD88;
            static constexpr std::uintptr_t AscendFailBuffer = 0xDB8;
            static constexpr std::uintptr_t AscendFailThrusterFXOverride = 0xDE8;
            static constexpr std::uintptr_t MaxFuel = 0xE18;
            static constexpr std::uintptr_t VelocityAudioInterpSpeed = 0xE48;
            static constexpr std::uintptr_t AudioMaxHeight = 0xE78;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"TargetPawn", 0xCA0, "WeakObjectProperty"},
            {"BackpackMesh", 0xCA8, "WeakObjectProperty"},
            {"MovementModeRuntimeData", 0xCB0, "WeakObjectProperty"},
            {"FuelAttribute", 0xCB8, "StructProperty"},
            {"GroundTraceSocketName", 0xCF0, "NameProperty"},
            {"GroundFXLocation", 0xCF8, "StructProperty"},
            {"GroundFXRotation", 0xD10, "StructProperty"},
            {"GroundFXHeight", 0xD28, "FloatProperty"},
            {"bIsSimulatedProxy", 0xD2C, "BoolProperty"},
            {"FXUpdateRate", 0xD30, "StructProperty"},
            {"MaxGroundFXDistance", 0xD58, "StructProperty"},
            {"LowFuelThreshold", 0xD88, "StructProperty"},
            {"AscendFailBuffer", 0xDB8, "StructProperty"},
            {"AscendFailThrusterFXOverride", 0xDE8, "StructProperty"},
            {"MaxFuel", 0xE18, "StructProperty"},
            {"VelocityAudioInterpSpeed", 0xE48, "StructProperty"},
            {"AudioMaxHeight", 0xE78, "StructProperty"},
        }};
    };

    struct FortHoverPawnComponent
    {
        static constexpr std::string_view Name = "FortHoverPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DownwardsTargetingPreset = 0xD8;
            static constexpr std::uintptr_t AboveHeadTargetingPreset = 0xE0;
            static constexpr std::uintptr_t DownwardsTargetingHandle = 0xE8;
            static constexpr std::uintptr_t AboveHeadTargetingHandle = 0xEC;
            static constexpr std::uintptr_t WeakRuntimeData = 0xF0;
            static constexpr std::uintptr_t HeightLimitUpdateRate = 0xF8;
            static constexpr std::uintptr_t MaxWorldHeightLimit = 0x120;
            static constexpr std::uintptr_t DynamicAscensionLimit = 0x148;
            static constexpr std::uintptr_t AboveHeadDistance = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DownwardsTargetingPreset", 0xD8, "ObjectProperty"},
            {"AboveHeadTargetingPreset", 0xE0, "ObjectProperty"},
            {"DownwardsTargetingHandle", 0xE8, "StructProperty"},
            {"AboveHeadTargetingHandle", 0xEC, "StructProperty"},
            {"WeakRuntimeData", 0xF0, "WeakObjectProperty"},
            {"HeightLimitUpdateRate", 0xF8, "StructProperty"},
            {"MaxWorldHeightLimit", 0x120, "StructProperty"},
            {"DynamicAscensionLimit", 0x148, "StructProperty"},
            {"AboveHeadDistance", 0x170, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtHover
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtHover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t Row_LateralMovementStrength = 0x1B8;
            static constexpr std::uintptr_t Row_AscendStrength = 0x1E8;
            static constexpr std::uintptr_t Row_DescendStrength = 0x218;
            static constexpr std::uintptr_t Row_BoostStrength = 0x248;
            static constexpr std::uintptr_t Row_SustainedBoostStrength = 0x278;
            static constexpr std::uintptr_t Row_LateralBrakingStrength = 0x2A8;
            static constexpr std::uintptr_t Row_VerticalBrakingStrength = 0x2D8;
            static constexpr std::uintptr_t Row_DirectionalChangeBonus = 0x308;
            static constexpr std::uintptr_t Row_VerticleForceVelocityThreshold = 0x338;
            static constexpr std::uintptr_t Row_DescendAtHeightLimitThreshold = 0x368;
            static constexpr std::uintptr_t Row_AllowedTimeAboveHeightLimit = 0x398;
            static constexpr std::uintptr_t Row_BoostDuration = 0x3C8;
            static constexpr std::uintptr_t Row_BoostingDirectionChangeMax = 0x3F8;
            static constexpr std::uintptr_t Row_BoostingDirectionChangeMinMultiplier = 0x428;
            static constexpr std::uintptr_t Row_VelocityBrakeMulitplier = 0x458;
            static constexpr std::uintptr_t Row_HeightLimitZBrakeMultiplier = 0x488;
            static constexpr std::uintptr_t Row_LaunchBrakeMultiplier = 0x4B8;
            static constexpr std::uintptr_t Row_LateralMaxSpeed = 0x4E8;
            static constexpr std::uintptr_t Row_AscendingMaxSpeed = 0x518;
            static constexpr std::uintptr_t Row_ManuallyDescendingEnabled = 0x548;
            static constexpr std::uintptr_t Row_BoostingMaxSpeed = 0x578;
            static constexpr std::uintptr_t Row_BoostingSustainedMaxSpeed = 0x5A8;
            static constexpr std::uintptr_t Row_MinSpeed = 0x5D8;
            static constexpr std::uintptr_t Row_MinBoostSpeed = 0x608;
            static constexpr std::uintptr_t Row_MaxBoostVelocityAngleChangeRate = 0x638;
            static constexpr std::uintptr_t Row_MaxBoostRotationDelta = 0x668;
            static constexpr std::uintptr_t Row_SoftHeightLimitSize = 0x698;
            static constexpr std::uintptr_t Row_HeightLimitMaxInterpDistance = 0x6C8;
            static constexpr std::uintptr_t Row_HeightLimitRiseSpeed = 0x6F8;
            static constexpr std::uintptr_t Row_HeightLimitFallSpeed = 0x728;
            static constexpr std::uintptr_t Row_LaunchResponseMaxTime = 0x758;
            static constexpr std::uintptr_t Row_LaunchResponseMinTime = 0x788;
            static constexpr std::uintptr_t Row_EndHoverOnLanding = 0x7B8;
            static constexpr std::uintptr_t Row_RequireHoverTagGranted = 0x7E8;
            static constexpr std::uintptr_t BoostTutorialDurationRequirement = 0x818;
            static constexpr std::uintptr_t EnableBoostToggling = 0x840;
            static constexpr std::uintptr_t EnableAscendFailFeedback = 0x868;
            static constexpr std::uintptr_t AscendFailBelowHeightBuffer = 0x890;
            static constexpr std::uintptr_t AscendFailCooldownTime = 0x8B8;
            static constexpr std::uintptr_t EnableBoostInitialCost = 0x8E0;
            static constexpr std::uintptr_t BaseFuelConsumeEffect = 0x908;
            static constexpr std::uintptr_t InAirModifiersEffect = 0x910;
            static constexpr std::uintptr_t BoostCooldownEffect = 0x918;
            static constexpr std::uintptr_t BoostEffect = 0x920;
            static constexpr std::uintptr_t AscendEffect = 0x928;
            static constexpr std::uintptr_t FallDamageImmunityEffect = 0x930;
            static constexpr std::uintptr_t AscendFailEffect = 0x938;
            static constexpr std::uintptr_t BoostInitialCostEffect = 0x940;
            static constexpr std::uintptr_t HoverFallDamageImmunityTag = 0x948;
            static constexpr std::uintptr_t JumpInAirEventTag = 0x94C;
            static constexpr std::uintptr_t UsedLaunchPadEventTag = 0x950;
            static constexpr std::uintptr_t HoverEndedEventTag = 0x954;
            static constexpr std::uintptr_t HoverEndedCueTag = 0x958;
            static constexpr std::uintptr_t BoostingGameplayCueTag = 0x95C;
            static constexpr std::uintptr_t HoverInputContext = 0x960;
            static constexpr std::uintptr_t HoverAscendAction = 0x968;
            static constexpr std::uintptr_t HoverBoostAction = 0x970;
            static constexpr std::uintptr_t HoverCancelAction = 0x978;
            static constexpr std::uintptr_t WeakRuntimeData = 0x980;
            static constexpr std::uintptr_t WeakHoverPawnComponent = 0x988;
            static constexpr std::uintptr_t WeakInputSubsystem = 0x990;
            static constexpr std::uintptr_t BaseFuelConsumeHandle = 0x998;
            static constexpr std::uintptr_t InAirModifiersHandle = 0x9AC;
            static constexpr std::uintptr_t BoostCooldownHandle = 0x9C0;
            static constexpr std::uintptr_t AscendHandle = 0x9D4;
            static constexpr std::uintptr_t BoostHandle = 0x9E8;
            static constexpr std::uintptr_t WaitForLaunchAction = 0xA08;
            static constexpr std::uintptr_t bCanPlayAutomaticAscendFailFeedback = 0xA10;
            static constexpr std::uintptr_t CurrentAscendFailCooldown = 0xA14;
            static constexpr std::uintptr_t bBoostTutorialComplete = 0xA18;
            static constexpr std::uintptr_t bCanGrantFallDamageImmunity = 0xA18;
            static constexpr std::uintptr_t bHasStoppedAscendSinceFeedback = 0xA18;
            static constexpr std::uintptr_t bShouldApplyEndHoverCues = 0xA18;
            static constexpr std::uintptr_t RuntimeDataClass = 0xA20;
            static constexpr std::uintptr_t AnimLayer = 0xA28;
            static constexpr std::uintptr_t BoostCooldownTag = 0xA30;
            static constexpr std::uintptr_t BoostBlockTags = 0xA38;
            static constexpr std::uintptr_t FuelAttribute = 0xA58;
            static constexpr std::uintptr_t CancelTutorialStartTag = 0xA90;
            static constexpr std::uintptr_t CancelTutorialCompleteTag = 0xA94;
            static constexpr std::uintptr_t BoostTutorialStartTag = 0xA98;
            static constexpr std::uintptr_t BoostTutorialCompleteTag = 0xA9C;
            static constexpr std::uintptr_t LaunchResponseTagQuery = 0xAA0;
            static constexpr std::uintptr_t HoverInputContextPriority = 0xAE8;
        };

        inline static constexpr std::array<PropertyInfo, 84> Properties{{
            {"Row_LateralMovementStrength", 0x1B8, "StructProperty"},
            {"Row_AscendStrength", 0x1E8, "StructProperty"},
            {"Row_DescendStrength", 0x218, "StructProperty"},
            {"Row_BoostStrength", 0x248, "StructProperty"},
            {"Row_SustainedBoostStrength", 0x278, "StructProperty"},
            {"Row_LateralBrakingStrength", 0x2A8, "StructProperty"},
            {"Row_VerticalBrakingStrength", 0x2D8, "StructProperty"},
            {"Row_DirectionalChangeBonus", 0x308, "StructProperty"},
            {"Row_VerticleForceVelocityThreshold", 0x338, "StructProperty"},
            {"Row_DescendAtHeightLimitThreshold", 0x368, "StructProperty"},
            {"Row_AllowedTimeAboveHeightLimit", 0x398, "StructProperty"},
            {"Row_BoostDuration", 0x3C8, "StructProperty"},
            {"Row_BoostingDirectionChangeMax", 0x3F8, "StructProperty"},
            {"Row_BoostingDirectionChangeMinMultiplier", 0x428, "StructProperty"},
            {"Row_VelocityBrakeMulitplier", 0x458, "StructProperty"},
            {"Row_HeightLimitZBrakeMultiplier", 0x488, "StructProperty"},
            {"Row_LaunchBrakeMultiplier", 0x4B8, "StructProperty"},
            {"Row_LateralMaxSpeed", 0x4E8, "StructProperty"},
            {"Row_AscendingMaxSpeed", 0x518, "StructProperty"},
            {"Row_ManuallyDescendingEnabled", 0x548, "StructProperty"},
            {"Row_BoostingMaxSpeed", 0x578, "StructProperty"},
            {"Row_BoostingSustainedMaxSpeed", 0x5A8, "StructProperty"},
            {"Row_MinSpeed", 0x5D8, "StructProperty"},
            {"Row_MinBoostSpeed", 0x608, "StructProperty"},
            {"Row_MaxBoostVelocityAngleChangeRate", 0x638, "StructProperty"},
            {"Row_MaxBoostRotationDelta", 0x668, "StructProperty"},
            {"Row_SoftHeightLimitSize", 0x698, "StructProperty"},
            {"Row_HeightLimitMaxInterpDistance", 0x6C8, "StructProperty"},
            {"Row_HeightLimitRiseSpeed", 0x6F8, "StructProperty"},
            {"Row_HeightLimitFallSpeed", 0x728, "StructProperty"},
            {"Row_LaunchResponseMaxTime", 0x758, "StructProperty"},
            {"Row_LaunchResponseMinTime", 0x788, "StructProperty"},
            {"Row_EndHoverOnLanding", 0x7B8, "StructProperty"},
            {"Row_RequireHoverTagGranted", 0x7E8, "StructProperty"},
            {"BoostTutorialDurationRequirement", 0x818, "StructProperty"},
            {"EnableBoostToggling", 0x840, "StructProperty"},
            {"EnableAscendFailFeedback", 0x868, "StructProperty"},
            {"AscendFailBelowHeightBuffer", 0x890, "StructProperty"},
            {"AscendFailCooldownTime", 0x8B8, "StructProperty"},
            {"EnableBoostInitialCost", 0x8E0, "StructProperty"},
            {"BaseFuelConsumeEffect", 0x908, "ClassProperty"},
            {"InAirModifiersEffect", 0x910, "ClassProperty"},
            {"BoostCooldownEffect", 0x918, "ClassProperty"},
            {"BoostEffect", 0x920, "ClassProperty"},
            {"AscendEffect", 0x928, "ClassProperty"},
            {"FallDamageImmunityEffect", 0x930, "ClassProperty"},
            {"AscendFailEffect", 0x938, "ClassProperty"},
            {"BoostInitialCostEffect", 0x940, "ClassProperty"},
            {"HoverFallDamageImmunityTag", 0x948, "StructProperty"},
            {"JumpInAirEventTag", 0x94C, "StructProperty"},
            {"UsedLaunchPadEventTag", 0x950, "StructProperty"},
            {"HoverEndedEventTag", 0x954, "StructProperty"},
            {"HoverEndedCueTag", 0x958, "StructProperty"},
            {"BoostingGameplayCueTag", 0x95C, "StructProperty"},
            {"HoverInputContext", 0x960, "ObjectProperty"},
            {"HoverAscendAction", 0x968, "ObjectProperty"},
            {"HoverBoostAction", 0x970, "ObjectProperty"},
            {"HoverCancelAction", 0x978, "ObjectProperty"},
            {"WeakRuntimeData", 0x980, "WeakObjectProperty"},
            {"WeakHoverPawnComponent", 0x988, "WeakObjectProperty"},
            {"WeakInputSubsystem", 0x990, "WeakObjectProperty"},
            {"BaseFuelConsumeHandle", 0x998, "StructProperty"},
            {"InAirModifiersHandle", 0x9AC, "StructProperty"},
            {"BoostCooldownHandle", 0x9C0, "StructProperty"},
            {"AscendHandle", 0x9D4, "StructProperty"},
            {"BoostHandle", 0x9E8, "StructProperty"},
            {"WaitForLaunchAction", 0xA08, "ObjectProperty"},
            {"bCanPlayAutomaticAscendFailFeedback", 0xA10, "BoolProperty"},
            {"CurrentAscendFailCooldown", 0xA14, "FloatProperty"},
            {"bBoostTutorialComplete", 0xA18, "BoolProperty"},
            {"bCanGrantFallDamageImmunity", 0xA18, "BoolProperty"},
            {"bHasStoppedAscendSinceFeedback", 0xA18, "BoolProperty"},
            {"bShouldApplyEndHoverCues", 0xA18, "BoolProperty"},
            {"RuntimeDataClass", 0xA20, "ClassProperty"},
            {"AnimLayer", 0xA28, "ClassProperty"},
            {"BoostCooldownTag", 0xA30, "StructProperty"},
            {"BoostBlockTags", 0xA38, "StructProperty"},
            {"FuelAttribute", 0xA58, "StructProperty"},
            {"CancelTutorialStartTag", 0xA90, "StructProperty"},
            {"CancelTutorialCompleteTag", 0xA94, "StructProperty"},
            {"BoostTutorialStartTag", 0xA98, "StructProperty"},
            {"BoostTutorialCompleteTag", 0xA9C, "StructProperty"},
            {"LaunchResponseTagQuery", 0xAA0, "StructProperty"},
            {"HoverInputContextPriority", 0xAE8, "IntProperty"},
        }};
    };

    struct FortMovementMode_HoverRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_HoverRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t bAscend = 0x38;
            static constexpr std::uintptr_t bDescend = 0x39;
            static constexpr std::uintptr_t bBoosting = 0x3A;
            static constexpr std::uintptr_t TimeInBoost = 0x3C;
            static constexpr std::uintptr_t bHasInteruptedForwardBoost = 0x40;
            static constexpr std::uintptr_t TargetHeightLimit = 0x44;
            static constexpr std::uintptr_t CurrentHeightLimit = 0x48;
            static constexpr std::uintptr_t TimeAboveHeightLimit = 0x4C;
            static constexpr std::uintptr_t bObstacleAboveHead = 0x50;
            static constexpr std::uintptr_t bStopHover = 0x51;
            static constexpr std::uintptr_t bLanded = 0x52;
            static constexpr std::uintptr_t bLocalAscending = 0x54;
            static constexpr std::uintptr_t bLocalDescending = 0x55;
            static constexpr std::uintptr_t bLocalBoosting = 0x56;
            static constexpr std::uintptr_t bLocalStopHover = 0x57;
            static constexpr std::uintptr_t PreviousBoostVelocity = 0x58;
            static constexpr std::uintptr_t TimeSinceLaunched = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"bAscend", 0x38, "BoolProperty"},
            {"bDescend", 0x39, "BoolProperty"},
            {"bBoosting", 0x3A, "BoolProperty"},
            {"TimeInBoost", 0x3C, "FloatProperty"},
            {"bHasInteruptedForwardBoost", 0x40, "BoolProperty"},
            {"TargetHeightLimit", 0x44, "FloatProperty"},
            {"CurrentHeightLimit", 0x48, "FloatProperty"},
            {"TimeAboveHeightLimit", 0x4C, "FloatProperty"},
            {"bObstacleAboveHead", 0x50, "BoolProperty"},
            {"bStopHover", 0x51, "BoolProperty"},
            {"bLanded", 0x52, "BoolProperty"},
            {"bLocalAscending", 0x54, "BoolProperty"},
            {"bLocalDescending", 0x55, "BoolProperty"},
            {"bLocalBoosting", 0x56, "BoolProperty"},
            {"bLocalStopHover", 0x57, "BoolProperty"},
            {"PreviousBoostVelocity", 0x58, "StructProperty"},
            {"TimeSinceLaunched", 0x70, "FloatProperty"},
        }};
    };

    struct HoverAttributeSet
    {
        static constexpr std::string_view Name = "HoverAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxFuel = 0x50;
            static constexpr std::uintptr_t Fuel = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxFuel", 0x50, "StructProperty"},
            {"Fuel", 0x78, "StructProperty"},
        }};
    };

}

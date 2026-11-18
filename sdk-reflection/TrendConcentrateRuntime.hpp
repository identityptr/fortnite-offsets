#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TrendConcentrateRuntime
{
    struct ABPTrendConcentrateDBNORagdollLayerAnimInstance
    {
        static constexpr std::string_view Name = "ABPTrendConcentrateDBNORagdollLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDBNOAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDBNORagdoll = 0x11C0;
            static constexpr std::uintptr_t TumblePlayRate = 0x11C8;
            static constexpr std::uintptr_t MinRollSpeed = 0x11D0;
            static constexpr std::uintptr_t MaxRollSpeed = 0x11D4;
            static constexpr std::uintptr_t MinRollAnimSpeed = 0x11D8;
            static constexpr std::uintptr_t MaxRollAnimSpeed = 0x11DC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsDBNORagdoll", 0x11C0, "BoolProperty"},
            {"TumblePlayRate", 0x11C8, "DoubleProperty"},
            {"MinRollSpeed", 0x11D0, "FloatProperty"},
            {"MaxRollSpeed", 0x11D4, "FloatProperty"},
            {"MinRollAnimSpeed", 0x11D8, "FloatProperty"},
            {"MaxRollAnimSpeed", 0x11DC, "FloatProperty"},
        }};
    };

    struct ABPTrendConcentrateImpulseRollLayerAnimInstance
    {
        static constexpr std::string_view Name = "ABPTrendConcentrateImpulseRollLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDBNOAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RootOffsetAlpha = 0x11C0;
            static constexpr std::uintptr_t RootOffset = 0x11C8;
            static constexpr std::uintptr_t TagContainerBwd = 0x11D0;
            static constexpr std::uintptr_t TagContainerFwd = 0x11F0;
            static constexpr std::uintptr_t ImpulsedTagName = 0x1210;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RootOffsetAlpha", 0x11C0, "FloatProperty"},
            {"RootOffset", 0x11C8, "DoubleProperty"},
            {"TagContainerBwd", 0x11D0, "StructProperty"},
            {"TagContainerFwd", 0x11F0, "StructProperty"},
            {"ImpulsedTagName", 0x1210, "StructProperty"},
        }};
    };

    struct FortBTService_TrendConcentrateActions
    {
        static constexpr std::string_view Name = "FortBTService_TrendConcentrateActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct FortMovementMode_DBNOSprintRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_DBNOSprintRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicDBNORoll
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicDBNORoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t RollEnergyCost = 0x5A0;
            static constexpr std::uintptr_t RollDuration = 0x5C8;
            static constexpr std::uintptr_t RollDistance = 0x5F0;
            static constexpr std::uintptr_t RollTags = 0x618;
            static constexpr std::uintptr_t DBNORollEnabled = 0x638;
            static constexpr std::uintptr_t TagsThatBlockRoll = 0x660;
            static constexpr std::uintptr_t DBNORollCooldown = 0x680;
            static constexpr std::uintptr_t AnimLayer = 0x6A8;
            static constexpr std::uintptr_t SortedDBNORollEntries = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"RollEnergyCost", 0x5A0, "StructProperty"},
            {"RollDuration", 0x5C8, "StructProperty"},
            {"RollDistance", 0x5F0, "StructProperty"},
            {"RollTags", 0x618, "StructProperty"},
            {"DBNORollEnabled", 0x638, "StructProperty"},
            {"TagsThatBlockRoll", 0x660, "StructProperty"},
            {"DBNORollCooldown", 0x680, "StructProperty"},
            {"AnimLayer", 0x6A8, "ClassProperty"},
            {"SortedDBNORollEntries", 0x6B0, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicDBNOSprint
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicDBNOSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumEnergy = 0x1B8;
            static constexpr std::uintptr_t SprintCostPerSecond = 0x1E0;
            static constexpr std::uintptr_t EnergyUseIdentifier = 0x208;
            static constexpr std::uintptr_t SpeedlinesCue = 0x20C;
            static constexpr std::uintptr_t CamShakeCue = 0x210;
            static constexpr std::uintptr_t DBNOSprintGE = 0x218;
            static constexpr std::uintptr_t SprintSpeedMultiplier = 0x220;
            static constexpr std::uintptr_t DBNOSprintEnabled = 0x248;
            static constexpr std::uintptr_t TagsThatBlockSprint = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MinimumEnergy", 0x1B8, "StructProperty"},
            {"SprintCostPerSecond", 0x1E0, "StructProperty"},
            {"EnergyUseIdentifier", 0x208, "StructProperty"},
            {"SpeedlinesCue", 0x20C, "StructProperty"},
            {"CamShakeCue", 0x210, "StructProperty"},
            {"DBNOSprintGE", 0x218, "ClassProperty"},
            {"SprintSpeedMultiplier", 0x220, "StructProperty"},
            {"DBNOSprintEnabled", 0x248, "StructProperty"},
            {"TagsThatBlockSprint", 0x270, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicRagdollBase
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicRagdollBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicRagdoll";
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

    struct FortTrendConcentratePawnComponent
    {
        static constexpr std::string_view Name = "FortTrendConcentratePawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CleanUpDBNOStatusTagsForBots = 0xC8;
            static constexpr std::uintptr_t SprintMovementModeExtension = 0xF8;
            static constexpr std::uintptr_t DBNOSprintStatusTag = 0x100;
            static constexpr std::uintptr_t EnoughEnergyToDBNOSprintTag = 0x104;
            static constexpr std::uintptr_t BotRollDirection = 0x110;
            static constexpr std::uintptr_t RollMovementModeExtension = 0x128;
            static constexpr std::uintptr_t DBNORollCooldown = 0x130;
            static constexpr std::uintptr_t DBNORollMinEnergyRequired = 0x158;
            static constexpr std::uintptr_t DBNORollStatusTag = 0x180;
            static constexpr std::uintptr_t DBNORollMovementModeTag = 0x184;
            static constexpr std::uintptr_t DBNORollTriggeredTime = 0x188;
            static constexpr std::uintptr_t FallStartZ = 0x18C;
            static constexpr std::uintptr_t DBNORagdollSlopeThresholdFromRoll = 0x190;
            static constexpr std::uintptr_t DBNORagdollSlopeThresholdFromFall = 0x1B8;
            static constexpr std::uintptr_t DBNORagdollHorizontalSpeedThreshold = 0x1E0;
            static constexpr std::uintptr_t DBNORagdollMinimumFallHeightTrigger = 0x208;
            static constexpr std::uintptr_t DBNORagdollInitSpeedFromRoll = 0x230;
            static constexpr std::uintptr_t DBNORagdollInitSpeedFromFall = 0x258;
            static constexpr std::uintptr_t RagdollMovementModeExtension = 0x280;
            static constexpr std::uintptr_t FallSplatAnimMontage = 0x288;
            static constexpr std::uintptr_t DBNORagdollExclusionTag = 0x290;
            static constexpr std::uintptr_t DBNORagdollMovementModeTag = 0x294;
            static constexpr std::uintptr_t AbilitiesToCancelOnRagdoll = 0x298;
            static constexpr std::uintptr_t DBNORagdollStatusTag = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CleanUpDBNOStatusTagsForBots", 0xC8, "StructProperty"},
            {"SprintMovementModeExtension", 0xF8, "ClassProperty"},
            {"DBNOSprintStatusTag", 0x100, "StructProperty"},
            {"EnoughEnergyToDBNOSprintTag", 0x104, "StructProperty"},
            {"BotRollDirection", 0x110, "StructProperty"},
            {"RollMovementModeExtension", 0x128, "ClassProperty"},
            {"DBNORollCooldown", 0x130, "StructProperty"},
            {"DBNORollMinEnergyRequired", 0x158, "StructProperty"},
            {"DBNORollStatusTag", 0x180, "StructProperty"},
            {"DBNORollMovementModeTag", 0x184, "StructProperty"},
            {"DBNORollTriggeredTime", 0x188, "FloatProperty"},
            {"FallStartZ", 0x18C, "FloatProperty"},
            {"DBNORagdollSlopeThresholdFromRoll", 0x190, "StructProperty"},
            {"DBNORagdollSlopeThresholdFromFall", 0x1B8, "StructProperty"},
            {"DBNORagdollHorizontalSpeedThreshold", 0x1E0, "StructProperty"},
            {"DBNORagdollMinimumFallHeightTrigger", 0x208, "StructProperty"},
            {"DBNORagdollInitSpeedFromRoll", 0x230, "StructProperty"},
            {"DBNORagdollInitSpeedFromFall", 0x258, "StructProperty"},
            {"RagdollMovementModeExtension", 0x280, "ClassProperty"},
            {"FallSplatAnimMontage", 0x288, "ObjectProperty"},
            {"DBNORagdollExclusionTag", 0x290, "StructProperty"},
            {"DBNORagdollMovementModeTag", 0x294, "StructProperty"},
            {"AbilitiesToCancelOnRagdoll", 0x298, "StructProperty"},
            {"DBNORagdollStatusTag", 0x2B8, "StructProperty"},
        }};
    };

    struct RagdollCameraMode
    {
        static constexpr std::string_view Name = "RagdollCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToTrack = 0x2080;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneToTrack", 0x2080, "NameProperty"},
        }};
    };

    struct TrendConcentrateDBNOOverride
    {
        static constexpr std::string_view Name = "TrendConcentrateDBNOOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DBNOBehaviorOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DBNOEnhancementsEnabled = 0xC8;
            static constexpr std::uintptr_t DBNOAllowDodgeRoll = 0xF0;
            static constexpr std::uintptr_t DBNOAllowSprint = 0x118;
            static constexpr std::uintptr_t DBNOSprintingStaminaCost = 0x140;
            static constexpr std::uintptr_t DBNOAllowRagdoll = 0x168;
            static constexpr std::uintptr_t DBNOAllowHurdle = 0x190;
            static constexpr std::uintptr_t DBNOAllowInteractions = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DBNOEnhancementsEnabled", 0xC8, "StructProperty"},
            {"DBNOAllowDodgeRoll", 0xF0, "StructProperty"},
            {"DBNOAllowSprint", 0x118, "StructProperty"},
            {"DBNOSprintingStaminaCost", 0x140, "StructProperty"},
            {"DBNOAllowRagdoll", 0x168, "StructProperty"},
            {"DBNOAllowHurdle", 0x190, "StructProperty"},
            {"DBNOAllowInteractions", 0x1B8, "StructProperty"},
        }};
    };

}

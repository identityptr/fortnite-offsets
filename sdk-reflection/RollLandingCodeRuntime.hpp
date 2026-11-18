#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RollLandingCodeRuntime
{
    struct FortAthenaAIBotEvaluator_RollLanding
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_RollLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpExecutionStatusName = 0xA8;
            static constexpr std::uintptr_t EvaluatorTickInterval = 0xB0;
            static constexpr std::uintptr_t RollInputTime = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JumpExecutionStatusName", 0xA8, "NameProperty"},
            {"EvaluatorTickInterval", 0xB0, "StructProperty"},
            {"RollInputTime", 0xD8, "StructProperty"},
        }};
    };

    struct FortControllerComponent_RollLanding
    {
        static constexpr std::string_view Name = "FortControllerComponent_RollLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RollLandingEnabled = 0xD8;
            static constexpr std::uintptr_t RollLandingLogicClass = 0x100;
            static constexpr std::uintptr_t MinInitialFallHeight = 0x108;
            static constexpr std::uintptr_t EnableHoldJumpInput = 0x130;
            static constexpr std::uintptr_t AllowHoldJumpInputPreFallHeightOrSpeed = 0x158;
            static constexpr std::uintptr_t RollLandingMovementModeTag = 0x180;
            static constexpr std::uintptr_t MinSpeedRequirementToSkipFallCheck = 0x188;
            static constexpr std::uintptr_t IgnoreFallHeightTag = 0x1B0;
            static constexpr std::uintptr_t DisableSpeedTriggerTag = 0x1B4;
            static constexpr std::uintptr_t CanBeTriggeredTag = 0x1B8;
            static constexpr std::uintptr_t BlockedTag = 0x1BC;
            static constexpr std::uintptr_t RollLandingAvailableMonitorRate = 0x1C0;
            static constexpr std::uintptr_t RollLandingHoldMonitorRate = 0x1C4;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"RollLandingEnabled", 0xD8, "StructProperty"},
            {"RollLandingLogicClass", 0x100, "ClassProperty"},
            {"MinInitialFallHeight", 0x108, "StructProperty"},
            {"EnableHoldJumpInput", 0x130, "StructProperty"},
            {"AllowHoldJumpInputPreFallHeightOrSpeed", 0x158, "StructProperty"},
            {"RollLandingMovementModeTag", 0x180, "StructProperty"},
            {"MinSpeedRequirementToSkipFallCheck", 0x188, "StructProperty"},
            {"IgnoreFallHeightTag", 0x1B0, "StructProperty"},
            {"DisableSpeedTriggerTag", 0x1B4, "StructProperty"},
            {"CanBeTriggeredTag", 0x1B8, "StructProperty"},
            {"BlockedTag", 0x1BC, "StructProperty"},
            {"RollLandingAvailableMonitorRate", 0x1C0, "FloatProperty"},
            {"RollLandingHoldMonitorRate", 0x1C4, "FloatProperty"},
        }};
    };

    struct FortMovementMode_ExtRollLanding
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtRollLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeed = 0x1C0;
            static constexpr std::uintptr_t InputBufferTime = 0x1E8;
            static constexpr std::uintptr_t MaxAcceleration = 0x210;
            static constexpr std::uintptr_t BlockJumpWindow = 0x238;
            static constexpr std::uintptr_t BlockSlidingWindow = 0x260;
            static constexpr std::uintptr_t RollLandingGameplayCueTag = 0x288;
            static constexpr std::uintptr_t GCRollLandingPushedTag = 0x28C;
            static constexpr std::uintptr_t GERollLandingFallDamageList = 0x290;
            static constexpr std::uintptr_t GERollLandingFallDamageIndex = 0x2A0;
            static constexpr std::uintptr_t RollLandingDamageReduction = 0x2C8;
            static constexpr std::uintptr_t FallDamageOverrideEnabled = 0x2F0;
            static constexpr std::uintptr_t OnPushedBlockAbilityTags = 0x318;
            static constexpr std::uintptr_t OnPushedOwnedTags = 0x338;
            static constexpr std::uintptr_t PreventHolsterTag = 0x358;
            static constexpr std::uintptr_t DamageReductionExecutionModifierTag = 0x35C;
            static constexpr std::uintptr_t DamageManagerEffectTags = 0x360;
            static constexpr std::uintptr_t RollLandingStateToTagMap = 0x380;
            static constexpr std::uintptr_t BlockAbilitiesDuringRollingState = 0x390;
            static constexpr std::uintptr_t FallDamageOverrideEnabledTag = 0x3B0;
            static constexpr std::uintptr_t AnimationDelayTime = 0x3B8;
            static constexpr std::uintptr_t RollMontageMap = 0x3E0;
            static constexpr std::uintptr_t CardinalToDotMap = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"MaxSpeed", 0x1C0, "StructProperty"},
            {"InputBufferTime", 0x1E8, "StructProperty"},
            {"MaxAcceleration", 0x210, "StructProperty"},
            {"BlockJumpWindow", 0x238, "StructProperty"},
            {"BlockSlidingWindow", 0x260, "StructProperty"},
            {"RollLandingGameplayCueTag", 0x288, "StructProperty"},
            {"GCRollLandingPushedTag", 0x28C, "StructProperty"},
            {"GERollLandingFallDamageList", 0x290, "ArrayProperty"},
            {"GERollLandingFallDamageIndex", 0x2A0, "StructProperty"},
            {"RollLandingDamageReduction", 0x2C8, "StructProperty"},
            {"FallDamageOverrideEnabled", 0x2F0, "StructProperty"},
            {"OnPushedBlockAbilityTags", 0x318, "StructProperty"},
            {"OnPushedOwnedTags", 0x338, "StructProperty"},
            {"PreventHolsterTag", 0x358, "StructProperty"},
            {"DamageReductionExecutionModifierTag", 0x35C, "StructProperty"},
            {"DamageManagerEffectTags", 0x360, "StructProperty"},
            {"RollLandingStateToTagMap", 0x380, "MapProperty"},
            {"BlockAbilitiesDuringRollingState", 0x390, "StructProperty"},
            {"FallDamageOverrideEnabledTag", 0x3B0, "StructProperty"},
            {"AnimationDelayTime", 0x3B8, "StructProperty"},
            {"RollMontageMap", 0x3E0, "MapProperty"},
            {"CardinalToDotMap", 0x3F0, "MapProperty"},
        }};
    };

    struct FortMovementMode_RollLandingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_RollLandingRuntimeData";
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

}

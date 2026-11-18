#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNTabascoTwist
{
    struct FortMovementMode_TabascoTwist
    {
        static constexpr std::string_view Name = "FortMovementMode_TabascoTwist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHorizontalSpeed = 0x1C0;
            static constexpr std::uintptr_t HorizontalAcceleration = 0x1F0;
            static constexpr std::uintptr_t HorizontalBrakingAcceleration = 0x220;
            static constexpr std::uintptr_t GravityScale = 0x250;
            static constexpr std::uintptr_t MinBounceAngle = 0x280;
            static constexpr std::uintptr_t MaxReflectedVelocity = 0x2B0;
            static constexpr std::uintptr_t BounceDebounceDelay = 0x2E0;
            static constexpr std::uintptr_t ForceMovement = 0x310;
            static constexpr std::uintptr_t AirborneTag = 0x338;
            static constexpr std::uintptr_t JumpActionTag = 0x33C;
            static constexpr std::uintptr_t MidairJumpCount = 0x340;
            static constexpr std::uintptr_t JumpImpulseVelocity = 0x370;
            static constexpr std::uintptr_t MaxJumpTime = 0x3A0;
            static constexpr std::uintptr_t JumpHoldForce = 0x3D0;
            static constexpr std::uintptr_t JumpCoyoteTime = 0x400;
            static constexpr std::uintptr_t EnergyComponentTagQuery = 0x430;
            static constexpr std::uintptr_t InitialEnergyCost = 0x478;
            static constexpr std::uintptr_t EnergyConsumptionRate = 0x4A8;
            static constexpr std::uintptr_t EnergyConsumptionTag = 0x4D4;
            static constexpr std::uintptr_t JumpCueTag = 0x4D8;
            static constexpr std::uintptr_t LandCueTag = 0x4DC;
            static constexpr std::uintptr_t BounceCueTag = 0x4E0;
            static constexpr std::uintptr_t KnockbackEventTag = 0x4E4;
            static constexpr std::uintptr_t KnockbackTargetQuery = 0x4E8;
            static constexpr std::uintptr_t KnockbackCapsuleRadius = 0x530;
            static constexpr std::uintptr_t KnockbackCapsuleHalfHeight = 0x560;
            static constexpr std::uintptr_t KnockbackSweepVerticalOffset = 0x590;
            static constexpr std::uintptr_t KnockbackSweepDistance = 0x5C0;
            static constexpr std::uintptr_t KnockbackSweepChannel = 0x5EC;
            static constexpr std::uintptr_t KnockbackCollisionChannel = 0x5ED;
            static constexpr std::uintptr_t BounceOffPawns = 0x5EE;
            static constexpr std::uintptr_t AbilitySet = 0x5F0;
            static constexpr std::uintptr_t ScrollTag = 0x5F8;
            static constexpr std::uintptr_t ScrollInventoryGroup = 0x5FC;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"MaxHorizontalSpeed", 0x1C0, "StructProperty"},
            {"HorizontalAcceleration", 0x1F0, "StructProperty"},
            {"HorizontalBrakingAcceleration", 0x220, "StructProperty"},
            {"GravityScale", 0x250, "StructProperty"},
            {"MinBounceAngle", 0x280, "StructProperty"},
            {"MaxReflectedVelocity", 0x2B0, "StructProperty"},
            {"BounceDebounceDelay", 0x2E0, "StructProperty"},
            {"ForceMovement", 0x310, "StructProperty"},
            {"AirborneTag", 0x338, "StructProperty"},
            {"JumpActionTag", 0x33C, "StructProperty"},
            {"MidairJumpCount", 0x340, "StructProperty"},
            {"JumpImpulseVelocity", 0x370, "StructProperty"},
            {"MaxJumpTime", 0x3A0, "StructProperty"},
            {"JumpHoldForce", 0x3D0, "StructProperty"},
            {"JumpCoyoteTime", 0x400, "StructProperty"},
            {"EnergyComponentTagQuery", 0x430, "StructProperty"},
            {"InitialEnergyCost", 0x478, "StructProperty"},
            {"EnergyConsumptionRate", 0x4A8, "StructProperty"},
            {"EnergyConsumptionTag", 0x4D4, "StructProperty"},
            {"JumpCueTag", 0x4D8, "StructProperty"},
            {"LandCueTag", 0x4DC, "StructProperty"},
            {"BounceCueTag", 0x4E0, "StructProperty"},
            {"KnockbackEventTag", 0x4E4, "StructProperty"},
            {"KnockbackTargetQuery", 0x4E8, "StructProperty"},
            {"KnockbackCapsuleRadius", 0x530, "StructProperty"},
            {"KnockbackCapsuleHalfHeight", 0x560, "StructProperty"},
            {"KnockbackSweepVerticalOffset", 0x590, "StructProperty"},
            {"KnockbackSweepDistance", 0x5C0, "StructProperty"},
            {"KnockbackSweepChannel", 0x5EC, "ByteProperty"},
            {"KnockbackCollisionChannel", 0x5ED, "ByteProperty"},
            {"BounceOffPawns", 0x5EE, "BoolProperty"},
            {"AbilitySet", 0x5F0, "ObjectProperty"},
            {"ScrollTag", 0x5F8, "StructProperty"},
            {"ScrollInventoryGroup", 0x5FC, "StructProperty"},
        }};
    };

    struct FortMovementMode_TabascoTwistLaunch
    {
        static constexpr std::string_view Name = "FortMovementMode_TabascoTwistLaunch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPawn = 0x44;
            static constexpr std::uintptr_t OwnerMovementComponent = 0x4C;
            static constexpr std::uintptr_t OwnerAbilitySystemComponent = 0x54;
            static constexpr std::uintptr_t bUseFullSimulation = 0x5C;
            static constexpr std::uintptr_t SimProxyTickMode = 0x5D;
            static constexpr std::uintptr_t bUseDilatedDeltaTime = 0x5E;
            static constexpr std::uintptr_t MovementModeExtensionIDTag = 0x78;
            static constexpr std::uintptr_t QuestMovementMode = 0x98;
            static constexpr std::uintptr_t StartMMECue = 0x9C;
            static constexpr std::uintptr_t EndMMECue = 0xA0;
            static constexpr std::uintptr_t MMEContinuousCue = 0xA4;
            static constexpr std::uintptr_t AbilityIDTag = 0xA8;
            static constexpr std::uintptr_t StartEventTag = 0xC8;
            static constexpr std::uintptr_t StopEventTag = 0xCC;
            static constexpr std::uintptr_t NativeActionTag = 0xD0;
            static constexpr std::uintptr_t BlockingMMETags = 0xD8;
            static constexpr std::uintptr_t TagsToPush = 0xF8;
            static constexpr std::uintptr_t CancelAbilityTags = 0x118;
            static constexpr std::uintptr_t BlockAbilityTags = 0x138;
            static constexpr std::uintptr_t RequiredMMETags = 0x158;
            static constexpr std::uintptr_t bShouldSkipRootMotionResimulation = 0x178;
            static constexpr std::uintptr_t bIsSimulatedProxy = 0x179;
            static constexpr std::uintptr_t bIsLocalPlayer = 0x17A;
            static constexpr std::uintptr_t bIsServer = 0x17B;
            static constexpr std::uintptr_t bIsServerBotControlled = 0x17C;
            static constexpr std::uintptr_t CameraMode = 0x188;
            static constexpr std::uintptr_t CameraModeTag = 0x190;
            static constexpr std::uintptr_t MaxSpeedThresholdCombine = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"OwnerPawn", 0x44, "WeakObjectProperty"},
            {"OwnerMovementComponent", 0x4C, "WeakObjectProperty"},
            {"OwnerAbilitySystemComponent", 0x54, "WeakObjectProperty"},
            {"bUseFullSimulation", 0x5C, "BoolProperty"},
            {"SimProxyTickMode", 0x5D, "EnumProperty"},
            {"bUseDilatedDeltaTime", 0x5E, "BoolProperty"},
            {"MovementModeExtensionIDTag", 0x78, "StructProperty"},
            {"QuestMovementMode", 0x98, "EnumProperty"},
            {"StartMMECue", 0x9C, "StructProperty"},
            {"EndMMECue", 0xA0, "StructProperty"},
            {"MMEContinuousCue", 0xA4, "StructProperty"},
            {"AbilityIDTag", 0xA8, "StructProperty"},
            {"StartEventTag", 0xC8, "StructProperty"},
            {"StopEventTag", 0xCC, "StructProperty"},
            {"NativeActionTag", 0xD0, "StructProperty"},
            {"BlockingMMETags", 0xD8, "StructProperty"},
            {"TagsToPush", 0xF8, "StructProperty"},
            {"CancelAbilityTags", 0x118, "StructProperty"},
            {"BlockAbilityTags", 0x138, "StructProperty"},
            {"RequiredMMETags", 0x158, "StructProperty"},
            {"bShouldSkipRootMotionResimulation", 0x178, "BoolProperty"},
            {"bIsSimulatedProxy", 0x179, "BoolProperty"},
            {"bIsLocalPlayer", 0x17A, "BoolProperty"},
            {"bIsServer", 0x17B, "BoolProperty"},
            {"bIsServerBotControlled", 0x17C, "BoolProperty"},
            {"CameraMode", 0x188, "ClassProperty"},
            {"CameraModeTag", 0x190, "StructProperty"},
            {"MaxSpeedThresholdCombine", 0x194, "FloatProperty"},
        }};
    };

    struct FortMovementMode_TabascoTwistLaunchRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TabascoTwistLaunchRuntimeData";
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

    struct FortMovementMode_TabascoTwistRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TabascoTwistRuntimeData";
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

    struct JunoCameraModifierTabascoTwist
    {
        static constexpr std::string_view Name = "JunoCameraModifierTabascoTwist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t RowAddedFOV = 0x48;
            static constexpr std::uintptr_t RowJumpForward = 0x70;
            static constexpr std::uintptr_t RowRightOffsetClamp = 0x98;
            static constexpr std::uintptr_t RowForwardOffsetOldRangeMin = 0xC0;
            static constexpr std::uintptr_t RowForwardOffsetOldRangeMax = 0xE8;
            static constexpr std::uintptr_t RowForwardOffsetNewRangeMin = 0x110;
            static constexpr std::uintptr_t RowForwardOffsetNewRangeMax = 0x138;
            static constexpr std::uintptr_t T_Jumping = 0x160;
            static constexpr std::uintptr_t RowForwardMultiplier = 0x168;
            static constexpr std::uintptr_t TargetUpOffset = 0x190;
            static constexpr std::uintptr_t RowRightOffsetBaseMod = 0x1B8;
            static constexpr std::uintptr_t RowFOVMaxSpeed = 0x1E0;
            static constexpr std::uintptr_t RowRightOffsetOldRangeMin = 0x208;
            static constexpr std::uintptr_t RowRightOffsetOldRangeMax = 0x230;
            static constexpr std::uintptr_t RowForwardRightConversionOldRangeMin = 0x258;
            static constexpr std::uintptr_t RowForwardRightConversionOldRangeMax = 0x280;
            static constexpr std::uintptr_t RowForwardRightConversionNewRangeMin = 0x2A8;
            static constexpr std::uintptr_t RowForwardRightConversionNewRangeMax = 0x2D0;
            static constexpr std::uintptr_t RowForwardInterpSpeed = 0x2F8;
            static constexpr std::uintptr_t RowRightInterpSpeed = 0x320;
            static constexpr std::uintptr_t RowUpInterpSpeed = 0x348;
            static constexpr std::uintptr_t RowRightOffsetSpeedGivenMod = 0x370;
            static constexpr std::uintptr_t RowFOVInterpSpeed = 0x398;
            static constexpr std::uintptr_t RowOffsetVectorInterpSpeed = 0x3C0;
            static constexpr std::uintptr_t RowUpSpeedForwardOldRangeMin = 0x3E8;
            static constexpr std::uintptr_t RowUpSpeedForwardOldRangeMax = 0x410;
            static constexpr std::uintptr_t RowUpSpeedForwardNewRangeMin = 0x438;
            static constexpr std::uintptr_t RowUpSpeedForwardNewRangeMax = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"RowAddedFOV", 0x48, "StructProperty"},
            {"RowJumpForward", 0x70, "StructProperty"},
            {"RowRightOffsetClamp", 0x98, "StructProperty"},
            {"RowForwardOffsetOldRangeMin", 0xC0, "StructProperty"},
            {"RowForwardOffsetOldRangeMax", 0xE8, "StructProperty"},
            {"RowForwardOffsetNewRangeMin", 0x110, "StructProperty"},
            {"RowForwardOffsetNewRangeMax", 0x138, "StructProperty"},
            {"T_Jumping", 0x160, "StructProperty"},
            {"RowForwardMultiplier", 0x168, "StructProperty"},
            {"TargetUpOffset", 0x190, "StructProperty"},
            {"RowRightOffsetBaseMod", 0x1B8, "StructProperty"},
            {"RowFOVMaxSpeed", 0x1E0, "StructProperty"},
            {"RowRightOffsetOldRangeMin", 0x208, "StructProperty"},
            {"RowRightOffsetOldRangeMax", 0x230, "StructProperty"},
            {"RowForwardRightConversionOldRangeMin", 0x258, "StructProperty"},
            {"RowForwardRightConversionOldRangeMax", 0x280, "StructProperty"},
            {"RowForwardRightConversionNewRangeMin", 0x2A8, "StructProperty"},
            {"RowForwardRightConversionNewRangeMax", 0x2D0, "StructProperty"},
            {"RowForwardInterpSpeed", 0x2F8, "StructProperty"},
            {"RowRightInterpSpeed", 0x320, "StructProperty"},
            {"RowUpInterpSpeed", 0x348, "StructProperty"},
            {"RowRightOffsetSpeedGivenMod", 0x370, "StructProperty"},
            {"RowFOVInterpSpeed", 0x398, "StructProperty"},
            {"RowOffsetVectorInterpSpeed", 0x3C0, "StructProperty"},
            {"RowUpSpeedForwardOldRangeMin", 0x3E8, "StructProperty"},
            {"RowUpSpeedForwardOldRangeMax", 0x410, "StructProperty"},
            {"RowUpSpeedForwardNewRangeMin", 0x438, "StructProperty"},
            {"RowUpSpeedForwardNewRangeMax", 0x460, "StructProperty"},
        }};
    };

    struct JunoTabascoTwistCheatManager
    {
        static constexpr std::string_view Name = "JunoTabascoTwistCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t TabascoTwistMovementAbility = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TabascoTwistMovementAbility", 0x28, "ClassProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WindRuntime
{
    struct FortPlayerWindTunnelAnimInstance
    {
        static constexpr std::string_view Name = "FortPlayerWindTunnelAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyWindSlideAdditive = 0x1180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bApplyWindSlideAdditive", 0x1180, "BoolProperty"},
        }};
    };

    struct LinearWindField
    {
        static constexpr std::string_view Name = "LinearWindField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WindField";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x2C8;
            static constexpr std::uintptr_t FieldStrength = 0x2E0;
            static constexpr std::uintptr_t ForceStrength = 0x2E4;
            static constexpr std::uintptr_t PawnForceName = 0x2E8;
            static constexpr std::uintptr_t PawnForceStrength = 0x2EC;
            static constexpr std::uintptr_t RadialVector = 0x2F0;
            static constexpr std::uintptr_t RadialFalloff = 0x2F8;
            static constexpr std::uintptr_t OperatorField = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Direction", 0x2C8, "StructProperty"},
            {"FieldStrength", 0x2E0, "FloatProperty"},
            {"ForceStrength", 0x2E4, "FloatProperty"},
            {"PawnForceName", 0x2E8, "NameProperty"},
            {"PawnForceStrength", 0x2EC, "FloatProperty"},
            {"RadialVector", 0x2F0, "ObjectProperty"},
            {"RadialFalloff", 0x2F8, "ObjectProperty"},
            {"OperatorField", 0x300, "ObjectProperty"},
        }};
    };

    struct RadialWindField
    {
        static constexpr std::string_view Name = "RadialWindField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WindField";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldRadius = 0x2C8;
            static constexpr std::uintptr_t FieldStrength = 0x2F0;
            static constexpr std::uintptr_t ForceRadius = 0x318;
            static constexpr std::uintptr_t ForceStrength = 0x340;
            static constexpr std::uintptr_t ForceStrengthDistanceFalloff = 0x368;
            static constexpr std::uintptr_t PawnForceName = 0x370;
            static constexpr std::uintptr_t PawnForceStrength = 0x378;
            static constexpr std::uintptr_t PawnForceStrengthDistanceFalloff = 0x3A0;
            static constexpr std::uintptr_t bPawnForceIsPush = 0x3A8;
            static constexpr std::uintptr_t RadialVector = 0x3B0;
            static constexpr std::uintptr_t RadialFalloff = 0x3B8;
            static constexpr std::uintptr_t OperatorField = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"FieldRadius", 0x2C8, "StructProperty"},
            {"FieldStrength", 0x2F0, "StructProperty"},
            {"ForceRadius", 0x318, "StructProperty"},
            {"ForceStrength", 0x340, "StructProperty"},
            {"ForceStrengthDistanceFalloff", 0x368, "ObjectProperty"},
            {"PawnForceName", 0x370, "NameProperty"},
            {"PawnForceStrength", 0x378, "StructProperty"},
            {"PawnForceStrengthDistanceFalloff", 0x3A0, "ObjectProperty"},
            {"bPawnForceIsPush", 0x3A8, "BoolProperty"},
            {"RadialVector", 0x3B0, "ObjectProperty"},
            {"RadialFalloff", 0x3B8, "ObjectProperty"},
            {"OperatorField", 0x3C0, "ObjectProperty"},
        }};
    };

    struct WindCheatManager
    {
        static constexpr std::string_view Name = "WindCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t InflateEffectClass = 0x28;
            static constexpr std::uintptr_t DeflateEffectClass = 0x48;
            static constexpr std::uintptr_t MinBalloonsOnPlayer = 0x68;
            static constexpr std::uintptr_t MaxBalloonsOnPlayer = 0x6C;
            static constexpr std::uintptr_t CachedInflateEffectClass = 0x70;
            static constexpr std::uintptr_t CachedDeflateEffectClass = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InflateEffectClass", 0x28, "SoftClassProperty"},
            {"DeflateEffectClass", 0x48, "SoftClassProperty"},
            {"MinBalloonsOnPlayer", 0x68, "IntProperty"},
            {"MaxBalloonsOnPlayer", 0x6C, "IntProperty"},
            {"CachedInflateEffectClass", 0x70, "ClassProperty"},
            {"CachedDeflateEffectClass", 0x78, "ClassProperty"},
        }};
    };

    struct WindField
    {
        static constexpr std::string_view Name = "WindField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemActor";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTime = 0x280;
            static constexpr std::uintptr_t StopTime = 0x284;
            static constexpr std::uintptr_t IncomingDuration = 0x288;
            static constexpr std::uintptr_t OutgoingDuration = 0x28C;
            static constexpr std::uintptr_t StrengthMultiplier = 0x290;
            static constexpr std::uintptr_t bIsActive = 0x294;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartTime", 0x280, "FloatProperty"},
            {"StopTime", 0x284, "FloatProperty"},
            {"IncomingDuration", 0x288, "FloatProperty"},
            {"OutgoingDuration", 0x28C, "FloatProperty"},
            {"StrengthMultiplier", 0x290, "FloatProperty"},
            {"bIsActive", 0x294, "BoolProperty"},
        }};
    };

    struct WindSplineComponent
    {
        static constexpr std::string_view Name = "WindSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisableSafeZonePhaseIndex = 0x6E0;
            static constexpr std::uintptr_t StaticMesh = 0x708;
            static constexpr std::uintptr_t StartStaticMesh = 0x710;
            static constexpr std::uintptr_t EndStaticMesh = 0x718;
            static constexpr std::uintptr_t MeshForwardAxis = 0x720;
            static constexpr std::uintptr_t MeshRollVariance = 0x728;
            static constexpr std::uintptr_t ActiveSectionStartMaterialParamName = 0x750;
            static constexpr std::uintptr_t ActiveSectionEndMaterialParamName = 0x754;
            static constexpr std::uintptr_t TargetingRefreshRate = 0x758;
            static constexpr std::uintptr_t TargetingRadius = 0x780;
            static constexpr std::uintptr_t TargetObjectTypes = 0x7A8;
            static constexpr std::uintptr_t TargetTagQuery = 0x7B8;
            static constexpr std::uintptr_t BlockageTagQuery = 0x800;
            static constexpr std::uintptr_t BlockageSubdivisions = 0x848;
            static constexpr std::uintptr_t TargetEffects = 0x870;
            static constexpr std::uintptr_t ObjectTypeToMaxTargetCount = 0x880;
            static constexpr std::uintptr_t MaxTargetCountReachedExpelDuration = 0x890;
            static constexpr std::uintptr_t SkydivingLandingAngle = 0x8B8;
            static constexpr std::uintptr_t RampUpSpeed = 0x8E0;
            static constexpr std::uintptr_t RampDownSpeed = 0x908;
            static constexpr std::uintptr_t ForwardForceFallOffStartDistance = 0x930;
            static constexpr std::uintptr_t ForwardForceMagnitude = 0x958;
            static constexpr std::uintptr_t ReverseForceMagnitude = 0x980;
            static constexpr std::uintptr_t ForwardForceDistanceFallOffExponent = 0x9A8;
            static constexpr std::uintptr_t InwardForceInnerRadius = 0x9D0;
            static constexpr std::uintptr_t InwardForceOuterRadiusAcceleration = 0x9F8;
            static constexpr std::uintptr_t InwardForceInnerRadiusDeceleration = 0xA20;
            static constexpr std::uintptr_t InwardForceInnerRadiusSpeedThreshold = 0xA48;
            static constexpr std::uintptr_t InwardForceOuterRadiusSpeedThreshold = 0xA70;
            static constexpr std::uintptr_t InwardForceMaxReductionFromSteering = 0xA98;
            static constexpr std::uintptr_t InwardForceMaxMultiplierWhenSteering = 0xAC0;
            static constexpr std::uintptr_t InwardForceMaxSteerAngle = 0xAE8;
            static constexpr std::uintptr_t InwardForceLowVelocityThreshold = 0xB10;
            static constexpr std::uintptr_t InwardForceLowVelocityMinValue = 0xB38;
            static constexpr std::uintptr_t InwardForceSteeringReduceAccelerationPower = 0xB60;
            static constexpr std::uintptr_t InwardForceSteeringReduceDecelerationPower = 0xB88;
            static constexpr std::uintptr_t SizeForceModifiers = 0xBB0;
            static constexpr std::uintptr_t ObjectTypeForceModifiers = 0xBC0;
            static constexpr std::uintptr_t QueryBasedForceModifiers = 0xBD0;
            static constexpr std::uintptr_t PawnSkydivingTimeLimitQuery = 0xBE0;
            static constexpr std::uintptr_t PawnSkydivingTimeLimit = 0xC28;
            static constexpr std::uintptr_t PawnSkydivingMinDistanceAboveGround = 0xC50;
            static constexpr std::uintptr_t AutoWakeUpPhysicsObjects = 0xC78;
            static constexpr std::uintptr_t FieldMagnitudeBase = 0xCA0;
            static constexpr std::uintptr_t FieldMinMagnitudeAfterFalloff = 0xCC8;
            static constexpr std::uintptr_t FieldMaxMagnitudeAfterFalloff = 0xCF0;
            static constexpr std::uintptr_t PlayerWindAnimationLayer = 0xD18;
            static constexpr std::uintptr_t OnWindSplineDisabled = 0xD20;
            static constexpr std::uintptr_t OnWindSplineEnabled = 0xD30;
            static constexpr std::uintptr_t TargetData = 0xD40;
            static constexpr std::uintptr_t Blockages = 0xDB8;
            static constexpr std::uintptr_t FieldSystemComponent = 0xE10;
            static constexpr std::uintptr_t UniformVector = 0xE18;
            static constexpr std::uintptr_t BoxFalloff = 0xE20;
            static constexpr std::uintptr_t BoxOperatorField = 0xE28;
            static constexpr std::uintptr_t MeshDataArray = 0xE30;
            static constexpr std::uintptr_t FXComponents = 0xE40;
        };

        inline static constexpr std::array<PropertyInfo, 57> Properties{{
            {"DisableSafeZonePhaseIndex", 0x6E0, "StructProperty"},
            {"StaticMesh", 0x708, "ObjectProperty"},
            {"StartStaticMesh", 0x710, "ObjectProperty"},
            {"EndStaticMesh", 0x718, "ObjectProperty"},
            {"MeshForwardAxis", 0x720, "ByteProperty"},
            {"MeshRollVariance", 0x728, "StructProperty"},
            {"ActiveSectionStartMaterialParamName", 0x750, "NameProperty"},
            {"ActiveSectionEndMaterialParamName", 0x754, "NameProperty"},
            {"TargetingRefreshRate", 0x758, "StructProperty"},
            {"TargetingRadius", 0x780, "StructProperty"},
            {"TargetObjectTypes", 0x7A8, "ArrayProperty"},
            {"TargetTagQuery", 0x7B8, "StructProperty"},
            {"BlockageTagQuery", 0x800, "StructProperty"},
            {"BlockageSubdivisions", 0x848, "StructProperty"},
            {"TargetEffects", 0x870, "ArrayProperty"},
            {"ObjectTypeToMaxTargetCount", 0x880, "MapProperty"},
            {"MaxTargetCountReachedExpelDuration", 0x890, "StructProperty"},
            {"SkydivingLandingAngle", 0x8B8, "StructProperty"},
            {"RampUpSpeed", 0x8E0, "StructProperty"},
            {"RampDownSpeed", 0x908, "StructProperty"},
            {"ForwardForceFallOffStartDistance", 0x930, "StructProperty"},
            {"ForwardForceMagnitude", 0x958, "StructProperty"},
            {"ReverseForceMagnitude", 0x980, "StructProperty"},
            {"ForwardForceDistanceFallOffExponent", 0x9A8, "StructProperty"},
            {"InwardForceInnerRadius", 0x9D0, "StructProperty"},
            {"InwardForceOuterRadiusAcceleration", 0x9F8, "StructProperty"},
            {"InwardForceInnerRadiusDeceleration", 0xA20, "StructProperty"},
            {"InwardForceInnerRadiusSpeedThreshold", 0xA48, "StructProperty"},
            {"InwardForceOuterRadiusSpeedThreshold", 0xA70, "StructProperty"},
            {"InwardForceMaxReductionFromSteering", 0xA98, "StructProperty"},
            {"InwardForceMaxMultiplierWhenSteering", 0xAC0, "StructProperty"},
            {"InwardForceMaxSteerAngle", 0xAE8, "StructProperty"},
            {"InwardForceLowVelocityThreshold", 0xB10, "StructProperty"},
            {"InwardForceLowVelocityMinValue", 0xB38, "StructProperty"},
            {"InwardForceSteeringReduceAccelerationPower", 0xB60, "StructProperty"},
            {"InwardForceSteeringReduceDecelerationPower", 0xB88, "StructProperty"},
            {"SizeForceModifiers", 0xBB0, "MapProperty"},
            {"ObjectTypeForceModifiers", 0xBC0, "MapProperty"},
            {"QueryBasedForceModifiers", 0xBD0, "ArrayProperty"},
            {"PawnSkydivingTimeLimitQuery", 0xBE0, "StructProperty"},
            {"PawnSkydivingTimeLimit", 0xC28, "StructProperty"},
            {"PawnSkydivingMinDistanceAboveGround", 0xC50, "StructProperty"},
            {"AutoWakeUpPhysicsObjects", 0xC78, "StructProperty"},
            {"FieldMagnitudeBase", 0xCA0, "StructProperty"},
            {"FieldMinMagnitudeAfterFalloff", 0xCC8, "StructProperty"},
            {"FieldMaxMagnitudeAfterFalloff", 0xCF0, "StructProperty"},
            {"PlayerWindAnimationLayer", 0xD18, "ClassProperty"},
            {"OnWindSplineDisabled", 0xD20, "MulticastInlineDelegateProperty"},
            {"OnWindSplineEnabled", 0xD30, "MulticastInlineDelegateProperty"},
            {"TargetData", 0xD40, "StructProperty"},
            {"Blockages", 0xDB8, "StructProperty"},
            {"FieldSystemComponent", 0xE10, "ObjectProperty"},
            {"UniformVector", 0xE18, "ObjectProperty"},
            {"BoxFalloff", 0xE20, "ObjectProperty"},
            {"BoxOperatorField", 0xE28, "ObjectProperty"},
            {"MeshDataArray", 0xE30, "ArrayProperty"},
            {"FXComponents", 0xE40, "ArrayProperty"},
        }};
    };

}

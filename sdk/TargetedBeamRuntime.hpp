#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TargetedBeamRuntime
{
    struct FortActorComponent_TargetedBeam
    {
        static constexpr std::string_view Name = "FortActorComponent_TargetedBeam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBeamDataUpdated = 0xC0;
            static constexpr std::uintptr_t AddEquippedWeaponTagsToDamage = 0xD0;
            static constexpr std::uintptr_t ClientSideTargetingEnabled = 0xF8;
            static constexpr std::uintptr_t AlwaysPerformServerTargeting = 0x120;
            static constexpr std::uintptr_t BeamType = 0x148;
            static constexpr std::uintptr_t ImpactAOETargetingPreset = 0x150;
            static constexpr std::uintptr_t BoxOverlapTargetingPreset = 0x158;
            static constexpr std::uintptr_t BoxOverlapWidth = 0x160;
            static constexpr std::uintptr_t BoxOverlapHeight = 0x188;
            static constexpr std::uintptr_t BeamDamageGEClass = 0x1B0;
            static constexpr std::uintptr_t BeamDamagePerSecond = 0x1B8;
            static constexpr std::uintptr_t BeamMaxRange = 0x1E0;
            static constexpr std::uintptr_t BeamChargeUpTime = 0x208;
            static constexpr std::uintptr_t BeamDuration = 0x230;
            static constexpr std::uintptr_t BeamMaxAngle = 0x258;
            static constexpr std::uintptr_t BeamTraceCollisionChannel = 0x280;
            static constexpr std::uintptr_t bCanBeamDamageOwnerVehicle = 0x281;
            static constexpr std::uintptr_t BeamServerUpdateInterval = 0x288;
            static constexpr std::uintptr_t BeamReplicationSkipOwner = 0x2B0;
            static constexpr std::uintptr_t bSearchForStartSocketOnWeapon = 0x2D8;
            static constexpr std::uintptr_t BeamStartSocketName = 0x2DC;
            static constexpr std::uintptr_t bIsClientAlwaysTargeting = 0x2E0;
            static constexpr std::uintptr_t bBroadcastTargetingStateChange = 0x2E1;
            static constexpr std::uintptr_t ActualTraceLengthAdjustment = 0x2E8;
            static constexpr std::uintptr_t BeamEndpointInterpSpeed = 0x310;
            static constexpr std::uintptr_t SplineBehavior = 0x338;
            static constexpr std::uintptr_t DeleteBeamSplineWaitSeconds = 0x340;
            static constexpr std::uintptr_t BeamSplineComponent = 0x368;
            static constexpr std::uintptr_t BeamData = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"OnBeamDataUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"AddEquippedWeaponTagsToDamage", 0xD0, "StructProperty"},
            {"ClientSideTargetingEnabled", 0xF8, "StructProperty"},
            {"AlwaysPerformServerTargeting", 0x120, "StructProperty"},
            {"BeamType", 0x148, "EnumProperty"},
            {"ImpactAOETargetingPreset", 0x150, "ObjectProperty"},
            {"BoxOverlapTargetingPreset", 0x158, "ObjectProperty"},
            {"BoxOverlapWidth", 0x160, "StructProperty"},
            {"BoxOverlapHeight", 0x188, "StructProperty"},
            {"BeamDamageGEClass", 0x1B0, "ClassProperty"},
            {"BeamDamagePerSecond", 0x1B8, "StructProperty"},
            {"BeamMaxRange", 0x1E0, "StructProperty"},
            {"BeamChargeUpTime", 0x208, "StructProperty"},
            {"BeamDuration", 0x230, "StructProperty"},
            {"BeamMaxAngle", 0x258, "StructProperty"},
            {"BeamTraceCollisionChannel", 0x280, "ByteProperty"},
            {"bCanBeamDamageOwnerVehicle", 0x281, "BoolProperty"},
            {"BeamServerUpdateInterval", 0x288, "StructProperty"},
            {"BeamReplicationSkipOwner", 0x2B0, "StructProperty"},
            {"bSearchForStartSocketOnWeapon", 0x2D8, "BoolProperty"},
            {"BeamStartSocketName", 0x2DC, "NameProperty"},
            {"bIsClientAlwaysTargeting", 0x2E0, "BoolProperty"},
            {"bBroadcastTargetingStateChange", 0x2E1, "BoolProperty"},
            {"ActualTraceLengthAdjustment", 0x2E8, "StructProperty"},
            {"BeamEndpointInterpSpeed", 0x310, "StructProperty"},
            {"SplineBehavior", 0x338, "EnumProperty"},
            {"DeleteBeamSplineWaitSeconds", 0x340, "StructProperty"},
            {"BeamSplineComponent", 0x368, "ObjectProperty"},
            {"BeamData", 0x3A0, "StructProperty"},
        }};
    };

    struct FortGameplayCueNotifyLoop_TargetedBeam
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_TargetedBeam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleComponents = 0xC58;
            static constexpr std::uintptr_t BeamComponents = 0xC68;
            static constexpr std::uintptr_t ImpactFXComponent = 0xC78;
            static constexpr std::uintptr_t ImpactFXComponent_Light = 0xC80;
            static constexpr std::uintptr_t WaterFXComponent = 0xC88;
            static constexpr std::uintptr_t TargetedBeamActorComponent = 0xC90;
            static constexpr std::uintptr_t CurrentEndpoint = 0xC98;
            static constexpr std::uintptr_t CurrentSplinePointData = 0xCB0;
            static constexpr std::uintptr_t bBeamStarted = 0xCC0;
            static constexpr std::uintptr_t bHitEffectPreviousActivateState = 0xCC1;
            static constexpr std::uintptr_t bIsLocallyControlled = 0xCC2;
            static constexpr std::uintptr_t BeamInterpSpeed_Local = 0xCC8;
            static constexpr std::uintptr_t BeamInterpSpeed_SimProxy = 0xCF0;
            static constexpr std::uintptr_t SplinePointInterpSpeed_SimProxy = 0xD18;
            static constexpr std::uintptr_t SplinePointInterpSpeed_Local = 0xD40;
            static constexpr std::uintptr_t TickVFXInLateGroup = 0xD68;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ParticleComponents", 0xC58, "ArrayProperty"},
            {"BeamComponents", 0xC68, "ArrayProperty"},
            {"ImpactFXComponent", 0xC78, "ObjectProperty"},
            {"ImpactFXComponent_Light", 0xC80, "ObjectProperty"},
            {"WaterFXComponent", 0xC88, "ObjectProperty"},
            {"TargetedBeamActorComponent", 0xC90, "ObjectProperty"},
            {"CurrentEndpoint", 0xC98, "StructProperty"},
            {"CurrentSplinePointData", 0xCB0, "ArrayProperty"},
            {"bBeamStarted", 0xCC0, "BoolProperty"},
            {"bHitEffectPreviousActivateState", 0xCC1, "BoolProperty"},
            {"bIsLocallyControlled", 0xCC2, "BoolProperty"},
            {"BeamInterpSpeed_Local", 0xCC8, "StructProperty"},
            {"BeamInterpSpeed_SimProxy", 0xCF0, "StructProperty"},
            {"SplinePointInterpSpeed_SimProxy", 0xD18, "StructProperty"},
            {"SplinePointInterpSpeed_Local", 0xD40, "StructProperty"},
            {"TickVFXInLateGroup", 0xD68, "StructProperty"},
        }};
    };

}

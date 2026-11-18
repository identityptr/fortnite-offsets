#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TeaCakeSpacePlungeSharedRuntime
{
    struct DarkVoyagerDroneCreatureAnimInstance
    {
        static constexpr std::string_view Name = "DarkVoyagerDroneCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bDoHitReact = 0x4A0;
            static constexpr std::uintptr_t bState_IsAlerted = 0x4A1;
            static constexpr std::uintptr_t bState_IsScanning = 0x4A2;
            static constexpr std::uintptr_t bState_IsMoving = 0x4A3;
            static constexpr std::uintptr_t bMovingToAlerted_Transition = 0x4A4;
            static constexpr std::uintptr_t AlertedTagName = 0x4A8;
            static constexpr std::uintptr_t ScanningTagName = 0x4AC;
            static constexpr std::uintptr_t MovingTagName = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bDoHitReact", 0x4A0, "BoolProperty"},
            {"bState_IsAlerted", 0x4A1, "BoolProperty"},
            {"bState_IsScanning", 0x4A2, "BoolProperty"},
            {"bState_IsMoving", 0x4A3, "BoolProperty"},
            {"bMovingToAlerted_Transition", 0x4A4, "BoolProperty"},
            {"AlertedTagName", 0x4A8, "StructProperty"},
            {"ScanningTagName", 0x4AC, "StructProperty"},
            {"MovingTagName", 0x4B0, "StructProperty"},
        }};
    };

    struct TeacakeSpacePlungeDroneBase
    {
        static constexpr std::string_view Name = "TeacakeSpacePlungeDroneBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InherentAbilitySets = 0x6D8;
            static constexpr std::uintptr_t DamageStatHandle = 0x700;
            static constexpr std::uintptr_t bAllowRidingOnActor = 0x710;
            static constexpr std::uintptr_t OnProximityPulseDelegate = 0x718;
            static constexpr std::uintptr_t OnProximityPrePulseDelegate = 0x728;
            static constexpr std::uintptr_t OnProximityEffectsAppliedDelegate = 0x738;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoAppliedToTouchingActor = 0x748;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoChangedForExitingTouchActor = 0x758;
            static constexpr std::uintptr_t OnDidDamage = 0x768;
            static constexpr std::uintptr_t bIgnoreInstigatorCollision = 0x778;
            static constexpr std::uintptr_t bAddOwnerVelocity = 0x779;
            static constexpr std::uintptr_t AbilitySourceLevel = 0x77C;
            static constexpr std::uintptr_t DeliverableAbilityInfo = 0x780;
            static constexpr std::uintptr_t bApplyDefaultEnabledAbilityBucketsOnInit = 0x830;
            static constexpr std::uintptr_t bBlockMarking = 0x830;
            static constexpr std::uintptr_t bCanBeMarked = 0x830;
            static constexpr std::uintptr_t bShowInteractKeybind = 0x830;
            static constexpr std::uintptr_t bUseSimpleActorTouchSetupForAbilityBuckets = 0x830;
            static constexpr std::uintptr_t MarkerDisplay = 0x838;
            static constexpr std::uintptr_t MarkerPositionOffset = 0x8E8;
            static constexpr std::uintptr_t RegisteredTouchComponent = 0x900;
            static constexpr std::uintptr_t AnalyticsTags = 0x910;
            static constexpr std::uintptr_t PostProcessOverlapBlendWeight = 0x930;
            static constexpr std::uintptr_t CustomInteractionWidget = 0x938;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"InherentAbilitySets", 0x6D8, "ObjectProperty"},
            {"DamageStatHandle", 0x700, "StructProperty"},
            {"bAllowRidingOnActor", 0x710, "BoolProperty"},
            {"OnProximityPulseDelegate", 0x718, "MulticastInlineDelegateProperty"},
            {"OnProximityPrePulseDelegate", 0x728, "MulticastInlineDelegateProperty"},
            {"OnProximityEffectsAppliedDelegate", 0x738, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoAppliedToTouchingActor", 0x748, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoChangedForExitingTouchActor", 0x758, "MulticastInlineDelegateProperty"},
            {"OnDidDamage", 0x768, "MulticastInlineDelegateProperty"},
            {"bIgnoreInstigatorCollision", 0x778, "BoolProperty"},
            {"bAddOwnerVelocity", 0x779, "BoolProperty"},
            {"AbilitySourceLevel", 0x77C, "IntProperty"},
            {"DeliverableAbilityInfo", 0x780, "StructProperty"},
            {"bApplyDefaultEnabledAbilityBucketsOnInit", 0x830, "BoolProperty"},
            {"bBlockMarking", 0x830, "BoolProperty"},
            {"bCanBeMarked", 0x830, "BoolProperty"},
            {"bShowInteractKeybind", 0x830, "BoolProperty"},
            {"bUseSimpleActorTouchSetupForAbilityBuckets", 0x830, "BoolProperty"},
            {"MarkerDisplay", 0x838, "StructProperty"},
            {"MarkerPositionOffset", 0x8E8, "StructProperty"},
            {"RegisteredTouchComponent", 0x900, "ObjectProperty"},
            {"AnalyticsTags", 0x910, "StructProperty"},
            {"PostProcessOverlapBlendWeight", 0x930, "FloatProperty"},
            {"CustomInteractionWidget", 0x938, "ObjectProperty"},
        }};
    };

}

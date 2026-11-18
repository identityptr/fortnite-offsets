#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ScubaBondOakGameplayRuntime
{
    struct FortGameplayAbility_RideLightningTrail
    {
        static constexpr std::string_view Name = "FortGameplayAbility_RideLightningTrail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementExtensionClass = 0xB40;
            static constexpr std::uintptr_t TrailClassToSpawn = 0xB48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MovementExtensionClass", 0xB40, "ClassProperty"},
            {"TrailClassToSpawn", 0xB48, "ClassProperty"},
        }};
    };

    struct FortGameplayAbility_SBO_AntiCheatChecked
    {
        static constexpr std::string_view Name = "FortGameplayAbility_SBO_AntiCheatChecked";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldPerformAntiCheatChecks = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShouldPerformAntiCheatChecks", 0xB40, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ScubaBondOak_Activation
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScubaBondOak_Activation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_SBO_AntiCheatChecked";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldPerformAntiCheatChecks = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShouldPerformAntiCheatChecks", 0xB40, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ScubaBondOak_Use
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScubaBondOak_Use";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_SBO_AntiCheatChecked";
        struct Offsets
        {
            static constexpr std::uintptr_t AscensionBlockersTargetingPreset = 0xB68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AscensionBlockersTargetingPreset", 0xB68, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtScubaBondOak
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtScubaBondOak";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedAlongTrail = 0x1B8;
            static constexpr std::uintptr_t AccelerationCurve = 0x1E0;
            static constexpr std::uintptr_t SnapZOffset = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpeedAlongTrail", 0x1B8, "StructProperty"},
            {"AccelerationCurve", 0x1E0, "ObjectProperty"},
            {"SnapZOffset", 0x1E8, "FloatProperty"},
        }};
    };

    struct FortMovementMode_ExtScubaBondOakRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtScubaBondOakRuntimeData";
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

    struct FortProceduralGrindRailManager
    {
        static constexpr std::string_view Name = "FortProceduralGrindRailManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortScubaBondOak_LightningRift
    {
        static constexpr std::string_view Name = "FortScubaBondOak_LightningRift";
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

    struct FortScubaBondOak_LightningTrail
    {
        static constexpr std::string_view Name = "FortScubaBondOak_LightningTrail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightningTrailSpline = 0x940;
            static constexpr std::uintptr_t TrailSplineMeshTemplate = 0x948;
            static constexpr std::uintptr_t TrailCollisionMeshTemplate = 0x950;
            static constexpr std::uintptr_t MinSplineSegmentLength = 0x958;
            static constexpr std::uintptr_t CurrentPointInsertionData = 0x970;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LightningTrailSpline", 0x940, "ObjectProperty"},
            {"TrailSplineMeshTemplate", 0x948, "ClassProperty"},
            {"TrailCollisionMeshTemplate", 0x950, "ClassProperty"},
            {"MinSplineSegmentLength", 0x958, "FloatProperty"},
            {"CurrentPointInsertionData", 0x970, "StructProperty"},
        }};
    };

    struct ScubaBondOakLayerAnimInstance
    {
        static constexpr std::string_view Name = "ScubaBondOakLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIntoDash1 = 0x1180;
            static constexpr std::uintptr_t bIntoDash2 = 0x1181;
            static constexpr std::uintptr_t bExitTrans = 0x1182;
            static constexpr std::uintptr_t bActivated = 0x1183;
            static constexpr std::uintptr_t DivePitch = 0x1184;
            static constexpr std::uintptr_t DivePitchAlpha = 0x1188;
            static constexpr std::uintptr_t InDiveTagName = 0x118C;
            static constexpr std::uintptr_t ActiveTagName = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIntoDash1", 0x1180, "BoolProperty"},
            {"bIntoDash2", 0x1181, "BoolProperty"},
            {"bExitTrans", 0x1182, "BoolProperty"},
            {"bActivated", 0x1183, "BoolProperty"},
            {"DivePitch", 0x1184, "FloatProperty"},
            {"DivePitchAlpha", 0x1188, "FloatProperty"},
            {"InDiveTagName", 0x118C, "StructProperty"},
            {"ActiveTagName", 0x1190, "StructProperty"},
        }};
    };

    struct ScubaBondOakWeaponInterface
    {
        static constexpr std::string_view Name = "ScubaBondOakWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetFilteringTask_SBO_HotfixableTagQuery
    {
        static constexpr std::string_view Name = "TargetFilteringTask_SBO_HotfixableTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t HotfixableGameplayTagQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HotfixableGameplayTagQuery", 0x28, "StructProperty"},
        }};
    };

}

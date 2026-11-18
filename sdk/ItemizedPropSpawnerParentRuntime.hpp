#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemizedPropSpawnerParentRuntime
{
    struct FortControllerComponent_ItemizedPropSpawner
    {
        static constexpr std::string_view Name = "FortControllerComponent_ItemizedPropSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedInstances = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackedInstances", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortGameplayAbility_RangedPropSpawner
    {
        static constexpr std::string_view Name = "FortGameplayAbility_RangedPropSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_RangedWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t bRevertAmmoNumberForRejection = 0xB90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRevertAmmoNumberForRejection", 0xB90, "BoolProperty"},
        }};
    };

    struct FortWeaponRangedPropSpawner
    {
        static constexpr std::string_view Name = "FortWeaponRangedPropSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceSyncAmmoForLocalPropSpawnerWeapon = 0x2A98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bForceSyncAmmoForLocalPropSpawnerWeapon", 0x2A98, "BoolProperty"},
        }};
    };

    struct ItemizedPropSpawnerAnimInstanceProxy
    {
        static constexpr std::string_view Name = "ItemizedPropSpawnerAnimInstanceProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsUpperBody = 0x1180;
            static constexpr std::uintptr_t bGrindRail = 0x1181;
            static constexpr std::uintptr_t bIsIceFireToSprint = 0x1182;
            static constexpr std::uintptr_t bIsIceFireToIdle = 0x1183;
            static constexpr std::uintptr_t bIsIceFireFallStart = 0x1184;
            static constexpr std::uintptr_t bIsIceFireFallEnd = 0x1185;
            static constexpr std::uintptr_t bIsIceFireFullBodyGround = 0x1186;
            static constexpr std::uintptr_t bIsIceFire = 0x1187;
            static constexpr std::uintptr_t bIsIceFireUpperBody = 0x1188;
            static constexpr std::uintptr_t bIsFromIceFireEndStates = 0x1189;
            static constexpr std::uintptr_t bIsTrFromFireEndIdle = 0x118A;
            static constexpr std::uintptr_t bIsTrFromFireEndLoco = 0x118B;
            static constexpr std::uintptr_t bIsFireExitUnexpectedly = 0x118C;
            static constexpr std::uintptr_t bIsFireEndExitUnexpectedly = 0x118D;
            static constexpr std::uintptr_t UpperBodyTwistRotator = 0x1190;
            static constexpr std::uintptr_t TurnEndThreshold = 0x11A8;
            static constexpr std::uintptr_t TurnEndLocoThreshold = 0x11AC;
            static constexpr std::uintptr_t PawnVelocityZThreshold = 0x11B0;
            static constexpr std::uintptr_t InterruptibleThreshold = 0x11B4;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"bIsUpperBody", 0x1180, "BoolProperty"},
            {"bGrindRail", 0x1181, "BoolProperty"},
            {"bIsIceFireToSprint", 0x1182, "BoolProperty"},
            {"bIsIceFireToIdle", 0x1183, "BoolProperty"},
            {"bIsIceFireFallStart", 0x1184, "BoolProperty"},
            {"bIsIceFireFallEnd", 0x1185, "BoolProperty"},
            {"bIsIceFireFullBodyGround", 0x1186, "BoolProperty"},
            {"bIsIceFire", 0x1187, "BoolProperty"},
            {"bIsIceFireUpperBody", 0x1188, "BoolProperty"},
            {"bIsFromIceFireEndStates", 0x1189, "BoolProperty"},
            {"bIsTrFromFireEndIdle", 0x118A, "BoolProperty"},
            {"bIsTrFromFireEndLoco", 0x118B, "BoolProperty"},
            {"bIsFireExitUnexpectedly", 0x118C, "BoolProperty"},
            {"bIsFireEndExitUnexpectedly", 0x118D, "BoolProperty"},
            {"UpperBodyTwistRotator", 0x1190, "StructProperty"},
            {"TurnEndThreshold", 0x11A8, "FloatProperty"},
            {"TurnEndLocoThreshold", 0x11AC, "FloatProperty"},
            {"PawnVelocityZThreshold", 0x11B0, "FloatProperty"},
            {"InterruptibleThreshold", 0x11B4, "FloatProperty"},
        }};
    };

    struct ItemizedPropSpawnerFunctionLibraryNative
    {
        static constexpr std::string_view Name = "ItemizedPropSpawnerFunctionLibraryNative";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemizedPropSpawnerMultiPropSpawner
    {
        static constexpr std::string_view Name = "ItemizedPropSpawnerMultiPropSpawner";
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

    struct ItemizedPropSpawnerWallChunk
    {
        static constexpr std::string_view Name = "ItemizedPropSpawnerWallChunk";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentChunk = 0xB48;
            static constexpr std::uintptr_t WallActorClassDenyList = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParentChunk", 0xB48, "WeakObjectProperty"},
            {"WallActorClassDenyList", 0xB50, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BikeKidRuntime
{
    struct BikeKidDeferredDestructionPayload
    {
        static constexpr std::string_view Name = "BikeKidDeferredDestructionPayload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DeferredDestructionData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeferredDestructionData", 0x28, "StructProperty"},
        }};
    };

    struct BikeKidPassiveMarkPayload
    {
        static constexpr std::string_view Name = "BikeKidPassiveMarkPayload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetStatus = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetStatus", 0x28, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_BikeKid
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BikeKid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsControllingBikeKid = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsControllingBikeKid", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortBikeKid
    {
        static constexpr std::string_view Name = "FortBikeKid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t NSBikeKidIdle_Native = 0x688;
            static constexpr std::uintptr_t TeamMateIndicatorMarkerWidgetClass = 0x690;
            static constexpr std::uintptr_t BikeKidMotorLoopComponent = 0x698;
            static constexpr std::uintptr_t BikeKidThrustSoundComponent = 0x6A0;
            static constexpr std::uintptr_t DefaultTags = 0x6A8;
            static constexpr std::uintptr_t ExplosionCueTag = 0x6C8;
            static constexpr std::uintptr_t bExploded = 0x6CC;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x6D8;
            static constexpr std::uintptr_t AffiliationComponent = 0x6E0;
            static constexpr std::uintptr_t StartupAbilitySet = 0x6E8;
            static constexpr std::uintptr_t ControllingPlayerPawn = 0x6F0;
            static constexpr std::uintptr_t HealthSet = 0x6F8;
            static constexpr std::uintptr_t EnergySet = 0x700;
            static constexpr std::uintptr_t AttributeInitKey = 0x708;
            static constexpr std::uintptr_t PrimarySurfaceType = 0x710;
            static constexpr std::uintptr_t WeaponResponseType = 0x711;
            static constexpr std::uintptr_t bPlayedDeath = 0x712;
            static constexpr std::uintptr_t OutOfHealthDismissDelayData = 0x714;
            static constexpr std::uintptr_t ExplodeEffectContainerSpecs = 0x728;
            static constexpr std::uintptr_t OnTeamIndexChanged = 0x738;
            static constexpr std::uintptr_t PawnOverrideComponentClass = 0x748;
            static constexpr std::uintptr_t BikeKidMotorLoopSound = 0x750;
            static constexpr std::uintptr_t BikeKidThrusterSound = 0x758;
            static constexpr std::uintptr_t AudioParameter = 0x760;
            static constexpr std::uintptr_t LocallyViewedPawnAudioParamName = 0x768;
            static constexpr std::uintptr_t IsEnemyAudioParamName = 0x76C;
            static constexpr std::uintptr_t ThrustAmountAudioParamName = 0x770;
            static constexpr std::uintptr_t ThrustSoundThreshold = 0x774;
            static constexpr std::uintptr_t LaunchDelay = 0x780;
            static constexpr std::uintptr_t ServerWorldCreationTime = 0x7A8;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"NSBikeKidIdle_Native", 0x688, "ObjectProperty"},
            {"TeamMateIndicatorMarkerWidgetClass", 0x690, "ClassProperty"},
            {"BikeKidMotorLoopComponent", 0x698, "ObjectProperty"},
            {"BikeKidThrustSoundComponent", 0x6A0, "ObjectProperty"},
            {"DefaultTags", 0x6A8, "StructProperty"},
            {"ExplosionCueTag", 0x6C8, "StructProperty"},
            {"bExploded", 0x6CC, "BoolProperty"},
            {"AbilitySystemComponent", 0x6D8, "ObjectProperty"},
            {"AffiliationComponent", 0x6E0, "ObjectProperty"},
            {"StartupAbilitySet", 0x6E8, "ObjectProperty"},
            {"ControllingPlayerPawn", 0x6F0, "ObjectProperty"},
            {"HealthSet", 0x6F8, "ObjectProperty"},
            {"EnergySet", 0x700, "ObjectProperty"},
            {"AttributeInitKey", 0x708, "StructProperty"},
            {"PrimarySurfaceType", 0x710, "ByteProperty"},
            {"WeaponResponseType", 0x711, "ByteProperty"},
            {"bPlayedDeath", 0x712, "BoolProperty"},
            {"OutOfHealthDismissDelayData", 0x714, "StructProperty"},
            {"ExplodeEffectContainerSpecs", 0x728, "ArrayProperty"},
            {"OnTeamIndexChanged", 0x738, "MulticastInlineDelegateProperty"},
            {"PawnOverrideComponentClass", 0x748, "ClassProperty"},
            {"BikeKidMotorLoopSound", 0x750, "ObjectProperty"},
            {"BikeKidThrusterSound", 0x758, "ObjectProperty"},
            {"AudioParameter", 0x760, "ObjectProperty"},
            {"LocallyViewedPawnAudioParamName", 0x768, "NameProperty"},
            {"IsEnemyAudioParamName", 0x76C, "NameProperty"},
            {"ThrustAmountAudioParamName", 0x770, "NameProperty"},
            {"ThrustSoundThreshold", 0x774, "FloatProperty"},
            {"LaunchDelay", 0x780, "StructProperty"},
            {"ServerWorldCreationTime", 0x7A8, "FloatProperty"},
        }};
    };

    struct FortBikeKidAnalyticsComponent
    {
        static constexpr std::string_view Name = "FortBikeKidAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionStartTime = 0xC8;
            static constexpr std::uintptr_t SessionLength = 0xCC;
            static constexpr std::uintptr_t MinSessionLength = 0xD0;
            static constexpr std::uintptr_t DistanceTraveled = 0xF8;
            static constexpr std::uintptr_t DismissalReason = 0xFC;
            static constexpr std::uintptr_t DistanceTraveledUpdateInterval = 0x108;
            static constexpr std::uintptr_t DistanceTraveledUpdateTimerHandle = 0x130;
            static constexpr std::uintptr_t LastRecorderBikeKidLocation = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SessionStartTime", 0xC8, "FloatProperty"},
            {"SessionLength", 0xCC, "FloatProperty"},
            {"MinSessionLength", 0xD0, "StructProperty"},
            {"DistanceTraveled", 0xF8, "FloatProperty"},
            {"DismissalReason", 0xFC, "StructProperty"},
            {"DistanceTraveledUpdateInterval", 0x108, "StructProperty"},
            {"DistanceTraveledUpdateTimerHandle", 0x130, "StructProperty"},
            {"LastRecorderBikeKidLocation", 0x140, "StructProperty"},
        }};
    };

    struct FortBikeKidCameraMode
    {
        static constexpr std::string_view Name = "FortBikeKidCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Fort3PCameraMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldInterpolateLocation = 0x208;
            static constexpr std::uintptr_t bShouldInterpolateRotation = 0x209;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldInterpolateLocation", 0x208, "BoolProperty"},
            {"bShouldInterpolateRotation", 0x209, "BoolProperty"},
        }};
    };

    struct FortBikeKidControllingComponent
    {
        static constexpr std::string_view Name = "FortBikeKidControllingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedControllerRotator = 0xC8;
            static constexpr std::uintptr_t BikeKidInputComponent = 0x110;
            static constexpr std::uintptr_t ControlledBikeKid = 0x118;
            static constexpr std::uintptr_t LastControlledBikeKid = 0x120;
            static constexpr std::uintptr_t OriginalBikeKidOwner = 0x128;
            static constexpr std::uintptr_t BikeKidInputContext = 0x130;
            static constexpr std::uintptr_t InputTriggerableEvents = 0x138;
            static constexpr std::uintptr_t DismissAction = 0x148;
            static constexpr std::uintptr_t OwningActorStencilData = 0x160;
            static constexpr std::uintptr_t CurrentDismissalData = 0x1E0;
            static constexpr std::uintptr_t FirstPersonCameraModeOverride = 0x1F0;
            static constexpr std::uintptr_t ThirdPersonCameraModeOverride = 0x1F8;
            static constexpr std::uintptr_t FakeCameraAbilitySpec = 0x200;
            static constexpr std::uintptr_t LegacyInputActionsToBlock = 0x2E8;
            static constexpr std::uintptr_t BlockActionsGameplayEffect = 0x2F8;
            static constexpr std::uintptr_t DismissPayloadCache = 0x300;
            static constexpr std::uintptr_t DismissButtonPressCooldown = 0x308;
            static constexpr std::uintptr_t InitialDismissInputCooldown = 0x330;
            static constexpr std::uintptr_t PlayerToBikeKidTransitionParams = 0x348;
            static constexpr std::uintptr_t BikeKidToPlayerTransitionParams = 0x358;
            static constexpr std::uintptr_t InterruptingPlayerTags = 0x368;
            static constexpr std::uintptr_t MaxTurnRate = 0x3A0;
            static constexpr std::uintptr_t MouseTurnRate = 0x3C8;
            static constexpr std::uintptr_t GamepadTurnRate = 0x3F0;
            static constexpr std::uintptr_t TouchLookAccelerationMultiplier = 0x418;
            static constexpr std::uintptr_t GyroTurnRate = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"CachedControllerRotator", 0xC8, "StructProperty"},
            {"BikeKidInputComponent", 0x110, "ObjectProperty"},
            {"ControlledBikeKid", 0x118, "ObjectProperty"},
            {"LastControlledBikeKid", 0x120, "ObjectProperty"},
            {"OriginalBikeKidOwner", 0x128, "ObjectProperty"},
            {"BikeKidInputContext", 0x130, "ObjectProperty"},
            {"InputTriggerableEvents", 0x138, "ArrayProperty"},
            {"DismissAction", 0x148, "ObjectProperty"},
            {"OwningActorStencilData", 0x160, "StructProperty"},
            {"CurrentDismissalData", 0x1E0, "StructProperty"},
            {"FirstPersonCameraModeOverride", 0x1F0, "ClassProperty"},
            {"ThirdPersonCameraModeOverride", 0x1F8, "ClassProperty"},
            {"FakeCameraAbilitySpec", 0x200, "StructProperty"},
            {"LegacyInputActionsToBlock", 0x2E8, "ArrayProperty"},
            {"BlockActionsGameplayEffect", 0x2F8, "ClassProperty"},
            {"DismissPayloadCache", 0x300, "ObjectProperty"},
            {"DismissButtonPressCooldown", 0x308, "StructProperty"},
            {"InitialDismissInputCooldown", 0x330, "FloatProperty"},
            {"PlayerToBikeKidTransitionParams", 0x348, "StructProperty"},
            {"BikeKidToPlayerTransitionParams", 0x358, "StructProperty"},
            {"InterruptingPlayerTags", 0x368, "StructProperty"},
            {"MaxTurnRate", 0x3A0, "StructProperty"},
            {"MouseTurnRate", 0x3C8, "StructProperty"},
            {"GamepadTurnRate", 0x3F0, "StructProperty"},
            {"TouchLookAccelerationMultiplier", 0x418, "StructProperty"},
            {"GyroTurnRate", 0x440, "StructProperty"},
        }};
    };

    struct FortBikeKidMovementComponent
    {
        static constexpr std::string_view Name = "FortBikeKidMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CharacterMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreLaunchSpeed = 0xFF0;
            static constexpr std::uintptr_t PostLaunchSpeed = 0x1018;
            static constexpr std::uintptr_t HitBoxComponent = 0x1040;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PreLaunchSpeed", 0xFF0, "StructProperty"},
            {"PostLaunchSpeed", 0x1018, "StructProperty"},
            {"HitBoxComponent", 0x1040, "ObjectProperty"},
        }};
    };

    struct FortBikeKidPawnOverrideComponent
    {
        static constexpr std::string_view Name = "FortBikeKidPawnOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BikeKidSpectateCameraMode = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BikeKidSpectateCameraMode", 0xC8, "ClassProperty"},
        }};
    };

    struct FortBikeKidPawnOwnerOverrideComponent
    {
        static constexpr std::string_view Name = "FortBikeKidPawnOwnerOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlledBikeKid = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlledBikeKid", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct FortChargingSet_BikeKidEnergy
    {
        static constexpr std::string_view Name = "FortChargingSet_BikeKidEnergy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortChargingSet_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Energy = 0x60;
            static constexpr std::uintptr_t MaxEnergy = 0x88;
            static constexpr std::uintptr_t EnergyChargeRate = 0xB0;
            static constexpr std::uintptr_t ServerTimeEnergyIncrements = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Energy", 0x60, "StructProperty"},
            {"MaxEnergy", 0x88, "StructProperty"},
            {"EnergyChargeRate", 0xB0, "StructProperty"},
            {"ServerTimeEnergyIncrements", 0xD8, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_Activate
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_Activate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t RCActorClass = 0xB40;
            static constexpr std::uintptr_t SpawnOffset = 0xB48;
            static constexpr std::uintptr_t ForwardObstructionCheckDistance = 0xB60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RCActorClass", 0xB40, "ClassProperty"},
            {"SpawnOffset", 0xB48, "StructProperty"},
            {"ForwardObstructionCheckDistance", 0xB60, "FloatProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_Dismiss
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_Dismiss";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t DismissDelayData = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DismissDelayData", 0xB40, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_MarkPotentialTargets
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_MarkPotentialTargets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_BikeKid_TargetingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatedActorData = 0xB90;
            static constexpr std::uintptr_t MaxNumberOfPotentialTargets = 0xCA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IndicatedActorData", 0xB90, "StructProperty"},
            {"MaxNumberOfPotentialTargets", 0xCA0, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_PassiveMark
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_PassiveMark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_BikeKid_TargetingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTargetStatus = 0xB90;
            static constexpr std::uintptr_t StenciledActorData = 0xB98;
            static constexpr std::uintptr_t IndicatedActorData = 0xC18;
            static constexpr std::uintptr_t ActorTargetingRange = 0xD18;
            static constexpr std::uintptr_t TimeToConfirmTarget = 0xD40;
            static constexpr std::uintptr_t CurrentTarget = 0xD68;
            static constexpr std::uintptr_t TargetConfirmationTimerHandle = 0xD70;
            static constexpr std::uintptr_t PayloadCache = 0xD80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CurrentTargetStatus", 0xB90, "StructProperty"},
            {"StenciledActorData", 0xB98, "StructProperty"},
            {"IndicatedActorData", 0xC18, "StructProperty"},
            {"ActorTargetingRange", 0xD18, "StructProperty"},
            {"TimeToConfirmTarget", 0xD40, "StructProperty"},
            {"CurrentTarget", 0xD68, "ObjectProperty"},
            {"TargetConfirmationTimerHandle", 0xD70, "StructProperty"},
            {"PayloadCache", 0xD80, "ObjectProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_SpeedBoost
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_SpeedBoost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_BikeKid_TargetingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DoorBashCueTag = 0xB90;
            static constexpr std::uintptr_t DamageGameplayEffectClass = 0xB98;
            static constexpr std::uintptr_t DoorBashPawnLaunchGameplayCueTag = 0xBA0;
            static constexpr std::uintptr_t DoorBashEnabledHotfix = 0xBA8;
            static constexpr std::uintptr_t DoorBashSphereRadiusForPawnLaunch = 0xBD0;
            static constexpr std::uintptr_t DoorBashScalarForPawnLaunch = 0xBF8;
            static constexpr std::uintptr_t DoorBashCollisionTypesForPawn = 0xC20;
            static constexpr std::uintptr_t DoorBashEnabled = 0xC30;
            static constexpr std::uintptr_t DamageOnBoostEnabled = 0xC58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DoorBashCueTag", 0xB90, "StructProperty"},
            {"DamageGameplayEffectClass", 0xB98, "ClassProperty"},
            {"DoorBashPawnLaunchGameplayCueTag", 0xBA0, "StructProperty"},
            {"DoorBashEnabledHotfix", 0xBA8, "StructProperty"},
            {"DoorBashSphereRadiusForPawnLaunch", 0xBD0, "StructProperty"},
            {"DoorBashScalarForPawnLaunch", 0xBF8, "StructProperty"},
            {"DoorBashCollisionTypesForPawn", 0xC20, "ArrayProperty"},
            {"DoorBashEnabled", 0xC30, "StructProperty"},
            {"DamageOnBoostEnabled", 0xC58, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_TargetingBase
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_TargetingBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingPreset = 0xB40;
            static constexpr std::uintptr_t AsyncTargetingHandle = 0xB48;
            static constexpr std::uintptr_t TargetingTimerHandle = 0xB50;
            static constexpr std::uintptr_t TargetingInterval = 0xB60;
            static constexpr std::uintptr_t bUseControllerAsInstigator = 0xB88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetingPreset", 0xB40, "ObjectProperty"},
            {"AsyncTargetingHandle", 0xB48, "StructProperty"},
            {"TargetingTimerHandle", 0xB50, "StructProperty"},
            {"TargetingInterval", 0xB60, "StructProperty"},
            {"bUseControllerAsInstigator", 0xB88, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_BikeKid_Tether
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BikeKid_Tether";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t WarningRange = 0xB40;
            static constexpr std::uintptr_t SignalLossRange = 0xB68;
            static constexpr std::uintptr_t bIsInWarningRange = 0xB90;
            static constexpr std::uintptr_t bIsInSignalLossRange = 0xB91;
            static constexpr std::uintptr_t TetheringTimerHandle = 0xB98;
            static constexpr std::uintptr_t TetheringReportTimerHandle = 0xBA8;
            static constexpr std::uintptr_t DismissDelayData = 0xBB8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WarningRange", 0xB40, "StructProperty"},
            {"SignalLossRange", 0xB68, "StructProperty"},
            {"bIsInWarningRange", 0xB90, "BoolProperty"},
            {"bIsInSignalLossRange", 0xB91, "BoolProperty"},
            {"TetheringTimerHandle", 0xB98, "StructProperty"},
            {"TetheringReportTimerHandle", 0xBA8, "StructProperty"},
            {"DismissDelayData", 0xBB8, "StructProperty"},
        }};
    };

}

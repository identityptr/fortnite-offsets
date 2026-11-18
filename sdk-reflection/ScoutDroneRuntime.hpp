#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ScoutDroneRuntime
{
    struct FortAthenaMutator_ScoutDrone
    {
        static constexpr std::string_view Name = "FortAthenaMutator_ScoutDrone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t DroneAllowedInteractionTags = 0x2E8;
            static constexpr std::uintptr_t DroneBlockedInteractionTags = 0x308;
            static constexpr std::uintptr_t bIsControllingDrone = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DroneAllowedInteractionTags", 0x2E8, "StructProperty"},
            {"DroneBlockedInteractionTags", 0x308, "StructProperty"},
            {"bIsControllingDrone", 0x328, "BoolProperty"},
        }};
    };

    struct FortChargingSet_ScoutDroneEnergy
    {
        static constexpr std::string_view Name = "FortChargingSet_ScoutDroneEnergy";
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

    struct FortGameplayAbility_ScoutDrone_Activate
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_Activate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t RCActorClass = 0xB40;
            static constexpr std::uintptr_t SpawnOffset = 0xB48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RCActorClass", 0xB40, "ClassProperty"},
            {"SpawnOffset", 0xB48, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ScoutDrone_Dismiss
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_Dismiss";
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

    struct FortGameplayAbility_ScoutDrone_Dive
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_Dive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t EaseInData = 0xB60;
            static constexpr std::uintptr_t EaseOutData = 0xB90;
            static constexpr std::uintptr_t DiveUpdateInterval = 0xBC8;
            static constexpr std::uintptr_t DiveSpeedIncrease = 0xBF0;
            static constexpr std::uintptr_t MinSpeedToDive = 0xC18;
            static constexpr std::uintptr_t MinDistToGround = 0xC40;
            static constexpr std::uintptr_t TargetPitchToDive = 0xC68;
            static constexpr std::uintptr_t DivingGravityScale = 0xC90;
            static constexpr std::uintptr_t MaxSpeedDivingGravityScale = 0xCB8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EaseInData", 0xB60, "StructProperty"},
            {"EaseOutData", 0xB90, "StructProperty"},
            {"DiveUpdateInterval", 0xBC8, "StructProperty"},
            {"DiveSpeedIncrease", 0xBF0, "StructProperty"},
            {"MinSpeedToDive", 0xC18, "StructProperty"},
            {"MinDistToGround", 0xC40, "StructProperty"},
            {"TargetPitchToDive", 0xC68, "StructProperty"},
            {"DivingGravityScale", 0xC90, "StructProperty"},
            {"MaxSpeedDivingGravityScale", 0xCB8, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ScoutDrone_MarkPotentialTargets
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_MarkPotentialTargets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_ScoutDrone_TargetingBase";
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

    struct FortGameplayAbility_ScoutDrone_PassiveMark
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_PassiveMark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_ScoutDrone_TargetingBase";
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

    struct FortGameplayAbility_ScoutDrone_PickUp
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_PickUp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_ScoutDrone_TargetingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfItemsToGrab = 0xB98;
            static constexpr std::uintptr_t PayloadCache = 0xBC0;
            static constexpr std::uintptr_t PickupToggleCooldownDuration = 0xBC8;
            static constexpr std::uintptr_t AttachedPawnGEClass = 0xC08;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxNumberOfItemsToGrab", 0xB98, "StructProperty"},
            {"PayloadCache", 0xBC0, "ObjectProperty"},
            {"PickupToggleCooldownDuration", 0xBC8, "StructProperty"},
            {"AttachedPawnGEClass", 0xC08, "ClassProperty"},
        }};
    };

    struct FortGameplayAbility_ScoutDrone_SpeedBoost
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_SpeedBoost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_ScoutDrone_TargetingBase";
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

    struct FortGameplayAbility_ScoutDrone_TargetingBase
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_TargetingBase";
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

    struct FortGameplayAbility_ScoutDrone_Tether
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ScoutDrone_Tether";
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

    struct FortScoutDrone
    {
        static constexpr std::string_view Name = "FortScoutDrone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDiving = 0x698;
            static constexpr std::uintptr_t DivingEnabled = 0x6A0;
            static constexpr std::uintptr_t bIsSpeedBoosting = 0x6C8;
            static constexpr std::uintptr_t NSScoutDroneIdle_Native = 0x6D0;
            static constexpr std::uintptr_t PickupManagerComponent_Native = 0x6D8;
            static constexpr std::uintptr_t TeamMateIndicatorMarkerWidgetClass = 0x6E0;
            static constexpr std::uintptr_t DroneMotorLoopComponent = 0x6E8;
            static constexpr std::uintptr_t DroneThrustSoundComponent = 0x6F0;
            static constexpr std::uintptr_t BaseMaxFlySpeed = 0x6F8;
            static constexpr std::uintptr_t DefaultTags = 0x720;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x748;
            static constexpr std::uintptr_t AffiliationComponent = 0x750;
            static constexpr std::uintptr_t StartupAbilitySet = 0x758;
            static constexpr std::uintptr_t ControllingPlayerPawn = 0x760;
            static constexpr std::uintptr_t HealthSet = 0x768;
            static constexpr std::uintptr_t EnergySet = 0x770;
            static constexpr std::uintptr_t LifespanAfterDeath = 0x778;
            static constexpr std::uintptr_t AttributeInitKey = 0x77C;
            static constexpr std::uintptr_t PrimarySurfaceType = 0x784;
            static constexpr std::uintptr_t WeaponResponseType = 0x785;
            static constexpr std::uintptr_t bPlayedDeath = 0x786;
            static constexpr std::uintptr_t OutOfHealthDismissDelayData = 0x788;
            static constexpr std::uintptr_t OutOfEnergyDismissDelayData = 0x798;
            static constexpr std::uintptr_t OnTeamIndexChanged = 0x7A8;
            static constexpr std::uintptr_t PawnOverrideComponentClass = 0x7B8;
            static constexpr std::uintptr_t DroneMotorLoopSound = 0x7C0;
            static constexpr std::uintptr_t DroneThrusterSound = 0x7C8;
            static constexpr std::uintptr_t AudioParameter = 0x7D0;
            static constexpr std::uintptr_t LocallyViewedPawnAudioParamName = 0x7D8;
            static constexpr std::uintptr_t IsEnemyAudioParamName = 0x7DC;
            static constexpr std::uintptr_t ThrustAmountAudioParamName = 0x7E0;
            static constexpr std::uintptr_t ThrustSoundThreshold = 0x7E4;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"bIsDiving", 0x698, "BoolProperty"},
            {"DivingEnabled", 0x6A0, "StructProperty"},
            {"bIsSpeedBoosting", 0x6C8, "BoolProperty"},
            {"NSScoutDroneIdle_Native", 0x6D0, "ObjectProperty"},
            {"PickupManagerComponent_Native", 0x6D8, "ObjectProperty"},
            {"TeamMateIndicatorMarkerWidgetClass", 0x6E0, "ClassProperty"},
            {"DroneMotorLoopComponent", 0x6E8, "ObjectProperty"},
            {"DroneThrustSoundComponent", 0x6F0, "ObjectProperty"},
            {"BaseMaxFlySpeed", 0x6F8, "StructProperty"},
            {"DefaultTags", 0x720, "StructProperty"},
            {"AbilitySystemComponent", 0x748, "ObjectProperty"},
            {"AffiliationComponent", 0x750, "ObjectProperty"},
            {"StartupAbilitySet", 0x758, "ObjectProperty"},
            {"ControllingPlayerPawn", 0x760, "ObjectProperty"},
            {"HealthSet", 0x768, "ObjectProperty"},
            {"EnergySet", 0x770, "ObjectProperty"},
            {"LifespanAfterDeath", 0x778, "FloatProperty"},
            {"AttributeInitKey", 0x77C, "StructProperty"},
            {"PrimarySurfaceType", 0x784, "ByteProperty"},
            {"WeaponResponseType", 0x785, "ByteProperty"},
            {"bPlayedDeath", 0x786, "BoolProperty"},
            {"OutOfHealthDismissDelayData", 0x788, "StructProperty"},
            {"OutOfEnergyDismissDelayData", 0x798, "StructProperty"},
            {"OnTeamIndexChanged", 0x7A8, "MulticastInlineDelegateProperty"},
            {"PawnOverrideComponentClass", 0x7B8, "ClassProperty"},
            {"DroneMotorLoopSound", 0x7C0, "ObjectProperty"},
            {"DroneThrusterSound", 0x7C8, "ObjectProperty"},
            {"AudioParameter", 0x7D0, "ObjectProperty"},
            {"LocallyViewedPawnAudioParamName", 0x7D8, "NameProperty"},
            {"IsEnemyAudioParamName", 0x7DC, "NameProperty"},
            {"ThrustAmountAudioParamName", 0x7E0, "NameProperty"},
            {"ThrustSoundThreshold", 0x7E4, "FloatProperty"},
        }};
    };

    struct FortScoutDroneAnalyticsComponent
    {
        static constexpr std::string_view Name = "FortScoutDroneAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionStartTime = 0xC8;
            static constexpr std::uintptr_t SessionLength = 0xCC;
            static constexpr std::uintptr_t MinSessionLength = 0xD0;
            static constexpr std::uintptr_t DistanceTraveled = 0xF8;
            static constexpr std::uintptr_t NumberOfContainersInteractedWith = 0xFC;
            static constexpr std::uintptr_t DismissalReason = 0x100;
            static constexpr std::uintptr_t NumberOfItemsPickedUp = 0x104;
            static constexpr std::uintptr_t DBNOCarriedPlayers = 0x108;
            static constexpr std::uintptr_t NumberOfEnemiesPassivelyMarked = 0x118;
            static constexpr std::uintptr_t NumberOfEnemiesMarkedOnCaw = 0x11C;
            static constexpr std::uintptr_t NumberOfCaws = 0x120;
            static constexpr std::uintptr_t DistanceTraveledUpdateInterval = 0x130;
            static constexpr std::uintptr_t DistanceTraveledUpdateTimerHandle = 0x158;
            static constexpr std::uintptr_t LastRecorderDroneLocation = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SessionStartTime", 0xC8, "FloatProperty"},
            {"SessionLength", 0xCC, "FloatProperty"},
            {"MinSessionLength", 0xD0, "StructProperty"},
            {"DistanceTraveled", 0xF8, "FloatProperty"},
            {"NumberOfContainersInteractedWith", 0xFC, "IntProperty"},
            {"DismissalReason", 0x100, "StructProperty"},
            {"NumberOfItemsPickedUp", 0x104, "IntProperty"},
            {"DBNOCarriedPlayers", 0x108, "ArrayProperty"},
            {"NumberOfEnemiesPassivelyMarked", 0x118, "IntProperty"},
            {"NumberOfEnemiesMarkedOnCaw", 0x11C, "IntProperty"},
            {"NumberOfCaws", 0x120, "IntProperty"},
            {"DistanceTraveledUpdateInterval", 0x130, "StructProperty"},
            {"DistanceTraveledUpdateTimerHandle", 0x158, "StructProperty"},
            {"LastRecorderDroneLocation", 0x168, "StructProperty"},
        }};
    };

    struct FortScoutDroneAnimInstance
    {
        static constexpr std::string_view Name = "FortScoutDroneAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t FortScoutDroneMovementComponent = 0x340;
            static constexpr std::uintptr_t YawDeltaLastTick = 0x348;
            static constexpr std::uintptr_t ActorCurrentRotationTick = 0x350;
            static constexpr std::uintptr_t YawDeltaCurrentTick = 0x368;
            static constexpr std::uintptr_t ActorRotationLastTick = 0x370;
            static constexpr std::uintptr_t IsFlying = 0x388;
            static constexpr std::uintptr_t CurrentVelocity = 0x390;
            static constexpr std::uintptr_t LastVelocity = 0x398;
            static constexpr std::uintptr_t Velocity = 0x3A0;
            static constexpr std::uintptr_t ForwardInputAlpha = 0x3A8;
            static constexpr std::uintptr_t StrafeInputAlpha = 0x3B0;
            static constexpr std::uintptr_t DroneRotation = 0x3B8;
            static constexpr std::uintptr_t Acceleration = 0x3D0;
            static constexpr std::uintptr_t ScoutDrone = 0x3D8;
            static constexpr std::uintptr_t IsBoosting = 0x3E0;
            static constexpr std::uintptr_t IsDiving = 0x3E1;
            static constexpr std::uintptr_t AimPitch = 0x3E8;
            static constexpr std::uintptr_t NegativeAimPitch = 0x3F0;
            static constexpr std::uintptr_t FinalFanRotationL = 0x3F8;
            static constexpr std::uintptr_t FinalFanRotationR = 0x410;
            static constexpr std::uintptr_t FanIdleSpeed = 0x428;
            static constexpr std::uintptr_t FanAuthoredSpeed = 0x430;
            static constexpr std::uintptr_t FanIdleAuthoredSpeed = 0x438;
            static constexpr std::uintptr_t FanBwdSpeed = 0x440;
            static constexpr std::uintptr_t FanFwdSpeed = 0x448;
            static constexpr std::uintptr_t TurnNoiseAlpha = 0x450;
            static constexpr std::uintptr_t LeanAlpha = 0x458;
            static constexpr std::uintptr_t TurnAlpha = 0x460;
            static constexpr std::uintptr_t IsColliding = 0x468;
            static constexpr std::uintptr_t IsFlyingBwd = 0x469;
            static constexpr std::uintptr_t ShouldExitFromFlying = 0x46A;
            static constexpr std::uintptr_t ShouldExitFromDiving = 0x46B;
            static constexpr std::uintptr_t EarlyIntoLoop = 0x46C;
            static constexpr std::uintptr_t AccelerationZ = 0x470;
            static constexpr std::uintptr_t IsLeftStrafe = 0x478;
            static constexpr std::uintptr_t WasStrafing = 0x479;
            static constexpr std::uintptr_t GroundDistance = 0x480;
            static constexpr std::uintptr_t HasDivingConditionBeenMet = 0x488;
            static constexpr std::uintptr_t IsItemAttached = 0x489;
            static constexpr std::uintptr_t IsPlayerAttached = 0x48A;
            static constexpr std::uintptr_t FlapTime = 0x490;
            static constexpr std::uintptr_t FlapRandomPick = 0x498;
            static constexpr std::uintptr_t IsFlapSmall = 0x49C;
            static constexpr std::uintptr_t FlapRandomMaxRange = 0x4A0;
            static constexpr std::uintptr_t FlapSmallTimeThreshold = 0x4A8;
            static constexpr std::uintptr_t FlapBigTimeThreshold = 0x4B0;
            static constexpr std::uintptr_t FlapSmallResetDelayDuration = 0x4B8;
            static constexpr std::uintptr_t FlapBigResetDelayDuration = 0x4C0;
            static constexpr std::uintptr_t IsFlapBig = 0x4C8;
            static constexpr std::uintptr_t VerticalInputAlpha = 0x4D0;
            static constexpr std::uintptr_t WasVerticalUp = 0x4D8;
            static constexpr std::uintptr_t IsFlyingVerticalUp = 0x4D9;
            static constexpr std::uintptr_t ShouldExitFromBoostOutro = 0x4DA;
            static constexpr std::uintptr_t HasSpawned = 0x4DB;
            static constexpr std::uintptr_t ShouldExitFromSpawning = 0x4DC;
            static constexpr std::uintptr_t ShouldAllowTransition = 0x4DD;
            static constexpr std::uintptr_t StateRuleFromBoostOutroToFlying = 0x4DE;
            static constexpr std::uintptr_t WasBoosting = 0x4DF;
            static constexpr std::uintptr_t SpeedBoostForceBoostVelocity = 0x4E0;
            static constexpr std::uintptr_t SpeedBoostMaxSpeedIncrease = 0x508;
            static constexpr std::uintptr_t IsFlappingTime = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"FortScoutDroneMovementComponent", 0x340, "ObjectProperty"},
            {"YawDeltaLastTick", 0x348, "DoubleProperty"},
            {"ActorCurrentRotationTick", 0x350, "StructProperty"},
            {"YawDeltaCurrentTick", 0x368, "DoubleProperty"},
            {"ActorRotationLastTick", 0x370, "StructProperty"},
            {"IsFlying", 0x388, "BoolProperty"},
            {"CurrentVelocity", 0x390, "DoubleProperty"},
            {"LastVelocity", 0x398, "DoubleProperty"},
            {"Velocity", 0x3A0, "DoubleProperty"},
            {"ForwardInputAlpha", 0x3A8, "DoubleProperty"},
            {"StrafeInputAlpha", 0x3B0, "DoubleProperty"},
            {"DroneRotation", 0x3B8, "StructProperty"},
            {"Acceleration", 0x3D0, "DoubleProperty"},
            {"ScoutDrone", 0x3D8, "ObjectProperty"},
            {"IsBoosting", 0x3E0, "BoolProperty"},
            {"IsDiving", 0x3E1, "BoolProperty"},
            {"AimPitch", 0x3E8, "DoubleProperty"},
            {"NegativeAimPitch", 0x3F0, "DoubleProperty"},
            {"FinalFanRotationL", 0x3F8, "StructProperty"},
            {"FinalFanRotationR", 0x410, "StructProperty"},
            {"FanIdleSpeed", 0x428, "DoubleProperty"},
            {"FanAuthoredSpeed", 0x430, "DoubleProperty"},
            {"FanIdleAuthoredSpeed", 0x438, "DoubleProperty"},
            {"FanBwdSpeed", 0x440, "DoubleProperty"},
            {"FanFwdSpeed", 0x448, "DoubleProperty"},
            {"TurnNoiseAlpha", 0x450, "DoubleProperty"},
            {"LeanAlpha", 0x458, "DoubleProperty"},
            {"TurnAlpha", 0x460, "DoubleProperty"},
            {"IsColliding", 0x468, "BoolProperty"},
            {"IsFlyingBwd", 0x469, "BoolProperty"},
            {"ShouldExitFromFlying", 0x46A, "BoolProperty"},
            {"ShouldExitFromDiving", 0x46B, "BoolProperty"},
            {"EarlyIntoLoop", 0x46C, "BoolProperty"},
            {"AccelerationZ", 0x470, "DoubleProperty"},
            {"IsLeftStrafe", 0x478, "BoolProperty"},
            {"WasStrafing", 0x479, "BoolProperty"},
            {"GroundDistance", 0x480, "DoubleProperty"},
            {"HasDivingConditionBeenMet", 0x488, "BoolProperty"},
            {"IsItemAttached", 0x489, "BoolProperty"},
            {"IsPlayerAttached", 0x48A, "BoolProperty"},
            {"FlapTime", 0x490, "DoubleProperty"},
            {"FlapRandomPick", 0x498, "IntProperty"},
            {"IsFlapSmall", 0x49C, "BoolProperty"},
            {"FlapRandomMaxRange", 0x4A0, "IntProperty"},
            {"FlapSmallTimeThreshold", 0x4A8, "DoubleProperty"},
            {"FlapBigTimeThreshold", 0x4B0, "DoubleProperty"},
            {"FlapSmallResetDelayDuration", 0x4B8, "DoubleProperty"},
            {"FlapBigResetDelayDuration", 0x4C0, "DoubleProperty"},
            {"IsFlapBig", 0x4C8, "BoolProperty"},
            {"VerticalInputAlpha", 0x4D0, "DoubleProperty"},
            {"WasVerticalUp", 0x4D8, "BoolProperty"},
            {"IsFlyingVerticalUp", 0x4D9, "BoolProperty"},
            {"ShouldExitFromBoostOutro", 0x4DA, "BoolProperty"},
            {"HasSpawned", 0x4DB, "BoolProperty"},
            {"ShouldExitFromSpawning", 0x4DC, "BoolProperty"},
            {"ShouldAllowTransition", 0x4DD, "BoolProperty"},
            {"StateRuleFromBoostOutroToFlying", 0x4DE, "BoolProperty"},
            {"WasBoosting", 0x4DF, "BoolProperty"},
            {"SpeedBoostForceBoostVelocity", 0x4E0, "StructProperty"},
            {"SpeedBoostMaxSpeedIncrease", 0x508, "StructProperty"},
            {"IsFlappingTime", 0x530, "BoolProperty"},
        }};
    };

    struct FortScoutDroneCameraMode
    {
        static constexpr std::string_view Name = "FortScoutDroneCameraMode";
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

    struct FortScoutDroneControllingComponent
    {
        static constexpr std::string_view Name = "FortScoutDroneControllingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DroneInputComponent = 0xF8;
            static constexpr std::uintptr_t ControlledDrone = 0x100;
            static constexpr std::uintptr_t OriginalDroneOwner = 0x108;
            static constexpr std::uintptr_t DroneInputContext = 0x110;
            static constexpr std::uintptr_t InputTriggerableEvents = 0x118;
            static constexpr std::uintptr_t MoveUpAction = 0x128;
            static constexpr std::uintptr_t MoveAction = 0x130;
            static constexpr std::uintptr_t DismissAction = 0x138;
            static constexpr std::uintptr_t DroneCooldownEffectClass = 0x140;
            static constexpr std::uintptr_t OwningActorStencilData = 0x170;
            static constexpr std::uintptr_t CurrentDestructionData = 0x1F0;
            static constexpr std::uintptr_t FirstPersonCameraModeOverride = 0x200;
            static constexpr std::uintptr_t ThirdPersonCameraModeOverride = 0x208;
            static constexpr std::uintptr_t FakeCameraAbilitySpec = 0x210;
            static constexpr std::uintptr_t LegacyInputActionsToBlock = 0x2F8;
            static constexpr std::uintptr_t DismissPayloadCache = 0x308;
            static constexpr std::uintptr_t DismissButtonPressCooldown = 0x310;
            static constexpr std::uintptr_t PlayerToDroneTransitionParams = 0x348;
            static constexpr std::uintptr_t InterruptingPlayerTags = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"DroneInputComponent", 0xF8, "ObjectProperty"},
            {"ControlledDrone", 0x100, "ObjectProperty"},
            {"OriginalDroneOwner", 0x108, "ObjectProperty"},
            {"DroneInputContext", 0x110, "ObjectProperty"},
            {"InputTriggerableEvents", 0x118, "ArrayProperty"},
            {"MoveUpAction", 0x128, "ObjectProperty"},
            {"MoveAction", 0x130, "ObjectProperty"},
            {"DismissAction", 0x138, "ObjectProperty"},
            {"DroneCooldownEffectClass", 0x140, "ClassProperty"},
            {"OwningActorStencilData", 0x170, "StructProperty"},
            {"CurrentDestructionData", 0x1F0, "StructProperty"},
            {"FirstPersonCameraModeOverride", 0x200, "ClassProperty"},
            {"ThirdPersonCameraModeOverride", 0x208, "ClassProperty"},
            {"FakeCameraAbilitySpec", 0x210, "StructProperty"},
            {"LegacyInputActionsToBlock", 0x2F8, "ArrayProperty"},
            {"DismissPayloadCache", 0x308, "ObjectProperty"},
            {"DismissButtonPressCooldown", 0x310, "StructProperty"},
            {"PlayerToDroneTransitionParams", 0x348, "StructProperty"},
            {"InterruptingPlayerTags", 0x360, "StructProperty"},
        }};
    };

    struct FortScoutDroneCooldownMagnitudeCalculation
    {
        static constexpr std::string_view Name = "FortScoutDroneCooldownMagnitudeCalculation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayModMagnitudeCalculation";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDroneCooldown = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinDroneCooldown", 0x40, "StructProperty"},
        }};
    };

    struct FortScoutDroneGlove
    {
        static constexpr std::string_view Name = "FortScoutDroneGlove";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldToDeployTime = 0x1A70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HoldToDeployTime", 0x1A70, "StructProperty"},
        }};
    };

    struct FortScoutDroneMovementComponent
    {
        static constexpr std::string_view Name = "FortScoutDroneMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CharacterMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalInputState = 0xFF0;
            static constexpr std::uintptr_t LastInputState = 0x1008;
            static constexpr std::uintptr_t ReplicatedAcceleration = 0x1020;
            static constexpr std::uintptr_t StrafeInputMultiplier = 0x1038;
            static constexpr std::uintptr_t BacktrackingInputMultiplier = 0x1060;
            static constexpr std::uintptr_t VerticalMovementInputMultiplier = 0x1088;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LocalInputState", 0xFF0, "StructProperty"},
            {"LastInputState", 0x1008, "StructProperty"},
            {"ReplicatedAcceleration", 0x1020, "StructProperty"},
            {"StrafeInputMultiplier", 0x1038, "StructProperty"},
            {"BacktrackingInputMultiplier", 0x1060, "StructProperty"},
            {"VerticalMovementInputMultiplier", 0x1088, "StructProperty"},
        }};
    };

    struct FortScoutDronePawnOverrideComponent
    {
        static constexpr std::string_view Name = "FortScoutDronePawnOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DroneSpectateCameraMode = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DroneSpectateCameraMode", 0xC8, "ClassProperty"},
        }};
    };

    struct FortScoutDronePawnOwnerOverrideComponent
    {
        static constexpr std::string_view Name = "FortScoutDronePawnOwnerOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlledDrone = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlledDrone", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct FortScoutDronePickupManager
    {
        static constexpr std::string_view Name = "FortScoutDronePickupManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedTargets = 0xC0;
            static constexpr std::uintptr_t AttachPointSocketName = 0xD8;
            static constexpr std::uintptr_t PreviouslyAttachedTargets = 0xE0;
            static constexpr std::uintptr_t ItemOffset = 0xF8;
            static constexpr std::uintptr_t DBNOPawnOffset = 0x110;
            static constexpr std::uintptr_t CurrentlyAppliedCameraOffset = 0x128;
            static constexpr std::uintptr_t MaxExtraCapsuleDimensions = 0x130;
            static constexpr std::uintptr_t MaxPickupSpread = 0x180;
            static constexpr std::uintptr_t PickupTossSpeed = 0x1A8;
            static constexpr std::uintptr_t ItemsPickupTags = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AttachedTargets", 0xC0, "StructProperty"},
            {"AttachPointSocketName", 0xD8, "NameProperty"},
            {"PreviouslyAttachedTargets", 0xE0, "StructProperty"},
            {"ItemOffset", 0xF8, "StructProperty"},
            {"DBNOPawnOffset", 0x110, "StructProperty"},
            {"CurrentlyAppliedCameraOffset", 0x128, "FloatProperty"},
            {"MaxExtraCapsuleDimensions", 0x130, "StructProperty"},
            {"MaxPickupSpread", 0x180, "StructProperty"},
            {"PickupTossSpeed", 0x1A8, "StructProperty"},
            {"ItemsPickupTags", 0x1D0, "StructProperty"},
        }};
    };

    struct ScoutDroneDeferredDestructionPayload
    {
        static constexpr std::string_view Name = "ScoutDroneDeferredDestructionPayload";
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

    struct ScoutDronePassiveMarkPayload
    {
        static constexpr std::string_view Name = "ScoutDronePassiveMarkPayload";
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

    struct ScoutDronePickUpTargetsPayload
    {
        static constexpr std::string_view Name = "ScoutDronePickUpTargetsPayload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PickUpTargets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PickUpTargets", 0x28, "StructProperty"},
        }};
    };

}

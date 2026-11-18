#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MurkyVoleRuntime
{
    struct FortControllerComponent_MurkyVole
    {
        static constexpr std::string_view Name = "FortControllerComponent_MurkyVole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct FortGameplayAbility_MurkyVoleMissileManager
    {
        static constexpr std::string_view Name = "FortGameplayAbility_MurkyVoleMissileManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Action";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWeapon = 0xB90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentWeapon", 0xB90, "ObjectProperty"},
        }};
    };

    struct FortProjectileAthena_MurkyVole
    {
        static constexpr std::string_view Name = "FortProjectileAthena_MurkyVole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnHitResults = 0xB18;
            static constexpr std::uintptr_t FireStartLoc = 0xB30;
            static constexpr std::uintptr_t bExplodeOnPawnHit = 0xB48;
            static constexpr std::uintptr_t bIsOverlapPiercingHit = 0xB48;
            static constexpr std::uintptr_t bNoCollisionForNonOwningClients = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosions = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosionsOnlyOnce = 0xB48;
            static constexpr std::uintptr_t bEstimateCollisionForSniperTrace = 0xB49;
            static constexpr std::uintptr_t bIgnoreActorsAttachedToFiringPawn = 0xB49;
            static constexpr std::uintptr_t bPredictMaxSimulationDistanceExceeded = 0xB49;
            static constexpr std::uintptr_t bProcessLocalHits = 0xB49;
            static constexpr std::uintptr_t bSkipOnTouchedEventForInitialOwnerHit = 0xB49;
            static constexpr std::uintptr_t bTriggerTouchForAllSniperTraceHits = 0xB49;
            static constexpr std::uintptr_t bProcessOnServerForFortAIControllers = 0xB4A;
            static constexpr std::uintptr_t TimeToWaitForPawnHitBeforeKillOnServer = 0xB4C;
            static constexpr std::uintptr_t PredictedHitActor = 0xB60;
            static constexpr std::uintptr_t PredictedHitComp = 0xB68;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"PawnHitResults", 0xB18, "ArrayProperty"},
            {"FireStartLoc", 0xB30, "StructProperty"},
            {"bExplodeOnPawnHit", 0xB48, "BoolProperty"},
            {"bIsOverlapPiercingHit", 0xB48, "BoolProperty"},
            {"bNoCollisionForNonOwningClients", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosions", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosionsOnlyOnce", 0xB48, "BoolProperty"},
            {"bEstimateCollisionForSniperTrace", 0xB49, "BoolProperty"},
            {"bIgnoreActorsAttachedToFiringPawn", 0xB49, "BoolProperty"},
            {"bPredictMaxSimulationDistanceExceeded", 0xB49, "BoolProperty"},
            {"bProcessLocalHits", 0xB49, "BoolProperty"},
            {"bSkipOnTouchedEventForInitialOwnerHit", 0xB49, "BoolProperty"},
            {"bTriggerTouchForAllSniperTraceHits", 0xB49, "BoolProperty"},
            {"bProcessOnServerForFortAIControllers", 0xB4A, "BoolProperty"},
            {"TimeToWaitForPawnHitBeforeKillOnServer", 0xB4C, "FloatProperty"},
            {"PredictedHitActor", 0xB60, "ObjectProperty"},
            {"PredictedHitComp", 0xB68, "ObjectProperty"},
        }};
    };

    struct FortProjectileMoveComp_DrunkMurkyVole
    {
        static constexpr std::string_view Name = "FortProjectileMoveComp_DrunkMurkyVole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileMoveComp_Drunk";
        struct Offsets
        {
            static constexpr std::uintptr_t NewDrunkConfig = 0x570;
            static constexpr std::uintptr_t bKeepInitialSpeed = 0x5E0;
            static constexpr std::uintptr_t DrunkSpeedScaleCurve = 0x5E8;
            static constexpr std::uintptr_t DrunkGravityScaleCurve = 0x5F0;
            static constexpr std::uintptr_t MaxRandomTurnAngle = 0x5F8;
            static constexpr std::uintptr_t MinRandomTurnAngle = 0x620;
            static constexpr std::uintptr_t DirectionChangeRate = 0x648;
            static constexpr std::uintptr_t EnableAbovePlaneLimitation = 0x670;
            static constexpr std::uintptr_t AbovePlaneDistanceThreshold = 0x698;
            static constexpr std::uintptr_t MaxAngleToLoseAbovePlaneLimit = 0x6C0;
            static constexpr std::uintptr_t MinAngleToLoseAbovePlaneLimit = 0x6E8;
            static constexpr std::uintptr_t HomingRandomTargetPositionRadius = 0x710;
            static constexpr std::uintptr_t TargetedInitialDelay = 0x738;
            static constexpr std::uintptr_t DrunkVelocityInitialDelay = 0x760;
            static constexpr std::uintptr_t DrunkVelocityDuration = 0x788;
            static constexpr std::uintptr_t bEnableDrunkTarget = 0x7B0;
            static constexpr std::uintptr_t DrunkTargetInitialDelay = 0x7D8;
            static constexpr std::uintptr_t DrunkTargetPositionLookaheadDist = 0x800;
            static constexpr std::uintptr_t StartBlendOutRange = 0x828;
            static constexpr std::uintptr_t FinishBlendOutRange = 0x850;
            static constexpr std::uintptr_t TimeThresholdForBlendOutOnTime = 0x878;
            static constexpr std::uintptr_t BlendAlphaThresholdForBlendOutOnTime = 0x8A0;
            static constexpr std::uintptr_t DurationForBlendOutOnTime = 0x8C8;
            static constexpr std::uintptr_t HomingDrunkBlendOutTurnSpeed = 0x8F0;
            static constexpr std::uintptr_t TurnAngleBlendOutMultiplier = 0x918;
            static constexpr std::uintptr_t DeviateStartAngle = 0x940;
            static constexpr std::uintptr_t DeviateEndAngle = 0x968;
            static constexpr std::uintptr_t DeviateMinBlendOutAlphaAddition = 0x990;
            static constexpr std::uintptr_t DeviateMaxBlendOutAlphaAddition = 0x9B8;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"NewDrunkConfig", 0x570, "StructProperty"},
            {"bKeepInitialSpeed", 0x5E0, "BoolProperty"},
            {"DrunkSpeedScaleCurve", 0x5E8, "ObjectProperty"},
            {"DrunkGravityScaleCurve", 0x5F0, "ObjectProperty"},
            {"MaxRandomTurnAngle", 0x5F8, "StructProperty"},
            {"MinRandomTurnAngle", 0x620, "StructProperty"},
            {"DirectionChangeRate", 0x648, "StructProperty"},
            {"EnableAbovePlaneLimitation", 0x670, "StructProperty"},
            {"AbovePlaneDistanceThreshold", 0x698, "StructProperty"},
            {"MaxAngleToLoseAbovePlaneLimit", 0x6C0, "StructProperty"},
            {"MinAngleToLoseAbovePlaneLimit", 0x6E8, "StructProperty"},
            {"HomingRandomTargetPositionRadius", 0x710, "StructProperty"},
            {"TargetedInitialDelay", 0x738, "StructProperty"},
            {"DrunkVelocityInitialDelay", 0x760, "StructProperty"},
            {"DrunkVelocityDuration", 0x788, "StructProperty"},
            {"bEnableDrunkTarget", 0x7B0, "StructProperty"},
            {"DrunkTargetInitialDelay", 0x7D8, "StructProperty"},
            {"DrunkTargetPositionLookaheadDist", 0x800, "StructProperty"},
            {"StartBlendOutRange", 0x828, "StructProperty"},
            {"FinishBlendOutRange", 0x850, "StructProperty"},
            {"TimeThresholdForBlendOutOnTime", 0x878, "StructProperty"},
            {"BlendAlphaThresholdForBlendOutOnTime", 0x8A0, "StructProperty"},
            {"DurationForBlendOutOnTime", 0x8C8, "StructProperty"},
            {"HomingDrunkBlendOutTurnSpeed", 0x8F0, "StructProperty"},
            {"TurnAngleBlendOutMultiplier", 0x918, "StructProperty"},
            {"DeviateStartAngle", 0x940, "StructProperty"},
            {"DeviateEndAngle", 0x968, "StructProperty"},
            {"DeviateMinBlendOutAlphaAddition", 0x990, "StructProperty"},
            {"DeviateMaxBlendOutAlphaAddition", 0x9B8, "StructProperty"},
        }};
    };

    struct FortWeaponRangedDual_MurkyVole
    {
        static constexpr std::string_view Name = "FortWeaponRangedDual_MurkyVole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMissileNumberChanged = 0x2A98;
            static constexpr std::uintptr_t MissileAmmoDefinition = 0x2AA8;
            static constexpr std::uintptr_t MissileProjectileClass = 0x2AB0;
            static constexpr std::uintptr_t MissileGravityScale = 0x2AB8;
            static constexpr std::uintptr_t MissileMinTurnSpeed = 0x2AE0;
            static constexpr std::uintptr_t MissileMaxTurnSpeed = 0x2B08;
            static constexpr std::uintptr_t MissileRampTimeForTurnSpeed = 0x2B30;
            static constexpr std::uintptr_t MissileLockTargetDistanceThreshold = 0x2B58;
            static constexpr std::uintptr_t MissileFiredNumber = 0x2B80;
            static constexpr std::uintptr_t LocalMissileNumber = 0x2B84;
            static constexpr std::uintptr_t ActualMissileNumber = 0x2B88;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnMissileNumberChanged", 0x2A98, "MulticastInlineDelegateProperty"},
            {"MissileAmmoDefinition", 0x2AA8, "ObjectProperty"},
            {"MissileProjectileClass", 0x2AB0, "ClassProperty"},
            {"MissileGravityScale", 0x2AB8, "StructProperty"},
            {"MissileMinTurnSpeed", 0x2AE0, "StructProperty"},
            {"MissileMaxTurnSpeed", 0x2B08, "StructProperty"},
            {"MissileRampTimeForTurnSpeed", 0x2B30, "StructProperty"},
            {"MissileLockTargetDistanceThreshold", 0x2B58, "StructProperty"},
            {"MissileFiredNumber", 0x2B80, "IntProperty"},
            {"LocalMissileNumber", 0x2B84, "IntProperty"},
            {"ActualMissileNumber", 0x2B88, "IntProperty"},
        }};
    };

    struct MurkyVoleHoverLayerAnimInstance
    {
        static constexpr std::string_view Name = "MurkyVoleHoverLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LeanX = 0x1180;
            static constexpr std::uintptr_t LeanY = 0x1184;
            static constexpr std::uintptr_t bIsHoverDash = 0x1188;
            static constexpr std::uintptr_t HoverYawDelta = 0x118C;
            static constexpr std::uintptr_t DashX = 0x1190;
            static constexpr std::uintptr_t DashY = 0x1194;
            static constexpr std::uintptr_t bIsHoverAddArms = 0x1198;
            static constexpr std::uintptr_t bCanEnterPostBoost = 0x1199;
            static constexpr std::uintptr_t CooldownTagName = 0x119C;
            static constexpr std::uintptr_t WeaponDisplayNameSubStringsToAddArmsAnim = 0x11A0;
            static constexpr std::uintptr_t WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1 = 0x11B0;
            static constexpr std::uintptr_t BoostToPostBoostRelevancyData = 0x11C0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LeanX", 0x1180, "FloatProperty"},
            {"LeanY", 0x1184, "FloatProperty"},
            {"bIsHoverDash", 0x1188, "BoolProperty"},
            {"HoverYawDelta", 0x118C, "FloatProperty"},
            {"DashX", 0x1190, "FloatProperty"},
            {"DashY", 0x1194, "FloatProperty"},
            {"bIsHoverAddArms", 0x1198, "BoolProperty"},
            {"bCanEnterPostBoost", 0x1199, "BoolProperty"},
            {"CooldownTagName", 0x119C, "StructProperty"},
            {"WeaponDisplayNameSubStringsToAddArmsAnim", 0x11A0, "ArrayProperty"},
            {"WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1", 0x11B0, "ArrayProperty"},
            {"BoostToPostBoostRelevancyData", 0x11C0, "StructProperty"},
        }};
    };

    struct MurkyVolePackCCPAnimInstance
    {
        static constexpr std::string_view Name = "MurkyVolePackCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasHoverJets = 0x640;
            static constexpr std::uintptr_t bHasMissileSwarm = 0x641;
            static constexpr std::uintptr_t bHasTurret = 0x642;
            static constexpr std::uintptr_t bIsActiveMissileSwarm = 0x643;
            static constexpr std::uintptr_t bIsActiveHover = 0x644;
            static constexpr std::uintptr_t LeanX = 0x648;
            static constexpr std::uintptr_t LeanY = 0x64C;
            static constexpr std::uintptr_t bIsHoverDash = 0x650;
            static constexpr std::uintptr_t AimRotationCurrent = 0x658;
            static constexpr std::uintptr_t bIsWindUp = 0x670;
            static constexpr std::uintptr_t bIsWindDown = 0x671;
            static constexpr std::uintptr_t PlayerAimRotation = 0x678;
            static constexpr std::uintptr_t TurretAimRotation = 0x690;
            static constexpr std::uintptr_t AdjustedRocketPodRot = 0x6A8;
            static constexpr std::uintptr_t bIsTurretFire = 0x6C0;
            static constexpr std::uintptr_t bIsTurretReFire = 0x6C1;
            static constexpr std::uintptr_t TurretRailOffset = 0x6C4;
            static constexpr std::uintptr_t bIsAutoTargetOff = 0x6C8;
            static constexpr std::uintptr_t bIsAshtonShieldBlocking = 0x6C9;
            static constexpr std::uintptr_t bIsCrouchMoving = 0x6CA;
            static constexpr std::uintptr_t bIsPawnSpeed2DAboveThreshold = 0x6CB;
            static constexpr std::uintptr_t TurretPitchOffset = 0x6CC;
            static constexpr std::uintptr_t HoverJetsTagName = 0x6D0;
            static constexpr std::uintptr_t MissileSwarmTagName = 0x6D4;
            static constexpr std::uintptr_t TurretTagName = 0x6D8;
            static constexpr std::uintptr_t ActiveTagName = 0x6DC;
            static constexpr std::uintptr_t CooldownTagName = 0x6E0;
            static constexpr std::uintptr_t ShotFiredTagName = 0x6E4;
            static constexpr std::uintptr_t MurkyVoleGameplayGameDataCurveTable = 0x6E8;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bHasHoverJets", 0x640, "BoolProperty"},
            {"bHasMissileSwarm", 0x641, "BoolProperty"},
            {"bHasTurret", 0x642, "BoolProperty"},
            {"bIsActiveMissileSwarm", 0x643, "BoolProperty"},
            {"bIsActiveHover", 0x644, "BoolProperty"},
            {"LeanX", 0x648, "FloatProperty"},
            {"LeanY", 0x64C, "FloatProperty"},
            {"bIsHoverDash", 0x650, "BoolProperty"},
            {"AimRotationCurrent", 0x658, "StructProperty"},
            {"bIsWindUp", 0x670, "BoolProperty"},
            {"bIsWindDown", 0x671, "BoolProperty"},
            {"PlayerAimRotation", 0x678, "StructProperty"},
            {"TurretAimRotation", 0x690, "StructProperty"},
            {"AdjustedRocketPodRot", 0x6A8, "StructProperty"},
            {"bIsTurretFire", 0x6C0, "BoolProperty"},
            {"bIsTurretReFire", 0x6C1, "BoolProperty"},
            {"TurretRailOffset", 0x6C4, "FloatProperty"},
            {"bIsAutoTargetOff", 0x6C8, "BoolProperty"},
            {"bIsAshtonShieldBlocking", 0x6C9, "BoolProperty"},
            {"bIsCrouchMoving", 0x6CA, "BoolProperty"},
            {"bIsPawnSpeed2DAboveThreshold", 0x6CB, "BoolProperty"},
            {"TurretPitchOffset", 0x6CC, "FloatProperty"},
            {"HoverJetsTagName", 0x6D0, "StructProperty"},
            {"MissileSwarmTagName", 0x6D4, "StructProperty"},
            {"TurretTagName", 0x6D8, "StructProperty"},
            {"ActiveTagName", 0x6DC, "StructProperty"},
            {"CooldownTagName", 0x6E0, "StructProperty"},
            {"ShotFiredTagName", 0x6E4, "StructProperty"},
            {"MurkyVoleGameplayGameDataCurveTable", 0x6E8, "ObjectProperty"},
        }};
    };

    struct MurkyVoleTurretAttachment
    {
        static constexpr std::string_view Name = "MurkyVoleTurretAttachment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawnTargetTagToPctCapsuleHalfHeightZOffset = 0x278;
            static constexpr std::uintptr_t NonPlayerPawnTargetTagToZOffsetMap = 0x288;
            static constexpr std::uintptr_t AimRotation_Server = 0x298;
            static constexpr std::uintptr_t AimRotation_Client = 0x2B0;
            static constexpr std::uintptr_t TargetActorLastKnownLocation = 0x2C8;
            static constexpr std::uintptr_t ScannerRays_TargetingScale = 0x2E0;
            static constexpr std::uintptr_t Vector_AimSourceLocationOffset = 0x2F8;
            static constexpr std::uintptr_t Vector_AimSourceLocationOffset_Crouch = 0x310;
            static constexpr std::uintptr_t Row_PlayerPctCapsuleHalfHeightOffset_Default = 0x328;
            static constexpr std::uintptr_t Row_LaserMaxRange = 0x350;
            static constexpr std::uintptr_t Row_LaserDistanceMulti = 0x378;
            static constexpr std::uintptr_t ScannerRays_LastScaleUpdateTime = 0x3A0;
            static constexpr std::uintptr_t ScannerRays_ScaleUpdateInterval = 0x3A8;
            static constexpr std::uintptr_t ScannerRays_ScaleUpdateInterpSpeed = 0x3B0;
            static constexpr std::uintptr_t TargetActor = 0x3B8;
            static constexpr std::uintptr_t bForceLaserOnWhileAttacking = 0x3C0;
            static constexpr std::uintptr_t bTargetIsObstructed = 0x3C1;
            static constexpr std::uintptr_t NativeCrouchTag = 0x440;
            static constexpr std::uintptr_t NativeBackpackAttachSocket = 0x444;
            static constexpr std::uintptr_t NativePitchSpeed = 0x448;
            static constexpr std::uintptr_t NativeYawSpeed = 0x470;
            static constexpr std::uintptr_t NativeBigPitchRangeMin = 0x498;
            static constexpr std::uintptr_t NativeBigPitchRangeMax = 0x4A0;
            static constexpr std::uintptr_t NativeBigYawRangeMin = 0x4A8;
            static constexpr std::uintptr_t NativeBigYawRangeMax = 0x4B0;
            static constexpr std::uintptr_t NativeSmallYawRangeMin = 0x4B8;
            static constexpr std::uintptr_t NativeSmallYawRangeMax = 0x4C0;
            static constexpr std::uintptr_t NativeBigTimerRangeMin = 0x4C8;
            static constexpr std::uintptr_t NativeBigTimerRangeMax = 0x4CC;
            static constexpr std::uintptr_t NativeSmallTimerRangeMin = 0x4D0;
            static constexpr std::uintptr_t NativeSmallTimerRangeMax = 0x4D4;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"PlayerPawnTargetTagToPctCapsuleHalfHeightZOffset", 0x278, "MapProperty"},
            {"NonPlayerPawnTargetTagToZOffsetMap", 0x288, "MapProperty"},
            {"AimRotation_Server", 0x298, "StructProperty"},
            {"AimRotation_Client", 0x2B0, "StructProperty"},
            {"TargetActorLastKnownLocation", 0x2C8, "StructProperty"},
            {"ScannerRays_TargetingScale", 0x2E0, "StructProperty"},
            {"Vector_AimSourceLocationOffset", 0x2F8, "StructProperty"},
            {"Vector_AimSourceLocationOffset_Crouch", 0x310, "StructProperty"},
            {"Row_PlayerPctCapsuleHalfHeightOffset_Default", 0x328, "StructProperty"},
            {"Row_LaserMaxRange", 0x350, "StructProperty"},
            {"Row_LaserDistanceMulti", 0x378, "StructProperty"},
            {"ScannerRays_LastScaleUpdateTime", 0x3A0, "DoubleProperty"},
            {"ScannerRays_ScaleUpdateInterval", 0x3A8, "DoubleProperty"},
            {"ScannerRays_ScaleUpdateInterpSpeed", 0x3B0, "DoubleProperty"},
            {"TargetActor", 0x3B8, "ObjectProperty"},
            {"bForceLaserOnWhileAttacking", 0x3C0, "BoolProperty"},
            {"bTargetIsObstructed", 0x3C1, "BoolProperty"},
            {"NativeCrouchTag", 0x440, "StructProperty"},
            {"NativeBackpackAttachSocket", 0x444, "NameProperty"},
            {"NativePitchSpeed", 0x448, "StructProperty"},
            {"NativeYawSpeed", 0x470, "StructProperty"},
            {"NativeBigPitchRangeMin", 0x498, "DoubleProperty"},
            {"NativeBigPitchRangeMax", 0x4A0, "DoubleProperty"},
            {"NativeBigYawRangeMin", 0x4A8, "DoubleProperty"},
            {"NativeBigYawRangeMax", 0x4B0, "DoubleProperty"},
            {"NativeSmallYawRangeMin", 0x4B8, "DoubleProperty"},
            {"NativeSmallYawRangeMax", 0x4C0, "DoubleProperty"},
            {"NativeBigTimerRangeMin", 0x4C8, "FloatProperty"},
            {"NativeBigTimerRangeMax", 0x4CC, "FloatProperty"},
            {"NativeSmallTimerRangeMin", 0x4D0, "FloatProperty"},
            {"NativeSmallTimerRangeMax", 0x4D4, "FloatProperty"},
        }};
    };

    struct MurkyVoleTurretAttachmentActorInterface
    {
        static constexpr std::string_view Name = "MurkyVoleTurretAttachmentActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NevadaRuntime
{
    struct FortCameraMode_Nevada
    {
        static constexpr std::string_view Name = "FortCameraMode_Nevada";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t TractorBeamCameraOffset = 0x20C8;
            static constexpr std::uintptr_t TractorBeamCameraLerpTime = 0x20E0;
            static constexpr std::uintptr_t TractorBeamCameraExtraPitch = 0x20E4;
            static constexpr std::uintptr_t TractorBeamInactiveCameraExtraPitch = 0x20E8;
            static constexpr std::uintptr_t TractorBeamCameraPositionResetDelay = 0x20EC;
            static constexpr std::uintptr_t MinPitchForOffset = 0x20F0;
            static constexpr std::uintptr_t MaxPitchForOffset = 0x20F4;
            static constexpr std::uintptr_t ExtraOffset = 0x20F8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TractorBeamCameraOffset", 0x20C8, "StructProperty"},
            {"TractorBeamCameraLerpTime", 0x20E0, "FloatProperty"},
            {"TractorBeamCameraExtraPitch", 0x20E4, "FloatProperty"},
            {"TractorBeamInactiveCameraExtraPitch", 0x20E8, "FloatProperty"},
            {"TractorBeamCameraPositionResetDelay", 0x20EC, "FloatProperty"},
            {"MinPitchForOffset", 0x20F0, "FloatProperty"},
            {"MaxPitchForOffset", 0x20F4, "FloatProperty"},
            {"ExtraOffset", 0x20F8, "StructProperty"},
        }};
    };

    struct FortNevadaAudioController
    {
        static constexpr std::string_view Name = "FortNevadaAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedRangeMap = 0x278;
            static constexpr std::uintptr_t TurningRangeMap = 0x288;
            static constexpr std::uintptr_t AcceleratingRangeMap = 0x298;
            static constexpr std::uintptr_t BrakingRangeMap = 0x2A8;
            static constexpr std::uintptr_t PassByRangeMap = 0x2B8;
            static constexpr std::uintptr_t LFORangeMap = 0x2C8;
            static constexpr std::uintptr_t Vehicle = 0x2D8;
            static constexpr std::uintptr_t LayeredAudioComponent = 0x2E0;
            static constexpr std::uintptr_t SpeedParamValue = 0x2E8;
            static constexpr std::uintptr_t SpeedParamValuePrev = 0x2EC;
            static constexpr std::uintptr_t AcceleratingParamValue = 0x2F0;
            static constexpr std::uintptr_t BrakingParamValue = 0x2F4;
            static constexpr std::uintptr_t ForwardVector = 0x2F8;
            static constexpr std::uintptr_t ForwardVectorPrev = 0x310;
            static constexpr std::uintptr_t TurningParamValue = 0x328;
            static constexpr std::uintptr_t PassByParamValue = 0x32C;
            static constexpr std::uintptr_t LocallyControlledParamValue = 0x330;
            static constexpr std::uintptr_t LFOParamValue = 0x334;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"SpeedRangeMap", 0x278, "StructProperty"},
            {"TurningRangeMap", 0x288, "StructProperty"},
            {"AcceleratingRangeMap", 0x298, "StructProperty"},
            {"BrakingRangeMap", 0x2A8, "StructProperty"},
            {"PassByRangeMap", 0x2B8, "StructProperty"},
            {"LFORangeMap", 0x2C8, "StructProperty"},
            {"Vehicle", 0x2D8, "ObjectProperty"},
            {"LayeredAudioComponent", 0x2E0, "ObjectProperty"},
            {"SpeedParamValue", 0x2E8, "FloatProperty"},
            {"SpeedParamValuePrev", 0x2EC, "FloatProperty"},
            {"AcceleratingParamValue", 0x2F0, "FloatProperty"},
            {"BrakingParamValue", 0x2F4, "FloatProperty"},
            {"ForwardVector", 0x2F8, "StructProperty"},
            {"ForwardVectorPrev", 0x310, "StructProperty"},
            {"TurningParamValue", 0x328, "FloatProperty"},
            {"PassByParamValue", 0x32C, "FloatProperty"},
            {"LocallyControlledParamValue", 0x330, "FloatProperty"},
            {"LFOParamValue", 0x334, "FloatProperty"},
        }};
    };

    struct FortNevadaVehicle
    {
        static constexpr std::string_view Name = "FortNevadaVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerReplicatedState = 0x2090;
            static constexpr std::uintptr_t FortNevadaVehicleConfigs = 0x20A8;
            static constexpr std::uintptr_t FortNevadaAudioControllerClass = 0x20B0;
            static constexpr std::uintptr_t AudioControllerActor = 0x20B8;
            static constexpr std::uintptr_t FortNevadaAudioController = 0x20C0;
            static constexpr std::uintptr_t LiftInputs = 0x20C8;
            static constexpr std::uintptr_t LastBatteryRegenTickTime = 0x20D0;
            static constexpr std::uintptr_t bBoostThrust = 0x20D4;
            static constexpr std::uintptr_t bBoostDrag = 0x20D5;
            static constexpr std::uintptr_t bBoostInputReleased = 0x20D6;
            static constexpr std::uintptr_t bUseTractorBeamUprightForce = 0x20D7;
            static constexpr std::uintptr_t bDeadBattery = 0x20D8;
            static constexpr std::uintptr_t TractorBeamExtraLengthForExtents = 0x20DC;
            static constexpr std::uintptr_t CrashingDesiredUp = 0x20E0;
            static constexpr std::uintptr_t BoostStartTime = 0x20F8;
            static constexpr std::uintptr_t BoostPitchAlpha = 0x20FC;
            static constexpr std::uintptr_t BoostChargeProgress = 0x2100;
            static constexpr std::uintptr_t BoostChargesAvailable = 0x2104;
            static constexpr std::uintptr_t CachedBoostMoveDir = 0x2108;
            static constexpr std::uintptr_t CurrentStateStartTime = 0x2120;
            static constexpr std::uintptr_t HeightAtLandingTime = 0x2124;
            static constexpr std::uintptr_t CrashingScrapingTime = 0x2128;
            static constexpr std::uintptr_t CrashingNotMovingTimer = 0x212C;
            static constexpr std::uintptr_t AltimeterTraceHitDistance = 0x2130;
            static constexpr std::uintptr_t TractorBeamAppliedForceMagnitude = 0x2134;
            static constexpr std::uintptr_t AnimParamDriverSeatLeftRight = 0x2138;
            static constexpr std::uintptr_t AnimParamDriverSeatForwardBack = 0x213C;
            static constexpr std::uintptr_t bForceNegativeLift = 0x2140;
            static constexpr std::uintptr_t bForcePositiveLift = 0x2141;
            static constexpr std::uintptr_t bInitialLift = 0x2142;
            static constexpr std::uintptr_t CurrentVehicleState = 0x2143;
            static constexpr std::uintptr_t CachedLandscapeProxy = 0x2190;
            static constexpr std::uintptr_t PassengerCameraModeClass = 0x2198;
            static constexpr std::uintptr_t bTractorBeamChargeStarted = 0x21A0;
            static constexpr std::uintptr_t TowHookParams = 0x21A8;
            static constexpr std::uintptr_t AttachedPawnHiddenVehicle = 0x2278;
            static constexpr std::uintptr_t TractorBeamAttachedPrimitive = 0x2280;
            static constexpr std::uintptr_t SpawnedTractorBeamVictimVehicle = 0x2288;
            static constexpr std::uintptr_t PreviousTractorBeamAttachedPrimitive = 0x2290;
            static constexpr std::uintptr_t TractorBeamTargetedActors = 0x2298;
            static constexpr std::uintptr_t PreviouslyTargetedActors = 0x22A8;
            static constexpr std::uintptr_t TractorBeamAttachedActor = 0x22B8;
            static constexpr std::uintptr_t TractorBeamTargetedActor = 0x22C0;
            static constexpr std::uintptr_t TractorBeamTargetPosition = 0x22C8;
            static constexpr std::uintptr_t bBeamButtonReleased = 0x22E1;
            static constexpr std::uintptr_t TractorBeamObjectsTypes = 0x22E8;
            static constexpr std::uintptr_t DisallowedBeamTags = 0x22F8;
            static constexpr std::uintptr_t AlwaysAllowedBeamTags = 0x2318;
            static constexpr std::uintptr_t TractorBeamFX_Unattached = 0x23D0;
            static constexpr std::uintptr_t TractorBeamFX_Attached = 0x23D8;
            static constexpr std::uintptr_t BeamPSC = 0x23E0;
            static constexpr std::uintptr_t TractorBeamState = 0x2438;
            static constexpr std::uintptr_t TractorBeamDeactivationTimestamp = 0x2480;
            static constexpr std::uintptr_t TractorBeamDisruptedTimestamp = 0x2484;
            static constexpr std::uintptr_t CockpitHealth = 0x24D8;
            static constexpr std::uintptr_t Native_CockpitEnabled = 0x24DC;
            static constexpr std::uintptr_t LastCockpitHealthTickTime = 0x24E0;
            static constexpr std::uintptr_t LastCockpitDamageTime = 0x24E4;
            static constexpr std::uintptr_t CockpitDissolveStartTime = 0x24E8;
            static constexpr std::uintptr_t CockpitMaxHealth = 0x24F0;
            static constexpr std::uintptr_t CockpitHealthTickRate = 0x2518;
            static constexpr std::uintptr_t CockpitHealthPerTick = 0x2540;
            static constexpr std::uintptr_t CockpitRegenDelay = 0x2568;
            static constexpr std::uintptr_t CockpitHitMaterialWobble = 0x2590;
            static constexpr std::uintptr_t LastDamageAlpha = 0x2598;
            static constexpr std::uintptr_t bDissolvingCockpit = 0x259C;
            static constexpr std::uintptr_t bRestoringCockpit = 0x259D;
            static constexpr std::uintptr_t bCockpitWobble = 0x259E;
            static constexpr std::uintptr_t NativeComp_ShieldMesh = 0x25A0;
            static constexpr std::uintptr_t Native_CockpitMaterial = 0x25A8;
            static constexpr std::uintptr_t Native_EnergyRingMatInstance = 0x25B0;
            static constexpr std::uintptr_t Native_EnergyFieldMatInstance = 0x25B8;
            static constexpr std::uintptr_t NativeComp_DamageStateLastLife = 0x25C0;
            static constexpr std::uintptr_t NativeComp_DamageState = 0x25C8;
            static constexpr std::uintptr_t Native_LastHitLocation = 0x25D0;
            static constexpr std::uintptr_t Native_LastHitNormal = 0x25E8;
            static constexpr std::uintptr_t NativeComp_DamageStateFX = 0x2600;
            static constexpr std::uintptr_t NativeComp_HologramScreen = 0x2608;
            static constexpr std::uintptr_t NativeComp_SpeedLines = 0x2610;
            static constexpr std::uintptr_t Native_EnergyRingMat = 0x2618;
            static constexpr std::uintptr_t Native_EnergyFieldMat = 0x2620;
            static constexpr std::uintptr_t NativeSys_DamageStateFX = 0x2628;
            static constexpr std::uintptr_t NativeSys_CockpitDestroyed = 0x2630;
            static constexpr std::uintptr_t CockpitDamagedSound = 0x2638;
            static constexpr std::uintptr_t CockpitDestroyedSound = 0x2640;
            static constexpr std::uintptr_t CockpitRespawnSound = 0x2648;
            static constexpr std::uintptr_t Native_DamageStateSound = 0x2650;
            static constexpr std::uintptr_t Native_DamageStateLastLifeSound = 0x2658;
            static constexpr std::uintptr_t CockpitDeactivatedForceFeedback = 0x2660;
            static constexpr std::uintptr_t CockpitDestroyedCamShake = 0x2668;
            static constexpr std::uintptr_t TractorBeamDisallowedClasses = 0x2670;
        };

        inline static constexpr std::array<PropertyInfo, 91> Properties{{
            {"ServerReplicatedState", 0x2090, "StructProperty"},
            {"FortNevadaVehicleConfigs", 0x20A8, "ObjectProperty"},
            {"FortNevadaAudioControllerClass", 0x20B0, "ClassProperty"},
            {"AudioControllerActor", 0x20B8, "ObjectProperty"},
            {"FortNevadaAudioController", 0x20C0, "ObjectProperty"},
            {"LiftInputs", 0x20C8, "StructProperty"},
            {"LastBatteryRegenTickTime", 0x20D0, "FloatProperty"},
            {"bBoostThrust", 0x20D4, "BoolProperty"},
            {"bBoostDrag", 0x20D5, "BoolProperty"},
            {"bBoostInputReleased", 0x20D6, "BoolProperty"},
            {"bUseTractorBeamUprightForce", 0x20D7, "BoolProperty"},
            {"bDeadBattery", 0x20D8, "BoolProperty"},
            {"TractorBeamExtraLengthForExtents", 0x20DC, "FloatProperty"},
            {"CrashingDesiredUp", 0x20E0, "StructProperty"},
            {"BoostStartTime", 0x20F8, "FloatProperty"},
            {"BoostPitchAlpha", 0x20FC, "FloatProperty"},
            {"BoostChargeProgress", 0x2100, "FloatProperty"},
            {"BoostChargesAvailable", 0x2104, "IntProperty"},
            {"CachedBoostMoveDir", 0x2108, "StructProperty"},
            {"CurrentStateStartTime", 0x2120, "FloatProperty"},
            {"HeightAtLandingTime", 0x2124, "FloatProperty"},
            {"CrashingScrapingTime", 0x2128, "FloatProperty"},
            {"CrashingNotMovingTimer", 0x212C, "FloatProperty"},
            {"AltimeterTraceHitDistance", 0x2130, "FloatProperty"},
            {"TractorBeamAppliedForceMagnitude", 0x2134, "FloatProperty"},
            {"AnimParamDriverSeatLeftRight", 0x2138, "FloatProperty"},
            {"AnimParamDriverSeatForwardBack", 0x213C, "FloatProperty"},
            {"bForceNegativeLift", 0x2140, "BoolProperty"},
            {"bForcePositiveLift", 0x2141, "BoolProperty"},
            {"bInitialLift", 0x2142, "BoolProperty"},
            {"CurrentVehicleState", 0x2143, "EnumProperty"},
            {"CachedLandscapeProxy", 0x2190, "WeakObjectProperty"},
            {"PassengerCameraModeClass", 0x2198, "ClassProperty"},
            {"bTractorBeamChargeStarted", 0x21A0, "BoolProperty"},
            {"TowHookParams", 0x21A8, "StructProperty"},
            {"AttachedPawnHiddenVehicle", 0x2278, "ClassProperty"},
            {"TractorBeamAttachedPrimitive", 0x2280, "WeakObjectProperty"},
            {"SpawnedTractorBeamVictimVehicle", 0x2288, "ObjectProperty"},
            {"PreviousTractorBeamAttachedPrimitive", 0x2290, "WeakObjectProperty"},
            {"TractorBeamTargetedActors", 0x2298, "ArrayProperty"},
            {"PreviouslyTargetedActors", 0x22A8, "ArrayProperty"},
            {"TractorBeamAttachedActor", 0x22B8, "ObjectProperty"},
            {"TractorBeamTargetedActor", 0x22C0, "ObjectProperty"},
            {"TractorBeamTargetPosition", 0x22C8, "StructProperty"},
            {"bBeamButtonReleased", 0x22E1, "BoolProperty"},
            {"TractorBeamObjectsTypes", 0x22E8, "ArrayProperty"},
            {"DisallowedBeamTags", 0x22F8, "StructProperty"},
            {"AlwaysAllowedBeamTags", 0x2318, "StructProperty"},
            {"TractorBeamFX_Unattached", 0x23D0, "ObjectProperty"},
            {"TractorBeamFX_Attached", 0x23D8, "ObjectProperty"},
            {"BeamPSC", 0x23E0, "ObjectProperty"},
            {"TractorBeamState", 0x2438, "ByteProperty"},
            {"TractorBeamDeactivationTimestamp", 0x2480, "FloatProperty"},
            {"TractorBeamDisruptedTimestamp", 0x2484, "FloatProperty"},
            {"CockpitHealth", 0x24D8, "FloatProperty"},
            {"Native_CockpitEnabled", 0x24DC, "FloatProperty"},
            {"LastCockpitHealthTickTime", 0x24E0, "FloatProperty"},
            {"LastCockpitDamageTime", 0x24E4, "FloatProperty"},
            {"CockpitDissolveStartTime", 0x24E8, "FloatProperty"},
            {"CockpitMaxHealth", 0x24F0, "StructProperty"},
            {"CockpitHealthTickRate", 0x2518, "StructProperty"},
            {"CockpitHealthPerTick", 0x2540, "StructProperty"},
            {"CockpitRegenDelay", 0x2568, "StructProperty"},
            {"CockpitHitMaterialWobble", 0x2590, "ObjectProperty"},
            {"LastDamageAlpha", 0x2598, "FloatProperty"},
            {"bDissolvingCockpit", 0x259C, "BoolProperty"},
            {"bRestoringCockpit", 0x259D, "BoolProperty"},
            {"bCockpitWobble", 0x259E, "BoolProperty"},
            {"NativeComp_ShieldMesh", 0x25A0, "ObjectProperty"},
            {"Native_CockpitMaterial", 0x25A8, "ObjectProperty"},
            {"Native_EnergyRingMatInstance", 0x25B0, "ObjectProperty"},
            {"Native_EnergyFieldMatInstance", 0x25B8, "ObjectProperty"},
            {"NativeComp_DamageStateLastLife", 0x25C0, "ObjectProperty"},
            {"NativeComp_DamageState", 0x25C8, "ObjectProperty"},
            {"Native_LastHitLocation", 0x25D0, "StructProperty"},
            {"Native_LastHitNormal", 0x25E8, "StructProperty"},
            {"NativeComp_DamageStateFX", 0x2600, "ObjectProperty"},
            {"NativeComp_HologramScreen", 0x2608, "ObjectProperty"},
            {"NativeComp_SpeedLines", 0x2610, "ObjectProperty"},
            {"Native_EnergyRingMat", 0x2618, "ObjectProperty"},
            {"Native_EnergyFieldMat", 0x2620, "ObjectProperty"},
            {"NativeSys_DamageStateFX", 0x2628, "ObjectProperty"},
            {"NativeSys_CockpitDestroyed", 0x2630, "ObjectProperty"},
            {"CockpitDamagedSound", 0x2638, "ObjectProperty"},
            {"CockpitDestroyedSound", 0x2640, "ObjectProperty"},
            {"CockpitRespawnSound", 0x2648, "ObjectProperty"},
            {"Native_DamageStateSound", 0x2650, "ObjectProperty"},
            {"Native_DamageStateLastLifeSound", 0x2658, "ObjectProperty"},
            {"CockpitDeactivatedForceFeedback", 0x2660, "ObjectProperty"},
            {"CockpitDestroyedCamShake", 0x2668, "ClassProperty"},
            {"TractorBeamDisallowedClasses", 0x2670, "ArrayProperty"},
        }};
    };

    struct FortNevadaVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortNevadaVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t NevadaVehicle = 0x510;
            static constexpr std::uintptr_t bTractorBeam_IsAttached = 0x518;
            static constexpr std::uintptr_t bTractorBeam_IsCharging = 0x519;
            static constexpr std::uintptr_t bTractorBeam_IsActive = 0x51A;
            static constexpr std::uintptr_t bTractorBeam_IsInactive = 0x51B;
            static constexpr std::uintptr_t bTractorBeam_IsOn = 0x51C;
            static constexpr std::uintptr_t bTractorBeam_HasTarget = 0x51D;
            static constexpr std::uintptr_t bTractorBeam_ShouldApplyCustomAO = 0x51E;
            static constexpr std::uintptr_t TractorBeam_LookAtPitch = 0x520;
            static constexpr std::uintptr_t TractorBeam_LookAtYaw = 0x524;
            static constexpr std::uintptr_t LeanLeftRight = 0x528;
            static constexpr std::uintptr_t LeanForwardBackward = 0x52C;
            static constexpr std::uintptr_t LeanValue = 0x530;
            static constexpr std::uintptr_t PreviousLeanValue = 0x534;
            static constexpr std::uintptr_t VelocityZValue = 0x538;
            static constexpr std::uintptr_t LeanDelta = 0x53C;
            static constexpr std::uintptr_t bTurnAgain = 0x540;
            static constexpr std::uintptr_t bHadDriver = 0x541;
            static constexpr std::uintptr_t bJustGotDriver = 0x542;
            static constexpr std::uintptr_t bJustLostDriver = 0x543;
            static constexpr std::uintptr_t bWasBoosting = 0x544;
            static constexpr std::uintptr_t bIsBoosting = 0x545;
            static constexpr std::uintptr_t PreviousBoostCount = 0x548;
            static constexpr std::uintptr_t BoostCount = 0x54C;
            static constexpr std::uintptr_t bIsBoostingAgain = 0x550;
            static constexpr std::uintptr_t bIsMoving = 0x551;
            static constexpr std::uintptr_t WingsPlayRate = 0x554;
            static constexpr std::uintptr_t TractorBeamAlpha = 0x558;
            static constexpr std::uintptr_t AimPitch = 0x55C;
            static constexpr std::uintptr_t AimYaw = 0x560;
            static constexpr std::uintptr_t bIsFiringCannon = 0x564;
            static constexpr std::uintptr_t DistanceFromGround = 0x568;
            static constexpr std::uintptr_t bIsLanding = 0x56C;
            static constexpr std::uintptr_t bHasLanded = 0x56D;
            static constexpr std::uintptr_t LandingAlpha = 0x570;
            static constexpr std::uintptr_t bNotLandingMode = 0x574;
            static constexpr std::uintptr_t bHadBattery = 0x575;
            static constexpr std::uintptr_t bOutOfBattery = 0x576;
            static constexpr std::uintptr_t bJustGotBattery = 0x577;
            static constexpr std::uintptr_t bLaunchToDepart = 0x578;
            static constexpr std::uintptr_t bLaunchToIdle = 0x579;
            static constexpr std::uintptr_t bIsPartsLanding = 0x57A;
            static constexpr std::uintptr_t TractorBeamSocketName = 0x57C;
            static constexpr std::uintptr_t TractorBeamAimCurveName = 0x580;
            static constexpr std::uintptr_t NevadaVehicleInterruptName = 0x584;
            static constexpr std::uintptr_t LandingTraceRightName = 0x588;
            static constexpr std::uintptr_t LandingTraceLeftName = 0x58C;
            static constexpr std::uintptr_t MaxLeanDeltaInterruptMagnitude = 0x590;
            static constexpr std::uintptr_t MinForwardSpeedToBeMoving = 0x594;
            static constexpr std::uintptr_t MinForwardSpeedToPlayWings = 0x598;
            static constexpr std::uintptr_t MinWingsPlayRate = 0x59C;
            static constexpr std::uintptr_t MaxWingsPlayRate = 0x5A0;
            static constexpr std::uintptr_t WingsPlayRateInterpSpeed = 0x5A4;
            static constexpr std::uintptr_t CannonFiringMontage = 0x5A8;
            static constexpr std::uintptr_t LandingGearTraceLength = 0x5C8;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"NevadaVehicle", 0x510, "ObjectProperty"},
            {"bTractorBeam_IsAttached", 0x518, "BoolProperty"},
            {"bTractorBeam_IsCharging", 0x519, "BoolProperty"},
            {"bTractorBeam_IsActive", 0x51A, "BoolProperty"},
            {"bTractorBeam_IsInactive", 0x51B, "BoolProperty"},
            {"bTractorBeam_IsOn", 0x51C, "BoolProperty"},
            {"bTractorBeam_HasTarget", 0x51D, "BoolProperty"},
            {"bTractorBeam_ShouldApplyCustomAO", 0x51E, "BoolProperty"},
            {"TractorBeam_LookAtPitch", 0x520, "FloatProperty"},
            {"TractorBeam_LookAtYaw", 0x524, "FloatProperty"},
            {"LeanLeftRight", 0x528, "FloatProperty"},
            {"LeanForwardBackward", 0x52C, "FloatProperty"},
            {"LeanValue", 0x530, "FloatProperty"},
            {"PreviousLeanValue", 0x534, "FloatProperty"},
            {"VelocityZValue", 0x538, "FloatProperty"},
            {"LeanDelta", 0x53C, "FloatProperty"},
            {"bTurnAgain", 0x540, "BoolProperty"},
            {"bHadDriver", 0x541, "BoolProperty"},
            {"bJustGotDriver", 0x542, "BoolProperty"},
            {"bJustLostDriver", 0x543, "BoolProperty"},
            {"bWasBoosting", 0x544, "BoolProperty"},
            {"bIsBoosting", 0x545, "BoolProperty"},
            {"PreviousBoostCount", 0x548, "IntProperty"},
            {"BoostCount", 0x54C, "IntProperty"},
            {"bIsBoostingAgain", 0x550, "BoolProperty"},
            {"bIsMoving", 0x551, "BoolProperty"},
            {"WingsPlayRate", 0x554, "FloatProperty"},
            {"TractorBeamAlpha", 0x558, "FloatProperty"},
            {"AimPitch", 0x55C, "FloatProperty"},
            {"AimYaw", 0x560, "FloatProperty"},
            {"bIsFiringCannon", 0x564, "BoolProperty"},
            {"DistanceFromGround", 0x568, "FloatProperty"},
            {"bIsLanding", 0x56C, "BoolProperty"},
            {"bHasLanded", 0x56D, "BoolProperty"},
            {"LandingAlpha", 0x570, "FloatProperty"},
            {"bNotLandingMode", 0x574, "BoolProperty"},
            {"bHadBattery", 0x575, "BoolProperty"},
            {"bOutOfBattery", 0x576, "BoolProperty"},
            {"bJustGotBattery", 0x577, "BoolProperty"},
            {"bLaunchToDepart", 0x578, "BoolProperty"},
            {"bLaunchToIdle", 0x579, "BoolProperty"},
            {"bIsPartsLanding", 0x57A, "BoolProperty"},
            {"TractorBeamSocketName", 0x57C, "NameProperty"},
            {"TractorBeamAimCurveName", 0x580, "NameProperty"},
            {"NevadaVehicleInterruptName", 0x584, "NameProperty"},
            {"LandingTraceRightName", 0x588, "NameProperty"},
            {"LandingTraceLeftName", 0x58C, "NameProperty"},
            {"MaxLeanDeltaInterruptMagnitude", 0x590, "FloatProperty"},
            {"MinForwardSpeedToBeMoving", 0x594, "FloatProperty"},
            {"MinForwardSpeedToPlayWings", 0x598, "FloatProperty"},
            {"MinWingsPlayRate", 0x59C, "FloatProperty"},
            {"MaxWingsPlayRate", 0x5A0, "FloatProperty"},
            {"WingsPlayRateInterpSpeed", 0x5A4, "FloatProperty"},
            {"CannonFiringMontage", 0x5A8, "SoftObjectProperty"},
            {"LandingGearTraceLength", 0x5C8, "FloatProperty"},
        }};
    };

    struct FortNevadaVehicleConfigs
    {
        static constexpr std::string_view Name = "FortNevadaVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseMovement = 0x990;
            static constexpr std::uintptr_t BoostMovement = 0x9A4;
            static constexpr std::uintptr_t ChargingMovement = 0x9B8;
            static constexpr std::uintptr_t UprightSpringForce = 0x9CC;
            static constexpr std::uintptr_t DebaseLaunchspeed = 0x9D8;
            static constexpr std::uintptr_t MaxHeight = 0x9DC;
            static constexpr std::uintptr_t MinHeight = 0x9E0;
            static constexpr std::uintptr_t OnEnterPitchAlpha = 0x9E4;
            static constexpr std::uintptr_t FallDamageHeightBuffer = 0x9E8;
            static constexpr std::uintptr_t TurningForce = 0x9EC;
            static constexpr std::uintptr_t ThrustRotationAlpha = 0x9F0;
            static constexpr std::uintptr_t PitchDrag = 0x9F4;
            static constexpr std::uintptr_t YawDrag = 0x9F8;
            static constexpr std::uintptr_t RollDrag = 0x9FC;
            static constexpr std::uintptr_t BoostThrustDuration = 0xA00;
            static constexpr std::uintptr_t BoostDragDuration = 0xA04;
            static constexpr std::uintptr_t NumBoostCharges = 0xA08;
            static constexpr std::uintptr_t BoostChargeDuration = 0xA0C;
            static constexpr std::uintptr_t BoostChargeDelay = 0xA10;
            static constexpr std::uintptr_t BoostDragFinishSpeed = 0xA14;
            static constexpr std::uintptr_t TractorBeamRadius = 0xA18;
            static constexpr std::uintptr_t TractorBeamWithTargetRadius = 0xA1C;
            static constexpr std::uintptr_t TractorBeamSweepLength = 0xA20;
            static constexpr std::uintptr_t TractorBeamChargeTime = 0xA48;
            static constexpr std::uintptr_t TractorBeamDurationTime = 0xA70;
            static constexpr std::uintptr_t TractorBeamTossImpulseStrengthForward = 0xA98;
            static constexpr std::uintptr_t TractorBeamTossImpulseStrengthUpward = 0xAC0;
            static constexpr std::uintptr_t TractorBeamShutdownTime = 0xAE8;
            static constexpr std::uintptr_t TractorBeamTurnOffDamage = 0xAF0;
            static constexpr std::uintptr_t AllowTractorBeamAIPawns = 0xB18;
            static constexpr std::uintptr_t TractorBeamBreakForceMagnitude = 0xB40;
            static constexpr std::uintptr_t TractorBeamActive = 0xB48;
            static constexpr std::uintptr_t TractorBeamCooldown = 0xB70;
            static constexpr std::uintptr_t TractorBeamDisruptionCooldown = 0xB98;
            static constexpr std::uintptr_t TractorBeamSocket = 0xBC0;
            static constexpr std::uintptr_t TractorBeamAttachPositionOffset = 0xBC8;
            static constexpr std::uintptr_t TractorBeamTargetOverridenErrorCorrection = 0xBE0;
            static constexpr std::uintptr_t VictimPitchDrag = 0xC14;
            static constexpr std::uintptr_t VictimYawDrag = 0xC18;
            static constexpr std::uintptr_t VictimRollDrag = 0xC1C;
            static constexpr std::uintptr_t TractorBeamVictimUprightForce = 0xC20;
            static constexpr std::uintptr_t NumReboots = 0xC2C;
            static constexpr std::uintptr_t NumRebootsDefault = 0xC30;
            static constexpr std::uintptr_t MaxCrashingTime = 0xC34;
            static constexpr std::uintptr_t MaxCrashingScrapingTime = 0xC38;
            static constexpr std::uintptr_t MaxCrashingTimeSpentNotMoving = 0xC3C;
            static constexpr std::uintptr_t SpeedThresholdForCrashed = 0xC40;
            static constexpr std::uintptr_t RebootDuration = 0xC48;
            static constexpr std::uintptr_t RebootDelay = 0xC70;
            static constexpr std::uintptr_t LandingTraceRange = 0xC98;
            static constexpr std::uintptr_t DesiredLandingDistance = 0xC9C;
            static constexpr std::uintptr_t LandingDelay_Max = 0xCA0;
            static constexpr std::uintptr_t LandingDelay_Min = 0xCA4;
            static constexpr std::uintptr_t HeightForMinLandingDelay = 0xCA8;
            static constexpr std::uintptr_t HeightForMaxLandingDelay = 0xCAC;
            static constexpr std::uintptr_t LandingPitchAlphaMax = 0xCB0;
            static constexpr std::uintptr_t LandingPitchAlphaMin = 0xCB4;
            static constexpr std::uintptr_t DriverSeatRotationAnimBlendSpeed = 0xCB8;
            static constexpr std::uintptr_t CrashingDesiredUpLerpFactor = 0xCBC;
            static constexpr std::uintptr_t CrashedLinearDrag = 0xCC0;
            static constexpr std::uintptr_t LandedDragCoef = 0xCC4;
            static constexpr std::uintptr_t LandedDragCoef2 = 0xCC8;
            static constexpr std::uintptr_t LandedMaxDragSpeed = 0xCCC;
            static constexpr std::uintptr_t CrashedAngularDragMultiplier = 0xCD0;
            static constexpr std::uintptr_t BoostFOV = 0xCD4;
            static constexpr std::uintptr_t ExtraTraceInteractRange = 0xCD8;
            static constexpr std::uintptr_t AntiGravityMult = 0xCDC;
            static constexpr std::uintptr_t InitialLiftDuration = 0xCE0;
            static constexpr std::uintptr_t BatteryCostDuringFlight = 0xCE8;
            static constexpr std::uintptr_t BatteryRegenDelay = 0xD10;
            static constexpr std::uintptr_t BatteryRegenTickRate = 0xD38;
            static constexpr std::uintptr_t BatteryRegenAmount = 0xD60;
            static constexpr std::uintptr_t MaxBattery = 0xD88;
            static constexpr std::uintptr_t MinBatteryForFlight = 0xDB0;
            static constexpr std::uintptr_t CockpitShapeNames = 0xDD8;
            static constexpr std::uintptr_t CockpitDamageMult = 0xDE8;
            static constexpr std::uintptr_t CockpitHealth = 0xE10;
        };

        inline static constexpr std::array<PropertyInfo, 77> Properties{{
            {"BaseMovement", 0x990, "StructProperty"},
            {"BoostMovement", 0x9A4, "StructProperty"},
            {"ChargingMovement", 0x9B8, "StructProperty"},
            {"UprightSpringForce", 0x9CC, "StructProperty"},
            {"DebaseLaunchspeed", 0x9D8, "FloatProperty"},
            {"MaxHeight", 0x9DC, "FloatProperty"},
            {"MinHeight", 0x9E0, "FloatProperty"},
            {"OnEnterPitchAlpha", 0x9E4, "FloatProperty"},
            {"FallDamageHeightBuffer", 0x9E8, "FloatProperty"},
            {"TurningForce", 0x9EC, "FloatProperty"},
            {"ThrustRotationAlpha", 0x9F0, "FloatProperty"},
            {"PitchDrag", 0x9F4, "FloatProperty"},
            {"YawDrag", 0x9F8, "FloatProperty"},
            {"RollDrag", 0x9FC, "FloatProperty"},
            {"BoostThrustDuration", 0xA00, "FloatProperty"},
            {"BoostDragDuration", 0xA04, "FloatProperty"},
            {"NumBoostCharges", 0xA08, "IntProperty"},
            {"BoostChargeDuration", 0xA0C, "FloatProperty"},
            {"BoostChargeDelay", 0xA10, "FloatProperty"},
            {"BoostDragFinishSpeed", 0xA14, "FloatProperty"},
            {"TractorBeamRadius", 0xA18, "FloatProperty"},
            {"TractorBeamWithTargetRadius", 0xA1C, "FloatProperty"},
            {"TractorBeamSweepLength", 0xA20, "StructProperty"},
            {"TractorBeamChargeTime", 0xA48, "StructProperty"},
            {"TractorBeamDurationTime", 0xA70, "StructProperty"},
            {"TractorBeamTossImpulseStrengthForward", 0xA98, "StructProperty"},
            {"TractorBeamTossImpulseStrengthUpward", 0xAC0, "StructProperty"},
            {"TractorBeamShutdownTime", 0xAE8, "FloatProperty"},
            {"TractorBeamTurnOffDamage", 0xAF0, "StructProperty"},
            {"AllowTractorBeamAIPawns", 0xB18, "StructProperty"},
            {"TractorBeamBreakForceMagnitude", 0xB40, "FloatProperty"},
            {"TractorBeamActive", 0xB48, "StructProperty"},
            {"TractorBeamCooldown", 0xB70, "StructProperty"},
            {"TractorBeamDisruptionCooldown", 0xB98, "StructProperty"},
            {"TractorBeamSocket", 0xBC0, "NameProperty"},
            {"TractorBeamAttachPositionOffset", 0xBC8, "StructProperty"},
            {"TractorBeamTargetOverridenErrorCorrection", 0xBE0, "StructProperty"},
            {"VictimPitchDrag", 0xC14, "FloatProperty"},
            {"VictimYawDrag", 0xC18, "FloatProperty"},
            {"VictimRollDrag", 0xC1C, "FloatProperty"},
            {"TractorBeamVictimUprightForce", 0xC20, "StructProperty"},
            {"NumReboots", 0xC2C, "IntProperty"},
            {"NumRebootsDefault", 0xC30, "IntProperty"},
            {"MaxCrashingTime", 0xC34, "FloatProperty"},
            {"MaxCrashingScrapingTime", 0xC38, "FloatProperty"},
            {"MaxCrashingTimeSpentNotMoving", 0xC3C, "FloatProperty"},
            {"SpeedThresholdForCrashed", 0xC40, "FloatProperty"},
            {"RebootDuration", 0xC48, "StructProperty"},
            {"RebootDelay", 0xC70, "StructProperty"},
            {"LandingTraceRange", 0xC98, "FloatProperty"},
            {"DesiredLandingDistance", 0xC9C, "FloatProperty"},
            {"LandingDelay_Max", 0xCA0, "FloatProperty"},
            {"LandingDelay_Min", 0xCA4, "FloatProperty"},
            {"HeightForMinLandingDelay", 0xCA8, "FloatProperty"},
            {"HeightForMaxLandingDelay", 0xCAC, "FloatProperty"},
            {"LandingPitchAlphaMax", 0xCB0, "FloatProperty"},
            {"LandingPitchAlphaMin", 0xCB4, "FloatProperty"},
            {"DriverSeatRotationAnimBlendSpeed", 0xCB8, "FloatProperty"},
            {"CrashingDesiredUpLerpFactor", 0xCBC, "FloatProperty"},
            {"CrashedLinearDrag", 0xCC0, "FloatProperty"},
            {"LandedDragCoef", 0xCC4, "FloatProperty"},
            {"LandedDragCoef2", 0xCC8, "FloatProperty"},
            {"LandedMaxDragSpeed", 0xCCC, "FloatProperty"},
            {"CrashedAngularDragMultiplier", 0xCD0, "FloatProperty"},
            {"BoostFOV", 0xCD4, "FloatProperty"},
            {"ExtraTraceInteractRange", 0xCD8, "FloatProperty"},
            {"AntiGravityMult", 0xCDC, "FloatProperty"},
            {"InitialLiftDuration", 0xCE0, "FloatProperty"},
            {"BatteryCostDuringFlight", 0xCE8, "StructProperty"},
            {"BatteryRegenDelay", 0xD10, "StructProperty"},
            {"BatteryRegenTickRate", 0xD38, "StructProperty"},
            {"BatteryRegenAmount", 0xD60, "StructProperty"},
            {"MaxBattery", 0xD88, "StructProperty"},
            {"MinBatteryForFlight", 0xDB0, "StructProperty"},
            {"CockpitShapeNames", 0xDD8, "ArrayProperty"},
            {"CockpitDamageMult", 0xDE8, "StructProperty"},
            {"CockpitHealth", 0xE10, "StructProperty"},
        }};
    };

    struct FortPlayerAnimInstance_NevadaDriver
    {
        static constexpr std::string_view Name = "FortPlayerAnimInstance_NevadaDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstance_OctopusDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t NevadaVehicle = 0x13C0;
            static constexpr std::uintptr_t AnimLeftRight = 0x13C8;
            static constexpr std::uintptr_t AnimForwardBackward = 0x13CC;
            static constexpr std::uintptr_t RootAttachmentLoc = 0x13D0;
            static constexpr std::uintptr_t RootAttachmentRot = 0x13E8;
            static constexpr std::uintptr_t BoostCount = 0x1400;
            static constexpr std::uintptr_t PreviousBoostCount = 0x1404;
            static constexpr std::uintptr_t bIsBoostingAgain = 0x1408;
            static constexpr std::uintptr_t bIsMoving = 0x1409;
            static constexpr std::uintptr_t MinVehicleVelocityToBeMoving = 0x140C;
            static constexpr std::uintptr_t DriverSocketName = 0x1410;
            static constexpr std::uintptr_t RightHandAttachmentSocketName = 0x1414;
            static constexpr std::uintptr_t LeftHandAttachmentSocketName = 0x1418;
            static constexpr std::uintptr_t RightFootAttachmentSocketName = 0x141C;
            static constexpr std::uintptr_t LeftFootAttachementSocketName = 0x1420;
            static constexpr std::uintptr_t RightHandRotationOffset = 0x1428;
            static constexpr std::uintptr_t LeftHandRotationOffset = 0x1440;
            static constexpr std::uintptr_t RightFootRotationOffset = 0x1458;
            static constexpr std::uintptr_t LeftFootRotationOffset = 0x1470;
            static constexpr std::uintptr_t RootAttachmentOffset = 0x1488;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"NevadaVehicle", 0x13C0, "ObjectProperty"},
            {"AnimLeftRight", 0x13C8, "FloatProperty"},
            {"AnimForwardBackward", 0x13CC, "FloatProperty"},
            {"RootAttachmentLoc", 0x13D0, "StructProperty"},
            {"RootAttachmentRot", 0x13E8, "StructProperty"},
            {"BoostCount", 0x1400, "IntProperty"},
            {"PreviousBoostCount", 0x1404, "IntProperty"},
            {"bIsBoostingAgain", 0x1408, "BoolProperty"},
            {"bIsMoving", 0x1409, "BoolProperty"},
            {"MinVehicleVelocityToBeMoving", 0x140C, "FloatProperty"},
            {"DriverSocketName", 0x1410, "NameProperty"},
            {"RightHandAttachmentSocketName", 0x1414, "NameProperty"},
            {"LeftHandAttachmentSocketName", 0x1418, "NameProperty"},
            {"RightFootAttachmentSocketName", 0x141C, "NameProperty"},
            {"LeftFootAttachementSocketName", 0x1420, "NameProperty"},
            {"RightHandRotationOffset", 0x1428, "StructProperty"},
            {"LeftHandRotationOffset", 0x1440, "StructProperty"},
            {"RightFootRotationOffset", 0x1458, "StructProperty"},
            {"LeftFootRotationOffset", 0x1470, "StructProperty"},
            {"RootAttachmentOffset", 0x1488, "StructProperty"},
        }};
    };

}

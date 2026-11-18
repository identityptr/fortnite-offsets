#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GrindingCode
{
    struct FortCameraModifier_Grinding
    {
        static constexpr std::string_view Name = "FortCameraModifier_Grinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseNativeCalculation = 0x48;
            static constexpr std::uintptr_t BlendInCurve = 0x70;
            static constexpr std::uintptr_t BlendOutCurve = 0x78;
            static constexpr std::uintptr_t SnapToGrindingLocation = 0x80;
            static constexpr std::uintptr_t ADSAlphaInterpSpeed = 0xA8;
            static constexpr std::uintptr_t CurrentForwardInterpSpeed = 0xD0;
            static constexpr std::uintptr_t MaxRightSpeedOldRangeForForward = 0xF8;
            static constexpr std::uintptr_t MaxRightSpeedNewRangeForForward = 0x120;
            static constexpr std::uintptr_t MinForwardSpeedOldRangeForForward = 0x148;
            static constexpr std::uintptr_t MaxForwardSpeedOldRangeForForward = 0x170;
            static constexpr std::uintptr_t MinForwardSpeedNewRangeForForward = 0x198;
            static constexpr std::uintptr_t MaxForwardSpeedNewRangeForForward = 0x1C0;
            static constexpr std::uintptr_t MinUpSpeedOldRangeForForward = 0x1E8;
            static constexpr std::uintptr_t MaxUpSpeedOldRangeForForward = 0x210;
            static constexpr std::uintptr_t MinUpSpeedNewRangeForForward = 0x238;
            static constexpr std::uintptr_t MaxUpSpeedNewRangeForForward = 0x260;
            static constexpr std::uintptr_t BaseForwardMultiplier = 0x288;
            static constexpr std::uintptr_t SpeedUpBoosterForwardMultiplier = 0x2B0;
            static constexpr std::uintptr_t SprintingForwardMultiplier = 0x2D8;
            static constexpr std::uintptr_t RightSpeedOldRangeForRight = 0x300;
            static constexpr std::uintptr_t RightSpeedNewRangeForRight = 0x328;
            static constexpr std::uintptr_t MaxUpSpeedOldRangeForRight = 0x350;
            static constexpr std::uintptr_t MaxUpSpeedNewRangeForRight = 0x378;
            static constexpr std::uintptr_t MinForwardSpeedOldRangeForRight = 0x3A0;
            static constexpr std::uintptr_t MaxForwardSpeedOldRangeForRight = 0x3C8;
            static constexpr std::uintptr_t MinForwardSpeedNewRangeForRight = 0x3F0;
            static constexpr std::uintptr_t MaxForwardSpeedNewRangeForRight = 0x418;
            static constexpr std::uintptr_t BaseRightMultiplier = 0x440;
            static constexpr std::uintptr_t SpeedUpBoostRightMultiplier = 0x468;
            static constexpr std::uintptr_t SprintingRightMultiplier = 0x490;
            static constexpr std::uintptr_t CurrentRightInterpSpeed = 0x4B8;
            static constexpr std::uintptr_t UpSpeedOldRangeForUp = 0x4E0;
            static constexpr std::uintptr_t UpSpeedNewRangeForUp = 0x508;
            static constexpr std::uintptr_t CurrentUpInterpSpeed = 0x530;
            static constexpr std::uintptr_t BaseUpMultiplier = 0x558;
            static constexpr std::uintptr_t SpeedUpBoostUpMultiplier = 0x580;
            static constexpr std::uintptr_t SprintingUpMultiplier = 0x5A8;
            static constexpr std::uintptr_t MinForwardSpeedOldRangeForLean = 0x5D0;
            static constexpr std::uintptr_t MaxForwardSpeedOldRangeForLean = 0x5F8;
            static constexpr std::uintptr_t MinForwardSpeedNewRangeForLean = 0x620;
            static constexpr std::uintptr_t MaxForwardSpeedNewRangeForLean = 0x648;
            static constexpr std::uintptr_t MultiplierForMaxNewLeanRange = 0x670;
            static constexpr std::uintptr_t CurrentLeanInterpSpeed = 0x698;
            static constexpr std::uintptr_t MaxSpeedOldRangeForFOV = 0x6C0;
            static constexpr std::uintptr_t MaxSpeedNewRangeForFOV = 0x6E8;
            static constexpr std::uintptr_t BaseFOV = 0x710;
            static constexpr std::uintptr_t SpeedUpBoosterFOV = 0x738;
            static constexpr std::uintptr_t SprintingFOV = 0x760;
            static constexpr std::uintptr_t CurrentFOVInterpSpeed = 0x788;
            static constexpr std::uintptr_t DeltaDecreaseInZForOffset = 0x7B0;
            static constexpr std::uintptr_t CurrentOffsetInterpSpeed = 0x7D8;
            static constexpr std::uintptr_t StraightnessMultiplierForOffset = 0x800;
            static constexpr std::uintptr_t FinalOffsetForwardDelta = 0x828;
            static constexpr std::uintptr_t FinalOffsetUpDelta = 0x850;
            static constexpr std::uintptr_t FinalOffsetRightDelta = 0x878;
            static constexpr std::uintptr_t bCachedUseNativeCalculation = 0x8F0;
        };

        inline static constexpr std::array<PropertyInfo, 56> Properties{{
            {"bUseNativeCalculation", 0x48, "StructProperty"},
            {"BlendInCurve", 0x70, "ObjectProperty"},
            {"BlendOutCurve", 0x78, "ObjectProperty"},
            {"SnapToGrindingLocation", 0x80, "StructProperty"},
            {"ADSAlphaInterpSpeed", 0xA8, "StructProperty"},
            {"CurrentForwardInterpSpeed", 0xD0, "StructProperty"},
            {"MaxRightSpeedOldRangeForForward", 0xF8, "StructProperty"},
            {"MaxRightSpeedNewRangeForForward", 0x120, "StructProperty"},
            {"MinForwardSpeedOldRangeForForward", 0x148, "StructProperty"},
            {"MaxForwardSpeedOldRangeForForward", 0x170, "StructProperty"},
            {"MinForwardSpeedNewRangeForForward", 0x198, "StructProperty"},
            {"MaxForwardSpeedNewRangeForForward", 0x1C0, "StructProperty"},
            {"MinUpSpeedOldRangeForForward", 0x1E8, "StructProperty"},
            {"MaxUpSpeedOldRangeForForward", 0x210, "StructProperty"},
            {"MinUpSpeedNewRangeForForward", 0x238, "StructProperty"},
            {"MaxUpSpeedNewRangeForForward", 0x260, "StructProperty"},
            {"BaseForwardMultiplier", 0x288, "StructProperty"},
            {"SpeedUpBoosterForwardMultiplier", 0x2B0, "StructProperty"},
            {"SprintingForwardMultiplier", 0x2D8, "StructProperty"},
            {"RightSpeedOldRangeForRight", 0x300, "StructProperty"},
            {"RightSpeedNewRangeForRight", 0x328, "StructProperty"},
            {"MaxUpSpeedOldRangeForRight", 0x350, "StructProperty"},
            {"MaxUpSpeedNewRangeForRight", 0x378, "StructProperty"},
            {"MinForwardSpeedOldRangeForRight", 0x3A0, "StructProperty"},
            {"MaxForwardSpeedOldRangeForRight", 0x3C8, "StructProperty"},
            {"MinForwardSpeedNewRangeForRight", 0x3F0, "StructProperty"},
            {"MaxForwardSpeedNewRangeForRight", 0x418, "StructProperty"},
            {"BaseRightMultiplier", 0x440, "StructProperty"},
            {"SpeedUpBoostRightMultiplier", 0x468, "StructProperty"},
            {"SprintingRightMultiplier", 0x490, "StructProperty"},
            {"CurrentRightInterpSpeed", 0x4B8, "StructProperty"},
            {"UpSpeedOldRangeForUp", 0x4E0, "StructProperty"},
            {"UpSpeedNewRangeForUp", 0x508, "StructProperty"},
            {"CurrentUpInterpSpeed", 0x530, "StructProperty"},
            {"BaseUpMultiplier", 0x558, "StructProperty"},
            {"SpeedUpBoostUpMultiplier", 0x580, "StructProperty"},
            {"SprintingUpMultiplier", 0x5A8, "StructProperty"},
            {"MinForwardSpeedOldRangeForLean", 0x5D0, "StructProperty"},
            {"MaxForwardSpeedOldRangeForLean", 0x5F8, "StructProperty"},
            {"MinForwardSpeedNewRangeForLean", 0x620, "StructProperty"},
            {"MaxForwardSpeedNewRangeForLean", 0x648, "StructProperty"},
            {"MultiplierForMaxNewLeanRange", 0x670, "StructProperty"},
            {"CurrentLeanInterpSpeed", 0x698, "StructProperty"},
            {"MaxSpeedOldRangeForFOV", 0x6C0, "StructProperty"},
            {"MaxSpeedNewRangeForFOV", 0x6E8, "StructProperty"},
            {"BaseFOV", 0x710, "StructProperty"},
            {"SpeedUpBoosterFOV", 0x738, "StructProperty"},
            {"SprintingFOV", 0x760, "StructProperty"},
            {"CurrentFOVInterpSpeed", 0x788, "StructProperty"},
            {"DeltaDecreaseInZForOffset", 0x7B0, "StructProperty"},
            {"CurrentOffsetInterpSpeed", 0x7D8, "StructProperty"},
            {"StraightnessMultiplierForOffset", 0x800, "StructProperty"},
            {"FinalOffsetForwardDelta", 0x828, "StructProperty"},
            {"FinalOffsetUpDelta", 0x850, "StructProperty"},
            {"FinalOffsetRightDelta", 0x878, "StructProperty"},
            {"bCachedUseNativeCalculation", 0x8F0, "BoolProperty"},
        }};
    };

    struct FortGrindRail
    {
        static constexpr std::string_view Name = "FortGrindRail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedHardCap = 0x948;
            static constexpr std::uintptr_t BaseMaxSpeed = 0x970;
            static constexpr std::uintptr_t MaxSpeedIncreaseFromDownwardSlope = 0x998;
            static constexpr std::uintptr_t MaxBaseAcceleration = 0x9C0;
            static constexpr std::uintptr_t MinBaseAcceleration = 0x9E8;
            static constexpr std::uintptr_t MaxStartSpeed = 0xA10;
            static constexpr std::uintptr_t MinStartSpeed = 0xA38;
            static constexpr std::uintptr_t SprintingAcceleration = 0xA60;
            static constexpr std::uintptr_t SprintingMaxSpeed = 0xA88;
            static constexpr std::uintptr_t GrindRailMeshes = 0xAB0;
            static constexpr std::uintptr_t BoosterInfos = 0xAC0;
            static constexpr std::uintptr_t SplineComponent = 0xAD0;
            static constexpr std::uintptr_t EnableBoosters = 0xAD8;
            static constexpr std::uintptr_t EnableGrinding = 0xB00;
            static constexpr std::uintptr_t EnableProjectileCollision = 0xB28;
            static constexpr std::uintptr_t EnableMeshCollision = 0xB50;
            static constexpr std::uintptr_t EnableWeaponBulletCollision = 0xB78;
            static constexpr std::uintptr_t StartGrindingFromWalking = 0xBA0;
            static constexpr std::uintptr_t bSimulateSplineGravity = 0xBC8;
            static constexpr std::uintptr_t SimulatedSplineGravityAcceleration = 0xBCC;
            static constexpr std::uintptr_t TargetDistanceBetweenSplinePointsForGravitySimulation = 0xBD0;
            static constexpr std::uintptr_t SplineGravitySimulationIterationCount = 0xBD4;
            static constexpr std::uintptr_t SplineGravitySimulationTime = 0xBD8;
            static constexpr std::uintptr_t IdealInteractStartDistance = 0xBDC;
            static constexpr std::uintptr_t bDisableBooster = 0xBE0;
            static constexpr std::uintptr_t ResolverScopes = 0xBE8;
            static constexpr std::uintptr_t HeadConnectedRail = 0xC08;
            static constexpr std::uintptr_t TailConnectedRail = 0xC28;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"SpeedHardCap", 0x948, "StructProperty"},
            {"BaseMaxSpeed", 0x970, "StructProperty"},
            {"MaxSpeedIncreaseFromDownwardSlope", 0x998, "StructProperty"},
            {"MaxBaseAcceleration", 0x9C0, "StructProperty"},
            {"MinBaseAcceleration", 0x9E8, "StructProperty"},
            {"MaxStartSpeed", 0xA10, "StructProperty"},
            {"MinStartSpeed", 0xA38, "StructProperty"},
            {"SprintingAcceleration", 0xA60, "StructProperty"},
            {"SprintingMaxSpeed", 0xA88, "StructProperty"},
            {"GrindRailMeshes", 0xAB0, "ArrayProperty"},
            {"BoosterInfos", 0xAC0, "ArrayProperty"},
            {"SplineComponent", 0xAD0, "ObjectProperty"},
            {"EnableBoosters", 0xAD8, "StructProperty"},
            {"EnableGrinding", 0xB00, "StructProperty"},
            {"EnableProjectileCollision", 0xB28, "StructProperty"},
            {"EnableMeshCollision", 0xB50, "StructProperty"},
            {"EnableWeaponBulletCollision", 0xB78, "StructProperty"},
            {"StartGrindingFromWalking", 0xBA0, "StructProperty"},
            {"bSimulateSplineGravity", 0xBC8, "BoolProperty"},
            {"SimulatedSplineGravityAcceleration", 0xBCC, "FloatProperty"},
            {"TargetDistanceBetweenSplinePointsForGravitySimulation", 0xBD0, "FloatProperty"},
            {"SplineGravitySimulationIterationCount", 0xBD4, "IntProperty"},
            {"SplineGravitySimulationTime", 0xBD8, "FloatProperty"},
            {"IdealInteractStartDistance", 0xBDC, "FloatProperty"},
            {"bDisableBooster", 0xBE0, "BoolProperty"},
            {"ResolverScopes", 0xBE8, "ArrayProperty"},
            {"HeadConnectedRail", 0xC08, "SoftObjectProperty"},
            {"TailConnectedRail", 0xC28, "SoftObjectProperty"},
        }};
    };

    struct FortGrindRailLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortGrindRailLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LeanAlphaCurve = 0x350;
            static constexpr std::uintptr_t MeleeTwistCurve = 0x354;
            static constexpr std::uintptr_t InterruptibleCurve = 0x358;
            static constexpr std::uintptr_t SlopeWarpingCurveMap = 0x360;
            static constexpr std::uintptr_t LeanBwdVelocityThreshold = 0x370;
            static constexpr std::uintptr_t BwdStartCachedData = 0x378;
            static constexpr std::uintptr_t IsMovingThresholdSpeed = 0x390;
            static constexpr std::uintptr_t NoisePlayRateSprintSpeedThreshold = 0x398;
            static constexpr std::uintptr_t NoisePlayRateNormalSpeedInputRange = 0x3A0;
            static constexpr std::uintptr_t NoisePlayRateNormalSpeedOutputRange = 0x3B0;
            static constexpr std::uintptr_t NoisePlayRateHighSpeedInputRange = 0x3C0;
            static constexpr std::uintptr_t NoisePlayRateHighSpeedOutputRange = 0x3D0;
            static constexpr std::uintptr_t CombatNoisePlayRateSpeedInputRange = 0x3E0;
            static constexpr std::uintptr_t CombatNoisePlayRateSpeedOutputRange = 0x3F0;
            static constexpr std::uintptr_t CombatNoiseAlphaTargeting = 0x400;
            static constexpr std::uintptr_t CombatNoiseAlphaNonTargeting = 0x408;
            static constexpr std::uintptr_t RootLeanAlphaInterpSpeed = 0x410;
            static constexpr std::uintptr_t SlopeWarpAlphaInterpSpeed = 0x418;
            static constexpr std::uintptr_t bDisableSlopeWarpAlphaWhenGrindingEnabled = 0x420;
            static constexpr std::uintptr_t SplineRelativeAimYawDeltaThreshold = 0x428;
            static constexpr std::uintptr_t AimYawSmoothInterpolationCoefficient = 0x430;
            static constexpr std::uintptr_t IsSmoothingYawThreshold = 0x438;
            static constexpr std::uintptr_t LeanBWDThreshold = 0x440;
            static constexpr std::uintptr_t MuteUpperBodyAlphaMeleeWeapon = 0x448;
            static constexpr std::uintptr_t MuteUpperBodyAlphaNonMeleeWeapon = 0x450;
            static constexpr std::uintptr_t MuteUpperBodyAlphaFruitcakePickaxe = 0x458;
            static constexpr std::uintptr_t MuteUpperBodyAlphaLanceSyctheOrDualWeild = 0x460;
            static constexpr std::uintptr_t BaseLeanDirection = 0x468;
            static constexpr std::uintptr_t bIsGrinding = 0x470;
            static constexpr std::uintptr_t CurrentSpeed = 0x478;
            static constexpr std::uintptr_t LeanDirection = 0x480;
            static constexpr std::uintptr_t bSprinting = 0x488;
            static constexpr std::uintptr_t LeanForward = 0x490;
            static constexpr std::uintptr_t bIsWeaponActive = 0x498;
            static constexpr std::uintptr_t SplineRelativeAim = 0x4A0;
            static constexpr std::uintptr_t GrindRailInput = 0x4B8;
            static constexpr std::uintptr_t GrindingProvider = 0x4D0;
            static constexpr std::uintptr_t MovementComponent = 0x4D8;
            static constexpr std::uintptr_t FortPlayerPawn = 0x4E0;
            static constexpr std::uintptr_t bIsFalling = 0x4E8;
            static constexpr std::uintptr_t LeanAlpha = 0x4F0;
            static constexpr std::uintptr_t bIsMoving = 0x4F8;
            static constexpr std::uintptr_t bShould180Turn = 0x4F9;
            static constexpr std::uintptr_t bShouldPlayEntry = 0x4FA;
            static constexpr std::uintptr_t NoisePlayRate = 0x500;
            static constexpr std::uintptr_t bIsLeanBwd = 0x508;
            static constexpr std::uintptr_t bIsLeft180Turn = 0x509;
            static constexpr std::uintptr_t bShould180TurnAgain = 0x50A;
            static constexpr std::uintptr_t bIsTurning = 0x50B;
            static constexpr std::uintptr_t bShouldExitLocomotion = 0x50C;
            static constexpr std::uintptr_t bIsBoosting = 0x50D;
            static constexpr std::uintptr_t bEarlyExitFromEntry = 0x50E;
            static constexpr std::uintptr_t bAimFWD = 0x50F;
            static constexpr std::uintptr_t bAimBWD = 0x510;
            static constexpr std::uintptr_t bAimLFT = 0x511;
            static constexpr std::uintptr_t bAimRGT = 0x512;
            static constexpr std::uintptr_t AimFWDDeltaAngleDegrees = 0x518;
            static constexpr std::uintptr_t AimBWDDeltaAngleDegrees = 0x520;
            static constexpr std::uintptr_t AimLFTDeltaAngleDegrees = 0x528;
            static constexpr std::uintptr_t AimRGTDeltaAngleDegrees = 0x530;
            static constexpr std::uintptr_t NegativeYaw = 0x538;
            static constexpr std::uintptr_t MeleeTwistRot = 0x540;
            static constexpr std::uintptr_t BwdStartCachedTime = 0x558;
            static constexpr std::uintptr_t Velocity = 0x560;
            static constexpr std::uintptr_t bIsEntryLeft = 0x568;
            static constexpr std::uintptr_t bIsEntryFromAir = 0x569;
            static constexpr std::uintptr_t bIsEntryRight = 0x56A;
            static constexpr std::uintptr_t bEnteredFromInteraction = 0x56B;
            static constexpr std::uintptr_t SlopeWarpAlpha = 0x570;
            static constexpr std::uintptr_t SplineRelativeAimYaw = 0x578;
            static constexpr std::uintptr_t AimYawSmoothed = 0x580;
            static constexpr std::uintptr_t bIsSmoothingYaw = 0x588;
            static constexpr std::uintptr_t LastSplineRelativeAimYaw = 0x590;
            static constexpr std::uintptr_t RootLeanAlpha = 0x598;
            static constexpr std::uintptr_t MuteUpperBodyAlpha = 0x5A0;
            static constexpr std::uintptr_t bIsLanceType = 0x5A8;
            static constexpr std::uintptr_t bWasSprinting = 0x5A9;
            static constexpr std::uintptr_t bStateRuleToBoostLoop = 0x5AA;
            static constexpr std::uintptr_t bIsInAction = 0x5AB;
            static constexpr std::uintptr_t CombatNoisePlayRate = 0x5B0;
            static constexpr std::uintptr_t CombatNoiseAlpha = 0x5B8;
            static constexpr std::uintptr_t bIsTwoHandedMelee = 0x5C0;
            static constexpr std::uintptr_t bShouldCorrectUpperBody = 0x5C1;
            static constexpr std::uintptr_t bBothHandsDown = 0x5C2;
            static constexpr std::uintptr_t TurnInPlaceAnimCurveValue = 0x5C8;
            static constexpr std::uintptr_t TurnRotationAmountCurveValue = 0x5D0;
            static constexpr std::uintptr_t bIsFallingAndNotEnteredFromInteraction = 0x5D8;
            static constexpr std::uintptr_t bIsMovingOrIsTurning = 0x5D9;
            static constexpr std::uintptr_t bIsTurningOrNotIsLeanBwd = 0x5DA;
            static constexpr std::uintptr_t bIsFallingAndNotIsWeaponActive = 0x5DB;
            static constexpr std::uintptr_t bNotIsWeaponActiveAndNotIsFalling = 0x5DC;
            static constexpr std::uintptr_t bIsWeaponActiveOrIsBoosting = 0x5DD;
        };

        inline static constexpr std::array<PropertyInfo, 92> Properties{{
            {"LeanAlphaCurve", 0x350, "NameProperty"},
            {"MeleeTwistCurve", 0x354, "NameProperty"},
            {"InterruptibleCurve", 0x358, "NameProperty"},
            {"SlopeWarpingCurveMap", 0x360, "MapProperty"},
            {"LeanBwdVelocityThreshold", 0x370, "DoubleProperty"},
            {"BwdStartCachedData", 0x378, "StructProperty"},
            {"IsMovingThresholdSpeed", 0x390, "DoubleProperty"},
            {"NoisePlayRateSprintSpeedThreshold", 0x398, "DoubleProperty"},
            {"NoisePlayRateNormalSpeedInputRange", 0x3A0, "StructProperty"},
            {"NoisePlayRateNormalSpeedOutputRange", 0x3B0, "StructProperty"},
            {"NoisePlayRateHighSpeedInputRange", 0x3C0, "StructProperty"},
            {"NoisePlayRateHighSpeedOutputRange", 0x3D0, "StructProperty"},
            {"CombatNoisePlayRateSpeedInputRange", 0x3E0, "StructProperty"},
            {"CombatNoisePlayRateSpeedOutputRange", 0x3F0, "StructProperty"},
            {"CombatNoiseAlphaTargeting", 0x400, "DoubleProperty"},
            {"CombatNoiseAlphaNonTargeting", 0x408, "DoubleProperty"},
            {"RootLeanAlphaInterpSpeed", 0x410, "DoubleProperty"},
            {"SlopeWarpAlphaInterpSpeed", 0x418, "DoubleProperty"},
            {"bDisableSlopeWarpAlphaWhenGrindingEnabled", 0x420, "BoolProperty"},
            {"SplineRelativeAimYawDeltaThreshold", 0x428, "DoubleProperty"},
            {"AimYawSmoothInterpolationCoefficient", 0x430, "DoubleProperty"},
            {"IsSmoothingYawThreshold", 0x438, "DoubleProperty"},
            {"LeanBWDThreshold", 0x440, "DoubleProperty"},
            {"MuteUpperBodyAlphaMeleeWeapon", 0x448, "DoubleProperty"},
            {"MuteUpperBodyAlphaNonMeleeWeapon", 0x450, "DoubleProperty"},
            {"MuteUpperBodyAlphaFruitcakePickaxe", 0x458, "DoubleProperty"},
            {"MuteUpperBodyAlphaLanceSyctheOrDualWeild", 0x460, "DoubleProperty"},
            {"BaseLeanDirection", 0x468, "DoubleProperty"},
            {"bIsGrinding", 0x470, "BoolProperty"},
            {"CurrentSpeed", 0x478, "DoubleProperty"},
            {"LeanDirection", 0x480, "DoubleProperty"},
            {"bSprinting", 0x488, "BoolProperty"},
            {"LeanForward", 0x490, "DoubleProperty"},
            {"bIsWeaponActive", 0x498, "BoolProperty"},
            {"SplineRelativeAim", 0x4A0, "StructProperty"},
            {"GrindRailInput", 0x4B8, "StructProperty"},
            {"GrindingProvider", 0x4D0, "WeakObjectProperty"},
            {"MovementComponent", 0x4D8, "WeakObjectProperty"},
            {"FortPlayerPawn", 0x4E0, "WeakObjectProperty"},
            {"bIsFalling", 0x4E8, "BoolProperty"},
            {"LeanAlpha", 0x4F0, "DoubleProperty"},
            {"bIsMoving", 0x4F8, "BoolProperty"},
            {"bShould180Turn", 0x4F9, "BoolProperty"},
            {"bShouldPlayEntry", 0x4FA, "BoolProperty"},
            {"NoisePlayRate", 0x500, "DoubleProperty"},
            {"bIsLeanBwd", 0x508, "BoolProperty"},
            {"bIsLeft180Turn", 0x509, "BoolProperty"},
            {"bShould180TurnAgain", 0x50A, "BoolProperty"},
            {"bIsTurning", 0x50B, "BoolProperty"},
            {"bShouldExitLocomotion", 0x50C, "BoolProperty"},
            {"bIsBoosting", 0x50D, "BoolProperty"},
            {"bEarlyExitFromEntry", 0x50E, "BoolProperty"},
            {"bAimFWD", 0x50F, "BoolProperty"},
            {"bAimBWD", 0x510, "BoolProperty"},
            {"bAimLFT", 0x511, "BoolProperty"},
            {"bAimRGT", 0x512, "BoolProperty"},
            {"AimFWDDeltaAngleDegrees", 0x518, "DoubleProperty"},
            {"AimBWDDeltaAngleDegrees", 0x520, "DoubleProperty"},
            {"AimLFTDeltaAngleDegrees", 0x528, "DoubleProperty"},
            {"AimRGTDeltaAngleDegrees", 0x530, "DoubleProperty"},
            {"NegativeYaw", 0x538, "DoubleProperty"},
            {"MeleeTwistRot", 0x540, "StructProperty"},
            {"BwdStartCachedTime", 0x558, "DoubleProperty"},
            {"Velocity", 0x560, "DoubleProperty"},
            {"bIsEntryLeft", 0x568, "BoolProperty"},
            {"bIsEntryFromAir", 0x569, "BoolProperty"},
            {"bIsEntryRight", 0x56A, "BoolProperty"},
            {"bEnteredFromInteraction", 0x56B, "BoolProperty"},
            {"SlopeWarpAlpha", 0x570, "DoubleProperty"},
            {"SplineRelativeAimYaw", 0x578, "DoubleProperty"},
            {"AimYawSmoothed", 0x580, "DoubleProperty"},
            {"bIsSmoothingYaw", 0x588, "BoolProperty"},
            {"LastSplineRelativeAimYaw", 0x590, "DoubleProperty"},
            {"RootLeanAlpha", 0x598, "DoubleProperty"},
            {"MuteUpperBodyAlpha", 0x5A0, "DoubleProperty"},
            {"bIsLanceType", 0x5A8, "BoolProperty"},
            {"bWasSprinting", 0x5A9, "BoolProperty"},
            {"bStateRuleToBoostLoop", 0x5AA, "BoolProperty"},
            {"bIsInAction", 0x5AB, "BoolProperty"},
            {"CombatNoisePlayRate", 0x5B0, "DoubleProperty"},
            {"CombatNoiseAlpha", 0x5B8, "DoubleProperty"},
            {"bIsTwoHandedMelee", 0x5C0, "BoolProperty"},
            {"bShouldCorrectUpperBody", 0x5C1, "BoolProperty"},
            {"bBothHandsDown", 0x5C2, "BoolProperty"},
            {"TurnInPlaceAnimCurveValue", 0x5C8, "DoubleProperty"},
            {"TurnRotationAmountCurveValue", 0x5D0, "DoubleProperty"},
            {"bIsFallingAndNotEnteredFromInteraction", 0x5D8, "BoolProperty"},
            {"bIsMovingOrIsTurning", 0x5D9, "BoolProperty"},
            {"bIsTurningOrNotIsLeanBwd", 0x5DA, "BoolProperty"},
            {"bIsFallingAndNotIsWeaponActive", 0x5DB, "BoolProperty"},
            {"bNotIsWeaponActiveAndNotIsFalling", 0x5DC, "BoolProperty"},
            {"bIsWeaponActiveOrIsBoosting", 0x5DD, "BoolProperty"},
        }};
    };

    struct FortMovementMode_BaseGrindingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_BaseGrindingRuntimeData";
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

    struct FortPawnComponent_GrindingProvider
    {
        static constexpr std::string_view Name = "FortPawnComponent_GrindingProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GrindRailChangedDelegate = 0xD0;
            static constexpr std::uintptr_t FeetLandedDelegate = 0xE0;
            static constexpr std::uintptr_t BegunGrindingDelegate = 0xF0;
            static constexpr std::uintptr_t HitObstacleWhenGrindingDelegate = 0x100;
            static constexpr std::uintptr_t BoosterModeChangedDelegate = 0x110;
            static constexpr std::uintptr_t SprintingStateChangedDelegate = 0x120;
            static constexpr std::uintptr_t EndedGrindingDelegate = 0x130;
            static constexpr std::uintptr_t ApplyDamageToDeviceDelegate = 0x140;
            static constexpr std::uintptr_t DismountPlayerDelegate = 0x150;
            static constexpr std::uintptr_t DisablePlayerFromGrinding = 0x160;
            static constexpr std::uintptr_t ForceGrindingFromWalking = 0x188;
            static constexpr std::uintptr_t CalculateOppositeDirectionWhenReachEndOnStart = 0x1B0;
            static constexpr std::uintptr_t CalculateStartPositionUnblocked = 0x1D8;
            static constexpr std::uintptr_t GrindFromLandSpeedBoost = 0x200;
            static constexpr std::uintptr_t MinStartSpeed = 0x228;
            static constexpr std::uintptr_t MaxStartSpeed = 0x250;
            static constexpr std::uintptr_t CancelGrindingTag = 0x278;
            static constexpr std::uintptr_t EnableSprinting = 0x280;
            static constexpr std::uintptr_t GrindInteractionReentryCooldownTime = 0x2A8;
            static constexpr std::uintptr_t GrindingAnimLayer = 0x2D0;
            static constexpr std::uintptr_t GrindingExtLogicClass_Old = 0x2D8;
            static constexpr std::uintptr_t GrindingExtLogicClass = 0x2E0;
            static constexpr std::uintptr_t OwnerPawn = 0x2E8;
            static constexpr std::uintptr_t MovementComponent = 0x2F0;
            static constexpr std::uintptr_t BuildingTagImmuneToDamage = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"GrindRailChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"FeetLandedDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"BegunGrindingDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"HitObstacleWhenGrindingDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"BoosterModeChangedDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"SprintingStateChangedDelegate", 0x120, "MulticastInlineDelegateProperty"},
            {"EndedGrindingDelegate", 0x130, "MulticastInlineDelegateProperty"},
            {"ApplyDamageToDeviceDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"DismountPlayerDelegate", 0x150, "MulticastInlineDelegateProperty"},
            {"DisablePlayerFromGrinding", 0x160, "StructProperty"},
            {"ForceGrindingFromWalking", 0x188, "StructProperty"},
            {"CalculateOppositeDirectionWhenReachEndOnStart", 0x1B0, "StructProperty"},
            {"CalculateStartPositionUnblocked", 0x1D8, "StructProperty"},
            {"GrindFromLandSpeedBoost", 0x200, "StructProperty"},
            {"MinStartSpeed", 0x228, "StructProperty"},
            {"MaxStartSpeed", 0x250, "StructProperty"},
            {"CancelGrindingTag", 0x278, "StructProperty"},
            {"EnableSprinting", 0x280, "StructProperty"},
            {"GrindInteractionReentryCooldownTime", 0x2A8, "StructProperty"},
            {"GrindingAnimLayer", 0x2D0, "ClassProperty"},
            {"GrindingExtLogicClass_Old", 0x2D8, "ClassProperty"},
            {"GrindingExtLogicClass", 0x2E0, "ClassProperty"},
            {"OwnerPawn", 0x2E8, "WeakObjectProperty"},
            {"MovementComponent", 0x2F0, "WeakObjectProperty"},
            {"BuildingTagImmuneToDamage", 0x2F8, "StructProperty"},
        }};
    };

    struct GrindRailEditorComponent
    {
        static constexpr std::string_view Name = "GrindRailEditorComponent";
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

    struct StructurallySupportedSplineComponent
    {
        static constexpr std::string_view Name = "StructurallySupportedSplineComponent";
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

}

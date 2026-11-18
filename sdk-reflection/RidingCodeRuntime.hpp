#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RidingCodeRuntime
{
    struct ControllableRidableComponent
    {
        static constexpr std::string_view Name = "ControllableRidableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RidableComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPrimaryAbilityStarted = 0x560;
            static constexpr std::uintptr_t OnPrimaryAbilityHeld = 0x570;
            static constexpr std::uintptr_t OnPrimaryAbilityStopped = 0x580;
            static constexpr std::uintptr_t OnSecondaryAbilityStarted = 0x590;
            static constexpr std::uintptr_t OnSecondaryAbilityHeld = 0x5A0;
            static constexpr std::uintptr_t OnSecondaryAbilityStopped = 0x5B0;
            static constexpr std::uintptr_t OnTertiaryAbilityStarted = 0x5C0;
            static constexpr std::uintptr_t OnTertiaryAbilityHeld = 0x5D0;
            static constexpr std::uintptr_t OnTertiaryAbilityStopped = 0x5E0;
            static constexpr std::uintptr_t bUseGravityJump = 0x5F0;
            static constexpr std::uintptr_t IgnoreGravityJumpTagQuery = 0x5F8;
            static constexpr std::uintptr_t bUseBuiltInMovementMode = 0x640;
            static constexpr std::uintptr_t bIsControllable = 0x641;
            static constexpr std::uintptr_t bHasAbility = 0x642;
            static constexpr std::uintptr_t bHasSecondaryAbility = 0x643;
            static constexpr std::uintptr_t bHasTertiaryAbility = 0x644;
            static constexpr std::uintptr_t AbilityDisplayText = 0x648;
            static constexpr std::uintptr_t SecondaryAbilityDisplayText = 0x658;
            static constexpr std::uintptr_t TertiaryAbilityDisplayText = 0x668;
            static constexpr std::uintptr_t bCanJump = 0x678;
            static constexpr std::uintptr_t bAlwaysMoveForward = 0x679;
            static constexpr std::uintptr_t ForwardMoveSpeedMultiplier = 0x67C;
            static constexpr std::uintptr_t BackwardMoveSpeedMultiplier = 0x680;
            static constexpr std::uintptr_t SidewaysMoveRotationOffset = 0x684;
            static constexpr std::uintptr_t MovementUrgency = 0x688;
            static constexpr std::uintptr_t bGiveControlOfWeapon = 0x689;
            static constexpr std::uintptr_t bNeedsProxyWeapon = 0x68A;
            static constexpr std::uintptr_t bStopAllMontagesWhenControlled = 0x68B;
            static constexpr std::uintptr_t ProxyWeaponClass = 0x690;
            static constexpr std::uintptr_t bDisablePreviousWeaponStowOnProxyEquip = 0x698;
            static constexpr std::uintptr_t bIsBeingControlled = 0x699;
            static constexpr std::uintptr_t RidableControlParams = 0x6C0;
            static constexpr std::uintptr_t JumpUpwardGravityScale = 0x8F0;
            static constexpr std::uintptr_t JumpDownwardGravityScale = 0x918;
            static constexpr std::uintptr_t ProxyWeaponInstance = 0x940;
            static constexpr std::uintptr_t ProxyReplacedRiderWeaponData = 0x948;
            static constexpr std::uintptr_t ProxyReplacedRiderWeaponInventoryGuid = 0x950;
            static constexpr std::uintptr_t ProxyReplacedRiderWeaponTrackerGuid = 0x960;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"OnPrimaryAbilityStarted", 0x560, "MulticastInlineDelegateProperty"},
            {"OnPrimaryAbilityHeld", 0x570, "MulticastInlineDelegateProperty"},
            {"OnPrimaryAbilityStopped", 0x580, "MulticastInlineDelegateProperty"},
            {"OnSecondaryAbilityStarted", 0x590, "MulticastInlineDelegateProperty"},
            {"OnSecondaryAbilityHeld", 0x5A0, "MulticastInlineDelegateProperty"},
            {"OnSecondaryAbilityStopped", 0x5B0, "MulticastInlineDelegateProperty"},
            {"OnTertiaryAbilityStarted", 0x5C0, "MulticastInlineDelegateProperty"},
            {"OnTertiaryAbilityHeld", 0x5D0, "MulticastInlineDelegateProperty"},
            {"OnTertiaryAbilityStopped", 0x5E0, "MulticastInlineDelegateProperty"},
            {"bUseGravityJump", 0x5F0, "BoolProperty"},
            {"IgnoreGravityJumpTagQuery", 0x5F8, "StructProperty"},
            {"bUseBuiltInMovementMode", 0x640, "BoolProperty"},
            {"bIsControllable", 0x641, "BoolProperty"},
            {"bHasAbility", 0x642, "BoolProperty"},
            {"bHasSecondaryAbility", 0x643, "BoolProperty"},
            {"bHasTertiaryAbility", 0x644, "BoolProperty"},
            {"AbilityDisplayText", 0x648, "TextProperty"},
            {"SecondaryAbilityDisplayText", 0x658, "TextProperty"},
            {"TertiaryAbilityDisplayText", 0x668, "TextProperty"},
            {"bCanJump", 0x678, "BoolProperty"},
            {"bAlwaysMoveForward", 0x679, "BoolProperty"},
            {"ForwardMoveSpeedMultiplier", 0x67C, "FloatProperty"},
            {"BackwardMoveSpeedMultiplier", 0x680, "FloatProperty"},
            {"SidewaysMoveRotationOffset", 0x684, "FloatProperty"},
            {"MovementUrgency", 0x688, "ByteProperty"},
            {"bGiveControlOfWeapon", 0x689, "BoolProperty"},
            {"bNeedsProxyWeapon", 0x68A, "BoolProperty"},
            {"bStopAllMontagesWhenControlled", 0x68B, "BoolProperty"},
            {"ProxyWeaponClass", 0x690, "ClassProperty"},
            {"bDisablePreviousWeaponStowOnProxyEquip", 0x698, "BoolProperty"},
            {"bIsBeingControlled", 0x699, "BoolProperty"},
            {"RidableControlParams", 0x6C0, "StructProperty"},
            {"JumpUpwardGravityScale", 0x8F0, "StructProperty"},
            {"JumpDownwardGravityScale", 0x918, "StructProperty"},
            {"ProxyWeaponInstance", 0x940, "ObjectProperty"},
            {"ProxyReplacedRiderWeaponData", 0x948, "ObjectProperty"},
            {"ProxyReplacedRiderWeaponInventoryGuid", 0x950, "StructProperty"},
            {"ProxyReplacedRiderWeaponTrackerGuid", 0x960, "StructProperty"},
        }};
    };

    struct ControllingRiderComponent
    {
        static constexpr std::string_view Name = "ControllingRiderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RiderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllingRidingInputContext = 0x728;
            static constexpr std::uintptr_t RidingAbilityInputContext = 0x730;
            static constexpr std::uintptr_t RidingAbility = 0x738;
            static constexpr std::uintptr_t GamepadRidingAbility = 0x740;
            static constexpr std::uintptr_t SecondaryRidingAbilityInputContext = 0x748;
            static constexpr std::uintptr_t SecondaryRidingAbility = 0x750;
            static constexpr std::uintptr_t GamepadSecondaryRidingAbility = 0x758;
            static constexpr std::uintptr_t TertiaryRidingAbilityInputContext = 0x760;
            static constexpr std::uintptr_t TertiaryRidingAbility = 0x768;
            static constexpr std::uintptr_t GamepadTertiaryRidingAbility = 0x770;
            static constexpr std::uintptr_t bCanControlRidable = 0x780;
            static constexpr std::uintptr_t bIsControllingRidable = 0x781;
            static constexpr std::uintptr_t bIsControllingInputEnabled = 0x782;
            static constexpr std::uintptr_t ControlInputStyle = 0x783;
            static constexpr std::uintptr_t ReplicatedControlInputState = 0x790;
            static constexpr std::uintptr_t ReplicatedControlInputStateReliable = 0x79C;
            static constexpr std::uintptr_t ReplicatedControlInputStateUnreliable = 0x79D;
            static constexpr std::uintptr_t ControllingRiderInputComponent = 0x7A0;
            static constexpr std::uintptr_t AutoRunDoubleTapTimestamp = 0x7C0;
            static constexpr std::uintptr_t bCanBePet = 0x7C4;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ControllingRidingInputContext", 0x728, "ObjectProperty"},
            {"RidingAbilityInputContext", 0x730, "ObjectProperty"},
            {"RidingAbility", 0x738, "ObjectProperty"},
            {"GamepadRidingAbility", 0x740, "ObjectProperty"},
            {"SecondaryRidingAbilityInputContext", 0x748, "ObjectProperty"},
            {"SecondaryRidingAbility", 0x750, "ObjectProperty"},
            {"GamepadSecondaryRidingAbility", 0x758, "ObjectProperty"},
            {"TertiaryRidingAbilityInputContext", 0x760, "ObjectProperty"},
            {"TertiaryRidingAbility", 0x768, "ObjectProperty"},
            {"GamepadTertiaryRidingAbility", 0x770, "ObjectProperty"},
            {"bCanControlRidable", 0x780, "BoolProperty"},
            {"bIsControllingRidable", 0x781, "BoolProperty"},
            {"bIsControllingInputEnabled", 0x782, "BoolProperty"},
            {"ControlInputStyle", 0x783, "EnumProperty"},
            {"ReplicatedControlInputState", 0x790, "StructProperty"},
            {"ReplicatedControlInputStateReliable", 0x79C, "StructProperty"},
            {"ReplicatedControlInputStateUnreliable", 0x79D, "StructProperty"},
            {"ControllingRiderInputComponent", 0x7A0, "ObjectProperty"},
            {"AutoRunDoubleTapTimestamp", 0x7C0, "FloatProperty"},
            {"bCanBePet", 0x7C4, "BoolProperty"},
        }};
    };

    struct FortAthenaPettingWildlifeTelemetryData
    {
        static constexpr std::string_view Name = "FortAthenaPettingWildlifeTelemetryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAITelemetryData";
        struct Offsets
        {
            static constexpr std::uintptr_t PetCount = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PetCount", 0x28, "IntProperty"},
        }};
    };

    struct FortCameraMode_Riding
    {
        static constexpr std::string_view Name = "FortCameraMode_Riding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginOffset = 0x2080;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OriginOffset", 0x2080, "StructProperty"},
        }};
    };

    struct FortVehicleLayerAnimInstance_Riding
    {
        static constexpr std::string_view Name = "FortVehicleLayerAnimInstance_Riding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleOccupantAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IntoVehicleCachedData = 0x740;
            static constexpr std::uintptr_t OutOfVehicleCachedData = 0x754;
            static constexpr std::uintptr_t InTime = 0x768;
            static constexpr std::uintptr_t OutTime = 0x76C;
            static constexpr std::uintptr_t BodyYawOffset = 0x770;
            static constexpr std::uintptr_t BodyCounterRotation = 0x778;
            static constexpr std::uintptr_t BodyCounterRotationAlpha = 0x790;
            static constexpr std::uintptr_t bIsReloading = 0x794;
            static constexpr std::uintptr_t bIsTargeting = 0x795;
            static constexpr std::uintptr_t bIsFiring = 0x796;
            static constexpr std::uintptr_t bIsUsingConsumable = 0x797;
            static constexpr std::uintptr_t bIsInAction = 0x798;
            static constexpr std::uintptr_t bIsThrowConsumable = 0x799;
            static constexpr std::uintptr_t bIsTargetingOrThrowingConsumable = 0x79A;
            static constexpr std::uintptr_t bIsTurningInPlace = 0x79B;
            static constexpr std::uintptr_t bIsRidingSprinting = 0x79C;
            static constexpr std::uintptr_t bIsRidingPetting = 0x79D;
            static constexpr std::uintptr_t TurnInPlaceRotationSpeed = 0x7A0;
            static constexpr std::uintptr_t TurnInPlaceAngleDelta = 0x7A4;
            static constexpr std::uintptr_t bIsRidingMovingBackward = 0x7A8;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x7A9;
            static constexpr std::uintptr_t SlopeSlidingPitch = 0x7AC;
            static constexpr std::uintptr_t SlopeSlidingRoll = 0x7B0;
            static constexpr std::uintptr_t RiderReferentialRidableYaw = 0x7B4;
            static constexpr std::uintptr_t AimYawDegreesCoverage = 0x7B8;
            static constexpr std::uintptr_t SmoothedAimYaw = 0x7BC;
            static constexpr std::uintptr_t bJustEntered = 0x7C0;
            static constexpr std::uintptr_t bIsRidableMoving = 0x7C1;
            static constexpr std::uintptr_t bIsRideMode = 0x7C2;
            static constexpr std::uintptr_t RidableVelocity = 0x7C4;
            static constexpr std::uintptr_t BodyYaw = 0x7C8;
            static constexpr std::uintptr_t BoostPlayRate = 0x7CC;
            static constexpr std::uintptr_t RidingMovePlayRate = 0x7D0;
            static constexpr std::uintptr_t FalseBlendTime = 0x7D4;
            static constexpr std::uintptr_t CombatToRideYaw = 0x7D8;
            static constexpr std::uintptr_t InPlaceYaw = 0x7DC;
            static constexpr std::uintptr_t HeadAOAlpha = 0x7E0;
            static constexpr std::uintptr_t MeleeTwistRot = 0x7E8;
            static constexpr std::uintptr_t bIsDualWield = 0x800;
            static constexpr std::uintptr_t bIsOneHandedDualWield = 0x801;
            static constexpr std::uintptr_t bIsTwoHandedSword = 0x802;
            static constexpr std::uintptr_t bShouldAdjustBodyTwistForMelee = 0x803;
            static constexpr std::uintptr_t PlayerOffset = 0x808;
            static constexpr std::uintptr_t NoiseAlpha = 0x820;
            static constexpr std::uintptr_t bIsLobsterBlockActive = 0x824;
            static constexpr std::uintptr_t SlopePitch = 0x828;
            static constexpr std::uintptr_t RiderHeightAdjustmentSpringConstant = 0x82C;
            static constexpr std::uintptr_t MinSlopePitchForRiderHeightAdjustment = 0x830;
            static constexpr std::uintptr_t MaxSlopePitchForRiderHeightAdjustment = 0x834;
            static constexpr std::uintptr_t RiderHeightAdjustmentForMinSlopePitch = 0x838;
            static constexpr std::uintptr_t RiderHeightAdjustmentForMaxSlopePitch = 0x83C;
            static constexpr std::uintptr_t PettingRotAlpha = 0x840;
            static constexpr std::uintptr_t PettingRot = 0x848;
            static constexpr std::uintptr_t PettingPitchFactor = 0x860;
            static constexpr std::uintptr_t PettingRollFactor = 0x864;
            static constexpr std::uintptr_t HandAttachLeft = 0x868;
            static constexpr std::uintptr_t HandAttachRight = 0x880;
            static constexpr std::uintptr_t HandAttachAlpha = 0x898;
            static constexpr std::uintptr_t footphase = 0x89C;
            static constexpr std::uintptr_t bIsFootPhase_FeetInAir = 0x89D;
            static constexpr std::uintptr_t bIsFootPhase_FrontFeetPlanted = 0x89E;
            static constexpr std::uintptr_t bIsFootPhase_BackFeetPlanted = 0x89F;
            static constexpr std::uintptr_t bIsFootPhase_LeftBackFeetForward = 0x8A0;
            static constexpr std::uintptr_t bIsFootPhase_RightBackFeetForward = 0x8A1;
            static constexpr std::uintptr_t bIsFootPhase_LeftPlantedRightPass = 0x8A2;
            static constexpr std::uintptr_t bIsFootPhase_RightPlantedLeftPass = 0x8A3;
            static constexpr std::uintptr_t TurnInPlaceModulatedSpeed = 0x8A4;
            static constexpr std::uintptr_t bIsTurnInPlaceAngleDeltaPositive = 0x8A8;
            static constexpr std::uintptr_t SlopeRoll = 0x8AC;
            static constexpr std::uintptr_t MovingVelocityLowerBound = 0x8B0;
            static constexpr std::uintptr_t JustEnteredDelayTimeSec = 0x8B4;
            static constexpr std::uintptr_t FalseBlendTime_Moving = 0x8B8;
            static constexpr std::uintptr_t FalseBlendTime_NotMoving = 0x8BC;
            static constexpr std::uintptr_t PlayerOffsetMale = 0x8C0;
            static constexpr std::uintptr_t PlayerOffsetFemale = 0x8D8;
            static constexpr std::uintptr_t ScytheMontage = 0x8F0;
            static constexpr std::uintptr_t BRSwordMontage = 0x908;
            static constexpr std::uintptr_t MeleeDualWieldCoreAnimation = 0x920;
            static constexpr std::uintptr_t SlopePitchTraceStart = 0x928;
            static constexpr std::uintptr_t SlopePitchTraceEnd = 0x940;
            static constexpr std::uintptr_t HandAttachLocationLeftMale = 0x958;
            static constexpr std::uintptr_t HandAttachLocationRightMale = 0x970;
            static constexpr std::uintptr_t HandAttachLocationLeftFemale = 0x988;
            static constexpr std::uintptr_t HandAttachLocationRightFemale = 0x9A0;
            static constexpr std::uintptr_t PlayerHandAttachLeft = 0x9B8;
            static constexpr std::uintptr_t PlayerHandAttachRight = 0x9BC;
            static constexpr std::uintptr_t DisableHandAttachCurveName = 0x9C0;
            static constexpr std::uintptr_t AllowRidingNoiseAdditiveCurveName = 0x9C4;
        };

        inline static constexpr std::array<PropertyInfo, 88> Properties{{
            {"IntoVehicleCachedData", 0x740, "StructProperty"},
            {"OutOfVehicleCachedData", 0x754, "StructProperty"},
            {"InTime", 0x768, "FloatProperty"},
            {"OutTime", 0x76C, "FloatProperty"},
            {"BodyYawOffset", 0x770, "FloatProperty"},
            {"BodyCounterRotation", 0x778, "StructProperty"},
            {"BodyCounterRotationAlpha", 0x790, "FloatProperty"},
            {"bIsReloading", 0x794, "BoolProperty"},
            {"bIsTargeting", 0x795, "BoolProperty"},
            {"bIsFiring", 0x796, "BoolProperty"},
            {"bIsUsingConsumable", 0x797, "BoolProperty"},
            {"bIsInAction", 0x798, "BoolProperty"},
            {"bIsThrowConsumable", 0x799, "BoolProperty"},
            {"bIsTargetingOrThrowingConsumable", 0x79A, "BoolProperty"},
            {"bIsTurningInPlace", 0x79B, "BoolProperty"},
            {"bIsRidingSprinting", 0x79C, "BoolProperty"},
            {"bIsRidingPetting", 0x79D, "BoolProperty"},
            {"TurnInPlaceRotationSpeed", 0x7A0, "FloatProperty"},
            {"TurnInPlaceAngleDelta", 0x7A4, "FloatProperty"},
            {"bIsRidingMovingBackward", 0x7A8, "BoolProperty"},
            {"bIsSlopeSliding", 0x7A9, "BoolProperty"},
            {"SlopeSlidingPitch", 0x7AC, "FloatProperty"},
            {"SlopeSlidingRoll", 0x7B0, "FloatProperty"},
            {"RiderReferentialRidableYaw", 0x7B4, "FloatProperty"},
            {"AimYawDegreesCoverage", 0x7B8, "FloatProperty"},
            {"SmoothedAimYaw", 0x7BC, "FloatProperty"},
            {"bJustEntered", 0x7C0, "BoolProperty"},
            {"bIsRidableMoving", 0x7C1, "BoolProperty"},
            {"bIsRideMode", 0x7C2, "BoolProperty"},
            {"RidableVelocity", 0x7C4, "FloatProperty"},
            {"BodyYaw", 0x7C8, "FloatProperty"},
            {"BoostPlayRate", 0x7CC, "FloatProperty"},
            {"RidingMovePlayRate", 0x7D0, "FloatProperty"},
            {"FalseBlendTime", 0x7D4, "FloatProperty"},
            {"CombatToRideYaw", 0x7D8, "FloatProperty"},
            {"InPlaceYaw", 0x7DC, "FloatProperty"},
            {"HeadAOAlpha", 0x7E0, "FloatProperty"},
            {"MeleeTwistRot", 0x7E8, "StructProperty"},
            {"bIsDualWield", 0x800, "BoolProperty"},
            {"bIsOneHandedDualWield", 0x801, "BoolProperty"},
            {"bIsTwoHandedSword", 0x802, "BoolProperty"},
            {"bShouldAdjustBodyTwistForMelee", 0x803, "BoolProperty"},
            {"PlayerOffset", 0x808, "StructProperty"},
            {"NoiseAlpha", 0x820, "FloatProperty"},
            {"bIsLobsterBlockActive", 0x824, "BoolProperty"},
            {"SlopePitch", 0x828, "FloatProperty"},
            {"RiderHeightAdjustmentSpringConstant", 0x82C, "FloatProperty"},
            {"MinSlopePitchForRiderHeightAdjustment", 0x830, "FloatProperty"},
            {"MaxSlopePitchForRiderHeightAdjustment", 0x834, "FloatProperty"},
            {"RiderHeightAdjustmentForMinSlopePitch", 0x838, "FloatProperty"},
            {"RiderHeightAdjustmentForMaxSlopePitch", 0x83C, "FloatProperty"},
            {"PettingRotAlpha", 0x840, "FloatProperty"},
            {"PettingRot", 0x848, "StructProperty"},
            {"PettingPitchFactor", 0x860, "FloatProperty"},
            {"PettingRollFactor", 0x864, "FloatProperty"},
            {"HandAttachLeft", 0x868, "StructProperty"},
            {"HandAttachRight", 0x880, "StructProperty"},
            {"HandAttachAlpha", 0x898, "FloatProperty"},
            {"footphase", 0x89C, "EnumProperty"},
            {"bIsFootPhase_FeetInAir", 0x89D, "BoolProperty"},
            {"bIsFootPhase_FrontFeetPlanted", 0x89E, "BoolProperty"},
            {"bIsFootPhase_BackFeetPlanted", 0x89F, "BoolProperty"},
            {"bIsFootPhase_LeftBackFeetForward", 0x8A0, "BoolProperty"},
            {"bIsFootPhase_RightBackFeetForward", 0x8A1, "BoolProperty"},
            {"bIsFootPhase_LeftPlantedRightPass", 0x8A2, "BoolProperty"},
            {"bIsFootPhase_RightPlantedLeftPass", 0x8A3, "BoolProperty"},
            {"TurnInPlaceModulatedSpeed", 0x8A4, "FloatProperty"},
            {"bIsTurnInPlaceAngleDeltaPositive", 0x8A8, "BoolProperty"},
            {"SlopeRoll", 0x8AC, "FloatProperty"},
            {"MovingVelocityLowerBound", 0x8B0, "FloatProperty"},
            {"JustEnteredDelayTimeSec", 0x8B4, "FloatProperty"},
            {"FalseBlendTime_Moving", 0x8B8, "FloatProperty"},
            {"FalseBlendTime_NotMoving", 0x8BC, "FloatProperty"},
            {"PlayerOffsetMale", 0x8C0, "StructProperty"},
            {"PlayerOffsetFemale", 0x8D8, "StructProperty"},
            {"ScytheMontage", 0x8F0, "StructProperty"},
            {"BRSwordMontage", 0x908, "StructProperty"},
            {"MeleeDualWieldCoreAnimation", 0x920, "ByteProperty"},
            {"SlopePitchTraceStart", 0x928, "StructProperty"},
            {"SlopePitchTraceEnd", 0x940, "StructProperty"},
            {"HandAttachLocationLeftMale", 0x958, "StructProperty"},
            {"HandAttachLocationRightMale", 0x970, "StructProperty"},
            {"HandAttachLocationLeftFemale", 0x988, "StructProperty"},
            {"HandAttachLocationRightFemale", 0x9A0, "StructProperty"},
            {"PlayerHandAttachLeft", 0x9B8, "NameProperty"},
            {"PlayerHandAttachRight", 0x9BC, "NameProperty"},
            {"DisableHandAttachCurveName", 0x9C0, "NameProperty"},
            {"AllowRidingNoiseAdditiveCurveName", 0x9C4, "NameProperty"},
        }};
    };

    struct RidableComponent
    {
        static constexpr std::string_view Name = "RidableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRiderStartedRiding_SingularDeprecated = 0xD0;
            static constexpr std::uintptr_t OnRiderStoppedRiding_SingularDeprecated = 0xE0;
            static constexpr std::uintptr_t OnRiderStartedRidingWithSlot = 0xF0;
            static constexpr std::uintptr_t OnRiderStoppedRidingWithSlot = 0x100;
            static constexpr std::uintptr_t OnRiderSlotStateChanged = 0x110;
            static constexpr std::uintptr_t bRiderCanBeHidden = 0x120;
            static constexpr std::uintptr_t bActorCanBeHidden = 0x121;
            static constexpr std::uintptr_t bSuppressDefaultDismountInputText = 0x122;
            static constexpr std::uintptr_t DoNotUse_RiderAnimLayerOverlayClass = 0x128;
            static constexpr std::uintptr_t DoNotUse_AttachSocket = 0x130;
            static constexpr std::uintptr_t DoNotUse_AttachLocationOffset = 0x138;
            static constexpr std::uintptr_t DoNotUse_AttachRotationOffset = 0x150;
            static constexpr std::uintptr_t DoNotUse_AttachScaleOffset = 0x168;
            static constexpr std::uintptr_t AttachSlotsConfig = 0x180;
            static constexpr std::uintptr_t ClientAttachGuideSocket = 0x190;
            static constexpr std::uintptr_t ClientAttachGuideLocationOffset = 0x198;
            static constexpr std::uintptr_t RidablePropAttachSocket = 0x1B0;
            static constexpr std::uintptr_t RidablePropAttachLocationOffset = 0x1B8;
            static constexpr std::uintptr_t RidablePropAttachRotationOffset = 0x1D0;
            static constexpr std::uintptr_t RidablePropAttachScale = 0x1E8;
            static constexpr std::uintptr_t RidablePropAttachRiderVerticalBuffer = 0x1EC;
            static constexpr std::uintptr_t RiderPropAttachBoundsOverride = 0x1F0;
            static constexpr std::uintptr_t bOverrideNoiseGeneration = 0x228;
            static constexpr std::uintptr_t RiderMovementNoiseOverride = 0x22C;
            static constexpr std::uintptr_t bUsesCameraOverride = 0x238;
            static constexpr std::uintptr_t DoNotUse_CameraModeClassOverride = 0x240;
            static constexpr std::uintptr_t DoNotUse_SprintCameraModeClassOverride = 0x248;
            static constexpr std::uintptr_t UseTargetingAdditionalViewTargetSpaceViewOffsetOverride = 0x250;
            static constexpr std::uintptr_t TargetingAdditionalViewTargetSpaceViewOffsetOverride = 0x278;
            static constexpr std::uintptr_t RidingStartedGameplayCueTag = 0x2B0;
            static constexpr std::uintptr_t WhileBeingRiddenGameplayCueTag = 0x2B4;
            static constexpr std::uintptr_t RidingStoppedGameplayCueTag = 0x2B8;
            static constexpr std::uintptr_t WeaponTargetingSourceOffsetModifier = 0x2C0;
            static constexpr std::uintptr_t RidableTag = 0x2D8;
            static constexpr std::uintptr_t EnergyDepletedTag = 0x2DC;
            static constexpr std::uintptr_t PlaylistTagBlacklistRowHandle = 0x2E0;
            static constexpr std::uintptr_t bNeedRoomToBeRidden = 0x2F0;
            static constexpr std::uintptr_t bOverrideInteractionForRiding = 0x2F1;
            static constexpr std::uintptr_t RidingInteractionText = 0x2F8;
            static constexpr std::uintptr_t RidingInteractionType = 0x308;
            static constexpr std::uintptr_t RiderSlots = 0x310;
            static constexpr std::uintptr_t PendingStartedRiders = 0x370;
            static constexpr std::uintptr_t PendingStoppedRiders = 0x380;
            static constexpr std::uintptr_t RidableProp = 0x390;
            static constexpr std::uintptr_t OriginalCapsuleRadius = 0x398;
            static constexpr std::uintptr_t OriginalCapsuleHalfHeight = 0x39C;
            static constexpr std::uintptr_t RidingCapsuleRadius = 0x3A0;
            static constexpr std::uintptr_t RidingCapsuleHalfHeight = 0x3A4;
            static constexpr std::uintptr_t bOriginalClientPositionSmoothingThrottlingSetting = 0x3A8;
            static constexpr std::uintptr_t bHandledFirstRidersAdded = 0x3A9;
            static constexpr std::uintptr_t DoNotUse_LockRotationToRidableActor = 0x3AA;
            static constexpr std::uintptr_t bRidableAnimJustPlayed = 0x3AB;
            static constexpr std::uintptr_t RiderAnimPlayedSlotIndices = 0x3B0;
            static constexpr std::uintptr_t MaxHalfAimingAngle = 0x3C0;
            static constexpr std::uintptr_t PrimaryFireMontageAnimCoreTypeOverrides = 0x3E8;
            static constexpr std::uintptr_t PrimaryFireMontageTagOverrides = 0x3F8;
            static constexpr std::uintptr_t PettingData = 0x408;
            static constexpr std::uintptr_t bShouldApplyCapsuleSizeChange = 0x518;
            static constexpr std::uintptr_t bIsSprinting = 0x540;
            static constexpr std::uintptr_t DoNotUse_PrimaryRider = 0x548;
        };

        inline static constexpr std::array<PropertyInfo, 60> Properties{{
            {"OnRiderStartedRiding_SingularDeprecated", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnRiderStoppedRiding_SingularDeprecated", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnRiderStartedRidingWithSlot", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnRiderStoppedRidingWithSlot", 0x100, "MulticastInlineDelegateProperty"},
            {"OnRiderSlotStateChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"bRiderCanBeHidden", 0x120, "BoolProperty"},
            {"bActorCanBeHidden", 0x121, "BoolProperty"},
            {"bSuppressDefaultDismountInputText", 0x122, "BoolProperty"},
            {"DoNotUse_RiderAnimLayerOverlayClass", 0x128, "ClassProperty"},
            {"DoNotUse_AttachSocket", 0x130, "NameProperty"},
            {"DoNotUse_AttachLocationOffset", 0x138, "StructProperty"},
            {"DoNotUse_AttachRotationOffset", 0x150, "StructProperty"},
            {"DoNotUse_AttachScaleOffset", 0x168, "StructProperty"},
            {"AttachSlotsConfig", 0x180, "ArrayProperty"},
            {"ClientAttachGuideSocket", 0x190, "NameProperty"},
            {"ClientAttachGuideLocationOffset", 0x198, "StructProperty"},
            {"RidablePropAttachSocket", 0x1B0, "NameProperty"},
            {"RidablePropAttachLocationOffset", 0x1B8, "StructProperty"},
            {"RidablePropAttachRotationOffset", 0x1D0, "StructProperty"},
            {"RidablePropAttachScale", 0x1E8, "FloatProperty"},
            {"RidablePropAttachRiderVerticalBuffer", 0x1EC, "FloatProperty"},
            {"RiderPropAttachBoundsOverride", 0x1F0, "StructProperty"},
            {"bOverrideNoiseGeneration", 0x228, "BoolProperty"},
            {"RiderMovementNoiseOverride", 0x22C, "StructProperty"},
            {"bUsesCameraOverride", 0x238, "BoolProperty"},
            {"DoNotUse_CameraModeClassOverride", 0x240, "ClassProperty"},
            {"DoNotUse_SprintCameraModeClassOverride", 0x248, "ClassProperty"},
            {"UseTargetingAdditionalViewTargetSpaceViewOffsetOverride", 0x250, "StructProperty"},
            {"TargetingAdditionalViewTargetSpaceViewOffsetOverride", 0x278, "StructProperty"},
            {"RidingStartedGameplayCueTag", 0x2B0, "StructProperty"},
            {"WhileBeingRiddenGameplayCueTag", 0x2B4, "StructProperty"},
            {"RidingStoppedGameplayCueTag", 0x2B8, "StructProperty"},
            {"WeaponTargetingSourceOffsetModifier", 0x2C0, "StructProperty"},
            {"RidableTag", 0x2D8, "StructProperty"},
            {"EnergyDepletedTag", 0x2DC, "StructProperty"},
            {"PlaylistTagBlacklistRowHandle", 0x2E0, "StructProperty"},
            {"bNeedRoomToBeRidden", 0x2F0, "BoolProperty"},
            {"bOverrideInteractionForRiding", 0x2F1, "BoolProperty"},
            {"RidingInteractionText", 0x2F8, "TextProperty"},
            {"RidingInteractionType", 0x308, "ByteProperty"},
            {"RiderSlots", 0x310, "StructProperty"},
            {"PendingStartedRiders", 0x370, "ArrayProperty"},
            {"PendingStoppedRiders", 0x380, "ArrayProperty"},
            {"RidableProp", 0x390, "ObjectProperty"},
            {"OriginalCapsuleRadius", 0x398, "FloatProperty"},
            {"OriginalCapsuleHalfHeight", 0x39C, "FloatProperty"},
            {"RidingCapsuleRadius", 0x3A0, "FloatProperty"},
            {"RidingCapsuleHalfHeight", 0x3A4, "FloatProperty"},
            {"bOriginalClientPositionSmoothingThrottlingSetting", 0x3A8, "BoolProperty"},
            {"bHandledFirstRidersAdded", 0x3A9, "BoolProperty"},
            {"DoNotUse_LockRotationToRidableActor", 0x3AA, "BoolProperty"},
            {"bRidableAnimJustPlayed", 0x3AB, "BoolProperty"},
            {"RiderAnimPlayedSlotIndices", 0x3B0, "ArrayProperty"},
            {"MaxHalfAimingAngle", 0x3C0, "StructProperty"},
            {"PrimaryFireMontageAnimCoreTypeOverrides", 0x3E8, "ArrayProperty"},
            {"PrimaryFireMontageTagOverrides", 0x3F8, "ArrayProperty"},
            {"PettingData", 0x408, "StructProperty"},
            {"bShouldApplyCapsuleSizeChange", 0x518, "BoolProperty"},
            {"bIsSprinting", 0x540, "BoolProperty"},
            {"DoNotUse_PrimaryRider", 0x548, "ObjectProperty"},
        }};
    };

    struct RiderComponent
    {
        static constexpr std::string_view Name = "RiderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartedRiding_SingularDeprecated = 0xD0;
            static constexpr std::uintptr_t OnStoppedRiding_SingularDeprecated = 0xE0;
            static constexpr std::uintptr_t OnStartedRidingWithSlot = 0xF0;
            static constexpr std::uintptr_t OnStoppedRidingWithSlot = 0x100;
            static constexpr std::uintptr_t RidingCameraModeClass = 0x110;
            static constexpr std::uintptr_t RidingSprintCameraModeClass = 0x118;
            static constexpr std::uintptr_t RidingCameraModeBlendTime = 0x120;
            static constexpr std::uintptr_t TargetingAdditionalViewTargetSpaceViewOffset = 0x128;
            static constexpr std::uintptr_t AttachLocationOffset = 0x160;
            static constexpr std::uintptr_t AttachRotationOffset = 0x178;
            static constexpr std::uintptr_t AttachScaleOffset = 0x190;
            static constexpr std::uintptr_t RiderPropClass = 0x1A8;
            static constexpr std::uintptr_t RidablePropClass = 0x1B0;
            static constexpr std::uintptr_t RiderPropAttachLocationOffset = 0x1B8;
            static constexpr std::uintptr_t RiderPropAttachRotationOffset = 0x1D0;
            static constexpr std::uintptr_t RiderPropAttachScale = 0x1E8;
            static constexpr std::uintptr_t RiderPropAttachSocket = 0x1EC;
            static constexpr std::uintptr_t bUseClientAttachGuideSocket = 0x1F0;
            static constexpr std::uintptr_t RiderPropAttachSoftBounds = 0x1F8;
            static constexpr std::uintptr_t RiderPropAttachSoftBoundsScalar = 0x210;
            static constexpr std::uintptr_t RiderPropAttachHardBounds = 0x218;
            static constexpr std::uintptr_t RiderPropAttachSoftBoundsTargetingScalar = 0x230;
            static constexpr std::uintptr_t RiderPropAttachHardBoundsTargetingScalar = 0x234;
            static constexpr std::uintptr_t RiderPropAttachVerticalBufferTargetingScalar = 0x238;
            static constexpr std::uintptr_t RidingExitHoldTime = 0x23C;
            static constexpr std::uintptr_t TimeBeforeReenteringRiding = 0x240;
            static constexpr std::uintptr_t RidingExitStartedEventTag = 0x268;
            static constexpr std::uintptr_t RidingExitStoppedEventTag = 0x26C;
            static constexpr std::uintptr_t RidingInputContext = 0x270;
            static constexpr std::uintptr_t RidingExit = 0x278;
            static constexpr std::uintptr_t GamepadRidingExit = 0x280;
            static constexpr std::uintptr_t ConnectorFXAsset = 0x288;
            static constexpr std::uintptr_t ConnectorPropSourceMeshParameterName = 0x290;
            static constexpr std::uintptr_t ConnectorPropTargetMeshParameterName = 0x294;
            static constexpr std::uintptr_t RidingStartedGameplayCueTag = 0x298;
            static constexpr std::uintptr_t WhileRidingGameplayCueTag = 0x29C;
            static constexpr std::uintptr_t RidingStoppedGameplayCueTag = 0x2A0;
            static constexpr std::uintptr_t SimulatedSmoothedRotationSpeed = 0x2A4;
            static constexpr std::uintptr_t ExcludedEmoteTags = 0x2A8;
            static constexpr std::uintptr_t ActiveRidableAndSlot = 0x2D8;
            static constexpr std::uintptr_t LastRidableAndSlot = 0x2E8;
            static constexpr std::uintptr_t RiderProp = 0x2F8;
            static constexpr std::uintptr_t ConnectorProp = 0x300;
            static constexpr std::uintptr_t PropAttachSeparation = 0x308;
            static constexpr std::uintptr_t AdditionalAttachOffset = 0x320;
            static constexpr std::uintptr_t SoftBoundsAttachmentOffset = 0x338;
            static constexpr std::uintptr_t HardBoundsAttachmentOffset = 0x350;
            static constexpr std::uintptr_t PlaylistTagDenylistRowHandle = 0x368;
            static constexpr std::uintptr_t RiderInputComponent = 0x378;
            static constexpr std::uintptr_t PendingFailedEmoteErrorTags = 0x388;
            static constexpr std::uintptr_t ExitLaunchVelocity = 0x3A8;
            static constexpr std::uintptr_t JumpExitLaunchVelocity = 0x450;
            static constexpr std::uintptr_t ActiveAnaltyicsData = 0x500;
            static constexpr std::uintptr_t RidableLocationLastFrame = 0x580;
            static constexpr std::uintptr_t RestoreCollisionHandle = 0x5A0;
            static constexpr std::uintptr_t RidableControlRuntimeData = 0x5B0;
            static constexpr std::uintptr_t bIsSprintingReplay = 0x5F0;
            static constexpr std::uintptr_t ClampedController = 0x5F4;
            static constexpr std::uintptr_t bIsPetting = 0x5FC;
            static constexpr std::uintptr_t RidingCapsuleHalfHeight = 0x600;
            static constexpr std::uintptr_t RidingCapsuleRadius = 0x628;
            static constexpr std::uintptr_t CollisionProfileName = 0x660;
            static constexpr std::uintptr_t TraceRadius = 0x668;
            static constexpr std::uintptr_t TraceLength = 0x690;
            static constexpr std::uintptr_t bPreventExitRidingFromInput = 0x6B8;
            static constexpr std::uintptr_t RidingInputPriority = 0x6BC;
            static constexpr std::uintptr_t DoNotUse_ActiveRidable = 0x720;
        };

        inline static constexpr std::array<PropertyInfo, 67> Properties{{
            {"OnStartedRiding_SingularDeprecated", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnStoppedRiding_SingularDeprecated", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnStartedRidingWithSlot", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnStoppedRidingWithSlot", 0x100, "MulticastInlineDelegateProperty"},
            {"RidingCameraModeClass", 0x110, "ClassProperty"},
            {"RidingSprintCameraModeClass", 0x118, "ClassProperty"},
            {"RidingCameraModeBlendTime", 0x120, "FloatProperty"},
            {"TargetingAdditionalViewTargetSpaceViewOffset", 0x128, "StructProperty"},
            {"AttachLocationOffset", 0x160, "StructProperty"},
            {"AttachRotationOffset", 0x178, "StructProperty"},
            {"AttachScaleOffset", 0x190, "StructProperty"},
            {"RiderPropClass", 0x1A8, "ClassProperty"},
            {"RidablePropClass", 0x1B0, "ClassProperty"},
            {"RiderPropAttachLocationOffset", 0x1B8, "StructProperty"},
            {"RiderPropAttachRotationOffset", 0x1D0, "StructProperty"},
            {"RiderPropAttachScale", 0x1E8, "FloatProperty"},
            {"RiderPropAttachSocket", 0x1EC, "NameProperty"},
            {"bUseClientAttachGuideSocket", 0x1F0, "BoolProperty"},
            {"RiderPropAttachSoftBounds", 0x1F8, "StructProperty"},
            {"RiderPropAttachSoftBoundsScalar", 0x210, "FloatProperty"},
            {"RiderPropAttachHardBounds", 0x218, "StructProperty"},
            {"RiderPropAttachSoftBoundsTargetingScalar", 0x230, "FloatProperty"},
            {"RiderPropAttachHardBoundsTargetingScalar", 0x234, "FloatProperty"},
            {"RiderPropAttachVerticalBufferTargetingScalar", 0x238, "FloatProperty"},
            {"RidingExitHoldTime", 0x23C, "FloatProperty"},
            {"TimeBeforeReenteringRiding", 0x240, "StructProperty"},
            {"RidingExitStartedEventTag", 0x268, "StructProperty"},
            {"RidingExitStoppedEventTag", 0x26C, "StructProperty"},
            {"RidingInputContext", 0x270, "ObjectProperty"},
            {"RidingExit", 0x278, "ObjectProperty"},
            {"GamepadRidingExit", 0x280, "ObjectProperty"},
            {"ConnectorFXAsset", 0x288, "ObjectProperty"},
            {"ConnectorPropSourceMeshParameterName", 0x290, "NameProperty"},
            {"ConnectorPropTargetMeshParameterName", 0x294, "NameProperty"},
            {"RidingStartedGameplayCueTag", 0x298, "StructProperty"},
            {"WhileRidingGameplayCueTag", 0x29C, "StructProperty"},
            {"RidingStoppedGameplayCueTag", 0x2A0, "StructProperty"},
            {"SimulatedSmoothedRotationSpeed", 0x2A4, "FloatProperty"},
            {"ExcludedEmoteTags", 0x2A8, "StructProperty"},
            {"ActiveRidableAndSlot", 0x2D8, "StructProperty"},
            {"LastRidableAndSlot", 0x2E8, "StructProperty"},
            {"RiderProp", 0x2F8, "ObjectProperty"},
            {"ConnectorProp", 0x300, "ObjectProperty"},
            {"PropAttachSeparation", 0x308, "StructProperty"},
            {"AdditionalAttachOffset", 0x320, "StructProperty"},
            {"SoftBoundsAttachmentOffset", 0x338, "StructProperty"},
            {"HardBoundsAttachmentOffset", 0x350, "StructProperty"},
            {"PlaylistTagDenylistRowHandle", 0x368, "StructProperty"},
            {"RiderInputComponent", 0x378, "ObjectProperty"},
            {"PendingFailedEmoteErrorTags", 0x388, "StructProperty"},
            {"ExitLaunchVelocity", 0x3A8, "StructProperty"},
            {"JumpExitLaunchVelocity", 0x450, "StructProperty"},
            {"ActiveAnaltyicsData", 0x500, "StructProperty"},
            {"RidableLocationLastFrame", 0x580, "StructProperty"},
            {"RestoreCollisionHandle", 0x5A0, "StructProperty"},
            {"RidableControlRuntimeData", 0x5B0, "StructProperty"},
            {"bIsSprintingReplay", 0x5F0, "BoolProperty"},
            {"ClampedController", 0x5F4, "WeakObjectProperty"},
            {"bIsPetting", 0x5FC, "BoolProperty"},
            {"RidingCapsuleHalfHeight", 0x600, "StructProperty"},
            {"RidingCapsuleRadius", 0x628, "StructProperty"},
            {"CollisionProfileName", 0x660, "StructProperty"},
            {"TraceRadius", 0x668, "StructProperty"},
            {"TraceLength", 0x690, "StructProperty"},
            {"bPreventExitRidingFromInput", 0x6B8, "BoolProperty"},
            {"RidingInputPriority", 0x6BC, "IntProperty"},
            {"DoNotUse_ActiveRidable", 0x720, "ObjectProperty"},
        }};
    };

    struct RidingAnalytics
    {
        static constexpr std::string_view Name = "RidingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RidingCheatManager
    {
        static constexpr std::string_view Name = "RidingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RidingGameStateMutator
    {
        static constexpr std::string_view Name = "RidingGameStateMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

}

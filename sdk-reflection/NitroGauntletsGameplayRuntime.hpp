#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NitroGauntletsGameplayRuntime
{
    struct NitroGauntletCustomCharacterPartAnimInstance
    {
        static constexpr std::string_view Name = "NitroGauntletCustomCharacterPartAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterCustomizationFinished = 0x468;
            static constexpr std::uintptr_t CurrentWeapon = 0x478;
            static constexpr std::uintptr_t bCanPlayCustomAnimations = 0x480;
            static constexpr std::uintptr_t bHideUntilFirstAnimationUpdate = 0x480;
            static constexpr std::uintptr_t bIgnoreSignificanceManagerAndAlwaysTick = 0x480;
            static constexpr std::uintptr_t bIsRelaxedLevel2 = 0x480;
            static constexpr std::uintptr_t bIsRiding = 0x480;
            static constexpr std::uintptr_t bUnhideOnNextUpdate = 0x480;
            static constexpr std::uintptr_t bUpdateOwnerAnimInputProperty = 0x480;
            static constexpr std::uintptr_t bUsesDayPhaseChange = 0x480;
            static constexpr std::uintptr_t bIsCrouching = 0x481;
            static constexpr std::uintptr_t bIsInFirstPerson = 0x481;
            static constexpr std::uintptr_t bIsParachuteOpened = 0x481;
            static constexpr std::uintptr_t bIsSkydiveDiveMode = 0x481;
            static constexpr std::uintptr_t bIsSkydiveFloating = 0x481;
            static constexpr std::uintptr_t bIsSkydiving = 0x481;
            static constexpr std::uintptr_t bIsSkydivingFromBus = 0x481;
            static constexpr std::uintptr_t bParachuteOpenedAndStandingUpright = 0x481;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x482;
            static constexpr std::uintptr_t bIsBackpedaling = 0x482;
            static constexpr std::uintptr_t bIsMoving2D = 0x482;
            static constexpr std::uintptr_t bIsSprinting = 0x482;
            static constexpr std::uintptr_t bIsUsingJetpack = 0x482;
            static constexpr std::uintptr_t bGoopJumpExecuted = 0x484;
            static constexpr std::uintptr_t bIsInFrontEnd = 0x488;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x488;
            static constexpr std::uintptr_t bIsPlayingFullBodySlotInFrontEnd = 0x488;
            static constexpr std::uintptr_t bIsPlayingMeleeAnim = 0x488;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x488;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x488;
            static constexpr std::uintptr_t bIsSwimSprinting = 0x488;
            static constexpr std::uintptr_t bIsWaterJump = 0x488;
            static constexpr std::uintptr_t bIsInCannon = 0x489;
            static constexpr std::uintptr_t bIsInShoppingCart = 0x489;
            static constexpr std::uintptr_t bIsInVehicle = 0x489;
            static constexpr std::uintptr_t bIsOnPawn = 0x489;
            static constexpr std::uintptr_t bIsPreviewingItemInFrontEnd = 0x489;
            static constexpr std::uintptr_t bIsValetDriver = 0x489;
            static constexpr std::uintptr_t bIsValetPassenger = 0x489;
            static constexpr std::uintptr_t bShouldDisplayFrontendReactivity = 0x489;
            static constexpr std::uintptr_t bIsCrouchSprinting = 0x48A;
            static constexpr std::uintptr_t bIsDBNO = 0x48A;
            static constexpr std::uintptr_t bIsTargeting = 0x48A;
            static constexpr std::uintptr_t bIsTargetingConsumableThrow = 0x48A;
            static constexpr std::uintptr_t bIsInAir = 0x48C;
            static constexpr std::uintptr_t bIsOnGround = 0x48C;
            static constexpr std::uintptr_t bIsFerretVehicleDriver = 0x490;
            static constexpr std::uintptr_t bIsFerretVehiclePassenger = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleBackPassenger = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleDriver = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleFrontPassenger = 0x490;
            static constexpr std::uintptr_t bIsInVehicleSeat = 0x490;
            static constexpr std::uintptr_t bIsLandingPredicted = 0x490;
            static constexpr std::uintptr_t bVehicleSeatForcesCrouch = 0x490;
            static constexpr std::uintptr_t bHasMotorcyclePassenger = 0x491;
            static constexpr std::uintptr_t bIsAntelopeVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsAntelopeVehiclePassenger = 0x491;
            static constexpr std::uintptr_t bIsJackalVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsMotorcycleDriver = 0x491;
            static constexpr std::uintptr_t bIsMotorcyclePassenger = 0x491;
            static constexpr std::uintptr_t bIsOctopusVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsOstrichVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsDBNOCarried = 0x492;
            static constexpr std::uintptr_t bIsDBNOCarrying = 0x492;
            static constexpr std::uintptr_t bIsLeftArmHidden = 0x492;
            static constexpr std::uintptr_t bIsMeatballDriver = 0x492;
            static constexpr std::uintptr_t bIsMeatballPassenger = 0x492;
            static constexpr std::uintptr_t bIsOstrichVehicleGunner = 0x492;
            static constexpr std::uintptr_t bIsRightArmHidden = 0x492;
            static constexpr std::uintptr_t bIsTacticalSprinting = 0x492;
            static constexpr std::uintptr_t bIsLeftLegHidden = 0x493;
            static constexpr std::uintptr_t bIsNeckHeadHidden = 0x493;
            static constexpr std::uintptr_t bIsRightLegHidden = 0x493;
            static constexpr std::uintptr_t bCachedIsWearingBackbling = 0x494;
            static constexpr std::uintptr_t bCachedIsBackblingACape = 0x495;
            static constexpr std::uintptr_t bOverrideRBANSimSpaceInFrontEnd = 0x498;
            static constexpr std::uintptr_t VehicleSeatIndex = 0x49C;
            static constexpr std::uintptr_t VehicleSlotExposure = 0x4A0;
            static constexpr std::uintptr_t GameplayTagAnimations = 0x4A8;
            static constexpr std::uintptr_t CrouchingWithRigidBodyEnabled = 0x4B8;
            static constexpr std::uintptr_t RidingSpeed2D = 0x4BC;
            static constexpr std::uintptr_t CurrentLOD = 0x4C0;
            static constexpr std::uintptr_t SignificanceLOD = 0x4C4;
            static constexpr std::uintptr_t SkydivingExternalForceInput = 0x4C8;
            static constexpr std::uintptr_t SlopeInfoInput = 0x5B0;
            static constexpr std::uintptr_t PlayerGliderType = 0x610;
            static constexpr std::uintptr_t WeaponCoreAnim = 0x611;
            static constexpr std::uintptr_t bIsFlyingHorizontally = 0x612;
            static constexpr std::uintptr_t bIsFlyingVertically = 0x612;
            static constexpr std::uintptr_t bIsOnAscender = 0x612;
            static constexpr std::uintptr_t bIsOnGrindRail = 0x612;
            static constexpr std::uintptr_t bIsZiplining = 0x612;
            static constexpr std::uintptr_t bPbBlendEnabled = 0x612;
            static constexpr std::uintptr_t bRegisteredForDayPhaseChange = 0x614;
            static constexpr std::uintptr_t PartType = 0x618;
            static constexpr std::uintptr_t OwnerSkeletalMeshComponent = 0x61C;
            static constexpr std::uintptr_t PendingCustomizationFinishedEvent = 0x628;
            static constexpr std::uintptr_t PendingPickaxeCustomizationFinishedEvent = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 98> Properties{{
            {"CharacterCustomizationFinished", 0x468, "MulticastInlineDelegateProperty"},
            {"CurrentWeapon", 0x478, "ObjectProperty"},
            {"bCanPlayCustomAnimations", 0x480, "BoolProperty"},
            {"bHideUntilFirstAnimationUpdate", 0x480, "BoolProperty"},
            {"bIgnoreSignificanceManagerAndAlwaysTick", 0x480, "BoolProperty"},
            {"bIsRelaxedLevel2", 0x480, "BoolProperty"},
            {"bIsRiding", 0x480, "BoolProperty"},
            {"bUnhideOnNextUpdate", 0x480, "BoolProperty"},
            {"bUpdateOwnerAnimInputProperty", 0x480, "BoolProperty"},
            {"bUsesDayPhaseChange", 0x480, "BoolProperty"},
            {"bIsCrouching", 0x481, "BoolProperty"},
            {"bIsInFirstPerson", 0x481, "BoolProperty"},
            {"bIsParachuteOpened", 0x481, "BoolProperty"},
            {"bIsSkydiveDiveMode", 0x481, "BoolProperty"},
            {"bIsSkydiveFloating", 0x481, "BoolProperty"},
            {"bIsSkydiving", 0x481, "BoolProperty"},
            {"bIsSkydivingFromBus", 0x481, "BoolProperty"},
            {"bParachuteOpenedAndStandingUpright", 0x481, "BoolProperty"},
            {"bIsAccelerating2D", 0x482, "BoolProperty"},
            {"bIsBackpedaling", 0x482, "BoolProperty"},
            {"bIsMoving2D", 0x482, "BoolProperty"},
            {"bIsSprinting", 0x482, "BoolProperty"},
            {"bIsUsingJetpack", 0x482, "BoolProperty"},
            {"bGoopJumpExecuted", 0x484, "BoolProperty"},
            {"bIsInFrontEnd", 0x488, "BoolProperty"},
            {"bIsPlayingEmote", 0x488, "BoolProperty"},
            {"bIsPlayingFullBodySlotInFrontEnd", 0x488, "BoolProperty"},
            {"bIsPlayingMeleeAnim", 0x488, "BoolProperty"},
            {"bIsSlopeSliding", 0x488, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x488, "BoolProperty"},
            {"bIsSwimSprinting", 0x488, "BoolProperty"},
            {"bIsWaterJump", 0x488, "BoolProperty"},
            {"bIsInCannon", 0x489, "BoolProperty"},
            {"bIsInShoppingCart", 0x489, "BoolProperty"},
            {"bIsInVehicle", 0x489, "BoolProperty"},
            {"bIsOnPawn", 0x489, "BoolProperty"},
            {"bIsPreviewingItemInFrontEnd", 0x489, "BoolProperty"},
            {"bIsValetDriver", 0x489, "BoolProperty"},
            {"bIsValetPassenger", 0x489, "BoolProperty"},
            {"bShouldDisplayFrontendReactivity", 0x489, "BoolProperty"},
            {"bIsCrouchSprinting", 0x48A, "BoolProperty"},
            {"bIsDBNO", 0x48A, "BoolProperty"},
            {"bIsTargeting", 0x48A, "BoolProperty"},
            {"bIsTargetingConsumableThrow", 0x48A, "BoolProperty"},
            {"bIsInAir", 0x48C, "BoolProperty"},
            {"bIsOnGround", 0x48C, "BoolProperty"},
            {"bIsFerretVehicleDriver", 0x490, "BoolProperty"},
            {"bIsFerretVehiclePassenger", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleBackPassenger", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleDriver", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleFrontPassenger", 0x490, "BoolProperty"},
            {"bIsInVehicleSeat", 0x490, "BoolProperty"},
            {"bIsLandingPredicted", 0x490, "BoolProperty"},
            {"bVehicleSeatForcesCrouch", 0x490, "BoolProperty"},
            {"bHasMotorcyclePassenger", 0x491, "BoolProperty"},
            {"bIsAntelopeVehicleDriver", 0x491, "BoolProperty"},
            {"bIsAntelopeVehiclePassenger", 0x491, "BoolProperty"},
            {"bIsJackalVehicleDriver", 0x491, "BoolProperty"},
            {"bIsMotorcycleDriver", 0x491, "BoolProperty"},
            {"bIsMotorcyclePassenger", 0x491, "BoolProperty"},
            {"bIsOctopusVehicleDriver", 0x491, "BoolProperty"},
            {"bIsOstrichVehicleDriver", 0x491, "BoolProperty"},
            {"bIsDBNOCarried", 0x492, "BoolProperty"},
            {"bIsDBNOCarrying", 0x492, "BoolProperty"},
            {"bIsLeftArmHidden", 0x492, "BoolProperty"},
            {"bIsMeatballDriver", 0x492, "BoolProperty"},
            {"bIsMeatballPassenger", 0x492, "BoolProperty"},
            {"bIsOstrichVehicleGunner", 0x492, "BoolProperty"},
            {"bIsRightArmHidden", 0x492, "BoolProperty"},
            {"bIsTacticalSprinting", 0x492, "BoolProperty"},
            {"bIsLeftLegHidden", 0x493, "BoolProperty"},
            {"bIsNeckHeadHidden", 0x493, "BoolProperty"},
            {"bIsRightLegHidden", 0x493, "BoolProperty"},
            {"bCachedIsWearingBackbling", 0x494, "BoolProperty"},
            {"bCachedIsBackblingACape", 0x495, "BoolProperty"},
            {"bOverrideRBANSimSpaceInFrontEnd", 0x498, "BoolProperty"},
            {"VehicleSeatIndex", 0x49C, "IntProperty"},
            {"VehicleSlotExposure", 0x4A0, "EnumProperty"},
            {"GameplayTagAnimations", 0x4A8, "StructProperty"},
            {"CrouchingWithRigidBodyEnabled", 0x4B8, "FloatProperty"},
            {"RidingSpeed2D", 0x4BC, "FloatProperty"},
            {"CurrentLOD", 0x4C0, "IntProperty"},
            {"SignificanceLOD", 0x4C4, "IntProperty"},
            {"SkydivingExternalForceInput", 0x4C8, "StructProperty"},
            {"SlopeInfoInput", 0x5B0, "StructProperty"},
            {"PlayerGliderType", 0x610, "EnumProperty"},
            {"WeaponCoreAnim", 0x611, "ByteProperty"},
            {"bIsFlyingHorizontally", 0x612, "BoolProperty"},
            {"bIsFlyingVertically", 0x612, "BoolProperty"},
            {"bIsOnAscender", 0x612, "BoolProperty"},
            {"bIsOnGrindRail", 0x612, "BoolProperty"},
            {"bIsZiplining", 0x612, "BoolProperty"},
            {"bPbBlendEnabled", 0x612, "BoolProperty"},
            {"bRegisteredForDayPhaseChange", 0x614, "BoolProperty"},
            {"PartType", 0x618, "ByteProperty"},
            {"OwnerSkeletalMeshComponent", 0x61C, "WeakObjectProperty"},
            {"PendingCustomizationFinishedEvent", 0x628, "ObjectProperty"},
            {"PendingPickaxeCustomizationFinishedEvent", 0x630, "ObjectProperty"},
        }};
    };

    struct NitroGauntletsLayerAnimInstance
    {
        static constexpr std::string_view Name = "NitroGauntletsLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bMeteorStrike = 0x1180;
            static constexpr std::uintptr_t MeteorPitchAlpha = 0x1184;
            static constexpr std::uintptr_t MeteorPitchTotal = 0x1188;
            static constexpr std::uintptr_t UpperBodyTwistRotator = 0x1190;
            static constexpr std::uintptr_t MeteorActiveTag = 0x11A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bMeteorStrike", 0x1180, "BoolProperty"},
            {"MeteorPitchAlpha", 0x1184, "FloatProperty"},
            {"MeteorPitchTotal", 0x1188, "FloatProperty"},
            {"UpperBodyTwistRotator", 0x1190, "StructProperty"},
            {"MeteorActiveTag", 0x11A8, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MantisRuntime
{
    struct FortAbilityTask_ApplyRootMotionMantisForce
    {
        static constexpr std::string_view Name = "FortAbilityTask_ApplyRootMotionMantisForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0xB0;
            static constexpr std::uintptr_t duration = 0xC0;
            static constexpr std::uintptr_t TechniqueMontage = 0xC8;
            static constexpr std::uintptr_t WarpInfo = 0xD0;
            static constexpr std::uintptr_t bIgnoreZAccumulate = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnFinish", 0xB0, "MulticastInlineDelegateProperty"},
            {"duration", 0xC0, "FloatProperty"},
            {"TechniqueMontage", 0xC8, "ObjectProperty"},
            {"WarpInfo", 0xD0, "StructProperty"},
            {"bIgnoreZAccumulate", 0x140, "BoolProperty"},
        }};
    };

    struct FortAnimNotifyState_Mantis
    {
        static constexpr std::string_view Name = "FortAnimNotifyState_Mantis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisNotifyWindow = 0x30;
            static constexpr std::uintptr_t MantisBranchRule = 0x31;
            static constexpr std::uintptr_t MantisBranchPath = 0x32;
            static constexpr std::uintptr_t MantisNotifyTag = 0x34;
            static constexpr std::uintptr_t TranslationWarpLimitRule = 0x38;
            static constexpr std::uintptr_t TranslationWarpLimit = 0x3C;
            static constexpr std::uintptr_t RotationRateWarpRule = 0x40;
            static constexpr std::uintptr_t FixedWarpRotationRate = 0x44;
            static constexpr std::uintptr_t bWarpRotation = 0x48;
            static constexpr std::uintptr_t bWarpTranslation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MantisNotifyWindow", 0x30, "EnumProperty"},
            {"MantisBranchRule", 0x31, "EnumProperty"},
            {"MantisBranchPath", 0x32, "EnumProperty"},
            {"MantisNotifyTag", 0x34, "StructProperty"},
            {"TranslationWarpLimitRule", 0x38, "EnumProperty"},
            {"TranslationWarpLimit", 0x3C, "FloatProperty"},
            {"RotationRateWarpRule", 0x40, "EnumProperty"},
            {"FixedWarpRotationRate", 0x44, "FloatProperty"},
            {"bWarpRotation", 0x48, "BoolProperty"},
            {"bWarpTranslation", 0x48, "BoolProperty"},
        }};
    };

    struct FortAnimNotify_Mantis
    {
        static constexpr std::string_view Name = "FortAnimNotify_Mantis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisNotifyEvent = 0x38;
            static constexpr std::uintptr_t MantisBranchRule = 0x39;
            static constexpr std::uintptr_t MantisBranchPath = 0x3A;
            static constexpr std::uintptr_t bMaintainPreviousMantisBranchesInTechnique = 0x3B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MantisNotifyEvent", 0x38, "EnumProperty"},
            {"MantisBranchRule", 0x39, "EnumProperty"},
            {"MantisBranchPath", 0x3A, "EnumProperty"},
            {"bMaintainPreviousMantisBranchesInTechnique", 0x3B, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_Mantis
    {
        static constexpr std::string_view Name = "FortGameplayAbility_Mantis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCommitValidation = 0xB40;
            static constexpr std::uintptr_t bAllowRootMotionWarping = 0xB41;
            static constexpr std::uintptr_t bUseAlternativeWarpingBehavior = 0xB42;
            static constexpr std::uintptr_t bApplyEffectContainerOnTechniqueDamage = 0xB43;
            static constexpr std::uintptr_t bApplyEffectContainerOnTechniqueStart = 0xB44;
            static constexpr std::uintptr_t MantisPawnComponent = 0xB48;
            static constexpr std::uintptr_t MontageTask = 0xB50;
            static constexpr std::uintptr_t RootMotionTask = 0xB58;
            static constexpr std::uintptr_t MantisMovementClass = 0xB60;
            static constexpr std::uintptr_t MantisHoldPositionClass = 0xB68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bUseCommitValidation", 0xB40, "BoolProperty"},
            {"bAllowRootMotionWarping", 0xB41, "BoolProperty"},
            {"bUseAlternativeWarpingBehavior", 0xB42, "BoolProperty"},
            {"bApplyEffectContainerOnTechniqueDamage", 0xB43, "BoolProperty"},
            {"bApplyEffectContainerOnTechniqueStart", 0xB44, "BoolProperty"},
            {"MantisPawnComponent", 0xB48, "ObjectProperty"},
            {"MontageTask", 0xB50, "ObjectProperty"},
            {"RootMotionTask", 0xB58, "ObjectProperty"},
            {"MantisMovementClass", 0xB60, "ClassProperty"},
            {"MantisHoldPositionClass", 0xB68, "ClassProperty"},
        }};
    };

    struct FortMantisAnimInstance
    {
        static constexpr std::string_view Name = "FortMantisAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisAnimInstanceInfo = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MantisAnimInstanceInfo", 0x340, "StructProperty"},
        }};
    };

    struct FortMantisData
    {
        static constexpr std::string_view Name = "FortMantisData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRotationOverrideTags = 0x28;
            static constexpr std::uintptr_t LockRotationToCameraTag = 0x2C;
            static constexpr std::uintptr_t UnlockRotationFromCameraTag = 0x30;
            static constexpr std::uintptr_t LockRotationOnFinishTag = 0x34;
            static constexpr std::uintptr_t UnlockRotationOnFinishTag = 0x38;
            static constexpr std::uintptr_t bShowTargetHealthBar = 0x3C;
            static constexpr std::uintptr_t bIsHoldingEnabled = 0x3D;
            static constexpr std::uintptr_t PrimaryHoldingInputAction = 0x40;
            static constexpr std::uintptr_t SecondaryHoldingInputAction = 0x60;
            static constexpr std::uintptr_t TechniqueAbility = 0x80;
            static constexpr std::uintptr_t TechniqueAdditionEffectContainers = 0x88;
            static constexpr std::uintptr_t Techniques = 0x98;
            static constexpr std::uintptr_t Branches = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bEnableRotationOverrideTags", 0x28, "BoolProperty"},
            {"LockRotationToCameraTag", 0x2C, "StructProperty"},
            {"UnlockRotationFromCameraTag", 0x30, "StructProperty"},
            {"LockRotationOnFinishTag", 0x34, "StructProperty"},
            {"UnlockRotationOnFinishTag", 0x38, "StructProperty"},
            {"bShowTargetHealthBar", 0x3C, "BoolProperty"},
            {"bIsHoldingEnabled", 0x3D, "BoolProperty"},
            {"PrimaryHoldingInputAction", 0x40, "SoftObjectProperty"},
            {"SecondaryHoldingInputAction", 0x60, "SoftObjectProperty"},
            {"TechniqueAbility", 0x80, "ClassProperty"},
            {"TechniqueAdditionEffectContainers", 0x88, "ArrayProperty"},
            {"Techniques", 0x98, "ArrayProperty"},
            {"Branches", 0xA8, "ArrayProperty"},
        }};
    };

    struct FortMantisLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortMantisLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisAnimInstanceInfo = 0x1180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MantisAnimInstanceInfo", 0x1180, "StructProperty"},
        }};
    };

    struct FortMantisPawnComponent
    {
        static constexpr std::string_view Name = "FortMantisPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTechniqueMetadataReady = 0xC0;
            static constexpr std::uintptr_t OnTechniqueStartedBP = 0x100;
            static constexpr std::uintptr_t OnTechniqueEndedBP = 0x110;
            static constexpr std::uintptr_t MontageDataMap = 0x200;
            static constexpr std::uintptr_t MantisData = 0x210;
            static constexpr std::uintptr_t Weapon = 0x218;
            static constexpr std::uintptr_t ProxyTable = 0x220;
            static constexpr std::uintptr_t ProxyAssetEvaluatedAnimMontage = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnTechniqueMetadataReady", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnTechniqueStartedBP", 0x100, "MulticastInlineDelegateProperty"},
            {"OnTechniqueEndedBP", 0x110, "MulticastInlineDelegateProperty"},
            {"MontageDataMap", 0x200, "MapProperty"},
            {"MantisData", 0x210, "ObjectProperty"},
            {"Weapon", 0x218, "ObjectProperty"},
            {"ProxyTable", 0x220, "ObjectProperty"},
            {"ProxyAssetEvaluatedAnimMontage", 0x358, "ObjectProperty"},
        }};
    };

    struct FortMantisWeaponComponent
    {
        static constexpr std::string_view Name = "FortMantisWeaponComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisData = 0xC8;
            static constexpr std::uintptr_t MantisPawnComponent = 0xD0;
            static constexpr std::uintptr_t AnimInstanceInfo = 0xD8;
            static constexpr std::uintptr_t ReplayAnimInstanceInfo = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MantisData", 0xC8, "ObjectProperty"},
            {"MantisPawnComponent", 0xD0, "WeakObjectProperty"},
            {"AnimInstanceInfo", 0xD8, "StructProperty"},
            {"ReplayAnimInstanceInfo", 0xE8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtMantis
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtMantis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t bHoldPosition = 0x5A0;
            static constexpr std::uintptr_t ServerMaxWarpTranslationBeforeValidatedWarpInfo = 0x5A4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHoldPosition", 0x5A0, "BoolProperty"},
            {"ServerMaxWarpTranslationBeforeValidatedWarpInfo", 0x5A4, "FloatProperty"},
        }};
    };

    struct FortMovementMode_MantisRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_MantisRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GuidedMotionRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetInitialComponent_MoveToActor = 0x3C;
            static constexpr std::uintptr_t NetInitialWorldLocation_MoveToActor = 0x48;
            static constexpr std::uintptr_t NetInitialWorldDirection_MoveToActor = 0x60;
            static constexpr std::uintptr_t bNetInitialHasMovementInput = 0x78;
            static constexpr std::uintptr_t bNetCorrectionTickedOnceForInstant = 0x79;
            static constexpr std::uintptr_t bNetCorrectionProcessedFinishVelocity = 0x7A;
            static constexpr std::uintptr_t NetInitialPlayerLocation = 0x80;
            static constexpr std::uintptr_t NetOptionalBools = 0x98;
            static constexpr std::uintptr_t NetOptionalFloats = 0xA8;
            static constexpr std::uintptr_t LocalGuideMode = 0xB8;
            static constexpr std::uintptr_t LocalMoveToEndLocation = 0xC0;
            static constexpr std::uintptr_t LocalStartElapsedTime = 0xD8;
            static constexpr std::uintptr_t LocalEndElapsedTime = 0xDC;
            static constexpr std::uintptr_t OnFinished = 0xE0;
            static constexpr std::uintptr_t LocalMaxDuration = 0x144;
            static constexpr std::uintptr_t LocalStrength = 0x1A8;
            static constexpr std::uintptr_t LocalDirection = 0x1B0;
            static constexpr std::uintptr_t LocalHeightAboveGround = 0x1C8;
            static constexpr std::uintptr_t LocalInitialPlayerLocation = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"NetInitialComponent_MoveToActor", 0x3C, "WeakObjectProperty"},
            {"NetInitialWorldLocation_MoveToActor", 0x48, "StructProperty"},
            {"NetInitialWorldDirection_MoveToActor", 0x60, "StructProperty"},
            {"bNetInitialHasMovementInput", 0x78, "BoolProperty"},
            {"bNetCorrectionTickedOnceForInstant", 0x79, "BoolProperty"},
            {"bNetCorrectionProcessedFinishVelocity", 0x7A, "BoolProperty"},
            {"NetInitialPlayerLocation", 0x80, "StructProperty"},
            {"NetOptionalBools", 0x98, "ArrayProperty"},
            {"NetOptionalFloats", 0xA8, "ArrayProperty"},
            {"LocalGuideMode", 0xB8, "EnumProperty"},
            {"LocalMoveToEndLocation", 0xC0, "StructProperty"},
            {"LocalStartElapsedTime", 0xD8, "FloatProperty"},
            {"LocalEndElapsedTime", 0xDC, "FloatProperty"},
            {"OnFinished", 0xE0, "DelegateProperty"},
            {"LocalMaxDuration", 0x144, "FloatProperty"},
            {"LocalStrength", 0x1A8, "FloatProperty"},
            {"LocalDirection", 0x1B0, "StructProperty"},
            {"LocalHeightAboveGround", 0x1C8, "FloatProperty"},
            {"LocalInitialPlayerLocation", 0x228, "StructProperty"},
        }};
    };

}

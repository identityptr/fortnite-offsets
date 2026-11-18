#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MontageMotionCodeRuntime
{
    struct FortAnimNotifyState_MontageMotion
    {
        static constexpr std::string_view Name = "FortAnimNotifyState_MontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageMotionNotifyWindow = 0x30;
            static constexpr std::uintptr_t MontageMotionNotifyTag = 0x34;
            static constexpr std::uintptr_t TranslationWarpLimitRule = 0x38;
            static constexpr std::uintptr_t TranslationWarpLimit = 0x3C;
            static constexpr std::uintptr_t RotationRateWarpRule = 0x40;
            static constexpr std::uintptr_t FixedWarpRotationRate = 0x44;
            static constexpr std::uintptr_t bWarpRotation = 0x48;
            static constexpr std::uintptr_t bWarpTranslation = 0x48;
            static constexpr std::uintptr_t AttachTargetRoleTag = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MontageMotionNotifyWindow", 0x30, "EnumProperty"},
            {"MontageMotionNotifyTag", 0x34, "StructProperty"},
            {"TranslationWarpLimitRule", 0x38, "EnumProperty"},
            {"TranslationWarpLimit", 0x3C, "FloatProperty"},
            {"RotationRateWarpRule", 0x40, "EnumProperty"},
            {"FixedWarpRotationRate", 0x44, "FloatProperty"},
            {"bWarpRotation", 0x48, "BoolProperty"},
            {"bWarpTranslation", 0x48, "BoolProperty"},
            {"AttachTargetRoleTag", 0x4C, "StructProperty"},
        }};
    };

    struct FortAnimNotify_MontageMotion
    {
        static constexpr std::string_view Name = "FortAnimNotify_MontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageMotionNotifyTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MontageMotionNotifyTag", 0x38, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_MontageMotion
    {
        static constexpr std::string_view Name = "FortGameplayAbility_MontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageMotionMME = 0xB48;
            static constexpr std::uintptr_t AnimMontage = 0xB50;
            static constexpr std::uintptr_t AnimPlayRate = 0xB58;
            static constexpr std::uintptr_t ServerMaxClientWarpTranslation = 0xB5C;
            static constexpr std::uintptr_t bStopMontageWhenAbilityEnds = 0xB60;
            static constexpr std::uintptr_t bEndAbilityOnMontageEnd = 0xB61;
            static constexpr std::uintptr_t bPlayerMMEOriginatesOnServer = 0xB62;
            static constexpr std::uintptr_t bUseAlternativeWarpingBehavior = 0xB63;
            static constexpr std::uintptr_t bUseServerWarpInfo = 0xB64;
            static constexpr std::uintptr_t bEnableGravity = 0xB65;
            static constexpr std::uintptr_t bMMEPlaysMontage = 0xB66;
            static constexpr std::uintptr_t MontageTask = 0xB70;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MontageMotionMME", 0xB48, "ClassProperty"},
            {"AnimMontage", 0xB50, "ObjectProperty"},
            {"AnimPlayRate", 0xB58, "FloatProperty"},
            {"ServerMaxClientWarpTranslation", 0xB5C, "FloatProperty"},
            {"bStopMontageWhenAbilityEnds", 0xB60, "BoolProperty"},
            {"bEndAbilityOnMontageEnd", 0xB61, "BoolProperty"},
            {"bPlayerMMEOriginatesOnServer", 0xB62, "BoolProperty"},
            {"bUseAlternativeWarpingBehavior", 0xB63, "BoolProperty"},
            {"bUseServerWarpInfo", 0xB64, "BoolProperty"},
            {"bEnableGravity", 0xB65, "BoolProperty"},
            {"bMMEPlaysMontage", 0xB66, "BoolProperty"},
            {"MontageTask", 0xB70, "ObjectProperty"},
        }};
    };

    struct FortMontageMotionDataProvider
    {
        static constexpr std::string_view Name = "FortMontageMotionDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMovementInterface_MontageMotionAbility
    {
        static constexpr std::string_view Name = "FortMovementInterface_MontageMotionAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMovementMode_ExtMontageMotion
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtMontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreControllerDesiredRotation = 0x5B0;
            static constexpr std::uintptr_t bIgnoreZAccumulate = 0x5B1;
            static constexpr std::uintptr_t ServerMaxClientWarpTranslation = 0x5B4;
            static constexpr std::uintptr_t bWarpTranslationWithoutRootMotion = 0x5B8;
            static constexpr std::uintptr_t bDisableTurnInPlaceWhileActive = 0x5B9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIgnoreControllerDesiredRotation", 0x5B0, "BoolProperty"},
            {"bIgnoreZAccumulate", 0x5B1, "BoolProperty"},
            {"ServerMaxClientWarpTranslation", 0x5B4, "FloatProperty"},
            {"bWarpTranslationWithoutRootMotion", 0x5B8, "BoolProperty"},
            {"bDisableTurnInPlaceWhileActive", 0x5B9, "BoolProperty"},
        }};
    };

    struct FortMovementMode_ExtSynchronizedMontageMotion
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtSynchronizedMontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtMontageMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreControllerDesiredRotation = 0x5B0;
            static constexpr std::uintptr_t bIgnoreZAccumulate = 0x5B1;
            static constexpr std::uintptr_t ServerMaxClientWarpTranslation = 0x5B4;
            static constexpr std::uintptr_t bWarpTranslationWithoutRootMotion = 0x5B8;
            static constexpr std::uintptr_t bDisableTurnInPlaceWhileActive = 0x5B9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIgnoreControllerDesiredRotation", 0x5B0, "BoolProperty"},
            {"bIgnoreZAccumulate", 0x5B1, "BoolProperty"},
            {"ServerMaxClientWarpTranslation", 0x5B4, "FloatProperty"},
            {"bWarpTranslationWithoutRootMotion", 0x5B8, "BoolProperty"},
            {"bDisableTurnInPlaceWhileActive", 0x5B9, "BoolProperty"},
        }};
    };

    struct FortMovementMode_MontageMotionRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_MontageMotionRuntimeData";
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

    struct FortMovementMode_SynchronizedMontageMotionRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SynchronizedMontageMotionRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_MontageMotionRuntimeData";
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

    struct FortPawnComponent_MontageMotion
    {
        static constexpr std::string_view Name = "FortPawnComponent_MontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMMERequestPlayMontageDelegate = 0xC8;
            static constexpr std::uintptr_t OnMMERequestSynchronizedMontageMotionDataDelegate = 0xD8;
            static constexpr std::uintptr_t OnMMEActivatedDelegate = 0xE8;
            static constexpr std::uintptr_t OnMMEDeactivatedDelegate = 0xF8;
            static constexpr std::uintptr_t OnMontageMotionNotifyWindowStarted = 0x108;
            static constexpr std::uintptr_t OnMontageMotionNotifyWindowEnded = 0x118;
            static constexpr std::uintptr_t OnMontageMotionNotifyEvent = 0x128;
            static constexpr std::uintptr_t OnConfigureMontageMotionWarpInfo = 0x138;
            static constexpr std::uintptr_t OnConfigureMontageMotionAlternativeWarpInfo = 0x144;
            static constexpr std::uintptr_t CurrentMMEData = 0x150;
            static constexpr std::uintptr_t CurrentSynchronizedMontageMotionMMEData = 0x168;
            static constexpr std::uintptr_t DefaultDesiredTranslationDistanceToWarpTarget = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnMMERequestPlayMontageDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnMMERequestSynchronizedMontageMotionDataDelegate", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnMMEActivatedDelegate", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnMMEDeactivatedDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnMontageMotionNotifyWindowStarted", 0x108, "MulticastInlineDelegateProperty"},
            {"OnMontageMotionNotifyWindowEnded", 0x118, "MulticastInlineDelegateProperty"},
            {"OnMontageMotionNotifyEvent", 0x128, "MulticastInlineDelegateProperty"},
            {"OnConfigureMontageMotionWarpInfo", 0x138, "DelegateProperty"},
            {"OnConfigureMontageMotionAlternativeWarpInfo", 0x144, "DelegateProperty"},
            {"CurrentMMEData", 0x150, "StructProperty"},
            {"CurrentSynchronizedMontageMotionMMEData", 0x168, "StructProperty"},
            {"DefaultDesiredTranslationDistanceToWarpTarget", 0x188, "StructProperty"},
        }};
    };

}

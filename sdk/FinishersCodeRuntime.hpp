#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FinishersCodeRuntime
{
    struct FortFinisherConfiguration
    {
        static constexpr std::string_view Name = "FortFinisherConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherAbility = 0x28;
            static constexpr std::uintptr_t SceneOrigin = 0x30;
            static constexpr std::uintptr_t SceneOriginAlpha = 0x34;
            static constexpr std::uintptr_t SceneOrientation = 0x38;
            static constexpr std::uintptr_t SceneActors = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FinisherAbility", 0x28, "ClassProperty"},
            {"SceneOrigin", 0x30, "EnumProperty"},
            {"SceneOriginAlpha", 0x34, "FloatProperty"},
            {"SceneOrientation", 0x38, "EnumProperty"},
            {"SceneActors", 0x40, "ArrayProperty"},
        }};
    };

    struct FortFinisherConfiguration_SynchronizedMontageMotion
    {
        static constexpr std::string_view Name = "FortFinisherConfiguration_SynchronizedMontageMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFinisherConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherMMEByRole = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinisherMMEByRole", 0x50, "MapProperty"},
        }};
    };

    struct FortFinisherSubsystem
    {
        static constexpr std::string_view Name = "FortFinisherSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherConfigurations = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinisherConfigurations", 0x30, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddFinisherConfiguration
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddFinisherConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherConfigurations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinisherConfigurations", 0x28, "ArrayProperty"},
        }};
    };

    struct FortGameplayAbility_Finisher
    {
        static constexpr std::string_view Name = "FortGameplayAbility_Finisher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherConfiguration = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinisherConfiguration", 0xB40, "ObjectProperty"},
        }};
    };

    struct FortGameplayAbility_SynchronizedFinisher
    {
        static constexpr std::string_view Name = "FortGameplayAbility_SynchronizedFinisher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Finisher";
        struct Offsets
        {
            static constexpr std::uintptr_t FinisherScene = 0xBA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinisherScene", 0xBA8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtSynchronizedFinisher
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtSynchronizedFinisher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtSynchronizedMontageMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t bHolsterWeapon = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHolsterWeapon", 0x5D0, "BoolProperty"},
        }};
    };

    struct FortMovementMode_SynchronizedFinisherRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SynchronizedFinisherRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_SynchronizedMontageMotionRuntimeData";
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

    struct FortPawnComponent_Finisher
    {
        static constexpr std::string_view Name = "FortPawnComponent_Finisher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTargetChanged = 0xC0;
            static constexpr std::uintptr_t Targeting = 0xD0;
            static constexpr std::uintptr_t FinisherInputComponent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTargetChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"Targeting", 0xD0, "StructProperty"},
            {"FinisherInputComponent", 0x108, "ObjectProperty"},
        }};
    };

}

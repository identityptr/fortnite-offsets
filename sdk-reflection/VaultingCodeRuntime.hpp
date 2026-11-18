#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VaultingCodeRuntime
{
    struct FortMovementMode_ExtLogicHurdle
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicHurdle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicTraversalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HurdleTag = 0x280;
            static constexpr std::uintptr_t HurdleStartedTag = 0x2A0;
            static constexpr std::uintptr_t HurdleFinishedTag = 0x2A8;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x2C8;
            static constexpr std::uintptr_t DestroyPropsSweepDistance = 0x2CC;
            static constexpr std::uintptr_t DestroyPropsWindowSillOffsetDistance = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HurdleTag", 0x280, "StructProperty"},
            {"HurdleStartedTag", 0x2A0, "StructProperty"},
            {"HurdleFinishedTag", 0x2A8, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x2C8, "StructProperty"},
            {"DestroyPropsSweepDistance", 0x2CC, "FloatProperty"},
            {"DestroyPropsWindowSillOffsetDistance", 0x2D0, "FloatProperty"},
        }};
    };

    struct FortMovementMode_HurdleRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_HurdleRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_TraversalBaseRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x100, "EnumProperty"},
        }};
    };

    struct HurdleCameraMode
    {
        static constexpr std::string_view Name = "HurdleCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t StartCameraOriginInterpSpeed = 0x2080;
            static constexpr std::uintptr_t ApexCameraOriginInterpSpeed = 0x2098;
            static constexpr std::uintptr_t EndCameraOriginInterpSpeed = 0x20B0;
            static constexpr std::uintptr_t ConstantSpeedCameraTrackInterpolationExponent = 0x20C8;
            static constexpr std::uintptr_t CameraOriginVerticalThreshold = 0x20CC;
            static constexpr std::uintptr_t FallingVerticalInterpSpeed = 0x20D0;
            static constexpr std::uintptr_t FallSpeedThreshold = 0x20D4;
            static constexpr std::uintptr_t NonSprintFOV = 0x20D8;
            static constexpr std::uintptr_t bOverrideSpectatorCamera = 0x20DC;
            static constexpr std::uintptr_t HurdleTargetingData = 0x20E0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"StartCameraOriginInterpSpeed", 0x2080, "StructProperty"},
            {"ApexCameraOriginInterpSpeed", 0x2098, "StructProperty"},
            {"EndCameraOriginInterpSpeed", 0x20B0, "StructProperty"},
            {"ConstantSpeedCameraTrackInterpolationExponent", 0x20C8, "FloatProperty"},
            {"CameraOriginVerticalThreshold", 0x20CC, "FloatProperty"},
            {"FallingVerticalInterpSpeed", 0x20D0, "FloatProperty"},
            {"FallSpeedThreshold", 0x20D4, "FloatProperty"},
            {"NonSprintFOV", 0x20D8, "FloatProperty"},
            {"bOverrideSpectatorCamera", 0x20DC, "BoolProperty"},
            {"HurdleTargetingData", 0x20E0, "StructProperty"},
        }};
    };

    struct HurdleComponent
    {
        static constexpr std::string_view Name = "HurdleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeExtension = 0xD8;
            static constexpr std::uintptr_t HurdleEnabled = 0xE8;
            static constexpr std::uintptr_t AutoHurdleEnabled = 0x110;
            static constexpr std::uintptr_t HurdleInputConfig = 0x148;
            static constexpr std::uintptr_t HurdleInputConfigCache = 0xA50;
            static constexpr std::uintptr_t CachedBotController = 0xB68;
            static constexpr std::uintptr_t ReplayHurdleTargetingData = 0xCB8;
            static constexpr std::uintptr_t ParallelTargetingData = 0xD28;
            static constexpr std::uintptr_t HighlightPositionOffset = 0xEB0;
            static constexpr std::uintptr_t HighlightNormalMultiplier = 0xEC8;
            static constexpr std::uintptr_t HighlightScale = 0xEE0;
            static constexpr std::uintptr_t CanStartHurdleTag = 0xEF8;
            static constexpr std::uintptr_t bShouldShowHurdleIndicator = 0xEFF;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MovementModeExtension", 0xD8, "ClassProperty"},
            {"HurdleEnabled", 0xE8, "StructProperty"},
            {"AutoHurdleEnabled", 0x110, "StructProperty"},
            {"HurdleInputConfig", 0x148, "StructProperty"},
            {"HurdleInputConfigCache", 0xA50, "StructProperty"},
            {"CachedBotController", 0xB68, "ObjectProperty"},
            {"ReplayHurdleTargetingData", 0xCB8, "StructProperty"},
            {"ParallelTargetingData", 0xD28, "StructProperty"},
            {"HighlightPositionOffset", 0xEB0, "StructProperty"},
            {"HighlightNormalMultiplier", 0xEC8, "StructProperty"},
            {"HighlightScale", 0xEE0, "StructProperty"},
            {"CanStartHurdleTag", 0xEF8, "StructProperty"},
            {"bShouldShowHurdleIndicator", 0xEFF, "BoolProperty"},
        }};
    };

    struct HurdleLibrary
    {
        static constexpr std::string_view Name = "HurdleLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HurdleNavLinkProcessor
    {
        static constexpr std::string_view Name = "HurdleNavLinkProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCustomNavLinkProcessor";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

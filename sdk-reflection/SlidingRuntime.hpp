#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlidingRuntime
{
    struct FortControllerComponent_Sliding
    {
        static constexpr std::string_view Name = "FortControllerComponent_Sliding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeExtension = 0xD0;
            static constexpr std::uintptr_t SlidingFeedback_GA = 0xD8;
            static constexpr std::uintptr_t DisableSlideGameplayEffectClass = 0xE0;
            static constexpr std::uintptr_t AllowSlidingFromSlopeSliding = 0xE8;
            static constexpr std::uintptr_t InputInstantSlideSources = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MovementModeExtension", 0xD0, "ClassProperty"},
            {"SlidingFeedback_GA", 0xD8, "ClassProperty"},
            {"DisableSlideGameplayEffectClass", 0xE0, "ClassProperty"},
            {"AllowSlidingFromSlopeSliding", 0xE8, "StructProperty"},
            {"InputInstantSlideSources", 0x1D8, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_Sliding
    {
        static constexpr std::string_view Name = "FortMovementMode_Sliding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t DashPeriod = 0x1B8;
            static constexpr std::uintptr_t SlidingAnimLayer = 0x1E0;
            static constexpr std::uintptr_t GCSliding = 0x1E8;
            static constexpr std::uintptr_t GCCameraShakeSliding = 0x1EC;
            static constexpr std::uintptr_t GCSpeedLines = 0x1F0;
            static constexpr std::uintptr_t EventSlidingStarted = 0x1F4;
            static constexpr std::uintptr_t SlidingBlockOriginalGATag = 0x1F8;
            static constexpr std::uintptr_t CameraModeModifier = 0x200;
            static constexpr std::uintptr_t CameraStartShake = 0x208;
            static constexpr std::uintptr_t FNMaterialsCollection = 0x210;
            static constexpr std::uintptr_t RemoveSpeedLinesAt = 0x218;
            static constexpr std::uintptr_t AddSpeedLinesAt = 0x240;
            static constexpr std::uintptr_t CanSlopeSlide = 0x268;
            static constexpr std::uintptr_t ExitIntoSlopeSlidingOnEndTags = 0x290;
            static constexpr std::uintptr_t CurrentlyLinkedSlidingLayer = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"DashPeriod", 0x1B8, "StructProperty"},
            {"SlidingAnimLayer", 0x1E0, "ClassProperty"},
            {"GCSliding", 0x1E8, "StructProperty"},
            {"GCCameraShakeSliding", 0x1EC, "StructProperty"},
            {"GCSpeedLines", 0x1F0, "StructProperty"},
            {"EventSlidingStarted", 0x1F4, "StructProperty"},
            {"SlidingBlockOriginalGATag", 0x1F8, "StructProperty"},
            {"CameraModeModifier", 0x200, "ClassProperty"},
            {"CameraStartShake", 0x208, "ClassProperty"},
            {"FNMaterialsCollection", 0x210, "ObjectProperty"},
            {"RemoveSpeedLinesAt", 0x218, "StructProperty"},
            {"AddSpeedLinesAt", 0x240, "StructProperty"},
            {"CanSlopeSlide", 0x268, "StructProperty"},
            {"ExitIntoSlopeSlidingOnEndTags", 0x290, "StructProperty"},
            {"CurrentlyLinkedSlidingLayer", 0x558, "ClassProperty"},
        }};
    };

    struct FortMovementMode_SlidingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SlidingRuntimeData";
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

}

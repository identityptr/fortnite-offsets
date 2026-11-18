#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FootstepVisualizationRuntime
{
    struct FortGameStateComponent_FootstepVisualization
    {
        static constexpr std::string_view Name = "FortGameStateComponent_FootstepVisualization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FootstepFxDataChannel = 0xC0;
            static constexpr std::uintptr_t EnableFootstepGeneratorDeathEvent = 0xC8;
            static constexpr std::uintptr_t OnFootstepGeneratorDeath = 0xF0;
            static constexpr std::uintptr_t PawnComponents = 0x1B0;
            static constexpr std::uintptr_t SimulatedFootstepMaxTicksPerFrame = 0x1C0;
            static constexpr std::uintptr_t RegisteredFootstepCapacity = 0x1F0;
            static constexpr std::uintptr_t RegisteredFootstepMaxAge = 0x218;
            static constexpr std::uintptr_t FootstepRegistry = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FootstepFxDataChannel", 0xC0, "ObjectProperty"},
            {"EnableFootstepGeneratorDeathEvent", 0xC8, "StructProperty"},
            {"OnFootstepGeneratorDeath", 0xF0, "MulticastInlineDelegateProperty"},
            {"PawnComponents", 0x1B0, "ArrayProperty"},
            {"SimulatedFootstepMaxTicksPerFrame", 0x1C0, "StructProperty"},
            {"RegisteredFootstepCapacity", 0x1F0, "StructProperty"},
            {"RegisteredFootstepMaxAge", 0x218, "StructProperty"},
            {"FootstepRegistry", 0x240, "ArrayProperty"},
        }};
    };

    struct FortPawnComponent_FootstepVisualization
    {
        static constexpr std::string_view Name = "FortPawnComponent_FootstepVisualization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftFootSocket = 0xC8;
            static constexpr std::uintptr_t LeftFootSocketToFootprint = 0xD0;
            static constexpr std::uintptr_t RightFootSocket = 0x130;
            static constexpr std::uintptr_t RightFootSocketToFootprint = 0x140;
            static constexpr std::uintptr_t FixupFootstepBelowCapsuleDistance = 0x1A0;
            static constexpr std::uintptr_t FixupFootstepYawToleranceDegrees = 0x1A8;
            static constexpr std::uintptr_t FixupFootstepTraceProfile = 0x1B0;
            static constexpr std::uintptr_t FixupFootstepMeshForwardAxis = 0x1B4;
            static constexpr std::uintptr_t DistanceBetweenStepsDefault = 0x1B8;
            static constexpr std::uintptr_t DistanceBetweenStepsCrouching = 0x1E0;
            static constexpr std::uintptr_t DistanceBetweenStepsSprinting = 0x208;
            static constexpr std::uintptr_t NextFootstepDeadzoneDistance = 0x230;
            static constexpr std::uintptr_t VisualizationExclusionTable = 0x258;
            static constexpr std::uintptr_t SurfaceInclusionTable = 0x260;
            static constexpr std::uintptr_t GameStateComponent = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"LeftFootSocket", 0xC8, "NameProperty"},
            {"LeftFootSocketToFootprint", 0xD0, "StructProperty"},
            {"RightFootSocket", 0x130, "NameProperty"},
            {"RightFootSocketToFootprint", 0x140, "StructProperty"},
            {"FixupFootstepBelowCapsuleDistance", 0x1A0, "DoubleProperty"},
            {"FixupFootstepYawToleranceDegrees", 0x1A8, "DoubleProperty"},
            {"FixupFootstepTraceProfile", 0x1B0, "NameProperty"},
            {"FixupFootstepMeshForwardAxis", 0x1B4, "ByteProperty"},
            {"DistanceBetweenStepsDefault", 0x1B8, "StructProperty"},
            {"DistanceBetweenStepsCrouching", 0x1E0, "StructProperty"},
            {"DistanceBetweenStepsSprinting", 0x208, "StructProperty"},
            {"NextFootstepDeadzoneDistance", 0x230, "StructProperty"},
            {"VisualizationExclusionTable", 0x258, "ObjectProperty"},
            {"SurfaceInclusionTable", 0x260, "ObjectProperty"},
            {"GameStateComponent", 0x268, "ObjectProperty"},
        }};
    };

}

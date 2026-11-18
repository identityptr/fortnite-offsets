#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CorruptionGameplayCodeRuntime
{
    struct CorruptionCoverageMap
    {
        static constexpr std::string_view Name = "CorruptionCoverageMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CubeMovementStaticPath
    {
        static constexpr std::string_view Name = "CubeMovementStaticPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScriptedObjectMovement_StaticPath";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerationZTraceHeight = 0x410;
            static constexpr std::uintptr_t CubeSpacingFactor = 0x414;
            static constexpr std::uintptr_t CubeAngleLimitDegrees = 0x418;
            static constexpr std::uintptr_t CorruptionSequence = 0x420;
            static constexpr std::uintptr_t TravelerCorruptionStepPercentOverrides = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GenerationZTraceHeight", 0x410, "FloatProperty"},
            {"CubeSpacingFactor", 0x414, "FloatProperty"},
            {"CubeAngleLimitDegrees", 0x418, "FloatProperty"},
            {"CorruptionSequence", 0x420, "ObjectProperty"},
            {"TravelerCorruptionStepPercentOverrides", 0x430, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_WarEffort
    {
        static constexpr std::string_view Name = "FortAthenaMutator_WarEffort";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshNetworkMetadata = 0x418;
            static constexpr std::uintptr_t WeaponChoices = 0x438;
            static constexpr std::uintptr_t PreloadedItemList = 0x448;
            static constexpr std::uintptr_t bCanPreloadItems = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshNetworkMetadata", 0x418, "StructProperty"},
            {"WeaponChoices", 0x438, "ArrayProperty"},
            {"PreloadedItemList", 0x448, "ArrayProperty"},
            {"bCanPreloadItems", 0x458, "BoolProperty"},
        }};
    };

    struct FortCorruptionSequenceData
    {
        static constexpr std::string_view Name = "FortCorruptionSequenceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CorruptionStartEvents = 0x28;
            static constexpr std::uintptr_t CorruptionPauseEvents = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CorruptionStartEvents", 0x28, "ArrayProperty"},
            {"CorruptionPauseEvents", 0x38, "ArrayProperty"},
        }};
    };

    struct WarEffortFundingLibrary
    {
        static constexpr std::string_view Name = "WarEffortFundingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WarEffortMeshActor
    {
        static constexpr std::string_view Name = "WarEffortMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshNetworkComponent = 0x278;
            static constexpr std::uintptr_t ActiveFundedItems = 0x280;
            static constexpr std::uintptr_t ActiveTryBeforeYouBuyItems = 0x290;
            static constexpr std::uintptr_t CurrentFundingData = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshNetworkComponent", 0x278, "ObjectProperty"},
            {"ActiveFundedItems", 0x280, "ArrayProperty"},
            {"ActiveTryBeforeYouBuyItems", 0x290, "ArrayProperty"},
            {"CurrentFundingData", 0x2A0, "ArrayProperty"},
        }};
    };

}

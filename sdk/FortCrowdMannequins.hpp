#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortCrowdMannequins
{
    struct FortCrowdMannequinComponent
    {
        static constexpr std::string_view Name = "FortCrowdMannequinComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bParticipatesInCrowdRendering = 0xC0;
            static constexpr std::uintptr_t ISKMDataAssetOverride = 0xC8;
            static constexpr std::uintptr_t InitialAnimationIndex = 0xD0;
            static constexpr std::uintptr_t ActorTypeRotationCorrection = 0xD8;
            static constexpr std::uintptr_t Handle = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bParticipatesInCrowdRendering", 0xC0, "BoolProperty"},
            {"ISKMDataAssetOverride", 0xC8, "ObjectProperty"},
            {"InitialAnimationIndex", 0xD0, "IntProperty"},
            {"ActorTypeRotationCorrection", 0xD8, "StructProperty"},
            {"Handle", 0xF8, "StructProperty"},
        }};
    };

    struct FortCrowdMannequinConfig
    {
        static constexpr std::string_view Name = "FortCrowdMannequinConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationHandlerClass = 0x28;
            static constexpr std::uintptr_t LODParams = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VisualizationHandlerClass", 0x28, "ClassProperty"},
            {"LODParams", 0x30, "StructProperty"},
        }};
    };

    struct FortCrowdMannequinSubsystem
    {
        static constexpr std::string_view Name = "FortCrowdMannequinSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Instances = 0x48;
            static constexpr std::uintptr_t VisualizerActor = 0x68;
            static constexpr std::uintptr_t WorldConfig = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Instances", 0x48, "MapProperty"},
            {"VisualizerActor", 0x68, "ObjectProperty"},
            {"WorldConfig", 0x70, "ObjectProperty"},
        }};
    };

    struct FortCrowdMannequinVisualizationHandler_ISKM
    {
        static constexpr std::string_view Name = "FortCrowdMannequinVisualizationHandler_ISKM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterVisualizationHandler_ISKM";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationLookupChooser = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VisualizationLookupChooser", 0x28, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_FortCrowdMannequinsSetup
    {
        static constexpr std::string_view Name = "GameFeatureAction_FortCrowdMannequinsSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x28;
            static constexpr std::uintptr_t MannequinClass = 0x30;
            static constexpr std::uintptr_t MannequinComponentClass = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Config", 0x28, "ObjectProperty"},
            {"MannequinClass", 0x30, "SoftClassProperty"},
            {"MannequinComponentClass", 0x50, "SoftClassProperty"},
        }};
    };

}

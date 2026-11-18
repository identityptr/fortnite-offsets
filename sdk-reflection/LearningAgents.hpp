#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LearningAgents
{
    struct LearningAgentsActionModifier
    {
        static constexpr std::string_view Name = "LearningAgentsActionModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsActionObject
    {
        static constexpr std::string_view Name = "LearningAgentsActionObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsActionSchema
    {
        static constexpr std::string_view Name = "LearningAgentsActionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsActions
    {
        static constexpr std::string_view Name = "LearningAgentsActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsController
    {
        static constexpr std::string_view Name = "LearningAgentsController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
        }};
    };

    struct LearningAgentsCritic
    {
        static constexpr std::string_view Name = "LearningAgentsCritic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t Policy = 0x50;
            static constexpr std::uintptr_t CriticNetwork = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"Policy", 0x50, "ObjectProperty"},
            {"CriticNetwork", 0x58, "ObjectProperty"},
        }};
    };

    struct LearningAgentsDepthMapComponent
    {
        static constexpr std::string_view Name = "LearningAgentsDepthMapComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawDepthFrustum = 0xC0;
            static constexpr std::uintptr_t DepthMapConfig = 0xC8;
            static constexpr std::uintptr_t DepthRaysBatchSize = 0x100;
            static constexpr std::uintptr_t CollisionChannel = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bDrawDepthFrustum", 0xC0, "BoolProperty"},
            {"DepthMapConfig", 0xC8, "StructProperty"},
            {"DepthRaysBatchSize", 0x100, "IntProperty"},
            {"CollisionChannel", 0x104, "ByteProperty"},
        }};
    };

    struct LearningAgentsFlowMatching
    {
        static constexpr std::string_view Name = "LearningAgentsFlowMatching";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t EncoderNetwork = 0x50;
            static constexpr std::uintptr_t DenoiserNetwork = 0x58;
            static constexpr std::uintptr_t DecoderNetwork = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"EncoderNetwork", 0x50, "ObjectProperty"},
            {"DenoiserNetwork", 0x58, "ObjectProperty"},
            {"DecoderNetwork", 0x60, "ObjectProperty"},
        }};
    };

    struct LearningAgentsInteractor
    {
        static constexpr std::string_view Name = "LearningAgentsInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservationSchema = 0x48;
            static constexpr std::uintptr_t ObservationSchemaElement = 0x50;
            static constexpr std::uintptr_t ActionSchema = 0x58;
            static constexpr std::uintptr_t ActionSchemaElement = 0x60;
            static constexpr std::uintptr_t ObservationObject = 0x68;
            static constexpr std::uintptr_t ObservationObjectElements = 0x70;
            static constexpr std::uintptr_t ActionModifier = 0x80;
            static constexpr std::uintptr_t ActionModifierElements = 0x88;
            static constexpr std::uintptr_t ActionObject = 0x98;
            static constexpr std::uintptr_t ActionObjectElements = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ObservationSchema", 0x48, "ObjectProperty"},
            {"ObservationSchemaElement", 0x50, "StructProperty"},
            {"ActionSchema", 0x58, "ObjectProperty"},
            {"ActionSchemaElement", 0x60, "StructProperty"},
            {"ObservationObject", 0x68, "ObjectProperty"},
            {"ObservationObjectElements", 0x70, "ArrayProperty"},
            {"ActionModifier", 0x80, "ObjectProperty"},
            {"ActionModifierElements", 0x88, "ArrayProperty"},
            {"ActionObject", 0x98, "ObjectProperty"},
            {"ActionObjectElements", 0xA0, "ArrayProperty"},
        }};
    };

    struct LearningAgentsManager
    {
        static constexpr std::string_view Name = "LearningAgentsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAgentNum = 0xC0;
            static constexpr std::uintptr_t Agents = 0xC8;
            static constexpr std::uintptr_t Listeners = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxAgentNum", 0xC0, "IntProperty"},
            {"Agents", 0xC8, "ArrayProperty"},
            {"Listeners", 0xD8, "ArrayProperty"},
        }};
    };

    struct LearningAgentsManagerListener
    {
        static constexpr std::string_view Name = "LearningAgentsManagerListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSetup = 0x28;
            static constexpr std::uintptr_t Manager = 0x30;
            static constexpr std::uintptr_t VisualLoggerObjects = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsSetup", 0x28, "BoolProperty"},
            {"Manager", 0x30, "ObjectProperty"},
            {"VisualLoggerObjects", 0x38, "MapProperty"},
        }};
    };

    struct LearningAgentsNeuralNetwork
    {
        static constexpr std::string_view Name = "LearningAgentsNeuralNetwork";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NeuralNetworkData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NeuralNetworkData", 0x28, "ObjectProperty"},
        }};
    };

    struct LearningAgentsObservationObject
    {
        static constexpr std::string_view Name = "LearningAgentsObservationObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsObservationSchema
    {
        static constexpr std::string_view Name = "LearningAgentsObservationSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsObservations
    {
        static constexpr std::string_view Name = "LearningAgentsObservations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsPolicy
    {
        static constexpr std::string_view Name = "LearningAgentsPolicy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t EncoderNetwork = 0x50;
            static constexpr std::uintptr_t PolicyNetwork = 0x58;
            static constexpr std::uintptr_t DecoderNetwork = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"EncoderNetwork", 0x50, "ObjectProperty"},
            {"PolicyNetwork", 0x58, "ObjectProperty"},
            {"DecoderNetwork", 0x60, "ObjectProperty"},
        }};
    };

    struct LearningAgentsVisualLoggerObject
    {
        static constexpr std::string_view Name = "LearningAgentsVisualLoggerObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

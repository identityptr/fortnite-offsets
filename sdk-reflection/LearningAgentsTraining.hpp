#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LearningAgentsTraining
{
    struct LearningAgentsCommunicatorLibrary
    {
        static constexpr std::string_view Name = "LearningAgentsCommunicatorLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsCompletions
    {
        static constexpr std::string_view Name = "LearningAgentsCompletions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsEntitiesManagerComponent
    {
        static constexpr std::string_view Name = "LearningAgentsEntitiesManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Entities = 0xC8;
            static constexpr std::uintptr_t EntitiesPool = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entities", 0xC8, "ArrayProperty"},
            {"EntitiesPool", 0xD8, "MapProperty"},
        }};
    };

    struct LearningAgentsEntityInterface
    {
        static constexpr std::string_view Name = "LearningAgentsEntityInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsEntityTrainingInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsEntityTrainingInterface
    {
        static constexpr std::string_view Name = "LearningAgentsEntityTrainingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsFlowMatchingTrainer
    {
        static constexpr std::string_view Name = "LearningAgentsFlowMatchingTrainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t Model = 0x50;
            static constexpr std::uintptr_t bIsTraining = 0x58;
            static constexpr std::uintptr_t bHasTrainingFailed = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"Model", 0x50, "ObjectProperty"},
            {"bIsTraining", 0x58, "BoolProperty"},
            {"bHasTrainingFailed", 0x59, "BoolProperty"},
        }};
    };

    struct LearningAgentsGymBase
    {
        static constexpr std::string_view Name = "LearningAgentsGymBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGymInitialized = 0x278;
            static constexpr std::uintptr_t OnBeginGymReset = 0x288;
            static constexpr std::uintptr_t OnPostGymReset = 0x298;
            static constexpr std::uintptr_t RandomSeed = 0x2A8;
            static constexpr std::uintptr_t LearningComponents = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnGymInitialized", 0x278, "MulticastInlineDelegateProperty"},
            {"OnBeginGymReset", 0x288, "MulticastInlineDelegateProperty"},
            {"OnPostGymReset", 0x298, "MulticastInlineDelegateProperty"},
            {"RandomSeed", 0x2A8, "IntProperty"},
            {"LearningComponents", 0x2C0, "ArrayProperty"},
        }};
    };

    struct LearningAgentsGymSimple
    {
        static constexpr std::string_view Name = "LearningAgentsGymSimple";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsGymBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SimpleGymFloor = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimpleGymFloor", 0x2D0, "ObjectProperty"},
        }};
    };

    struct LearningAgentsGymsManager
    {
        static constexpr std::string_view Name = "LearningAgentsGymsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeed = 0x278;
            static constexpr std::uintptr_t GymsSpacing = 0x27C;
            static constexpr std::uintptr_t GymTemplates = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RandomSeed", 0x278, "IntProperty"},
            {"GymsSpacing", 0x27C, "FloatProperty"},
            {"GymTemplates", 0x280, "ArrayProperty"},
        }};
    };

    struct LearningAgentsImitationTrainer
    {
        static constexpr std::string_view Name = "LearningAgentsImitationTrainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t Policy = 0x50;
            static constexpr std::uintptr_t bIsTraining = 0x58;
            static constexpr std::uintptr_t bHasTrainingFailed = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"Policy", 0x50, "ObjectProperty"},
            {"bIsTraining", 0x58, "BoolProperty"},
            {"bHasTrainingFailed", 0x59, "BoolProperty"},
        }};
    };

    struct LearningAgentsLearningComponentInterface
    {
        static constexpr std::string_view Name = "LearningAgentsLearningComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsPPOTrainer
    {
        static constexpr std::string_view Name = "LearningAgentsPPOTrainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactor = 0x48;
            static constexpr std::uintptr_t TrainingEnvironment = 0x50;
            static constexpr std::uintptr_t Policy = 0x58;
            static constexpr std::uintptr_t Critic = 0x60;
            static constexpr std::uintptr_t bIsTraining = 0x68;
            static constexpr std::uintptr_t bHasTrainingFailed = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Interactor", 0x48, "ObjectProperty"},
            {"TrainingEnvironment", 0x50, "ObjectProperty"},
            {"Policy", 0x58, "ObjectProperty"},
            {"Critic", 0x60, "ObjectProperty"},
            {"bIsTraining", 0x68, "BoolProperty"},
            {"bHasTrainingFailed", 0x69, "BoolProperty"},
        }};
    };

    struct LearningAgentsRecordBlob
    {
        static constexpr std::string_view Name = "LearningAgentsRecordBlob";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservationData = 0x28;
            static constexpr std::uintptr_t ActionData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObservationData", 0x28, "ArrayProperty"},
            {"ActionData", 0x38, "ArrayProperty"},
        }};
    };

    struct LearningAgentsRecorder
    {
        static constexpr std::string_view Name = "LearningAgentsRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRecordingBegin = 0x48;
            static constexpr std::uintptr_t OnRecordingEnd = 0x58;
            static constexpr std::uintptr_t Interactor = 0x68;
            static constexpr std::uintptr_t Recording = 0x70;
            static constexpr std::uintptr_t bIsRecording = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnRecordingBegin", 0x48, "MulticastInlineDelegateProperty"},
            {"OnRecordingEnd", 0x58, "MulticastInlineDelegateProperty"},
            {"Interactor", 0x68, "ObjectProperty"},
            {"Recording", 0x70, "ObjectProperty"},
            {"bIsRecording", 0x78, "BoolProperty"},
        }};
    };

    struct LearningAgentsRecording
    {
        static constexpr std::string_view Name = "LearningAgentsRecording";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordingFile = 0x28;
            static constexpr std::uintptr_t RecordingFolder = 0x38;
            static constexpr std::uintptr_t NewTag = 0x48;
            static constexpr std::uintptr_t NewSchemaName = 0x4C;
            static constexpr std::uintptr_t SchemaFile = 0x50;
            static constexpr std::uintptr_t Schemas = 0x60;
            static constexpr std::uintptr_t Records = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RecordingFile", 0x28, "StructProperty"},
            {"RecordingFolder", 0x38, "StructProperty"},
            {"NewTag", 0x48, "StructProperty"},
            {"NewSchemaName", 0x4C, "NameProperty"},
            {"SchemaFile", 0x50, "StructProperty"},
            {"Schemas", 0x60, "MapProperty"},
            {"Records", 0x70, "ArrayProperty"},
        }};
    };

    struct LearningAgentsRewards
    {
        static constexpr std::string_view Name = "LearningAgentsRewards";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsTrainingEnvironment
    {
        static constexpr std::string_view Name = "LearningAgentsTrainingEnvironment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
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

}

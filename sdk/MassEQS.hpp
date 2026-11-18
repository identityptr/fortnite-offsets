#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassEQS
{
    struct EnvQueryItemType_MassEntityHandle
    {
        static constexpr std::string_view Name = "EnvQueryItemType_MassEntityHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassEQSBlueprintLibrary
    {
        static constexpr std::string_view Name = "MassEQSBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassEQSRequestInterface
    {
        static constexpr std::string_view Name = "MassEQSRequestInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassEQSSubsystem
    {
        static constexpr std::string_view Name = "MassEQSSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassEnvQueryGenerator
    {
        static constexpr std::string_view Name = "MassEnvQueryGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct MassEnvQueryGeneratorProcessor_MassEntityHandles
    {
        static constexpr std::string_view Name = "MassEnvQueryGeneratorProcessor_MassEntityHandles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEnvQueryProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassEnvQueryGenerator_MassEntityHandles
    {
        static constexpr std::string_view Name = "MassEnvQueryGenerator_MassEntityHandles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchRadius = 0x78;
            static constexpr std::uintptr_t SearchCenter = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SearchRadius", 0x78, "StructProperty"},
            {"SearchCenter", 0xB0, "ClassProperty"},
        }};
    };

    struct MassEnvQueryProcessorBase
    {
        static constexpr std::string_view Name = "MassEnvQueryProcessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassEnvQueryTest
    {
        static constexpr std::string_view Name = "MassEnvQueryTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct MassEnvQueryTestProcessor_MassEntityTags
    {
        static constexpr std::string_view Name = "MassEnvQueryTestProcessor_MassEntityTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEnvQueryProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassEnvQueryTest_MassEntityTags
    {
        static constexpr std::string_view Name = "MassEnvQueryTest_MassEntityTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TagTestMode = 0x220;
            static constexpr std::uintptr_t Tags = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagTestMode", 0x220, "EnumProperty"},
            {"Tags", 0x228, "ArrayProperty"},
        }};
    };

}

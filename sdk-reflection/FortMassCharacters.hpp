#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortMassCharacters
{
    struct FortMassCharacterComponent
    {
        static constexpr std::string_view Name = "FortMassCharacterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityConfigAsset = 0xC0;
            static constexpr std::uintptr_t NetID = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityConfigAsset", 0xC0, "ObjectProperty"},
            {"NetID", 0x100, "StructProperty"},
        }};
    };

    struct FortMassCharacterVisInitProcessor
    {
        static constexpr std::string_view Name = "FortMassCharacterVisInitProcessor";
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

    struct FortMassCharacterVisRegisterProcessor
    {
        static constexpr std::string_view Name = "FortMassCharacterVisRegisterProcessor";
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

    struct FortMassCharacterVisRegistry
    {
        static constexpr std::string_view Name = "FortMassCharacterVisRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedVisObjects = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedVisObjects", 0x278, "ArrayProperty"},
        }};
    };

    struct FortMassCharacterVisReplicationTrait
    {
        static constexpr std::string_view Name = "FortMassCharacterVisReplicationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

    struct FortMassCharacterVisualizationHandler_ISKM
    {
        static constexpr std::string_view Name = "FortMassCharacterVisualizationHandler_ISKM";
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

    struct FortMassCharacterVisualizationHandler_VAT
    {
        static constexpr std::string_view Name = "FortMassCharacterVisualizationHandler_VAT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterVisualizationHandler_VAT";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationLookupChooser = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VisualizationLookupChooser", 0x28, "ObjectProperty"},
        }};
    };

    struct FortMassCharactersWorldSubsystem
    {
        static constexpr std::string_view Name = "FortMassCharactersWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMassWeaponHandler
    {
        static constexpr std::string_view Name = "FortMassWeaponHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponHandlerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InitializedWorld = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitializedWorld", 0x40, "WeakObjectProperty"},
        }};
    };

    struct FortMassWeaponHandlerCellProxy
    {
        static constexpr std::string_view Name = "FortMassWeaponHandlerCellProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SendBatch = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SendBatch", 0x290, "ArrayProperty"},
        }};
    };

}

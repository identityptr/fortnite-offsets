#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshCosmetics
{
    struct MeshCosmeticsAppliedSchemaData
    {
        static constexpr std::string_view Name = "MeshCosmeticsAppliedSchemaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticItemAdditionalData";
        struct Offsets
        {
            static constexpr std::uintptr_t SchemaAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SchemaAsset", 0x28, "SoftObjectProperty"},
        }};
    };

    struct MeshCosmeticsLayoutSchema
    {
        static constexpr std::string_view Name = "MeshCosmeticsLayoutSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortApparelLayoutItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotDataConfig = 0xA0;
            static constexpr std::uintptr_t SlottedCustomizableObjects = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SlotDataConfig", 0xA0, "MapProperty"},
            {"SlottedCustomizableObjects", 0xB0, "MapProperty"},
        }};
    };

    struct MeshCosmeticsOption_ApplyAssembledMeshSchema
    {
        static constexpr std::string_view Name = "MeshCosmeticsOption_ApplyAssembledMeshSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticFlowOption";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshCosmeticsOption_ApplyCustomizableObject
    {
        static constexpr std::string_view Name = "MeshCosmeticsOption_ApplyCustomizableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticFlowOption";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshCosmeticsStep_ChooseParameters
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_ChooseParameters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsStep_CommitChosenParams
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_CommitChosenParams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsStep_CompileCustomizableObjects
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_CompileCustomizableObjects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsStep_ComponentRemoval
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_ComponentRemoval";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsStep_HandleGeneratedMesh
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_HandleGeneratedMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsStep_PlaceComponent
    {
        static constexpr std::string_view Name = "MeshCosmeticsStep_PlaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct MeshCosmeticsSupportedSchemaData
    {
        static constexpr std::string_view Name = "MeshCosmeticsSupportedSchemaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticItemAdditionalData";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedSchemas = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SupportedSchemas", 0x28, "ArrayProperty"},
        }};
    };

}

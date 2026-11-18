#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticAssembledItemDefinitions
{
    struct CosmeticAssembledItemDefinitionsSubsystem
    {
        static constexpr std::string_view Name = "CosmeticAssembledItemDefinitionsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticItemDefinitionData_AssembledMeshSchema
    {
        static constexpr std::string_view Name = "CosmeticItemDefinitionData_AssembledMeshSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t AssembledMeshSchema = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssembledMeshSchema", 0x0, "SoftObjectProperty"},
        }};
    };

    struct CosmeticItemDefinitionData_BaseItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticItemDefinitionData_BaseItemDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseItemDefinition = 0x0;
            static constexpr std::uintptr_t ItemTypeTag = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseItemDefinition", 0x0, "SoftObjectProperty"},
            {"ItemTypeTag", 0x20, "StructProperty"},
        }};
    };

    struct CosmeticItemDefinitionData_RichColorOptions
    {
        static constexpr std::string_view Name = "CosmeticItemDefinitionData_RichColorOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableColors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AvailableColors", 0x0, "ArrayProperty"},
        }};
    };

    struct CosmeticItemDefinitionData_Variants
    {
        static constexpr std::string_view Name = "CosmeticItemDefinitionData_Variants";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemVariants = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemVariants", 0x0, "ArrayProperty"},
        }};
    };

}

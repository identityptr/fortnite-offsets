#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RigMapper
{
    struct RigMapperDefinition
    {
        static constexpr std::string_view Name = "RigMapperDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0x58;
            static constexpr std::uintptr_t Features = 0x68;
            static constexpr std::uintptr_t Outputs = 0xA8;
            static constexpr std::uintptr_t NullOutputs = 0xB8;
            static constexpr std::uintptr_t bValidated = 0xC8;
            static constexpr std::uintptr_t JsonSource = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Inputs", 0x58, "ArrayProperty"},
            {"Features", 0x68, "StructProperty"},
            {"Outputs", 0xA8, "MapProperty"},
            {"NullOutputs", 0xB8, "ArrayProperty"},
            {"bValidated", 0xC8, "BoolProperty"},
            {"JsonSource", 0xD0, "StrProperty"},
        }};
    };

    struct RigMapperDefinitionUserData
    {
        static constexpr std::string_view Name = "RigMapperDefinitionUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t Definitions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Definitions", 0x28, "ArrayProperty"},
        }};
    };

    struct RigMapperLinkedDefinitions
    {
        static constexpr std::string_view Name = "RigMapperLinkedDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceDefinitions = 0x28;
            static constexpr std::uintptr_t BakedDefinition = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceDefinitions", 0x28, "ArrayProperty"},
            {"BakedDefinition", 0x38, "ObjectProperty"},
        }};
    };

}

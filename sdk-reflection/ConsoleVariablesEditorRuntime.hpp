#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ConsoleVariablesEditorRuntime
{
    struct ConsoleVariablesAsset
    {
        static constexpr std::string_view Name = "ConsoleVariablesAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableCollectionDescription = 0x30;
            static constexpr std::uintptr_t SavedCommands = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableCollectionDescription", 0x30, "StrProperty"},
            {"SavedCommands", 0x40, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MonologueSmartObjects
{
    struct MonologueSmartObjectBehaviorDescriber
    {
        static constexpr std::string_view Name = "MonologueSmartObjectBehaviorDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueSmartObjectBehaviorDescriberBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "StructProperty"},
        }};
    };

    struct MonologueSmartObjectBehaviorDescriberBase
    {
        static constexpr std::string_view Name = "MonologueSmartObjectBehaviorDescriberBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SmartObjectBehaviorDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueSmartObjectDescriber
    {
        static constexpr std::string_view Name = "MonologueSmartObjectDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueSmartObjectDescriberBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t Identifier = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Description", 0x28, "StructProperty"},
            {"Identifier", 0x48, "TextProperty"},
        }};
    };

    struct MonologueSmartObjectDescriberBase
    {
        static constexpr std::string_view Name = "MonologueSmartObjectDescriberBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SmartObjectBehaviorDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueSmartObjectsFunctionLibrary
    {
        static constexpr std::string_view Name = "MonologueSmartObjectsFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueSmartObjectsSubsystem
    {
        static constexpr std::string_view Name = "MonologueSmartObjectsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueWorldFactsSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

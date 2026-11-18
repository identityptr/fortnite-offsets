#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VkPersistence
{
    struct VkPersistence
    {
        static constexpr std::string_view Name = "VkPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VkPersistenceManager
    {
        static constexpr std::string_view Name = "VkPersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VkPersistenceVersion
    {
        static constexpr std::string_view Name = "VkPersistenceVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Version", 0x0, "IntProperty"},
            {"Name", 0x8, "StrProperty"},
        }};
    };

}

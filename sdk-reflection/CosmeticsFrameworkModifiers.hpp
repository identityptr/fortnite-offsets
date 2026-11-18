#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkModifiers
{
    struct CosmeticModifierInterface
    {
        static constexpr std::string_view Name = "CosmeticModifierInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticModifierOwnerInterface
    {
        static constexpr std::string_view Name = "CosmeticModifierOwnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticModifierProviderInterface
    {
        static constexpr std::string_view Name = "CosmeticModifierProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoftModifierClassPtr
    {
        static constexpr std::string_view Name = "SoftModifierClassPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftClass = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftClass", 0x0, "SoftClassProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeanstalkManagersRuntime
{
    struct BeanstalkAccountItemDefinitionOverrideManager
    {
        static constexpr std::string_view Name = "BeanstalkAccountItemDefinitionOverrideManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BeanCosmetics = 0x30;
            static constexpr std::uintptr_t BeanCosmeticsDataCache = 0x50;
            static constexpr std::uintptr_t OverrideCache = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeanCosmetics", 0x30, "SoftObjectProperty"},
            {"BeanCosmeticsDataCache", 0x50, "ObjectProperty"},
            {"OverrideCache", 0x58, "MapProperty"},
        }};
    };

}

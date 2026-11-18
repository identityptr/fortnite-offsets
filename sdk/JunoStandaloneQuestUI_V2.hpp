#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoStandaloneQuestUI_V2
{
    struct StandaloneQuestMapPanel_V2
    {
        static constexpr std::string_view Name = "StandaloneQuestMapPanel_V2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BackInputAction = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackInputAction", 0x4C0, "StructProperty"},
        }};
    };

}

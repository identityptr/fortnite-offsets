#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCodexUI_CBC
{
    struct GameFeatureAction_AddCBCSupportToCodex
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddCBCSupportToCodex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentSlotWidgetClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentSlotWidgetClass", 0x28, "SoftClassProperty"},
        }};
    };

    struct JunoCodexItemComponentSlot
    {
        static constexpr std::string_view Name = "JunoCodexItemComponentSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

}

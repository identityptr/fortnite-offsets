#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeluluReadyUpExtensionUIRuntime
{
    struct DeluluReadyUpErrorUI
    {
        static constexpr std::string_view Name = "DeluluReadyUpErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t PopupWidgetClass = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PopupWidgetClass", 0xE8, "SoftClassProperty"},
        }};
    };

}

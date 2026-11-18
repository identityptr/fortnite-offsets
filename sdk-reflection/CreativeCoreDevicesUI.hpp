#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeCoreDevicesUI
{
    struct FortCreativeTimerContainerWidget
    {
        static constexpr std::string_view Name = "FortCreativeTimerContainerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TimerViewModelClass = 0x3C0;
            static constexpr std::uintptr_t TimerWidgetDefaultClass = 0x3E0;
            static constexpr std::uintptr_t InterfaceViewModelMap = 0x3E8;
            static constexpr std::uintptr_t ActiveInterface = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TimerViewModelClass", 0x3C0, "ClassProperty"},
            {"TimerWidgetDefaultClass", 0x3E0, "ClassProperty"},
            {"InterfaceViewModelMap", 0x3E8, "MapProperty"},
            {"ActiveInterface", 0x3F8, "InterfaceProperty"},
        }};
    };

}

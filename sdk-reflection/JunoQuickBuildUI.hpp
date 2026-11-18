#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoQuickBuildUI
{
    struct JunoQuickBuildTouchLayer
    {
        static constexpr std::string_view Name = "JunoQuickBuildTouchLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTouchTapDelegate = 0x308;
            static constexpr std::uintptr_t StartPosition = 0x318;
            static constexpr std::uintptr_t Direction = 0x330;
            static constexpr std::uintptr_t InputKey = 0x348;
            static constexpr std::uintptr_t InputActionsData = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnTouchTapDelegate", 0x308, "MulticastInlineDelegateProperty"},
            {"StartPosition", 0x318, "StructProperty"},
            {"Direction", 0x330, "StructProperty"},
            {"InputKey", 0x348, "ObjectProperty"},
            {"InputActionsData", 0x350, "ArrayProperty"},
        }};
    };

}

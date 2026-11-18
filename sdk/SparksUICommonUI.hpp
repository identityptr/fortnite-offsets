#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksUICommonUI
{
    struct SparksListView
    {
        static constexpr std::string_view Name = "SparksListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonListView";
        struct Offsets
        {
            static constexpr std::uintptr_t bSelectOnTouchScroll = 0xFE0;
            static constexpr std::uintptr_t TouchSelectTriggerDistance = 0xFE4;
            static constexpr std::uintptr_t bDiscardTouchOnCrossAxisDistance = 0xFE8;
            static constexpr std::uintptr_t TouchDiscardCrossAxisTriggerDistance = 0xFEC;
            static constexpr std::uintptr_t PressedScreenSpacePosition = 0x1000;
            static constexpr std::uintptr_t bIsTouchDragging = 0x1008;
            static constexpr std::uintptr_t BP_OnListTouchStarted = 0x1010;
            static constexpr std::uintptr_t BP_OnListTouchMoved = 0x1020;
            static constexpr std::uintptr_t BP_OnListTouchEnded = 0x1030;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bSelectOnTouchScroll", 0xFE0, "BoolProperty"},
            {"TouchSelectTriggerDistance", 0xFE4, "FloatProperty"},
            {"bDiscardTouchOnCrossAxisDistance", 0xFE8, "BoolProperty"},
            {"TouchDiscardCrossAxisTriggerDistance", 0xFEC, "FloatProperty"},
            {"PressedScreenSpacePosition", 0x1000, "StructProperty"},
            {"bIsTouchDragging", 0x1008, "BoolProperty"},
            {"BP_OnListTouchStarted", 0x1010, "MulticastInlineDelegateProperty"},
            {"BP_OnListTouchMoved", 0x1020, "MulticastInlineDelegateProperty"},
            {"BP_OnListTouchEnded", 0x1030, "MulticastInlineDelegateProperty"},
        }};
    };

}

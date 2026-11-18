#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseFortniteUIWidget
{
    struct FortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_VerseInputActionBindingVisibility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileButtonBehaviorComponent_Visibility";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMapping = 0x58;
            static constexpr std::uintptr_t SubscribedVisibility = 0x60;
            static constexpr std::uintptr_t UnsubscribedVisibility = 0x61;
            static constexpr std::uintptr_t bUseInheritedVisibilityWhenUnsubscribed = 0x62;
            static constexpr std::uintptr_t InstigatorTagQueryAllowingVisibilityWithoutInputMapping = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputMapping", 0x58, "ObjectProperty"},
            {"SubscribedVisibility", 0x60, "EnumProperty"},
            {"UnsubscribedVisibility", 0x61, "EnumProperty"},
            {"bUseInheritedVisibilityWhenUnsubscribed", 0x62, "BoolProperty"},
            {"InstigatorTagQueryAllowingVisibilityWithoutInputMapping", 0x68, "StructProperty"},
        }};
    };

}

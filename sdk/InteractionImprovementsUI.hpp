#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InteractionImprovementsUI
{
    struct FortInteractionIndicatorCollapsedVM
    {
        static constexpr std::string_view Name = "FortInteractionIndicatorCollapsedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInteractors = 0x78;
            static constexpr std::uintptr_t IsMultiInteractable = 0x7C;
            static constexpr std::uintptr_t ActionText = 0x80;
            static constexpr std::uintptr_t TargetActorComponent_MultiInteract = 0x90;
            static constexpr std::uintptr_t CurrentInteractContextInfo = 0x98;
            static constexpr std::uintptr_t CustomProgressContextInfo = 0xA0;
            static constexpr std::uintptr_t OnCustomProgressUpdate = 0xA8;
            static constexpr std::uintptr_t OnReceiveInteractContextInfo = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NumInteractors", 0x78, "IntProperty"},
            {"IsMultiInteractable", 0x7C, "BoolProperty"},
            {"ActionText", 0x80, "TextProperty"},
            {"TargetActorComponent_MultiInteract", 0x90, "ObjectProperty"},
            {"CurrentInteractContextInfo", 0x98, "ObjectProperty"},
            {"CustomProgressContextInfo", 0xA0, "ObjectProperty"},
            {"OnCustomProgressUpdate", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnReceiveInteractContextInfo", 0xB8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortPickupInteractOverrideComponent_DefaultPickupOverride
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_DefaultPickupOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xC0;
            static constexpr std::uintptr_t ContextOverrideWidget = 0xC8;
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0xD0;
            static constexpr std::uintptr_t bContextOverrideWidgetApplied = 0xD8;
            static constexpr std::uintptr_t bRemoveContextOverrideWidgetsImmediately = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Priority", 0xC0, "IntProperty"},
            {"ContextOverrideWidget", 0xC8, "ClassProperty"},
            {"SecondContextOverrideWidget", 0xD0, "ClassProperty"},
            {"bContextOverrideWidgetApplied", 0xD8, "BoolProperty"},
            {"bRemoveContextOverrideWidgetsImmediately", 0xD9, "BoolProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRDPlayerTrackerUI
{
    struct CRDPlayerTrackerUIComponent
    {
        static constexpr std::string_view Name = "CRDPlayerTrackerUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedWidget = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnedWidget", 0xC0, "ObjectProperty"},
        }};
    };

    struct CRDPlayerTrackerWidget
    {
        static constexpr std::string_view Name = "CRDPlayerTrackerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

}

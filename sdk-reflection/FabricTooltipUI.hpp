#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricTooltipUI
{
    struct FabricTooltipViewModel
    {
        static constexpr std::string_view Name = "FabricTooltipViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x68;
            static constexpr std::uintptr_t Description = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x68, "TextProperty"},
            {"Description", 0x78, "TextProperty"},
        }};
    };

    struct FabricTooltipWidget
    {
        static constexpr std::string_view Name = "FabricTooltipWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseShortDescription = 0x4D0;
            static constexpr std::uintptr_t bUseShortDescriptionWithTouch = 0x4D1;
            static constexpr std::uintptr_t ShortDescriptionHeight = 0x4D4;
            static constexpr std::uintptr_t ShowMoreThreshold = 0x4D8;
            static constexpr std::uintptr_t ShowMoreText = 0x4E0;
            static constexpr std::uintptr_t ShowLessText = 0x4F0;
            static constexpr std::uintptr_t MarkerPointer = 0x500;
            static constexpr std::uintptr_t Text_Description = 0x508;
            static constexpr std::uintptr_t SizeBox_Description = 0x510;
            static constexpr std::uintptr_t Panel_ShowMorePrompt = 0x518;
            static constexpr std::uintptr_t Text_ShowMorePrompt = 0x520;
            static constexpr std::uintptr_t bShowingFullDescription = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bUseShortDescription", 0x4D0, "BoolProperty"},
            {"bUseShortDescriptionWithTouch", 0x4D1, "BoolProperty"},
            {"ShortDescriptionHeight", 0x4D4, "FloatProperty"},
            {"ShowMoreThreshold", 0x4D8, "FloatProperty"},
            {"ShowMoreText", 0x4E0, "TextProperty"},
            {"ShowLessText", 0x4F0, "TextProperty"},
            {"MarkerPointer", 0x500, "ObjectProperty"},
            {"Text_Description", 0x508, "ObjectProperty"},
            {"SizeBox_Description", 0x510, "ObjectProperty"},
            {"Panel_ShowMorePrompt", 0x518, "ObjectProperty"},
            {"Text_ShowMorePrompt", 0x520, "ObjectProperty"},
            {"bShowingFullDescription", 0x528, "BoolProperty"},
        }};
    };

}

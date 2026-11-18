#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EventModeUI
{
    struct FocusButton
    {
        static constexpr std::string_view Name = "FocusButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BacchusActionButton";
        struct Offsets
        {
            static constexpr std::uintptr_t StartFocusingSprite = 0x4B0;
            static constexpr std::uintptr_t StopFocusingSprite = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartFocusingSprite", 0x4B0, "ObjectProperty"},
            {"StopFocusingSprite", 0x4B8, "ObjectProperty"},
        }};
    };

    struct FortEventModeEmotesWidget
    {
        static constexpr std::string_view Name = "FortEventModeEmotesWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Emote1 = 0x370;
            static constexpr std::uintptr_t Emote2 = 0x390;
            static constexpr std::uintptr_t Emote3 = 0x3B0;
            static constexpr std::uintptr_t RandomEmotes = 0x3D0;
            static constexpr std::uintptr_t Text_Emote1 = 0x3E8;
            static constexpr std::uintptr_t Text_Emote2 = 0x3F0;
            static constexpr std::uintptr_t Text_Emote3 = 0x3F8;
            static constexpr std::uintptr_t Text_EmoteRandom = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Emote1", 0x370, "SoftObjectProperty"},
            {"Emote2", 0x390, "SoftObjectProperty"},
            {"Emote3", 0x3B0, "SoftObjectProperty"},
            {"RandomEmotes", 0x3D0, "ArrayProperty"},
            {"Text_Emote1", 0x3E8, "ObjectProperty"},
            {"Text_Emote2", 0x3F0, "ObjectProperty"},
            {"Text_Emote3", 0x3F8, "ObjectProperty"},
            {"Text_EmoteRandom", 0x400, "ObjectProperty"},
        }};
    };

    struct FortMobileActionButtonBehavior_Focus
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehavior_Focus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t StopFocusingSprite = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StopFocusingSprite", 0x2A0, "ObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SrirachaRanchUI
{
    struct FortMobileActionButtonBehavior_ToggleRadio
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehavior_ToggleRadio";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t ToggleRadioOffSprite = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ToggleRadioOffSprite", 0x2A0, "ObjectProperty"},
        }};
    };

    struct RadioMenuPicker
    {
        static constexpr std::string_view Name = "RadioMenuPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerOverlay_RadioMenu = 0x4A8;
            static constexpr std::uintptr_t DelayedSelectionTime = 0x4B0;
            static constexpr std::uintptr_t DelayedSelectionRetryMax = 0x4B4;
            static constexpr std::uintptr_t bShowBackgroundBlur = 0x4B8;
            static constexpr std::uintptr_t bShowBackgroundGlow = 0x4B9;
            static constexpr std::uintptr_t bShowInputHintsBottomBar = 0x4BA;
            static constexpr std::uintptr_t bShowRadioStationDetailsPanel = 0x4BB;
            static constexpr std::uintptr_t MaxNumberOfRadioStationsSupported = 0x4BC;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x4C0;
            static constexpr std::uintptr_t Text_RadioStationName = 0x4C8;
            static constexpr std::uintptr_t Text_RadioStationCurrentSong = 0x4D0;
            static constexpr std::uintptr_t Text_RadioStationCurrentArtist = 0x4D8;
            static constexpr std::uintptr_t Text_QuickAccess_0 = 0x4E0;
            static constexpr std::uintptr_t Text_QuickAccess_Slash = 0x4E8;
            static constexpr std::uintptr_t Text_QuickAccess_Q_Y = 0x4F0;
            static constexpr std::uintptr_t Keybind_Confirm = 0x4F8;
            static constexpr std::uintptr_t Button_Cancel = 0x500;
            static constexpr std::uintptr_t RadioStations = 0x508;
            static constexpr std::uintptr_t QuickSelectBindings = 0x518;
            static constexpr std::uintptr_t CachedRadioPlayerComponent = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"PickerOverlay_RadioMenu", 0x4A8, "ObjectProperty"},
            {"DelayedSelectionTime", 0x4B0, "FloatProperty"},
            {"DelayedSelectionRetryMax", 0x4B4, "IntProperty"},
            {"bShowBackgroundBlur", 0x4B8, "BoolProperty"},
            {"bShowBackgroundGlow", 0x4B9, "BoolProperty"},
            {"bShowInputHintsBottomBar", 0x4BA, "BoolProperty"},
            {"bShowRadioStationDetailsPanel", 0x4BB, "BoolProperty"},
            {"MaxNumberOfRadioStationsSupported", 0x4BC, "IntProperty"},
            {"PrimaryContentSetup", 0x4C0, "StructProperty"},
            {"Text_RadioStationName", 0x4C8, "ObjectProperty"},
            {"Text_RadioStationCurrentSong", 0x4D0, "ObjectProperty"},
            {"Text_RadioStationCurrentArtist", 0x4D8, "ObjectProperty"},
            {"Text_QuickAccess_0", 0x4E0, "ObjectProperty"},
            {"Text_QuickAccess_Slash", 0x4E8, "ObjectProperty"},
            {"Text_QuickAccess_Q_Y", 0x4F0, "ObjectProperty"},
            {"Keybind_Confirm", 0x4F8, "ObjectProperty"},
            {"Button_Cancel", 0x500, "ObjectProperty"},
            {"RadioStations", 0x508, "ArrayProperty"},
            {"QuickSelectBindings", 0x518, "ArrayProperty"},
            {"CachedRadioPlayerComponent", 0x528, "ObjectProperty"},
        }};
    };

    struct RadioPlayerWidgetBase
    {
        static constexpr std::string_view Name = "RadioPlayerWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PriorityData = 0x4E0;
            static constexpr std::uintptr_t PressedObjectInputAction = 0x4E8;
            static constexpr std::uintptr_t RadioMenuPickerClass = 0x500;
            static constexpr std::uintptr_t RadioMenuPickerWidget = 0x508;
            static constexpr std::uintptr_t Overlay_Keybind = 0x510;
            static constexpr std::uintptr_t ToggleActionWidget = 0x518;
            static constexpr std::uintptr_t LastValidComp = 0x520;
            static constexpr std::uintptr_t bPickerOpen = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PriorityData", 0x4E0, "StructProperty"},
            {"PressedObjectInputAction", 0x4E8, "StructProperty"},
            {"RadioMenuPickerClass", 0x500, "ClassProperty"},
            {"RadioMenuPickerWidget", 0x508, "ObjectProperty"},
            {"Overlay_Keybind", 0x510, "ObjectProperty"},
            {"ToggleActionWidget", 0x518, "ObjectProperty"},
            {"LastValidComp", 0x520, "ObjectProperty"},
            {"bPickerOpen", 0x528, "BoolProperty"},
        }};
    };

    struct RadioStation
    {
        static constexpr std::string_view Name = "RadioStation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStationImageIsLoaded = 0x28;
            static constexpr std::uintptr_t StationCMSImage = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStationImageIsLoaded", 0x28, "MulticastInlineDelegateProperty"},
            {"StationCMSImage", 0x38, "ObjectProperty"},
        }};
    };

}

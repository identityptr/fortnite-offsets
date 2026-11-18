#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::KoalaUI
{
    struct FortGameSettingRegistryExtension_Koala
    {
        static constexpr std::string_view Name = "FortGameSettingRegistryExtension_Koala";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingExtensions = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SettingExtensions", 0x48, "StructProperty"},
        }};
    };

    struct FortSettingEditCondition_KoalaClipRemindersAvailable
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_KoalaClipRemindersAvailable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSettingEditCondition_KoalaClippingEnabledAvailable
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_KoalaClippingEnabledAvailable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSettingEditCondition_KoalaLinkAvailable
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_KoalaLinkAvailable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSidebarPanelKoala
    {
        static constexpr std::string_view Name = "FortSidebarPanelKoala";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_KoalaDummy = 0x4B8;
            static constexpr std::uintptr_t QRCodeImage = 0x4C0;
            static constexpr std::uintptr_t QRCodeURL = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Button_KoalaDummy", 0x4B8, "ObjectProperty"},
            {"QRCodeImage", 0x4C0, "ObjectProperty"},
            {"QRCodeURL", 0x4C8, "StrProperty"},
        }};
    };

    struct KoalaGraphicsModal
    {
        static constexpr std::string_view Name = "KoalaGraphicsModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_KeepEnabled = 0x4B8;
            static constexpr std::uintptr_t Button_Disable = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Button_KeepEnabled", 0x4B8, "ObjectProperty"},
            {"Button_Disable", 0x4C0, "ObjectProperty"},
        }};
    };

    struct KoalaHUDWidget
    {
        static constexpr std::string_view Name = "KoalaHUDWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ClipDebounceTime = 0x4A8;
            static constexpr std::uintptr_t PlayerKilledPlayerReminderTime = 0x4AC;
            static constexpr std::uintptr_t MatchEndedReminderTime = 0x4B0;
            static constexpr std::uintptr_t ClipReminderCooldownTime = 0x4B4;
            static constexpr std::uintptr_t EliminationClipReminderDelayTime = 0x4B8;
            static constexpr std::uintptr_t ClipAudioSubmix = 0x4C0;
            static constexpr std::uintptr_t ClipActionWidget = 0x4C8;
            static constexpr std::uintptr_t ClipObjectInputAction = 0x4D0;
            static constexpr std::uintptr_t ClipTracker = 0x4E8;
            static constexpr std::uintptr_t LastClipID = 0x500;
            static constexpr std::uintptr_t MockClipMode = 0x532;
            static constexpr std::uintptr_t MockClipUploadShortTime = 0x534;
            static constexpr std::uintptr_t MockClipUploadLongTime = 0x538;
            static constexpr std::uintptr_t MockClipCreateShortTime = 0x53C;
            static constexpr std::uintptr_t MockClipCreateLongTime = 0x540;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ClipDebounceTime", 0x4A8, "FloatProperty"},
            {"PlayerKilledPlayerReminderTime", 0x4AC, "FloatProperty"},
            {"MatchEndedReminderTime", 0x4B0, "FloatProperty"},
            {"ClipReminderCooldownTime", 0x4B4, "FloatProperty"},
            {"EliminationClipReminderDelayTime", 0x4B8, "FloatProperty"},
            {"ClipAudioSubmix", 0x4C0, "ObjectProperty"},
            {"ClipActionWidget", 0x4C8, "ObjectProperty"},
            {"ClipObjectInputAction", 0x4D0, "StructProperty"},
            {"ClipTracker", 0x4E8, "MapProperty"},
            {"LastClipID", 0x500, "IntProperty"},
            {"MockClipMode", 0x532, "EnumProperty"},
            {"MockClipUploadShortTime", 0x534, "IntProperty"},
            {"MockClipUploadLongTime", 0x538, "IntProperty"},
            {"MockClipCreateShortTime", 0x53C, "IntProperty"},
            {"MockClipCreateLongTime", 0x540, "IntProperty"},
        }};
    };

    struct KoalaMainMenuButton
    {
        static constexpr std::string_view Name = "KoalaMainMenuButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMainMenuButtonExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SidebarPanelToActivate = 0x1730;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SidebarPanelToActivate", 0x1730, "ClassProperty"},
        }};
    };

    struct KoalaSettingDetailExtension
    {
        static constexpr std::string_view Name = "KoalaSettingDetailExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingDetailExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t Setting = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Setting", 0x308, "ObjectProperty"},
        }};
    };

    struct KoalaUIDirector
    {
        static constexpr std::string_view Name = "KoalaUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPostPartyConnectionChanged = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnPostPartyConnectionChanged", 0x2A8, "MulticastInlineDelegateProperty"},
        }};
    };

}

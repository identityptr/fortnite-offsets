#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicBacchusHUD
{
    struct AthenaTouchHUDDirectorComponent
    {
        static constexpr std::string_view Name = "AthenaTouchHUDDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPawnRevived = 0xC0;
            static constexpr std::uintptr_t OnPlayerPawnRespawned = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPlayerPawnRevived", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPawnRespawned", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DynamicBacchusHUDDirector
    {
        static constexpr std::string_view Name = "DynamicBacchusHUDDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetTagsToObserveFilter = 0x2B0;
            static constexpr std::uintptr_t VirtualPointerHideBacchusScene = 0x2D0;
            static constexpr std::uintptr_t HUDSwitchExcludeConditions = 0x2D8;
            static constexpr std::uintptr_t BaseHUDWidgetRegistry = 0x2E0;
            static constexpr std::uintptr_t ScenesPool = 0x2E8;
            static constexpr std::uintptr_t HUDWidgetRegistry = 0x2F8;
            static constexpr std::uintptr_t UnallowedHUDWidgetTagQueries = 0x340;
            static constexpr std::uintptr_t PersistentWidgetSpecs = 0x370;
            static constexpr std::uintptr_t PersistentContextTag = 0x380;
            static constexpr std::uintptr_t CurrentContextTags = 0x398;
            static constexpr std::uintptr_t LayoutProfile = 0x3C8;
            static constexpr std::uintptr_t UnallowedHUDContextTags = 0x400;
            static constexpr std::uintptr_t ForcedPresetName = 0x420;
            static constexpr std::uintptr_t ForcedProfile = 0x430;
            static constexpr std::uintptr_t ForcedProfileContainer = 0x434;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"WidgetTagsToObserveFilter", 0x2B0, "StructProperty"},
            {"VirtualPointerHideBacchusScene", 0x2D0, "ObjectProperty"},
            {"HUDSwitchExcludeConditions", 0x2D8, "ObjectProperty"},
            {"BaseHUDWidgetRegistry", 0x2E0, "ObjectProperty"},
            {"ScenesPool", 0x2E8, "MapProperty"},
            {"HUDWidgetRegistry", 0x2F8, "ObjectProperty"},
            {"UnallowedHUDWidgetTagQueries", 0x340, "ArrayProperty"},
            {"PersistentWidgetSpecs", 0x370, "ArrayProperty"},
            {"PersistentContextTag", 0x380, "StructProperty"},
            {"CurrentContextTags", 0x398, "StructProperty"},
            {"LayoutProfile", 0x3C8, "StructProperty"},
            {"UnallowedHUDContextTags", 0x400, "StructProperty"},
            {"ForcedPresetName", 0x420, "TextProperty"},
            {"ForcedProfile", 0x430, "StructProperty"},
            {"ForcedProfileContainer", 0x434, "StructProperty"},
        }};
    };

    struct DynamicBacchusHUDDirectorComponent
    {
        static constexpr std::string_view Name = "DynamicBacchusHUDDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPawnRevived = 0xC0;
            static constexpr std::uintptr_t OnPlayerPawnRespawned = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPlayerPawnRevived", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPawnRespawned", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DynamicUIMobileScene
    {
        static constexpr std::string_view Name = "DynamicUIMobileScene";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIScene";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneLayerID = 0x28;
            static constexpr std::uintptr_t Allowed = 0x30;
            static constexpr std::uintptr_t Unallow = 0x40;
            static constexpr std::uintptr_t Adjust = 0x50;
            static constexpr std::uintptr_t Preload = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SceneLayerID", 0x28, "UInt16Property"},
            {"Allowed", 0x30, "ArrayProperty"},
            {"Unallow", 0x40, "ArrayProperty"},
            {"Adjust", 0x50, "ArrayProperty"},
            {"Preload", 0x60, "ArrayProperty"},
        }};
    };

    struct UnallowRedirectInterface
    {
        static constexpr std::string_view Name = "UnallowRedirectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

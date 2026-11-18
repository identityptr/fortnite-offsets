#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BackToHub
{
    struct BackToHubRegistry
    {
        static constexpr std::string_view Name = "BackToHubRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t RootSettings = 0xA0;
            static constexpr std::uintptr_t RegisteredSettings = 0xB0;
            static constexpr std::uintptr_t OwningLocalPlayer = 0xC0;
            static constexpr std::uintptr_t EditConditionCache = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootSettings", 0xA0, "ArrayProperty"},
            {"RegisteredSettings", 0xB0, "MapProperty"},
            {"OwningLocalPlayer", 0xC0, "WeakObjectProperty"},
            {"EditConditionCache", 0xC8, "ObjectProperty"},
        }};
    };

    struct BackToHubScreen
    {
        static constexpr std::string_view Name = "BackToHubScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SettingsScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingRegistry = 0x5A0;
            static constexpr std::uintptr_t RegistryOrchestrator = 0x5A8;
            static constexpr std::uintptr_t Settings_Panel = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SettingRegistry", 0x5A0, "WeakObjectProperty"},
            {"RegistryOrchestrator", 0x5A8, "WeakObjectProperty"},
            {"Settings_Panel", 0x5B0, "ObjectProperty"},
        }};
    };

    struct BackToHubSettingSubsystem
    {
        static constexpr std::string_view Name = "BackToHubSettingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BackToHubSettings
    {
        static constexpr std::string_view Name = "BackToHubSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t HubLinkCodes = 0x30;
            static constexpr std::uintptr_t RegistryManifests = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HubLinkCodes", 0x30, "ArrayProperty"},
            {"RegistryManifests", 0x40, "ArrayProperty"},
        }};
    };

}

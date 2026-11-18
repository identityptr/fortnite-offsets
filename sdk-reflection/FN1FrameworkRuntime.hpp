#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FN1FrameworkRuntime
{
    struct LiveSpectatorBridgeComponent
    {
        static constexpr std::string_view Name = "LiveSpectatorBridgeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseSpectatorManager = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseSpectatorManager", 0xF0, "ObjectProperty"},
        }};
    };

    struct SpriteMagpieBridgeSettings
    {
        static constexpr std::string_view Name = "SpriteMagpieBridgeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SpriteModules = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpriteModules", 0x30, "ArrayProperty"},
        }};
    };

    struct VersePersistenceProvider
    {
        static constexpr std::string_view Name = "VersePersistenceProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseSpectatorManager
    {
        static constexpr std::string_view Name = "VerseSpectatorManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectatorBridge = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpectatorBridge", 0x28, "ObjectProperty"},
        }};
    };

}

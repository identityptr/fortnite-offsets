#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayStreamingFN
{
    struct FortGFNGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "FortGFNGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GFNGameplayStreamingHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t FortLocalPlayerAccountHelper = 0x40;
            static constexpr std::uintptr_t WeakFortOnlineAccount = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FortLocalPlayerAccountHelper", 0x40, "ObjectProperty"},
            {"WeakFortOnlineAccount", 0x48, "WeakObjectProperty"},
        }};
    };

    struct FortGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "FortGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameplayStreamingService
    {
        static constexpr std::string_view Name = "FortGameplayStreamingService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStreamingService";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveHandler = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveHandler", 0x28, "ObjectProperty"},
        }};
    };

    struct FortJioCloudGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "FortJioCloudGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JioCloudGameplayStreamingHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t FortLocalPlayerAccountHelper = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FortLocalPlayerAccountHelper", 0x58, "ObjectProperty"},
        }};
    };

    struct FortLocalPlayerAccountHelper
    {
        static constexpr std::string_view Name = "FortLocalPlayerAccountHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLunaGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "FortLunaGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LunaGameplayStreamingHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t FortLocalPlayerAccountHelper = 0x90;
            static constexpr std::uintptr_t WeakFortOnlineAccount = 0x98;
            static constexpr std::uintptr_t GameEntryDeepLinks = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FortLocalPlayerAccountHelper", 0x90, "ObjectProperty"},
            {"WeakFortOnlineAccount", 0x98, "WeakObjectProperty"},
            {"GameEntryDeepLinks", 0xA8, "ArrayProperty"},
        }};
    };

    struct FortSalmonGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "FortSalmonGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SalmonGameplayStreamingHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

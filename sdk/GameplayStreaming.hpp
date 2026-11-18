#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayStreaming
{
    struct BaseGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "BaseGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GFNGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "GFNGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGameplayStreamingHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayStreamingClassLoader
    {
        static constexpr std::string_view Name = "GameplayStreamingClassLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayStreamingServiceClassName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayStreamingServiceClassName", 0x28, "StructProperty"},
        }};
    };

    struct GameplayStreamingService
    {
        static constexpr std::string_view Name = "GameplayStreamingService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveHandler = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveHandler", 0x28, "ObjectProperty"},
        }};
    };

    struct JioCloudGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "JioCloudGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGameplayStreamingHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LunaGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "LunaGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGameplayStreamingHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SalmonGameplayStreamingHandler
    {
        static constexpr std::string_view Name = "SalmonGameplayStreamingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGameplayStreamingHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

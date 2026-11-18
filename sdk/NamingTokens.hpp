#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NamingTokens
{
    struct GlobalNamingTokens
    {
        static constexpr std::string_view Name = "GlobalNamingTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NamingTokens";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomTokens = 0x78;
            static constexpr std::uintptr_t CurrentEvaluationData = 0x88;
            static constexpr std::uintptr_t Namespace = 0xA8;
            static constexpr std::uintptr_t NamespaceDisplayName = 0xB8;
            static constexpr std::uintptr_t bIsPrivateNamespace = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CustomTokens", 0x78, "ArrayProperty"},
            {"CurrentEvaluationData", 0x88, "StructProperty"},
            {"Namespace", 0xA8, "StrProperty"},
            {"NamespaceDisplayName", 0xB8, "TextProperty"},
            {"bIsPrivateNamespace", 0xC8, "BoolProperty"},
        }};
    };

    struct NamingTokens
    {
        static constexpr std::string_view Name = "NamingTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomTokens = 0x78;
            static constexpr std::uintptr_t CurrentEvaluationData = 0x88;
            static constexpr std::uintptr_t Namespace = 0xA8;
            static constexpr std::uintptr_t NamespaceDisplayName = 0xB8;
            static constexpr std::uintptr_t bIsPrivateNamespace = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CustomTokens", 0x78, "ArrayProperty"},
            {"CurrentEvaluationData", 0x88, "StructProperty"},
            {"Namespace", 0xA8, "StrProperty"},
            {"NamespaceDisplayName", 0xB8, "TextProperty"},
            {"bIsPrivateNamespace", 0xC8, "BoolProperty"},
        }};
    };

    struct NamingTokensEngineSubsystem
    {
        static constexpr std::string_view Name = "NamingTokensEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedNamingTokens = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedNamingTokens", 0x30, "MapProperty"},
        }};
    };

}

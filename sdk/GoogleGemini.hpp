#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GoogleGemini
{
    struct GoogleCloudPlatformOidcAuthenticationProvider
    {
        static constexpr std::string_view Name = "GoogleCloudPlatformOidcAuthenticationProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OidcAuthenticationProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProviderIdentifier = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProviderIdentifier", 0x28, "StrProperty"},
        }};
    };

    struct GoogleGeminiChatCompleter
    {
        static constexpr std::string_view Name = "GoogleGeminiChatCompleter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChatCompleter";
        struct Offsets
        {
            static constexpr std::uintptr_t Project = 0x88;
            static constexpr std::uintptr_t Location = 0x98;
            static constexpr std::uintptr_t Model = 0xA8;
            static constexpr std::uintptr_t EndpointURL = 0xB8;
            static constexpr std::uintptr_t FullyQualifiedModel = 0xC8;
            static constexpr std::uintptr_t RequestType = 0xD8;
            static constexpr std::uintptr_t DefaultSafetySettings = 0xE0;
            static constexpr std::uintptr_t SafetySettingOverrides = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Project", 0x88, "StrProperty"},
            {"Location", 0x98, "StrProperty"},
            {"Model", 0xA8, "StrProperty"},
            {"EndpointURL", 0xB8, "StrProperty"},
            {"FullyQualifiedModel", 0xC8, "StrProperty"},
            {"RequestType", 0xD8, "OptionalProperty"},
            {"DefaultSafetySettings", 0xE0, "StructProperty"},
            {"SafetySettingOverrides", 0xF0, "StructProperty"},
        }};
    };

}

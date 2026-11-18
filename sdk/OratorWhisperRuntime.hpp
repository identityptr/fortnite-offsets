#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OratorWhisperRuntime
{
    struct OratorInternalWhisperTranscriptionProvider
    {
        static constexpr std::string_view Name = "OratorInternalWhisperTranscriptionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorTranscriptionProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t EndpointURL = 0x28;
            static constexpr std::uintptr_t bRequiresAuthentication = 0x38;
            static constexpr std::uintptr_t Language = 0x40;
            static constexpr std::uintptr_t Prompt = 0x50;
            static constexpr std::uintptr_t bEnableVAD = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EndpointURL", 0x28, "StrProperty"},
            {"bRequiresAuthentication", 0x38, "BoolProperty"},
            {"Language", 0x40, "StrProperty"},
            {"Prompt", 0x50, "StrProperty"},
            {"bEnableVAD", 0x60, "BoolProperty"},
        }};
    };

    struct OratorWhisperEditorSettings
    {
        static constexpr std::string_view Name = "OratorWhisperEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t EndpointURLOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EndpointURLOverride", 0x30, "StrProperty"},
        }};
    };

}

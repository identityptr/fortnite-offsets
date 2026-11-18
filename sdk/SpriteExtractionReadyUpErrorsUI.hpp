#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionReadyUpErrorsUI
{
    struct ExtractionReadyUpErrorUI
    {
        static constexpr std::string_view Name = "ExtractionReadyUpErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t FeatureToRedirectTo = 0xE8;
            static constexpr std::uintptr_t Destination = 0xE9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FeatureToRedirectTo", 0xE8, "EnumProperty"},
            {"Destination", 0xE9, "EnumProperty"},
        }};
    };

    struct ExtractionReadyUpLoadingErrorUI
    {
        static constexpr std::string_view Name = "ExtractionReadyUpLoadingErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

}

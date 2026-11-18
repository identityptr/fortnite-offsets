#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TextureUtilitiesCommon
{
    struct TextureImportSettings
    {
        static constexpr std::string_view Name = "TextureImportSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoVTSize = 0x30;
            static constexpr std::uintptr_t AutoLimitDimension = 0x34;
            static constexpr std::uintptr_t bEnableNormalizeNormals = 0x38;
            static constexpr std::uintptr_t bEnableFastMipFilter = 0x39;
            static constexpr std::uintptr_t CompressedFormatForFloatTextures = 0x3A;
            static constexpr std::uintptr_t PNGInfill = 0x3B;
            static constexpr std::uintptr_t bDoAutomaticTextureSettingsForNonPow2Textures = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AutoVTSize", 0x30, "IntProperty"},
            {"AutoLimitDimension", 0x34, "IntProperty"},
            {"bEnableNormalizeNormals", 0x38, "BoolProperty"},
            {"bEnableFastMipFilter", 0x39, "BoolProperty"},
            {"CompressedFormatForFloatTextures", 0x3A, "EnumProperty"},
            {"PNGInfill", 0x3B, "EnumProperty"},
            {"bDoAutomaticTextureSettingsForNonPow2Textures", 0x3C, "BoolProperty"},
        }};
    };

    struct TextureImportUserSettings
    {
        static constexpr std::string_view Name = "TextureImportUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PNGInfill = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PNGInfill", 0x30, "EnumProperty"},
        }};
    };

}

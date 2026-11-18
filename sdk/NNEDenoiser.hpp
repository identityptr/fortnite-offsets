#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NNEDenoiser
{
    struct NNEDenoiserAsset
    {
        static constexpr std::string_view Name = "NNEDenoiserAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ModelData = 0x28;
            static constexpr std::uintptr_t InputMapping = 0x48;
            static constexpr std::uintptr_t OutputMapping = 0x68;
            static constexpr std::uintptr_t TilingConfig = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModelData", 0x28, "SoftObjectProperty"},
            {"InputMapping", 0x48, "SoftObjectProperty"},
            {"OutputMapping", 0x68, "SoftObjectProperty"},
            {"TilingConfig", 0x88, "StructProperty"},
        }};
    };

    struct NNEDenoiserSettings
    {
        static constexpr std::string_view Name = "NNEDenoiserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettingsBackedByCVars";
        struct Offsets
        {
            static constexpr std::uintptr_t DenoiserAsset = 0x30;
            static constexpr std::uintptr_t MaximumTileSizeOverride = 0x70;
            static constexpr std::uintptr_t RuntimeType = 0x74;
            static constexpr std::uintptr_t RuntimeName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DenoiserAsset", 0x30, "SoftObjectProperty"},
            {"MaximumTileSizeOverride", 0x70, "IntProperty"},
            {"RuntimeType", 0x74, "ByteProperty"},
            {"RuntimeName", 0x78, "StrProperty"},
        }};
    };

    struct NNEDenoiserTemporalAsset
    {
        static constexpr std::string_view Name = "NNEDenoiserTemporalAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ModelData = 0x28;
            static constexpr std::uintptr_t InputMapping = 0x48;
            static constexpr std::uintptr_t OutputMapping = 0x68;
            static constexpr std::uintptr_t TilingConfig = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModelData", 0x28, "SoftObjectProperty"},
            {"InputMapping", 0x48, "SoftObjectProperty"},
            {"OutputMapping", 0x68, "SoftObjectProperty"},
            {"TilingConfig", 0x88, "StructProperty"},
        }};
    };

}

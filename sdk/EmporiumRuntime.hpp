#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EmporiumRuntime
{
    struct EmporiumAssetsPaths
    {
        static constexpr std::string_view Name = "EmporiumAssetsPaths";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MR_MI_Opaque = 0x28;
            static constexpr std::uintptr_t MR_MI_Opaque_Clearcoat = 0x48;
            static constexpr std::uintptr_t MR_MI_Opaque_Sheen = 0x68;
            static constexpr std::uintptr_t MR_MI_Opaque_Unlit = 0x88;
            static constexpr std::uintptr_t MR_MI_Translucent = 0xA8;
            static constexpr std::uintptr_t MR_MI_Translucent_Clearcoat = 0xC8;
            static constexpr std::uintptr_t MR_MI_Transmission = 0xE8;
            static constexpr std::uintptr_t MR_MI_Opaque_TS = 0x108;
            static constexpr std::uintptr_t MR_MI_Opaque_Clearcoat_TS = 0x128;
            static constexpr std::uintptr_t MR_MI_Opaque_Sheen_TS = 0x148;
            static constexpr std::uintptr_t MR_MI_Opaque_Unlit_TS = 0x168;
            static constexpr std::uintptr_t MR_MI_Translucent_TS = 0x188;
            static constexpr std::uintptr_t MR_MI_Translucent_Clearcoat_TS = 0x1A8;
            static constexpr std::uintptr_t MR_MI_Transmission_TS = 0x1C8;
            static constexpr std::uintptr_t SG_MI_Opaque = 0x1E8;
            static constexpr std::uintptr_t SG_MI_Opaque_Clearcoat = 0x208;
            static constexpr std::uintptr_t SG_MI_Opaque_Sheen = 0x228;
            static constexpr std::uintptr_t SG_MI_Translucent = 0x248;
            static constexpr std::uintptr_t SG_MI_Translucent_Clearcoat = 0x268;
            static constexpr std::uintptr_t SG_MI_Transmission = 0x288;
            static constexpr std::uintptr_t SG_MI_Opaque_TS = 0x2A8;
            static constexpr std::uintptr_t SG_MI_Opaque_Clearcoat_TS = 0x2C8;
            static constexpr std::uintptr_t SG_MI_Opaque_Sheen_TS = 0x2E8;
            static constexpr std::uintptr_t SG_MI_Translucent_TS = 0x308;
            static constexpr std::uintptr_t SG_MI_Translucent_Clearcoat_TS = 0x328;
            static constexpr std::uintptr_t SG_MI_Transmission_TS = 0x348;
            static constexpr std::uintptr_t SG_MI_Foliage_TS = 0x368;
            static constexpr std::uintptr_t MR_MI_Foliage_TS = 0x388;
            static constexpr std::uintptr_t PlaceholderSphere = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"MR_MI_Opaque", 0x28, "SoftObjectProperty"},
            {"MR_MI_Opaque_Clearcoat", 0x48, "SoftObjectProperty"},
            {"MR_MI_Opaque_Sheen", 0x68, "SoftObjectProperty"},
            {"MR_MI_Opaque_Unlit", 0x88, "SoftObjectProperty"},
            {"MR_MI_Translucent", 0xA8, "SoftObjectProperty"},
            {"MR_MI_Translucent_Clearcoat", 0xC8, "SoftObjectProperty"},
            {"MR_MI_Transmission", 0xE8, "SoftObjectProperty"},
            {"MR_MI_Opaque_TS", 0x108, "SoftObjectProperty"},
            {"MR_MI_Opaque_Clearcoat_TS", 0x128, "SoftObjectProperty"},
            {"MR_MI_Opaque_Sheen_TS", 0x148, "SoftObjectProperty"},
            {"MR_MI_Opaque_Unlit_TS", 0x168, "SoftObjectProperty"},
            {"MR_MI_Translucent_TS", 0x188, "SoftObjectProperty"},
            {"MR_MI_Translucent_Clearcoat_TS", 0x1A8, "SoftObjectProperty"},
            {"MR_MI_Transmission_TS", 0x1C8, "SoftObjectProperty"},
            {"SG_MI_Opaque", 0x1E8, "SoftObjectProperty"},
            {"SG_MI_Opaque_Clearcoat", 0x208, "SoftObjectProperty"},
            {"SG_MI_Opaque_Sheen", 0x228, "SoftObjectProperty"},
            {"SG_MI_Translucent", 0x248, "SoftObjectProperty"},
            {"SG_MI_Translucent_Clearcoat", 0x268, "SoftObjectProperty"},
            {"SG_MI_Transmission", 0x288, "SoftObjectProperty"},
            {"SG_MI_Opaque_TS", 0x2A8, "SoftObjectProperty"},
            {"SG_MI_Opaque_Clearcoat_TS", 0x2C8, "SoftObjectProperty"},
            {"SG_MI_Opaque_Sheen_TS", 0x2E8, "SoftObjectProperty"},
            {"SG_MI_Translucent_TS", 0x308, "SoftObjectProperty"},
            {"SG_MI_Translucent_Clearcoat_TS", 0x328, "SoftObjectProperty"},
            {"SG_MI_Transmission_TS", 0x348, "SoftObjectProperty"},
            {"SG_MI_Foliage_TS", 0x368, "SoftObjectProperty"},
            {"MR_MI_Foliage_TS", 0x388, "SoftObjectProperty"},
            {"PlaceholderSphere", 0x3A8, "SoftObjectProperty"},
        }};
    };

}

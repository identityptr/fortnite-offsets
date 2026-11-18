#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MapDevice
{
    struct CRDMapCustomizationComponent
    {
        static constexpr std::string_view Name = "CRDMapCustomizationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureToLoad = 0xC0;
            static constexpr std::uintptr_t MaterialToLoad = 0xE0;
            static constexpr std::uintptr_t MapMaskMaterialToLoad = 0x100;
            static constexpr std::uintptr_t LoadedTexture = 0x120;
            static constexpr std::uintptr_t LoadedMapMaterial = 0x128;
            static constexpr std::uintptr_t LoadedMapMaskMaterial = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TextureToLoad", 0xC0, "SoftObjectProperty"},
            {"MaterialToLoad", 0xE0, "SoftObjectProperty"},
            {"MapMaskMaterialToLoad", 0x100, "SoftObjectProperty"},
            {"LoadedTexture", 0x120, "ObjectProperty"},
            {"LoadedMapMaterial", 0x128, "ObjectProperty"},
            {"LoadedMapMaskMaterial", 0x130, "ObjectProperty"},
        }};
    };

}

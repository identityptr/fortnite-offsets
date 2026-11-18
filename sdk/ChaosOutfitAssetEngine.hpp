#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosOutfitAssetEngine
{
    struct ChaosOutfit
    {
        static constexpr std::string_view Name = "ChaosOutfit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Pieces = 0x28;
            static constexpr std::uintptr_t Materials = 0x38;
            static constexpr std::uintptr_t OutfitCollection = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pieces", 0x28, "ArrayProperty"},
            {"Materials", 0x38, "ArrayProperty"},
            {"OutfitCollection", 0x48, "StructProperty"},
        }};
    };

    struct ChaosOutfitAsset
    {
        static constexpr std::string_view Name = "ChaosOutfitAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosClothAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pieces = 0x2B0;
            static constexpr std::uintptr_t Bodies = 0x2C0;
            static constexpr std::uintptr_t OutfitCollection = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pieces", 0x2B0, "ArrayProperty"},
            {"Bodies", 0x2C0, "ArrayProperty"},
            {"OutfitCollection", 0x2D0, "StructProperty"},
        }};
    };

    struct ChaosOutfitAssetBodyUserData
    {
        static constexpr std::string_view Name = "ChaosOutfitAssetBodyUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t Measurements = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Measurements", 0x28, "MapProperty"},
        }};
    };

}

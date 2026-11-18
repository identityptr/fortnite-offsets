#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RigLogicModule
{
    struct DNA
    {
        static constexpr std::string_view Name = "DNA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DNAConfig = 0x28;
            static constexpr std::uintptr_t bKeepDNAAfterInitialization = 0x90;
            static constexpr std::uintptr_t bUseOptimizedCooking = 0x91;
            static constexpr std::uintptr_t MetaData = 0x98;
            static constexpr std::uintptr_t RigLogicConfiguration = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DNAConfig", 0x28, "StructProperty"},
            {"bKeepDNAAfterInitialization", 0x90, "BoolProperty"},
            {"bUseOptimizedCooking", 0x91, "BoolProperty"},
            {"MetaData", 0x98, "MapProperty"},
            {"RigLogicConfiguration", 0xA8, "StructProperty"},
        }};
    };

    struct DNAAsset
    {
        static constexpr std::string_view Name = "DNAAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t DnaFileName = 0x28;
            static constexpr std::uintptr_t bKeepDNAAfterInitialization = 0x38;
            static constexpr std::uintptr_t MetaData = 0x40;
            static constexpr std::uintptr_t RigLogicConfiguration = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DnaFileName", 0x28, "StrProperty"},
            {"bKeepDNAAfterInitialization", 0x38, "BoolProperty"},
            {"MetaData", 0x40, "MapProperty"},
            {"RigLogicConfiguration", 0x50, "StructProperty"},
        }};
    };

    struct DNAAssetUserData
    {
        static constexpr std::string_view Name = "DNAAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t DNAAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DNAAsset", 0x28, "ObjectProperty"},
        }};
    };

    struct DNAConfigHolder
    {
        static constexpr std::string_view Name = "DNAConfigHolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Config", 0x28, "StructProperty"},
        }};
    };

    struct DNAIndexMapping
    {
        static constexpr std::string_view Name = "DNAIndexMapping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SkelMeshDNAUtils
    {
        static constexpr std::string_view Name = "SkelMeshDNAUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricMetasoundDataTypes
{
    struct FabricMetaSoundUserOption
    {
        static constexpr std::string_view Name = "FabricMetaSoundUserOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FabricUserOption = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FabricUserOption", 0x30, "StructProperty"},
        }};
    };

    struct FabricMetasoundDrumPlayerDataAsset
    {
        static constexpr std::string_view Name = "FabricMetasoundDrumPlayerDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleBanks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SampleBanks", 0x28, "ArrayProperty"},
        }};
    };

    struct FabricMetasoundDrumPlayerSampleBankAsset
    {
        static constexpr std::string_view Name = "FabricMetasoundDrumPlayerSampleBankAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleKitName = 0x28;
            static constexpr std::uintptr_t Samples = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SampleKitName", 0x28, "TextProperty"},
            {"Samples", 0x38, "ArrayProperty"},
        }};
    };

    struct FabricMetasoundInstrumentPlayerDataAsset
    {
        static constexpr std::string_view Name = "FabricMetasoundInstrumentPlayerDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Patch = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Patch", 0x28, "ObjectProperty"},
        }};
    };

    struct FabricMetasoundInstrumentPlayerDataAssetList
    {
        static constexpr std::string_view Name = "FabricMetasoundInstrumentPlayerDataAssetList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentPlayerData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstrumentPlayerData", 0x28, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MedallionUI
{
    struct AthenaInventoryGroupMedallion
    {
        static constexpr std::string_view Name = "AthenaInventoryGroupMedallion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaInventoryGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MedallionGameplayTag = 0x3B0;
            static constexpr std::uintptr_t ExclusionTag = 0x3B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MedallionGameplayTag", 0x3B0, "StructProperty"},
            {"ExclusionTag", 0x3B4, "StructProperty"},
        }};
    };

    struct AthenaInventoryGroupMinorMedallion
    {
        static constexpr std::string_view Name = "AthenaInventoryGroupMinorMedallion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaInventoryGroupMedallion";
        struct Offsets
        {
            static constexpr std::uintptr_t MedallionGameplayTag = 0x3B0;
            static constexpr std::uintptr_t ExclusionTag = 0x3B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MedallionGameplayTag", 0x3B0, "StructProperty"},
            {"ExclusionTag", 0x3B4, "StructProperty"},
        }};
    };

    struct MedallionsInfoWidget
    {
        static constexpr std::string_view Name = "MedallionsInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MedallionTag = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MedallionTag", 0x378, "StructProperty"},
        }};
    };

}

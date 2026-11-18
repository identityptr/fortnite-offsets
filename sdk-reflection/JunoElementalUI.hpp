#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoElementalUI
{
    struct JunoElementalAfflictionViewModel
    {
        static constexpr std::string_view Name = "JunoElementalAfflictionViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bEarthAfflictionActive = 0x68;
            static constexpr std::uintptr_t bFireAfflictionActive = 0x69;
            static constexpr std::uintptr_t bIceAfflictionActive = 0x6A;
            static constexpr std::uintptr_t bLightningAfflictionActive = 0x6B;
            static constexpr std::uintptr_t RepresentedOwner = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEarthAfflictionActive", 0x68, "BoolProperty"},
            {"bFireAfflictionActive", 0x69, "BoolProperty"},
            {"bIceAfflictionActive", 0x6A, "BoolProperty"},
            {"bLightningAfflictionActive", 0x6B, "BoolProperty"},
            {"RepresentedOwner", 0x70, "ObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PolarisInterstitials
{
    struct PolarisInterstitial
    {
        static constexpr std::string_view Name = "PolarisInterstitial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewModel", 0x28, "ObjectProperty"},
        }};
    };

    struct PolarisInterstitialVM
    {
        static constexpr std::string_view Name = "PolarisInterstitialVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldMarkAsShownOnPush = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShouldMarkAsShownOnPush", 0x68, "BoolProperty"},
        }};
    };

    struct PolarisInterstitialsChannel
    {
        static constexpr std::string_view Name = "PolarisInterstitialsChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Interstitials = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Interstitials", 0x130, "ArrayProperty"},
        }};
    };

}

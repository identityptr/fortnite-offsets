#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PolarisMotdUI
{
    struct PolarisMotdChannel
    {
        static constexpr std::string_view Name = "PolarisMotdChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionVM = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectionVM", 0x130, "ObjectProperty"},
        }};
    };

    struct PolarisMotdImageVM
    {
        static constexpr std::string_view Name = "PolarisMotdImageVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisMotdVM";
        struct Offsets
        {
            static constexpr std::uintptr_t TeaserDisplay = 0x90;
            static constexpr std::uintptr_t FullDisplay = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TeaserDisplay", 0x90, "StructProperty"},
            {"FullDisplay", 0xC8, "StructProperty"},
        }};
    };

    struct PolarisMotdSelectionVM
    {
        static constexpr std::string_view Name = "PolarisMotdSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MotdVMs = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MotdVMs", 0x68, "ArrayProperty"},
        }};
    };

    struct PolarisMotdVM
    {
        static constexpr std::string_view Name = "PolarisMotdVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Buttons = 0x68;
            static constexpr std::uintptr_t bIsVerticalTextLayout = 0x78;
            static constexpr std::uintptr_t PreviewDuration = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Buttons", 0x68, "ArrayProperty"},
            {"bIsVerticalTextLayout", 0x78, "BoolProperty"},
            {"PreviewDuration", 0x7C, "FloatProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoMockUI
{
    struct JunoMockDataAsset
    {
        static constexpr std::string_view Name = "JunoMockDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetClass = 0x28;
            static constexpr std::uintptr_t ViewModelName = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WidgetClass", 0x28, "SoftClassProperty"},
            {"ViewModelName", 0x48, "NameProperty"},
        }};
    };

    struct JunoMockUIPlayerSubsystem
    {
        static constexpr std::string_view Name = "JunoMockUIPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMockableView
    {
        static constexpr std::string_view Name = "JunoMockableView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

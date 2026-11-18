#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoFTUEModalUI
{
    struct JunoControllerComponent_FTUEModal
    {
        static constexpr std::string_view Name = "JunoControllerComponent_FTUEModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentReleaseModalDelaySeconds = 0xEC;
            static constexpr std::uintptr_t CurrentFTUEModalViewModel = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentReleaseModalDelaySeconds", 0xEC, "FloatProperty"},
            {"CurrentFTUEModalViewModel", 0xF0, "ObjectProperty"},
        }};
    };

    struct JunoFTUEModalCheatManager
    {
        static constexpr std::string_view Name = "JunoFTUEModalCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoFTUEModalViewModel
    {
        static constexpr std::string_view Name = "JunoFTUEModalViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetOverride = 0x78;
            static constexpr std::uintptr_t ContentPages = 0x98;
            static constexpr std::uintptr_t ModalVersion = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WidgetOverride", 0x78, "SoftClassProperty"},
            {"ContentPages", 0x98, "ArrayProperty"},
            {"ModalVersion", 0xA8, "IntProperty"},
        }};
    };

}

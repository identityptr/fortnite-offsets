#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ForbiddenFruitFrontEndUI
{
    struct ForbiddenFruitFrontendExperienceFlow
    {
        static constexpr std::string_view Name = "ForbiddenFruitFrontendExperienceFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowStepArray = 0x48;
            static constexpr std::uintptr_t SimpleBuildAndEditModalHelper = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FlowStepArray", 0x48, "ArrayProperty"},
            {"SimpleBuildAndEditModalHelper", 0x60, "ClassProperty"},
        }};
    };

    struct ForbiddenFruitLobbyWidgetVM
    {
        static constexpr std::string_view Name = "ForbiddenFruitLobbyWidgetVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsForbiddenFruitIsland = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsForbiddenFruitIsland", 0x68, "BoolProperty"},
        }};
    };

}

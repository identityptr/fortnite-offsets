#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::STW_DynamicHUD
{
    struct DynamicSTWHUDDirector
    {
        static constexpr std::string_view Name = "DynamicSTWHUDDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMenuSceneOpenedDelegate = 0x2A8;
            static constexpr std::uintptr_t OnAllMenuScenesClosedDelegate = 0x2B8;
            static constexpr std::uintptr_t OnMenuSceneClosedDelegate = 0x2C8;
            static constexpr std::uintptr_t HideWithMenuTags = 0x2D8;
            static constexpr std::uintptr_t CoverScene = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnMenuSceneOpenedDelegate", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnAllMenuScenesClosedDelegate", 0x2B8, "MulticastInlineDelegateProperty"},
            {"OnMenuSceneClosedDelegate", 0x2C8, "MulticastInlineDelegateProperty"},
            {"HideWithMenuTags", 0x2D8, "StructProperty"},
            {"CoverScene", 0x318, "ObjectProperty"},
        }};
    };

    struct STWDynamicUIDirectorComponent
    {
        static constexpr std::string_view Name = "STWDynamicUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultScenes", 0xC0, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseUIManagerInternal
{
    struct FortControllerComponent_VerseUIExtensionWidget
    {
        static constexpr std::string_view Name = "FortControllerComponent_VerseUIExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_UIExtensionWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseUIExtensionComponent = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseUIExtensionComponent", 0xD0, "ObjectProperty"},
        }};
    };

    struct VerseDynamicUIPanel
    {
        static constexpr std::string_view Name = "VerseDynamicUIPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveScenes = 0xE0;
            static constexpr std::uintptr_t ReplicatedWidgetList = 0x140;
            static constexpr std::uintptr_t LocalSceneObjects = 0x1A0;
            static constexpr std::uintptr_t LocalQueuedScenes = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActiveScenes", 0xE0, "StructProperty"},
            {"ReplicatedWidgetList", 0x140, "StructProperty"},
            {"LocalSceneObjects", 0x1A0, "MapProperty"},
            {"LocalQueuedScenes", 0x1B0, "MapProperty"},
        }};
    };

}

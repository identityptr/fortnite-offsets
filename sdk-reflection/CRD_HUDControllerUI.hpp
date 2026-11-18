#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_HUDControllerUI
{
    struct HUDControllerContainerBase
    {
        static constexpr std::string_view Name = "HUDControllerContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotViewModelClass = 0x310;
            static constexpr std::uintptr_t SlotContentWidgets = 0x318;
            static constexpr std::uintptr_t SlotViewModels = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlotViewModelClass", 0x310, "ClassProperty"},
            {"SlotContentWidgets", 0x318, "ArrayProperty"},
            {"SlotViewModels", 0x328, "ArrayProperty"},
        }};
    };

    struct HUDControllerDynamicUIDirector
    {
        static constexpr std::string_view Name = "HUDControllerDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInfoWidgetOverrideScene = 0x2A8;
            static constexpr std::uintptr_t QuickbarWidgetOverrideScene = 0x2B0;
            static constexpr std::uintptr_t EquippedItemWidgetOverrideScene = 0x2B8;
            static constexpr std::uintptr_t AddedScenes = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerInfoWidgetOverrideScene", 0x2A8, "ObjectProperty"},
            {"QuickbarWidgetOverrideScene", 0x2B0, "ObjectProperty"},
            {"EquippedItemWidgetOverrideScene", 0x2B8, "ObjectProperty"},
            {"AddedScenes", 0x2C0, "ArrayProperty"},
        }};
    };

    struct HUDControllerWidgetBase
    {
        static constexpr std::string_view Name = "HUDControllerWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelClass = 0x310;
            static constexpr std::uintptr_t ContentWidget = 0x318;
            static constexpr std::uintptr_t ViewModel = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ViewModelClass", 0x310, "ClassProperty"},
            {"ContentWidget", 0x318, "ObjectProperty"},
            {"ViewModel", 0x320, "ObjectProperty"},
        }};
    };

    struct HUDWidgetValidationLibrary
    {
        static constexpr std::string_view Name = "HUDWidgetValidationLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

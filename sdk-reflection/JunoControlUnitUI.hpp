#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoControlUnitUI
{
    struct FortMobileHUDWidgetContentComponent_VCUChannelIcon
    {
        static constexpr std::string_view Name = "FortMobileHUDWidgetContentComponent_VCUChannelIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHudWidgetContentComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelIconWidgetSoftClass = 0x78;
            static constexpr std::uintptr_t ChannelIndex = 0x98;
            static constexpr std::uintptr_t CurrentChannelIconWidget = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelIconWidgetSoftClass", 0x78, "SoftClassProperty"},
            {"ChannelIndex", 0x98, "IntProperty"},
            {"CurrentChannelIconWidget", 0xA0, "ObjectProperty"},
        }};
    };

    struct HUDWidgetBehaviorCondition_IsVCUChannelBound
    {
        static constexpr std::string_view Name = "HUDWidgetBehaviorCondition_IsVCUChannelBound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDWidgetBehaviorConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelTag = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelTag", 0x68, "StructProperty"},
        }};
    };

    struct JunoChannelIconControllerViewModel
    {
        static constexpr std::string_view Name = "JunoChannelIconControllerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoChannelIconData
    {
        static constexpr std::string_view Name = "JunoChannelIconData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t IconData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IconData", 0x28, "StructProperty"},
        }};
    };

    struct JunoChannelIconHUDViewModel
    {
        static constexpr std::string_view Name = "JunoChannelIconHUDViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoChannelIconViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBound = 0x88;
            static constexpr std::uintptr_t LinkedVCUs = 0x90;
            static constexpr std::uintptr_t OwningPlayerController = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsBound", 0x88, "BoolProperty"},
            {"LinkedVCUs", 0x90, "ArrayProperty"},
            {"OwningPlayerController", 0xA0, "WeakObjectProperty"},
        }};
    };

    struct JunoChannelIconViewModel
    {
        static constexpr std::string_view Name = "JunoChannelIconViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayNumber = 0x68;
            static constexpr std::uintptr_t ActiveVCU = 0x70;
            static constexpr std::uintptr_t ActiveChannelID = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayNumber", 0x68, "IntProperty"},
            {"ActiveVCU", 0x70, "ObjectProperty"},
            {"ActiveChannelID", 0x80, "StructProperty"},
        }};
    };

    struct JunoChannelSelectButtonViewModel
    {
        static constexpr std::string_view Name = "JunoChannelSelectButtonViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoChannelIconViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ToyAbilities = 0x88;
            static constexpr std::uintptr_t ChannelIndex = 0xAC;
            static constexpr std::uintptr_t bIsSender = 0xB0;
            static constexpr std::uintptr_t LegacyToyActor = 0xB4;
            static constexpr std::uintptr_t bIsChannelBound = 0xBC;
            static constexpr std::uintptr_t bIsLocked = 0xBD;
            static constexpr std::uintptr_t GroupIndex = 0xC0;
            static constexpr std::uintptr_t AbilityId = 0xC4;
            static constexpr std::uintptr_t GroupType = 0xC8;
            static constexpr std::uintptr_t OwningPlayerController = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ToyAbilities", 0x88, "SoftObjectProperty"},
            {"ChannelIndex", 0xAC, "IntProperty"},
            {"bIsSender", 0xB0, "BoolProperty"},
            {"LegacyToyActor", 0xB4, "WeakObjectProperty"},
            {"bIsChannelBound", 0xBC, "BoolProperty"},
            {"bIsLocked", 0xBD, "BoolProperty"},
            {"GroupIndex", 0xC0, "IntProperty"},
            {"AbilityId", 0xC4, "NameProperty"},
            {"GroupType", 0xC8, "StructProperty"},
            {"OwningPlayerController", 0xCC, "WeakObjectProperty"},
        }};
    };

    struct JunoDynamicUIDirectorVCUComponent
    {
        static constexpr std::string_view Name = "JunoDynamicUIDirectorVCUComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0xC8;
            static constexpr std::uintptr_t HudLayoutScenes = 0xD0;
            static constexpr std::uintptr_t WidgetPoolInitData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TaggedWidgetSceneData", 0xC8, "ObjectProperty"},
            {"HudLayoutScenes", 0xD0, "MapProperty"},
            {"WidgetPoolInitData", 0xE0, "ArrayProperty"},
        }};
    };

    struct JunoPowerManagerComponentVM
    {
        static constexpr std::string_view Name = "JunoPowerManagerComponentVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentPowerItem = 0x78;
            static constexpr std::uintptr_t CurrentPowerCapacity = 0x80;
            static constexpr std::uintptr_t MaxPowerCapacity = 0x84;
            static constexpr std::uintptr_t CurrentPowerCapacityPercent = 0x88;
            static constexpr std::uintptr_t CurrentPowerItemDurability = 0x8C;
            static constexpr std::uintptr_t MaxPowerItemDurability = 0x90;
            static constexpr std::uintptr_t RemainingPowerItemsCount = 0x94;
            static constexpr std::uintptr_t MaxPowerItemsCount = 0x98;
            static constexpr std::uintptr_t AttachedPowerCentersCount = 0x9C;
            static constexpr std::uintptr_t RefreshTime = 0xA0;
            static constexpr std::uintptr_t PowerSystemEnabled = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CurrentPowerItem", 0x78, "ObjectProperty"},
            {"CurrentPowerCapacity", 0x80, "FloatProperty"},
            {"MaxPowerCapacity", 0x84, "FloatProperty"},
            {"CurrentPowerCapacityPercent", 0x88, "FloatProperty"},
            {"CurrentPowerItemDurability", 0x8C, "FloatProperty"},
            {"MaxPowerItemDurability", 0x90, "FloatProperty"},
            {"RemainingPowerItemsCount", 0x94, "IntProperty"},
            {"MaxPowerItemsCount", 0x98, "IntProperty"},
            {"AttachedPowerCentersCount", 0x9C, "IntProperty"},
            {"RefreshTime", 0xA0, "FloatProperty"},
            {"PowerSystemEnabled", 0xA4, "BoolProperty"},
        }};
    };

    struct SelectedChannelObject
    {
        static constexpr std::string_view Name = "SelectedChannelObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayTag", 0x28, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomizableUIRuntime
{
    struct CustomLayoutConsumerInterface
    {
        static constexpr std::string_view Name = "CustomLayoutConsumerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableUICategory
    {
        static constexpr std::string_view Name = "CustomizableUICategory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
        }};
    };

    struct CustomizableUIDatabase
    {
        static constexpr std::string_view Name = "CustomizableUIDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableSceneRegistry = 0x58;
            static constexpr std::uintptr_t ActiveCategory = 0x90;
            static constexpr std::uintptr_t InactiveCategory = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CustomizableSceneRegistry", 0x58, "MapProperty"},
            {"ActiveCategory", 0x90, "ObjectProperty"},
            {"InactiveCategory", 0x98, "ObjectProperty"},
        }};
    };

    struct CustomizableUIDatabaseBuilder
    {
        static constexpr std::string_view Name = "CustomizableUIDatabaseBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableUIGameFeatureAlias
    {
        static constexpr std::string_view Name = "CustomizableUIGameFeatureAlias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
        }};
    };

    struct CustomizableUIPresetDefinition
    {
        static constexpr std::string_view Name = "CustomizableUIPresetDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneOverrides = 0x28;
            static constexpr std::uintptr_t ClassPropertyOverrides = 0x38;
            static constexpr std::uintptr_t InstancePropertyOverrides = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SceneOverrides", 0x28, "MapProperty"},
            {"ClassPropertyOverrides", 0x38, "MapProperty"},
            {"InstancePropertyOverrides", 0x48, "MapProperty"},
        }};
    };

    struct CustomizableUIRegistry
    {
        static constexpr std::string_view Name = "CustomizableUIRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneRegistry = 0x28;
            static constexpr std::uintptr_t PresetDefinitions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SceneRegistry", 0x28, "MapProperty"},
            {"PresetDefinitions", 0x38, "MapProperty"},
        }};
    };

    struct CustomizableUIRegistryProvider
    {
        static constexpr std::string_view Name = "CustomizableUIRegistryProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableUISceneSet
    {
        static constexpr std::string_view Name = "CustomizableUISceneSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t GameFeatureAlias = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"GameFeatureAlias", 0x38, "ObjectProperty"},
        }};
    };

    struct CustomizableWidgetDefinition
    {
        static constexpr std::string_view Name = "CustomizableWidgetDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableWidgetDefinitionData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomizableWidgetDefinitionData", 0x28, "StructProperty"},
        }};
    };

    struct CustomizableWidgetDefinition_Config
    {
        static constexpr std::string_view Name = "CustomizableWidgetDefinition_Config";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableWidgetDefinition_Inline
    {
        static constexpr std::string_view Name = "CustomizableWidgetDefinition_Inline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableWidgetDefinition_Config";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableWidgetDefinitionData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomizableWidgetDefinitionData", 0x28, "StructProperty"},
        }};
    };

    struct CustomizableWidgetDefinition_Reference
    {
        static constexpr std::string_view Name = "CustomizableWidgetDefinition_Reference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableWidgetDefinition_Config";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableWidgetDefinition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomizableWidgetDefinition", 0x28, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_AddCustomizableUIRegistries
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddCustomizableUIRegistries";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistriesToAdd = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegistriesToAdd", 0x30, "SetProperty"},
        }};
    };

    struct LayoutPreset
    {
        static constexpr std::string_view Name = "LayoutPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t RedirectTo = 0x38;
            static constexpr std::uintptr_t bIsDeprecated = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"RedirectTo", 0x38, "SoftObjectProperty"},
            {"bIsDeprecated", 0x58, "BoolProperty"},
        }};
    };

}

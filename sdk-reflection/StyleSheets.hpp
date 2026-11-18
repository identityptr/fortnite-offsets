#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StyleSheets
{
    struct GameFeatureAction_ActivateCompactUIStyleTheme
    {
        static constexpr std::string_view Name = "GameFeatureAction_ActivateCompactUIStyleTheme";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ThemeName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ThemeName", 0x28, "NameProperty"},
        }};
    };

    struct GameFeatureAction_ActivateStyleTheme
    {
        static constexpr std::string_view Name = "GameFeatureAction_ActivateStyleTheme";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ThemeName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ThemeName", 0x28, "NameProperty"},
        }};
    };

    struct GameFeatureAction_RegisterStyleThemes
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterStyleThemes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleThemeConfig = 0x28;
            static constexpr std::uintptr_t ThemesToActivate = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StyleThemeConfig", 0x28, "SoftObjectProperty"},
            {"ThemesToActivate", 0x48, "ArrayProperty"},
        }};
    };

    struct PropertyTweenContext
    {
        static constexpr std::string_view Name = "PropertyTweenContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyPath = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyPath", 0x28, "NameProperty"},
        }};
    };

    struct StylableWidget
    {
        static constexpr std::string_view Name = "StylableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StyleAnimationProvider
    {
        static constexpr std::string_view Name = "StyleAnimationProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetPropertyTweens = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetPropertyTweens", 0x28, "MapProperty"},
        }};
    };

    struct StyleProvider
    {
        static constexpr std::string_view Name = "StyleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleRuleTree = 0x40;
            static constexpr std::uintptr_t StyleAnimationProvider = 0x48;
            static constexpr std::uintptr_t StyledWidgetTree = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StyleRuleTree", 0x40, "WeakObjectProperty"},
            {"StyleAnimationProvider", 0x48, "WeakObjectProperty"},
            {"StyledWidgetTree", 0x50, "ObjectProperty"},
        }};
    };

    struct StyleRule
    {
        static constexpr std::string_view Name = "StyleRule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x28;
            static constexpr std::uintptr_t StyleSelectorItem = 0x38;
            static constexpr std::uintptr_t Parent = 0x48;
            static constexpr std::uintptr_t Style = 0x50;
            static constexpr std::uintptr_t RuleId = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Children", 0x28, "ArrayProperty"},
            {"StyleSelectorItem", 0x38, "StructProperty"},
            {"Parent", 0x48, "WeakObjectProperty"},
            {"Style", 0x50, "StructProperty"},
            {"RuleId", 0xA0, "StructProperty"},
        }};
    };

    struct StyleRuleTree
    {
        static constexpr std::string_view Name = "StyleRuleTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleSheetCollections = 0x40;
            static constexpr std::uintptr_t StyleRuleEntries = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StyleSheetCollections", 0x40, "ArrayProperty"},
            {"StyleRuleEntries", 0x50, "ArrayProperty"},
        }};
    };

    struct StyleSheet
    {
        static constexpr std::string_view Name = "StyleSheet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleRules = 0x28;
            static constexpr std::uintptr_t Settings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StyleRules", 0x28, "ArrayProperty"},
            {"Settings", 0x38, "StructProperty"},
        }};
    };

    struct StyleSheetCollection
    {
        static constexpr std::string_view Name = "StyleSheetCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleSheets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StyleSheets", 0x28, "ArrayProperty"},
        }};
    };

    struct StyleSheetInstance
    {
        static constexpr std::string_view Name = "StyleSheetInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StyleSheet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x78;
            static constexpr std::uintptr_t RuleOverrides = 0x80;
            static constexpr std::uintptr_t CachedMergedRules = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Parent", 0x78, "ObjectProperty"},
            {"RuleOverrides", 0x80, "MapProperty"},
            {"CachedMergedRules", 0x90, "ArrayProperty"},
        }};
    };

    struct StyleSheetsSettings
    {
        static constexpr std::string_view Name = "StyleSheetsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetTypes = 0x28;
            static constexpr std::uintptr_t StyleThemeConfig = 0x38;
            static constexpr std::uintptr_t bAllowAssigningStyleTagsToWidgets = 0x58;
            static constexpr std::uintptr_t bDeprecated = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WidgetTypes", 0x28, "ArrayProperty"},
            {"StyleThemeConfig", 0x38, "SoftObjectProperty"},
            {"bAllowAssigningStyleTagsToWidgets", 0x58, "BoolProperty"},
            {"bDeprecated", 0x59, "BoolProperty"},
        }};
    };

    struct StyleSheetsSubsystem
    {
        static constexpr std::string_view Name = "StyleSheetsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t EditorStyleTagFinder = 0x30;
            static constexpr std::uintptr_t StyleRuleTree = 0x38;
            static constexpr std::uintptr_t StyleAnimationProvider = 0x40;
            static constexpr std::uintptr_t StyleProvider = 0x48;
            static constexpr std::uintptr_t StyleThemeProvider = 0x50;
            static constexpr std::uintptr_t StyleTagFinder = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EditorStyleTagFinder", 0x30, "ObjectProperty"},
            {"StyleRuleTree", 0x38, "ObjectProperty"},
            {"StyleAnimationProvider", 0x40, "ObjectProperty"},
            {"StyleProvider", 0x48, "ObjectProperty"},
            {"StyleThemeProvider", 0x50, "ObjectProperty"},
            {"StyleTagFinder", 0x58, "ObjectProperty"},
        }};
    };

    struct StyleTagFinder
    {
        static constexpr std::string_view Name = "StyleTagFinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StyleThemeConfig
    {
        static constexpr std::string_view Name = "StyleThemeConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x28, "ArrayProperty"},
        }};
    };

    struct StyleThemeProvider
    {
        static constexpr std::string_view Name = "StyleThemeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleRuleTree = 0x28;
            static constexpr std::uintptr_t ThemeConfigSourceMap = 0x30;
            static constexpr std::uintptr_t ActiveThemeNames = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StyleRuleTree", 0x28, "WeakObjectProperty"},
            {"ThemeConfigSourceMap", 0x30, "MapProperty"},
            {"ActiveThemeNames", 0x40, "SetProperty"},
        }};
    };

    struct StyledWidgetTree
    {
        static constexpr std::string_view Name = "StyledWidgetTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleProvider = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StyleProvider", 0x28, "WeakObjectProperty"},
        }};
    };

    struct WidgetBlueprintGeneratedClassExtension_StyleClass
    {
        static constexpr std::string_view Name = "WidgetBlueprintGeneratedClassExtension_StyleClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBlueprintGeneratedClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyleTagMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetStyleTagMap", 0x28, "MapProperty"},
        }};
    };

}

/**
 * decamp dumper generated SDK
 * Package: /Script/StyleSheets
 */
#pragma once
#include "Basic.h"

// /Script/StyleSheets.StyleAnimationData
// Kind: ScriptStruct; super: none
struct FStyleAnimationData
{
public:
    float Delay; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Easing; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStyleAnimationData, Delay) == 0, "Offset mismatch for FStyleAnimationData::Delay");
static_assert(offsetof(FStyleAnimationData, duration) == 4, "Offset mismatch for FStyleAnimationData::duration");
static_assert(offsetof(FStyleAnimationData, Easing) == 8, "Offset mismatch for FStyleAnimationData::Easing");

// /Script/StyleSheets.StyleClass
// Kind: ScriptStruct; super: none
struct FStyleClass
{
public:
    std::uint8_t StylePropertyBag[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> PropertyAnimations; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MaterialParameters; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FStyleClass, StylePropertyBag) == 0, "Offset mismatch for FStyleClass::StylePropertyBag");
static_assert(offsetof(FStyleClass, PropertyAnimations) == 16, "Offset mismatch for FStyleClass::PropertyAnimations");
static_assert(offsetof(FStyleClass, MaterialParameters) == 32, "Offset mismatch for FStyleClass::MaterialParameters");

// /Script/StyleSheets.StylePropertyStore
// Kind: ScriptStruct; super: none
struct FStylePropertyStore
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StyleSheets.StyleRuleEntry
// Kind: ScriptStruct; super: none
struct FStyleRuleEntry
{
public:
    TArray<void*> SelectorItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* StyleRule; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStyleRuleEntry, SelectorItems) == 0, "Offset mismatch for FStyleRuleEntry::SelectorItems");
static_assert(offsetof(FStyleRuleEntry, StyleRule) == 16, "Offset mismatch for FStyleRuleEntry::StyleRule");

// /Script/StyleSheets.StyleRuleOverride
// Kind: ScriptStruct; super: none
struct FStyleRuleOverride
{
public:
    std::uint8_t Properties[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> MaterialParameters; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FStyleRuleOverride, Properties) == 0, "Offset mismatch for FStyleRuleOverride::Properties");
static_assert(offsetof(FStyleRuleOverride, MaterialParameters) == 16, "Offset mismatch for FStyleRuleOverride::MaterialParameters");

// /Script/StyleSheets.StyleRulePreviewInfo
// Kind: ScriptStruct; super: none
struct FStyleRulePreviewInfo
{
public:
    FString StyleDescription; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* PreviewWidgetClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PreviewPropertyBag[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> PreviewAncestorStyleTags; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStyleRulePreviewInfo, StyleDescription) == 0, "Offset mismatch for FStyleRulePreviewInfo::StyleDescription");
static_assert(offsetof(FStyleRulePreviewInfo, PreviewWidgetClass) == 16, "Offset mismatch for FStyleRulePreviewInfo::PreviewWidgetClass");
static_assert(offsetof(FStyleRulePreviewInfo, PreviewPropertyBag) == 24, "Offset mismatch for FStyleRulePreviewInfo::PreviewPropertyBag");
static_assert(offsetof(FStyleRulePreviewInfo, PreviewAncestorStyleTags) == 40, "Offset mismatch for FStyleRulePreviewInfo::PreviewAncestorStyleTags");

// /Script/StyleSheets.StyleSelectorItem
// Kind: ScriptStruct; super: none
struct FStyleSelectorItem
{
public:
    TArray<void*> Targets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStyleSelectorItem, Targets) == 0, "Offset mismatch for FStyleSelectorItem::Targets");

// /Script/StyleSheets.StyleSheetSettings
// Kind: ScriptStruct; super: none
struct FStyleSheetSettings
{
public:
    FString Description; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> StylableWidgetClasses; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStyleSheetSettings, Description) == 0, "Offset mismatch for FStyleSheetSettings::Description");
static_assert(offsetof(FStyleSheetSettings, StylableWidgetClasses) == 16, "Offset mismatch for FStyleSheetSettings::StylableWidgetClasses");

// /Script/StyleSheets.StyleTag
// Kind: ScriptStruct; super: StyleSelectorItem
struct FStyleTag
{
public:
    TArray<void*> Targets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStyleTag, Targets) == 0, "Offset mismatch for FStyleTag::Targets");

// /Script/StyleSheets.StyleThemeConfigEntry
// Kind: ScriptStruct; super: none
struct FStyleThemeConfigEntry
{
public:
    FName ThemeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Theme[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* ThemeInstance; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStyleThemeConfigEntry, ThemeName) == 0, "Offset mismatch for FStyleThemeConfigEntry::ThemeName");
static_assert(offsetof(FStyleThemeConfigEntry, Theme) == 8, "Offset mismatch for FStyleThemeConfigEntry::Theme");
static_assert(offsetof(FStyleThemeConfigEntry, ThemeInstance) == 40, "Offset mismatch for FStyleThemeConfigEntry::ThemeInstance");

// /Script/StyleSheets.StyleThemeConfigKey
// Kind: ScriptStruct; super: none
struct FStyleThemeConfigKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StyleSheets.WidgetProperty
// Kind: ScriptStruct; super: none
struct FWidgetProperty
{
public:
    TWeakObjectPtr<void> Widget; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    FName PropertyPath; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FWidgetProperty, Widget) == 0, "Offset mismatch for FWidgetProperty::Widget");
static_assert(offsetof(FWidgetProperty, PropertyPath) == 8, "Offset mismatch for FWidgetProperty::PropertyPath");

// /Script/StyleSheets.WidgetTypeEntry
// Kind: ScriptStruct; super: none
struct FWidgetTypeEntry
{
public:
    std::uint8_t WidgetType[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> WidgetClasses; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWidgetTypeEntry, WidgetType) == 0, "Offset mismatch for FWidgetTypeEntry::WidgetType");
static_assert(offsetof(FWidgetTypeEntry, WidgetClasses) == 8, "Offset mismatch for FWidgetTypeEntry::WidgetClasses");

// /Script/StyleSheets.GameFeatureAction_ActivateCompactUIStyleTheme
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ActivateCompactUIStyleTheme
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ThemeName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UGameFeatureAction_ActivateCompactUIStyleTheme, ThemeName) == 40, "Offset mismatch for UGameFeatureAction_ActivateCompactUIStyleTheme::ThemeName");

// /Script/StyleSheets.GameFeatureAction_ActivateStyleTheme
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ActivateStyleTheme
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ThemeName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UGameFeatureAction_ActivateStyleTheme, ThemeName) == 40, "Offset mismatch for UGameFeatureAction_ActivateStyleTheme::ThemeName");

// /Script/StyleSheets.GameFeatureAction_RegisterStyleThemes
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterStyleThemes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StyleThemeConfig[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ThemesToActivate; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterStyleThemes, StyleThemeConfig) == 40, "Offset mismatch for UGameFeatureAction_RegisterStyleThemes::StyleThemeConfig");
static_assert(offsetof(UGameFeatureAction_RegisterStyleThemes, ThemesToActivate) == 72, "Offset mismatch for UGameFeatureAction_RegisterStyleThemes::ThemesToActivate");

// /Script/StyleSheets.PropertyTweenContext
// Kind: Class; super: Object
class UPropertyTweenContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName PropertyPath; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPropertyTweenContext, PropertyPath) == 40, "Offset mismatch for UPropertyTweenContext::PropertyPath");

// /Script/StyleSheets.StylableWidget
// Kind: Class; super: Interface
class UStylableWidget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StyleSheets.StyleAnimationProvider
// Kind: Class; super: Object
class UStyleAnimationProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> WidgetPropertyTweens; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStyleAnimationProvider, WidgetPropertyTweens) == 40, "Offset mismatch for UStyleAnimationProvider::WidgetPropertyTweens");

// /Script/StyleSheets.StyleProvider
// Kind: Class; super: Object
class UStyleProvider
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> StyleRuleTree; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> StyleAnimationProvider; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    void* StyledWidgetTree; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStyleProvider, StyleRuleTree) == 72, "Offset mismatch for UStyleProvider::StyleRuleTree");
static_assert(offsetof(UStyleProvider, StyleAnimationProvider) == 80, "Offset mismatch for UStyleProvider::StyleAnimationProvider");
static_assert(offsetof(UStyleProvider, StyledWidgetTree) == 88, "Offset mismatch for UStyleProvider::StyledWidgetTree");

// /Script/StyleSheets.StyleRule
// Kind: Class; super: Object
class UStyleRule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Children; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StyleSelectorItem[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> Parent; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Style[0x50]; // 0x0050 (Size: 0x50, Type: StructProperty)
    std::uint8_t RuleId[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStyleRule, Children) == 40, "Offset mismatch for UStyleRule::Children");
static_assert(offsetof(UStyleRule, StyleSelectorItem) == 56, "Offset mismatch for UStyleRule::StyleSelectorItem");
static_assert(offsetof(UStyleRule, Parent) == 72, "Offset mismatch for UStyleRule::Parent");
static_assert(offsetof(UStyleRule, Style) == 80, "Offset mismatch for UStyleRule::Style");
static_assert(offsetof(UStyleRule, RuleId) == 160, "Offset mismatch for UStyleRule::RuleId");

// /Script/StyleSheets.StyleRuleTree
// Kind: Class; super: Object
class UStyleRuleTree
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> StyleSheetCollections; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StyleRuleEntries; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStyleRuleTree, StyleSheetCollections) == 64, "Offset mismatch for UStyleRuleTree::StyleSheetCollections");
static_assert(offsetof(UStyleRuleTree, StyleRuleEntries) == 80, "Offset mismatch for UStyleRuleTree::StyleRuleEntries");

// /Script/StyleSheets.StyleSheet
// Kind: Class; super: Object
class UStyleSheet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StyleRules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Settings[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStyleSheet, StyleRules) == 40, "Offset mismatch for UStyleSheet::StyleRules");
static_assert(offsetof(UStyleSheet, Settings) == 56, "Offset mismatch for UStyleSheet::Settings");

// /Script/StyleSheets.StyleSheetCollection
// Kind: Class; super: DataAsset
class UStyleSheetCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StyleSheets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStyleSheetCollection, StyleSheets) == 40, "Offset mismatch for UStyleSheetCollection::StyleSheets");

// /Script/StyleSheets.StyleSheetInstance
// Kind: Class; super: StyleSheet
class UStyleSheetInstance
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* Parent; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> RuleOverrides; // 0x0068 (Size: 0x10, Type: MapProperty)
    TArray<void*> CachedMergedRules; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStyleSheetInstance, Parent) == 96, "Offset mismatch for UStyleSheetInstance::Parent");
static_assert(offsetof(UStyleSheetInstance, RuleOverrides) == 104, "Offset mismatch for UStyleSheetInstance::RuleOverrides");
static_assert(offsetof(UStyleSheetInstance, CachedMergedRules) == 120, "Offset mismatch for UStyleSheetInstance::CachedMergedRules");

// /Script/StyleSheets.StyleSheetsSettings
// Kind: Class; super: Object
class UStyleSheetsSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> WidgetTypes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StyleThemeConfig[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowAssigningStyleTagsToWidgets; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeprecated; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStyleSheetsSettings, WidgetTypes) == 40, "Offset mismatch for UStyleSheetsSettings::WidgetTypes");
static_assert(offsetof(UStyleSheetsSettings, StyleThemeConfig) == 56, "Offset mismatch for UStyleSheetsSettings::StyleThemeConfig");
static_assert(offsetof(UStyleSheetsSettings, bAllowAssigningStyleTagsToWidgets) == 88, "Offset mismatch for UStyleSheetsSettings::bAllowAssigningStyleTagsToWidgets");
static_assert(offsetof(UStyleSheetsSettings, bDeprecated) == 89, "Offset mismatch for UStyleSheetsSettings::bDeprecated");

// /Script/StyleSheets.StyleSheetsSubsystem
// Kind: Class; super: EngineSubsystem
class UStyleSheetsSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* EditorStyleTagFinder; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StyleRuleTree; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* StyleAnimationProvider; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* StyleProvider; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* StyleThemeProvider; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* StyleTagFinder; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStyleSheetsSubsystem, EditorStyleTagFinder) == 48, "Offset mismatch for UStyleSheetsSubsystem::EditorStyleTagFinder");
static_assert(offsetof(UStyleSheetsSubsystem, StyleRuleTree) == 56, "Offset mismatch for UStyleSheetsSubsystem::StyleRuleTree");
static_assert(offsetof(UStyleSheetsSubsystem, StyleAnimationProvider) == 64, "Offset mismatch for UStyleSheetsSubsystem::StyleAnimationProvider");
static_assert(offsetof(UStyleSheetsSubsystem, StyleProvider) == 72, "Offset mismatch for UStyleSheetsSubsystem::StyleProvider");
static_assert(offsetof(UStyleSheetsSubsystem, StyleThemeProvider) == 80, "Offset mismatch for UStyleSheetsSubsystem::StyleThemeProvider");
static_assert(offsetof(UStyleSheetsSubsystem, StyleTagFinder) == 88, "Offset mismatch for UStyleSheetsSubsystem::StyleTagFinder");

// /Script/StyleSheets.StyleTagFinder
// Kind: Class; super: Object
class UStyleTagFinder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StyleSheets.StyleThemeConfig
// Kind: Class; super: DataAsset
class UStyleThemeConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Entries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStyleThemeConfig, Entries) == 40, "Offset mismatch for UStyleThemeConfig::Entries");

// /Script/StyleSheets.StyleThemeProvider
// Kind: Class; super: Object
class UStyleThemeProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> StyleRuleTree; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> ThemeConfigSourceMap; // 0x0030 (Size: 0x10, Type: MapProperty)
    TSet<void*> ActiveThemeNames; // 0x0040 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UStyleThemeProvider, StyleRuleTree) == 40, "Offset mismatch for UStyleThemeProvider::StyleRuleTree");
static_assert(offsetof(UStyleThemeProvider, ThemeConfigSourceMap) == 48, "Offset mismatch for UStyleThemeProvider::ThemeConfigSourceMap");
static_assert(offsetof(UStyleThemeProvider, ActiveThemeNames) == 64, "Offset mismatch for UStyleThemeProvider::ActiveThemeNames");

// /Script/StyleSheets.StyledWidgetTree
// Kind: Class; super: Object
class UStyledWidgetTree
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> StyleProvider; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UStyledWidgetTree, StyleProvider) == 40, "Offset mismatch for UStyledWidgetTree::StyleProvider");

// /Script/StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass
// Kind: Class; super: WidgetBlueprintGeneratedClassExtension
class UWidgetBlueprintGeneratedClassExtension_StyleClass
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> WidgetStyleTagMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UWidgetBlueprintGeneratedClassExtension_StyleClass, WidgetStyleTagMap) == 40, "Offset mismatch for UWidgetBlueprintGeneratedClassExtension_StyleClass::WidgetStyleTagMap");

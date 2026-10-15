/**
 * decamp dumper generated SDK
 * Package: /Script/MeshCosmeticsUI
 */
#pragma once
#include "Basic.h"

// /Script/MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
// Kind: ScriptStruct; super: none
struct FFortVariantRedirectorTileLoadedEmoteToRandomize
{
public:
    void* LoadedEmote; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVariantRedirectorTileLoadedEmoteToRandomize, LoadedEmote) == 0, "Offset mismatch for FFortVariantRedirectorTileLoadedEmoteToRandomize::LoadedEmote");

// /Script/MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
// Kind: ScriptStruct; super: none
struct FFortVariantSprayCustomizerChannelOptions
{
public:
    std::uint8_t RotationOffset[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVariantSprayCustomizerChannelOptions, RotationOffset) == 0, "Offset mismatch for FFortVariantSprayCustomizerChannelOptions::RotationOffset");

// /Script/MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
// Kind: ScriptStruct; super: none
struct FFortVariantSprayCustomizerCosmeticOptions
{
public:
    TArray<void*> ItemShopPreviewStyles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ChannelOptions; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortVariantSprayCustomizerCosmeticOptions, ItemShopPreviewStyles) == 0, "Offset mismatch for FFortVariantSprayCustomizerCosmeticOptions::ItemShopPreviewStyles");
static_assert(offsetof(FFortVariantSprayCustomizerCosmeticOptions, ChannelOptions) == 16, "Offset mismatch for FFortVariantSprayCustomizerCosmeticOptions::ChannelOptions");

// /Script/MeshCosmeticsUI.FortVariantRedirectorTile
// Kind: Class; super: FortVariantEditorWidgetBase
class UFortVariantRedirectorTile
{
public:
    std::uint8_t Pad_0000[0x3C8]; // 0x0000
    void* EntryBox_VariantOptions; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* Text_VariantName; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SprayCustomizerClass[0x20]; // 0x03D8 (Size: 0x20, Type: SoftClassProperty)
    void* SprayCustomizerConfig; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClearAllSlotsInputAction[0x10]; // 0x0400 (Size: 0x10, Type: StructProperty)
    std::uint8_t RandomizeSpraysInputAction[0x10]; // 0x0410 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> ItemDefinition; // 0x0420 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> LoadedEmotesToRandomize; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnVariantEngagedEvent; // 0x0438 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortVariantRedirectorTile, EntryBox_VariantOptions) == 968, "Offset mismatch for UFortVariantRedirectorTile::EntryBox_VariantOptions");
static_assert(offsetof(UFortVariantRedirectorTile, Text_VariantName) == 976, "Offset mismatch for UFortVariantRedirectorTile::Text_VariantName");
static_assert(offsetof(UFortVariantRedirectorTile, SprayCustomizerClass) == 984, "Offset mismatch for UFortVariantRedirectorTile::SprayCustomizerClass");
static_assert(offsetof(UFortVariantRedirectorTile, SprayCustomizerConfig) == 1016, "Offset mismatch for UFortVariantRedirectorTile::SprayCustomizerConfig");
static_assert(offsetof(UFortVariantRedirectorTile, ClearAllSlotsInputAction) == 1024, "Offset mismatch for UFortVariantRedirectorTile::ClearAllSlotsInputAction");
static_assert(offsetof(UFortVariantRedirectorTile, RandomizeSpraysInputAction) == 1040, "Offset mismatch for UFortVariantRedirectorTile::RandomizeSpraysInputAction");
static_assert(offsetof(UFortVariantRedirectorTile, ItemDefinition) == 1056, "Offset mismatch for UFortVariantRedirectorTile::ItemDefinition");
static_assert(offsetof(UFortVariantRedirectorTile, LoadedEmotesToRandomize) == 1064, "Offset mismatch for UFortVariantRedirectorTile::LoadedEmotesToRandomize");
static_assert(offsetof(UFortVariantRedirectorTile, OnVariantEngagedEvent) == 1080, "Offset mismatch for UFortVariantRedirectorTile::OnVariantEngagedEvent");

// /Script/MeshCosmeticsUI.FortVariantRedirectorTileButton
// Kind: Class; super: CommonButtonBase
class UFortVariantRedirectorTileButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    void* ImageOverlay; // 0x15A0 (Size: 0x8, Type: ObjectProperty)
    void* LazyImage_TileIcon; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayMode; // 0x15B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x15B1
    float SlotOpacitySprayAssigned; // 0x15B4 (Size: 0x4, Type: FloatProperty)
    float SlotOpacitySprayNotAssigned; // 0x15B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVariantRedirectorTileButton, ImageOverlay) == 5536, "Offset mismatch for UFortVariantRedirectorTileButton::ImageOverlay");
static_assert(offsetof(UFortVariantRedirectorTileButton, LazyImage_TileIcon) == 5544, "Offset mismatch for UFortVariantRedirectorTileButton::LazyImage_TileIcon");
static_assert(offsetof(UFortVariantRedirectorTileButton, DisplayMode) == 5552, "Offset mismatch for UFortVariantRedirectorTileButton::DisplayMode");
static_assert(offsetof(UFortVariantRedirectorTileButton, SlotOpacitySprayAssigned) == 5556, "Offset mismatch for UFortVariantRedirectorTileButton::SlotOpacitySprayAssigned");
static_assert(offsetof(UFortVariantRedirectorTileButton, SlotOpacitySprayNotAssigned) == 5560, "Offset mismatch for UFortVariantRedirectorTileButton::SlotOpacitySprayNotAssigned");

// /Script/MeshCosmeticsUI.FortVariantSprayCustomizer
// Kind: Class; super: FortItemPreviewScreen
class UFortVariantSprayCustomizer
{
public:
    std::uint8_t Pad_0000[0x7C8]; // 0x0000
    void* Button_Back; // 0x07C8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Confirm; // 0x07D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_HideArchivedItems; // 0x07D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ShowArchivedItems; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ArchivedItemsButtons; // 0x07E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_SpraysTab; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SettingsTab; // 0x07F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_TouchClose; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_TabLeft; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_TabRight; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Tabs; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Sprays; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Settings; // 0x0828 (Size: 0x8, Type: ObjectProperty)
    void* TexturePicker_Sprays; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    void* Setting_Saturation; // 0x0838 (Size: 0x8, Type: ObjectProperty)
    void* Setting_Wear; // 0x0840 (Size: 0x8, Type: ObjectProperty)
    void* Setting_Scale; // 0x0848 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TabLeftAction[0x10]; // 0x0850 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabRightAction[0x10]; // 0x0860 (Size: 0x10, Type: StructProperty)
    std::uint8_t ItemShopPreviewSceneChangerTag[0x8]; // 0x0870 (Size: 0x8, Type: StructProperty)
    void* TabButtonGroup; // 0x0878 (Size: 0x8, Type: ObjectProperty)
    void* SprayVariant; // 0x0880 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVariantSprayCustomizer, Button_Back) == 1992, "Offset mismatch for UFortVariantSprayCustomizer::Button_Back");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_Confirm) == 2000, "Offset mismatch for UFortVariantSprayCustomizer::Button_Confirm");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_HideArchivedItems) == 2008, "Offset mismatch for UFortVariantSprayCustomizer::Button_HideArchivedItems");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_ShowArchivedItems) == 2016, "Offset mismatch for UFortVariantSprayCustomizer::Button_ShowArchivedItems");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_ArchivedItemsButtons) == 2024, "Offset mismatch for UFortVariantSprayCustomizer::Widget_ArchivedItemsButtons");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_SpraysTab) == 2032, "Offset mismatch for UFortVariantSprayCustomizer::Button_SpraysTab");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_SettingsTab) == 2040, "Offset mismatch for UFortVariantSprayCustomizer::Button_SettingsTab");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_TouchClose) == 2048, "Offset mismatch for UFortVariantSprayCustomizer::Button_TouchClose");
static_assert(offsetof(UFortVariantSprayCustomizer, ActionWidget_TabLeft) == 2056, "Offset mismatch for UFortVariantSprayCustomizer::ActionWidget_TabLeft");
static_assert(offsetof(UFortVariantSprayCustomizer, ActionWidget_TabRight) == 2064, "Offset mismatch for UFortVariantSprayCustomizer::ActionWidget_TabRight");
static_assert(offsetof(UFortVariantSprayCustomizer, Switcher_Tabs) == 2072, "Offset mismatch for UFortVariantSprayCustomizer::Switcher_Tabs");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_Sprays) == 2080, "Offset mismatch for UFortVariantSprayCustomizer::Widget_Sprays");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_Settings) == 2088, "Offset mismatch for UFortVariantSprayCustomizer::Widget_Settings");
static_assert(offsetof(UFortVariantSprayCustomizer, TexturePicker_Sprays) == 2096, "Offset mismatch for UFortVariantSprayCustomizer::TexturePicker_Sprays");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Saturation) == 2104, "Offset mismatch for UFortVariantSprayCustomizer::Setting_Saturation");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Wear) == 2112, "Offset mismatch for UFortVariantSprayCustomizer::Setting_Wear");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Scale) == 2120, "Offset mismatch for UFortVariantSprayCustomizer::Setting_Scale");
static_assert(offsetof(UFortVariantSprayCustomizer, TabLeftAction) == 2128, "Offset mismatch for UFortVariantSprayCustomizer::TabLeftAction");
static_assert(offsetof(UFortVariantSprayCustomizer, TabRightAction) == 2144, "Offset mismatch for UFortVariantSprayCustomizer::TabRightAction");
static_assert(offsetof(UFortVariantSprayCustomizer, ItemShopPreviewSceneChangerTag) == 2160, "Offset mismatch for UFortVariantSprayCustomizer::ItemShopPreviewSceneChangerTag");
static_assert(offsetof(UFortVariantSprayCustomizer, TabButtonGroup) == 2168, "Offset mismatch for UFortVariantSprayCustomizer::TabButtonGroup");
static_assert(offsetof(UFortVariantSprayCustomizer, SprayVariant) == 2176, "Offset mismatch for UFortVariantSprayCustomizer::SprayVariant");

// /Script/MeshCosmeticsUI.FortVariantSprayCustomizerConfig
// Kind: Class; super: DataAsset
class UFortVariantSprayCustomizerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SprayCustomizerOptions; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortVariantSprayCustomizerConfig, SprayCustomizerOptions) == 40, "Offset mismatch for UFortVariantSprayCustomizerConfig::SprayCustomizerOptions");

// /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting
// Kind: Class; super: UserWidget
class UFortVariantSprayCustomizerSetting
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Slider_Value; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    float CommitDelay; // 0x0310 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVariantSprayCustomizerSetting, Slider_Value) == 776, "Offset mismatch for UFortVariantSprayCustomizerSetting::Slider_Value");
static_assert(offsetof(UFortVariantSprayCustomizerSetting, CommitDelay) == 784, "Offset mismatch for UFortVariantSprayCustomizerSetting::CommitDelay");

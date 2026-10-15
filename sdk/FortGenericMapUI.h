/**
 * decamp dumper generated SDK
 * Package: /Script/FortGenericMapUI
 */
#pragma once
#include "Basic.h"

// /Script/FortGenericMapUI.FortGenericCustomMapElement
// Kind: ScriptStruct; super: none
struct FFortGenericCustomMapElement
{
public:
    std::uint8_t SlateBrush[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t WorldLocation[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VisibilityQuery[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGenericCustomMapElement, SlateBrush) == 0, "Offset mismatch for FFortGenericCustomMapElement::SlateBrush");
static_assert(offsetof(FFortGenericCustomMapElement, WorldLocation) == 176, "Offset mismatch for FFortGenericCustomMapElement::WorldLocation");
static_assert(offsetof(FFortGenericCustomMapElement, VisibilityQuery) == 200, "Offset mismatch for FFortGenericCustomMapElement::VisibilityQuery");

// /Script/FortGenericMapUI.FortGenericMapBlockingWidgetData
// Kind: ScriptStruct; super: none
struct FFortGenericMapBlockingWidgetData
{
public:
    std::uint8_t WidgetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bClampLeft; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampRight; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampTop; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampBottom; // 0x0007 (Size: 0x1, Type: BoolProperty)
    void* WidgetReference; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortGenericMapBlockingWidgetData, WidgetName) == 0, "Offset mismatch for FFortGenericMapBlockingWidgetData::WidgetName");
static_assert(offsetof(FFortGenericMapBlockingWidgetData, bClampLeft) == 4, "Offset mismatch for FFortGenericMapBlockingWidgetData::bClampLeft");
static_assert(offsetof(FFortGenericMapBlockingWidgetData, bClampRight) == 5, "Offset mismatch for FFortGenericMapBlockingWidgetData::bClampRight");
static_assert(offsetof(FFortGenericMapBlockingWidgetData, bClampTop) == 6, "Offset mismatch for FFortGenericMapBlockingWidgetData::bClampTop");
static_assert(offsetof(FFortGenericMapBlockingWidgetData, bClampBottom) == 7, "Offset mismatch for FFortGenericMapBlockingWidgetData::bClampBottom");
static_assert(offsetof(FFortGenericMapBlockingWidgetData, WidgetReference) == 8, "Offset mismatch for FFortGenericMapBlockingWidgetData::WidgetReference");

// /Script/FortGenericMapUI.FortGenericMapElement
// Kind: ScriptStruct; super: none
struct FFortGenericMapElement
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Brush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Font[0x58]; // 0x00C0 (Size: 0x58, Type: StructProperty)
    std::uint8_t Text[0x10]; // 0x0118 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextPadding[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextLocalOffset[0x8]; // 0x0138 (Size: 0x8, Type: StructProperty)
    std::uint8_t TextColor[0x20]; // 0x0140 (Size: 0x20, Type: OptionalProperty)
    std::uint8_t TextBackgroundBrush[0xC0]; // 0x0160 (Size: 0xC0, Type: OptionalProperty)
    std::uint8_t TextBackgroundPadding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextBackgroundColor[0x14]; // 0x0230 (Size: 0x14, Type: OptionalProperty)
    std::uint8_t Color[0x14]; // 0x0244 (Size: 0x14, Type: StructProperty)
    std::uint8_t WorldLocation[0x10]; // 0x0258 (Size: 0x10, Type: StructProperty)
    std::uint8_t DrawSize[0x8]; // 0x0268 (Size: 0x8, Type: StructProperty)
    std::uint8_t Anchor[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    float Rotation; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRotateWithMap; // 0x027C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SizeTypeX; // 0x027D (Size: 0x1, Type: EnumProperty)
    std::uint8_t SizeTypeY; // 0x027E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x027F
    FString LayerName; // 0x0280 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0290
    std::uint8_t bClampToScreenEdge; // 0x0292 (Size: 0x1, Type: BoolProperty)
    // 0x0292 BoolProperty bDrawAnchoringArrow (shared storage)
    // 0x0292 BoolProperty bScaleTextToIconSize (shared storage)
    // 0x0292 BoolProperty bToggleSelectionOnClick (shared storage)
    std::uint8_t Pad_0002[0x1]; // 0x0293
    std::uint8_t ElementTag[0x4]; // 0x0294 (Size: 0x4, Type: StructProperty)
    std::uint8_t OutlineStyle[0x1]; // 0x0298 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGenericMapElement, Guid) == 0, "Offset mismatch for FFortGenericMapElement::Guid");
static_assert(offsetof(FFortGenericMapElement, Brush) == 16, "Offset mismatch for FFortGenericMapElement::Brush");
static_assert(offsetof(FFortGenericMapElement, Font) == 192, "Offset mismatch for FFortGenericMapElement::Font");
static_assert(offsetof(FFortGenericMapElement, Text) == 280, "Offset mismatch for FFortGenericMapElement::Text");
static_assert(offsetof(FFortGenericMapElement, TextPadding) == 296, "Offset mismatch for FFortGenericMapElement::TextPadding");
static_assert(offsetof(FFortGenericMapElement, TextLocalOffset) == 312, "Offset mismatch for FFortGenericMapElement::TextLocalOffset");
static_assert(offsetof(FFortGenericMapElement, TextColor) == 320, "Offset mismatch for FFortGenericMapElement::TextColor");
static_assert(offsetof(FFortGenericMapElement, TextBackgroundBrush) == 352, "Offset mismatch for FFortGenericMapElement::TextBackgroundBrush");
static_assert(offsetof(FFortGenericMapElement, TextBackgroundPadding) == 544, "Offset mismatch for FFortGenericMapElement::TextBackgroundPadding");
static_assert(offsetof(FFortGenericMapElement, TextBackgroundColor) == 560, "Offset mismatch for FFortGenericMapElement::TextBackgroundColor");
static_assert(offsetof(FFortGenericMapElement, Color) == 580, "Offset mismatch for FFortGenericMapElement::Color");
static_assert(offsetof(FFortGenericMapElement, WorldLocation) == 600, "Offset mismatch for FFortGenericMapElement::WorldLocation");
static_assert(offsetof(FFortGenericMapElement, DrawSize) == 616, "Offset mismatch for FFortGenericMapElement::DrawSize");
static_assert(offsetof(FFortGenericMapElement, Anchor) == 624, "Offset mismatch for FFortGenericMapElement::Anchor");
static_assert(offsetof(FFortGenericMapElement, Rotation) == 632, "Offset mismatch for FFortGenericMapElement::Rotation");
static_assert(offsetof(FFortGenericMapElement, bRotateWithMap) == 636, "Offset mismatch for FFortGenericMapElement::bRotateWithMap");
static_assert(offsetof(FFortGenericMapElement, SizeTypeX) == 637, "Offset mismatch for FFortGenericMapElement::SizeTypeX");
static_assert(offsetof(FFortGenericMapElement, SizeTypeY) == 638, "Offset mismatch for FFortGenericMapElement::SizeTypeY");
static_assert(offsetof(FFortGenericMapElement, LayerName) == 640, "Offset mismatch for FFortGenericMapElement::LayerName");
static_assert(offsetof(FFortGenericMapElement, bClampToScreenEdge) == 658, "Offset mismatch for FFortGenericMapElement::bClampToScreenEdge");
static_assert(offsetof(FFortGenericMapElement, ElementTag) == 660, "Offset mismatch for FFortGenericMapElement::ElementTag");
static_assert(offsetof(FFortGenericMapElement, OutlineStyle) == 664, "Offset mismatch for FFortGenericMapElement::OutlineStyle");

// /Script/FortGenericMapUI.FortGenericMapElementList
// Kind: ScriptStruct; super: none
struct FFortGenericMapElementList
{
public:
    TArray<void*> MapElements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortGenericMapElementList, MapElements) == 0, "Offset mismatch for FFortGenericMapElementList::MapElements");

// /Script/FortGenericMapUI.FortGenericMapElementOutlineStyle
// Kind: ScriptStruct; super: none
struct FFortGenericMapElementOutlineStyle
{
public:
    std::uint8_t bDrawOutline; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCloseShape; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OutlinePattern; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float Thickness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ThicknessHovered; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DashLengthPx; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DashScreenOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGenericMapElementOutlineStyle, bDrawOutline) == 0, "Offset mismatch for FFortGenericMapElementOutlineStyle::bDrawOutline");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, bCloseShape) == 1, "Offset mismatch for FFortGenericMapElementOutlineStyle::bCloseShape");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, OutlinePattern) == 2, "Offset mismatch for FFortGenericMapElementOutlineStyle::OutlinePattern");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, Thickness) == 4, "Offset mismatch for FFortGenericMapElementOutlineStyle::Thickness");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, ThicknessHovered) == 8, "Offset mismatch for FFortGenericMapElementOutlineStyle::ThicknessHovered");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, DashLengthPx) == 12, "Offset mismatch for FFortGenericMapElementOutlineStyle::DashLengthPx");
static_assert(offsetof(FFortGenericMapElementOutlineStyle, DashScreenOffset) == 16, "Offset mismatch for FFortGenericMapElementOutlineStyle::DashScreenOffset");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_PlayerElementInfo
// Kind: ScriptStruct; super: none
struct FFortGenericMapElementProvider_PlayerElementInfo
{
public:
    std::uint8_t bDrawElement; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseIconMaterial; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDrawSize; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseActorRotationParamName; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAvatarParamName; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseViewRotationParamName; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseClampToScreenEdge; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampToScreenEdge; // 0x0007 (Size: 0x1, Type: BoolProperty)
    void* IconMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float DrawSize; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ActorRotationParamName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t ViewRotationParamName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    FName AvatarParamName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bDrawElement) == 0, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bDrawElement");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseIconMaterial) == 1, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseIconMaterial");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseDrawSize) == 2, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseDrawSize");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseActorRotationParamName) == 3, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseActorRotationParamName");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseAvatarParamName) == 4, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseAvatarParamName");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseViewRotationParamName) == 5, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseViewRotationParamName");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bUseClampToScreenEdge) == 6, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bUseClampToScreenEdge");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, bClampToScreenEdge) == 7, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::bClampToScreenEdge");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, IconMaterial) == 8, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::IconMaterial");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, DrawSize) == 16, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::DrawSize");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, ActorRotationParamName) == 20, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::ActorRotationParamName");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, ViewRotationParamName) == 24, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::ViewRotationParamName");
static_assert(offsetof(FFortGenericMapElementProvider_PlayerElementInfo, AvatarParamName) == 28, "Offset mismatch for FFortGenericMapElementProvider_PlayerElementInfo::AvatarParamName");

// /Script/FortGenericMapUI.FortGenericMapLayers
// Kind: ScriptStruct; super: none
struct FFortGenericMapLayers
{
public:
    TMap<void*, void*> Layers; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DeferredElements; // 0x0010 (Size: 0x10, Type: MapProperty)
    TSet<void*> MapLegendEntries; // 0x0020 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FFortGenericMapLayers, Layers) == 0, "Offset mismatch for FFortGenericMapLayers::Layers");
static_assert(offsetof(FFortGenericMapLayers, DeferredElements) == 16, "Offset mismatch for FFortGenericMapLayers::DeferredElements");
static_assert(offsetof(FFortGenericMapLayers, MapLegendEntries) == 32, "Offset mismatch for FFortGenericMapLayers::MapLegendEntries");

// /Script/FortGenericMapUI.FortGenericMapLegendEntry
// Kind: ScriptStruct; super: none
struct FFortGenericMapLegendEntry
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    FText DisplayName; // 0x0008 (Size: 0x18, Type: TextProperty)
    std::uint8_t Brush[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGenericMapLegendEntry, ID) == 0, "Offset mismatch for FFortGenericMapLegendEntry::ID");
static_assert(offsetof(FFortGenericMapLegendEntry, DisplayName) == 8, "Offset mismatch for FFortGenericMapLegendEntry::DisplayName");
static_assert(offsetof(FFortGenericMapLegendEntry, Brush) == 32, "Offset mismatch for FFortGenericMapLegendEntry::Brush");

// /Script/FortGenericMapUI.FortGenericMapTileTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortGenericMapTileTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MapTileMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortGenericMapTileTableRow, MapTileMaterial) == 8, "Offset mismatch for FFortGenericMapTileTableRow::MapTileMaterial");

// /Script/FortGenericMapUI.FortGenericMapZoomBounds
// Kind: ScriptStruct; super: none
struct FFortGenericMapZoomBounds
{
public:
    float MinZoom; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaximumZoom; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DefaultZoom; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGenericMapZoomBounds, MinZoom) == 0, "Offset mismatch for FFortGenericMapZoomBounds::MinZoom");
static_assert(offsetof(FFortGenericMapZoomBounds, MaximumZoom) == 4, "Offset mismatch for FFortGenericMapZoomBounds::MaximumZoom");
static_assert(offsetof(FFortGenericMapZoomBounds, DefaultZoom) == 8, "Offset mismatch for FFortGenericMapZoomBounds::DefaultZoom");

// /Script/FortGenericMapUI.FortGenericWidgetMapElement
// Kind: ScriptStruct; super: none
struct FFortGenericWidgetMapElement
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Widget; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldLocation[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t DrawSize[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Anchor[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t bClampToScreenEdge; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bRotateWithMap (shared storage)
};

static_assert(offsetof(FFortGenericWidgetMapElement, Guid) == 0, "Offset mismatch for FFortGenericWidgetMapElement::Guid");
static_assert(offsetof(FFortGenericWidgetMapElement, Widget) == 16, "Offset mismatch for FFortGenericWidgetMapElement::Widget");
static_assert(offsetof(FFortGenericWidgetMapElement, WorldLocation) == 24, "Offset mismatch for FFortGenericWidgetMapElement::WorldLocation");
static_assert(offsetof(FFortGenericWidgetMapElement, DrawSize) == 40, "Offset mismatch for FFortGenericWidgetMapElement::DrawSize");
static_assert(offsetof(FFortGenericWidgetMapElement, Anchor) == 48, "Offset mismatch for FFortGenericWidgetMapElement::Anchor");
static_assert(offsetof(FFortGenericWidgetMapElement, bClampToScreenEdge) == 56, "Offset mismatch for FFortGenericWidgetMapElement::bClampToScreenEdge");

// /Script/FortGenericMapUI.FortControllerComponent_GenericMapViewModel
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_GenericMapViewModel
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> MapViewModelClassesByKey; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MapViewModelsByKey; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortControllerComponent_GenericMapViewModel, MapViewModelClassesByKey) == 200, "Offset mismatch for UFortControllerComponent_GenericMapViewModel::MapViewModelClassesByKey");
static_assert(offsetof(UFortControllerComponent_GenericMapViewModel, MapViewModelsByKey) == 216, "Offset mismatch for UFortControllerComponent_GenericMapViewModel::MapViewModelsByKey");

// /Script/FortGenericMapUI.FortGameFeatureAction_AddMapElementProviders
// Kind: Class; super: FortUIGameFeatureAction
class UFortGameFeatureAction_AddMapElementProviders
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> SoftElementProviderClasses; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedElementProviderClasses; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoftWidgetElementProviderClasses; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedWidgetElementProviderClasses; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddMapElementProviders, SoftElementProviderClasses) == 48, "Offset mismatch for UFortGameFeatureAction_AddMapElementProviders::SoftElementProviderClasses");
static_assert(offsetof(UFortGameFeatureAction_AddMapElementProviders, LoadedElementProviderClasses) == 64, "Offset mismatch for UFortGameFeatureAction_AddMapElementProviders::LoadedElementProviderClasses");
static_assert(offsetof(UFortGameFeatureAction_AddMapElementProviders, SoftWidgetElementProviderClasses) == 80, "Offset mismatch for UFortGameFeatureAction_AddMapElementProviders::SoftWidgetElementProviderClasses");
static_assert(offsetof(UFortGameFeatureAction_AddMapElementProviders, LoadedWidgetElementProviderClasses) == 96, "Offset mismatch for UFortGameFeatureAction_AddMapElementProviders::LoadedWidgetElementProviderClasses");

// /Script/FortGenericMapUI.FortGameFeatureAction_AddMapViewModelClasses
// Kind: Class; super: FortUIGameFeatureAction
class UFortGameFeatureAction_AddMapViewModelClasses
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> SoftMapViewModelClassesByKey; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LoadedMapViewModelClassesByKey; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddMapViewModelClasses, SoftMapViewModelClassesByKey) == 48, "Offset mismatch for UFortGameFeatureAction_AddMapViewModelClasses::SoftMapViewModelClassesByKey");
static_assert(offsetof(UFortGameFeatureAction_AddMapViewModelClasses, LoadedMapViewModelClassesByKey) == 64, "Offset mismatch for UFortGameFeatureAction_AddMapViewModelClasses::LoadedMapViewModelClassesByKey");

// /Script/FortGenericMapUI.FortGenericMapElementProviderBase
// Kind: Class; super: Object
class UFortGenericMapElementProviderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGenericMapElementProviderBase, TagQuery) == 40, "Offset mismatch for UFortGenericMapElementProviderBase::TagQuery");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_Pings
// Kind: Class; super: FortGenericMapElementProviderBase
class UFortGenericMapElementProvider_Pings
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString PingLayerName; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t PingBrush[0xB0]; // 0x00B0 (Size: 0xB0, Type: StructProperty)
    float PingDrawSize; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Anchor[0xC]; // 0x0164 (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> CachedMarkerIDToMapElementMap; // 0x0170 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGenericMapElementProvider_Pings, PingLayerName) == 160, "Offset mismatch for UFortGenericMapElementProvider_Pings::PingLayerName");
static_assert(offsetof(UFortGenericMapElementProvider_Pings, PingBrush) == 176, "Offset mismatch for UFortGenericMapElementProvider_Pings::PingBrush");
static_assert(offsetof(UFortGenericMapElementProvider_Pings, PingDrawSize) == 352, "Offset mismatch for UFortGenericMapElementProvider_Pings::PingDrawSize");
static_assert(offsetof(UFortGenericMapElementProvider_Pings, Anchor) == 356, "Offset mismatch for UFortGenericMapElementProvider_Pings::Anchor");
static_assert(offsetof(UFortGenericMapElementProvider_Pings, CachedMarkerIDToMapElementMap) == 368, "Offset mismatch for UFortGenericMapElementProvider_Pings::CachedMarkerIDToMapElementMap");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_Players
// Kind: Class; super: FortGenericMapElementProviderBase
class UFortGenericMapElementProvider_Players
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString PlayerIconLayerName; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t LocalPlayerElementInfo[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t PartyMemberElementInfo[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TeamMemberElementInfo[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    float DefaultDrawSize; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGenericMapElementProvider_Players, PlayerIconLayerName) == 160, "Offset mismatch for UFortGenericMapElementProvider_Players::PlayerIconLayerName");
static_assert(offsetof(UFortGenericMapElementProvider_Players, LocalPlayerElementInfo) == 176, "Offset mismatch for UFortGenericMapElementProvider_Players::LocalPlayerElementInfo");
static_assert(offsetof(UFortGenericMapElementProvider_Players, PartyMemberElementInfo) == 208, "Offset mismatch for UFortGenericMapElementProvider_Players::PartyMemberElementInfo");
static_assert(offsetof(UFortGenericMapElementProvider_Players, TeamMemberElementInfo) == 240, "Offset mismatch for UFortGenericMapElementProvider_Players::TeamMemberElementInfo");
static_assert(offsetof(UFortGenericMapElementProvider_Players, DefaultDrawSize) == 272, "Offset mismatch for UFortGenericMapElementProvider_Players::DefaultDrawSize");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_RadiusTrackers
// Kind: Class; super: FortGenericMapElementProviderBase
class UFortGenericMapElementProvider_RadiusTrackers
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Display; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FString LayerName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    void* IconMaterial; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconTextureParameterName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t IconSize[0x8]; // 0x00C4 (Size: 0x8, Type: StructProperty)
    std::uint8_t IconPlacement; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00CD
    TMap<void*, void*> CachedIconMIDs; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, Display) == 160, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::Display");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, LayerName) == 168, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::LayerName");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, IconMaterial) == 184, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::IconMaterial");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, IconTextureParameterName) == 192, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::IconTextureParameterName");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, IconSize) == 196, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::IconSize");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, IconPlacement) == 204, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::IconPlacement");
static_assert(offsetof(UFortGenericMapElementProvider_RadiusTrackers, CachedIconMIDs) == 208, "Offset mismatch for UFortGenericMapElementProvider_RadiusTrackers::CachedIconMIDs");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_SpecialActors
// Kind: Class; super: FortGenericMapElementProviderBase
class UFortGenericMapElementProvider_SpecialActors
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString IconLayerName; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t SpecialActorBrushToUse; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::uint8_t Color[0x14]; // 0x00B4 (Size: 0x14, Type: OptionalProperty)
    std::uint8_t DrawSize[0x8]; // 0x00C8 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t bApplySpecialActorScale; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampToScreenEdge; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00D2
    void* IconMaterial; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconTextureParamName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SpecialActorMaterialTextureParamName[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t AllowedSpecialActorTags[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t UnallowedSpecialActorTags[0x20]; // 0x0108 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> SpecialActorMIDs; // 0x0128 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, IconLayerName) == 160, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::IconLayerName");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, SpecialActorBrushToUse) == 176, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::SpecialActorBrushToUse");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, Color) == 180, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::Color");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, DrawSize) == 200, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::DrawSize");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, bApplySpecialActorScale) == 208, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::bApplySpecialActorScale");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, bClampToScreenEdge) == 209, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::bClampToScreenEdge");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, IconMaterial) == 216, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::IconMaterial");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, IconTextureParamName) == 224, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::IconTextureParamName");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, SpecialActorMaterialTextureParamName) == 228, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::SpecialActorMaterialTextureParamName");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, AllowedSpecialActorTags) == 232, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::AllowedSpecialActorTags");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, UnallowedSpecialActorTags) == 264, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::UnallowedSpecialActorTags");
static_assert(offsetof(UFortGenericMapElementProvider_SpecialActors, SpecialActorMIDs) == 296, "Offset mismatch for UFortGenericMapElementProvider_SpecialActors::SpecialActorMIDs");

// /Script/FortGenericMapUI.FortGenericMapElementProvider_Terrain
// Kind: Class; super: FortGenericMapElementProviderBase
class UFortGenericMapElementProvider_Terrain
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString TerrainLayerName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString FogOfWarLayerName; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t TerrainMaterial[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FogOfWarMaterial[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MapTileRegistryType[0x8]; // 0x0108 (Size: 0x8, Type: StructProperty)
    std::uint8_t TerrainMapLayers[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGenericMapElementProvider_Terrain, TerrainLayerName) == 168, "Offset mismatch for UFortGenericMapElementProvider_Terrain::TerrainLayerName");
static_assert(offsetof(UFortGenericMapElementProvider_Terrain, FogOfWarLayerName) == 184, "Offset mismatch for UFortGenericMapElementProvider_Terrain::FogOfWarLayerName");
static_assert(offsetof(UFortGenericMapElementProvider_Terrain, TerrainMaterial) == 200, "Offset mismatch for UFortGenericMapElementProvider_Terrain::TerrainMaterial");
static_assert(offsetof(UFortGenericMapElementProvider_Terrain, FogOfWarMaterial) == 232, "Offset mismatch for UFortGenericMapElementProvider_Terrain::FogOfWarMaterial");
static_assert(offsetof(UFortGenericMapElementProvider_Terrain, MapTileRegistryType) == 264, "Offset mismatch for UFortGenericMapElementProvider_Terrain::MapTileRegistryType");
static_assert(offsetof(UFortGenericMapElementProvider_Terrain, TerrainMapLayers) == 272, "Offset mismatch for UFortGenericMapElementProvider_Terrain::TerrainMapLayers");

// /Script/FortGenericMapUI.FortGenericMapViewModel
// Kind: Class; super: FortPerUserViewModel
class UFortGenericMapViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* MapMaterialParameterCollection; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* AnchoringArrowMaterial; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OffscreenParamName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarMaterialParameterName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarScaleParameterName[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarOffsetParameterName[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    std::uint8_t RandomSignParameterName[0x4]; // 0x0098 (Size: 0x4, Type: NameProperty)
    std::uint8_t RandomIntensityParameterName[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t TerrainMaterialParameterName[0x4]; // 0x00A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkyIslandMaterialParameterName[0x4]; // 0x00A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZoomLevelMaterialParameterName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerSizeXParameterName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerSizeYParameterName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerVerticalOffsetParameterName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MinZoomParameterName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaxZoomParameterName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t EnabledRoundedCornersParameterName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    float AnchoringArrowIconSize; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float AnchorMapPadding; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AnchorToCircle; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00CD
    float MarkerCyclingDisplayDuration; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float InContainerIconDistance; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TextScalingMode; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00D9
    std::uint8_t MapCenter[0x8]; // 0x00DC (Size: 0x8, Type: StructProperty)
    float BaseMapRotationDegrees; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float WorldMetersInWidth; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampView; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00ED
    float ViewOverscrollLimit; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00F4
    std::uint8_t MapLegendEntries[0x10]; // 0x00F8 (Size: 0x10, Type: SetProperty)
    std::uint8_t RemovedMapLegendEntries[0x20]; // 0x0108 (Size: 0x20, Type: SetProperty)
    float CurrentZoom; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float MinZoom; // 0x012C (Size: 0x4, Type: FloatProperty)
    float MaxZoom; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentViewOffset[0x1]; // 0x0134 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGenericMapViewModel, MapMaterialParameterCollection) == 120, "Offset mismatch for UFortGenericMapViewModel::MapMaterialParameterCollection");
static_assert(offsetof(UFortGenericMapViewModel, AnchoringArrowMaterial) == 128, "Offset mismatch for UFortGenericMapViewModel::AnchoringArrowMaterial");
static_assert(offsetof(UFortGenericMapViewModel, OffscreenParamName) == 136, "Offset mismatch for UFortGenericMapViewModel::OffscreenParamName");
static_assert(offsetof(UFortGenericMapViewModel, FogOfWarMaterialParameterName) == 140, "Offset mismatch for UFortGenericMapViewModel::FogOfWarMaterialParameterName");
static_assert(offsetof(UFortGenericMapViewModel, FogOfWarScaleParameterName) == 144, "Offset mismatch for UFortGenericMapViewModel::FogOfWarScaleParameterName");
static_assert(offsetof(UFortGenericMapViewModel, FogOfWarOffsetParameterName) == 148, "Offset mismatch for UFortGenericMapViewModel::FogOfWarOffsetParameterName");
static_assert(offsetof(UFortGenericMapViewModel, RandomSignParameterName) == 152, "Offset mismatch for UFortGenericMapViewModel::RandomSignParameterName");
static_assert(offsetof(UFortGenericMapViewModel, RandomIntensityParameterName) == 156, "Offset mismatch for UFortGenericMapViewModel::RandomIntensityParameterName");
static_assert(offsetof(UFortGenericMapViewModel, TerrainMaterialParameterName) == 160, "Offset mismatch for UFortGenericMapViewModel::TerrainMaterialParameterName");
static_assert(offsetof(UFortGenericMapViewModel, SkyIslandMaterialParameterName) == 164, "Offset mismatch for UFortGenericMapViewModel::SkyIslandMaterialParameterName");
static_assert(offsetof(UFortGenericMapViewModel, ZoomLevelMaterialParameterName) == 168, "Offset mismatch for UFortGenericMapViewModel::ZoomLevelMaterialParameterName");
static_assert(offsetof(UFortGenericMapViewModel, MapContainerSizeXParameterName) == 172, "Offset mismatch for UFortGenericMapViewModel::MapContainerSizeXParameterName");
static_assert(offsetof(UFortGenericMapViewModel, MapContainerSizeYParameterName) == 176, "Offset mismatch for UFortGenericMapViewModel::MapContainerSizeYParameterName");
static_assert(offsetof(UFortGenericMapViewModel, MapContainerVerticalOffsetParameterName) == 180, "Offset mismatch for UFortGenericMapViewModel::MapContainerVerticalOffsetParameterName");
static_assert(offsetof(UFortGenericMapViewModel, MinZoomParameterName) == 184, "Offset mismatch for UFortGenericMapViewModel::MinZoomParameterName");
static_assert(offsetof(UFortGenericMapViewModel, MaxZoomParameterName) == 188, "Offset mismatch for UFortGenericMapViewModel::MaxZoomParameterName");
static_assert(offsetof(UFortGenericMapViewModel, EnabledRoundedCornersParameterName) == 192, "Offset mismatch for UFortGenericMapViewModel::EnabledRoundedCornersParameterName");
static_assert(offsetof(UFortGenericMapViewModel, AnchoringArrowIconSize) == 196, "Offset mismatch for UFortGenericMapViewModel::AnchoringArrowIconSize");
static_assert(offsetof(UFortGenericMapViewModel, AnchorMapPadding) == 200, "Offset mismatch for UFortGenericMapViewModel::AnchorMapPadding");
static_assert(offsetof(UFortGenericMapViewModel, AnchorToCircle) == 204, "Offset mismatch for UFortGenericMapViewModel::AnchorToCircle");
static_assert(offsetof(UFortGenericMapViewModel, MarkerCyclingDisplayDuration) == 208, "Offset mismatch for UFortGenericMapViewModel::MarkerCyclingDisplayDuration");
static_assert(offsetof(UFortGenericMapViewModel, InContainerIconDistance) == 212, "Offset mismatch for UFortGenericMapViewModel::InContainerIconDistance");
static_assert(offsetof(UFortGenericMapViewModel, TextScalingMode) == 216, "Offset mismatch for UFortGenericMapViewModel::TextScalingMode");
static_assert(offsetof(UFortGenericMapViewModel, MapCenter) == 220, "Offset mismatch for UFortGenericMapViewModel::MapCenter");
static_assert(offsetof(UFortGenericMapViewModel, BaseMapRotationDegrees) == 228, "Offset mismatch for UFortGenericMapViewModel::BaseMapRotationDegrees");
static_assert(offsetof(UFortGenericMapViewModel, WorldMetersInWidth) == 232, "Offset mismatch for UFortGenericMapViewModel::WorldMetersInWidth");
static_assert(offsetof(UFortGenericMapViewModel, bClampView) == 236, "Offset mismatch for UFortGenericMapViewModel::bClampView");
static_assert(offsetof(UFortGenericMapViewModel, ViewOverscrollLimit) == 240, "Offset mismatch for UFortGenericMapViewModel::ViewOverscrollLimit");
static_assert(offsetof(UFortGenericMapViewModel, MapLegendEntries) == 248, "Offset mismatch for UFortGenericMapViewModel::MapLegendEntries");
static_assert(offsetof(UFortGenericMapViewModel, RemovedMapLegendEntries) == 264, "Offset mismatch for UFortGenericMapViewModel::RemovedMapLegendEntries");
static_assert(offsetof(UFortGenericMapViewModel, CurrentZoom) == 296, "Offset mismatch for UFortGenericMapViewModel::CurrentZoom");
static_assert(offsetof(UFortGenericMapViewModel, MinZoom) == 300, "Offset mismatch for UFortGenericMapViewModel::MinZoom");
static_assert(offsetof(UFortGenericMapViewModel, MaxZoom) == 304, "Offset mismatch for UFortGenericMapViewModel::MaxZoom");
static_assert(offsetof(UFortGenericMapViewModel, CurrentViewOffset) == 308, "Offset mismatch for UFortGenericMapViewModel::CurrentViewOffset");

// /Script/FortGenericMapUI.FortGenericMapWidget
// Kind: Class; super: UserWidget
class UFortGenericMapWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnMapViewModelSet; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ZoomBounds[0xC]; // 0x0318 (Size: 0xC, Type: StructProperty)
    float IconHoverScale; // 0x0324 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NonSelectableIconColor[0x18]; // 0x0328 (Size: 0x18, Type: StructProperty)
    std::uint8_t MapBackgroundBrush[0xB0]; // 0x0340 (Size: 0xB0, Type: StructProperty)
    std::uint8_t GameplayTags[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t MapKey[0x8]; // 0x0410 (Size: 0x8, Type: StructProperty)
    TArray<void*> MapElementProviders; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnMapDragBlocked; // 0x0428 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMapClickedDynamic; // 0x0438 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* VirtualCursorMaterial; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VirtualCursorSize[0x8]; // 0x0450 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAlwaysFocusPlayer; // 0x0458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0459
    TArray<void*> BlockingWidgets; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0470
    TArray<void*> MapWidgetElementProviders; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    void* WidgetElementCanvas; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGenericMapWidget, OnMapViewModelSet) == 776, "Offset mismatch for UFortGenericMapWidget::OnMapViewModelSet");
static_assert(offsetof(UFortGenericMapWidget, ZoomBounds) == 792, "Offset mismatch for UFortGenericMapWidget::ZoomBounds");
static_assert(offsetof(UFortGenericMapWidget, IconHoverScale) == 804, "Offset mismatch for UFortGenericMapWidget::IconHoverScale");
static_assert(offsetof(UFortGenericMapWidget, NonSelectableIconColor) == 808, "Offset mismatch for UFortGenericMapWidget::NonSelectableIconColor");
static_assert(offsetof(UFortGenericMapWidget, MapBackgroundBrush) == 832, "Offset mismatch for UFortGenericMapWidget::MapBackgroundBrush");
static_assert(offsetof(UFortGenericMapWidget, GameplayTags) == 1008, "Offset mismatch for UFortGenericMapWidget::GameplayTags");
static_assert(offsetof(UFortGenericMapWidget, MapKey) == 1040, "Offset mismatch for UFortGenericMapWidget::MapKey");
static_assert(offsetof(UFortGenericMapWidget, MapElementProviders) == 1048, "Offset mismatch for UFortGenericMapWidget::MapElementProviders");
static_assert(offsetof(UFortGenericMapWidget, OnMapDragBlocked) == 1064, "Offset mismatch for UFortGenericMapWidget::OnMapDragBlocked");
static_assert(offsetof(UFortGenericMapWidget, OnMapClickedDynamic) == 1080, "Offset mismatch for UFortGenericMapWidget::OnMapClickedDynamic");
static_assert(offsetof(UFortGenericMapWidget, VirtualCursorMaterial) == 1096, "Offset mismatch for UFortGenericMapWidget::VirtualCursorMaterial");
static_assert(offsetof(UFortGenericMapWidget, VirtualCursorSize) == 1104, "Offset mismatch for UFortGenericMapWidget::VirtualCursorSize");
static_assert(offsetof(UFortGenericMapWidget, bAlwaysFocusPlayer) == 1112, "Offset mismatch for UFortGenericMapWidget::bAlwaysFocusPlayer");
static_assert(offsetof(UFortGenericMapWidget, BlockingWidgets) == 1120, "Offset mismatch for UFortGenericMapWidget::BlockingWidgets");
static_assert(offsetof(UFortGenericMapWidget, MapWidgetElementProviders) == 1168, "Offset mismatch for UFortGenericMapWidget::MapWidgetElementProviders");
static_assert(offsetof(UFortGenericMapWidget, WidgetElementCanvas) == 1184, "Offset mismatch for UFortGenericMapWidget::WidgetElementCanvas");

// /Script/FortGenericMapUI.FortGenericMapWidgetElementProviderBase
// Kind: Class; super: Object
class UFortGenericMapWidgetElementProviderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGenericMapWidgetElementProviderBase, TagQuery) == 40, "Offset mismatch for UFortGenericMapWidgetElementProviderBase::TagQuery");

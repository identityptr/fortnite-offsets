#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortGenericMapUI
{
    struct FortControllerComponent_GenericMapViewModel
    {
        static constexpr std::string_view Name = "FortControllerComponent_GenericMapViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MapViewModelClassesByKey = 0xC8;
            static constexpr std::uintptr_t MapViewModelsByKey = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MapViewModelClassesByKey", 0xC8, "MapProperty"},
            {"MapViewModelsByKey", 0xD8, "MapProperty"},
        }};
    };

    struct FortGameFeatureAction_AddMapElementProviders
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddMapElementProviders";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftElementProviderClasses = 0x30;
            static constexpr std::uintptr_t LoadedElementProviderClasses = 0x40;
            static constexpr std::uintptr_t SoftWidgetElementProviderClasses = 0x50;
            static constexpr std::uintptr_t LoadedWidgetElementProviderClasses = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SoftElementProviderClasses", 0x30, "ArrayProperty"},
            {"LoadedElementProviderClasses", 0x40, "ArrayProperty"},
            {"SoftWidgetElementProviderClasses", 0x50, "ArrayProperty"},
            {"LoadedWidgetElementProviderClasses", 0x60, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddMapViewModelClasses
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddMapViewModelClasses";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftMapViewModelClassesByKey = 0x30;
            static constexpr std::uintptr_t LoadedMapViewModelClassesByKey = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoftMapViewModelClassesByKey", 0x30, "MapProperty"},
            {"LoadedMapViewModelClassesByKey", 0x40, "MapProperty"},
        }};
    };

    struct FortGenericMapElementProviderBase
    {
        static constexpr std::string_view Name = "FortGenericMapElementProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagQuery", 0x28, "StructProperty"},
        }};
    };

    struct FortGenericMapElementProvider_Pings
    {
        static constexpr std::string_view Name = "FortGenericMapElementProvider_Pings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGenericMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PingLayerName = 0xA0;
            static constexpr std::uintptr_t PingBrush = 0xB0;
            static constexpr std::uintptr_t PingDrawSize = 0x160;
            static constexpr std::uintptr_t Anchor = 0x164;
            static constexpr std::uintptr_t CachedMarkerIDToMapElementMap = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PingLayerName", 0xA0, "StrProperty"},
            {"PingBrush", 0xB0, "StructProperty"},
            {"PingDrawSize", 0x160, "FloatProperty"},
            {"Anchor", 0x164, "StructProperty"},
            {"CachedMarkerIDToMapElementMap", 0x170, "MapProperty"},
        }};
    };

    struct FortGenericMapElementProvider_Players
    {
        static constexpr std::string_view Name = "FortGenericMapElementProvider_Players";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGenericMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerIconLayerName = 0xA0;
            static constexpr std::uintptr_t LocalPlayerElementInfo = 0xB0;
            static constexpr std::uintptr_t PartyMemberElementInfo = 0xD0;
            static constexpr std::uintptr_t TeamMemberElementInfo = 0xF0;
            static constexpr std::uintptr_t DefaultDrawSize = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PlayerIconLayerName", 0xA0, "StrProperty"},
            {"LocalPlayerElementInfo", 0xB0, "StructProperty"},
            {"PartyMemberElementInfo", 0xD0, "StructProperty"},
            {"TeamMemberElementInfo", 0xF0, "StructProperty"},
            {"DefaultDrawSize", 0x110, "FloatProperty"},
        }};
    };

    struct FortGenericMapElementProvider_RadiusTrackers
    {
        static constexpr std::string_view Name = "FortGenericMapElementProvider_RadiusTrackers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGenericMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Display = 0xA0;
            static constexpr std::uintptr_t LayerName = 0xA8;
            static constexpr std::uintptr_t IconMaterial = 0xB8;
            static constexpr std::uintptr_t IconTextureParameterName = 0xC0;
            static constexpr std::uintptr_t IconSize = 0xC4;
            static constexpr std::uintptr_t IconPlacement = 0xCC;
            static constexpr std::uintptr_t CachedIconMIDs = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Display", 0xA0, "ObjectProperty"},
            {"LayerName", 0xA8, "StrProperty"},
            {"IconMaterial", 0xB8, "ObjectProperty"},
            {"IconTextureParameterName", 0xC0, "NameProperty"},
            {"IconSize", 0xC4, "StructProperty"},
            {"IconPlacement", 0xCC, "EnumProperty"},
            {"CachedIconMIDs", 0xD0, "MapProperty"},
        }};
    };

    struct FortGenericMapElementProvider_SpecialActors
    {
        static constexpr std::string_view Name = "FortGenericMapElementProvider_SpecialActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGenericMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IconLayerName = 0xA0;
            static constexpr std::uintptr_t SpecialActorBrushToUse = 0xB0;
            static constexpr std::uintptr_t Color = 0xB4;
            static constexpr std::uintptr_t DrawSize = 0xC8;
            static constexpr std::uintptr_t bApplySpecialActorScale = 0xD0;
            static constexpr std::uintptr_t bClampToScreenEdge = 0xD1;
            static constexpr std::uintptr_t IconMaterial = 0xD8;
            static constexpr std::uintptr_t IconTextureParamName = 0xE0;
            static constexpr std::uintptr_t SpecialActorMaterialTextureParamName = 0xE4;
            static constexpr std::uintptr_t AllowedSpecialActorTags = 0xE8;
            static constexpr std::uintptr_t UnallowedSpecialActorTags = 0x108;
            static constexpr std::uintptr_t SpecialActorMIDs = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"IconLayerName", 0xA0, "StrProperty"},
            {"SpecialActorBrushToUse", 0xB0, "EnumProperty"},
            {"Color", 0xB4, "OptionalProperty"},
            {"DrawSize", 0xC8, "OptionalProperty"},
            {"bApplySpecialActorScale", 0xD0, "BoolProperty"},
            {"bClampToScreenEdge", 0xD1, "BoolProperty"},
            {"IconMaterial", 0xD8, "ObjectProperty"},
            {"IconTextureParamName", 0xE0, "NameProperty"},
            {"SpecialActorMaterialTextureParamName", 0xE4, "NameProperty"},
            {"AllowedSpecialActorTags", 0xE8, "StructProperty"},
            {"UnallowedSpecialActorTags", 0x108, "StructProperty"},
            {"SpecialActorMIDs", 0x128, "MapProperty"},
        }};
    };

    struct FortGenericMapElementProvider_Terrain
    {
        static constexpr std::string_view Name = "FortGenericMapElementProvider_Terrain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGenericMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TerrainLayerName = 0xA8;
            static constexpr std::uintptr_t FogOfWarLayerName = 0xB8;
            static constexpr std::uintptr_t TerrainMaterial = 0xC8;
            static constexpr std::uintptr_t FogOfWarMaterial = 0xE8;
            static constexpr std::uintptr_t MapTileRegistryType = 0x108;
            static constexpr std::uintptr_t TerrainMapLayers = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TerrainLayerName", 0xA8, "StrProperty"},
            {"FogOfWarLayerName", 0xB8, "StrProperty"},
            {"TerrainMaterial", 0xC8, "SoftObjectProperty"},
            {"FogOfWarMaterial", 0xE8, "SoftObjectProperty"},
            {"MapTileRegistryType", 0x108, "StructProperty"},
            {"TerrainMapLayers", 0x110, "StructProperty"},
        }};
    };

    struct FortGenericMapViewModel
    {
        static constexpr std::string_view Name = "FortGenericMapViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MapMaterialParameterCollection = 0x78;
            static constexpr std::uintptr_t AnchoringArrowMaterial = 0x80;
            static constexpr std::uintptr_t OffscreenParamName = 0x88;
            static constexpr std::uintptr_t FogOfWarMaterialParameterName = 0x8C;
            static constexpr std::uintptr_t FogOfWarScaleParameterName = 0x90;
            static constexpr std::uintptr_t FogOfWarOffsetParameterName = 0x94;
            static constexpr std::uintptr_t RandomSignParameterName = 0x98;
            static constexpr std::uintptr_t RandomIntensityParameterName = 0x9C;
            static constexpr std::uintptr_t TerrainMaterialParameterName = 0xA0;
            static constexpr std::uintptr_t SkyIslandMaterialParameterName = 0xA4;
            static constexpr std::uintptr_t ZoomLevelMaterialParameterName = 0xA8;
            static constexpr std::uintptr_t MapContainerSizeXParameterName = 0xAC;
            static constexpr std::uintptr_t MapContainerSizeYParameterName = 0xB0;
            static constexpr std::uintptr_t MapContainerVerticalOffsetParameterName = 0xB4;
            static constexpr std::uintptr_t MinZoomParameterName = 0xB8;
            static constexpr std::uintptr_t MaxZoomParameterName = 0xBC;
            static constexpr std::uintptr_t EnabledRoundedCornersParameterName = 0xC0;
            static constexpr std::uintptr_t AnchoringArrowIconSize = 0xC4;
            static constexpr std::uintptr_t AnchorMapPadding = 0xC8;
            static constexpr std::uintptr_t AnchorToCircle = 0xCC;
            static constexpr std::uintptr_t MarkerCyclingDisplayDuration = 0xD0;
            static constexpr std::uintptr_t InContainerIconDistance = 0xD4;
            static constexpr std::uintptr_t TextScalingMode = 0xD8;
            static constexpr std::uintptr_t HeightScalingReferenceAspectRatio = 0xDC;
            static constexpr std::uintptr_t MapCenter = 0xE0;
            static constexpr std::uintptr_t BaseMapRotationDegrees = 0xE8;
            static constexpr std::uintptr_t MapRotationNotifyToleranceDegrees = 0xEC;
            static constexpr std::uintptr_t WorldMetersInWidth = 0xF0;
            static constexpr std::uintptr_t bClampView = 0xF4;
            static constexpr std::uintptr_t ViewOverscrollLimit = 0xF8;
            static constexpr std::uintptr_t MapLegendEntries = 0x100;
            static constexpr std::uintptr_t RemovedMapLegendEntries = 0x110;
            static constexpr std::uintptr_t CurrentZoom = 0x130;
            static constexpr std::uintptr_t MinZoom = 0x134;
            static constexpr std::uintptr_t MaxZoom = 0x138;
            static constexpr std::uintptr_t CurrentViewOffset = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"MapMaterialParameterCollection", 0x78, "ObjectProperty"},
            {"AnchoringArrowMaterial", 0x80, "ObjectProperty"},
            {"OffscreenParamName", 0x88, "NameProperty"},
            {"FogOfWarMaterialParameterName", 0x8C, "NameProperty"},
            {"FogOfWarScaleParameterName", 0x90, "NameProperty"},
            {"FogOfWarOffsetParameterName", 0x94, "NameProperty"},
            {"RandomSignParameterName", 0x98, "NameProperty"},
            {"RandomIntensityParameterName", 0x9C, "NameProperty"},
            {"TerrainMaterialParameterName", 0xA0, "NameProperty"},
            {"SkyIslandMaterialParameterName", 0xA4, "NameProperty"},
            {"ZoomLevelMaterialParameterName", 0xA8, "NameProperty"},
            {"MapContainerSizeXParameterName", 0xAC, "NameProperty"},
            {"MapContainerSizeYParameterName", 0xB0, "NameProperty"},
            {"MapContainerVerticalOffsetParameterName", 0xB4, "NameProperty"},
            {"MinZoomParameterName", 0xB8, "NameProperty"},
            {"MaxZoomParameterName", 0xBC, "NameProperty"},
            {"EnabledRoundedCornersParameterName", 0xC0, "NameProperty"},
            {"AnchoringArrowIconSize", 0xC4, "FloatProperty"},
            {"AnchorMapPadding", 0xC8, "FloatProperty"},
            {"AnchorToCircle", 0xCC, "BoolProperty"},
            {"MarkerCyclingDisplayDuration", 0xD0, "FloatProperty"},
            {"InContainerIconDistance", 0xD4, "FloatProperty"},
            {"TextScalingMode", 0xD8, "EnumProperty"},
            {"HeightScalingReferenceAspectRatio", 0xDC, "FloatProperty"},
            {"MapCenter", 0xE0, "StructProperty"},
            {"BaseMapRotationDegrees", 0xE8, "FloatProperty"},
            {"MapRotationNotifyToleranceDegrees", 0xEC, "FloatProperty"},
            {"WorldMetersInWidth", 0xF0, "FloatProperty"},
            {"bClampView", 0xF4, "BoolProperty"},
            {"ViewOverscrollLimit", 0xF8, "FloatProperty"},
            {"MapLegendEntries", 0x100, "SetProperty"},
            {"RemovedMapLegendEntries", 0x110, "SetProperty"},
            {"CurrentZoom", 0x130, "FloatProperty"},
            {"MinZoom", 0x134, "FloatProperty"},
            {"MaxZoom", 0x138, "FloatProperty"},
            {"CurrentViewOffset", 0x13C, "StructProperty"},
        }};
    };

    struct FortGenericMapWidget
    {
        static constexpr std::string_view Name = "FortGenericMapWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMapViewModelSet = 0x308;
            static constexpr std::uintptr_t ZoomBounds = 0x318;
            static constexpr std::uintptr_t IconHoverScale = 0x324;
            static constexpr std::uintptr_t NonSelectableIconColor = 0x328;
            static constexpr std::uintptr_t MapBackgroundBrush = 0x340;
            static constexpr std::uintptr_t GameplayTags = 0x3F0;
            static constexpr std::uintptr_t MapKey = 0x410;
            static constexpr std::uintptr_t MapElementProviders = 0x418;
            static constexpr std::uintptr_t OnMapDragBlocked = 0x428;
            static constexpr std::uintptr_t OnMapClickedDynamic = 0x438;
            static constexpr std::uintptr_t VirtualCursorMaterial = 0x448;
            static constexpr std::uintptr_t VirtualCursorSize = 0x450;
            static constexpr std::uintptr_t bAlwaysFocusPlayer = 0x458;
            static constexpr std::uintptr_t BlockingWidgets = 0x460;
            static constexpr std::uintptr_t MapWidgetElementProviders = 0x490;
            static constexpr std::uintptr_t WidgetElementCanvas = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"OnMapViewModelSet", 0x308, "MulticastInlineDelegateProperty"},
            {"ZoomBounds", 0x318, "StructProperty"},
            {"IconHoverScale", 0x324, "FloatProperty"},
            {"NonSelectableIconColor", 0x328, "StructProperty"},
            {"MapBackgroundBrush", 0x340, "StructProperty"},
            {"GameplayTags", 0x3F0, "StructProperty"},
            {"MapKey", 0x410, "StructProperty"},
            {"MapElementProviders", 0x418, "ArrayProperty"},
            {"OnMapDragBlocked", 0x428, "MulticastInlineDelegateProperty"},
            {"OnMapClickedDynamic", 0x438, "MulticastInlineDelegateProperty"},
            {"VirtualCursorMaterial", 0x448, "ObjectProperty"},
            {"VirtualCursorSize", 0x450, "StructProperty"},
            {"bAlwaysFocusPlayer", 0x458, "BoolProperty"},
            {"BlockingWidgets", 0x460, "ArrayProperty"},
            {"MapWidgetElementProviders", 0x490, "ArrayProperty"},
            {"WidgetElementCanvas", 0x4A0, "ObjectProperty"},
        }};
    };

    struct FortGenericMapWidgetElementProviderBase
    {
        static constexpr std::string_view Name = "FortGenericMapWidgetElementProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagQuery", 0x28, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AtomRuntime
{
    struct AtomActorConnectivityResolver
    {
        static constexpr std::string_view Name = "AtomActorConnectivityResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomActorConnectivityResolverRegistry
    {
        static constexpr std::string_view Name = "AtomActorConnectivityResolverRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Resolvers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Resolvers", 0x30, "ArrayProperty"},
        }};
    };

    struct AtomAssetUserDataActorConnectivityResolver
    {
        static constexpr std::string_view Name = "AtomAssetUserDataActorConnectivityResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomActorConnectivityResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomBrickPlacementPreviewProxy
    {
        static constexpr std::string_view Name = "AtomBrickPlacementPreviewProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlacementPreviewActor = 0x28;
            static constexpr std::uintptr_t PreviewMaterialInstance = 0x30;
            static constexpr std::uintptr_t InterpolationCurve = 0x38;
            static constexpr std::uintptr_t StaticMeshToInstancedMeshMap = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlacementPreviewActor", 0x28, "ObjectProperty"},
            {"PreviewMaterialInstance", 0x30, "ObjectProperty"},
            {"InterpolationCurve", 0x38, "ObjectProperty"},
            {"StaticMeshToInstancedMeshMap", 0x40, "MapProperty"},
        }};
    };

    struct AtomCollisionComponent
    {
        static constexpr std::string_view Name = "AtomCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BodySetup = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BodySetup", 0x560, "WeakObjectProperty"},
        }};
    };

    struct AtomCollisionRejection
    {
        static constexpr std::string_view Name = "AtomCollisionRejection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomColorComponent
    {
        static constexpr std::string_view Name = "AtomColorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorLUTAtlas = 0xC0;
            static constexpr std::uintptr_t ColorLUTTexture = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColorLUTAtlas", 0xC0, "ObjectProperty"},
            {"ColorLUTTexture", 0xC8, "ObjectProperty"},
        }};
    };

    struct AtomColorLUTAtlas
    {
        static constexpr std::string_view Name = "AtomColorLUTAtlas";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AtlasTexture = 0x28;
            static constexpr std::uintptr_t Textures = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AtlasTexture", 0x28, "ObjectProperty"},
            {"Textures", 0x30, "ArrayProperty"},
        }};
    };

    struct AtomColorThemeComponent
    {
        static constexpr std::string_view Name = "AtomColorThemeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorLUTAtlas = 0xC0;
            static constexpr std::uintptr_t ColorLUTTexture = 0xC8;
            static constexpr std::uintptr_t bIsThemeCustomTexture = 0xD0;
            static constexpr std::uintptr_t ColorThemeLibrary = 0xD4;
            static constexpr std::uintptr_t ColorTheme = 0xD8;
            static constexpr std::uintptr_t SelectedGeneratedLibraryTexture = 0xE0;
            static constexpr std::uintptr_t SelectedColorThemeLibrary = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ColorLUTAtlas", 0xC0, "ObjectProperty"},
            {"ColorLUTTexture", 0xC8, "ObjectProperty"},
            {"bIsThemeCustomTexture", 0xD0, "BoolProperty"},
            {"ColorThemeLibrary", 0xD4, "NameProperty"},
            {"ColorTheme", 0xD8, "NameProperty"},
            {"SelectedGeneratedLibraryTexture", 0xE0, "ObjectProperty"},
            {"SelectedColorThemeLibrary", 0xE8, "ObjectProperty"},
        }};
    };

    struct AtomColorThemeLibrary
    {
        static constexpr std::string_view Name = "AtomColorThemeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t MinimumReservedSlotsForTextureBasedThemes = 0x38;
            static constexpr std::uintptr_t ColorThemes = 0x40;
            static constexpr std::uintptr_t GeneratedTexture = 0x50;
            static constexpr std::uintptr_t LUTTextures = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Description", 0x28, "StrProperty"},
            {"MinimumReservedSlotsForTextureBasedThemes", 0x38, "ByteProperty"},
            {"ColorThemes", 0x40, "ArrayProperty"},
            {"GeneratedTexture", 0x50, "SoftObjectProperty"},
            {"LUTTextures", 0x70, "ArrayProperty"},
        }};
    };

    struct AtomColorThemeTextureUserData
    {
        static constexpr std::string_view Name = "AtomColorThemeTextureUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t ThemeNames = 0x28;
            static constexpr std::uintptr_t SourceColorThemeLibrary = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ThemeNames", 0x28, "ArrayProperty"},
            {"SourceColorThemeLibrary", 0x38, "SoftObjectProperty"},
        }};
    };

    struct AtomCommonPartModelAssetUserData
    {
        static constexpr std::string_view Name = "AtomCommonPartModelAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetDescription = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssetDescription", 0x28, "StructProperty"},
        }};
    };

    struct AtomCommonPartStaticMeshAssetUserData
    {
        static constexpr std::string_view Name = "AtomCommonPartStaticMeshAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomConnectivityAssetUserData
    {
        static constexpr std::string_view Name = "AtomConnectivityAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomModelConnections = 0x28;
            static constexpr std::uintptr_t Tags = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AtomModelConnections", 0x28, "StructProperty"},
            {"Tags", 0x68, "ArrayProperty"},
        }};
    };

    struct AtomConnectivityQueryBlueprintLibrary
    {
        static constexpr std::string_view Name = "AtomConnectivityQueryBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomConnectivityRejection
    {
        static constexpr std::string_view Name = "AtomConnectivityRejection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomDatabaseSubsystemBase
    {
        static constexpr std::string_view Name = "AtomDatabaseSubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomEditorModePrimitiveUserData
    {
        static constexpr std::string_view Name = "AtomEditorModePrimitiveUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomISMPoolRenderer
    {
        static constexpr std::string_view Name = "AtomISMPoolRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedISMPoolComponent = 0x38;
            static constexpr std::uintptr_t LocalISMPoolComponent = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedISMPoolComponent", 0x38, "ObjectProperty"},
            {"LocalISMPoolComponent", 0x40, "ObjectProperty"},
        }};
    };

    struct AtomLUCTAtlas
    {
        static constexpr std::string_view Name = "AtomLUCTAtlas";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Themes = 0x28;
            static constexpr std::uintptr_t GeneratedAtlasTexture = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Themes", 0x28, "MapProperty"},
            {"GeneratedAtlasTexture", 0x38, "SoftObjectProperty"},
        }};
    };

    struct AtomModel
    {
        static constexpr std::string_view Name = "AtomModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t Primitives = 0x50;
            static constexpr std::uintptr_t Elements = 0x60;
            static constexpr std::uintptr_t SelectionSets = 0x70;
            static constexpr std::uintptr_t Groups = 0x80;
            static constexpr std::uintptr_t SerializedConnectivityObjects = 0x90;
            static constexpr std::uintptr_t TextureNameToAsset = 0xD0;
            static constexpr std::uintptr_t Attributes = 0xE0;
            static constexpr std::uintptr_t Tags = 0xF0;
            static constexpr std::uintptr_t SourceModel = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Settings", 0x28, "StructProperty"},
            {"Primitives", 0x50, "ArrayProperty"},
            {"Elements", 0x60, "ArrayProperty"},
            {"SelectionSets", 0x70, "ArrayProperty"},
            {"Groups", 0x80, "ArrayProperty"},
            {"SerializedConnectivityObjects", 0x90, "StructProperty"},
            {"TextureNameToAsset", 0xD0, "MapProperty"},
            {"Attributes", 0xE0, "MapProperty"},
            {"Tags", 0xF0, "SetProperty"},
            {"SourceModel", 0x110, "StructProperty"},
        }};
    };

    struct AtomModelActor
    {
        static constexpr std::string_view Name = "AtomModelActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomModel = 0x278;
            static constexpr std::uintptr_t PrimitiveStyleName = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AtomModel", 0x278, "ObjectProperty"},
            {"PrimitiveStyleName", 0x280, "StrProperty"},
        }};
    };

    struct AtomModelActorConnectivityResolver
    {
        static constexpr std::string_view Name = "AtomModelActorConnectivityResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomActorConnectivityResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomModelAssetUserData
    {
        static constexpr std::string_view Name = "AtomModelAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomConnectivityAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomModelConnections = 0x28;
            static constexpr std::uintptr_t Tags = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AtomModelConnections", 0x28, "StructProperty"},
            {"Tags", 0x68, "ArrayProperty"},
        }};
    };

    struct AtomModelComponent
    {
        static constexpr std::string_view Name = "AtomModelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomModel = 0x240;
            static constexpr std::uintptr_t InstanceType = 0x248;
            static constexpr std::uintptr_t bUseCombinedMeshes = 0x249;
            static constexpr std::uintptr_t MaterialColorSource = 0x24A;
            static constexpr std::uintptr_t bCreateRigidElements = 0x24B;
            static constexpr std::uintptr_t bEnableConnectivity = 0x24C;
            static constexpr std::uintptr_t SelectionSetFilter = 0x250;
            static constexpr std::uintptr_t CommonPartOptimization = 0x254;
            static constexpr std::uintptr_t RigidElementComponents = 0x258;
            static constexpr std::uintptr_t ComponentToPrimitive = 0x268;
            static constexpr std::uintptr_t PrimitiveGeometryComplexity = 0x278;
            static constexpr std::uintptr_t PrimitiveGeometrySections = 0x279;
            static constexpr std::uintptr_t bShowCommonParts = 0x27A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AtomModel", 0x240, "ObjectProperty"},
            {"InstanceType", 0x248, "EnumProperty"},
            {"bUseCombinedMeshes", 0x249, "BoolProperty"},
            {"MaterialColorSource", 0x24A, "EnumProperty"},
            {"bCreateRigidElements", 0x24B, "BoolProperty"},
            {"bEnableConnectivity", 0x24C, "BoolProperty"},
            {"SelectionSetFilter", 0x250, "NameProperty"},
            {"CommonPartOptimization", 0x254, "ByteProperty"},
            {"RigidElementComponents", 0x258, "ArrayProperty"},
            {"ComponentToPrimitive", 0x268, "MapProperty"},
            {"PrimitiveGeometryComplexity", 0x278, "EnumProperty"},
            {"PrimitiveGeometrySections", 0x279, "ByteProperty"},
            {"bShowCommonParts", 0x27A, "BoolProperty"},
        }};
    };

    struct AtomModelPartsCollectionConnectivity
    {
        static constexpr std::string_view Name = "AtomModelPartsCollectionConnectivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PartsCollection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PartsCollection", 0x30, "StructProperty"},
        }};
    };

    struct AtomModelProcessor
    {
        static constexpr std::string_view Name = "AtomModelProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRebuildProgress = 0x28;
            static constexpr std::uintptr_t DialogDelay = 0x2C;
            static constexpr std::uintptr_t NumProgressSteps = 0x30;
            static constexpr std::uintptr_t ProgressMessage = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableRebuildProgress", 0x28, "BoolProperty"},
            {"DialogDelay", 0x2C, "FloatProperty"},
            {"NumProgressSteps", 0x30, "IntProperty"},
            {"ProgressMessage", 0x38, "StrProperty"},
        }};
    };

    struct AtomPartsCollectionBlueprintLibrary
    {
        static constexpr std::string_view Name = "AtomPartsCollectionBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomPlacementResultHelperLibrary
    {
        static constexpr std::string_view Name = "AtomPlacementResultHelperLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomPlacementTool
    {
        static constexpr std::string_view Name = "AtomPlacementTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomPlacementToolBase
    {
        static constexpr std::string_view Name = "AtomPlacementToolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectivityRegistrationWeakPtr = 0x30;
            static constexpr std::uintptr_t PlacementOperation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConnectivityRegistrationWeakPtr", 0x30, "WeakObjectProperty"},
            {"PlacementOperation", 0x40, "OptionalProperty"},
        }};
    };

    struct AtomPrimitive
    {
        static constexpr std::string_view Name = "AtomPrimitive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PartId = 0x28;
            static constexpr std::uintptr_t PartRevision = 0x30;
            static constexpr std::uintptr_t DesignName = 0x40;
            static constexpr std::uintptr_t bIsFlex = 0x44;
            static constexpr std::uintptr_t bIsVariant = 0x45;
            static constexpr std::uintptr_t DecorationSurfaceNames = 0x48;
            static constexpr std::uintptr_t NumberOfColorSurfaces = 0x58;
            static constexpr std::uintptr_t AtomPlatform = 0x5C;
            static constexpr std::uintptr_t AtomMainGroupId = 0x60;
            static constexpr std::uintptr_t AtomSubMainGroupId = 0x64;
            static constexpr std::uintptr_t PrimitiveCommonParts = 0x68;
            static constexpr std::uintptr_t bOverrideConnectionFields = 0x78;
            static constexpr std::uintptr_t UnscaledBounds = 0x80;
            static constexpr std::uintptr_t PhysicsAttributes = 0xC0;
            static constexpr std::uintptr_t GeometryContainers = 0x160;
            static constexpr std::uintptr_t DetailTextures = 0x170;
            static constexpr std::uintptr_t ConnectionFields = 0x180;
            static constexpr std::uintptr_t ConnectionFieldsOverride = 0x1B0;
            static constexpr std::uintptr_t TechnicCapConnectivityRefs = 0x1E0;
            static constexpr std::uintptr_t TechnicConnectorConnectivityRefs = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"PartId", 0x28, "IntProperty"},
            {"PartRevision", 0x30, "StrProperty"},
            {"DesignName", 0x40, "NameProperty"},
            {"bIsFlex", 0x44, "BoolProperty"},
            {"bIsVariant", 0x45, "BoolProperty"},
            {"DecorationSurfaceNames", 0x48, "ArrayProperty"},
            {"NumberOfColorSurfaces", 0x58, "IntProperty"},
            {"AtomPlatform", 0x5C, "EnumProperty"},
            {"AtomMainGroupId", 0x60, "IntProperty"},
            {"AtomSubMainGroupId", 0x64, "IntProperty"},
            {"PrimitiveCommonParts", 0x68, "MapProperty"},
            {"bOverrideConnectionFields", 0x78, "BoolProperty"},
            {"UnscaledBounds", 0x80, "StructProperty"},
            {"PhysicsAttributes", 0xC0, "StructProperty"},
            {"GeometryContainers", 0x160, "ArrayProperty"},
            {"DetailTextures", 0x170, "ArrayProperty"},
            {"ConnectionFields", 0x180, "StructProperty"},
            {"ConnectionFieldsOverride", 0x1B0, "StructProperty"},
            {"TechnicCapConnectivityRefs", 0x1E0, "MapProperty"},
            {"TechnicConnectorConnectivityRefs", 0x1F0, "MapProperty"},
        }};
    };

    struct AtomPrimitiveAssetUserData
    {
        static constexpr std::string_view Name = "AtomPrimitiveAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomConnectivityAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomModelConnections = 0x28;
            static constexpr std::uintptr_t Tags = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AtomModelConnections", 0x28, "StructProperty"},
            {"Tags", 0x68, "ArrayProperty"},
        }};
    };

    struct AtomPrimitiveBlueprintLibrary
    {
        static constexpr std::string_view Name = "AtomPrimitiveBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomPrimitiveCollisionGeometryWrapper
    {
        static constexpr std::string_view Name = "AtomPrimitiveCollisionGeometryWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxElems = 0x28;
            static constexpr std::uintptr_t ConvexElems = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoxElems", 0x28, "ArrayProperty"},
            {"ConvexElems", 0x38, "ArrayProperty"},
        }};
    };

    struct AtomPrimitiveComponent
    {
        static constexpr std::string_view Name = "AtomPrimitiveComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AtomPrimitive = 0x6A0;
            static constexpr std::uintptr_t RenderStyle = 0x6A8;
            static constexpr std::uintptr_t FallbackRenderStyle = 0x6B8;
            static constexpr std::uintptr_t bUseCombinedMeshes = 0x6C8;
            static constexpr std::uintptr_t bUseRenderStyle = 0x6C9;
            static constexpr std::uintptr_t bUseFallbackRenderStyle = 0x6CA;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AtomPrimitive", 0x6A0, "ObjectProperty"},
            {"RenderStyle", 0x6A8, "StrProperty"},
            {"FallbackRenderStyle", 0x6B8, "StrProperty"},
            {"bUseCombinedMeshes", 0x6C8, "BoolProperty"},
            {"bUseRenderStyle", 0x6C9, "BoolProperty"},
            {"bUseFallbackRenderStyle", 0x6CA, "BoolProperty"},
        }};
    };

    struct AtomPrimitiveGeometry
    {
        static constexpr std::string_view Name = "AtomPrimitiveGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomPrimitiveGeometryContainer
    {
        static constexpr std::string_view Name = "AtomPrimitiveGeometryContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMesh = 0x28;
            static constexpr std::uintptr_t ExportStyleName = 0x48;
            static constexpr std::uintptr_t LOD = 0x4C;
            static constexpr std::uintptr_t GeometryCount = 0x50;
            static constexpr std::uintptr_t SectionTextureInfos = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceMesh", 0x28, "SoftObjectProperty"},
            {"ExportStyleName", 0x48, "NameProperty"},
            {"LOD", 0x4C, "IntProperty"},
            {"GeometryCount", 0x50, "MapProperty"},
            {"SectionTextureInfos", 0x60, "MapProperty"},
        }};
    };

    struct AtomPrimitiveStaticMeshComponent
    {
        static constexpr std::string_view Name = "AtomPrimitiveStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

    struct AtomProcessorBlueprintLibrary
    {
        static constexpr std::string_view Name = "AtomProcessorBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomRejectionReason
    {
        static constexpr std::string_view Name = "AtomRejectionReason";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomRuntimeBlueprintLibrary
    {
        static constexpr std::string_view Name = "AtomRuntimeBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomRuntimeSettings
    {
        static constexpr std::string_view Name = "AtomRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimitiveGlobalScale = 0x30;
            static constexpr std::uintptr_t ColorDataTableOverride = 0x38;
            static constexpr std::uintptr_t bCookContent = 0x58;
            static constexpr std::uintptr_t BrickPlacementCollisionOverlapTolerance = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PrimitiveGlobalScale", 0x30, "FloatProperty"},
            {"ColorDataTableOverride", 0x38, "SoftObjectProperty"},
            {"bCookContent", 0x58, "BoolProperty"},
            {"BrickPlacementCollisionOverlapTolerance", 0x5C, "FloatProperty"},
        }};
    };

    struct AtomSpatialAccelerationSubsystem
    {
        static constexpr std::string_view Name = "AtomSpatialAccelerationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomSpatialAccelerationSubsystemOctree
    {
        static constexpr std::string_view Name = "AtomSpatialAccelerationSubsystemOctree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomSpatialAccelerationSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomSpatialAccelerationSubsystemUniformGrid
    {
        static constexpr std::string_view Name = "AtomSpatialAccelerationSubsystemUniformGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomSpatialAccelerationSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AtomTextureImportData
    {
        static constexpr std::string_view Name = "AtomTextureImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetImportData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConnectivityBlueprintLibrary
    {
        static constexpr std::string_view Name = "ConnectivityBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConnectivityRegistration
    {
        static constexpr std::string_view Name = "ConnectivityRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DirectPlacement
    {
        static constexpr std::string_view Name = "DirectPlacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DirectSnapPlacementTool
    {
        static constexpr std::string_view Name = "DirectSnapPlacementTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProximitySnapPlacementTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectivityRegistrationWeakPtr = 0x30;
            static constexpr std::uintptr_t PlacementOperation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConnectivityRegistrationWeakPtr", 0x30, "WeakObjectProperty"},
            {"PlacementOperation", 0x40, "OptionalProperty"},
        }};
    };

    struct DragPlacement
    {
        static constexpr std::string_view Name = "DragPlacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DragSnapPlacementTool
    {
        static constexpr std::string_view Name = "DragSnapPlacementTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomPlacementToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectivityRegistrationWeakPtr = 0x30;
            static constexpr std::uintptr_t PlacementOperation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConnectivityRegistrationWeakPtr", 0x30, "WeakObjectProperty"},
            {"PlacementOperation", 0x40, "OptionalProperty"},
        }};
    };

    struct PlacementOperationBlueprintLibrary
    {
        static constexpr std::string_view Name = "PlacementOperationBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlacementSettings
    {
        static constexpr std::string_view Name = "PlacementSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SnapToolMode = 0x78;
            static constexpr std::uintptr_t bIgnoreRejectedEdgeSnappingPlacement = 0x79;
            static constexpr std::uintptr_t bResetPlacementRotation = 0x7A;
            static constexpr std::uintptr_t DragSnapMode = 0x7B;
            static constexpr std::uintptr_t bEnableEdgeSnapping = 0x7C;
            static constexpr std::uintptr_t MaxSnappingDistanceInKnobCount = 0x80;
            static constexpr std::uintptr_t LateralNudgeDistanceInKnobCount = 0x84;
            static constexpr std::uintptr_t VerticalNudgeDistanceInPlateCount = 0x88;
            static constexpr std::uintptr_t RotateNudgeDegrees = 0x8C;
            static constexpr std::uintptr_t bSingleFieldPlacement = 0x90;
            static constexpr std::uintptr_t bEnableCollisionDetection = 0x91;
            static constexpr std::uintptr_t LineTraceLength = 0x98;
            static constexpr std::uintptr_t ConnectivityTraceProfileName = 0xA0;
            static constexpr std::uintptr_t RegistrationOverlapProfileName = 0xA4;
            static constexpr std::uintptr_t bDebugVisualization = 0xA8;
            static constexpr std::uintptr_t DebugDrawFlags = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"SnapToolMode", 0x78, "EnumProperty"},
            {"bIgnoreRejectedEdgeSnappingPlacement", 0x79, "BoolProperty"},
            {"bResetPlacementRotation", 0x7A, "BoolProperty"},
            {"DragSnapMode", 0x7B, "EnumProperty"},
            {"bEnableEdgeSnapping", 0x7C, "BoolProperty"},
            {"MaxSnappingDistanceInKnobCount", 0x80, "UInt32Property"},
            {"LateralNudgeDistanceInKnobCount", 0x84, "FloatProperty"},
            {"VerticalNudgeDistanceInPlateCount", 0x88, "FloatProperty"},
            {"RotateNudgeDegrees", 0x8C, "FloatProperty"},
            {"bSingleFieldPlacement", 0x90, "BoolProperty"},
            {"bEnableCollisionDetection", 0x91, "BoolProperty"},
            {"LineTraceLength", 0x98, "DoubleProperty"},
            {"ConnectivityTraceProfileName", 0xA0, "StructProperty"},
            {"RegistrationOverlapProfileName", 0xA4, "StructProperty"},
            {"bDebugVisualization", 0xA8, "BoolProperty"},
            {"DebugDrawFlags", 0xAC, "IntProperty"},
        }};
    };

    struct ProximitySnapPlacementTool
    {
        static constexpr std::string_view Name = "ProximitySnapPlacementTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomPlacementToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectivityRegistrationWeakPtr = 0x30;
            static constexpr std::uintptr_t PlacementOperation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConnectivityRegistrationWeakPtr", 0x30, "WeakObjectProperty"},
            {"PlacementOperation", 0x40, "OptionalProperty"},
        }};
    };

    struct WorldConnectivityBlueprintLibrary
    {
        static constexpr std::string_view Name = "WorldConnectivityBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldConnectivitySubsystem
    {
        static constexpr std::string_view Name = "WorldConnectivitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectivityRegistration = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConnectivityRegistration", 0x38, "ObjectProperty"},
        }};
    };

}

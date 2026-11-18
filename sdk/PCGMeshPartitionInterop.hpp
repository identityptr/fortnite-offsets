#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PCGMeshPartitionInterop
{
    struct PCGAnalyzeMeshSectionSettings
    {
        static constexpr std::string_view Name = "PCGAnalyzeMeshSectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGBakeMeshTerrainSectionMeshSettings
    {
        static constexpr std::string_view Name = "PCGBakeMeshTerrainSectionMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t BakeParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BakeParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGDataComponent
    {
        static constexpr std::string_view Name = "PCGDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PCGGenerateMeshTerrainScatteringDataSettings
    {
        static constexpr std::string_view Name = "PCGGenerateMeshTerrainScatteringDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelTextureResolutionX = 0xA8;
            static constexpr std::uintptr_t ChannelTextureResolutionY = 0xAC;
            static constexpr std::uintptr_t DebugGrassLayer = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelTextureResolutionX", 0xA8, "IntProperty"},
            {"ChannelTextureResolutionY", 0xAC, "IntProperty"},
            {"DebugGrassLayer", 0xB0, "IntProperty"},
        }};
    };

    struct PCGGetMeshPartitionGrassTypesSettings
    {
        static constexpr std::string_view Name = "PCGGetMeshPartitionGrassTypesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0xA8;
            static constexpr std::uintptr_t GrassNameAttributeName = 0xC8;
            static constexpr std::uintptr_t GrassTypeAttributeName = 0xCC;
            static constexpr std::uintptr_t bSynchronousLoad = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Definition", 0xA8, "SoftObjectProperty"},
            {"GrassNameAttributeName", 0xC8, "NameProperty"},
            {"GrassTypeAttributeName", 0xCC, "NameProperty"},
            {"bSynchronousLoad", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGGetMeshPartitionTexelSizesSettings
    {
        static constexpr std::string_view Name = "PCGGetMeshPartitionTexelSizesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0xA8;
            static constexpr std::uintptr_t ChannelTexturesTexelSizeAttributeName = 0xC8;
            static constexpr std::uintptr_t MaterialCacheTexelSizeAttributeName = 0xCC;
            static constexpr std::uintptr_t bSynchronousLoad = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Definition", 0xA8, "SoftObjectProperty"},
            {"ChannelTexturesTexelSizeAttributeName", 0xC8, "NameProperty"},
            {"MaterialCacheTexelSizeAttributeName", 0xCC, "NameProperty"},
            {"bSynchronousLoad", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGGetMeshTerrainSectionActorSettings
    {
        static constexpr std::string_view Name = "PCGGetMeshTerrainSectionActorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputAttributeName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputAttributeName", 0xA8, "NameProperty"},
        }};
    };

    struct PCGGetMeshTerrainSectionChannelTexturesSettings
    {
        static constexpr std::string_view Name = "PCGGetMeshTerrainSectionChannelTexturesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedChannels = 0xA8;
            static constexpr std::uintptr_t bExcludeSelectedChannels = 0xB8;
            static constexpr std::uintptr_t bDropMissingChannels = 0xB9;
            static constexpr std::uintptr_t bOutputTextureArray = 0xBA;
            static constexpr std::uintptr_t Filter = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SelectedChannels", 0xA8, "ArrayProperty"},
            {"bExcludeSelectedChannels", 0xB8, "BoolProperty"},
            {"bDropMissingChannels", 0xB9, "BoolProperty"},
            {"bOutputTextureArray", 0xBA, "BoolProperty"},
            {"Filter", 0xBB, "EnumProperty"},
        }};
    };

    struct PCGGetMeshTerrainSectionSettings
    {
        static constexpr std::string_view Name = "PCGGetMeshTerrainSectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedBuildVariants = 0xA8;
            static constexpr std::uintptr_t bExcludeSelectedBuildVariants = 0xB8;
            static constexpr std::uintptr_t bEmitMultipleSections = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectedBuildVariants", 0xA8, "ArrayProperty"},
            {"bExcludeSelectedBuildVariants", 0xB8, "BoolProperty"},
            {"bEmitMultipleSections", 0xB9, "BoolProperty"},
        }};
    };

    struct PCGManagedInstancedProjectionModifier
    {
        static constexpr std::string_view Name = "PCGManagedInstancedProjectionModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsUID = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SettingsUID", 0x58, "UInt64Property"},
        }};
    };

    struct PCGManagedModifierResource
    {
        static constexpr std::string_view Name = "PCGManagedModifierResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsCrc = 0x58;
            static constexpr std::uintptr_t bSupportsComponentReset = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SettingsCrc", 0x58, "StructProperty"},
            {"bSupportsComponentReset", 0x60, "BoolProperty"},
        }};
    };

    struct PCGManagedPatchModifier
    {
        static constexpr std::string_view Name = "PCGManagedPatchModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsUID = 0x58;
            static constexpr std::uintptr_t Descriptor = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SettingsUID", 0x58, "UInt64Property"},
            {"Descriptor", 0x60, "StructProperty"},
        }};
    };

    struct PCGMeshPartitionData
    {
        static constexpr std::string_view Name = "PCGMeshPartitionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x180;
            static constexpr std::uintptr_t OriginatingComponent = 0x188;
            static constexpr std::uintptr_t Bounds = 0x190;
            static constexpr std::uintptr_t QueryParams = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"World", 0x180, "WeakObjectProperty"},
            {"OriginatingComponent", 0x188, "WeakObjectProperty"},
            {"Bounds", 0x190, "StructProperty"},
            {"QueryParams", 0x1C8, "StructProperty"},
        }};
    };

    struct PCGMeshTerrainSectionData
    {
        static constexpr std::string_view Name = "PCGMeshTerrainSectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t UID = 0x28;
            static constexpr std::uintptr_t MetaData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UID", 0x28, "UInt64Property"},
            {"MetaData", 0x38, "ObjectProperty"},
        }};
    };

    struct PCGPatchInstanceSpawnerSettings
    {
        static constexpr std::string_view Name = "PCGPatchInstanceSpawnerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnerParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnerParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGProjectionSpawnerSettings
    {
        static constexpr std::string_view Name = "PCGProjectionSpawnerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xA8;
            static constexpr std::uintptr_t Type = 0xB0;
            static constexpr std::uintptr_t AffectedMegaMesh = 0xB8;
            static constexpr std::uintptr_t BlendMode = 0xD8;
            static constexpr std::uintptr_t HeightFalloff = 0xE0;
            static constexpr std::uintptr_t WeightChannels = 0x100;
            static constexpr std::uintptr_t CustomMeshTransformsAttribute = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Priority", 0xA8, "DoubleProperty"},
            {"Type", 0xB0, "NameProperty"},
            {"AffectedMegaMesh", 0xB8, "SoftObjectProperty"},
            {"BlendMode", 0xD8, "EnumProperty"},
            {"HeightFalloff", 0xE0, "StructProperty"},
            {"WeightChannels", 0x100, "ArrayProperty"},
            {"CustomMeshTransformsAttribute", 0x110, "StrProperty"},
        }};
    };

    struct PCGQuerySettings
    {
        static constexpr std::string_view Name = "PCGQuerySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueryParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGSculptLayerWriteSettings
    {
        static constexpr std::string_view Name = "PCGSculptLayerWriteSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0xA8;
            static constexpr std::uintptr_t Priority = 0xB0;
            static constexpr std::uintptr_t Channels = 0xB8;
            static constexpr std::uintptr_t bSourcePositionIsAttribute = 0xC8;
            static constexpr std::uintptr_t SourcePositionsAttribute = 0xD0;
            static constexpr std::uintptr_t bWritePositions = 0xE0;
            static constexpr std::uintptr_t bDestinationPositionIsAttribute = 0xE1;
            static constexpr std::uintptr_t DestinationPositionsAttribute = 0xE8;
            static constexpr std::uintptr_t bConstrainToBounds = 0xF8;
            static constexpr std::uintptr_t bOnlyIncludeFullyModifiedTriangles = 0xF9;
            static constexpr std::uintptr_t MaxClosestPointDistance = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Type", 0xA8, "NameProperty"},
            {"Priority", 0xB0, "DoubleProperty"},
            {"Channels", 0xB8, "ArrayProperty"},
            {"bSourcePositionIsAttribute", 0xC8, "BoolProperty"},
            {"SourcePositionsAttribute", 0xD0, "StrProperty"},
            {"bWritePositions", 0xE0, "BoolProperty"},
            {"bDestinationPositionIsAttribute", 0xE1, "BoolProperty"},
            {"DestinationPositionsAttribute", 0xE8, "StrProperty"},
            {"bConstrainToBounds", 0xF8, "BoolProperty"},
            {"bOnlyIncludeFullyModifiedTriangles", 0xF9, "BoolProperty"},
            {"MaxClosestPointDistance", 0xFC, "FloatProperty"},
        }};
    };

    struct PCGWriteSettings
    {
        static constexpr std::string_view Name = "PCGWriteSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AffectedMegaMesh = 0xA8;
            static constexpr std::uintptr_t Type = 0xC8;
            static constexpr std::uintptr_t Priority = 0xD0;
            static constexpr std::uintptr_t Channels = 0xD8;
            static constexpr std::uintptr_t bSourcePositionIsAttribute = 0xE8;
            static constexpr std::uintptr_t SourcePositionsAttribute = 0xF0;
            static constexpr std::uintptr_t bWritePositions = 0x100;
            static constexpr std::uintptr_t bDestinationPositionIsAttribute = 0x101;
            static constexpr std::uintptr_t DestinationPositionsAttribute = 0x108;
            static constexpr std::uintptr_t bConstrainToBounds = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AffectedMegaMesh", 0xA8, "SoftObjectProperty"},
            {"Type", 0xC8, "NameProperty"},
            {"Priority", 0xD0, "DoubleProperty"},
            {"Channels", 0xD8, "ArrayProperty"},
            {"bSourcePositionIsAttribute", 0xE8, "BoolProperty"},
            {"SourcePositionsAttribute", 0xF0, "StrProperty"},
            {"bWritePositions", 0x100, "BoolProperty"},
            {"bDestinationPositionIsAttribute", 0x101, "BoolProperty"},
            {"DestinationPositionsAttribute", 0x108, "StrProperty"},
            {"bConstrainToBounds", 0x118, "BoolProperty"},
        }};
    };

}

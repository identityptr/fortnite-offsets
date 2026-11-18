#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HairStrandsCore
{
    struct DataflowGroomContent
    {
        static constexpr std::string_view Name = "DataflowGroomContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowSkeletalContent";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingAsset = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BindingAsset", 0xF0, "ObjectProperty"},
        }};
    };

    struct GroomActor
    {
        static constexpr std::string_view Name = "GroomActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroomComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct GroomAsset
    {
        static constexpr std::string_view Name = "GroomAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LODMode = 0x58;
            static constexpr std::uintptr_t AutoLODBias = 0x5C;
            static constexpr std::uintptr_t DataflowSettings = 0x60;
            static constexpr std::uintptr_t HairGroupsInfo = 0xE0;
            static constexpr std::uintptr_t HairGroupsRendering = 0xF0;
            static constexpr std::uintptr_t HairGroupsPhysics = 0x100;
            static constexpr std::uintptr_t HairGroupsInterpolation = 0x110;
            static constexpr std::uintptr_t HairGroupsLOD = 0x120;
            static constexpr std::uintptr_t HairGroupsCards = 0x130;
            static constexpr std::uintptr_t HairGroupsMeshes = 0x140;
            static constexpr std::uintptr_t HairGroupsMaterials = 0x150;
            static constexpr std::uintptr_t EnableGlobalInterpolation = 0x160;
            static constexpr std::uintptr_t EnableSimulationCache = 0x161;
            static constexpr std::uintptr_t HairInterpolationType = 0x162;
            static constexpr std::uintptr_t RiggedSkeletalMesh = 0x168;
            static constexpr std::uintptr_t DeformedGroupSections = 0x170;
            static constexpr std::uintptr_t MinLOD = 0x180;
            static constexpr std::uintptr_t DisableBelowMinLodStripping = 0x198;
            static constexpr std::uintptr_t EffectiveLODBias = 0x1B0;
            static constexpr std::uintptr_t AssetUserData = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"LODMode", 0x58, "EnumProperty"},
            {"AutoLODBias", 0x5C, "FloatProperty"},
            {"DataflowSettings", 0x60, "StructProperty"},
            {"HairGroupsInfo", 0xE0, "ArrayProperty"},
            {"HairGroupsRendering", 0xF0, "ArrayProperty"},
            {"HairGroupsPhysics", 0x100, "ArrayProperty"},
            {"HairGroupsInterpolation", 0x110, "ArrayProperty"},
            {"HairGroupsLOD", 0x120, "ArrayProperty"},
            {"HairGroupsCards", 0x130, "ArrayProperty"},
            {"HairGroupsMeshes", 0x140, "ArrayProperty"},
            {"HairGroupsMaterials", 0x150, "ArrayProperty"},
            {"EnableGlobalInterpolation", 0x160, "BoolProperty"},
            {"EnableSimulationCache", 0x161, "BoolProperty"},
            {"HairInterpolationType", 0x162, "EnumProperty"},
            {"RiggedSkeletalMesh", 0x168, "ObjectProperty"},
            {"DeformedGroupSections", 0x170, "ArrayProperty"},
            {"MinLOD", 0x180, "StructProperty"},
            {"DisableBelowMinLodStripping", 0x198, "StructProperty"},
            {"EffectiveLODBias", 0x1B0, "ArrayProperty"},
            {"AssetUserData", 0x1E8, "ArrayProperty"},
        }};
    };

    struct GroomAssetImportData
    {
        static constexpr std::string_view Name = "GroomAssetImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t ImportOptions = 0x28;
            static constexpr std::uintptr_t HairStrandsTexturesOptions = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ImportOptions", 0x28, "ObjectProperty"},
            {"HairStrandsTexturesOptions", 0x30, "ObjectProperty"},
        }};
    };

    struct GroomBindingAsset
    {
        static constexpr std::string_view Name = "GroomBindingAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomBindingType = 0x30;
            static constexpr std::uintptr_t Groom = 0x38;
            static constexpr std::uintptr_t SourceSkeletalMesh = 0x40;
            static constexpr std::uintptr_t SourceMeshRequestedLOD = 0x48;
            static constexpr std::uintptr_t SourceMeshUsedLOD = 0x4C;
            static constexpr std::uintptr_t TargetSkeletalMesh = 0x50;
            static constexpr std::uintptr_t TargetMeshRequestedMinLOD = 0x58;
            static constexpr std::uintptr_t TargetMeshUsedMinLOD = 0x5C;
            static constexpr std::uintptr_t SourceGeometryCache = 0x60;
            static constexpr std::uintptr_t TargetGeometryCache = 0x68;
            static constexpr std::uintptr_t NumInterpolationPoints = 0x70;
            static constexpr std::uintptr_t MatchingSection = 0x74;
            static constexpr std::uintptr_t TargetBindingAttribute = 0x78;
            static constexpr std::uintptr_t GroupInfos = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GroomBindingType", 0x30, "EnumProperty"},
            {"Groom", 0x38, "ObjectProperty"},
            {"SourceSkeletalMesh", 0x40, "ObjectProperty"},
            {"SourceMeshRequestedLOD", 0x48, "IntProperty"},
            {"SourceMeshUsedLOD", 0x4C, "IntProperty"},
            {"TargetSkeletalMesh", 0x50, "ObjectProperty"},
            {"TargetMeshRequestedMinLOD", 0x58, "IntProperty"},
            {"TargetMeshUsedMinLOD", 0x5C, "IntProperty"},
            {"SourceGeometryCache", 0x60, "ObjectProperty"},
            {"TargetGeometryCache", 0x68, "ObjectProperty"},
            {"NumInterpolationPoints", 0x70, "IntProperty"},
            {"MatchingSection", 0x74, "IntProperty"},
            {"TargetBindingAttribute", 0x78, "NameProperty"},
            {"GroupInfos", 0x80, "ArrayProperty"},
        }};
    };

    struct GroomBindingAssetList
    {
        static constexpr std::string_view Name = "GroomBindingAssetList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Bindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bindings", 0x28, "ArrayProperty"},
        }};
    };

    struct GroomBlueprintLibrary
    {
        static constexpr std::string_view Name = "GroomBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GroomCache
    {
        static constexpr std::string_view Name = "GroomCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetUserData = 0x48;
            static constexpr std::uintptr_t GroomCacheInfo = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssetUserData", 0x48, "ArrayProperty"},
            {"GroomCacheInfo", 0x58, "StructProperty"},
        }};
    };

    struct GroomCacheImportData
    {
        static constexpr std::string_view Name = "GroomCacheImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

    struct GroomCacheImportOptions
    {
        static constexpr std::string_view Name = "GroomCacheImportOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ImportSettings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ImportSettings", 0x28, "StructProperty"},
        }};
    };

    struct GroomComponent
    {
        static constexpr std::string_view Name = "GroomComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomAsset = 0x5D0;
            static constexpr std::uintptr_t GroomCache = 0x5D8;
            static constexpr std::uintptr_t NiagaraComponents = 0x5E0;
            static constexpr std::uintptr_t SourceSkeletalMesh = 0x5F0;
            static constexpr std::uintptr_t BindingAsset = 0x5F8;
            static constexpr std::uintptr_t PhysicsAsset = 0x600;
            static constexpr std::uintptr_t SimulationSettings = 0x618;
            static constexpr std::uintptr_t MeshDeformer = 0x6A8;
            static constexpr std::uintptr_t MeshDeformerInstance = 0x6B0;
            static constexpr std::uintptr_t MeshDeformerInstanceSettings = 0x6B8;
            static constexpr std::uintptr_t Strands_DebugMaterial = 0x6C0;
            static constexpr std::uintptr_t Strands_DefaultMaterial = 0x6C8;
            static constexpr std::uintptr_t Cards_DefaultMaterial = 0x6D0;
            static constexpr std::uintptr_t Meshes_DefaultMaterial = 0x6D8;
            static constexpr std::uintptr_t AngularSpringsSystem = 0x6E0;
            static constexpr std::uintptr_t CosseratRodsSystem = 0x6E8;
            static constexpr std::uintptr_t AttachmentName = 0x6F0;
            static constexpr std::uintptr_t GroomGroupsDesc = 0x790;
            static constexpr std::uintptr_t bUseCards = 0x7A0;
            static constexpr std::uintptr_t bRunning = 0x7A1;
            static constexpr std::uintptr_t bLooping = 0x7A2;
            static constexpr std::uintptr_t bManualTick = 0x7A3;
            static constexpr std::uintptr_t ElapsedTime = 0x7A4;
            static constexpr std::uintptr_t RegisteredMeshComponent = 0x7D0;
            static constexpr std::uintptr_t DeformedMeshComponent = 0x7D8;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"GroomAsset", 0x5D0, "ObjectProperty"},
            {"GroomCache", 0x5D8, "ObjectProperty"},
            {"NiagaraComponents", 0x5E0, "ArrayProperty"},
            {"SourceSkeletalMesh", 0x5F0, "ObjectProperty"},
            {"BindingAsset", 0x5F8, "ObjectProperty"},
            {"PhysicsAsset", 0x600, "ObjectProperty"},
            {"SimulationSettings", 0x618, "StructProperty"},
            {"MeshDeformer", 0x6A8, "ObjectProperty"},
            {"MeshDeformerInstance", 0x6B0, "ObjectProperty"},
            {"MeshDeformerInstanceSettings", 0x6B8, "ObjectProperty"},
            {"Strands_DebugMaterial", 0x6C0, "ObjectProperty"},
            {"Strands_DefaultMaterial", 0x6C8, "ObjectProperty"},
            {"Cards_DefaultMaterial", 0x6D0, "ObjectProperty"},
            {"Meshes_DefaultMaterial", 0x6D8, "ObjectProperty"},
            {"AngularSpringsSystem", 0x6E0, "ObjectProperty"},
            {"CosseratRodsSystem", 0x6E8, "ObjectProperty"},
            {"AttachmentName", 0x6F0, "StrProperty"},
            {"GroomGroupsDesc", 0x790, "ArrayProperty"},
            {"bUseCards", 0x7A0, "BoolProperty"},
            {"bRunning", 0x7A1, "BoolProperty"},
            {"bLooping", 0x7A2, "BoolProperty"},
            {"bManualTick", 0x7A3, "BoolProperty"},
            {"ElapsedTime", 0x7A4, "FloatProperty"},
            {"RegisteredMeshComponent", 0x7D0, "ObjectProperty"},
            {"DeformedMeshComponent", 0x7D8, "ObjectProperty"},
        }};
    };

    struct GroomCreateBindingOptions
    {
        static constexpr std::string_view Name = "GroomCreateBindingOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomAsset = 0x28;
            static constexpr std::uintptr_t GroomBindingType = 0x30;
            static constexpr std::uintptr_t SourceSkeletalMesh = 0x38;
            static constexpr std::uintptr_t TargetSkeletalMesh = 0x40;
            static constexpr std::uintptr_t SourceGeometryCache = 0x48;
            static constexpr std::uintptr_t TargetGeometryCache = 0x50;
            static constexpr std::uintptr_t NumInterpolationPoints = 0x58;
            static constexpr std::uintptr_t MatchingSection = 0x5C;
            static constexpr std::uintptr_t TargetBindingAttribute = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"GroomAsset", 0x28, "WeakObjectProperty"},
            {"GroomBindingType", 0x30, "EnumProperty"},
            {"SourceSkeletalMesh", 0x38, "ObjectProperty"},
            {"TargetSkeletalMesh", 0x40, "ObjectProperty"},
            {"SourceGeometryCache", 0x48, "ObjectProperty"},
            {"TargetGeometryCache", 0x50, "ObjectProperty"},
            {"NumInterpolationPoints", 0x58, "IntProperty"},
            {"MatchingSection", 0x5C, "IntProperty"},
            {"TargetBindingAttribute", 0x60, "NameProperty"},
        }};
    };

    struct GroomCreateFollicleMaskOptions
    {
        static constexpr std::string_view Name = "GroomCreateFollicleMaskOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Resolution = 0x28;
            static constexpr std::uintptr_t RootRadius = 0x2C;
            static constexpr std::uintptr_t Grooms = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Resolution", 0x28, "IntProperty"},
            {"RootRadius", 0x2C, "IntProperty"},
            {"Grooms", 0x30, "ArrayProperty"},
        }};
    };

    struct GroomCreateStrandsTexturesOptions
    {
        static constexpr std::string_view Name = "GroomCreateStrandsTexturesOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Layout = 0x28;
            static constexpr std::uintptr_t Resolution = 0x2C;
            static constexpr std::uintptr_t TraceType = 0x30;
            static constexpr std::uintptr_t TraceDistance = 0x34;
            static constexpr std::uintptr_t MeshType = 0x38;
            static constexpr std::uintptr_t StaticMesh = 0x40;
            static constexpr std::uintptr_t SkeletalMesh = 0x48;
            static constexpr std::uintptr_t LODIndex = 0x50;
            static constexpr std::uintptr_t SectionIndex = 0x54;
            static constexpr std::uintptr_t UVChannelIndex = 0x58;
            static constexpr std::uintptr_t GroupIndex = 0x60;
            static constexpr std::uintptr_t Dilation = 0x70;
            static constexpr std::uintptr_t GeneratedTextures = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Layout", 0x28, "EnumProperty"},
            {"Resolution", 0x2C, "IntProperty"},
            {"TraceType", 0x30, "EnumProperty"},
            {"TraceDistance", 0x34, "FloatProperty"},
            {"MeshType", 0x38, "EnumProperty"},
            {"StaticMesh", 0x40, "ObjectProperty"},
            {"SkeletalMesh", 0x48, "ObjectProperty"},
            {"LODIndex", 0x50, "IntProperty"},
            {"SectionIndex", 0x54, "IntProperty"},
            {"UVChannelIndex", 0x58, "IntProperty"},
            {"GroupIndex", 0x60, "ArrayProperty"},
            {"Dilation", 0x70, "IntProperty"},
            {"GeneratedTextures", 0x78, "ArrayProperty"},
        }};
    };

    struct GroomHairGroupsMapping
    {
        static constexpr std::string_view Name = "GroomHairGroupsMapping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OldGroupNames = 0x28;
            static constexpr std::uintptr_t NewGroupNames = 0x38;
            static constexpr std::uintptr_t OldToNewGroupIndexMapping = 0x48;
            static constexpr std::uintptr_t NewToOldGroupIndexMapping = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OldGroupNames", 0x28, "ArrayProperty"},
            {"NewGroupNames", 0x38, "ArrayProperty"},
            {"OldToNewGroupIndexMapping", 0x48, "ArrayProperty"},
            {"NewToOldGroupIndexMapping", 0x58, "ArrayProperty"},
        }};
    };

    struct GroomHairGroupsPreview
    {
        static constexpr std::string_view Name = "GroomHairGroupsPreview";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Groups = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Groups", 0x28, "ArrayProperty"},
        }};
    };

    struct GroomImportOptions
    {
        static constexpr std::string_view Name = "GroomImportOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversionSettings = 0x28;
            static constexpr std::uintptr_t InterpolationSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConversionSettings", 0x28, "StructProperty"},
            {"InterpolationSettings", 0x58, "ArrayProperty"},
        }};
    };

    struct GroomPluginSettings
    {
        static constexpr std::string_view Name = "GroomPluginSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomCacheLookAheadBuffer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroomCacheLookAheadBuffer", 0x28, "FloatProperty"},
        }};
    };

    struct HairCardGenerationSettings
    {
        static constexpr std::string_view Name = "HairCardGenerationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneGroomCacheSection
    {
        static constexpr std::string_view Name = "MovieSceneGroomCacheSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x140, "StructProperty"},
        }};
    };

    struct MovieSceneGroomCacheTrack
    {
        static constexpr std::string_view Name = "MovieSceneGroomCacheTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationSections", 0x100, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceHairStrands
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceHairStrands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSource = 0x40;
            static constexpr std::uintptr_t SourceActor = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultSource", 0x40, "ObjectProperty"},
            {"SourceActor", 0x48, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfacePressureGrid
    {
        static constexpr std::string_view Name = "NiagaraDataInterfacePressureGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceVelocityGrid";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridSize", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVelocityGrid
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVelocityGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridSize", 0x38, "StructProperty"},
        }};
    };

}

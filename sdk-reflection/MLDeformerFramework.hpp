#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MLDeformerFramework
{
    struct DeformerGraphSkeletonWithWeightedQuatsDataInterface
    {
        static constexpr std::string_view Name = "DeformerGraphSkeletonWithWeightedQuatsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeformerGraphSkeletonWithWeightedQuatsDataProvider
    {
        static constexpr std::string_view Name = "DeformerGraphSkeletonWithWeightedQuatsDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t SkinnedMesh = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SkinnedMesh", 0x28, "ObjectProperty"},
        }};
    };

    struct MLDeformerAsset
    {
        static constexpr std::string_view Name = "MLDeformerAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Model = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Model", 0x28, "ObjectProperty"},
        }};
    };

    struct MLDeformerComponent
    {
        static constexpr std::string_view Name = "MLDeformerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformerAsset = 0xE0;
            static constexpr std::uintptr_t Weight = 0xE8;
            static constexpr std::uintptr_t QualityLevel = 0xEC;
            static constexpr std::uintptr_t ModelInstance = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DeformerAsset", 0xE0, "ObjectProperty"},
            {"Weight", 0xE8, "FloatProperty"},
            {"QualityLevel", 0xEC, "IntProperty"},
            {"ModelInstance", 0xF0, "ObjectProperty"},
        }};
    };

    struct MLDeformerComponentSource
    {
        static constexpr std::string_view Name = "MLDeformerComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MLDeformerGeomCacheModel
    {
        static constexpr std::string_view Name = "MLDeformerGeomCacheModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NumBaseMeshVerts = 0xF0;
            static constexpr std::uintptr_t NumTargetMeshVerts = 0xF4;
            static constexpr std::uintptr_t TrainingDevice = 0xF8;
            static constexpr std::uintptr_t MaxNumLODs = 0x118;
            static constexpr std::uintptr_t InputInfo = 0x120;
            static constexpr std::uintptr_t VertexMap = 0x128;
            static constexpr std::uintptr_t TrainingDataProcessorSettings = 0x138;
            static constexpr std::uintptr_t SkeletalMesh = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NumBaseMeshVerts", 0xF0, "IntProperty"},
            {"NumTargetMeshVerts", 0xF4, "IntProperty"},
            {"TrainingDevice", 0xF8, "StrProperty"},
            {"MaxNumLODs", 0x118, "IntProperty"},
            {"InputInfo", 0x120, "ObjectProperty"},
            {"VertexMap", 0x128, "ArrayProperty"},
            {"TrainingDataProcessorSettings", 0x138, "ObjectProperty"},
            {"SkeletalMesh", 0x140, "ObjectProperty"},
        }};
    };

    struct MLDeformerGeomCacheVizSettings
    {
        static constexpr std::string_view Name = "MLDeformerGeomCacheVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerVizSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MLDeformerGraphDebugDataInterface
    {
        static constexpr std::string_view Name = "MLDeformerGraphDebugDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MLDeformerGraphDebugDataProvider
    {
        static constexpr std::string_view Name = "MLDeformerGraphDebugDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformerComponent = 0x28;
            static constexpr std::uintptr_t DeformerAsset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeformerComponent", 0x28, "ObjectProperty"},
            {"DeformerAsset", 0x30, "ObjectProperty"},
        }};
    };

    struct MLDeformerInputInfo
    {
        static constexpr std::string_view Name = "MLDeformerInputInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x28;
            static constexpr std::uintptr_t BoneNames = 0x40;
            static constexpr std::uintptr_t CurveNames = 0x50;
            static constexpr std::uintptr_t NumBaseMeshVertices = 0x60;
            static constexpr std::uintptr_t NumTargetMeshVertices = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkeletalMesh", 0x28, "StructProperty"},
            {"BoneNames", 0x40, "ArrayProperty"},
            {"CurveNames", 0x50, "ArrayProperty"},
            {"NumBaseMeshVertices", 0x60, "IntProperty"},
            {"NumTargetMeshVertices", 0x64, "IntProperty"},
        }};
    };

    struct MLDeformerModel
    {
        static constexpr std::string_view Name = "MLDeformerModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumBaseMeshVerts = 0xF0;
            static constexpr std::uintptr_t NumTargetMeshVerts = 0xF4;
            static constexpr std::uintptr_t TrainingDevice = 0xF8;
            static constexpr std::uintptr_t MaxNumLODs = 0x118;
            static constexpr std::uintptr_t InputInfo = 0x120;
            static constexpr std::uintptr_t VertexMap = 0x128;
            static constexpr std::uintptr_t TrainingDataProcessorSettings = 0x138;
            static constexpr std::uintptr_t SkeletalMesh = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NumBaseMeshVerts", 0xF0, "IntProperty"},
            {"NumTargetMeshVerts", 0xF4, "IntProperty"},
            {"TrainingDevice", 0xF8, "StrProperty"},
            {"MaxNumLODs", 0x118, "IntProperty"},
            {"InputInfo", 0x120, "ObjectProperty"},
            {"VertexMap", 0x128, "ArrayProperty"},
            {"TrainingDataProcessorSettings", 0x138, "ObjectProperty"},
            {"SkeletalMesh", 0x140, "ObjectProperty"},
        }};
    };

    struct MLDeformerModelInstance
    {
        static constexpr std::string_view Name = "MLDeformerModelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Model = 0x30;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Model", 0x30, "ObjectProperty"},
            {"SkeletalMeshComponent", 0x38, "ObjectProperty"},
        }};
    };

    struct MLDeformerMorphModel
    {
        static constexpr std::string_view Name = "MLDeformerMorphModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerGeomCacheModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bClampMorphWeights = 0x158;
            static constexpr std::uintptr_t MorphTargetDeltas = 0x160;
            static constexpr std::uintptr_t NumMorphTargets = 0x170;
            static constexpr std::uintptr_t CompressedMorphDataSizeInBytes = 0x178;
            static constexpr std::uintptr_t UncompressedMorphDataSizeInBytes = 0x180;
            static constexpr std::uintptr_t MorphTargetErrorOrder = 0x188;
            static constexpr std::uintptr_t MorphTargetErrors = 0x198;
            static constexpr std::uintptr_t MaxMorphWeights = 0x1A8;
            static constexpr std::uintptr_t MorphTargetsMinMaxWeights = 0x1B8;
            static constexpr std::uintptr_t QualityLevels = 0x1C8;
            static constexpr std::uintptr_t bIncludeNormals = 0x1D8;
            static constexpr std::uintptr_t MorphDeltaZeroThreshold = 0x1DC;
            static constexpr std::uintptr_t MorphCompressionLevel = 0x1E0;
            static constexpr std::uintptr_t MaskChannel = 0x1E4;
            static constexpr std::uintptr_t bInvertMaskChannel = 0x1E5;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bClampMorphWeights", 0x158, "BoolProperty"},
            {"MorphTargetDeltas", 0x160, "ArrayProperty"},
            {"NumMorphTargets", 0x170, "IntProperty"},
            {"CompressedMorphDataSizeInBytes", 0x178, "UInt64Property"},
            {"UncompressedMorphDataSizeInBytes", 0x180, "UInt64Property"},
            {"MorphTargetErrorOrder", 0x188, "ArrayProperty"},
            {"MorphTargetErrors", 0x198, "ArrayProperty"},
            {"MaxMorphWeights", 0x1A8, "ArrayProperty"},
            {"MorphTargetsMinMaxWeights", 0x1B8, "ArrayProperty"},
            {"QualityLevels", 0x1C8, "ArrayProperty"},
            {"bIncludeNormals", 0x1D8, "BoolProperty"},
            {"MorphDeltaZeroThreshold", 0x1DC, "FloatProperty"},
            {"MorphCompressionLevel", 0x1E0, "FloatProperty"},
            {"MaskChannel", 0x1E4, "EnumProperty"},
            {"bInvertMaskChannel", 0x1E5, "BoolProperty"},
        }};
    };

    struct MLDeformerMorphModelInputInfo
    {
        static constexpr std::string_view Name = "MLDeformerMorphModelInputInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerInputInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x28;
            static constexpr std::uintptr_t BoneNames = 0x40;
            static constexpr std::uintptr_t CurveNames = 0x50;
            static constexpr std::uintptr_t NumBaseMeshVertices = 0x60;
            static constexpr std::uintptr_t NumTargetMeshVertices = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkeletalMesh", 0x28, "StructProperty"},
            {"BoneNames", 0x40, "ArrayProperty"},
            {"CurveNames", 0x50, "ArrayProperty"},
            {"NumBaseMeshVertices", 0x60, "IntProperty"},
            {"NumTargetMeshVertices", 0x64, "IntProperty"},
        }};
    };

    struct MLDeformerMorphModelInstance
    {
        static constexpr std::string_view Name = "MLDeformerMorphModelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerModelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Model = 0x30;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Model", 0x30, "ObjectProperty"},
            {"SkeletalMeshComponent", 0x38, "ObjectProperty"},
        }};
    };

    struct MLDeformerMorphModelVizSettings
    {
        static constexpr std::string_view Name = "MLDeformerMorphModelVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerGeomCacheVizSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MorphTargetDeltaThreshold = 0x28;
            static constexpr std::uintptr_t MorphTargetNumber = 0x2C;
            static constexpr std::uintptr_t bDrawMorphTargets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MorphTargetDeltaThreshold", 0x28, "FloatProperty"},
            {"MorphTargetNumber", 0x2C, "IntProperty"},
            {"bDrawMorphTargets", 0x30, "BoolProperty"},
        }};
    };

    struct MLDeformerTrainingDataProcessorSettings
    {
        static constexpr std::string_view Name = "MLDeformerTrainingDataProcessorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimList = 0x28;
            static constexpr std::uintptr_t BoneList = 0x38;
            static constexpr std::uintptr_t BoneGroups = 0x48;
            static constexpr std::uintptr_t NumOutputFrames = 0x58;
            static constexpr std::uintptr_t bReduceFrames = 0x5C;
            static constexpr std::uintptr_t bRemixPoses = 0x5D;
            static constexpr std::uintptr_t RandomSeed = 0x60;
            static constexpr std::uintptr_t OutputAnimSequence = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AnimList", 0x28, "ArrayProperty"},
            {"BoneList", 0x38, "StructProperty"},
            {"BoneGroups", 0x48, "StructProperty"},
            {"NumOutputFrames", 0x58, "IntProperty"},
            {"bReduceFrames", 0x5C, "BoolProperty"},
            {"bRemixPoses", 0x5D, "BoolProperty"},
            {"RandomSeed", 0x60, "IntProperty"},
            {"OutputAnimSequence", 0x68, "SoftObjectProperty"},
        }};
    };

    struct MLDeformerVizSettings
    {
        static constexpr std::string_view Name = "MLDeformerVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

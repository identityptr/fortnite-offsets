#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NearestNeighborModel
{
    struct NearestNeighborModel
    {
        static constexpr std::string_view Name = "NearestNeighborModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModel";
        struct Offsets
        {
            static constexpr std::uintptr_t InputDim = 0x1F8;
            static constexpr std::uintptr_t OutputDim = 0x1FC;
            static constexpr std::uintptr_t bUseInputMultipliers = 0x200;
            static constexpr std::uintptr_t InputMultipliers = 0x208;
            static constexpr std::uintptr_t InputsMin = 0x218;
            static constexpr std::uintptr_t InputsMax = 0x228;
            static constexpr std::uintptr_t bUsePCA = 0x238;
            static constexpr std::uintptr_t NumBasisPerSection = 0x23C;
            static constexpr std::uintptr_t bUseDualQuaternionDeltas = 0x240;
            static constexpr std::uintptr_t DecayFactor = 0x244;
            static constexpr std::uintptr_t NearestNeighborOffsetWeight = 0x248;
            static constexpr std::uintptr_t bUseRBF = 0x24C;
            static constexpr std::uintptr_t RBFSigma = 0x250;
            static constexpr std::uintptr_t Sections = 0x258;
            static constexpr std::uintptr_t PCACoeffStarts = 0x268;
            static constexpr std::uintptr_t bIsReadyForTraining = 0x278;
            static constexpr std::uintptr_t bIsReadyForInference = 0x279;
            static constexpr std::uintptr_t OptimizedNetwork = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"InputDim", 0x1F8, "IntProperty"},
            {"OutputDim", 0x1FC, "IntProperty"},
            {"bUseInputMultipliers", 0x200, "BoolProperty"},
            {"InputMultipliers", 0x208, "ArrayProperty"},
            {"InputsMin", 0x218, "ArrayProperty"},
            {"InputsMax", 0x228, "ArrayProperty"},
            {"bUsePCA", 0x238, "BoolProperty"},
            {"NumBasisPerSection", 0x23C, "IntProperty"},
            {"bUseDualQuaternionDeltas", 0x240, "BoolProperty"},
            {"DecayFactor", 0x244, "FloatProperty"},
            {"NearestNeighborOffsetWeight", 0x248, "FloatProperty"},
            {"bUseRBF", 0x24C, "BoolProperty"},
            {"RBFSigma", 0x250, "FloatProperty"},
            {"Sections", 0x258, "ArrayProperty"},
            {"PCACoeffStarts", 0x268, "ArrayProperty"},
            {"bIsReadyForTraining", 0x278, "BoolProperty"},
            {"bIsReadyForInference", 0x279, "BoolProperty"},
            {"OptimizedNetwork", 0x280, "ObjectProperty"},
        }};
    };

    struct NearestNeighborModelInputInfo
    {
        static constexpr std::string_view Name = "NearestNeighborModelInputInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelInputInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t RefBoneRotations = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RefBoneRotations", 0x68, "ArrayProperty"},
        }};
    };

    struct NearestNeighborModelInstance
    {
        static constexpr std::string_view Name = "NearestNeighborModelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OptimizedNetworkInstance = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OptimizedNetworkInstance", 0xB8, "ObjectProperty"},
        }};
    };

    struct NearestNeighborModelSection
    {
        static constexpr std::string_view Name = "NearestNeighborModelSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumPCACoeffs = 0x28;
            static constexpr std::uintptr_t NumVertices = 0x2C;
            static constexpr std::uintptr_t RuntimeNumNeighbors = 0x30;
            static constexpr std::uintptr_t RuntimeNeighborCoeffs = 0x38;
            static constexpr std::uintptr_t bIsReadyForTraining = 0x48;
            static constexpr std::uintptr_t bIsReadyForInference = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NumPCACoeffs", 0x28, "IntProperty"},
            {"NumVertices", 0x2C, "IntProperty"},
            {"RuntimeNumNeighbors", 0x30, "IntProperty"},
            {"RuntimeNeighborCoeffs", 0x38, "ArrayProperty"},
            {"bIsReadyForTraining", 0x48, "BoolProperty"},
            {"bIsReadyForInference", 0x49, "BoolProperty"},
        }};
    };

    struct NearestNeighborModelVizSettings
    {
        static constexpr std::string_view Name = "NearestNeighborModelVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelVizSettings";
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

    struct NearestNeighborNetworkLayer
    {
        static constexpr std::string_view Name = "NearestNeighborNetworkLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInputs = 0x28;
            static constexpr std::uintptr_t NumOutputs = 0x2C;
            static constexpr std::uintptr_t Parameters = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumInputs", 0x28, "IntProperty"},
            {"NumOutputs", 0x2C, "IntProperty"},
            {"Parameters", 0x30, "ArrayProperty"},
        }};
    };

    struct NearestNeighborNetworkLayer_Gemm
    {
        static constexpr std::string_view Name = "NearestNeighborNetworkLayer_Gemm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NearestNeighborNetworkLayer";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInputs = 0x28;
            static constexpr std::uintptr_t NumOutputs = 0x2C;
            static constexpr std::uintptr_t Parameters = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumInputs", 0x28, "IntProperty"},
            {"NumOutputs", 0x2C, "IntProperty"},
            {"Parameters", 0x30, "ArrayProperty"},
        }};
    };

    struct NearestNeighborNetworkLayer_Gemm_Prelu
    {
        static constexpr std::string_view Name = "NearestNeighborNetworkLayer_Gemm_Prelu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NearestNeighborNetworkLayer";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInputs = 0x28;
            static constexpr std::uintptr_t NumOutputs = 0x2C;
            static constexpr std::uintptr_t Parameters = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumInputs", 0x28, "IntProperty"},
            {"NumOutputs", 0x2C, "IntProperty"},
            {"Parameters", 0x30, "ArrayProperty"},
        }};
    };

    struct NearestNeighborOptimizedNetwork
    {
        static constexpr std::string_view Name = "NearestNeighborOptimizedNetwork";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ModelData = 0x28;
            static constexpr std::uintptr_t NumInputs = 0x40;
            static constexpr std::uintptr_t NumOutputs = 0x44;
            static constexpr std::uintptr_t Layers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModelData", 0x28, "ObjectProperty"},
            {"NumInputs", 0x40, "IntProperty"},
            {"NumOutputs", 0x44, "IntProperty"},
            {"Layers", 0x48, "ArrayProperty"},
        }};
    };

    struct NearestNeighborOptimizedNetworkInstance
    {
        static constexpr std::string_view Name = "NearestNeighborOptimizedNetworkInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Network = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Network", 0x58, "ObjectProperty"},
        }};
    };

    struct NearestNeighborOptimizedNetworkLoader
    {
        static constexpr std::string_view Name = "NearestNeighborOptimizedNetworkLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkeletonWithQuatsDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkeletonWithQuatsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkeletonWithQuatsDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkeletonWithQuatsDataProvider";
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

}

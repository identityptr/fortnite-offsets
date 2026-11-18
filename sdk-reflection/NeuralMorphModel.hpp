#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NeuralMorphModel
{
    struct NeuralMorphInputInfo
    {
        static constexpr std::string_view Name = "NeuralMorphInputInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelInputInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneGroups = 0x68;
            static constexpr std::uintptr_t CurveGroups = 0x78;
            static constexpr std::uintptr_t SkinningMode = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoneGroups", 0x68, "ArrayProperty"},
            {"CurveGroups", 0x78, "ArrayProperty"},
            {"SkinningMode", 0x88, "EnumProperty"},
        }};
    };

    struct NeuralMorphMLP
    {
        static constexpr std::string_view Name = "NeuralMorphMLP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Layers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Layers", 0x28, "ArrayProperty"},
        }};
    };

    struct NeuralMorphMLPLayer
    {
        static constexpr std::string_view Name = "NeuralMorphMLPLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInputs = 0x28;
            static constexpr std::uintptr_t NumOutputs = 0x2C;
            static constexpr std::uintptr_t Depth = 0x30;
            static constexpr std::uintptr_t Weights = 0x38;
            static constexpr std::uintptr_t Biases = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumInputs", 0x28, "IntProperty"},
            {"NumOutputs", 0x2C, "IntProperty"},
            {"Depth", 0x30, "IntProperty"},
            {"Weights", 0x38, "ArrayProperty"},
            {"Biases", 0x48, "ArrayProperty"},
        }};
    };

    struct NeuralMorphModel
    {
        static constexpr std::string_view Name = "NeuralMorphModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModel";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneGroups = 0x1F8;
            static constexpr std::uintptr_t CurveGroups = 0x208;
            static constexpr std::uintptr_t BoneMaskInfos = 0x218;
            static constexpr std::uintptr_t BoneGroupMaskInfos = 0x228;
            static constexpr std::uintptr_t BoneMaskInfoMap = 0x238;
            static constexpr std::uintptr_t BoneGroupMaskInfoMap = 0x248;
            static constexpr std::uintptr_t Mode = 0x258;
            static constexpr std::uintptr_t LocalNumMorphTargetsPerBone = 0x25C;
            static constexpr std::uintptr_t GlobalNumMorphTargets = 0x260;
            static constexpr std::uintptr_t NumIterations = 0x264;
            static constexpr std::uintptr_t LocalNumHiddenLayers = 0x268;
            static constexpr std::uintptr_t LocalNumNeuronsPerLayer = 0x26C;
            static constexpr std::uintptr_t GlobalNumHiddenLayers = 0x270;
            static constexpr std::uintptr_t GlobalNumNeuronsPerLayer = 0x274;
            static constexpr std::uintptr_t BatchSize = 0x278;
            static constexpr std::uintptr_t LearningRate = 0x27C;
            static constexpr std::uintptr_t RegularizationFactor = 0x280;
            static constexpr std::uintptr_t bEnableBoneMasks = 0x284;
            static constexpr std::uintptr_t SmoothLossBeta = 0x288;
            static constexpr std::uintptr_t SkinningMode = 0x28C;
            static constexpr std::uintptr_t NeuralMorphNetwork = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"BoneGroups", 0x1F8, "ArrayProperty"},
            {"CurveGroups", 0x208, "ArrayProperty"},
            {"BoneMaskInfos", 0x218, "MapProperty"},
            {"BoneGroupMaskInfos", 0x228, "MapProperty"},
            {"BoneMaskInfoMap", 0x238, "MapProperty"},
            {"BoneGroupMaskInfoMap", 0x248, "MapProperty"},
            {"Mode", 0x258, "EnumProperty"},
            {"LocalNumMorphTargetsPerBone", 0x25C, "IntProperty"},
            {"GlobalNumMorphTargets", 0x260, "IntProperty"},
            {"NumIterations", 0x264, "IntProperty"},
            {"LocalNumHiddenLayers", 0x268, "IntProperty"},
            {"LocalNumNeuronsPerLayer", 0x26C, "IntProperty"},
            {"GlobalNumHiddenLayers", 0x270, "IntProperty"},
            {"GlobalNumNeuronsPerLayer", 0x274, "IntProperty"},
            {"BatchSize", 0x278, "IntProperty"},
            {"LearningRate", 0x27C, "FloatProperty"},
            {"RegularizationFactor", 0x280, "FloatProperty"},
            {"bEnableBoneMasks", 0x284, "BoolProperty"},
            {"SmoothLossBeta", 0x288, "FloatProperty"},
            {"SkinningMode", 0x28C, "EnumProperty"},
            {"NeuralMorphNetwork", 0x290, "ObjectProperty"},
        }};
    };

    struct NeuralMorphModelInstance
    {
        static constexpr std::string_view Name = "NeuralMorphModelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkInstance = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetworkInstance", 0x90, "ObjectProperty"},
        }};
    };

    struct NeuralMorphModelVizSettings
    {
        static constexpr std::string_view Name = "NeuralMorphModelVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerMorphModelVizSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MaskVizMode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaskVizMode", 0x38, "EnumProperty"},
        }};
    };

    struct NeuralMorphNetwork
    {
        static constexpr std::string_view Name = "NeuralMorphNetwork";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MainMLP = 0x28;
            static constexpr std::uintptr_t GroupMLP = 0x30;
            static constexpr std::uintptr_t MainModelData = 0x38;
            static constexpr std::uintptr_t GroupModelData = 0x50;
            static constexpr std::uintptr_t InputMeans = 0x68;
            static constexpr std::uintptr_t InputStd = 0x78;
            static constexpr std::uintptr_t Mode = 0x88;
            static constexpr std::uintptr_t NumMorphs = 0x8C;
            static constexpr std::uintptr_t NumMorphsPerBone = 0x90;
            static constexpr std::uintptr_t NumBones = 0x94;
            static constexpr std::uintptr_t NumCurves = 0x98;
            static constexpr std::uintptr_t NumFloatsPerCurve = 0x9C;
            static constexpr std::uintptr_t NumGroups = 0xA0;
            static constexpr std::uintptr_t NumItemsPerGroup = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"MainMLP", 0x28, "ObjectProperty"},
            {"GroupMLP", 0x30, "ObjectProperty"},
            {"MainModelData", 0x38, "ObjectProperty"},
            {"GroupModelData", 0x50, "ObjectProperty"},
            {"InputMeans", 0x68, "ArrayProperty"},
            {"InputStd", 0x78, "ArrayProperty"},
            {"Mode", 0x88, "EnumProperty"},
            {"NumMorphs", 0x8C, "IntProperty"},
            {"NumMorphsPerBone", 0x90, "IntProperty"},
            {"NumBones", 0x94, "IntProperty"},
            {"NumCurves", 0x98, "IntProperty"},
            {"NumFloatsPerCurve", 0x9C, "IntProperty"},
            {"NumGroups", 0xA0, "IntProperty"},
            {"NumItemsPerGroup", 0xA4, "IntProperty"},
        }};
    };

    struct NeuralMorphNetworkInstance
    {
        static constexpr std::string_view Name = "NeuralMorphNetworkInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Network = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Network", 0x78, "ObjectProperty"},
        }};
    };

}

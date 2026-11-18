#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PBIK
{
    struct PBIKBoneSetting
    {
        static constexpr std::string_view Name = "PBIKBoneSetting";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t RotationStiffness = 0x4;
            static constexpr std::uintptr_t PositionStiffness = 0x8;
            static constexpr std::uintptr_t X = 0xC;
            static constexpr std::uintptr_t MinX = 0x10;
            static constexpr std::uintptr_t MaxX = 0x14;
            static constexpr std::uintptr_t Y = 0x18;
            static constexpr std::uintptr_t MinY = 0x1C;
            static constexpr std::uintptr_t MaxY = 0x20;
            static constexpr std::uintptr_t Z = 0x24;
            static constexpr std::uintptr_t MinZ = 0x28;
            static constexpr std::uintptr_t MaxZ = 0x2C;
            static constexpr std::uintptr_t bUsePreferredAngles = 0x30;
            static constexpr std::uintptr_t PreferredAngles = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"RotationStiffness", 0x4, "FloatProperty"},
            {"PositionStiffness", 0x8, "FloatProperty"},
            {"X", 0xC, "EnumProperty"},
            {"MinX", 0x10, "FloatProperty"},
            {"MaxX", 0x14, "FloatProperty"},
            {"Y", 0x18, "EnumProperty"},
            {"MinY", 0x1C, "FloatProperty"},
            {"MaxY", 0x20, "FloatProperty"},
            {"Z", 0x24, "EnumProperty"},
            {"MinZ", 0x28, "FloatProperty"},
            {"MaxZ", 0x2C, "FloatProperty"},
            {"bUsePreferredAngles", 0x30, "BoolProperty"},
            {"PreferredAngles", 0x38, "StructProperty"},
        }};
    };

    struct PBIKDebug
    {
        static constexpr std::string_view Name = "PBIKDebug";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DrawScale = 0x0;
            static constexpr std::uintptr_t bDrawDebug = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DrawScale", 0x0, "FloatProperty"},
            {"bDrawDebug", 0x4, "BoolProperty"},
        }};
    };

    struct PBIKEffector
    {
        static constexpr std::string_view Name = "PBIKEffector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t PositionAlpha = 0x70;
            static constexpr std::uintptr_t RotationAlpha = 0x74;
            static constexpr std::uintptr_t StrengthAlpha = 0x78;
            static constexpr std::uintptr_t ChainDepth = 0x7C;
            static constexpr std::uintptr_t PullChainAlpha = 0x80;
            static constexpr std::uintptr_t PinRotation = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"PositionAlpha", 0x70, "FloatProperty"},
            {"RotationAlpha", 0x74, "FloatProperty"},
            {"StrengthAlpha", 0x78, "FloatProperty"},
            {"ChainDepth", 0x7C, "IntProperty"},
            {"PullChainAlpha", 0x80, "FloatProperty"},
            {"PinRotation", 0x84, "FloatProperty"},
        }};
    };

    struct PBIKSolver
    {
        static constexpr std::string_view Name = "PBIKSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PBIKSolverSettings
    {
        static constexpr std::string_view Name = "PBIKSolverSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Iterations = 0x0;
            static constexpr std::uintptr_t SubIterations = 0x4;
            static constexpr std::uintptr_t MassMultiplier = 0x8;
            static constexpr std::uintptr_t bAllowStretch = 0xC;
            static constexpr std::uintptr_t RootBehavior = 0xD;
            static constexpr std::uintptr_t PrePullRootSettings = 0x10;
            static constexpr std::uintptr_t GlobalPullChainAlpha = 0x30;
            static constexpr std::uintptr_t MaxAngle = 0x34;
            static constexpr std::uintptr_t OverRelaxation = 0x38;
            static constexpr std::uintptr_t bStartSolveFromInputPose = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Iterations", 0x0, "IntProperty"},
            {"SubIterations", 0x4, "IntProperty"},
            {"MassMultiplier", 0x8, "FloatProperty"},
            {"bAllowStretch", 0xC, "BoolProperty"},
            {"RootBehavior", 0xD, "EnumProperty"},
            {"PrePullRootSettings", 0x10, "StructProperty"},
            {"GlobalPullChainAlpha", 0x30, "FloatProperty"},
            {"MaxAngle", 0x34, "FloatProperty"},
            {"OverRelaxation", 0x38, "FloatProperty"},
            {"bStartSolveFromInputPose", 0x3C, "BoolProperty"},
        }};
    };

    struct PBIKWorkData
    {
        static constexpr std::string_view Name = "PBIKWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bNeedsInit = 0x0;
            static constexpr std::uintptr_t HashInitializedWith = 0x4;
            static constexpr std::uintptr_t BoneSettingToSolverBoneIndex = 0x8;
            static constexpr std::uintptr_t SolverBoneToElementIndex = 0x18;
            static constexpr std::uintptr_t Solver = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bNeedsInit", 0x0, "BoolProperty"},
            {"HashInitializedWith", 0x4, "UInt32Property"},
            {"BoneSettingToSolverBoneIndex", 0x8, "ArrayProperty"},
            {"SolverBoneToElementIndex", 0x18, "ArrayProperty"},
            {"Solver", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_PBIK
    {
        static constexpr std::string_view Name = "RigUnit_PBIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x10;
            static constexpr std::uintptr_t Effectors = 0x18;
            static constexpr std::uintptr_t EffectorSolverIndices = 0x28;
            static constexpr std::uintptr_t BoneSettings = 0x38;
            static constexpr std::uintptr_t ExcludedBones = 0x48;
            static constexpr std::uintptr_t Settings = 0x58;
            static constexpr std::uintptr_t Debug = 0x98;
            static constexpr std::uintptr_t WorkData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Root", 0x10, "NameProperty"},
            {"Effectors", 0x18, "ArrayProperty"},
            {"EffectorSolverIndices", 0x28, "ArrayProperty"},
            {"BoneSettings", 0x38, "ArrayProperty"},
            {"ExcludedBones", 0x48, "ArrayProperty"},
            {"Settings", 0x58, "StructProperty"},
            {"Debug", 0x98, "StructProperty"},
            {"WorkData", 0xA0, "StructProperty"},
        }};
    };

    struct RootPrePullSettings
    {
        static constexpr std::string_view Name = "RootPrePullSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationAlpha = 0x0;
            static constexpr std::uintptr_t RotationAlphaX = 0x4;
            static constexpr std::uintptr_t RotationAlphaY = 0x8;
            static constexpr std::uintptr_t RotationAlphaZ = 0xC;
            static constexpr std::uintptr_t PositionAlpha = 0x10;
            static constexpr std::uintptr_t PositionAlphaX = 0x14;
            static constexpr std::uintptr_t PositionAlphaY = 0x18;
            static constexpr std::uintptr_t PositionAlphaZ = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RotationAlpha", 0x0, "FloatProperty"},
            {"RotationAlphaX", 0x4, "FloatProperty"},
            {"RotationAlphaY", 0x8, "FloatProperty"},
            {"RotationAlphaZ", 0xC, "FloatProperty"},
            {"PositionAlpha", 0x10, "FloatProperty"},
            {"PositionAlphaX", 0x14, "FloatProperty"},
            {"PositionAlphaY", 0x18, "FloatProperty"},
            {"PositionAlphaZ", 0x1C, "FloatProperty"},
        }};
    };

}

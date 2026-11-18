#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BlendStack
{
    struct AnimNode_BlendStack
    {
        static constexpr std::string_view Name = "AnimNode_BlendStack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendStack_Standalone";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationAsset = 0xD0;
            static constexpr std::uintptr_t AnimationTime = 0xD8;
            static constexpr std::uintptr_t ActivationDelayTime = 0xDC;
            static constexpr std::uintptr_t bLoop = 0xE0;
            static constexpr std::uintptr_t bMirrored = 0xE1;
            static constexpr std::uintptr_t WantedPlayRate = 0xE4;
            static constexpr std::uintptr_t BlendTime = 0xE8;
            static constexpr std::uintptr_t MaxAnimationDeltaTime = 0xEC;
            static constexpr std::uintptr_t BlendProfile = 0xF0;
            static constexpr std::uintptr_t BlendOption = 0xF8;
            static constexpr std::uintptr_t BlendspaceUpdateMode = 0xF9;
            static constexpr std::uintptr_t BlendParameters = 0x100;
            static constexpr std::uintptr_t MirrorDataTable = 0x118;
            static constexpr std::uintptr_t BlendParametersDeltaThreshold = 0x120;
            static constexpr std::uintptr_t bForceBlendTo = 0x124;
            static constexpr std::uintptr_t bUseInertialBlend = 0x125;
            static constexpr std::uintptr_t InertialBlendNodeTag = 0x128;
            static constexpr std::uintptr_t bResetOnBecomingRelevant = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"AnimationAsset", 0xD0, "ObjectProperty"},
            {"AnimationTime", 0xD8, "FloatProperty"},
            {"ActivationDelayTime", 0xDC, "FloatProperty"},
            {"bLoop", 0xE0, "BoolProperty"},
            {"bMirrored", 0xE1, "BoolProperty"},
            {"WantedPlayRate", 0xE4, "FloatProperty"},
            {"BlendTime", 0xE8, "FloatProperty"},
            {"MaxAnimationDeltaTime", 0xEC, "FloatProperty"},
            {"BlendProfile", 0xF0, "ObjectProperty"},
            {"BlendOption", 0xF8, "EnumProperty"},
            {"BlendspaceUpdateMode", 0xF9, "EnumProperty"},
            {"BlendParameters", 0x100, "StructProperty"},
            {"MirrorDataTable", 0x118, "ObjectProperty"},
            {"BlendParametersDeltaThreshold", 0x120, "FloatProperty"},
            {"bForceBlendTo", 0x124, "BoolProperty"},
            {"bUseInertialBlend", 0x125, "BoolProperty"},
            {"InertialBlendNodeTag", 0x128, "NameProperty"},
            {"bResetOnBecomingRelevant", 0x12C, "BoolProperty"},
        }};
    };

    struct AnimNode_BlendStackInput
    {
        static constexpr std::string_view Name = "AnimNode_BlendStackInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleIndex = 0x10;
            static constexpr std::uintptr_t BlendStackAllocationIndex = 0x14;
            static constexpr std::uintptr_t bOverridePlayRate = 0x18;
            static constexpr std::uintptr_t PlayRate = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SampleIndex", 0x10, "IntProperty"},
            {"BlendStackAllocationIndex", 0x14, "IntProperty"},
            {"bOverridePlayRate", 0x18, "BoolProperty"},
            {"PlayRate", 0x1C, "FloatProperty"},
        }};
    };

    struct AnimNode_BlendStack_Standalone
    {
        static constexpr std::string_view Name = "AnimNode_BlendStack_Standalone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_AssetPlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PerSampleGraphPoseLinks = 0x50;
            static constexpr std::uintptr_t AnimPlayers = 0x68;
            static constexpr std::uintptr_t bShouldFilterNotifies = 0x78;
            static constexpr std::uintptr_t StitchDatabase = 0x80;
            static constexpr std::uintptr_t StitchBlendTime = 0x88;
            static constexpr std::uintptr_t StitchBlendMaxCost = 0x8C;
            static constexpr std::uintptr_t MaxActiveBlends = 0x90;
            static constexpr std::uintptr_t bStoreBlendedPose = 0x94;
            static constexpr std::uintptr_t NotifyRecencyTimeOut = 0xB8;
            static constexpr std::uintptr_t MaxBlendInTimeToOverrideAnimation = 0xBC;
            static constexpr std::uintptr_t PlayerDepthBlendInTimeMultiplier = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PerSampleGraphPoseLinks", 0x50, "ArrayProperty"},
            {"AnimPlayers", 0x68, "ArrayProperty"},
            {"bShouldFilterNotifies", 0x78, "BoolProperty"},
            {"StitchDatabase", 0x80, "ObjectProperty"},
            {"StitchBlendTime", 0x88, "FloatProperty"},
            {"StitchBlendMaxCost", 0x8C, "FloatProperty"},
            {"MaxActiveBlends", 0x90, "IntProperty"},
            {"bStoreBlendedPose", 0x94, "BoolProperty"},
            {"NotifyRecencyTimeOut", 0xB8, "FloatProperty"},
            {"MaxBlendInTimeToOverrideAnimation", 0xBC, "FloatProperty"},
            {"PlayerDepthBlendInTimeMultiplier", 0xC0, "FloatProperty"},
        }};
    };

    struct BlendStackAnimNodeLibrary
    {
        static constexpr std::string_view Name = "BlendStackAnimNodeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "BlendTo",
            "BlendToWithSettings",
            "ConvertToBlendStackNode",
            "ConvertToBlendStackNodePure",
            "ForceBlendNextUpdate",
            "GetCurrentAsset",
            "GetCurrentAssetTime",
            "GetCurrentAssetTimeRemaining",
            "GetCurrentBlendStackAnimAsset",
            "GetCurrentBlendStackAnimAssetMirrorTable",
            "GetCurrentBlendStackAnimAssetMirrored",
            "GetCurrentBlendStackAnimAssetTime",
            "GetCurrentBlendStackAnimIsActive",
            "IsCurrentAssetLooping",
        }};
    };

    struct BlendStackAnimNodeReference
    {
        static constexpr std::string_view Name = "BlendStackAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlendStackAnimPlayer
    {
        static constexpr std::string_view Name = "BlendStackAnimPlayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SequencePlayerNode = 0x20;
            static constexpr std::uintptr_t BlendSpacePlayerNode = 0xB8;
            static constexpr std::uintptr_t MirrorNode = 0x150;
            static constexpr std::uintptr_t BlendProfile = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SequencePlayerNode", 0x20, "StructProperty"},
            {"BlendSpacePlayerNode", 0xB8, "StructProperty"},
            {"MirrorNode", 0x150, "StructProperty"},
            {"BlendProfile", 0x380, "ObjectProperty"},
        }};
    };

    struct BlendStackInputAnimNodeLibrary
    {
        static constexpr std::string_view Name = "BlendStackInputAnimNodeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ConvertToBlendStackInputNode",
            "ConvertToBlendStackInputNodePure",
            "GetProperties",
        }};
    };

    struct BlendStackInputAnimNodeReference
    {
        static constexpr std::string_view Name = "BlendStackInputAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

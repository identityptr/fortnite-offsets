#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SideloadedAnimationRuntime
{
    struct AnimSequenceSideloaded
    {
        static constexpr std::string_view Name = "AnimSequenceSideloaded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneCompressionSettings = 0xB0;
            static constexpr std::uintptr_t CurveCompressionSettings = 0xB8;
            static constexpr std::uintptr_t VariableFrameStrippingSettings = 0x130;
            static constexpr std::uintptr_t AdditiveAnimType = 0x138;
            static constexpr std::uintptr_t RefPoseType = 0x139;
            static constexpr std::uintptr_t RefFrameIndex = 0x13C;
            static constexpr std::uintptr_t RefPoseSeq = 0x140;
            static constexpr std::uintptr_t RetargetSource = 0x148;
            static constexpr std::uintptr_t RetargetSourceAssetReferencePose = 0x150;
            static constexpr std::uintptr_t Interpolation = 0x160;
            static constexpr std::uintptr_t bEnableRootMotion = 0x161;
            static constexpr std::uintptr_t RootMotionRootLock = 0x162;
            static constexpr std::uintptr_t bForceRootLock = 0x163;
            static constexpr std::uintptr_t bUseNormalizedRootMotionScale = 0x164;
            static constexpr std::uintptr_t bRootMotionSettingsCopiedFromMontage = 0x165;
            static constexpr std::uintptr_t StripAnimDataOnDedicatedServer = 0x166;
            static constexpr std::uintptr_t AuthoredSyncMarkers = 0x168;
            static constexpr std::uintptr_t PlatformTargetFrameRate = 0x188;
            static constexpr std::uintptr_t AttributeCurves = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"BoneCompressionSettings", 0xB0, "ObjectProperty"},
            {"CurveCompressionSettings", 0xB8, "ObjectProperty"},
            {"VariableFrameStrippingSettings", 0x130, "ObjectProperty"},
            {"AdditiveAnimType", 0x138, "ByteProperty"},
            {"RefPoseType", 0x139, "ByteProperty"},
            {"RefFrameIndex", 0x13C, "IntProperty"},
            {"RefPoseSeq", 0x140, "ObjectProperty"},
            {"RetargetSource", 0x148, "NameProperty"},
            {"RetargetSourceAssetReferencePose", 0x150, "ArrayProperty"},
            {"Interpolation", 0x160, "EnumProperty"},
            {"bEnableRootMotion", 0x161, "BoolProperty"},
            {"RootMotionRootLock", 0x162, "ByteProperty"},
            {"bForceRootLock", 0x163, "BoolProperty"},
            {"bUseNormalizedRootMotionScale", 0x164, "BoolProperty"},
            {"bRootMotionSettingsCopiedFromMontage", 0x165, "BoolProperty"},
            {"StripAnimDataOnDedicatedServer", 0x166, "EnumProperty"},
            {"AuthoredSyncMarkers", 0x168, "ArrayProperty"},
            {"PlatformTargetFrameRate", 0x188, "StructProperty"},
            {"AttributeCurves", 0x1A0, "MapProperty"},
        }};
    };

}

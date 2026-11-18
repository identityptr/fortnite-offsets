#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EvaluationNotifiesRuntime
{
    struct NotifyState_AlignToGround
    {
        static constexpr std::string_view Name = "NotifyState_AlignToGround";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NotifyState_AlignmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceRadius = 0x100;
            static constexpr std::uintptr_t TraceStartOffset = 0x104;
            static constexpr std::uintptr_t TraceEndOffset = 0x108;
            static constexpr std::uintptr_t GroundHeightOffset = 0x10C;
            static constexpr std::uintptr_t TraceChannel = 0x110;
            static constexpr std::uintptr_t PlaybackRateOutputVariableReference = 0x118;
            static constexpr std::uintptr_t MinPlaybackRateModifier = 0x148;
            static constexpr std::uintptr_t MaxPlaybackRateModifier = 0x14C;
            static constexpr std::uintptr_t bForceStartTransformUpright = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TraceRadius", 0x100, "FloatProperty"},
            {"TraceStartOffset", 0x104, "FloatProperty"},
            {"TraceEndOffset", 0x108, "FloatProperty"},
            {"GroundHeightOffset", 0x10C, "FloatProperty"},
            {"TraceChannel", 0x110, "ByteProperty"},
            {"PlaybackRateOutputVariableReference", 0x118, "StructProperty"},
            {"MinPlaybackRateModifier", 0x148, "FloatProperty"},
            {"MaxPlaybackRateModifier", 0x14C, "FloatProperty"},
            {"bForceStartTransformUpright", 0x150, "BoolProperty"},
        }};
    };

    struct NotifyState_Alignment
    {
        static constexpr std::string_view Name = "NotifyState_Alignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NotifyState_AlignmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransformName", 0x100, "NameProperty"},
        }};
    };

    struct NotifyState_AlignmentBase
    {
        static constexpr std::string_view Name = "NotifyState_AlignmentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationWarpingCurve = 0x30;
            static constexpr std::uintptr_t bSeparateTranslationCurves = 0x3C;
            static constexpr std::uintptr_t TranslationWarpingCurve_InMovementDirection = 0x40;
            static constexpr std::uintptr_t TranslationWarpingCurve_OutOfMovementDirection = 0x4C;
            static constexpr std::uintptr_t RotationWarpingCurve = 0x58;
            static constexpr std::uintptr_t AlignOffset = 0x70;
            static constexpr std::uintptr_t bForceTargetTransformUpright = 0xD0;
            static constexpr std::uintptr_t AlignBone = 0xD4;
            static constexpr std::uintptr_t UpdateMode = 0xE0;
            static constexpr std::uintptr_t Disable = 0xE4;
            static constexpr std::uintptr_t bEnableSteering = 0xE8;
            static constexpr std::uintptr_t SteeringSettings = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"TranslationWarpingCurve", 0x30, "StructProperty"},
            {"bSeparateTranslationCurves", 0x3C, "BoolProperty"},
            {"TranslationWarpingCurve_InMovementDirection", 0x40, "StructProperty"},
            {"TranslationWarpingCurve_OutOfMovementDirection", 0x4C, "StructProperty"},
            {"RotationWarpingCurve", 0x58, "StructProperty"},
            {"AlignOffset", 0x70, "StructProperty"},
            {"bForceTargetTransformUpright", 0xD0, "BoolProperty"},
            {"AlignBone", 0xD4, "StructProperty"},
            {"UpdateMode", 0xE0, "EnumProperty"},
            {"Disable", 0xE4, "NameProperty"},
            {"bEnableSteering", 0xE8, "BoolProperty"},
            {"SteeringSettings", 0xEC, "StructProperty"},
        }};
    };

    struct NotifyState_TwoBoneIK
    {
        static constexpr std::string_view Name = "NotifyState_TwoBoneIK";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t IKBone = 0x30;
            static constexpr std::uintptr_t RelativeToBone = 0x3C;
            static constexpr std::uintptr_t StartStretchRatio = 0x48;
            static constexpr std::uintptr_t MaxStretchScale = 0x50;
            static constexpr std::uintptr_t BlendInTime = 0x58;
            static constexpr std::uintptr_t BlendOutTime = 0x5C;
            static constexpr std::uintptr_t EffectorLocation = 0x60;
            static constexpr std::uintptr_t EffectorLocationTransformName = 0x78;
            static constexpr std::uintptr_t EffectorTarget = 0x80;
            static constexpr std::uintptr_t JointTargetLocation = 0x100;
            static constexpr std::uintptr_t JointTarget = 0x120;
            static constexpr std::uintptr_t TwistAxis = 0x1A0;
            static constexpr std::uintptr_t EffectorLocationSpace = 0x1C0;
            static constexpr std::uintptr_t JointTargetLocationSpace = 0x1C1;
            static constexpr std::uintptr_t bAllowStretching = 0x1C2;
            static constexpr std::uintptr_t bAllowTwist = 0x1C2;
            static constexpr std::uintptr_t bMaintainEffectorRelRot = 0x1C2;
            static constexpr std::uintptr_t bTakeRotationFromEffectorSpace = 0x1C2;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"IKBone", 0x30, "StructProperty"},
            {"RelativeToBone", 0x3C, "StructProperty"},
            {"StartStretchRatio", 0x48, "DoubleProperty"},
            {"MaxStretchScale", 0x50, "DoubleProperty"},
            {"BlendInTime", 0x58, "FloatProperty"},
            {"BlendOutTime", 0x5C, "FloatProperty"},
            {"EffectorLocation", 0x60, "StructProperty"},
            {"EffectorLocationTransformName", 0x78, "NameProperty"},
            {"EffectorTarget", 0x80, "StructProperty"},
            {"JointTargetLocation", 0x100, "StructProperty"},
            {"JointTarget", 0x120, "StructProperty"},
            {"TwistAxis", 0x1A0, "StructProperty"},
            {"EffectorLocationSpace", 0x1C0, "ByteProperty"},
            {"JointTargetLocationSpace", 0x1C1, "ByteProperty"},
            {"bAllowStretching", 0x1C2, "BoolProperty"},
            {"bAllowTwist", 0x1C2, "BoolProperty"},
            {"bMaintainEffectorRelRot", 0x1C2, "BoolProperty"},
            {"bTakeRotationFromEffectorSpace", 0x1C2, "BoolProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GrappleParentRuntime
{
    struct FortCameraModifier_Swinging
    {
        static constexpr std::string_view Name = "FortCameraModifier_Swinging";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxVelocityDeltaPerSecond = 0x48;
            static constexpr std::uintptr_t BlendInCurve = 0x50;
            static constexpr std::uintptr_t BlendOutCurve = 0x58;
            static constexpr std::uintptr_t ForwardOffsetData = 0x60;
            static constexpr std::uintptr_t TotalForwardOffsetBounds = 0xC0;
            static constexpr std::uintptr_t RightOffsetData = 0xD0;
            static constexpr std::uintptr_t RightForwardOffsetMultiplierBounds = 0x130;
            static constexpr std::uintptr_t UpOffsetData = 0x140;
            static constexpr std::uintptr_t UpPositiveForwardOffsetMultiplierBounds = 0x1A0;
            static constexpr std::uintptr_t UpNegativeForwardOffsetMultiplierBounds = 0x1B0;
            static constexpr std::uintptr_t FOVInterpSpeed = 0x1C0;
            static constexpr std::uintptr_t FOVBounds = 0x1C8;
            static constexpr std::uintptr_t BoostCurve = 0x1D8;
            static constexpr std::uintptr_t BoostModifier = 0x1E0;
            static constexpr std::uintptr_t AttachBoostDuration = 0x208;
            static constexpr std::uintptr_t AttachBoostMagnitude = 0x20C;
            static constexpr std::uintptr_t DetachBoostDuration = 0x210;
            static constexpr std::uintptr_t DetachBoostMagnitude = 0x214;
            static constexpr std::uintptr_t SlidingHeightCurve = 0x218;
            static constexpr std::uintptr_t SlidingGameplayTag = 0x220;
            static constexpr std::uintptr_t SlideHeightTransitionDuration = 0x224;
            static constexpr std::uintptr_t MaxSlidingSpeedMultiplierOffset = 0x228;
            static constexpr std::uintptr_t CachedPlayer = 0x230;
            static constexpr std::uintptr_t CachedWeapon = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"MaxVelocityDeltaPerSecond", 0x48, "FloatProperty"},
            {"BlendInCurve", 0x50, "ObjectProperty"},
            {"BlendOutCurve", 0x58, "ObjectProperty"},
            {"ForwardOffsetData", 0x60, "StructProperty"},
            {"TotalForwardOffsetBounds", 0xC0, "StructProperty"},
            {"RightOffsetData", 0xD0, "StructProperty"},
            {"RightForwardOffsetMultiplierBounds", 0x130, "StructProperty"},
            {"UpOffsetData", 0x140, "StructProperty"},
            {"UpPositiveForwardOffsetMultiplierBounds", 0x1A0, "StructProperty"},
            {"UpNegativeForwardOffsetMultiplierBounds", 0x1B0, "StructProperty"},
            {"FOVInterpSpeed", 0x1C0, "FloatProperty"},
            {"FOVBounds", 0x1C8, "StructProperty"},
            {"BoostCurve", 0x1D8, "ObjectProperty"},
            {"BoostModifier", 0x1E0, "StructProperty"},
            {"AttachBoostDuration", 0x208, "FloatProperty"},
            {"AttachBoostMagnitude", 0x20C, "FloatProperty"},
            {"DetachBoostDuration", 0x210, "FloatProperty"},
            {"DetachBoostMagnitude", 0x214, "FloatProperty"},
            {"SlidingHeightCurve", 0x218, "ObjectProperty"},
            {"SlidingGameplayTag", 0x220, "StructProperty"},
            {"SlideHeightTransitionDuration", 0x224, "FloatProperty"},
            {"MaxSlidingSpeedMultiplierOffset", 0x228, "FloatProperty"},
            {"CachedPlayer", 0x230, "ObjectProperty"},
            {"CachedWeapon", 0x238, "ObjectProperty"},
        }};
    };

    struct FortSwingingLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortSwingingLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MainAnimBP = 0x350;
            static constexpr std::uintptr_t player = 0x358;
            static constexpr std::uintptr_t IsGroundSwing = 0x360;
            static constexpr std::uintptr_t IsFemale = 0x361;
            static constexpr std::uintptr_t PlayerDistanceToGround = 0x364;
            static constexpr std::uintptr_t CalculateRotation = 0x368;
            static constexpr std::uintptr_t ForwardInfluenceOnRotation = 0x370;
            static constexpr std::uintptr_t TimeForMaxRotationSpeed = 0x398;
            static constexpr std::uintptr_t MaxRotationSpeed = 0x3C0;
            static constexpr std::uintptr_t RotationSpeedWhileNotAttached = 0x3E8;
            static constexpr std::uintptr_t RotationSpeedWhileNotRotated = 0x410;
            static constexpr std::uintptr_t GetAttachedActor = 0x438;
            static constexpr std::uintptr_t isFreeFalling = 0x440;
            static constexpr std::uintptr_t IsAttached = 0x441;
            static constexpr std::uintptr_t IsNotAttachedToCliff = 0x442;
            static constexpr std::uintptr_t Velocity = 0x448;
            static constexpr std::uintptr_t XYVelocity = 0x460;
            static constexpr std::uintptr_t VecFromPlayerToAttachPoint = 0x478;
            static constexpr std::uintptr_t PitchAngleFromAttachPoint = 0x490;
            static constexpr std::uintptr_t RollAngle = 0x494;
            static constexpr std::uintptr_t YawAngleToAttachTarget = 0x498;
            static constexpr std::uintptr_t CurveName_SwingPhase = 0x49C;
            static constexpr std::uintptr_t CurveName_BlendOut = 0x4A0;
            static constexpr std::uintptr_t SwingPhase = 0x4A4;
            static constexpr std::uintptr_t CurrentRootRotation = 0x4A8;
            static constexpr std::uintptr_t CurrentRootTranslation = 0x4C0;
            static constexpr std::uintptr_t IsSwingRelease1 = 0x4D8;
            static constexpr std::uintptr_t IsSwingRelease2 = 0x4D9;
            static constexpr std::uintptr_t IsSwingRelease3 = 0x4DA;
            static constexpr std::uintptr_t IsSwingRelease4 = 0x4DB;
            static constexpr std::uintptr_t IsSwingRelease5 = 0x4DC;
            static constexpr std::uintptr_t IsSwingReleaseSkid = 0x4DD;
            static constexpr std::uintptr_t IsMovingAttachPoint = 0x4DE;
            static constexpr std::uintptr_t IsBlendOut = 0x4DF;
            static constexpr std::uintptr_t WebCastAttachDirection = 0x4E0;
            static constexpr std::uintptr_t IsWebCastDown = 0x4E4;
            static constexpr std::uintptr_t IsSwingOneHand = 0x4E5;
            static constexpr std::uintptr_t IsRandomHandBool = 0x4E6;
            static constexpr std::uintptr_t IsRandomSwingReleaseBool = 0x4E7;
            static constexpr std::uintptr_t IsRandomeReleaseBool = 0x4E8;
            static constexpr std::uintptr_t IsWithin100UnitsOfGround = 0x4E9;
            static constexpr std::uintptr_t IsHanging = 0x4EA;
            static constexpr std::uintptr_t IsFallRelease = 0x4EB;
            static constexpr std::uintptr_t IsOnGroundWebCast = 0x4EC;
            static constexpr std::uintptr_t IsSwingNearGroundToSkid = 0x4ED;
            static constexpr std::uintptr_t IsHangToSwingInAir = 0x4EE;
            static constexpr std::uintptr_t IsHangToSwingNearGround = 0x4EF;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"MainAnimBP", 0x350, "ObjectProperty"},
            {"player", 0x358, "ObjectProperty"},
            {"IsGroundSwing", 0x360, "BoolProperty"},
            {"IsFemale", 0x361, "BoolProperty"},
            {"PlayerDistanceToGround", 0x364, "FloatProperty"},
            {"CalculateRotation", 0x368, "BoolProperty"},
            {"ForwardInfluenceOnRotation", 0x370, "StructProperty"},
            {"TimeForMaxRotationSpeed", 0x398, "StructProperty"},
            {"MaxRotationSpeed", 0x3C0, "StructProperty"},
            {"RotationSpeedWhileNotAttached", 0x3E8, "StructProperty"},
            {"RotationSpeedWhileNotRotated", 0x410, "StructProperty"},
            {"GetAttachedActor", 0x438, "ObjectProperty"},
            {"isFreeFalling", 0x440, "BoolProperty"},
            {"IsAttached", 0x441, "BoolProperty"},
            {"IsNotAttachedToCliff", 0x442, "BoolProperty"},
            {"Velocity", 0x448, "StructProperty"},
            {"XYVelocity", 0x460, "StructProperty"},
            {"VecFromPlayerToAttachPoint", 0x478, "StructProperty"},
            {"PitchAngleFromAttachPoint", 0x490, "FloatProperty"},
            {"RollAngle", 0x494, "FloatProperty"},
            {"YawAngleToAttachTarget", 0x498, "FloatProperty"},
            {"CurveName_SwingPhase", 0x49C, "NameProperty"},
            {"CurveName_BlendOut", 0x4A0, "NameProperty"},
            {"SwingPhase", 0x4A4, "FloatProperty"},
            {"CurrentRootRotation", 0x4A8, "StructProperty"},
            {"CurrentRootTranslation", 0x4C0, "StructProperty"},
            {"IsSwingRelease1", 0x4D8, "BoolProperty"},
            {"IsSwingRelease2", 0x4D9, "BoolProperty"},
            {"IsSwingRelease3", 0x4DA, "BoolProperty"},
            {"IsSwingRelease4", 0x4DB, "BoolProperty"},
            {"IsSwingRelease5", 0x4DC, "BoolProperty"},
            {"IsSwingReleaseSkid", 0x4DD, "BoolProperty"},
            {"IsMovingAttachPoint", 0x4DE, "BoolProperty"},
            {"IsBlendOut", 0x4DF, "BoolProperty"},
            {"WebCastAttachDirection", 0x4E0, "FloatProperty"},
            {"IsWebCastDown", 0x4E4, "BoolProperty"},
            {"IsSwingOneHand", 0x4E5, "BoolProperty"},
            {"IsRandomHandBool", 0x4E6, "BoolProperty"},
            {"IsRandomSwingReleaseBool", 0x4E7, "BoolProperty"},
            {"IsRandomeReleaseBool", 0x4E8, "BoolProperty"},
            {"IsWithin100UnitsOfGround", 0x4E9, "BoolProperty"},
            {"IsHanging", 0x4EA, "BoolProperty"},
            {"IsFallRelease", 0x4EB, "BoolProperty"},
            {"IsOnGroundWebCast", 0x4EC, "BoolProperty"},
            {"IsSwingNearGroundToSkid", 0x4ED, "BoolProperty"},
            {"IsHangToSwingInAir", 0x4EE, "BoolProperty"},
            {"IsHangToSwingNearGround", 0x4EF, "BoolProperty"},
        }};
    };

}

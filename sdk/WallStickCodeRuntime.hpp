#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WallStickCodeRuntime
{
    struct FortMovementMode_ExtLogicWallStick
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicWallStick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t WallRunUpAnimMontage = 0x1C0;
            static constexpr std::uintptr_t WallDropAnimMontage = 0x1C8;
            static constexpr std::uintptr_t PreventHolsterTag = 0x1D0;
            static constexpr std::uintptr_t JumpDirectionTolerance = 0x1D8;
            static constexpr std::uintptr_t WallStickTime = 0x200;
            static constexpr std::uintptr_t FrictionCurve = 0x228;
            static constexpr std::uintptr_t MinVertFriction = 0x230;
            static constexpr std::uintptr_t MaxVertFriction = 0x258;
            static constexpr std::uintptr_t MinVerticalClearanceForUpwardJump = 0x280;
            static constexpr std::uintptr_t MinForwardCastDistanceBeforeDrop = 0x2A8;
            static constexpr std::uintptr_t PushFromWallBackwardForce = 0x2D0;
            static constexpr std::uintptr_t PushFromWallStateTime = 0x2F8;
            static constexpr std::uintptr_t WallJumpLogicClass = 0x320;
            static constexpr std::uintptr_t ClamberTargetingTag = 0x328;
            static constexpr std::uintptr_t ClamberMovementTag = 0x330;
            static constexpr std::uintptr_t AvoidanceDistance = 0x350;
            static constexpr std::uintptr_t AvoidanceDistanceForward = 0x378;
            static constexpr std::uintptr_t AvoidanceHeight = 0x3A0;
            static constexpr std::uintptr_t RunUpFallOffCurve = 0x3C8;
            static constexpr std::uintptr_t RunUpStartZVelocity = 0x3D0;
            static constexpr std::uintptr_t InCollisionMaxTime = 0x3F8;
            static constexpr std::uintptr_t WallUpAdjustmentClampSpeed = 0x420;
            static constexpr std::uintptr_t FallRotationCurve = 0x448;
            static constexpr std::uintptr_t AllowDetachWithJump = 0x450;
            static constexpr std::uintptr_t MaxWallAngleForAdjustment = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"WallRunUpAnimMontage", 0x1C0, "ObjectProperty"},
            {"WallDropAnimMontage", 0x1C8, "ObjectProperty"},
            {"PreventHolsterTag", 0x1D0, "StructProperty"},
            {"JumpDirectionTolerance", 0x1D8, "StructProperty"},
            {"WallStickTime", 0x200, "StructProperty"},
            {"FrictionCurve", 0x228, "ObjectProperty"},
            {"MinVertFriction", 0x230, "StructProperty"},
            {"MaxVertFriction", 0x258, "StructProperty"},
            {"MinVerticalClearanceForUpwardJump", 0x280, "StructProperty"},
            {"MinForwardCastDistanceBeforeDrop", 0x2A8, "StructProperty"},
            {"PushFromWallBackwardForce", 0x2D0, "StructProperty"},
            {"PushFromWallStateTime", 0x2F8, "StructProperty"},
            {"WallJumpLogicClass", 0x320, "ClassProperty"},
            {"ClamberTargetingTag", 0x328, "StructProperty"},
            {"ClamberMovementTag", 0x330, "StructProperty"},
            {"AvoidanceDistance", 0x350, "StructProperty"},
            {"AvoidanceDistanceForward", 0x378, "StructProperty"},
            {"AvoidanceHeight", 0x3A0, "StructProperty"},
            {"RunUpFallOffCurve", 0x3C8, "ObjectProperty"},
            {"RunUpStartZVelocity", 0x3D0, "StructProperty"},
            {"InCollisionMaxTime", 0x3F8, "StructProperty"},
            {"WallUpAdjustmentClampSpeed", 0x420, "StructProperty"},
            {"FallRotationCurve", 0x448, "ObjectProperty"},
            {"AllowDetachWithJump", 0x450, "StructProperty"},
            {"MaxWallAngleForAdjustment", 0x478, "FloatProperty"},
        }};
    };

    struct FortMovementMode_WallStickRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_WallStickRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetSynchedActionWarpPointInfo = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetSynchedActionWarpPointInfo", 0x40, "StructProperty"},
        }};
    };

    struct FortWallStickAnimInstance
    {
        static constexpr std::string_view Name = "FortWallStickAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MainAnimInstanceWeakPtr = 0x340;
            static constexpr std::uintptr_t bEnableLinkedLayerPersistence = 0x348;
            static constexpr std::uintptr_t bEnableLocomotionAdditives = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MainAnimInstanceWeakPtr", 0x340, "WeakObjectProperty"},
            {"bEnableLinkedLayerPersistence", 0x348, "BoolProperty"},
            {"bEnableLocomotionAdditives", 0x348, "BoolProperty"},
        }};
    };

    struct WallStickComponent
    {
        static constexpr std::string_view Name = "WallStickComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeExtension = 0xC8;
            static constexpr std::uintptr_t DefaultMovementModeExtension = 0xD0;
            static constexpr std::uintptr_t WallStickScoringModifier = 0x108;
            static constexpr std::uintptr_t WallStickWallLocationZOffset = 0x138;
            static constexpr std::uintptr_t WallStickWallLocationForwardDistance = 0x168;
            static constexpr std::uintptr_t WallStickWallAngleMax = 0x198;
            static constexpr std::uintptr_t WallStickEnabled = 0x1C8;
            static constexpr std::uintptr_t MaxDownVelocityForWallStick = 0x1F0;
            static constexpr std::uintptr_t WallStickSpeedToActivate = 0x220;
            static constexpr std::uintptr_t AutoStartMovementThreshold = 0x250;
            static constexpr std::uintptr_t HeldInputDuration = 0x280;
            static constexpr std::uintptr_t MinTimeInTargeting = 0x2B0;
            static constexpr std::uintptr_t WallStickCeilingCheckDistance = 0x2E0;
            static constexpr std::uintptr_t InTargetingRangeTag = 0x30C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"MovementModeExtension", 0xC8, "ClassProperty"},
            {"DefaultMovementModeExtension", 0xD0, "ClassProperty"},
            {"WallStickScoringModifier", 0x108, "StructProperty"},
            {"WallStickWallLocationZOffset", 0x138, "StructProperty"},
            {"WallStickWallLocationForwardDistance", 0x168, "StructProperty"},
            {"WallStickWallAngleMax", 0x198, "StructProperty"},
            {"WallStickEnabled", 0x1C8, "StructProperty"},
            {"MaxDownVelocityForWallStick", 0x1F0, "StructProperty"},
            {"WallStickSpeedToActivate", 0x220, "StructProperty"},
            {"AutoStartMovementThreshold", 0x250, "StructProperty"},
            {"HeldInputDuration", 0x280, "StructProperty"},
            {"MinTimeInTargeting", 0x2B0, "StructProperty"},
            {"WallStickCeilingCheckDistance", 0x2E0, "StructProperty"},
            {"InTargetingRangeTag", 0x30C, "StructProperty"},
        }};
    };

}

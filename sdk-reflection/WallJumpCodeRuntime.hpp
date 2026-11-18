#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WallJumpCodeRuntime
{
    struct FortControllerComponent_WallJump
    {
        static constexpr std::string_view Name = "FortControllerComponent_WallJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentBoundPlayerPawn = 0xC0;
            static constexpr std::uintptr_t WallJumpEnabled = 0xC8;
            static constexpr std::uintptr_t WallJumpBackEnabled = 0xF0;
            static constexpr std::uintptr_t WallJumpLogicClass = 0x130;
            static constexpr std::uintptr_t WallJumpTargetingRange = 0x138;
            static constexpr std::uintptr_t WallJumpScoringModifier = 0x168;
            static constexpr std::uintptr_t WallJumpBackScoringModifier = 0x198;
            static constexpr std::uintptr_t JumpDirectionFallbackSideInfluence = 0x1C8;
            static constexpr std::uintptr_t JumpDirectionMaxAngleDiff = 0x1F8;
            static constexpr std::uintptr_t SecondJumpWallMaxAngle = 0x228;
            static constexpr std::uintptr_t WallJumpSphereCastSize = 0x258;
            static constexpr std::uintptr_t WallJumpMinEnergyToActivate = 0x288;
            static constexpr std::uintptr_t WallJumpEnergyCostOnActivate = 0x2B8;
            static constexpr std::uintptr_t WallJumpSpeedToActivate = 0x2E8;
            static constexpr std::uintptr_t WallJumpMaxFallHeight = 0x318;
            static constexpr std::uintptr_t WallJumpFailLowEnergy = 0x348;
            static constexpr std::uintptr_t WallJumpBlockingTag = 0x368;
            static constexpr std::uintptr_t WallJumpBackMaxAngle = 0x388;
            static constexpr std::uintptr_t InTargetingRangeTag = 0x3B4;
            static constexpr std::uintptr_t JumpMultiplerCurve = 0x3E0;
            static constexpr std::uintptr_t WallJumpFatigueJumpCount = 0x3E8;
            static constexpr std::uintptr_t WallJumpShouldUseCachedValues = 0x418;
            static constexpr std::uintptr_t WallDetectionSpeedRatio = 0x448;
            static constexpr std::uintptr_t WallJumpGroundCheckDistance = 0x460;
            static constexpr std::uintptr_t WallJumpFatigueResetTime = 0x490;
            static constexpr std::uintptr_t WallJumpFatigueLandingReduction = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"CurrentBoundPlayerPawn", 0xC0, "WeakObjectProperty"},
            {"WallJumpEnabled", 0xC8, "StructProperty"},
            {"WallJumpBackEnabled", 0xF0, "StructProperty"},
            {"WallJumpLogicClass", 0x130, "ClassProperty"},
            {"WallJumpTargetingRange", 0x138, "StructProperty"},
            {"WallJumpScoringModifier", 0x168, "StructProperty"},
            {"WallJumpBackScoringModifier", 0x198, "StructProperty"},
            {"JumpDirectionFallbackSideInfluence", 0x1C8, "StructProperty"},
            {"JumpDirectionMaxAngleDiff", 0x1F8, "StructProperty"},
            {"SecondJumpWallMaxAngle", 0x228, "StructProperty"},
            {"WallJumpSphereCastSize", 0x258, "StructProperty"},
            {"WallJumpMinEnergyToActivate", 0x288, "StructProperty"},
            {"WallJumpEnergyCostOnActivate", 0x2B8, "StructProperty"},
            {"WallJumpSpeedToActivate", 0x2E8, "StructProperty"},
            {"WallJumpMaxFallHeight", 0x318, "StructProperty"},
            {"WallJumpFailLowEnergy", 0x348, "StructProperty"},
            {"WallJumpBlockingTag", 0x368, "StructProperty"},
            {"WallJumpBackMaxAngle", 0x388, "StructProperty"},
            {"InTargetingRangeTag", 0x3B4, "StructProperty"},
            {"JumpMultiplerCurve", 0x3E0, "ObjectProperty"},
            {"WallJumpFatigueJumpCount", 0x3E8, "StructProperty"},
            {"WallJumpShouldUseCachedValues", 0x418, "StructProperty"},
            {"WallDetectionSpeedRatio", 0x448, "ObjectProperty"},
            {"WallJumpGroundCheckDistance", 0x460, "StructProperty"},
            {"WallJumpFatigueResetTime", 0x490, "StructProperty"},
            {"WallJumpFatigueLandingReduction", 0x4C0, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtWallJump
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtWallJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t WallJumpEnabled = 0x1C0;
            static constexpr std::uintptr_t WallJumpTag = 0x1E8;
            static constexpr std::uintptr_t WallMovementModeTags = 0x1F0;
            static constexpr std::uintptr_t WallJumpGameplayCueTag = 0x210;
            static constexpr std::uintptr_t WallJumpConfigToInitiator = 0x218;
            static constexpr std::uintptr_t AnimationLayer = 0x228;
            static constexpr std::uintptr_t ZAttenuationCurve = 0x230;
            static constexpr std::uintptr_t JumpRotationCurve = 0x238;
            static constexpr std::uintptr_t JumpForceMultiplierCurve = 0x240;
            static constexpr std::uintptr_t CardinalToDirectionMap = 0x248;
            static constexpr std::uintptr_t WallJumpAnimationToInitiator = 0x258;
            static constexpr std::uintptr_t Cached_WallJumpConfigToInitiator = 0x268;
            static constexpr std::uintptr_t WallJumpSurfaceTestZOffset = 0x27C;
            static constexpr std::uintptr_t WallJumpSurfaceTestDistMultiplier = 0x280;
            static constexpr std::uintptr_t WallJumpFromWallStickEnabled = 0x288;
            static constexpr std::uintptr_t WallJumpShouldUseCachedValues = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"WallJumpEnabled", 0x1C0, "StructProperty"},
            {"WallJumpTag", 0x1E8, "StructProperty"},
            {"WallMovementModeTags", 0x1F0, "StructProperty"},
            {"WallJumpGameplayCueTag", 0x210, "StructProperty"},
            {"WallJumpConfigToInitiator", 0x218, "MapProperty"},
            {"AnimationLayer", 0x228, "ClassProperty"},
            {"ZAttenuationCurve", 0x230, "ObjectProperty"},
            {"JumpRotationCurve", 0x238, "ObjectProperty"},
            {"JumpForceMultiplierCurve", 0x240, "ObjectProperty"},
            {"CardinalToDirectionMap", 0x248, "MapProperty"},
            {"WallJumpAnimationToInitiator", 0x258, "MapProperty"},
            {"Cached_WallJumpConfigToInitiator", 0x268, "MapProperty"},
            {"WallJumpSurfaceTestZOffset", 0x27C, "FloatProperty"},
            {"WallJumpSurfaceTestDistMultiplier", 0x280, "FloatProperty"},
            {"WallJumpFromWallStickEnabled", 0x288, "StructProperty"},
            {"WallJumpShouldUseCachedValues", 0x2B0, "StructProperty"},
        }};
    };

    struct FortMovementMode_WallJumpRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_WallJumpRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetJumpDirection = 0x38;
            static constexpr std::uintptr_t NetInitiator = 0x50;
            static constexpr std::uintptr_t WallLocation = 0x60;
            static constexpr std::uintptr_t WallHitResult = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NetJumpDirection", 0x38, "StructProperty"},
            {"NetInitiator", 0x50, "EnumProperty"},
            {"WallLocation", 0x60, "StructProperty"},
            {"WallHitResult", 0x88, "StructProperty"},
        }};
    };

}

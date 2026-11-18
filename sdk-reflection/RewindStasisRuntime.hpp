#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RewindStasisRuntime
{
    struct FortActorComponent_RewindStasisPositionTracking
    {
        static constexpr std::string_view Name = "FortActorComponent_RewindStasisPositionTracking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedPositions = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackedPositions", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortGameplayAbility_RewindStasis
    {
        static constexpr std::string_view Name = "FortGameplayAbility_RewindStasis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t SF_AllowRewindInVehicle = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SF_AllowRewindInVehicle", 0xB40, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_RewindStasisPositionTracker
    {
        static constexpr std::string_view Name = "FortGameplayAbility_RewindStasisPositionTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ParachutingGameplayTag = 0xB40;
            static constexpr std::uintptr_t bEnableDebugRecallCollisionDetection = 0xB44;
            static constexpr std::uintptr_t bTransientIsPlayerBlocked = 0xB45;
            static constexpr std::uintptr_t PlayerLocations = 0xB48;
            static constexpr std::uintptr_t PlayerAimRotations = 0xB58;
            static constexpr std::uintptr_t PlayerHealths = 0xB68;
            static constexpr std::uintptr_t PlayerShields = 0xB78;
            static constexpr std::uintptr_t InGliderBools = 0xB88;
            static constexpr std::uintptr_t NumberOfIntervals = 0xB98;
            static constexpr std::uintptr_t CachedFortPlayerPawn = 0xB9C;
            static constexpr std::uintptr_t PositionTrackingComp = 0xBA8;
            static constexpr std::uintptr_t CachedCharacterMovementComponent = 0xBB0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ParachutingGameplayTag", 0xB40, "StructProperty"},
            {"bEnableDebugRecallCollisionDetection", 0xB44, "BoolProperty"},
            {"bTransientIsPlayerBlocked", 0xB45, "BoolProperty"},
            {"PlayerLocations", 0xB48, "ArrayProperty"},
            {"PlayerAimRotations", 0xB58, "ArrayProperty"},
            {"PlayerHealths", 0xB68, "ArrayProperty"},
            {"PlayerShields", 0xB78, "ArrayProperty"},
            {"InGliderBools", 0xB88, "ArrayProperty"},
            {"NumberOfIntervals", 0xB98, "IntProperty"},
            {"CachedFortPlayerPawn", 0xB9C, "WeakObjectProperty"},
            {"PositionTrackingComp", 0xBA8, "ObjectProperty"},
            {"CachedCharacterMovementComponent", 0xBB0, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_RewindStasisExtLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_RewindStasisExtLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingPreset = 0x1C0;
            static constexpr std::uintptr_t AsyncTargetingHandle_PostTeleport = 0x1C8;
            static constexpr std::uintptr_t AsyncTargetingHandle_InterimTeleport = 0x1CC;
            static constexpr std::uintptr_t GE_DestroyBuilds = 0x1D0;
            static constexpr std::uintptr_t GE_KnockbackObstacles = 0x1D8;
            static constexpr std::uintptr_t SF_DestructibleBuildingMinHealth = 0x1E0;
            static constexpr std::uintptr_t SF_DestructibleBuildingMaxHealth = 0x210;
            static constexpr std::uintptr_t SF_bEnableDestroyObstaclesOnTeleport = 0x240;
            static constexpr std::uintptr_t SF_TimeBufferBeforeObstacleKnockback = 0x270;
            static constexpr std::uintptr_t TrackedRewindLocations = 0x2A0;
            static constexpr std::uintptr_t GE_HidePlayer = 0x2B0;
            static constexpr std::uintptr_t GE_FallDamageImmunity = 0x2B8;
            static constexpr std::uintptr_t GCN_EnterRecall = 0x2C0;
            static constexpr std::uintptr_t GCN_ExitRecall = 0x2C4;
            static constexpr std::uintptr_t SF_RewindDuration = 0x2C8;
            static constexpr std::uintptr_t SF_DelayBeforeRewind = 0x2F8;
            static constexpr std::uintptr_t SF_bEnableDistanceCapOnRewind = 0x328;
            static constexpr std::uintptr_t SF_RewindXYDistanceCap = 0x358;
            static constexpr std::uintptr_t bDeNativize = 0x388;
            static constexpr std::uintptr_t DenativizedRuntimeDataClass = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"TargetingPreset", 0x1C0, "ObjectProperty"},
            {"AsyncTargetingHandle_PostTeleport", 0x1C8, "StructProperty"},
            {"AsyncTargetingHandle_InterimTeleport", 0x1CC, "StructProperty"},
            {"GE_DestroyBuilds", 0x1D0, "ClassProperty"},
            {"GE_KnockbackObstacles", 0x1D8, "ClassProperty"},
            {"SF_DestructibleBuildingMinHealth", 0x1E0, "StructProperty"},
            {"SF_DestructibleBuildingMaxHealth", 0x210, "StructProperty"},
            {"SF_bEnableDestroyObstaclesOnTeleport", 0x240, "StructProperty"},
            {"SF_TimeBufferBeforeObstacleKnockback", 0x270, "StructProperty"},
            {"TrackedRewindLocations", 0x2A0, "ArrayProperty"},
            {"GE_HidePlayer", 0x2B0, "ClassProperty"},
            {"GE_FallDamageImmunity", 0x2B8, "ClassProperty"},
            {"GCN_EnterRecall", 0x2C0, "StructProperty"},
            {"GCN_ExitRecall", 0x2C4, "StructProperty"},
            {"SF_RewindDuration", 0x2C8, "StructProperty"},
            {"SF_DelayBeforeRewind", 0x2F8, "StructProperty"},
            {"SF_bEnableDistanceCapOnRewind", 0x328, "StructProperty"},
            {"SF_RewindXYDistanceCap", 0x358, "StructProperty"},
            {"bDeNativize", 0x388, "StructProperty"},
            {"DenativizedRuntimeDataClass", 0x3B8, "ClassProperty"},
        }};
    };

    struct FortMovementMode_RewindStasisRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_RewindStasisRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t ElapsedRewindTime = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElapsedRewindTime", 0x38, "FloatProperty"},
        }};
    };

    struct RewindStasisPositionTrackingInterface
    {
        static constexpr std::string_view Name = "RewindStasisPositionTrackingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

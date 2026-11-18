#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LavaLeafRuntime
{
    struct FortActorComponent_LavaLeafPositionTracking
    {
        static constexpr std::string_view Name = "FortActorComponent_LavaLeafPositionTracking";
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

    struct FortGameplayAbility_LavaLeafPositionTracker
    {
        static constexpr std::string_view Name = "FortGameplayAbility_LavaLeafPositionTracker";
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

    struct FortGameplayAbility_LavaLeafRewind
    {
        static constexpr std::string_view Name = "FortGameplayAbility_LavaLeafRewind";
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

    struct FortMovementMode_LavaLeafRewindExtLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_LavaLeafRewindExtLogic";
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

    struct FortMovementMode_LavaLeafRewindRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_LavaLeafRewindRuntimeData";
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

    struct FortWeaponComponent_LavaLeafInputOverrides
    {
        static constexpr std::string_view Name = "FortWeaponComponent_LavaLeafInputOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReloadTriggered = 0xC0;
            static constexpr std::uintptr_t TargetingInputData = 0xD0;
            static constexpr std::uintptr_t ReloadOverrideInputAction = 0x118;
            static constexpr std::uintptr_t bShowInputActionTooltip = 0x138;
            static constexpr std::uintptr_t ToggleButtonPressCooldown = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnReloadTriggered", 0xC0, "MulticastInlineDelegateProperty"},
            {"TargetingInputData", 0xD0, "StructProperty"},
            {"ReloadOverrideInputAction", 0x118, "SoftObjectProperty"},
            {"bShowInputActionTooltip", 0x138, "BoolProperty"},
            {"ToggleButtonPressCooldown", 0x140, "StructProperty"},
        }};
    };

    struct LavaLeafLayerAnimInstance
    {
        static constexpr std::string_view Name = "LavaLeafLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LeanAlpha = 0x1180;
            static constexpr std::uintptr_t FiringAdditiveAO = 0x1188;
            static constexpr std::uintptr_t AO_Alpha = 0x1190;
            static constexpr std::uintptr_t SlidingAimPitchLimit = 0x1198;
            static constexpr std::uintptr_t FiringAdditiveAOUpdated = 0x11A0;
            static constexpr std::uintptr_t bBoostedJumpFP = 0x11A8;
            static constexpr std::uintptr_t bDashFP = 0x11A9;
            static constexpr std::uintptr_t bToFP_Depth = 0x11AA;
            static constexpr std::uintptr_t bUseFireAO = 0x11AB;
            static constexpr std::uintptr_t bDisableLeanBS = 0x11AC;
            static constexpr std::uintptr_t bTeleportingFP = 0x11AD;
            static constexpr std::uintptr_t bDash_N = 0x11AE;
            static constexpr std::uintptr_t bIsFiring = 0x11AF;
            static constexpr std::uintptr_t bDash_S = 0x11B0;
            static constexpr std::uintptr_t bDash_E = 0x11B1;
            static constexpr std::uintptr_t bDash_W = 0x11B2;
            static constexpr std::uintptr_t bIsInteracting = 0x11B3;
            static constexpr std::uintptr_t bEarlyExit = 0x11B4;
            static constexpr std::uintptr_t bDash_3P = 0x11B5;
            static constexpr std::uintptr_t bExitDash = 0x11B6;
            static constexpr std::uintptr_t bExitDoorBash = 0x11B7;
            static constexpr std::uintptr_t bCanEnterDoorBash = 0x11B8;
            static constexpr std::uintptr_t StasisTagName = 0x11BC;
            static constexpr std::uintptr_t BoostedJumpTagName = 0x11C0;
            static constexpr std::uintptr_t DashTagName = 0x11C4;
            static constexpr std::uintptr_t SearchFPAnimMontage = 0x11C8;
            static constexpr std::uintptr_t LavaLeafFPEquipMAnimMontage = 0x11E8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"LeanAlpha", 0x1180, "DoubleProperty"},
            {"FiringAdditiveAO", 0x1188, "DoubleProperty"},
            {"AO_Alpha", 0x1190, "DoubleProperty"},
            {"SlidingAimPitchLimit", 0x1198, "DoubleProperty"},
            {"FiringAdditiveAOUpdated", 0x11A0, "DoubleProperty"},
            {"bBoostedJumpFP", 0x11A8, "BoolProperty"},
            {"bDashFP", 0x11A9, "BoolProperty"},
            {"bToFP_Depth", 0x11AA, "BoolProperty"},
            {"bUseFireAO", 0x11AB, "BoolProperty"},
            {"bDisableLeanBS", 0x11AC, "BoolProperty"},
            {"bTeleportingFP", 0x11AD, "BoolProperty"},
            {"bDash_N", 0x11AE, "BoolProperty"},
            {"bIsFiring", 0x11AF, "BoolProperty"},
            {"bDash_S", 0x11B0, "BoolProperty"},
            {"bDash_E", 0x11B1, "BoolProperty"},
            {"bDash_W", 0x11B2, "BoolProperty"},
            {"bIsInteracting", 0x11B3, "BoolProperty"},
            {"bEarlyExit", 0x11B4, "BoolProperty"},
            {"bDash_3P", 0x11B5, "BoolProperty"},
            {"bExitDash", 0x11B6, "BoolProperty"},
            {"bExitDoorBash", 0x11B7, "BoolProperty"},
            {"bCanEnterDoorBash", 0x11B8, "BoolProperty"},
            {"StasisTagName", 0x11BC, "StructProperty"},
            {"BoostedJumpTagName", 0x11C0, "StructProperty"},
            {"DashTagName", 0x11C4, "StructProperty"},
            {"SearchFPAnimMontage", 0x11C8, "SoftObjectProperty"},
            {"LavaLeafFPEquipMAnimMontage", 0x11E8, "SoftObjectProperty"},
        }};
    };

    struct LavaLeafPistolWeaponAnimInstance
    {
        static constexpr std::string_view Name = "LavaLeafPistolWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MagRotation = 0x260;
            static constexpr std::uintptr_t bIsReloading = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MagRotation", 0x260, "StructProperty"},
            {"bIsReloading", 0x278, "BoolProperty"},
        }};
    };

    struct LavaLeafPositionTrackingInterface
    {
        static constexpr std::string_view Name = "LavaLeafPositionTrackingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

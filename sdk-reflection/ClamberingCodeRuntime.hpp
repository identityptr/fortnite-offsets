#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClamberingCodeRuntime
{
    struct ClamberingAnalytics
    {
        static constexpr std::string_view Name = "ClamberingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClamberingComponent
    {
        static constexpr std::string_view Name = "ClamberingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalClamberingState = 0xD0;
            static constexpr std::uintptr_t ReplicatedClamberingState = 0xD1;
            static constexpr std::uintptr_t LockedTargetingData = 0xD8;
            static constexpr std::uintptr_t ReplicatedTargetingData = 0x220;
            static constexpr std::uintptr_t ClamberingEnabled = 0x268;
            static constexpr std::uintptr_t ClamberIndicatorEnabled = 0x290;
            static constexpr std::uintptr_t ClamberStartMaxFallingDamageFraction = 0x2C0;
            static constexpr std::uintptr_t bPerformTargetingWhileWalking = 0x2E8;
            static constexpr std::uintptr_t bPerformTargetingWhileSwimming = 0x2E9;
            static constexpr std::uintptr_t ServerFailDelay = 0x2F0;
            static constexpr std::uintptr_t ServerValidatePlayerMaxDistance = 0x318;
            static constexpr std::uintptr_t InputConfig = 0x340;
            static constexpr std::uintptr_t TargetingConfig_Ledge = 0x730;
            static constexpr std::uintptr_t InputConfigCachedValues = 0xEA0;
            static constexpr std::uintptr_t TargetingConfig_Ledge_CachedContextualValues = 0xF10;
            static constexpr std::uintptr_t MoveConfig_Ledge = 0xFE8;
            static constexpr std::uintptr_t ClamberSyncTargetLedgeOffset = 0x1038;
            static constexpr std::uintptr_t ClamberingMaxAnalyticsEvents = 0x1060;
            static constexpr std::uintptr_t SynchedActionFailDelay = 0x1088;
            static constexpr std::uintptr_t MovementModeExtension = 0x10B0;
            static constexpr std::uintptr_t SynchedActionMMETag = 0x10B8;
            static constexpr std::uintptr_t AllowTargetingTag = 0x10BC;
            static constexpr std::uintptr_t LedgeLaunchSyncPointName = 0x10C0;
            static constexpr std::uintptr_t LastTeleportTime = 0x10C8;
            static constexpr std::uintptr_t bTutorialModeEnabled = 0x10D0;
            static constexpr std::uintptr_t LocalTargetingData = 0x10D8;
            static constexpr std::uintptr_t ParallelTargetingData = 0x1210;
            static constexpr std::uintptr_t QueuedInputTimer = 0x1348;
            static constexpr std::uintptr_t InputEnabledTimer = 0x134C;
            static constexpr std::uintptr_t bJumpInputPressed = 0x1350;
            static constexpr std::uintptr_t JumpHeldInAirTime = 0x1354;
            static constexpr std::uintptr_t Tag_DisableClambering = 0x13C0;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"LocalClamberingState", 0xD0, "EnumProperty"},
            {"ReplicatedClamberingState", 0xD1, "EnumProperty"},
            {"LockedTargetingData", 0xD8, "StructProperty"},
            {"ReplicatedTargetingData", 0x220, "StructProperty"},
            {"ClamberingEnabled", 0x268, "StructProperty"},
            {"ClamberIndicatorEnabled", 0x290, "StructProperty"},
            {"ClamberStartMaxFallingDamageFraction", 0x2C0, "StructProperty"},
            {"bPerformTargetingWhileWalking", 0x2E8, "BoolProperty"},
            {"bPerformTargetingWhileSwimming", 0x2E9, "BoolProperty"},
            {"ServerFailDelay", 0x2F0, "StructProperty"},
            {"ServerValidatePlayerMaxDistance", 0x318, "StructProperty"},
            {"InputConfig", 0x340, "StructProperty"},
            {"TargetingConfig_Ledge", 0x730, "StructProperty"},
            {"InputConfigCachedValues", 0xEA0, "StructProperty"},
            {"TargetingConfig_Ledge_CachedContextualValues", 0xF10, "StructProperty"},
            {"MoveConfig_Ledge", 0xFE8, "StructProperty"},
            {"ClamberSyncTargetLedgeOffset", 0x1038, "StructProperty"},
            {"ClamberingMaxAnalyticsEvents", 0x1060, "StructProperty"},
            {"SynchedActionFailDelay", 0x1088, "StructProperty"},
            {"MovementModeExtension", 0x10B0, "ClassProperty"},
            {"SynchedActionMMETag", 0x10B8, "StructProperty"},
            {"AllowTargetingTag", 0x10BC, "StructProperty"},
            {"LedgeLaunchSyncPointName", 0x10C0, "NameProperty"},
            {"LastTeleportTime", 0x10C8, "DoubleProperty"},
            {"bTutorialModeEnabled", 0x10D0, "BoolProperty"},
            {"LocalTargetingData", 0x10D8, "StructProperty"},
            {"ParallelTargetingData", 0x1210, "StructProperty"},
            {"QueuedInputTimer", 0x1348, "FloatProperty"},
            {"InputEnabledTimer", 0x134C, "FloatProperty"},
            {"bJumpInputPressed", 0x1350, "BoolProperty"},
            {"JumpHeldInAirTime", 0x1354, "FloatProperty"},
            {"Tag_DisableClambering", 0x13C0, "StructProperty"},
        }};
    };

    struct ClamberingLibrary
    {
        static constexpr std::string_view Name = "ClamberingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClamberingOverrideComponent
    {
        static constexpr std::string_view Name = "ClamberingOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortAthenaMutator_LedgeLaunch
    {
        static constexpr std::string_view Name = "FortAthenaMutator_LedgeLaunch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWalls = 0x3D0;
            static constexpr std::uintptr_t bShouldSpawnLedge = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentWalls", 0x3D0, "ArrayProperty"},
            {"bShouldSpawnLedge", 0x3E0, "BoolProperty"},
        }};
    };

    struct FortMovementMode_ClamberingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ClamberingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_TraversalBaseRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimMontage = 0x38;
            static constexpr std::uintptr_t MontageStartSectionName = 0x40;
            static constexpr std::uintptr_t MontageMiddleSectionName = 0x44;
            static constexpr std::uintptr_t SynchedActionWarpPointInfo = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimMontage", 0x38, "ObjectProperty"},
            {"MontageStartSectionName", 0x40, "NameProperty"},
            {"MontageMiddleSectionName", 0x44, "NameProperty"},
            {"SynchedActionWarpPointInfo", 0x50, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtClambering
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtClambering";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicTraversalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LedgeLaunchCameraMode = 0x280;
            static constexpr std::uintptr_t WindowClamberCameraMode = 0x288;
            static constexpr std::uintptr_t ClamberingTag = 0x290;
            static constexpr std::uintptr_t ClamberingStartedTag = 0x2B0;
            static constexpr std::uintptr_t ClamberingFinishedTag = 0x2B8;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x2D8;
            static constexpr std::uintptr_t CameraShake = 0x2E0;
            static constexpr std::uintptr_t LedgeLaunchSyncPointInterpSpeed = 0x2E8;
            static constexpr std::uintptr_t LedgeLaunchPlayerCollideBounceSpeed = 0x2EC;
            static constexpr std::uintptr_t bEndWithGroundMovementWhenOnValidFloor = 0x2F0;
            static constexpr std::uintptr_t ClearFallingOnFinalRootMotionFrame = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"LedgeLaunchCameraMode", 0x280, "ClassProperty"},
            {"WindowClamberCameraMode", 0x288, "ClassProperty"},
            {"ClamberingTag", 0x290, "StructProperty"},
            {"ClamberingStartedTag", 0x2B0, "StructProperty"},
            {"ClamberingFinishedTag", 0x2B8, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x2D8, "StructProperty"},
            {"CameraShake", 0x2E0, "ObjectProperty"},
            {"LedgeLaunchSyncPointInterpSpeed", 0x2E8, "FloatProperty"},
            {"LedgeLaunchPlayerCollideBounceSpeed", 0x2EC, "FloatProperty"},
            {"bEndWithGroundMovementWhenOnValidFloor", 0x2F0, "BoolProperty"},
            {"ClearFallingOnFinalRootMotionFrame", 0x2F8, "StructProperty"},
        }};
    };

    struct InstancedLedgeActor
    {
        static constexpr std::string_view Name = "InstancedLedgeActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientOnlyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedStaticMeshComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstancedStaticMeshComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct LedgeLaunchWorldSubsystem
    {
        static constexpr std::string_view Name = "LedgeLaunchWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingWallSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigurationData = 0x38;
            static constexpr std::uintptr_t InstancedLedgeActorClass = 0x58;
            static constexpr std::uintptr_t CachedConfigurationData = 0x78;
            static constexpr std::uintptr_t InstancedLedgeActor = 0x80;
            static constexpr std::uintptr_t CachedLedgeLaunchMap = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ConfigurationData", 0x38, "SoftObjectProperty"},
            {"InstancedLedgeActorClass", 0x58, "SoftClassProperty"},
            {"CachedConfigurationData", 0x78, "ObjectProperty"},
            {"InstancedLedgeActor", 0x80, "ObjectProperty"},
            {"CachedLedgeLaunchMap", 0x88, "MapProperty"},
        }};
    };

    struct PBWLedgeConfigurationData
    {
        static constexpr std::string_view Name = "PBWLedgeConfigurationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MetalWalls = 0x28;
            static constexpr std::uintptr_t StoneWalls = 0x38;
            static constexpr std::uintptr_t WoodWalls = 0x48;
            static constexpr std::uintptr_t Transforms = 0x58;
            static constexpr std::uintptr_t PerMaterialTransforms = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MetalWalls", 0x28, "MapProperty"},
            {"StoneWalls", 0x38, "MapProperty"},
            {"WoodWalls", 0x48, "MapProperty"},
            {"Transforms", 0x58, "MapProperty"},
            {"PerMaterialTransforms", 0x68, "MapProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PoolDustRuntime
{
    struct FortAthenaBTTask_PoolDust
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_PoolDust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x70;
            static constexpr std::uintptr_t NoStrategyWeightedChance = 0x98;
            static constexpr std::uintptr_t RandomStrategyWeightedChance = 0xC0;
            static constexpr std::uintptr_t ObjectiveStrategyWeightedChance = 0xE8;
            static constexpr std::uintptr_t SteerInputXMin = 0x110;
            static constexpr std::uintptr_t SteerInputXMax = 0x138;
            static constexpr std::uintptr_t SteerInputYMin = 0x160;
            static constexpr std::uintptr_t SteerInputYMax = 0x188;
            static constexpr std::uintptr_t InputIntervalMin = 0x1B0;
            static constexpr std::uintptr_t InputIntervalMax = 0x1D8;
            static constexpr std::uintptr_t ObjectiveDistanceMin = 0x200;
            static constexpr std::uintptr_t ObjectiveReachedDistance = 0x228;
            static constexpr std::uintptr_t ObjectiveOrientationMaxAngleDeg = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"IsEnabled", 0x70, "StructProperty"},
            {"NoStrategyWeightedChance", 0x98, "StructProperty"},
            {"RandomStrategyWeightedChance", 0xC0, "StructProperty"},
            {"ObjectiveStrategyWeightedChance", 0xE8, "StructProperty"},
            {"SteerInputXMin", 0x110, "StructProperty"},
            {"SteerInputXMax", 0x138, "StructProperty"},
            {"SteerInputYMin", 0x160, "StructProperty"},
            {"SteerInputYMax", 0x188, "StructProperty"},
            {"InputIntervalMin", 0x1B0, "StructProperty"},
            {"InputIntervalMax", 0x1D8, "StructProperty"},
            {"ObjectiveDistanceMin", 0x200, "StructProperty"},
            {"ObjectiveReachedDistance", 0x228, "StructProperty"},
            {"ObjectiveOrientationMaxAngleDeg", 0x250, "StructProperty"},
        }};
    };

    struct FortCameraMode_PoolDustAircraft
    {
        static constexpr std::string_view Name = "FortCameraMode_PoolDustAircraft";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaAircraft";
        struct Offsets
        {
            static constexpr std::uintptr_t IntroHoldTime = 0x20A0;
            static constexpr std::uintptr_t IntroHoldRotationOffset = 0x20C8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IntroHoldTime", 0x20A0, "StructProperty"},
            {"IntroHoldRotationOffset", 0x20C8, "StructProperty"},
        }};
    };

    struct FortCheatManager_PoolDust
    {
        static constexpr std::string_view Name = "FortCheatManager_PoolDust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveClassForCheat = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectiveClassForCheat", 0x28, "ClassProperty"},
        }};
    };

    struct FortControllerComponent_PoolDust
    {
        static constexpr std::string_view Name = "FortControllerComponent_PoolDust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraModeClass = 0xC8;
            static constexpr std::uintptr_t CameraModeTag = 0xD0;
            static constexpr std::uintptr_t PoolDustMappingContext = 0xD8;
            static constexpr std::uintptr_t SteerInputAction = 0xE0;
            static constexpr std::uintptr_t HonkInputAction = 0xE8;
            static constexpr std::uintptr_t TouchMoveStickThreshold = 0xF0;
            static constexpr std::uintptr_t bIsSteeringAllowed = 0xF4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CameraModeClass", 0xC8, "ClassProperty"},
            {"CameraModeTag", 0xD0, "StructProperty"},
            {"PoolDustMappingContext", 0xD8, "ObjectProperty"},
            {"SteerInputAction", 0xE0, "ObjectProperty"},
            {"HonkInputAction", 0xE8, "ObjectProperty"},
            {"TouchMoveStickThreshold", 0xF0, "FloatProperty"},
            {"bIsSteeringAllowed", 0xF4, "BoolProperty"},
        }};
    };

    struct FortGameStateComponent_PoolDust
    {
        static constexpr std::string_view Name = "FortGameStateComponent_PoolDust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PoolDustPercentChance = 0xC0;
            static constexpr std::uintptr_t PoolDustObjectiveClass = 0xE8;
            static constexpr std::uintptr_t SupplyDropClass = 0xF0;
            static constexpr std::uintptr_t ObjectiveYawProbabilityCurve = 0xF8;
            static constexpr std::uintptr_t NoGoZoneSpawnLocation = 0x110;
            static constexpr std::uintptr_t PoolDustNoGoZoneClass = 0x138;
            static constexpr std::uintptr_t BusDriverPassiveGEClass = 0x140;
            static constexpr std::uintptr_t ThankBusDriverMessage = 0x148;
            static constexpr std::uintptr_t SelfThankBusDriverMessage = 0x158;
            static constexpr std::uintptr_t BusDriverMessageRegistryType = 0x168;
            static constexpr std::uintptr_t BotSelectionWeight = 0x170;
            static constexpr std::uintptr_t NumHumanPlayersForNoBotSelection = 0x198;
            static constexpr std::uintptr_t BusDriverPS = 0x1C0;
            static constexpr std::uintptr_t BusDriverSong = 0x1C8;
            static constexpr std::uintptr_t SpawnedNoGoZone = 0x200;
            static constexpr std::uintptr_t bPoolDustEnabledThisMatch = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"PoolDustPercentChance", 0xC0, "StructProperty"},
            {"PoolDustObjectiveClass", 0xE8, "ClassProperty"},
            {"SupplyDropClass", 0xF0, "ClassProperty"},
            {"ObjectiveYawProbabilityCurve", 0xF8, "ObjectProperty"},
            {"NoGoZoneSpawnLocation", 0x110, "StructProperty"},
            {"PoolDustNoGoZoneClass", 0x138, "ClassProperty"},
            {"BusDriverPassiveGEClass", 0x140, "ClassProperty"},
            {"ThankBusDriverMessage", 0x148, "TextProperty"},
            {"SelfThankBusDriverMessage", 0x158, "TextProperty"},
            {"BusDriverMessageRegistryType", 0x168, "StructProperty"},
            {"BotSelectionWeight", 0x170, "StructProperty"},
            {"NumHumanPlayersForNoBotSelection", 0x198, "StructProperty"},
            {"BusDriverPS", 0x1C0, "WeakObjectProperty"},
            {"BusDriverSong", 0x1C8, "InterfaceProperty"},
            {"SpawnedNoGoZone", 0x200, "ObjectProperty"},
            {"bPoolDustEnabledThisMatch", 0x208, "BoolProperty"},
        }};
    };

    struct FortPlayerStateComponent_PoolDustPersistence
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_PoolDustPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent_SaveFrameworkPersistence";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPersistenceStatusChanged = 0xC0;
            static constexpr std::uintptr_t OnPlayerPersistenceAvailable = 0xD0;
            static constexpr std::uintptr_t OnPlayerPersistenceWiped = 0xE0;
            static constexpr std::uintptr_t PersistenceParams = 0xF0;
            static constexpr std::uintptr_t PersistenceDataRoot = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnPlayerPersistenceStatusChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPersistenceAvailable", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPersistenceWiped", 0xE0, "MulticastInlineDelegateProperty"},
            {"PersistenceParams", 0xF0, "StructProperty"},
            {"PersistenceDataRoot", 0x118, "StructProperty"},
        }};
    };

    struct PoolDustAircraftComponent
    {
        static constexpr std::string_view Name = "PoolDustAircraftComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProjectileMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PoolDustBoundsXYSplineClass = 0x280;
            static constexpr std::uintptr_t PoolDustPivotPoint = 0x290;
            static constexpr std::uintptr_t HornSound = 0x298;
            static constexpr std::uintptr_t AllowHornHonk = 0x2A0;
            static constexpr std::uintptr_t AllowedHonksBeforeCooldown = 0x2C8;
            static constexpr std::uintptr_t HonkCooldown = 0x2F0;
            static constexpr std::uintptr_t HornAudioComp = 0x318;
            static constexpr std::uintptr_t PoolDustRollAmount = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PoolDustBoundsXYSplineClass", 0x280, "ClassProperty"},
            {"PoolDustPivotPoint", 0x290, "ObjectProperty"},
            {"HornSound", 0x298, "ObjectProperty"},
            {"AllowHornHonk", 0x2A0, "StructProperty"},
            {"AllowedHonksBeforeCooldown", 0x2C8, "StructProperty"},
            {"HonkCooldown", 0x2F0, "StructProperty"},
            {"HornAudioComp", 0x318, "ObjectProperty"},
            {"PoolDustRollAmount", 0x320, "FloatProperty"},
        }};
    };

    struct PoolDustAnalyticsComponent
    {
        static constexpr std::string_view Name = "PoolDustAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct PoolDustFloatingObjective
    {
        static constexpr std::string_view Name = "PoolDustFloatingObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsObjectiveActive = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsObjectiveActive", 0x278, "BoolProperty"},
        }};
    };

    struct PoolDustNoGoZone
    {
        static constexpr std::string_view Name = "PoolDustNoGoZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct PoolDustObjectiveComponent_SupplyDrop
    {
        static constexpr std::string_view Name = "PoolDustObjectiveComponent_SupplyDrop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetMode = 0xC0;
            static constexpr std::uintptr_t SupplyDropSpawnOffset = 0xC8;
            static constexpr std::uintptr_t SpawnedSupplyDrop = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OffsetMode", 0xC0, "EnumProperty"},
            {"SupplyDropSpawnOffset", 0xC8, "StructProperty"},
            {"SpawnedSupplyDrop", 0xE0, "WeakObjectProperty"},
        }};
    };

}

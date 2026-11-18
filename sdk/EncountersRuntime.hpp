#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EncountersRuntime
{
    struct EncounterActorSpawnerData
    {
        static constexpr std::string_view Name = "EncounterActorSpawnerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaActorSpawnerData";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterEntry = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EncounterEntry", 0x78, "StructProperty"},
        }};
    };

    struct EncounterBlueprintLibrary
    {
        static constexpr std::string_view Name = "EncounterBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EncounterCompositeVolume
    {
        static constexpr std::string_view Name = "EncounterCompositeVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EncounterGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeTagQuery = 0x510;
            static constexpr std::uintptr_t bUseOverlappingVolumesOnly = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VolumeTagQuery", 0x510, "StructProperty"},
            {"bUseOverlappingVolumesOnly", 0x558, "BoolProperty"},
        }};
    };

    struct EncounterFactionData
    {
        static constexpr std::string_view Name = "EncounterFactionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FactionCapabilities = 0x28;
            static constexpr std::uintptr_t WorldConditionDefinition = 0x48;
            static constexpr std::uintptr_t LWMEncounterTable = 0x70;
            static constexpr std::uintptr_t EnemiesSelection = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FactionCapabilities", 0x28, "StructProperty"},
            {"WorldConditionDefinition", 0x48, "StructProperty"},
            {"LWMEncounterTable", 0x70, "ObjectProperty"},
            {"EnemiesSelection", 0x78, "StructProperty"},
        }};
    };

    struct EncounterGameplayCueActor
    {
        static constexpr std::string_view Name = "EncounterGameplayCueActor";
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

    struct EncounterGameplayVolume
    {
        static constexpr std::string_view Name = "EncounterGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestManagerVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterStateTreeComponent = 0x470;
            static constexpr std::uintptr_t TrackedEncounterPointProviders = 0x480;
            static constexpr std::uintptr_t TrackedEncounterAnchors = 0x490;
            static constexpr std::uintptr_t TrackedActors = 0x4A0;
            static constexpr std::uintptr_t AllVisitedPlayersMap = 0x4B0;
            static constexpr std::uintptr_t OwningPrefab = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EncounterStateTreeComponent", 0x470, "ObjectProperty"},
            {"TrackedEncounterPointProviders", 0x480, "ArrayProperty"},
            {"TrackedEncounterAnchors", 0x490, "ArrayProperty"},
            {"TrackedActors", 0x4A0, "ArrayProperty"},
            {"AllVisitedPlayersMap", 0x4B0, "MapProperty"},
            {"OwningPrefab", 0x508, "WeakObjectProperty"},
        }};
    };

    struct EncounterItemDefinition
    {
        static constexpr std::string_view Name = "EncounterItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoHandleSuccessFailure = 0xA0;
            static constexpr std::uintptr_t bUseLevel = 0xA1;
            static constexpr std::uintptr_t Level = 0xA8;
            static constexpr std::uintptr_t ScenarioVolumeClass = 0xC8;
            static constexpr std::uintptr_t StateTreeOverride = 0xE8;
            static constexpr std::uintptr_t ProximityGameplayCueTag = 0x108;
            static constexpr std::uintptr_t ActorCleanupGameplayCueTag = 0x10C;
            static constexpr std::uintptr_t bUseOverlapTestForActorCollection = 0x110;
            static constexpr std::uintptr_t SuccessRewards = 0x118;
            static constexpr std::uintptr_t ReactionsToGrantOnSuccess = 0x128;
            static constexpr std::uintptr_t SuccessRewardBehavior = 0x138;
            static constexpr std::uintptr_t ActorSuccessGameplayCueTag = 0x1B8;
            static constexpr std::uintptr_t PlayerSuccessGameplayCueTag = 0x1BC;
            static constexpr std::uintptr_t FailureRewards = 0x1C0;
            static constexpr std::uintptr_t ReactionsToGrantOnFailure = 0x1D0;
            static constexpr std::uintptr_t FailureRewardBehavior = 0x1E0;
            static constexpr std::uintptr_t ActorFailureGameplayCueTag = 0x260;
            static constexpr std::uintptr_t PlayerFailureGameplayCueTag = 0x264;
            static constexpr std::uintptr_t LWMDensityWeight = 0x268;
            static constexpr std::uintptr_t LWMDensityRange = 0x290;
            static constexpr std::uintptr_t bUseGlobalLWMBudget = 0x2B8;
            static constexpr std::uintptr_t Vars = 0x2C0;
            static constexpr std::uintptr_t VariableSelections = 0x2D0;
            static constexpr std::uintptr_t VariableCollectionSelections = 0x2E0;
            static constexpr std::uintptr_t CanSpawnWorldConditionDefinition = 0x2F0;
            static constexpr std::uintptr_t WaveTable = 0x318;
            static constexpr std::uintptr_t ActorSpawnerDatas = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bAutoHandleSuccessFailure", 0xA0, "BoolProperty"},
            {"bUseLevel", 0xA1, "BoolProperty"},
            {"Level", 0xA8, "SoftObjectProperty"},
            {"ScenarioVolumeClass", 0xC8, "SoftClassProperty"},
            {"StateTreeOverride", 0xE8, "SoftObjectProperty"},
            {"ProximityGameplayCueTag", 0x108, "StructProperty"},
            {"ActorCleanupGameplayCueTag", 0x10C, "StructProperty"},
            {"bUseOverlapTestForActorCollection", 0x110, "BoolProperty"},
            {"SuccessRewards", 0x118, "ArrayProperty"},
            {"ReactionsToGrantOnSuccess", 0x128, "ArrayProperty"},
            {"SuccessRewardBehavior", 0x138, "StructProperty"},
            {"ActorSuccessGameplayCueTag", 0x1B8, "StructProperty"},
            {"PlayerSuccessGameplayCueTag", 0x1BC, "StructProperty"},
            {"FailureRewards", 0x1C0, "ArrayProperty"},
            {"ReactionsToGrantOnFailure", 0x1D0, "ArrayProperty"},
            {"FailureRewardBehavior", 0x1E0, "StructProperty"},
            {"ActorFailureGameplayCueTag", 0x260, "StructProperty"},
            {"PlayerFailureGameplayCueTag", 0x264, "StructProperty"},
            {"LWMDensityWeight", 0x268, "StructProperty"},
            {"LWMDensityRange", 0x290, "StructProperty"},
            {"bUseGlobalLWMBudget", 0x2B8, "BoolProperty"},
            {"Vars", 0x2C0, "ArrayProperty"},
            {"VariableSelections", 0x2D0, "ArrayProperty"},
            {"VariableCollectionSelections", 0x2E0, "ArrayProperty"},
            {"CanSpawnWorldConditionDefinition", 0x2F0, "StructProperty"},
            {"WaveTable", 0x318, "SoftObjectProperty"},
            {"ActorSpawnerDatas", 0x338, "ArrayProperty"},
        }};
    };

    struct EncounterManagerComponent
    {
        static constexpr std::string_view Name = "EncounterManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterVolume = 0xC0;
            static constexpr std::uintptr_t EncounterDefinition = 0xC8;
            static constexpr std::uintptr_t CenterActorOverride = 0xD0;
            static constexpr std::uintptr_t PostEncounterLWMEvent = 0xD8;
            static constexpr std::uintptr_t PostEncounterLWMCategory = 0xE8;
            static constexpr std::uintptr_t PostEncounterTagQuery = 0xF8;
            static constexpr std::uintptr_t ExplicitContributors = 0x140;
            static constexpr std::uintptr_t ActorIdentifiers = 0x150;
            static constexpr std::uintptr_t bHasHandledSuccessFailure = 0x160;
            static constexpr std::uintptr_t EncounterInfos = 0x168;
            static constexpr std::uintptr_t GameplayEffectInfos = 0x178;
            static constexpr std::uintptr_t EncounterPrefab = 0x188;
            static constexpr std::uintptr_t SelectedFaction = 0x190;
            static constexpr std::uintptr_t LWMEncounterTable = 0x198;
            static constexpr std::uintptr_t LastThreat = 0x220;
            static constexpr std::uintptr_t ReservoirActor = 0x228;
            static constexpr std::uintptr_t TrackedActorInfos = 0x230;
            static constexpr std::uintptr_t LoadedObjects = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EncounterVolume", 0xC0, "WeakObjectProperty"},
            {"EncounterDefinition", 0xC8, "ObjectProperty"},
            {"CenterActorOverride", 0xD0, "WeakObjectProperty"},
            {"PostEncounterLWMEvent", 0xD8, "StructProperty"},
            {"PostEncounterLWMCategory", 0xE8, "StructProperty"},
            {"PostEncounterTagQuery", 0xF8, "StructProperty"},
            {"ExplicitContributors", 0x140, "SetProperty"},
            {"ActorIdentifiers", 0x150, "ArrayProperty"},
            {"bHasHandledSuccessFailure", 0x160, "BoolProperty"},
            {"EncounterInfos", 0x168, "ArrayProperty"},
            {"GameplayEffectInfos", 0x178, "ArrayProperty"},
            {"EncounterPrefab", 0x188, "WeakObjectProperty"},
            {"SelectedFaction", 0x190, "ObjectProperty"},
            {"LWMEncounterTable", 0x198, "ObjectProperty"},
            {"LastThreat", 0x220, "WeakObjectProperty"},
            {"ReservoirActor", 0x228, "WeakObjectProperty"},
            {"TrackedActorInfos", 0x230, "ArrayProperty"},
            {"LoadedObjects", 0x270, "ArrayProperty"},
        }};
    };

    struct EncounterMarkupInterface
    {
        static constexpr std::string_view Name = "EncounterMarkupInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EncounterMobAnchor
    {
        static constexpr std::string_view Name = "EncounterMobAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupRadius = 0x280;
            static constexpr std::uintptr_t DefaultSceneRoot = 0x2A8;
            static constexpr std::uintptr_t SphereCollision = 0x2B0;
            static constexpr std::uintptr_t FilterTags = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MarkupRadius", 0x280, "StructProperty"},
            {"DefaultSceneRoot", 0x2A8, "ObjectProperty"},
            {"SphereCollision", 0x2B0, "ObjectProperty"},
            {"FilterTags", 0x2B8, "StructProperty"},
        }};
    };

    struct EncounterMobManagerComponent
    {
        static constexpr std::string_view Name = "EncounterMobManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedMobs = 0xC0;
            static constexpr std::uintptr_t MobEncounterSpawnData = 0xD0;
            static constexpr std::uintptr_t DefaultMobSpawnInfo = 0xE0;
            static constexpr std::uintptr_t LWMDensityWeight = 0x180;
            static constexpr std::uintptr_t LWMDensityRange = 0x1A8;
            static constexpr std::uintptr_t OnEncounterStarted = 0x1D0;
            static constexpr std::uintptr_t OnEncounterPaused = 0x1E0;
            static constexpr std::uintptr_t OnEncounterResumed = 0x1F0;
            static constexpr std::uintptr_t OnEncounterActorSpawned = 0x200;
            static constexpr std::uintptr_t OnEncounterActorDead = 0x210;
            static constexpr std::uintptr_t OnEncounterEnded = 0x220;
            static constexpr std::uintptr_t EncounterPrefab = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SpawnedMobs", 0xC0, "ArrayProperty"},
            {"MobEncounterSpawnData", 0xD0, "ArrayProperty"},
            {"DefaultMobSpawnInfo", 0xE0, "StructProperty"},
            {"LWMDensityWeight", 0x180, "StructProperty"},
            {"LWMDensityRange", 0x1A8, "StructProperty"},
            {"OnEncounterStarted", 0x1D0, "MulticastInlineDelegateProperty"},
            {"OnEncounterPaused", 0x1E0, "MulticastInlineDelegateProperty"},
            {"OnEncounterResumed", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnEncounterActorSpawned", 0x200, "MulticastInlineDelegateProperty"},
            {"OnEncounterActorDead", 0x210, "MulticastInlineDelegateProperty"},
            {"OnEncounterEnded", 0x220, "MulticastInlineDelegateProperty"},
            {"EncounterPrefab", 0x230, "WeakObjectProperty"},
        }};
    };

    struct EncounterPatrolPathPointProvider
    {
        static constexpr std::string_view Name = "EncounterPatrolPathPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaPatrolPathPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupRadius = 0x390;
            static constexpr std::uintptr_t SphereCollision = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MarkupRadius", 0x390, "StructProperty"},
            {"SphereCollision", 0x3B8, "ObjectProperty"},
        }};
    };

    struct EncounterPointProviderInterface
    {
        static constexpr std::string_view Name = "EncounterPointProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EncounterStateTreeComponent
    {
        static constexpr std::string_view Name = "EncounterStateTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x138;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x160;
            static constexpr std::uintptr_t InstanceData = 0x170;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x138, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x160, "StructProperty"},
            {"InstanceData", 0x170, "StructProperty"},
            {"bStartLogicAutomatically", 0x180, "BoolProperty"},
        }};
    };

    struct EncounterStaticPointProvider
    {
        static constexpr std::string_view Name = "EncounterStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupRadius = 0x3B8;
            static constexpr std::uintptr_t SphereCollision = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MarkupRadius", 0x3B8, "StructProperty"},
            {"SphereCollision", 0x3E0, "ObjectProperty"},
        }};
    };

    struct EncounterVolumePointProvider
    {
        static constexpr std::string_view Name = "EncounterVolumePointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupRadius = 0x578;
            static constexpr std::uintptr_t SphereCollision = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MarkupRadius", 0x578, "StructProperty"},
            {"SphereCollision", 0x5A0, "ObjectProperty"},
        }};
    };

    struct EncounterWorldConditionSchema
    {
        static constexpr std::string_view Name = "EncounterWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortCheatManager_Encounters
    {
        static constexpr std::string_view Name = "FortCheatManager_Encounters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVerbProcessor_EncounterCompleted
    {
        static constexpr std::string_view Name = "FortVerbProcessor_EncounterCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortVerbProcessor_EncounterLoading
    {
        static constexpr std::string_view Name = "FortVerbProcessor_EncounterLoading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct LWMEncounterInstance
    {
        static constexpr std::string_view Name = "LWMEncounterInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LWMInstance = 0x28;
            static constexpr std::uintptr_t SpawnedMobPawns = 0x30;
            static constexpr std::uintptr_t SpawnedActors = 0x40;
            static constexpr std::uintptr_t SavedTargetActors = 0x50;
            static constexpr std::uintptr_t SavedFactionMods = 0x60;
            static constexpr std::uintptr_t EncounterAnchorPoint = 0x88;
            static constexpr std::uintptr_t OwningVolume = 0x90;
            static constexpr std::uintptr_t ActivePointProviderInterfaces = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LWMInstance", 0x28, "WeakObjectProperty"},
            {"SpawnedMobPawns", 0x30, "ArrayProperty"},
            {"SpawnedActors", 0x40, "ArrayProperty"},
            {"SavedTargetActors", 0x50, "ArrayProperty"},
            {"SavedFactionMods", 0x60, "ArrayProperty"},
            {"EncounterAnchorPoint", 0x88, "WeakObjectProperty"},
            {"OwningVolume", 0x90, "WeakObjectProperty"},
            {"ActivePointProviderInterfaces", 0x98, "ArrayProperty"},
        }};
    };

    struct LivingWorldEncounterPrefab
    {
        static constexpr std::string_view Name = "LivingWorldEncounterPrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldPrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterEntries = 0xA20;
            static constexpr std::uintptr_t EncounterDefinition = 0xA30;
            static constexpr std::uintptr_t ReservoirActorOverride = 0xA58;
            static constexpr std::uintptr_t ParentScenarioPrefab = 0xA60;
            static constexpr std::uintptr_t EncounterManager = 0xA68;
            static constexpr std::uintptr_t SpawnedScenarioVolume = 0xA70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EncounterEntries", 0xA20, "ArrayProperty"},
            {"EncounterDefinition", 0xA30, "ObjectProperty"},
            {"ReservoirActorOverride", 0xA58, "WeakObjectProperty"},
            {"ParentScenarioPrefab", 0xA60, "WeakObjectProperty"},
            {"EncounterManager", 0xA68, "WeakObjectProperty"},
            {"SpawnedScenarioVolume", 0xA70, "ObjectProperty"},
        }};
    };

    struct SpawnActorTaskHelper
    {
        static constexpr std::string_view Name = "SpawnActorTaskHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SquadWaveTable
    {
        static constexpr std::string_view Name = "SquadWaveTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Waves = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Waves", 0x28, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayerCompanionRuntime
{
    struct CompanionBehaviorVolumeEditorComponent
    {
        static constexpr std::string_view Name = "CompanionBehaviorVolumeEditorComponent";
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

    struct CompanionVolumeComponent
    {
        static constexpr std::string_view Name = "CompanionVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeType = 0xC8;
            static constexpr std::uintptr_t BoxExtent = 0xD0;
            static constexpr std::uintptr_t SphereRadius = 0xE8;
            static constexpr std::uintptr_t bDrawDebug = 0xEC;
            static constexpr std::uintptr_t PickedShapeComponents = 0xF0;
            static constexpr std::uintptr_t Behavior = 0x100;
            static constexpr std::uintptr_t WaitingSpots = 0x108;
            static constexpr std::uintptr_t bProjectWaitingSpotsToGround = 0x118;
            static constexpr std::uintptr_t ProjectToGroundRange = 0x11C;
            static constexpr std::uintptr_t MoveToParameters = 0x120;
            static constexpr std::uintptr_t WaitingActors = 0x138;
            static constexpr std::uintptr_t ShapeComponents = 0x148;
            static constexpr std::uintptr_t ReservationOwners = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"VolumeType", 0xC8, "EnumProperty"},
            {"BoxExtent", 0xD0, "StructProperty"},
            {"SphereRadius", 0xE8, "FloatProperty"},
            {"bDrawDebug", 0xEC, "BoolProperty"},
            {"PickedShapeComponents", 0xF0, "ArrayProperty"},
            {"Behavior", 0x100, "EnumProperty"},
            {"WaitingSpots", 0x108, "ArrayProperty"},
            {"bProjectWaitingSpotsToGround", 0x118, "BoolProperty"},
            {"ProjectToGroundRange", 0x11C, "FloatProperty"},
            {"MoveToParameters", 0x120, "StructProperty"},
            {"WaitingActors", 0x138, "ArrayProperty"},
            {"ShapeComponents", 0x148, "ArrayProperty"},
            {"ReservationOwners", 0x158, "ArrayProperty"},
        }};
    };

    struct FortCheatManager_PlayerCompanion
    {
        static constexpr std::string_view Name = "FortCheatManager_PlayerCompanion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameFeatureAction_SetCompanionOptions
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SetCompanionOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCompanionClass = 0x28;
            static constexpr std::uintptr_t VisibilityOverride = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerCompanionClass", 0x28, "OptionalProperty"},
            {"VisibilityOverride", 0x50, "OptionalProperty"},
        }};
    };

    struct FortLODObjectInterface
    {
        static constexpr std::string_view Name = "FortLODObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLODSubsystem
    {
        static constexpr std::string_view Name = "FortLODSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerCompanion
    {
        static constexpr std::string_view Name = "FortPlayerCompanion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultNavigationFilter = 0x2D8;
            static constexpr std::uintptr_t LeaderMovementPredictionTime = 0x2E0;
            static constexpr std::uintptr_t LocationConfiguration = 0x2E8;
            static constexpr std::uintptr_t NormalMovementConfiguration = 0x3C8;
            static constexpr std::uintptr_t SparkMovementConfiguration = 0x418;
            static constexpr std::uintptr_t ClientSmoothingConfig = 0x468;
            static constexpr std::uintptr_t VerbReactionsTable = 0x4F0;
            static constexpr std::uintptr_t CombatMoodPersistenceAfterLastCombatEvent = 0x520;
            static constexpr std::uintptr_t LeaderIdleDetectionTimeToStartWandering = 0x528;
            static constexpr std::uintptr_t WanderMoodToBoredMoodTimeInterval = 0x530;
            static constexpr std::uintptr_t InteractionOverrideData = 0x538;
            static constexpr std::uintptr_t InteractionConfiguration = 0x540;
            static constexpr std::uintptr_t OverrideInteractAimRadius = 0x5F0;
            static constexpr std::uintptr_t InteractAimOffset = 0x5F8;
            static constexpr std::uintptr_t SecondaryInteractType = 0x610;
            static constexpr std::uintptr_t SecondaryInteractionHandheldItemTagQuery = 0x618;
            static constexpr std::uintptr_t RemoveInteractorHandheldCountDuringSecondaryInteraction = 0x660;
            static constexpr std::uintptr_t ForceSparkModeLeaderTags = 0x668;
            static constexpr std::uintptr_t ForceSparkModeLeaderTagRemovedDelay = 0x688;
            static constexpr std::uintptr_t InteractOffsetFromLeader = 0x690;
            static constexpr std::uintptr_t PlayerInteractAbility = 0x6A0;
            static constexpr std::uintptr_t CombatMoodExcludeWeaponsTagQuery = 0x6A8;
            static constexpr std::uintptr_t MaxReactionDelayAfterEvent = 0x6F0;
            static constexpr std::uintptr_t BaseReactionDelay = 0x6F4;
            static constexpr std::uintptr_t bUseSimplifiedInteractionForTouch = 0x6F8;
            static constexpr std::uintptr_t SurfaceSwimmingSparkLocalOffset = 0x700;
            static constexpr std::uintptr_t VehicleSparkLocalOffset = 0x718;
            static constexpr std::uintptr_t DisappearVFX = 0x730;
            static constexpr std::uintptr_t LoadedReactionTable = 0x738;
            static constexpr std::uintptr_t CachedCharacterMovementComponent = 0x740;
            static constexpr std::uintptr_t CurrentGoal = 0x748;
            static constexpr std::uintptr_t BehaviorSettings = 0x7A0;
            static constexpr std::uintptr_t BehaviorEvaluator = 0x7C8;
            static constexpr std::uintptr_t BodyState = 0x888;
            static constexpr std::uintptr_t RunningReaction = 0x894;
            static constexpr std::uintptr_t RunningReactionMontage = 0x8C8;
            static constexpr std::uintptr_t QueuedReaction = 0x8D0;
            static constexpr std::uintptr_t RunningInteraction = 0x8E8;
            static constexpr std::uintptr_t bHasInteractionRotationOverride = 0x8F4;
            static constexpr std::uintptr_t InteractionRotationOverride = 0x8F8;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x910;
            static constexpr std::uintptr_t CurrentMood = 0x918;
            static constexpr std::uintptr_t CachedSceneActorComponent = 0x91C;
            static constexpr std::uintptr_t CachedSparkNiagaraComponent = 0x928;
            static constexpr std::uintptr_t CachedInteractBoundsComponents = 0x930;
            static constexpr std::uintptr_t bServerIsStopping = 0x940;
            static constexpr std::uintptr_t bCompanionInteractionsEnabled = 0x941;
            static constexpr std::uintptr_t bAnticsEnabled = 0x942;
            static constexpr std::uintptr_t SparkLocalOffsetType = 0x943;
            static constexpr std::uintptr_t SparkLocalOffset = 0x948;
            static constexpr std::uintptr_t SparkWorldOffset = 0x960;
            static constexpr std::uintptr_t OnFortPlayerCompanionChangedRunningReactionDelegate = 0x978;
            static constexpr std::uintptr_t OnFortPlayerCompanionChangedBodyStateTypeDelegate = 0x988;
            static constexpr std::uintptr_t OnSparkLocalOffsetUpdatedDelegate = 0x9A8;
            static constexpr std::uintptr_t OnClientMovementModeChanged = 0x9B8;
            static constexpr std::uintptr_t InstigatorState = 0x9C8;
            static constexpr std::uintptr_t VerbReactionHandles = 0xC50;
            static constexpr std::uintptr_t Mesh = 0xD00;
            static constexpr std::uintptr_t DefaultTags = 0xD08;
            static constexpr std::uintptr_t CosmeticComponent = 0xD28;
            static constexpr std::uintptr_t CosmeticDownloadCandidateComponent = 0xD30;
            static constexpr std::uintptr_t SlopeWarpingComponent = 0xD38;
            static constexpr std::uintptr_t bUsingCustomBehavior = 0xD40;
            static constexpr std::uintptr_t WeakBehaviorVolume = 0xD48;
        };

        inline static constexpr std::array<PropertyInfo, 64> Properties{{
            {"DefaultNavigationFilter", 0x2D8, "ClassProperty"},
            {"LeaderMovementPredictionTime", 0x2E0, "FloatProperty"},
            {"LocationConfiguration", 0x2E8, "StructProperty"},
            {"NormalMovementConfiguration", 0x3C8, "StructProperty"},
            {"SparkMovementConfiguration", 0x418, "StructProperty"},
            {"ClientSmoothingConfig", 0x468, "StructProperty"},
            {"VerbReactionsTable", 0x4F0, "StructProperty"},
            {"CombatMoodPersistenceAfterLastCombatEvent", 0x520, "StructProperty"},
            {"LeaderIdleDetectionTimeToStartWandering", 0x528, "StructProperty"},
            {"WanderMoodToBoredMoodTimeInterval", 0x530, "StructProperty"},
            {"InteractionOverrideData", 0x538, "ObjectProperty"},
            {"InteractionConfiguration", 0x540, "StructProperty"},
            {"OverrideInteractAimRadius", 0x5F0, "FloatProperty"},
            {"InteractAimOffset", 0x5F8, "StructProperty"},
            {"SecondaryInteractType", 0x610, "EnumProperty"},
            {"SecondaryInteractionHandheldItemTagQuery", 0x618, "StructProperty"},
            {"RemoveInteractorHandheldCountDuringSecondaryInteraction", 0x660, "IntProperty"},
            {"ForceSparkModeLeaderTags", 0x668, "StructProperty"},
            {"ForceSparkModeLeaderTagRemovedDelay", 0x688, "FloatProperty"},
            {"InteractOffsetFromLeader", 0x690, "StructProperty"},
            {"PlayerInteractAbility", 0x6A0, "ClassProperty"},
            {"CombatMoodExcludeWeaponsTagQuery", 0x6A8, "StructProperty"},
            {"MaxReactionDelayAfterEvent", 0x6F0, "FloatProperty"},
            {"BaseReactionDelay", 0x6F4, "FloatProperty"},
            {"bUseSimplifiedInteractionForTouch", 0x6F8, "BoolProperty"},
            {"SurfaceSwimmingSparkLocalOffset", 0x700, "StructProperty"},
            {"VehicleSparkLocalOffset", 0x718, "StructProperty"},
            {"DisappearVFX", 0x730, "ObjectProperty"},
            {"LoadedReactionTable", 0x738, "ObjectProperty"},
            {"CachedCharacterMovementComponent", 0x740, "ObjectProperty"},
            {"CurrentGoal", 0x748, "StructProperty"},
            {"BehaviorSettings", 0x7A0, "StructProperty"},
            {"BehaviorEvaluator", 0x7C8, "StructProperty"},
            {"BodyState", 0x888, "StructProperty"},
            {"RunningReaction", 0x894, "StructProperty"},
            {"RunningReactionMontage", 0x8C8, "ObjectProperty"},
            {"QueuedReaction", 0x8D0, "StructProperty"},
            {"RunningInteraction", 0x8E8, "StructProperty"},
            {"bHasInteractionRotationOverride", 0x8F4, "BoolProperty"},
            {"InteractionRotationOverride", 0x8F8, "StructProperty"},
            {"AbilitySystemComponent", 0x910, "ObjectProperty"},
            {"CurrentMood", 0x918, "EnumProperty"},
            {"CachedSceneActorComponent", 0x91C, "WeakObjectProperty"},
            {"CachedSparkNiagaraComponent", 0x928, "ObjectProperty"},
            {"CachedInteractBoundsComponents", 0x930, "ArrayProperty"},
            {"bServerIsStopping", 0x940, "BoolProperty"},
            {"bCompanionInteractionsEnabled", 0x941, "BoolProperty"},
            {"bAnticsEnabled", 0x942, "BoolProperty"},
            {"SparkLocalOffsetType", 0x943, "EnumProperty"},
            {"SparkLocalOffset", 0x948, "StructProperty"},
            {"SparkWorldOffset", 0x960, "StructProperty"},
            {"OnFortPlayerCompanionChangedRunningReactionDelegate", 0x978, "MulticastInlineDelegateProperty"},
            {"OnFortPlayerCompanionChangedBodyStateTypeDelegate", 0x988, "MulticastInlineDelegateProperty"},
            {"OnSparkLocalOffsetUpdatedDelegate", 0x9A8, "MulticastInlineDelegateProperty"},
            {"OnClientMovementModeChanged", 0x9B8, "MulticastInlineDelegateProperty"},
            {"InstigatorState", 0x9C8, "StructProperty"},
            {"VerbReactionHandles", 0xC50, "ArrayProperty"},
            {"Mesh", 0xD00, "ObjectProperty"},
            {"DefaultTags", 0xD08, "StructProperty"},
            {"CosmeticComponent", 0xD28, "ObjectProperty"},
            {"CosmeticDownloadCandidateComponent", 0xD30, "ObjectProperty"},
            {"SlopeWarpingComponent", 0xD38, "ObjectProperty"},
            {"bUsingCustomBehavior", 0xD40, "BoolProperty"},
            {"WeakBehaviorVolume", 0xD48, "InterfaceProperty"},
        }};
    };

    struct FortPlayerCompanionBehaviorInterface
    {
        static constexpr std::string_view Name = "FortPlayerCompanionBehaviorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerCompanionBehaviorVolume
    {
        static constexpr std::string_view Name = "FortPlayerCompanionBehaviorVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t Behavior = 0x2B8;
            static constexpr std::uintptr_t CompanionWaitingSpots = 0x2C0;
            static constexpr std::uintptr_t MoveToParameters = 0x2D0;
            static constexpr std::uintptr_t MoodOnWaitingSpots = 0x2E4;
            static constexpr std::uintptr_t ReservationOwners = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Behavior", 0x2B8, "EnumProperty"},
            {"CompanionWaitingSpots", 0x2C0, "ArrayProperty"},
            {"MoveToParameters", 0x2D0, "StructProperty"},
            {"MoodOnWaitingSpots", 0x2E4, "EnumProperty"},
            {"ReservationOwners", 0x2E8, "ArrayProperty"},
        }};
    };

    struct FortPlayerCompanionComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCompanionClass = 0xD0;
            static constexpr std::uintptr_t InitialReplicationVisibility = 0xF0;
            static constexpr std::uintptr_t PlayerInteractingWithCompanionTag = 0xF4;
            static constexpr std::uintptr_t PropagateCombatMoodOnDamagedRange = 0xF8;
            static constexpr std::uintptr_t PropagateCombatMoodOnDidDamageRange = 0xFC;
            static constexpr std::uintptr_t CheatBehaviorSettings = 0x100;
            static constexpr std::uintptr_t PlayerCompanion = 0x128;
            static constexpr std::uintptr_t CompanionSubsystem = 0x130;
            static constexpr std::uintptr_t OwnerPlayerState = 0x138;
            static constexpr std::uintptr_t OwnerPlayerController = 0x140;
            static constexpr std::uintptr_t RunningInteraction = 0x148;
            static constexpr std::uintptr_t CompanionBehaviorInterfaces = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PlayerCompanionClass", 0xD0, "SoftClassProperty"},
            {"InitialReplicationVisibility", 0xF0, "EnumProperty"},
            {"PlayerInteractingWithCompanionTag", 0xF4, "StructProperty"},
            {"PropagateCombatMoodOnDamagedRange", 0xF8, "FloatProperty"},
            {"PropagateCombatMoodOnDidDamageRange", 0xFC, "FloatProperty"},
            {"CheatBehaviorSettings", 0x100, "StructProperty"},
            {"PlayerCompanion", 0x128, "ObjectProperty"},
            {"CompanionSubsystem", 0x130, "ObjectProperty"},
            {"OwnerPlayerState", 0x138, "ObjectProperty"},
            {"OwnerPlayerController", 0x140, "ObjectProperty"},
            {"RunningInteraction", 0x148, "StructProperty"},
            {"CompanionBehaviorInterfaces", 0x158, "ArrayProperty"},
        }};
    };

    struct FortPlayerCompanionComponent_Verse
    {
        static constexpr std::string_view Name = "FortPlayerCompanionComponent_Verse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CompanionPrefab = 0xC8;
            static constexpr std::uintptr_t ReactionTags = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CompanionPrefab", 0xC8, "SoftClassProperty"},
            {"ReactionTags", 0xF8, "MapProperty"},
        }};
    };

    struct FortPlayerCompanionContextualAnimSceneActorComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionContextualAnimSceneActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualAnimSceneActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInteractingWithCompanionTag = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerInteractingWithCompanionTag", 0x520, "StructProperty"},
        }};
    };

    struct FortPlayerCompanionFootstepFXComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionFootstepFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticComponent = 0xC8;
            static constexpr std::uintptr_t CompanionMovementInterface = 0xD0;
            static constexpr std::uintptr_t FootstepNiagaraParamName = 0xE0;
            static constexpr std::uintptr_t NiagaraCompanionFootstepFXComp = 0xE8;
            static constexpr std::uintptr_t WalkFootstepFX = 0xF0;
            static constexpr std::uintptr_t RunFootstepFX = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CosmeticComponent", 0xC8, "ObjectProperty"},
            {"CompanionMovementInterface", 0xD0, "InterfaceProperty"},
            {"FootstepNiagaraParamName", 0xE0, "NameProperty"},
            {"NiagaraCompanionFootstepFXComp", 0xE8, "ObjectProperty"},
            {"WalkFootstepFX", 0xF0, "ObjectProperty"},
            {"RunFootstepFX", 0xF8, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionGridFilter
    {
        static constexpr std::string_view Name = "FortPlayerCompanionGridFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridWorldLocFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationSystem = 0x180;
            static constexpr std::uintptr_t Config = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicationSystem", 0x180, "ObjectProperty"},
            {"Config", 0x188, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionGridFilterConfig
    {
        static constexpr std::string_view Name = "FortPlayerCompanionGridFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridFilterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewPosRelevancyFrameCount = 0x28;
            static constexpr std::uintptr_t DefaultFrameCountBeforeCulling = 0x2C;
            static constexpr std::uintptr_t CellSizeX = 0x30;
            static constexpr std::uintptr_t CellSizeY = 0x34;
            static constexpr std::uintptr_t DefaultCullDistance = 0x38;
            static constexpr std::uintptr_t bUseExactCullDistance = 0x3C;
            static constexpr std::uintptr_t bDefaultUse2DCullDistance = 0x3D;
            static constexpr std::uintptr_t FilterProfiles = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ViewPosRelevancyFrameCount", 0x28, "UInt32Property"},
            {"DefaultFrameCountBeforeCulling", 0x2C, "UInt16Property"},
            {"CellSizeX", 0x30, "FloatProperty"},
            {"CellSizeY", 0x34, "FloatProperty"},
            {"DefaultCullDistance", 0x38, "FloatProperty"},
            {"bUseExactCullDistance", 0x3C, "BoolProperty"},
            {"bDefaultUse2DCullDistance", 0x3D, "BoolProperty"},
            {"FilterProfiles", 0x40, "ArrayProperty"},
        }};
    };

    struct FortPlayerCompanionSnapToPlayerComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionSnapToPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveToParameters = 0xC8;
            static constexpr std::uintptr_t ForwardOffset = 0xDC;
            static constexpr std::uintptr_t SidewaysOffset = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveToParameters", 0xC8, "StructProperty"},
            {"ForwardOffset", 0xDC, "FloatProperty"},
            {"SidewaysOffset", 0xE0, "FloatProperty"},
        }};
    };

    struct FortPlayerCompanionSubsystem
    {
        static constexpr std::string_view Name = "FortPlayerCompanionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CompanionComponents = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompanionComponents", 0x30, "ArrayProperty"},
        }};
    };

    struct FortQueryContext_CompanionLeader
    {
        static constexpr std::string_view Name = "FortQueryContext_CompanionLeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_CompanionLeaderMovementDirection
    {
        static constexpr std::string_view Name = "FortQueryContext_CompanionLeaderMovementDirection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_CompanionLeaderPredictedPosition
    {
        static constexpr std::string_view Name = "FortQueryContext_CompanionLeaderPredictedPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_CompanionLeaderViewRotation
    {
        static constexpr std::string_view Name = "FortQueryContext_CompanionLeaderViewRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t bYawOnly = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bYawOnly", 0x28, "BoolProperty"},
        }};
    };

    struct FortQueryTest_CompanionBodyState
    {
        static constexpr std::string_view Name = "FortQueryTest_CompanionBodyState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bAcceptNormalBodyState = 0x1F8;
            static constexpr std::uintptr_t bAcceptNavigationSparkBodyState = 0x1F9;
            static constexpr std::uintptr_t bAcceptForcedSparkBodyState = 0x1FA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAcceptNormalBodyState", 0x1F8, "BoolProperty"},
            {"bAcceptNavigationSparkBodyState", 0x1F9, "BoolProperty"},
            {"bAcceptForcedSparkBodyState", 0x1FA, "BoolProperty"},
        }};
    };

    struct SparkModeInterface
    {
        static constexpr std::string_view Name = "SparkModeInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

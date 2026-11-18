#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarCore
{
    struct FortDelMarActorMover
    {
        static constexpr std::string_view Name = "FortDelMarActorMover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0xB58;
            static constexpr std::uintptr_t MovementSpline = 0xB60;
            static constexpr std::uintptr_t MovementType = 0xB68;
            static constexpr std::uintptr_t ManagedActor = 0xB70;
            static constexpr std::uintptr_t SplineMovementComponent = 0xB78;
            static constexpr std::uintptr_t ServerMovementStartTime = 0xB88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ActorClass", 0xB58, "ClassProperty"},
            {"MovementSpline", 0xB60, "ObjectProperty"},
            {"MovementType", 0xB68, "EnumProperty"},
            {"ManagedActor", 0xB70, "ObjectProperty"},
            {"SplineMovementComponent", 0xB78, "ObjectProperty"},
            {"ServerMovementStartTime", 0xB88, "FloatProperty"},
        }};
    };

    struct FortDelMarAsyncPhysicsTickMutator
    {
        static constexpr std::string_view Name = "FortDelMarAsyncPhysicsTickMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncTickRate = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AsyncTickRate", 0x2F0, "FloatProperty"},
        }};
    };

    struct FortDelMarAudioComponentGroup
    {
        static constexpr std::string_view Name = "FortDelMarAudioComponentGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioComponentGroup";
        struct Offsets
        {
            static constexpr std::uintptr_t MixModifierExtension = 0x330;
            static constexpr std::uintptr_t SubmixSendExtension = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MixModifierExtension", 0x330, "ObjectProperty"},
            {"SubmixSendExtension", 0x338, "ObjectProperty"},
        }};
    };

    struct FortDelMarAudioController
    {
        static constexpr std::string_view Name = "FortDelMarAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleAudioController";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBigAirStarted = 0x3E0;
            static constexpr std::uintptr_t OnBigAirStopped = 0x3F0;
            static constexpr std::uintptr_t ComponentGroup = 0x400;
            static constexpr std::uintptr_t bIsLocal = 0x408;
            static constexpr std::uintptr_t FinishLineDistanceThreshold = 0x40C;
            static constexpr std::uintptr_t ApproachingFinishLineMinTime = 0x410;
            static constexpr std::uintptr_t BigAirLandingDistanceThreshold = 0x414;
            static constexpr std::uintptr_t BigAirTimeThreshold = 0x418;
            static constexpr std::uintptr_t BigAirDownSpeedThreshold = 0x41C;
            static constexpr std::uintptr_t NonLocalVelocityInterpSpeed = 0x420;
            static constexpr std::uintptr_t MaxAcceleration = 0x424;
            static constexpr std::uintptr_t bInBigAir = 0x428;
            static constexpr std::uintptr_t CachedVehicle = 0x430;
            static constexpr std::uintptr_t bCanShift = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnBigAirStarted", 0x3E0, "MulticastInlineDelegateProperty"},
            {"OnBigAirStopped", 0x3F0, "MulticastInlineDelegateProperty"},
            {"ComponentGroup", 0x400, "ObjectProperty"},
            {"bIsLocal", 0x408, "BoolProperty"},
            {"FinishLineDistanceThreshold", 0x40C, "FloatProperty"},
            {"ApproachingFinishLineMinTime", 0x410, "FloatProperty"},
            {"BigAirLandingDistanceThreshold", 0x414, "FloatProperty"},
            {"BigAirTimeThreshold", 0x418, "FloatProperty"},
            {"BigAirDownSpeedThreshold", 0x41C, "FloatProperty"},
            {"NonLocalVelocityInterpSpeed", 0x420, "FloatProperty"},
            {"MaxAcceleration", 0x424, "FloatProperty"},
            {"bInBigAir", 0x428, "BoolProperty"},
            {"CachedVehicle", 0x430, "ObjectProperty"},
            {"bCanShift", 0x440, "BoolProperty"},
        }};
    };

    struct FortDelMarAudioMixModifierExtension
    {
        static constexpr std::string_view Name = "FortDelMarAudioMixModifierExtension";
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

    struct FortDelMarAudioReverbComponent
    {
        static constexpr std::string_view Name = "FortDelMarAudioReverbComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReverbSend = 0xC0;
            static constexpr std::uintptr_t EarlyReflectionSend = 0xC8;
            static constexpr std::uintptr_t EnclosureReverbBlendCurve = 0xD0;
            static constexpr std::uintptr_t WallDistanceBlendCurve = 0x118;
            static constexpr std::uintptr_t EnclosureSendLevelCurve = 0x160;
            static constexpr std::uintptr_t WallDistanceSendLevelCurve = 0x1A8;
            static constexpr std::uintptr_t NumPoints = 0x1F0;
            static constexpr std::uintptr_t TraceRadius = 0x1F4;
            static constexpr std::uintptr_t TraceOrigin = 0x1F8;
            static constexpr std::uintptr_t NumTracesPerFrame = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ReverbSend", 0xC0, "ObjectProperty"},
            {"EarlyReflectionSend", 0xC8, "ObjectProperty"},
            {"EnclosureReverbBlendCurve", 0xD0, "StructProperty"},
            {"WallDistanceBlendCurve", 0x118, "StructProperty"},
            {"EnclosureSendLevelCurve", 0x160, "StructProperty"},
            {"WallDistanceSendLevelCurve", 0x1A8, "StructProperty"},
            {"NumPoints", 0x1F0, "IntProperty"},
            {"TraceRadius", 0x1F4, "FloatProperty"},
            {"TraceOrigin", 0x1F8, "StructProperty"},
            {"NumTracesPerFrame", 0x210, "IntProperty"},
        }};
    };

    struct FortDelMarBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortDelMarBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarCameraInputControllerComponent
    {
        static constexpr std::string_view Name = "FortDelMarCameraInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TurnCameraAction = 0xC0;
            static constexpr std::uintptr_t LookUpCameraAction = 0xD0;
            static constexpr std::uintptr_t ReverseCameraAction = 0xE0;
            static constexpr std::uintptr_t InputManagerClass = 0xF0;
            static constexpr std::uintptr_t InputComponent = 0xF8;
            static constexpr std::uintptr_t FortSettings = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TurnCameraAction", 0xC0, "StructProperty"},
            {"LookUpCameraAction", 0xD0, "StructProperty"},
            {"ReverseCameraAction", 0xE0, "StructProperty"},
            {"InputManagerClass", 0xF0, "ClassProperty"},
            {"InputComponent", 0xF8, "WeakObjectProperty"},
            {"FortSettings", 0x100, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarConsoleVariableMutator
    {
        static constexpr std::string_view Name = "FortDelMarConsoleVariableMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x2F0;
            static constexpr std::uintptr_t Value = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableName", 0x2F0, "StrProperty"},
            {"Value", 0x300, "StrProperty"},
        }};
    };

    struct FortDelMarContextualHintComponent
    {
        static constexpr std::string_view Name = "FortDelMarContextualHintComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HazardHitHint = 0xC0;
            static constexpr std::uintptr_t DemolishedByHints = 0x108;
            static constexpr std::uintptr_t SlowerTerrainHint = 0x118;
            static constexpr std::uintptr_t CachedPlayerController = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HazardHitHint", 0xC0, "StructProperty"},
            {"DemolishedByHints", 0x108, "MapProperty"},
            {"SlowerTerrainHint", 0x118, "StructProperty"},
            {"CachedPlayerController", 0x160, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarDoubleTapInputTrigger
    {
        static constexpr std::string_view Name = "FortDelMarDoubleTapInputTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t Delay = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Delay", 0x50, "FloatProperty"},
        }};
    };

    struct FortDelMarDriveParticlesPhysMatAttribute
    {
        static constexpr std::string_view Name = "FortDelMarDriveParticlesPhysMatAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPhysMatAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t DriveParticles = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DriveParticles", 0x28, "ObjectProperty"},
        }};
    };

    struct FortDelMarEnvironmentEffectCueNotify_Actor
    {
        static constexpr std::string_view Name = "FortDelMarEnvironmentEffectCueNotify_Actor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Effects = 0x2C8;
            static constexpr std::uintptr_t bShowOnAllClients = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Effects", 0x2C8, "StructProperty"},
            {"bShowOnAllClients", 0x2E0, "BoolProperty"},
        }};
    };

    struct FortDelMarEnvironmentEffectsVolume
    {
        static constexpr std::string_view Name = "FortDelMarEnvironmentEffectsVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AppliedEffect = 0x278;
            static constexpr std::uintptr_t BoxCollider = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AppliedEffect", 0x278, "ClassProperty"},
            {"BoxCollider", 0x280, "ObjectProperty"},
        }};
    };

    struct FortDelMarEvent_AttachmentChanged
    {
        static constexpr std::string_view Name = "FortDelMarEvent_AttachmentChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAttachedTo = 0x28;
            static constexpr std::uintptr_t PrevPlayerAttachedTo = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerAttachedTo", 0x28, "WeakObjectProperty"},
            {"PrevPlayerAttachedTo", 0x30, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarEvent_FinalFirstPlaceChanged
    {
        static constexpr std::string_view Name = "FortDelMarEvent_FinalFirstPlaceChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NewFirstPlace = 0x28;
            static constexpr std::uintptr_t PrevFirstPlace = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NewFirstPlace", 0x28, "WeakObjectProperty"},
            {"PrevFirstPlace", 0x30, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarEvent_GlobalLeaderboardActive
    {
        static constexpr std::string_view Name = "FortDelMarEvent_GlobalLeaderboardActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaderboardEventId = 0x28;
            static constexpr std::uintptr_t LeaderboardWindowId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LeaderboardEventId", 0x28, "StrProperty"},
            {"LeaderboardWindowId", 0x38, "StrProperty"},
        }};
    };

    struct FortDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "FortDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "FortDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved
    {
        static constexpr std::string_view Name = "FortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PersonalBest = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersonalBest", 0x28, "StructProperty"},
        }};
    };

    struct FortDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "FortDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarEvent_PlayerFinishRace
    {
        static constexpr std::string_view Name = "FortDelMarEvent_PlayerFinishRace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RunTime = 0x28;
            static constexpr std::uintptr_t bValidRun = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RunTime", 0x28, "DoubleProperty"},
            {"bValidRun", 0x30, "BoolProperty"},
        }};
    };

    struct FortDelMarEvent_PlayerInVehicle
    {
        static constexpr std::string_view Name = "FortDelMarEvent_PlayerInVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0x28;
            static constexpr std::uintptr_t SeatIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Vehicle", 0x28, "WeakObjectProperty"},
            {"SeatIndex", 0x30, "IntProperty"},
        }};
    };

    struct FortDelMarEvent_PlayerPointsChanged
    {
        static constexpr std::string_view Name = "FortDelMarEvent_PlayerPointsChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousPoints = 0x28;
            static constexpr std::uintptr_t CurrentPoints = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousPoints", 0x28, "IntProperty"},
            {"CurrentPoints", 0x2C, "IntProperty"},
        }};
    };

    struct FortDelMarEvent_VehicleDemolish
    {
        static constexpr std::string_view Name = "FortDelMarEvent_VehicleDemolish";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DemolishReason = 0x28;
            static constexpr std::uintptr_t Vehicle = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DemolishReason", 0x28, "StructProperty"},
            {"Vehicle", 0x2C, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarGameUserSettings
    {
        static constexpr std::string_view Name = "FortDelMarGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NuxLastViewedVideoVersion = 0x28;
            static constexpr std::uintptr_t bNuxHasPromptedToPlayTutorial = 0x2C;
            static constexpr std::uintptr_t bHasPromptedToPlaySpeedRun = 0x2D;
            static constexpr std::uintptr_t bNuxHasShownDefaultMode = 0x2E;
            static constexpr std::uintptr_t LastPlayedFortDelMarMnemonic = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NuxLastViewedVideoVersion", 0x28, "IntProperty"},
            {"bNuxHasPromptedToPlayTutorial", 0x2C, "BoolProperty"},
            {"bHasPromptedToPlaySpeedRun", 0x2D, "BoolProperty"},
            {"bNuxHasShownDefaultMode", 0x2E, "BoolProperty"},
            {"LastPlayedFortDelMarMnemonic", 0x30, "StrProperty"},
        }};
    };

    struct FortDelMarGameplayModifier
    {
        static constexpr std::string_view Name = "FortDelMarGameplayModifier";
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

    struct FortDelMarGameplayModifier_AttachmentManager
    {
        static constexpr std::string_view Name = "FortDelMarGameplayModifier_AttachmentManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarGameplayModifier";
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

    struct FortDelMarGameplayModifier_CVarOverride
    {
        static constexpr std::string_view Name = "FortDelMarGameplayModifier_CVarOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarGameplayModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x278;
            static constexpr std::uintptr_t Value = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableName", 0x278, "StrProperty"},
            {"Value", 0x288, "StrProperty"},
        }};
    };

    struct FortDelMarGameplayModifier_FriendlyFire
    {
        static constexpr std::string_view Name = "FortDelMarGameplayModifier_FriendlyFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarGameplayModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendlyFireType = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendlyFireType", 0x278, "EnumProperty"},
        }};
    };

    struct FortDelMarGhostPlaybackSessionComponent
    {
        static constexpr std::string_view Name = "FortDelMarGhostPlaybackSessionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarGhostSessionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportSetting = 0xF0;
            static constexpr std::uintptr_t PlaybackActorClass = 0xF8;
            static constexpr std::uintptr_t CurrentFrame = 0x100;
            static constexpr std::uintptr_t PlaybackLog = 0x108;
            static constexpr std::uintptr_t PlaybackActor = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TeleportSetting", 0xF0, "EnumProperty"},
            {"PlaybackActorClass", 0xF8, "ClassProperty"},
            {"CurrentFrame", 0x100, "IntProperty"},
            {"PlaybackLog", 0x108, "ObjectProperty"},
            {"PlaybackActor", 0x110, "ObjectProperty"},
        }};
    };

    struct FortDelMarGhostPlaybackTrigger
    {
        static constexpr std::string_view Name = "FortDelMarGhostPlaybackTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewFrame = 0x278;
            static constexpr std::uintptr_t StartFrame = 0x27C;
            static constexpr std::uintptr_t EndFrame = 0x280;
            static constexpr std::uintptr_t MaxFrame = 0x284;
            static constexpr std::uintptr_t PlaybackLog = 0x288;
            static constexpr std::uintptr_t BoxCollider = 0x290;
            static constexpr std::uintptr_t PlaybackSessionClassOverride = 0x298;
            static constexpr std::uintptr_t PlaybackSession = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewFrame", 0x278, "IntProperty"},
            {"StartFrame", 0x27C, "IntProperty"},
            {"EndFrame", 0x280, "IntProperty"},
            {"MaxFrame", 0x284, "IntProperty"},
            {"PlaybackLog", 0x288, "ObjectProperty"},
            {"BoxCollider", 0x290, "ObjectProperty"},
            {"PlaybackSessionClassOverride", 0x298, "ClassProperty"},
            {"PlaybackSession", 0x2A0, "ObjectProperty"},
        }};
    };

    struct FortDelMarGhostRecordingSessionComponent
    {
        static constexpr std::string_view Name = "FortDelMarGhostRecordingSessionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarGhostSessionComponent";
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

    struct FortDelMarGhostReplayLog
    {
        static constexpr std::string_view Name = "FortDelMarGhostReplayLog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Frames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Frames", 0x30, "ArrayProperty"},
        }};
    };

    struct FortDelMarGhostSessionComponent
    {
        static constexpr std::string_view Name = "FortDelMarGhostSessionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct FortDelMarGhostVehicle
    {
        static constexpr std::string_view Name = "FortDelMarGhostVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleContextTag = 0x5A0;
            static constexpr std::uintptr_t VehicleEventRouter = 0x5A8;
            static constexpr std::uintptr_t OnActorRecentlyHit = 0x5B0;
            static constexpr std::uintptr_t VehicleImpactDamageTag = 0x5C0;
            static constexpr std::uintptr_t NetPredictionProxy_AP = 0x5C8;
            static constexpr std::uintptr_t NetPredictionProxy_SP = 0x5E0;
            static constexpr std::uintptr_t OnScrapingSidesOrTopChangedDelegate = 0x5F8;
            static constexpr std::uintptr_t OnCurrentGearChangedDelegate = 0x608;
            static constexpr std::uintptr_t CustomOwnerName = 0x618;
            static constexpr std::uintptr_t DefaultOwnerName = 0x628;
            static constexpr std::uintptr_t CustomOwnerAccountId = 0x638;
            static constexpr std::uintptr_t CustomName = 0x668;
            static constexpr std::uintptr_t SoftOverrideItemWrap = 0x678;
            static constexpr std::uintptr_t OverrideItemWrap = 0x698;
            static constexpr std::uintptr_t OnSpringCompressionDelegate = 0x6A0;
            static constexpr std::uintptr_t PlayersBasedOnVehicle = 0x6B0;
            static constexpr std::uintptr_t OnSleepStateChangedDelegate = 0x6D8;
            static constexpr std::uintptr_t bUseDeprecatedSleepOnSpawn = 0x6E8;
            static constexpr std::uintptr_t WaterSurfaceDataCache = 0x6F0;
            static constexpr std::uintptr_t LastDamageInstigator = 0x768;
            static constexpr std::uintptr_t LastOutOfHealthInstigator = 0x770;
            static constexpr std::uintptr_t LastOutOfHealthDamageCauser = 0x778;
            static constexpr std::uintptr_t BoundsXYSplineComponent = 0x800;
            static constexpr std::uintptr_t SkeletalMesh = 0x830;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x844;
            static constexpr std::uintptr_t CustomDepthStencilValueForHighlightedVehicle = 0x848;
            static constexpr std::uintptr_t SquadId = 0x84C;
            static constexpr std::uintptr_t TeamId = 0x84D;
            static constexpr std::uintptr_t InitialOverlapBehavior = 0x84E;
            static constexpr std::uintptr_t bDisableUpdateAutoRun = 0x868;
            static constexpr std::uintptr_t bDisableUpdateForcedDebugInput = 0x868;
            static constexpr std::uintptr_t bDisableUpdateHonk = 0x868;
            static constexpr std::uintptr_t bDisableUpdateIgnoredBuildingActors = 0x868;
            static constexpr std::uintptr_t bDisableUpdateIngoredPawnsForDamage = 0x868;
            static constexpr std::uintptr_t bDisableUpdateSafeTeleport = 0x868;
            static constexpr std::uintptr_t bUseForceHeading = 0x868;
            static constexpr std::uintptr_t bDestroyBuildingSMActorOnForceExit = 0x869;
            static constexpr std::uintptr_t bDestroyOnLastExit = 0x869;
            static constexpr std::uintptr_t bIgnoreAllFallingDamage = 0x869;
            static constexpr std::uintptr_t bPlayDamageAudio = 0x869;
            static constexpr std::uintptr_t bShowDamageNumbers = 0x869;
            static constexpr std::uintptr_t bShowDamageNumbersAtImpactLocation = 0x869;
            static constexpr std::uintptr_t bShowDamageNumbersToTeam = 0x869;
            static constexpr std::uintptr_t bShowVehicleHealthBarOnPlayerHUD = 0x869;
            static constexpr std::uintptr_t bForceDeath = 0x86A;
            static constexpr std::uintptr_t bHasDriver = 0x86A;
            static constexpr std::uintptr_t bHasPassengers = 0x86A;
            static constexpr std::uintptr_t bIgnoreNextFallingDamage = 0x86A;
            static constexpr std::uintptr_t bIsBraking = 0x86A;
            static constexpr std::uintptr_t bPlayInstantDeathEffects = 0x86A;
            static constexpr std::uintptr_t bPlayedDying = 0x86A;
            static constexpr std::uintptr_t bShouldClearFallDamageImmunityForPawnsOnExit = 0x86A;
            static constexpr std::uintptr_t bCanCoastOnIncline = 0x86B;
            static constexpr std::uintptr_t bCanDriveOnIncline = 0x86B;
            static constexpr std::uintptr_t bCanSleepWhileNotTouchingAnything = 0x86B;
            static constexpr std::uintptr_t bIsFullyInWaterBody = 0x86B;
            static constexpr std::uintptr_t bIsInWater = 0x86B;
            static constexpr std::uintptr_t bIsInWaterBody = 0x86B;
            static constexpr std::uintptr_t bIsOverlappingWaterBody = 0x86B;
            static constexpr std::uintptr_t bIsTouchingAnything = 0x86B;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x86C;
            static constexpr std::uintptr_t bDisableCollisionAllowed = 0x86C;
            static constexpr std::uintptr_t bIsTouchingDrivableGround = 0x86C;
            static constexpr std::uintptr_t bIsTouchingGroundWithoutWheels = 0x86C;
            static constexpr std::uintptr_t bPossiblyTouchingTop = 0x86C;
            static constexpr std::uintptr_t bWheelsOnGround = 0x86C;
            static constexpr std::uintptr_t bUseGravity = 0x86F;
            static constexpr std::uintptr_t bAllowInteractBetweenFortVolumes = 0x870;
            static constexpr std::uintptr_t bCanPassengerPawnsTakeDamage = 0x870;
            static constexpr std::uintptr_t bCosmeticPhysicsInitializing = 0x870;
            static constexpr std::uintptr_t bCosmeticsFinished = 0x870;
            static constexpr std::uintptr_t bEnableCurieMaterial = 0x870;
            static constexpr std::uintptr_t bServerIsInUndergroundVolume = 0x870;
            static constexpr std::uintptr_t bEnforceMinigameClassRestriction = 0x871;
            static constexpr std::uintptr_t bEnforceTeamRestrictionForMiniGame = 0x871;
            static constexpr std::uintptr_t bAllowPassengerInteractions = 0x888;
            static constexpr std::uintptr_t bCachedSquadRestrictionEnabled = 0x888;
            static constexpr std::uintptr_t bEnforceTeamRestriction = 0x888;
            static constexpr std::uintptr_t bMoveStickAcceleratesVehicles = 0x888;
            static constexpr std::uintptr_t bStencilEnabled = 0x888;
            static constexpr std::uintptr_t bUseCustomDepthStencilValue = 0x888;
            static constexpr std::uintptr_t MinigameClassID = 0x8A8;
            static constexpr std::uintptr_t OnPawnEnteredVehicleAtSeat = 0x8B0;
            static constexpr std::uintptr_t OnPawnEnteredVehicleSeat = 0x8C0;
            static constexpr std::uintptr_t OnPawnExitedVehicleSeat = 0x8D0;
            static constexpr std::uintptr_t OnPawnExitedVehicleFromSeat = 0x8E0;
            static constexpr std::uintptr_t OnPawnFinishEnteringVehicle = 0x8F0;
            static constexpr std::uintptr_t OnVehicleHornEvent = 0x900;
            static constexpr std::uintptr_t OnVehicleOwnerChanged = 0x910;
            static constexpr std::uintptr_t OnVehicleSignificanceRecentlyRenderedChanged = 0x920;
            static constexpr std::uintptr_t bAttemptAsyncOrientationCorrection = 0x948;
            static constexpr std::uintptr_t bIsAsyncCorrectingOrientation = 0x948;
            static constexpr std::uintptr_t bWaitingForSleep = 0x948;
            static constexpr std::uintptr_t bAllowInteractBetweenFortVolumes_Runtime = 0x949;
            static constexpr std::uintptr_t bAlwaysCreateNavComponent = 0x949;
            static constexpr std::uintptr_t bTricksEnabled = 0x949;
            static constexpr std::uintptr_t FireDamageTickTimer = 0x950;
            static constexpr std::uintptr_t CurrentFOV = 0x954;
            static constexpr std::uintptr_t FireEnvDamageTags = 0x958;
            static constexpr std::uintptr_t PawnIgnoreBumpTags = 0x978;
            static constexpr std::uintptr_t DriverReticleBrush = 0x998;
            static constexpr std::uintptr_t AppliedVehicleModTags = 0x9A0;
            static constexpr std::uintptr_t CollectedVehicleModData = 0x9C0;
            static constexpr std::uintptr_t WaterEffectsVehicleMaxSpeedKmh = 0x9D0;
            static constexpr std::uintptr_t WaterEffectsAsset = 0x9D8;
            static constexpr std::uintptr_t WaterEffectsComponent = 0x9E0;
            static constexpr std::uintptr_t GameplayTags = 0x9F0;
            static constexpr std::uintptr_t PawnsToIgnoreForDamge = 0xA10;
            static constexpr std::uintptr_t PawnsToIgnoreForCollision = 0xA20;
            static constexpr std::uintptr_t IgnoredPawnsPendingTeleport = 0xA30;
            static constexpr std::uintptr_t LastPropImpactImpulseTime = 0xA40;
            static constexpr std::uintptr_t PredictedDestroyedBuildings = 0xA48;
            static constexpr std::uintptr_t WallsVehicleCanDestroy = 0xA58;
            static constexpr std::uintptr_t WallsVehicleCannotDestroyWhenBoosting = 0xA68;
            static constexpr std::uintptr_t BuildingPropClassesVehicleCanDestroy = 0xA78;
            static constexpr std::uintptr_t BuildingPropClassesVehicleCannotDestroyWhenBoosting = 0xA88;
            static constexpr std::uintptr_t SeatInputProviders = 0xA98;
            static constexpr std::uintptr_t EmptyDriverInputState = 0xAA8;
            static constexpr std::uintptr_t AverageSpringNormal = 0xAE8;
            static constexpr std::uintptr_t TopSpeedCurrentMultiplier = 0xB00;
            static constexpr std::uintptr_t PushForceCurrentMultiplier = 0xB04;
            static constexpr std::uintptr_t LastStickInput = 0xB08;
            static constexpr std::uintptr_t SteeringAngle = 0xB28;
            static constexpr std::uintptr_t CurrentGearIdx = 0xB48;
            static constexpr std::uintptr_t FrontLateralFrictionRuntimeMultiplier = 0xB50;
            static constexpr std::uintptr_t RearLateralFrictionRuntimeMultiplier = 0xB54;
            static constexpr std::uintptr_t LocalRearFrictionPt = 0xB58;
            static constexpr std::uintptr_t LocalFrontFrictionPt = 0xB70;
            static constexpr std::uintptr_t FrontMassRatio = 0xB88;
            static constexpr std::uintptr_t RearMassRatio = 0xB8C;
            static constexpr std::uintptr_t TimeBetweenLandscapeDamageEvents = 0xB90;
            static constexpr std::uintptr_t TotalBrakingDelta = 0xBB8;
            static constexpr std::uintptr_t PrimarySurfaceType = 0xC25;
            static constexpr std::uintptr_t WeaponResponseType = 0xC26;
            static constexpr std::uintptr_t VTDMode = 0xC27;
            static constexpr std::uintptr_t SurfaceTypeVehicleOn = 0xC2B;
            static constexpr std::uintptr_t ForcedMaterialVariantIndex = 0xC40;
            static constexpr std::uintptr_t FuelCharge = 0xC48;
            static constexpr std::uintptr_t OnRechargeableFuelAboveThreshold = 0xD20;
            static constexpr std::uintptr_t OnRechargeableFuelBelowThreshold = 0xD30;
            static constexpr std::uintptr_t OnOutOfRechargeableFuel = 0xD40;
            static constexpr std::uintptr_t OnNotOutOfRechargeableFuel = 0xD50;
            static constexpr std::uintptr_t OnMountedWeaponFiredEvent = 0xD60;
            static constexpr std::uintptr_t SeatSwitchCooldown = 0xD74;
            static constexpr std::uintptr_t VehicleTags = 0xD78;
            static constexpr std::uintptr_t Springs = 0xD98;
            static constexpr std::uintptr_t GroundTriangle = 0xDA8;
            static constexpr std::uintptr_t Gears = 0xDB8;
            static constexpr std::uintptr_t SprintGears = 0xDC8;
            static constexpr std::uintptr_t ReverseGears = 0xDD8;
            static constexpr std::uintptr_t ForwardDrivingAntiGravityScaler = 0xDE8;
            static constexpr std::uintptr_t CameraSpaceForwardDistanceOffset = 0xDEC;
            static constexpr std::uintptr_t CameraAssistStrength = 0xDF4;
            static constexpr std::uintptr_t CameraAssistRampUp = 0xDF8;
            static constexpr std::uintptr_t bAllowAutoCamera = 0xDFC;
            static constexpr std::uintptr_t TimeToAutoCamera = 0xE00;
            static constexpr std::uintptr_t MinSpeedForAutoCamera = 0xE04;
            static constexpr std::uintptr_t CameraAssistBaseHeight = 0xE08;
            static constexpr std::uintptr_t CameraAssistUpHillScaler = 0xE0C;
            static constexpr std::uintptr_t CameraAssistSteerScaler = 0xE10;
            static constexpr std::uintptr_t CameraAssistForwardScale = 0xE14;
            static constexpr std::uintptr_t AngleDegreesThresholdFromCurrentCameraToTarget = 0xE18;
            static constexpr std::uintptr_t CameraFOVOffset = 0xE1C;
            static constexpr std::uintptr_t TetheredCamera = 0xE20;
            static constexpr std::uintptr_t PlayerCollisionGameplayEffect = 0xE58;
            static constexpr std::uintptr_t OverlapComponent = 0xE60;
            static constexpr std::uintptr_t WaterOverlapComponent = 0xE68;
            static constexpr std::uintptr_t CachedOverlapVolumeShape = 0xE70;
            static constexpr std::uintptr_t WaterLevel = 0xEAC;
            static constexpr std::uintptr_t WaterOverlapCount = 0xEB0;
            static constexpr std::uintptr_t VehicleMinHorSpeedToDamage = 0xEB8;
            static constexpr std::uintptr_t VehicleMaxHorSpeedToDamage = 0xEBC;
            static constexpr std::uintptr_t VehicleMinHorSpeedDamage = 0xEC0;
            static constexpr std::uintptr_t VehicleMaxHorSpeedDamage = 0xEC4;
            static constexpr std::uintptr_t TargetingZOffset = 0xEC8;
            static constexpr std::uintptr_t BrakeAboveTopSpeedDelta = 0xECC;
            static constexpr std::uintptr_t TimeToIdleBrake = 0xED0;
            static constexpr std::uintptr_t DragCoefficient = 0xED4;
            static constexpr std::uintptr_t PrimaryCameraPitchConstraint = 0xED8;
            static constexpr std::uintptr_t PrimaryCameraYawConstraint = 0xEDC;
            static constexpr std::uintptr_t CachedSpeed = 0xEE0;
            static constexpr std::uintptr_t CachedLocalSpeed = 0xEE4;
            static constexpr std::uintptr_t CachedLocalVelocity = 0xEE8;
            static constexpr std::uintptr_t MainBodyCollision = 0xF00;
            static constexpr std::uintptr_t TestInitialLinearVelocity = 0xF08;
            static constexpr std::uintptr_t TestInitialAngularVelocity = 0xF20;
            static constexpr std::uintptr_t LookAheadHit = 0xF38;
            static constexpr std::uintptr_t TrickSet = 0x1030;
            static constexpr std::uintptr_t PushForceSocket = 0x1038;
            static constexpr std::uintptr_t FrontWheelsSocket = 0x103C;
            static constexpr std::uintptr_t RearWheelSockets = 0x1040;
            static constexpr std::uintptr_t DefaultHitNotifyAudioBank = 0x1048;
            static constexpr std::uintptr_t SoundLibraryComponent = 0x1050;
            static constexpr std::uintptr_t OnHandleOutOfHealthDelegate = 0x1058;
            static constexpr std::uintptr_t OnHealthChanged = 0x1068;
            static constexpr std::uintptr_t OnDamageablePartHealthChanged = 0x1090;
            static constexpr std::uintptr_t BulletCollisionComponentTag = 0x10A0;
            static constexpr std::uintptr_t GEDamagePassengersOnDeath = 0x10A8;
            static constexpr std::uintptr_t OnVehicleSquadChanged = 0x10B0;
            static constexpr std::uintptr_t OnSurfaceTypeVehicleIsOnChangedDelegate = 0x10C0;
            static constexpr std::uintptr_t LifespanAfterDeath = 0x10D0;
            static constexpr std::uintptr_t LifespanAfterForceDeath = 0x10D4;
            static constexpr std::uintptr_t LastDamagedTime = 0x10D8;
            static constexpr std::uintptr_t SeatTransitions = 0x10E0;
            static constexpr std::uintptr_t OnVehicleEnteredWaterBody = 0x1120;
            static constexpr std::uintptr_t OnVehicleExitedWaterBody = 0x1130;
            static constexpr std::uintptr_t RuntimeModifiedProperties = 0x1140;
            static constexpr std::uintptr_t LocallyIgnoredBuildingActors = 0x1158;
            static constexpr std::uintptr_t PreviousBuildingQueryPosition = 0x1168;
            static constexpr std::uintptr_t ImpulseResponseMultiplier = 0x1180;
            static constexpr std::uintptr_t ImpulseResponseZBias = 0x1184;
            static constexpr std::uintptr_t WaterSubmergedTimerHandle = 0x11C0;
            static constexpr std::uintptr_t EmoteAudioSourcePresetChain = 0x11F8;
            static constexpr std::uintptr_t EmoteAudioAttenuation = 0x1200;
            static constexpr std::uintptr_t MarkerDisplay = 0x1208;
            static constexpr std::uintptr_t StartupAbilitySet = 0x12B8;
            static constexpr std::uintptr_t VehicleSeatComponent = 0x12C0;
            static constexpr std::uintptr_t VehicleInteractionOverrideComponent = 0x12C8;
            static constexpr std::uintptr_t SkyTubePhysicsComponent = 0x12D0;
            static constexpr std::uintptr_t PontoonsComponent = 0x12D8;
            static constexpr std::uintptr_t TrackableAIObjectComponent = 0x12E0;
            static constexpr std::uintptr_t PlayerSlots = 0x12E8;
            static constexpr std::uintptr_t PlayerSlotsBackup = 0x12F8;
            static constexpr std::uintptr_t PlayerSlotsUnreplicated = 0x1308;
            static constexpr std::uintptr_t VehicleMovementSet = 0x1318;
            static constexpr std::uintptr_t VehicleAttributes = 0x1320;
            static constexpr std::uintptr_t CachedVehiclePhysicsCollisionDamageComponent = 0x1340;
            static constexpr std::uintptr_t CachedFuelComponent = 0x1348;
            static constexpr std::uintptr_t ReasonsWhyCantContainPlayers = 0x1350;
            static constexpr std::uintptr_t IgnoredBuildingActors = 0x1360;
            static constexpr std::uintptr_t RecentlyHitActorsData = 0x1370;
            static constexpr std::uintptr_t LastRecentlyHitActorsUpdateFrame = 0x1380;
            static constexpr std::uintptr_t RecentlyHitBuildingActorsData = 0x1388;
            static constexpr std::uintptr_t DamageableParts = 0x1398;
            static constexpr std::uintptr_t ToggledParts = 0x13A8;
            static constexpr std::uintptr_t CorrectTargetOrientation = 0x1620;
            static constexpr std::uintptr_t CameraModeClass = 0x1668;
            static constexpr std::uintptr_t DrivingAnimClass = 0x1670;
            static constexpr std::uintptr_t DriverAnimLayerOverlayClass = 0x1678;
            static constexpr std::uintptr_t PassengerAnimLayerOverlayClass = 0x1680;
            static constexpr std::uintptr_t AnimSet = 0x1688;
            static constexpr std::uintptr_t AttributeInitKey = 0x1788;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x1790;
            static constexpr std::uintptr_t HealthSet = 0x1798;
            static constexpr std::uintptr_t ImpulseResponseSet = 0x17A0;
            static constexpr std::uintptr_t DamageSet = 0x17A8;
            static constexpr std::uintptr_t HealthBarIndicator = 0x17B0;
            static constexpr std::uintptr_t VehicleCosmeticInfo = 0x17B8;
            static constexpr std::uintptr_t NavModifierComponent = 0x1800;
            static constexpr std::uintptr_t bShouldSleepAtSpawn = 0x1808;
            static constexpr std::uintptr_t bSpawnedSleepLockActive = 0x1809;
            static constexpr std::uintptr_t ForceKinematicOnClientCount = 0x180C;
            static constexpr std::uintptr_t ImpactInstigator = 0x1810;
            static constexpr std::uintptr_t NormalizedRPM = 0x1888;
            static constexpr std::uintptr_t CustomUI = 0x1890;
            static constexpr std::uintptr_t VehicleEnhancedInputContextDriver = 0x18A0;
            static constexpr std::uintptr_t VehicleEnhancedInputContextPassenger = 0x18B0;
            static constexpr std::uintptr_t InputActionMoveGamepad = 0x18C0;
            static constexpr std::uintptr_t InputActionChangeSeat = 0x18C8;
            static constexpr std::uintptr_t InputActionHonk = 0x18D0;
            static constexpr std::uintptr_t InputActionBoost = 0x18D8;
            static constexpr std::uintptr_t InputActionUseOrExit = 0x18E0;
            static constexpr std::uintptr_t InputActionGamepadTriggerForward = 0x18E8;
            static constexpr std::uintptr_t InputActionGamepadTriggerReverse = 0x18F0;
            static constexpr std::uintptr_t MobileMoveForwardCurve = 0x18F8;
            static constexpr std::uintptr_t MobileMoveRightCurve = 0x1900;
            static constexpr std::uintptr_t MobileReversingAngle = 0x1908;
            static constexpr std::uintptr_t bShouldConsumeTouchStickVector = 0x190C;
            static constexpr std::uintptr_t ActiveCustomUI = 0x1910;
            static constexpr std::uintptr_t MobileCustomUI = 0x1920;
            static constexpr std::uintptr_t AlwaysDamageVehiclesWithTag = 0x1934;
            static constexpr std::uintptr_t OnModAppliedOnClientDelegate = 0x1938;
            static constexpr std::uintptr_t BaseTireInfo = 0x1948;
            static constexpr std::uintptr_t CurrentOverlapComponent = 0x1B38;
            static constexpr std::uintptr_t VehicleConfigsClass = 0x1B40;
            static constexpr std::uintptr_t VehicleConfigsClass_BR = 0x1B48;
            static constexpr std::uintptr_t FortPhysicsVehicleConfigs = 0x1B50;
            static constexpr std::uintptr_t InstanceConfigOverride = 0x1B58;
            static constexpr std::uintptr_t bBoosting = 0x1B60;
            static constexpr std::uintptr_t bHasBoostingEventStarted = 0x1B61;
            static constexpr std::uintptr_t BoostEndTime = 0x1B64;
            static constexpr std::uintptr_t OnBoostStartedDelegate = 0x1B68;
            static constexpr std::uintptr_t OnBoostRequestFailedDelegate = 0x1B78;
            static constexpr std::uintptr_t OnBoostFinishedDelegate = 0x1B88;
            static constexpr std::uintptr_t OnRechargeableBoostPercentChangedDelegate = 0x1B98;
            static constexpr std::uintptr_t OnRechargeableBoostFullDelegate = 0x1BA8;
            static constexpr std::uintptr_t OnDriftStartedDelegate = 0x1BB8;
            static constexpr std::uintptr_t OnDriftFinishedDelegate = 0x1BC8;
            static constexpr std::uintptr_t SoundIndicatorComponent = 0x1BD8;
            static constexpr std::uintptr_t bShouldDealDamage = 0x1BE0;
            static constexpr std::uintptr_t NativeComp_LowFuelSputter = 0x1BE8;
            static constexpr std::uintptr_t NativeSys_LowFuelSputter = 0x1BF0;
            static constexpr std::uintptr_t OnRefuelStartDelegate = 0x1BF8;
            static constexpr std::uintptr_t OnRefuelStopDelegate = 0x1C08;
            static constexpr std::uintptr_t OnRefueledFromEmptyDelegate = 0x1C18;
            static constexpr std::uintptr_t OnOutOfFuelDelegate = 0x1C28;
            static constexpr std::uintptr_t OnFuelChangedDelegate = 0x1C38;
            static constexpr std::uintptr_t OnLowFuelDelegate = 0x1C48;
            static constexpr std::uintptr_t DebugDestroyLogCount = 0x1C58;
            static constexpr std::uintptr_t ServerCriticalHealth = 0x1C5C;
            static constexpr std::uintptr_t HealthZeroTime = 0x1C60;
            static constexpr std::uintptr_t bExploded = 0x1C64;
            static constexpr std::uintptr_t bOnFire = 0x1C64;
            static constexpr std::uintptr_t bPendingDeath = 0x1C64;
            static constexpr std::uintptr_t OnStartCriticalHealth = 0x1C68;
            static constexpr std::uintptr_t OnVehicleExplodeDelegate = 0x1C78;
            static constexpr std::uintptr_t bOnRoad = 0x1CA0;
            static constexpr std::uintptr_t bOnLandscape = 0x1CA1;
            static constexpr std::uintptr_t bOnDirt = 0x1CA2;
            static constexpr std::uintptr_t bOnGrass = 0x1CA3;
            static constexpr std::uintptr_t bOnIce = 0x1CA4;
            static constexpr std::uintptr_t bOnSnow = 0x1CA5;
            static constexpr std::uintptr_t bOnMud = 0x1CA6;
            static constexpr std::uintptr_t bStartedWithFullBoost = 0x1CA7;
            static constexpr std::uintptr_t bOnVehicle = 0x1CA8;
            static constexpr std::uintptr_t TireSurfaces = 0x1CB0;
            static constexpr std::uintptr_t OnTirePoppedDelegate = 0x1CC0;
            static constexpr std::uintptr_t OnTireRepairedDelegate = 0x1CD0;
            static constexpr std::uintptr_t LastPopTireTime = 0x1CE0;
            static constexpr std::uintptr_t TireStates = 0x1CE8;
            static constexpr std::uintptr_t OnDisabledChangedDelegate = 0x1CF8;
            static constexpr std::uintptr_t OnRimScrapingChangedDelegate = 0x1D28;
            static constexpr std::uintptr_t PlatformVelocityDirection = 0x1D38;
            static constexpr std::uintptr_t RimScrapeDamageTimer = 0x1D74;
            static constexpr std::uintptr_t ExceptionsForClearFallDamageImmunityOnExitTagQuery = 0x1DA8;
            static constexpr std::uintptr_t ActiveGameplayEffectGrantedTagsToForceRemove = 0x1DF0;
            static constexpr std::uintptr_t OnVehicleCosmeticsPartUpdatedDelegate = 0x1E68;
            static constexpr std::uintptr_t OnRefuelingCosmeticsStarted = 0x1E78;
            static constexpr std::uintptr_t OnRefuelingCosmeticsFinished = 0x1E88;
            static constexpr std::uintptr_t VehicleCosmeticsForceApplyDelegate = 0x1E98;
            static constexpr std::uintptr_t CachedWheelFXInfos = 0x1EA8;
            static constexpr std::uintptr_t bIsRefuelingCosmeticsActive = 0x1EC9;
            static constexpr std::uintptr_t OwningSpawnerResolverScopes = 0x1F88;
            static constexpr std::uintptr_t CachedVehicleSimStepsManager = 0x1FC8;
            static constexpr std::uintptr_t VehicleHudData = 0x1FD8;
            static constexpr std::uintptr_t bSkydivePlayerOnVehicleExit = 0x1FE8;
            static constexpr std::uintptr_t HeightToBeginSkydive = 0x1FEC;
        };

        inline static constexpr std::array<PropertyInfo, 337> Properties{{
            {"VehicleContextTag", 0x5A0, "StructProperty"},
            {"VehicleEventRouter", 0x5A8, "ObjectProperty"},
            {"OnActorRecentlyHit", 0x5B0, "MulticastInlineDelegateProperty"},
            {"VehicleImpactDamageTag", 0x5C0, "StructProperty"},
            {"NetPredictionProxy_AP", 0x5C8, "StructProperty"},
            {"NetPredictionProxy_SP", 0x5E0, "StructProperty"},
            {"OnScrapingSidesOrTopChangedDelegate", 0x5F8, "MulticastInlineDelegateProperty"},
            {"OnCurrentGearChangedDelegate", 0x608, "MulticastInlineDelegateProperty"},
            {"CustomOwnerName", 0x618, "StrProperty"},
            {"DefaultOwnerName", 0x628, "TextProperty"},
            {"CustomOwnerAccountId", 0x638, "StructProperty"},
            {"CustomName", 0x668, "TextProperty"},
            {"SoftOverrideItemWrap", 0x678, "SoftObjectProperty"},
            {"OverrideItemWrap", 0x698, "ObjectProperty"},
            {"OnSpringCompressionDelegate", 0x6A0, "MulticastInlineDelegateProperty"},
            {"PlayersBasedOnVehicle", 0x6B0, "SetProperty"},
            {"OnSleepStateChangedDelegate", 0x6D8, "MulticastInlineDelegateProperty"},
            {"bUseDeprecatedSleepOnSpawn", 0x6E8, "BoolProperty"},
            {"WaterSurfaceDataCache", 0x6F0, "StructProperty"},
            {"LastDamageInstigator", 0x768, "WeakObjectProperty"},
            {"LastOutOfHealthInstigator", 0x770, "WeakObjectProperty"},
            {"LastOutOfHealthDamageCauser", 0x778, "WeakObjectProperty"},
            {"BoundsXYSplineComponent", 0x800, "ObjectProperty"},
            {"SkeletalMesh", 0x830, "ObjectProperty"},
            {"CustomDepthStencilValue", 0x844, "IntProperty"},
            {"CustomDepthStencilValueForHighlightedVehicle", 0x848, "IntProperty"},
            {"SquadId", 0x84C, "ByteProperty"},
            {"TeamId", 0x84D, "ByteProperty"},
            {"InitialOverlapBehavior", 0x84E, "ByteProperty"},
            {"bDisableUpdateAutoRun", 0x868, "BoolProperty"},
            {"bDisableUpdateForcedDebugInput", 0x868, "BoolProperty"},
            {"bDisableUpdateHonk", 0x868, "BoolProperty"},
            {"bDisableUpdateIgnoredBuildingActors", 0x868, "BoolProperty"},
            {"bDisableUpdateIngoredPawnsForDamage", 0x868, "BoolProperty"},
            {"bDisableUpdateSafeTeleport", 0x868, "BoolProperty"},
            {"bUseForceHeading", 0x868, "BoolProperty"},
            {"bDestroyBuildingSMActorOnForceExit", 0x869, "BoolProperty"},
            {"bDestroyOnLastExit", 0x869, "BoolProperty"},
            {"bIgnoreAllFallingDamage", 0x869, "BoolProperty"},
            {"bPlayDamageAudio", 0x869, "BoolProperty"},
            {"bShowDamageNumbers", 0x869, "BoolProperty"},
            {"bShowDamageNumbersAtImpactLocation", 0x869, "BoolProperty"},
            {"bShowDamageNumbersToTeam", 0x869, "BoolProperty"},
            {"bShowVehicleHealthBarOnPlayerHUD", 0x869, "BoolProperty"},
            {"bForceDeath", 0x86A, "BoolProperty"},
            {"bHasDriver", 0x86A, "BoolProperty"},
            {"bHasPassengers", 0x86A, "BoolProperty"},
            {"bIgnoreNextFallingDamage", 0x86A, "BoolProperty"},
            {"bIsBraking", 0x86A, "BoolProperty"},
            {"bPlayInstantDeathEffects", 0x86A, "BoolProperty"},
            {"bPlayedDying", 0x86A, "BoolProperty"},
            {"bShouldClearFallDamageImmunityForPawnsOnExit", 0x86A, "BoolProperty"},
            {"bCanCoastOnIncline", 0x86B, "BoolProperty"},
            {"bCanDriveOnIncline", 0x86B, "BoolProperty"},
            {"bCanSleepWhileNotTouchingAnything", 0x86B, "BoolProperty"},
            {"bIsFullyInWaterBody", 0x86B, "BoolProperty"},
            {"bIsInWater", 0x86B, "BoolProperty"},
            {"bIsInWaterBody", 0x86B, "BoolProperty"},
            {"bIsOverlappingWaterBody", 0x86B, "BoolProperty"},
            {"bIsTouchingAnything", 0x86B, "BoolProperty"},
            {"bAnyWheelsOnGround", 0x86C, "BoolProperty"},
            {"bDisableCollisionAllowed", 0x86C, "BoolProperty"},
            {"bIsTouchingDrivableGround", 0x86C, "BoolProperty"},
            {"bIsTouchingGroundWithoutWheels", 0x86C, "BoolProperty"},
            {"bPossiblyTouchingTop", 0x86C, "BoolProperty"},
            {"bWheelsOnGround", 0x86C, "BoolProperty"},
            {"bUseGravity", 0x86F, "BoolProperty"},
            {"bAllowInteractBetweenFortVolumes", 0x870, "BoolProperty"},
            {"bCanPassengerPawnsTakeDamage", 0x870, "BoolProperty"},
            {"bCosmeticPhysicsInitializing", 0x870, "BoolProperty"},
            {"bCosmeticsFinished", 0x870, "BoolProperty"},
            {"bEnableCurieMaterial", 0x870, "BoolProperty"},
            {"bServerIsInUndergroundVolume", 0x870, "BoolProperty"},
            {"bEnforceMinigameClassRestriction", 0x871, "BoolProperty"},
            {"bEnforceTeamRestrictionForMiniGame", 0x871, "BoolProperty"},
            {"bAllowPassengerInteractions", 0x888, "BoolProperty"},
            {"bCachedSquadRestrictionEnabled", 0x888, "BoolProperty"},
            {"bEnforceTeamRestriction", 0x888, "BoolProperty"},
            {"bMoveStickAcceleratesVehicles", 0x888, "BoolProperty"},
            {"bStencilEnabled", 0x888, "BoolProperty"},
            {"bUseCustomDepthStencilValue", 0x888, "BoolProperty"},
            {"MinigameClassID", 0x8A8, "IntProperty"},
            {"OnPawnEnteredVehicleAtSeat", 0x8B0, "MulticastInlineDelegateProperty"},
            {"OnPawnEnteredVehicleSeat", 0x8C0, "MulticastInlineDelegateProperty"},
            {"OnPawnExitedVehicleSeat", 0x8D0, "MulticastInlineDelegateProperty"},
            {"OnPawnExitedVehicleFromSeat", 0x8E0, "MulticastInlineDelegateProperty"},
            {"OnPawnFinishEnteringVehicle", 0x8F0, "MulticastInlineDelegateProperty"},
            {"OnVehicleHornEvent", 0x900, "MulticastInlineDelegateProperty"},
            {"OnVehicleOwnerChanged", 0x910, "MulticastInlineDelegateProperty"},
            {"OnVehicleSignificanceRecentlyRenderedChanged", 0x920, "MulticastInlineDelegateProperty"},
            {"bAttemptAsyncOrientationCorrection", 0x948, "BoolProperty"},
            {"bIsAsyncCorrectingOrientation", 0x948, "BoolProperty"},
            {"bWaitingForSleep", 0x948, "BoolProperty"},
            {"bAllowInteractBetweenFortVolumes_Runtime", 0x949, "BoolProperty"},
            {"bAlwaysCreateNavComponent", 0x949, "BoolProperty"},
            {"bTricksEnabled", 0x949, "BoolProperty"},
            {"FireDamageTickTimer", 0x950, "FloatProperty"},
            {"CurrentFOV", 0x954, "FloatProperty"},
            {"FireEnvDamageTags", 0x958, "StructProperty"},
            {"PawnIgnoreBumpTags", 0x978, "StructProperty"},
            {"DriverReticleBrush", 0x998, "ObjectProperty"},
            {"AppliedVehicleModTags", 0x9A0, "StructProperty"},
            {"CollectedVehicleModData", 0x9C0, "ObjectProperty"},
            {"WaterEffectsVehicleMaxSpeedKmh", 0x9D0, "FloatProperty"},
            {"WaterEffectsAsset", 0x9D8, "ObjectProperty"},
            {"WaterEffectsComponent", 0x9E0, "ObjectProperty"},
            {"GameplayTags", 0x9F0, "StructProperty"},
            {"PawnsToIgnoreForDamge", 0xA10, "SetProperty"},
            {"PawnsToIgnoreForCollision", 0xA20, "ArrayProperty"},
            {"IgnoredPawnsPendingTeleport", 0xA30, "ArrayProperty"},
            {"LastPropImpactImpulseTime", 0xA40, "FloatProperty"},
            {"PredictedDestroyedBuildings", 0xA48, "ArrayProperty"},
            {"WallsVehicleCanDestroy", 0xA58, "ArrayProperty"},
            {"WallsVehicleCannotDestroyWhenBoosting", 0xA68, "ArrayProperty"},
            {"BuildingPropClassesVehicleCanDestroy", 0xA78, "ArrayProperty"},
            {"BuildingPropClassesVehicleCannotDestroyWhenBoosting", 0xA88, "ArrayProperty"},
            {"SeatInputProviders", 0xA98, "ArrayProperty"},
            {"EmptyDriverInputState", 0xAA8, "StructProperty"},
            {"AverageSpringNormal", 0xAE8, "StructProperty"},
            {"TopSpeedCurrentMultiplier", 0xB00, "FloatProperty"},
            {"PushForceCurrentMultiplier", 0xB04, "FloatProperty"},
            {"LastStickInput", 0xB08, "StructProperty"},
            {"SteeringAngle", 0xB28, "FloatProperty"},
            {"CurrentGearIdx", 0xB48, "IntProperty"},
            {"FrontLateralFrictionRuntimeMultiplier", 0xB50, "FloatProperty"},
            {"RearLateralFrictionRuntimeMultiplier", 0xB54, "FloatProperty"},
            {"LocalRearFrictionPt", 0xB58, "StructProperty"},
            {"LocalFrontFrictionPt", 0xB70, "StructProperty"},
            {"FrontMassRatio", 0xB88, "FloatProperty"},
            {"RearMassRatio", 0xB8C, "FloatProperty"},
            {"TimeBetweenLandscapeDamageEvents", 0xB90, "FloatProperty"},
            {"TotalBrakingDelta", 0xBB8, "FloatProperty"},
            {"PrimarySurfaceType", 0xC25, "ByteProperty"},
            {"WeaponResponseType", 0xC26, "ByteProperty"},
            {"VTDMode", 0xC27, "ByteProperty"},
            {"SurfaceTypeVehicleOn", 0xC2B, "ByteProperty"},
            {"ForcedMaterialVariantIndex", 0xC40, "IntProperty"},
            {"FuelCharge", 0xC48, "StructProperty"},
            {"OnRechargeableFuelAboveThreshold", 0xD20, "MulticastInlineDelegateProperty"},
            {"OnRechargeableFuelBelowThreshold", 0xD30, "MulticastInlineDelegateProperty"},
            {"OnOutOfRechargeableFuel", 0xD40, "MulticastInlineDelegateProperty"},
            {"OnNotOutOfRechargeableFuel", 0xD50, "MulticastInlineDelegateProperty"},
            {"OnMountedWeaponFiredEvent", 0xD60, "MulticastInlineDelegateProperty"},
            {"SeatSwitchCooldown", 0xD74, "FloatProperty"},
            {"VehicleTags", 0xD78, "StructProperty"},
            {"Springs", 0xD98, "ArrayProperty"},
            {"GroundTriangle", 0xDA8, "StructProperty"},
            {"Gears", 0xDB8, "ArrayProperty"},
            {"SprintGears", 0xDC8, "ArrayProperty"},
            {"ReverseGears", 0xDD8, "ArrayProperty"},
            {"ForwardDrivingAntiGravityScaler", 0xDE8, "FloatProperty"},
            {"CameraSpaceForwardDistanceOffset", 0xDEC, "FloatProperty"},
            {"CameraAssistStrength", 0xDF4, "FloatProperty"},
            {"CameraAssistRampUp", 0xDF8, "FloatProperty"},
            {"bAllowAutoCamera", 0xDFC, "BoolProperty"},
            {"TimeToAutoCamera", 0xE00, "FloatProperty"},
            {"MinSpeedForAutoCamera", 0xE04, "FloatProperty"},
            {"CameraAssistBaseHeight", 0xE08, "FloatProperty"},
            {"CameraAssistUpHillScaler", 0xE0C, "FloatProperty"},
            {"CameraAssistSteerScaler", 0xE10, "FloatProperty"},
            {"CameraAssistForwardScale", 0xE14, "FloatProperty"},
            {"AngleDegreesThresholdFromCurrentCameraToTarget", 0xE18, "FloatProperty"},
            {"CameraFOVOffset", 0xE1C, "FloatProperty"},
            {"TetheredCamera", 0xE20, "ClassProperty"},
            {"PlayerCollisionGameplayEffect", 0xE58, "ClassProperty"},
            {"OverlapComponent", 0xE60, "ObjectProperty"},
            {"WaterOverlapComponent", 0xE68, "ObjectProperty"},
            {"CachedOverlapVolumeShape", 0xE70, "OptionalProperty"},
            {"WaterLevel", 0xEAC, "FloatProperty"},
            {"WaterOverlapCount", 0xEB0, "IntProperty"},
            {"VehicleMinHorSpeedToDamage", 0xEB8, "FloatProperty"},
            {"VehicleMaxHorSpeedToDamage", 0xEBC, "FloatProperty"},
            {"VehicleMinHorSpeedDamage", 0xEC0, "FloatProperty"},
            {"VehicleMaxHorSpeedDamage", 0xEC4, "FloatProperty"},
            {"TargetingZOffset", 0xEC8, "FloatProperty"},
            {"BrakeAboveTopSpeedDelta", 0xECC, "FloatProperty"},
            {"TimeToIdleBrake", 0xED0, "FloatProperty"},
            {"DragCoefficient", 0xED4, "FloatProperty"},
            {"PrimaryCameraPitchConstraint", 0xED8, "FloatProperty"},
            {"PrimaryCameraYawConstraint", 0xEDC, "FloatProperty"},
            {"CachedSpeed", 0xEE0, "FloatProperty"},
            {"CachedLocalSpeed", 0xEE4, "FloatProperty"},
            {"CachedLocalVelocity", 0xEE8, "StructProperty"},
            {"MainBodyCollision", 0xF00, "NameProperty"},
            {"TestInitialLinearVelocity", 0xF08, "StructProperty"},
            {"TestInitialAngularVelocity", 0xF20, "StructProperty"},
            {"LookAheadHit", 0xF38, "StructProperty"},
            {"TrickSet", 0x1030, "ObjectProperty"},
            {"PushForceSocket", 0x1038, "NameProperty"},
            {"FrontWheelsSocket", 0x103C, "NameProperty"},
            {"RearWheelSockets", 0x1040, "NameProperty"},
            {"DefaultHitNotifyAudioBank", 0x1048, "ObjectProperty"},
            {"SoundLibraryComponent", 0x1050, "ObjectProperty"},
            {"OnHandleOutOfHealthDelegate", 0x1058, "MulticastInlineDelegateProperty"},
            {"OnHealthChanged", 0x1068, "MulticastInlineDelegateProperty"},
            {"OnDamageablePartHealthChanged", 0x1090, "MulticastInlineDelegateProperty"},
            {"BulletCollisionComponentTag", 0x10A0, "NameProperty"},
            {"GEDamagePassengersOnDeath", 0x10A8, "ClassProperty"},
            {"OnVehicleSquadChanged", 0x10B0, "MulticastInlineDelegateProperty"},
            {"OnSurfaceTypeVehicleIsOnChangedDelegate", 0x10C0, "MulticastInlineDelegateProperty"},
            {"LifespanAfterDeath", 0x10D0, "FloatProperty"},
            {"LifespanAfterForceDeath", 0x10D4, "FloatProperty"},
            {"LastDamagedTime", 0x10D8, "FloatProperty"},
            {"SeatTransitions", 0x10E0, "ArrayProperty"},
            {"OnVehicleEnteredWaterBody", 0x1120, "MulticastInlineDelegateProperty"},
            {"OnVehicleExitedWaterBody", 0x1130, "MulticastInlineDelegateProperty"},
            {"RuntimeModifiedProperties", 0x1140, "StructProperty"},
            {"LocallyIgnoredBuildingActors", 0x1158, "ArrayProperty"},
            {"PreviousBuildingQueryPosition", 0x1168, "StructProperty"},
            {"ImpulseResponseMultiplier", 0x1180, "FloatProperty"},
            {"ImpulseResponseZBias", 0x1184, "FloatProperty"},
            {"WaterSubmergedTimerHandle", 0x11C0, "StructProperty"},
            {"EmoteAudioSourcePresetChain", 0x11F8, "ObjectProperty"},
            {"EmoteAudioAttenuation", 0x1200, "ObjectProperty"},
            {"MarkerDisplay", 0x1208, "StructProperty"},
            {"StartupAbilitySet", 0x12B8, "ObjectProperty"},
            {"VehicleSeatComponent", 0x12C0, "ObjectProperty"},
            {"VehicleInteractionOverrideComponent", 0x12C8, "ObjectProperty"},
            {"SkyTubePhysicsComponent", 0x12D0, "ObjectProperty"},
            {"PontoonsComponent", 0x12D8, "ObjectProperty"},
            {"TrackableAIObjectComponent", 0x12E0, "ObjectProperty"},
            {"PlayerSlots", 0x12E8, "ArrayProperty"},
            {"PlayerSlotsBackup", 0x12F8, "ArrayProperty"},
            {"PlayerSlotsUnreplicated", 0x1308, "ArrayProperty"},
            {"VehicleMovementSet", 0x1318, "ObjectProperty"},
            {"VehicleAttributes", 0x1320, "StructProperty"},
            {"CachedVehiclePhysicsCollisionDamageComponent", 0x1340, "ObjectProperty"},
            {"CachedFuelComponent", 0x1348, "ObjectProperty"},
            {"ReasonsWhyCantContainPlayers", 0x1350, "ArrayProperty"},
            {"IgnoredBuildingActors", 0x1360, "ArrayProperty"},
            {"RecentlyHitActorsData", 0x1370, "ArrayProperty"},
            {"LastRecentlyHitActorsUpdateFrame", 0x1380, "UInt64Property"},
            {"RecentlyHitBuildingActorsData", 0x1388, "ArrayProperty"},
            {"DamageableParts", 0x1398, "ArrayProperty"},
            {"ToggledParts", 0x13A8, "ArrayProperty"},
            {"CorrectTargetOrientation", 0x1620, "StructProperty"},
            {"CameraModeClass", 0x1668, "ClassProperty"},
            {"DrivingAnimClass", 0x1670, "ClassProperty"},
            {"DriverAnimLayerOverlayClass", 0x1678, "ClassProperty"},
            {"PassengerAnimLayerOverlayClass", 0x1680, "ClassProperty"},
            {"AnimSet", 0x1688, "ObjectProperty"},
            {"AttributeInitKey", 0x1788, "StructProperty"},
            {"AbilitySystemComponent", 0x1790, "ObjectProperty"},
            {"HealthSet", 0x1798, "ObjectProperty"},
            {"ImpulseResponseSet", 0x17A0, "ObjectProperty"},
            {"DamageSet", 0x17A8, "ObjectProperty"},
            {"HealthBarIndicator", 0x17B0, "ObjectProperty"},
            {"VehicleCosmeticInfo", 0x17B8, "StructProperty"},
            {"NavModifierComponent", 0x1800, "ObjectProperty"},
            {"bShouldSleepAtSpawn", 0x1808, "BoolProperty"},
            {"bSpawnedSleepLockActive", 0x1809, "BoolProperty"},
            {"ForceKinematicOnClientCount", 0x180C, "UInt32Property"},
            {"ImpactInstigator", 0x1810, "ObjectProperty"},
            {"NormalizedRPM", 0x1888, "FloatProperty"},
            {"CustomUI", 0x1890, "ArrayProperty"},
            {"VehicleEnhancedInputContextDriver", 0x18A0, "ArrayProperty"},
            {"VehicleEnhancedInputContextPassenger", 0x18B0, "ArrayProperty"},
            {"InputActionMoveGamepad", 0x18C0, "ObjectProperty"},
            {"InputActionChangeSeat", 0x18C8, "ObjectProperty"},
            {"InputActionHonk", 0x18D0, "ObjectProperty"},
            {"InputActionBoost", 0x18D8, "ObjectProperty"},
            {"InputActionUseOrExit", 0x18E0, "ObjectProperty"},
            {"InputActionGamepadTriggerForward", 0x18E8, "ObjectProperty"},
            {"InputActionGamepadTriggerReverse", 0x18F0, "ObjectProperty"},
            {"MobileMoveForwardCurve", 0x18F8, "ObjectProperty"},
            {"MobileMoveRightCurve", 0x1900, "ObjectProperty"},
            {"MobileReversingAngle", 0x1908, "FloatProperty"},
            {"bShouldConsumeTouchStickVector", 0x190C, "BoolProperty"},
            {"ActiveCustomUI", 0x1910, "ArrayProperty"},
            {"MobileCustomUI", 0x1920, "ArrayProperty"},
            {"AlwaysDamageVehiclesWithTag", 0x1934, "StructProperty"},
            {"OnModAppliedOnClientDelegate", 0x1938, "MulticastInlineDelegateProperty"},
            {"BaseTireInfo", 0x1948, "StructProperty"},
            {"CurrentOverlapComponent", 0x1B38, "ObjectProperty"},
            {"VehicleConfigsClass", 0x1B40, "ClassProperty"},
            {"VehicleConfigsClass_BR", 0x1B48, "ClassProperty"},
            {"FortPhysicsVehicleConfigs", 0x1B50, "ObjectProperty"},
            {"InstanceConfigOverride", 0x1B58, "ObjectProperty"},
            {"bBoosting", 0x1B60, "BoolProperty"},
            {"bHasBoostingEventStarted", 0x1B61, "BoolProperty"},
            {"BoostEndTime", 0x1B64, "FloatProperty"},
            {"OnBoostStartedDelegate", 0x1B68, "MulticastInlineDelegateProperty"},
            {"OnBoostRequestFailedDelegate", 0x1B78, "MulticastInlineDelegateProperty"},
            {"OnBoostFinishedDelegate", 0x1B88, "MulticastInlineDelegateProperty"},
            {"OnRechargeableBoostPercentChangedDelegate", 0x1B98, "MulticastInlineDelegateProperty"},
            {"OnRechargeableBoostFullDelegate", 0x1BA8, "MulticastInlineDelegateProperty"},
            {"OnDriftStartedDelegate", 0x1BB8, "MulticastInlineDelegateProperty"},
            {"OnDriftFinishedDelegate", 0x1BC8, "MulticastInlineDelegateProperty"},
            {"SoundIndicatorComponent", 0x1BD8, "ObjectProperty"},
            {"bShouldDealDamage", 0x1BE0, "BoolProperty"},
            {"NativeComp_LowFuelSputter", 0x1BE8, "ObjectProperty"},
            {"NativeSys_LowFuelSputter", 0x1BF0, "ObjectProperty"},
            {"OnRefuelStartDelegate", 0x1BF8, "MulticastInlineDelegateProperty"},
            {"OnRefuelStopDelegate", 0x1C08, "MulticastInlineDelegateProperty"},
            {"OnRefueledFromEmptyDelegate", 0x1C18, "MulticastInlineDelegateProperty"},
            {"OnOutOfFuelDelegate", 0x1C28, "MulticastInlineDelegateProperty"},
            {"OnFuelChangedDelegate", 0x1C38, "MulticastInlineDelegateProperty"},
            {"OnLowFuelDelegate", 0x1C48, "MulticastInlineDelegateProperty"},
            {"DebugDestroyLogCount", 0x1C58, "IntProperty"},
            {"ServerCriticalHealth", 0x1C5C, "FloatProperty"},
            {"HealthZeroTime", 0x1C60, "FloatProperty"},
            {"bExploded", 0x1C64, "BoolProperty"},
            {"bOnFire", 0x1C64, "BoolProperty"},
            {"bPendingDeath", 0x1C64, "BoolProperty"},
            {"OnStartCriticalHealth", 0x1C68, "MulticastInlineDelegateProperty"},
            {"OnVehicleExplodeDelegate", 0x1C78, "MulticastInlineDelegateProperty"},
            {"bOnRoad", 0x1CA0, "BoolProperty"},
            {"bOnLandscape", 0x1CA1, "BoolProperty"},
            {"bOnDirt", 0x1CA2, "BoolProperty"},
            {"bOnGrass", 0x1CA3, "BoolProperty"},
            {"bOnIce", 0x1CA4, "BoolProperty"},
            {"bOnSnow", 0x1CA5, "BoolProperty"},
            {"bOnMud", 0x1CA6, "BoolProperty"},
            {"bStartedWithFullBoost", 0x1CA7, "BoolProperty"},
            {"bOnVehicle", 0x1CA8, "BoolProperty"},
            {"TireSurfaces", 0x1CB0, "ArrayProperty"},
            {"OnTirePoppedDelegate", 0x1CC0, "MulticastInlineDelegateProperty"},
            {"OnTireRepairedDelegate", 0x1CD0, "MulticastInlineDelegateProperty"},
            {"LastPopTireTime", 0x1CE0, "FloatProperty"},
            {"TireStates", 0x1CE8, "ArrayProperty"},
            {"OnDisabledChangedDelegate", 0x1CF8, "MulticastInlineDelegateProperty"},
            {"OnRimScrapingChangedDelegate", 0x1D28, "MulticastInlineDelegateProperty"},
            {"PlatformVelocityDirection", 0x1D38, "StructProperty"},
            {"RimScrapeDamageTimer", 0x1D74, "FloatProperty"},
            {"ExceptionsForClearFallDamageImmunityOnExitTagQuery", 0x1DA8, "StructProperty"},
            {"ActiveGameplayEffectGrantedTagsToForceRemove", 0x1DF0, "StructProperty"},
            {"OnVehicleCosmeticsPartUpdatedDelegate", 0x1E68, "MulticastInlineDelegateProperty"},
            {"OnRefuelingCosmeticsStarted", 0x1E78, "MulticastInlineDelegateProperty"},
            {"OnRefuelingCosmeticsFinished", 0x1E88, "MulticastInlineDelegateProperty"},
            {"VehicleCosmeticsForceApplyDelegate", 0x1E98, "MulticastInlineDelegateProperty"},
            {"CachedWheelFXInfos", 0x1EA8, "MapProperty"},
            {"bIsRefuelingCosmeticsActive", 0x1EC9, "BoolProperty"},
            {"OwningSpawnerResolverScopes", 0x1F88, "ArrayProperty"},
            {"CachedVehicleSimStepsManager", 0x1FC8, "WeakObjectProperty"},
            {"VehicleHudData", 0x1FD8, "ArrayProperty"},
            {"bSkydivePlayerOnVehicleExit", 0x1FE8, "BoolProperty"},
            {"HeightToBeginSkydive", 0x1FEC, "FloatProperty"},
        }};
    };

    struct FortDelMarGlobalInputDisabler
    {
        static constexpr std::string_view Name = "FortDelMarGlobalInputDisabler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisabledInputTags = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisabledInputTags", 0xD8, "StructProperty"},
        }};
    };

    struct FortDelMarGlobals
    {
        static constexpr std::string_view Name = "FortDelMarGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarInputModifierHazard
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierHazard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivatedInputSequence = 0x278;
            static constexpr std::uintptr_t DisabledEffects = 0x288;
            static constexpr std::uintptr_t BoxCollider = 0x298;
            static constexpr std::uintptr_t LocalController = 0x2A0;
            static constexpr std::uintptr_t LocalPlayerInput = 0x2A8;
            static constexpr std::uintptr_t StartOverlapTime = 0x2B0;
            static constexpr std::uintptr_t TotalActivationSequenceTime = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ActivatedInputSequence", 0x278, "ArrayProperty"},
            {"DisabledEffects", 0x288, "ArrayProperty"},
            {"BoxCollider", 0x298, "ObjectProperty"},
            {"LocalController", 0x2A0, "ObjectProperty"},
            {"LocalPlayerInput", 0x2A8, "ObjectProperty"},
            {"StartOverlapTime", 0x2B0, "FloatProperty"},
            {"TotalActivationSequenceTime", 0x2B4, "FloatProperty"},
        }};
    };

    struct FortDelMarLevelDataAsset
    {
        static constexpr std::string_view Name = "FortDelMarLevelDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t LevelDescription = 0x38;
            static constexpr std::uintptr_t LevelBackgroundImage = 0x48;
            static constexpr std::uintptr_t Levels = 0x68;
            static constexpr std::uintptr_t WorldPartitionDataLayers = 0x78;
            static constexpr std::uintptr_t LevelDescriptionTags = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"LevelDescription", 0x38, "TextProperty"},
            {"LevelBackgroundImage", 0x48, "SoftObjectProperty"},
            {"Levels", 0x68, "ArrayProperty"},
            {"WorldPartitionDataLayers", 0x78, "ArrayProperty"},
            {"LevelDescriptionTags", 0x88, "StructProperty"},
        }};
    };

    struct FortDelMarMutator
    {
        static constexpr std::string_view Name = "FortDelMarMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortDelMarMutator_AllowSpectateOtherTeams
    {
        static constexpr std::string_view Name = "FortDelMarMutator_AllowSpectateOtherTeams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_AllowSpectateOtherTeams";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowSpectateOtherTeams = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowSpectateOtherTeams", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortDelMarNetModelSubsystem
    {
        static constexpr std::string_view Name = "FortDelMarNetModelSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarNetworkPredictionMutator
    {
        static constexpr std::string_view Name = "FortDelMarNetworkPredictionMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortDelMarPhysMatAttribute
    {
        static constexpr std::string_view Name = "FortDelMarPhysMatAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarPhysMatAttributeMap
    {
        static constexpr std::string_view Name = "FortDelMarPhysMatAttributeMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialAttributesMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialAttributesMap", 0x28, "MapProperty"},
        }};
    };

    struct FortDelMarPhysMatAttribute_SoundTag
    {
        static constexpr std::string_view Name = "FortDelMarPhysMatAttribute_SoundTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPhysMatAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundTag = 0x28;
            static constexpr std::uintptr_t Priority = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundTag", 0x28, "NameProperty"},
            {"Priority", 0x2C, "IntProperty"},
        }};
    };

    struct FortDelMarPhysMatAttribute_Terrain
    {
        static constexpr std::string_view Name = "FortDelMarPhysMatAttribute_Terrain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPhysMatAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t TerrainData = 0x28;
            static constexpr std::uintptr_t bDriveableSurface = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TerrainData", 0x28, "StructProperty"},
            {"bDriveableSurface", 0x40, "BoolProperty"},
        }};
    };

    struct FortDelMarPhysicsRateDevice
    {
        static constexpr std::string_view Name = "FortDelMarPhysicsRateDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t bSuppressPlayTimeSimpleInteractionWidgetForTouch = 0xB50;
            static constexpr std::uintptr_t bServerNotifyOnLongUseInteraction = 0xB51;
            static constexpr std::uintptr_t bUseCollisionForInteractDistanceCheck = 0xB52;
            static constexpr std::uintptr_t bActorsBeingDeleted = 0xB53;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSuppressPlayTimeSimpleInteractionWidgetForTouch", 0xB50, "BoolProperty"},
            {"bServerNotifyOnLongUseInteraction", 0xB51, "BoolProperty"},
            {"bUseCollisionForInteractDistanceCheck", 0xB52, "BoolProperty"},
            {"bActorsBeingDeleted", 0xB53, "BoolProperty"},
        }};
    };

    struct FortDelMarPlayerAttachmentComponent
    {
        static constexpr std::string_view Name = "FortDelMarPlayerAttachmentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedPlayer = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachedPlayer", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarPlayerInputManagerComponent
    {
        static constexpr std::string_view Name = "FortDelMarPlayerInputManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingContextMap = 0xC0;
            static constexpr std::uintptr_t PlatformDigitalRedirect = 0xD0;
            static constexpr std::uintptr_t CachedController = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputMappingContextMap", 0xC0, "MapProperty"},
            {"PlatformDigitalRedirect", 0xD0, "ObjectProperty"},
            {"CachedController", 0xD8, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarPlayerPreferencesComponent
    {
        static constexpr std::string_view Name = "FortDelMarPlayerPreferencesComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnUseExpandableHudWidgetToggleChanged = 0xC0;
            static constexpr std::uintptr_t OnUseOnlyIconPlayerNameplatesChanged = 0xD0;
            static constexpr std::uintptr_t OnLayoutTouchControlsChanged = 0xE0;
            static constexpr std::uintptr_t bPitchInverted = 0xF0;
            static constexpr std::uintptr_t bVerticalKickflipInverted = 0xF1;
            static constexpr std::uintptr_t bAerialPitchActivationEnabled = 0xF2;
            static constexpr std::uintptr_t bUseToggleOnExpandableHudWidget = 0xF3;
            static constexpr std::uintptr_t bUseIconOnlyPlayerNameplates = 0xF4;
            static constexpr std::uintptr_t InvertSteerMethod = 0xF5;
            static constexpr std::uintptr_t TouchControlsLayout = 0xF8;
            static constexpr std::uintptr_t CachedVehicle = 0xFC;
            static constexpr std::uintptr_t FortSettings = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnUseExpandableHudWidgetToggleChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnUseOnlyIconPlayerNameplatesChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnLayoutTouchControlsChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"bPitchInverted", 0xF0, "BoolProperty"},
            {"bVerticalKickflipInverted", 0xF1, "BoolProperty"},
            {"bAerialPitchActivationEnabled", 0xF2, "BoolProperty"},
            {"bUseToggleOnExpandableHudWidget", 0xF3, "BoolProperty"},
            {"bUseIconOnlyPlayerNameplates", 0xF4, "BoolProperty"},
            {"InvertSteerMethod", 0xF5, "EnumProperty"},
            {"TouchControlsLayout", 0xF8, "StructProperty"},
            {"CachedVehicle", 0xFC, "WeakObjectProperty"},
            {"FortSettings", 0x104, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarPlayerStateComponent
    {
        static constexpr std::string_view Name = "FortDelMarPlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
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

    struct FortDelMarPlayspaceComponent_ServerExpiration
    {
        static constexpr std::string_view Name = "FortDelMarPlayspaceComponent_ServerExpiration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_ServerExpiration";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedShutdownTimeInSeconds = 0x158;
            static constexpr std::uintptr_t StartShutdownTimerOnGracefulShutdownRequest = 0x15C;
            static constexpr std::uintptr_t bDisableBackfillBeforeExpiration = 0x15D;
            static constexpr std::uintptr_t bDisableBackfillOnGracefulShutdown = 0x15E;
            static constexpr std::uintptr_t AlertDataList = 0x160;
            static constexpr std::uintptr_t ServerShutdownTimeInSeconds = 0x170;
            static constexpr std::uintptr_t DisableBackfillBeforeExpireTimeInSeconds = 0x174;
            static constexpr std::uintptr_t PostShutdownForceRestartTimeInSeconds = 0x178;
            static constexpr std::uintptr_t UINotificationIcon = 0x180;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x1F0;
            static constexpr std::uintptr_t ShutdownTimeOverrides = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ReplicatedShutdownTimeInSeconds", 0x158, "IntProperty"},
            {"StartShutdownTimerOnGracefulShutdownRequest", 0x15C, "BoolProperty"},
            {"bDisableBackfillBeforeExpiration", 0x15D, "BoolProperty"},
            {"bDisableBackfillOnGracefulShutdown", 0x15E, "BoolProperty"},
            {"AlertDataList", 0x160, "ArrayProperty"},
            {"ServerShutdownTimeInSeconds", 0x170, "IntProperty"},
            {"DisableBackfillBeforeExpireTimeInSeconds", 0x174, "IntProperty"},
            {"PostShutdownForceRestartTimeInSeconds", 0x178, "IntProperty"},
            {"UINotificationIcon", 0x180, "SoftObjectProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x1F0, "StructProperty"},
            {"ShutdownTimeOverrides", 0x210, "ArrayProperty"},
        }};
    };

    struct FortDelMarProxyGhostVisualComponent
    {
        static constexpr std::string_view Name = "FortDelMarProxyGhostVisualComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarPlayerStateComponent";
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

    struct FortDelMarRaceMusicPlaylist
    {
        static constexpr std::string_view Name = "FortDelMarRaceMusicPlaylist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tracks", 0x28, "ArrayProperty"},
        }};
    };

    struct FortDelMarSpeedUpDevice
    {
        static constexpr std::string_view Name = "FortDelMarSpeedUpDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t bSuppressPlayTimeSimpleInteractionWidgetForTouch = 0xB50;
            static constexpr std::uintptr_t bServerNotifyOnLongUseInteraction = 0xB51;
            static constexpr std::uintptr_t bUseCollisionForInteractDistanceCheck = 0xB52;
            static constexpr std::uintptr_t bActorsBeingDeleted = 0xB53;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSuppressPlayTimeSimpleInteractionWidgetForTouch", 0xB50, "BoolProperty"},
            {"bServerNotifyOnLongUseInteraction", 0xB51, "BoolProperty"},
            {"bUseCollisionForInteractDistanceCheck", 0xB52, "BoolProperty"},
            {"bActorsBeingDeleted", 0xB53, "BoolProperty"},
        }};
    };

    struct FortDelMarSplineActorMovementComponent
    {
        static constexpr std::string_view Name = "FortDelMarSplineActorMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementSpline = 0xC0;
            static constexpr std::uintptr_t MovementSpeed = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MovementSpline", 0xC0, "WeakObjectProperty"},
            {"MovementSpeed", 0xC8, "FloatProperty"},
        }};
    };

    struct FortDelMarStateSequencerFXComponent
    {
        static constexpr std::string_view Name = "FortDelMarStateSequencerFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FXSizeScalar = 0xC0;
            static constexpr std::uintptr_t ParticleClassMap = 0xC8;
            static constexpr std::uintptr_t SpawnParams = 0xE0;
            static constexpr std::uintptr_t ParentRef = 0x150;
            static constexpr std::uintptr_t ParticleComponentMap = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FXSizeScalar", 0xC0, "FloatProperty"},
            {"ParticleClassMap", 0xC8, "MapProperty"},
            {"SpawnParams", 0xE0, "StructProperty"},
            {"ParentRef", 0x150, "ObjectProperty"},
            {"ParticleComponentMap", 0x158, "MapProperty"},
        }};
    };

    struct FortDelMarSubmixSendExtension
    {
        static constexpr std::string_view Name = "FortDelMarSubmixSendExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SendInterpTime = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SendInterpTime", 0xC8, "FloatProperty"},
        }};
    };

    struct FortDelMarTimeDelayedStateSequencer
    {
        static constexpr std::string_view Name = "FortDelMarTimeDelayedStateSequencer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCurrentStateChanged = 0x278;
            static constexpr std::uintptr_t OnEnabledChanged = 0x288;
            static constexpr std::uintptr_t bEnableOnSpawn = 0x298;
            static constexpr std::uintptr_t bLoopSpecificAmount = 0x299;
            static constexpr std::uintptr_t TotalLoopCount = 0x29C;
            static constexpr std::uintptr_t StateArray = 0x2A0;
            static constexpr std::uintptr_t bIsEnabled = 0x2BC;
            static constexpr std::uintptr_t CurrentStateIndex = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnCurrentStateChanged", 0x278, "MulticastInlineDelegateProperty"},
            {"OnEnabledChanged", 0x288, "MulticastInlineDelegateProperty"},
            {"bEnableOnSpawn", 0x298, "BoolProperty"},
            {"bLoopSpecificAmount", 0x299, "BoolProperty"},
            {"TotalLoopCount", 0x29C, "IntProperty"},
            {"StateArray", 0x2A0, "ArrayProperty"},
            {"bIsEnabled", 0x2BC, "BoolProperty"},
            {"CurrentStateIndex", 0x2C0, "IntProperty"},
        }};
    };

    struct FortDelMarTutorialInteractableSpline
    {
        static constexpr std::string_view Name = "FortDelMarTutorialInteractableSpline";
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

    struct FortDelMarTutorialTriggerActor
    {
        static constexpr std::string_view Name = "FortDelMarTutorialTriggerActor";
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

    struct FortDelMarUIInputControllerComponent
    {
        static constexpr std::string_view Name = "FortDelMarUIInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HudWidgetExpandAction = 0x128;
            static constexpr std::uintptr_t ToggleQuestListAction = 0x130;
            static constexpr std::uintptr_t InputManagerClass = 0x138;
            static constexpr std::uintptr_t InputComponent = 0x140;
            static constexpr std::uintptr_t PlayerState = 0x148;
            static constexpr std::uintptr_t PlayerController = 0x150;
            static constexpr std::uintptr_t PlayerPreferences = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HudWidgetExpandAction", 0x128, "ObjectProperty"},
            {"ToggleQuestListAction", 0x130, "ObjectProperty"},
            {"InputManagerClass", 0x138, "ClassProperty"},
            {"InputComponent", 0x140, "WeakObjectProperty"},
            {"PlayerState", 0x148, "WeakObjectProperty"},
            {"PlayerController", 0x150, "WeakObjectProperty"},
            {"PlayerPreferences", 0x158, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarVehicleAudioInterface
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAudioInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarVehiclePreferencesInterface
    {
        static constexpr std::string_view Name = "FortDelMarVehiclePreferencesInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

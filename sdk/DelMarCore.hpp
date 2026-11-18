#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarCore
{
    struct DelMarAIController
    {
        static constexpr std::string_view Name = "DelMarAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCosmeticLoadoutChanged = 0x3B8;
            static constexpr std::uintptr_t DescriptorTag = 0x3C8;
            static constexpr std::uintptr_t CharacterCosmeticLoadout = 0x3D0;
            static constexpr std::uintptr_t VehicleCosmeticLoadout = 0x3F8;
            static constexpr std::uintptr_t VehicleArchetype = 0x420;
            static constexpr std::uintptr_t BotSteerMethod = 0x424;
            static constexpr std::uintptr_t BTAssetToRunOnPawnAISpawned = 0x428;
            static constexpr std::uintptr_t SkillLevelBehaviorTrees = 0x430;
            static constexpr std::uintptr_t MinSkillLevelForRubberbanding = 0x440;
            static constexpr std::uintptr_t OobTubePositionRenderingComponentClass = 0x448;
            static constexpr std::uintptr_t DelMarVehicle = 0x450;
            static constexpr std::uintptr_t OnPawnDownedEvent = 0x468;
            static constexpr std::uintptr_t DelMarBotControllerUID = 0x478;
            static constexpr std::uintptr_t DelMarBotSkillLevel = 0x47C;
            static constexpr std::uintptr_t DelMarBotPlayerName = 0x480;
            static constexpr std::uintptr_t DelMarAIService = 0x490;
            static constexpr std::uintptr_t PlayerBotPawn = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"OnCosmeticLoadoutChanged", 0x3B8, "MulticastInlineDelegateProperty"},
            {"DescriptorTag", 0x3C8, "StructProperty"},
            {"CharacterCosmeticLoadout", 0x3D0, "StructProperty"},
            {"VehicleCosmeticLoadout", 0x3F8, "StructProperty"},
            {"VehicleArchetype", 0x420, "StructProperty"},
            {"BotSteerMethod", 0x424, "EnumProperty"},
            {"BTAssetToRunOnPawnAISpawned", 0x428, "ObjectProperty"},
            {"SkillLevelBehaviorTrees", 0x430, "ArrayProperty"},
            {"MinSkillLevelForRubberbanding", 0x440, "IntProperty"},
            {"OobTubePositionRenderingComponentClass", 0x448, "ClassProperty"},
            {"DelMarVehicle", 0x450, "WeakObjectProperty"},
            {"OnPawnDownedEvent", 0x468, "MulticastInlineDelegateProperty"},
            {"DelMarBotControllerUID", 0x478, "IntProperty"},
            {"DelMarBotSkillLevel", 0x47C, "IntProperty"},
            {"DelMarBotPlayerName", 0x480, "StrProperty"},
            {"DelMarAIService", 0x490, "ObjectProperty"},
            {"PlayerBotPawn", 0x498, "ObjectProperty"},
        }};
    };

    struct DelMarAIService
    {
        static constexpr std::string_view Name = "DelMarAIService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticComponentClass = 0x98;
            static constexpr std::uintptr_t VehicleCosmeticLibrary = 0xA0;
            static constexpr std::uintptr_t bBotsUniqueIDUseValidAccountID = 0xC0;
            static constexpr std::uintptr_t BotNameLibraryData = 0xC8;
            static constexpr std::uintptr_t AIControllerClass = 0xE8;
            static constexpr std::uintptr_t MMRSpawnTablePtr = 0xF0;
            static constexpr std::uintptr_t MaxBotFillRandomDeviation = 0x110;
            static constexpr std::uintptr_t DelMarAIControllers = 0x118;
            static constexpr std::uintptr_t RaceManager = 0x128;
            static constexpr std::uintptr_t RespawnManagerComponent = 0x130;
            static constexpr std::uintptr_t TrackManager = 0x138;
            static constexpr std::uintptr_t SortedSecondaryTracksAlongPrimary = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CosmeticComponentClass", 0x98, "ClassProperty"},
            {"VehicleCosmeticLibrary", 0xA0, "SoftObjectProperty"},
            {"bBotsUniqueIDUseValidAccountID", 0xC0, "BoolProperty"},
            {"BotNameLibraryData", 0xC8, "SoftObjectProperty"},
            {"AIControllerClass", 0xE8, "ClassProperty"},
            {"MMRSpawnTablePtr", 0xF0, "SoftObjectProperty"},
            {"MaxBotFillRandomDeviation", 0x110, "IntProperty"},
            {"DelMarAIControllers", 0x118, "ArrayProperty"},
            {"RaceManager", 0x128, "WeakObjectProperty"},
            {"RespawnManagerComponent", 0x130, "WeakObjectProperty"},
            {"TrackManager", 0x138, "WeakObjectProperty"},
            {"SortedSecondaryTracksAlongPrimary", 0x140, "ArrayProperty"},
        }};
    };

    struct DelMarAIVehicleCosmeticLibraryData
    {
        static constexpr std::string_view Name = "DelMarAIVehicleCosmeticLibraryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PredefineVehiclCosmeticSetsDataTable = 0x28;
            static constexpr std::uintptr_t CachedArchetypeTag = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PredefineVehiclCosmeticSetsDataTable", 0x28, "SoftObjectProperty"},
            {"CachedArchetypeTag", 0x48, "StructProperty"},
        }};
    };

    struct DelMarActorMover
    {
        static constexpr std::string_view Name = "DelMarActorMover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0xB58;
            static constexpr std::uintptr_t MovementSpline = 0xB60;
            static constexpr std::uintptr_t MovementType = 0xB68;
            static constexpr std::uintptr_t ManagedActor = 0xB70;
            static constexpr std::uintptr_t SplineMovementComponent = 0xB78;
            static constexpr std::uintptr_t ServerMovementStartTime = 0xB90;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ActorClass", 0xB58, "ClassProperty"},
            {"MovementSpline", 0xB60, "ObjectProperty"},
            {"MovementType", 0xB68, "EnumProperty"},
            {"ManagedActor", 0xB70, "ObjectProperty"},
            {"SplineMovementComponent", 0xB78, "ObjectProperty"},
            {"ServerMovementStartTime", 0xB90, "FloatProperty"},
        }};
    };

    struct DelMarAsyncPhysicsTickMutator
    {
        static constexpr std::string_view Name = "DelMarAsyncPhysicsTickMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncTickRate = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AsyncTickRate", 0x2F0, "FloatProperty"},
        }};
    };

    struct DelMarAudioComponentGroup
    {
        static constexpr std::string_view Name = "DelMarAudioComponentGroup";
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

    struct DelMarAudioController
    {
        static constexpr std::string_view Name = "DelMarAudioController";
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
            static constexpr std::uintptr_t bCanShift = 0x438;
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
            {"bCanShift", 0x438, "BoolProperty"},
        }};
    };

    struct DelMarAudioMixModifierExtension
    {
        static constexpr std::string_view Name = "DelMarAudioMixModifierExtension";
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

    struct DelMarAudioReverbComponent
    {
        static constexpr std::string_view Name = "DelMarAudioReverbComponent";
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
            static constexpr std::uintptr_t CachedVehicleOwner = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
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
            {"CachedVehicleOwner", 0x218, "ObjectProperty"},
        }};
    };

    struct DelMarBTService_ChooseNextTrack
    {
        static constexpr std::string_view Name = "DelMarBTService_ChooseNextTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarBTService_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTrackDecisionKey = 0xA0;
            static constexpr std::uintptr_t IsOffRoadDriveGoalKey = 0xC8;
            static constexpr std::uintptr_t IsJumpDriveGoalKey = 0xF0;
            static constexpr std::uintptr_t IsFullyBlockedCollisionKey = 0x118;
            static constexpr std::uintptr_t TrackDecisionMaxTrackDistanceOffset = 0x140;
            static constexpr std::uintptr_t TrackDecisionMinTrackDistanceOffset = 0x144;
            static constexpr std::uintptr_t TrackEndCheckTrackDistanceOffset = 0x148;
            static constexpr std::uintptr_t BotReachedNewTrackDistanceOffset = 0x14C;
            static constexpr std::uintptr_t SplineResetAvailableTrackIndexThreshold = 0x150;
            static constexpr std::uintptr_t AddKickflipWeightDegreeThreshold = 0x154;
            static constexpr std::uintptr_t TrackDecisionWeightMaxDistanceFromBot = 0x158;
            static constexpr std::uintptr_t TrackDecisionWeightMaxHeightFromBot = 0x15C;
            static constexpr std::uintptr_t TrackDecisionWeightDesirableHeightFromBot = 0x160;
            static constexpr std::uintptr_t MinDecisionDelaySecondsAfterChangingTracks = 0x164;
            static constexpr std::uintptr_t MaxDecisionDelaySecondsAfterChangingTracks = 0x168;
            static constexpr std::uintptr_t ShortcutWeightLookAheadTrackDistance = 0x16C;
            static constexpr std::uintptr_t PrimaryTrackGapMinDistanceThreshold = 0x170;
            static constexpr std::uintptr_t ForceNewTrackDecisionAfterSecondsIfFullyBlocked = 0x174;
            static constexpr std::uintptr_t SwitchTrackMaxDistanceThreshold = 0x178;
            static constexpr std::uintptr_t SwitchTrackMinDistanceThreshold = 0x17C;
            static constexpr std::uintptr_t TrackLengthRemainingPartitionAmount = 0x180;
            static constexpr std::uintptr_t TrackLengthRemainingCap = 0x184;
            static constexpr std::uintptr_t ValidRaycastDistanceThreshold = 0x188;
            static constexpr std::uintptr_t OffRoadSurfaceMaxNormalToTrackAngleThreshold = 0x18C;
            static constexpr std::uintptr_t RaycastVehicleForwardOffset = 0x190;
            static constexpr std::uintptr_t RaycastEndTrackForwardOffset = 0x194;
            static constexpr std::uintptr_t RaycastCollisionChannel = 0x198;
            static constexpr std::uintptr_t TrackLengthWeightPercentage = 0x19C;
            static constexpr std::uintptr_t DistanceFromBotWeightPercentage = 0x1A0;
            static constexpr std::uintptr_t HeightFromBotWeightPercentage = 0x1A4;
            static constexpr std::uintptr_t TrackOrientationWeightPercentage = 0x1A8;
            static constexpr std::uintptr_t ShortcutWeightMultiplier = 0x1AC;
            static constexpr std::uintptr_t AdditionalIndependentWeight = 0x1B0;
            static constexpr std::uintptr_t MaxRandomWeight = 0x1B4;
            static constexpr std::uintptr_t PrimaryTrackGapStaticWeightDeduction = 0x1B8;
            static constexpr std::uintptr_t BlackboardComponent = 0x1BC;
            static constexpr std::uintptr_t TargetTrackDecision = 0x1C4;
            static constexpr std::uintptr_t NextTrackDecision = 0x1CC;
            static constexpr std::uintptr_t AvailableTrackDecisions = 0x1D8;
            static constexpr std::uintptr_t AIService = 0x1E8;
            static constexpr std::uintptr_t TrackPositionComponent = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"TargetTrackDecisionKey", 0xA0, "StructProperty"},
            {"IsOffRoadDriveGoalKey", 0xC8, "StructProperty"},
            {"IsJumpDriveGoalKey", 0xF0, "StructProperty"},
            {"IsFullyBlockedCollisionKey", 0x118, "StructProperty"},
            {"TrackDecisionMaxTrackDistanceOffset", 0x140, "FloatProperty"},
            {"TrackDecisionMinTrackDistanceOffset", 0x144, "FloatProperty"},
            {"TrackEndCheckTrackDistanceOffset", 0x148, "FloatProperty"},
            {"BotReachedNewTrackDistanceOffset", 0x14C, "FloatProperty"},
            {"SplineResetAvailableTrackIndexThreshold", 0x150, "FloatProperty"},
            {"AddKickflipWeightDegreeThreshold", 0x154, "FloatProperty"},
            {"TrackDecisionWeightMaxDistanceFromBot", 0x158, "FloatProperty"},
            {"TrackDecisionWeightMaxHeightFromBot", 0x15C, "FloatProperty"},
            {"TrackDecisionWeightDesirableHeightFromBot", 0x160, "FloatProperty"},
            {"MinDecisionDelaySecondsAfterChangingTracks", 0x164, "FloatProperty"},
            {"MaxDecisionDelaySecondsAfterChangingTracks", 0x168, "FloatProperty"},
            {"ShortcutWeightLookAheadTrackDistance", 0x16C, "FloatProperty"},
            {"PrimaryTrackGapMinDistanceThreshold", 0x170, "FloatProperty"},
            {"ForceNewTrackDecisionAfterSecondsIfFullyBlocked", 0x174, "FloatProperty"},
            {"SwitchTrackMaxDistanceThreshold", 0x178, "FloatProperty"},
            {"SwitchTrackMinDistanceThreshold", 0x17C, "FloatProperty"},
            {"TrackLengthRemainingPartitionAmount", 0x180, "FloatProperty"},
            {"TrackLengthRemainingCap", 0x184, "FloatProperty"},
            {"ValidRaycastDistanceThreshold", 0x188, "FloatProperty"},
            {"OffRoadSurfaceMaxNormalToTrackAngleThreshold", 0x18C, "FloatProperty"},
            {"RaycastVehicleForwardOffset", 0x190, "FloatProperty"},
            {"RaycastEndTrackForwardOffset", 0x194, "FloatProperty"},
            {"RaycastCollisionChannel", 0x198, "ByteProperty"},
            {"TrackLengthWeightPercentage", 0x19C, "FloatProperty"},
            {"DistanceFromBotWeightPercentage", 0x1A0, "FloatProperty"},
            {"HeightFromBotWeightPercentage", 0x1A4, "FloatProperty"},
            {"TrackOrientationWeightPercentage", 0x1A8, "FloatProperty"},
            {"ShortcutWeightMultiplier", 0x1AC, "FloatProperty"},
            {"AdditionalIndependentWeight", 0x1B0, "FloatProperty"},
            {"MaxRandomWeight", 0x1B4, "FloatProperty"},
            {"PrimaryTrackGapStaticWeightDeduction", 0x1B8, "FloatProperty"},
            {"BlackboardComponent", 0x1BC, "WeakObjectProperty"},
            {"TargetTrackDecision", 0x1C4, "WeakObjectProperty"},
            {"NextTrackDecision", 0x1CC, "WeakObjectProperty"},
            {"AvailableTrackDecisions", 0x1D8, "ArrayProperty"},
            {"AIService", 0x1E8, "WeakObjectProperty"},
            {"TrackPositionComponent", 0x1F0, "WeakObjectProperty"},
        }};
    };

    struct DelMarBTService_FindDriveGoal
    {
        static constexpr std::string_view Name = "DelMarBTService_FindDriveGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarBTService_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTrackDecisionKey = 0xA0;
            static constexpr std::uintptr_t DriveGoalLocationKey = 0xC8;
            static constexpr std::uintptr_t DriveGoalRotationKey = 0xF0;
            static constexpr std::uintptr_t IsJumpDriveGoalKey = 0x118;
            static constexpr std::uintptr_t IsOffRoadDriveGoalKey = 0x140;
            static constexpr std::uintptr_t IsKickflipDriveGoalKey = 0x168;
            static constexpr std::uintptr_t KickflipDirectionKey = 0x190;
            static constexpr std::uintptr_t HasUpcomingCollisionKey = 0x1B8;
            static constexpr std::uintptr_t IsFullyBlockedCollisionKey = 0x1E0;
            static constexpr std::uintptr_t GroundedDriveGoalVehicleForwardOffset = 0x208;
            static constexpr std::uintptr_t TrackGapDriveGoalVehicleForwardOffset = 0x20C;
            static constexpr std::uintptr_t AirDriveGoalVehicleForwardOffset = 0x210;
            static constexpr std::uintptr_t PathNoiseAmplitude = 0x214;
            static constexpr std::uintptr_t PathNoiseFrequency = 0x218;
            static constexpr std::uintptr_t MaxNumberOfCheckedTrackSegments = 0x21C;
            static constexpr std::uintptr_t GroundedOffroadRaycastDistance = 0x220;
            static constexpr std::uintptr_t GroundedOffRoadRaycastTrackForwardOffset = 0x224;
            static constexpr std::uintptr_t TrackGapCheckForwardOffset = 0x228;
            static constexpr std::uintptr_t ReturnToTrackRaycastForwardOffset = 0x22C;
            static constexpr std::uintptr_t ReturnToTrackRaycastDepthPadding = 0x230;
            static constexpr std::uintptr_t ReturnToTrackMaintainVehicleOffsetDegreeThreshold = 0x234;
            static constexpr std::uintptr_t ReturnToTrackRaycastMinAngleDifference = 0x238;
            static constexpr std::uintptr_t UnsafeLandingDesiredUnderthrustHeightFactor = 0x23C;
            static constexpr std::uintptr_t UnsafeLandingJumpGoalTrackOffsetReductionFactor = 0x240;
            static constexpr std::uintptr_t OffRoadSurfaceMaxNormalToTrackAngleThreshold = 0x244;
            static constexpr std::uintptr_t MaxVehicleAirRollAngleToReturnToTrackFromBelow = 0x248;
            static constexpr std::uintptr_t NumberOfSideAvoidanceRaycasts = 0x24C;
            static constexpr std::uintptr_t DegreesBetweenRaycasts = 0x250;
            static constexpr std::uintptr_t TrackInclineMaxRaycastDirectionRotationDegrees = 0x254;
            static constexpr std::uintptr_t DriftPrimaryTraceRotationFactor = 0x258;
            static constexpr std::uintptr_t NonJumpableHazardMinHitNormalDegrees = 0x25C;
            static constexpr std::uintptr_t AvoidanceTraceVerticalSpread = 0x260;
            static constexpr std::uintptr_t RaycastCollisionChannel = 0x264;
            static constexpr std::uintptr_t IgnoredActorClasses = 0x268;
            static constexpr std::uintptr_t RaycastDistanceCurve = 0x278;
            static constexpr std::uintptr_t RayCastDistanceContributionCurve = 0x2C8;
            static constexpr std::uintptr_t VehicleDistanceAvoidanceCurve = 0x318;
            static constexpr std::uintptr_t DriveGoalOffsetCancelPadding = 0x368;
            static constexpr std::uintptr_t DriveHazardOffsetCancelPadding = 0x36C;
            static constexpr std::uintptr_t VehicleTrackOffsetCancelPadding = 0x370;
            static constexpr std::uintptr_t DriveGoalOffsetMinTrackDepth = 0x374;
            static constexpr std::uintptr_t DriveHazardMaxJumpDistanceFactor = 0x378;
            static constexpr std::uintptr_t DriveHazardMinJumpDistanceFactor = 0x37C;
            static constexpr std::uintptr_t HazardJumpGoalMaxHeightOffset = 0x380;
            static constexpr std::uintptr_t HazardJumpGoalMinHeightOffset = 0x384;
            static constexpr std::uintptr_t BlockedJumpTracePadding = 0x388;
            static constexpr std::uintptr_t TrackGapJumpHeightThreshold = 0x38C;
            static constexpr std::uintptr_t TrackGapDriveGoalHeightOffset = 0x390;
            static constexpr std::uintptr_t VerticalTrackTransitionVehicleExtentMultiplier = 0x394;
            static constexpr std::uintptr_t JumpableActorClasses = 0x398;
            static constexpr std::uintptr_t SideKickflipSurfaceNormalDegreeThreshold = 0x3A8;
            static constexpr std::uintptr_t UpwardKickflipMinNormalDegreesToWorldUp = 0x3AC;
            static constexpr std::uintptr_t KickflipDriveGoalTrackHeightOffset = 0x3B0;
            static constexpr std::uintptr_t KickflipDriveGoalForwardDistanceThreshold = 0x3B4;
            static constexpr std::uintptr_t UnderKickflipSurfaceForwardDistanceThreshold = 0x3B8;
            static constexpr std::uintptr_t KickflipTraceHeightOffset = 0x3BC;
            static constexpr std::uintptr_t KickflipTraceMaximumHeightFromTrack = 0x3C0;
            static constexpr std::uintptr_t KickflipMinimumDownwardDistanceFromTrack = 0x3C4;
            static constexpr std::uintptr_t PercentChanceToAllowDownKickflip = 0x3C8;
            static constexpr std::uintptr_t PercentChanceToExecuteDownKickflipCurve = 0x3D0;
            static constexpr std::uintptr_t SwitchTrackJumpHeightThreshold = 0x420;
            static constexpr std::uintptr_t SwitchTrackToPipeHeightOffsetFactor = 0x424;
            static constexpr std::uintptr_t PercentChanceToIgnoreDriveHazard = 0x428;
            static constexpr std::uintptr_t PercentChanceToNotCheckForSafeLanding = 0x42C;
            static constexpr std::uintptr_t BlackboardComponent = 0x430;
            static constexpr std::uintptr_t TrackPositionComponent = 0x438;
            static constexpr std::uintptr_t TargetTrack = 0x440;
            static constexpr std::uintptr_t TargetTrackSplineComponent = 0x448;
            static constexpr std::uintptr_t ActiveTrack = 0x450;
            static constexpr std::uintptr_t ActiveTrackSplineComponent = 0x458;
            static constexpr std::uintptr_t OobTubePositionalRenderingComponent = 0x460;
            static constexpr std::uintptr_t OffRoadDriveActor = 0x478;
            static constexpr std::uintptr_t KickflipTrack = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 73> Properties{{
            {"TargetTrackDecisionKey", 0xA0, "StructProperty"},
            {"DriveGoalLocationKey", 0xC8, "StructProperty"},
            {"DriveGoalRotationKey", 0xF0, "StructProperty"},
            {"IsJumpDriveGoalKey", 0x118, "StructProperty"},
            {"IsOffRoadDriveGoalKey", 0x140, "StructProperty"},
            {"IsKickflipDriveGoalKey", 0x168, "StructProperty"},
            {"KickflipDirectionKey", 0x190, "StructProperty"},
            {"HasUpcomingCollisionKey", 0x1B8, "StructProperty"},
            {"IsFullyBlockedCollisionKey", 0x1E0, "StructProperty"},
            {"GroundedDriveGoalVehicleForwardOffset", 0x208, "FloatProperty"},
            {"TrackGapDriveGoalVehicleForwardOffset", 0x20C, "FloatProperty"},
            {"AirDriveGoalVehicleForwardOffset", 0x210, "FloatProperty"},
            {"PathNoiseAmplitude", 0x214, "FloatProperty"},
            {"PathNoiseFrequency", 0x218, "FloatProperty"},
            {"MaxNumberOfCheckedTrackSegments", 0x21C, "IntProperty"},
            {"GroundedOffroadRaycastDistance", 0x220, "FloatProperty"},
            {"GroundedOffRoadRaycastTrackForwardOffset", 0x224, "FloatProperty"},
            {"TrackGapCheckForwardOffset", 0x228, "FloatProperty"},
            {"ReturnToTrackRaycastForwardOffset", 0x22C, "FloatProperty"},
            {"ReturnToTrackRaycastDepthPadding", 0x230, "FloatProperty"},
            {"ReturnToTrackMaintainVehicleOffsetDegreeThreshold", 0x234, "FloatProperty"},
            {"ReturnToTrackRaycastMinAngleDifference", 0x238, "FloatProperty"},
            {"UnsafeLandingDesiredUnderthrustHeightFactor", 0x23C, "FloatProperty"},
            {"UnsafeLandingJumpGoalTrackOffsetReductionFactor", 0x240, "FloatProperty"},
            {"OffRoadSurfaceMaxNormalToTrackAngleThreshold", 0x244, "FloatProperty"},
            {"MaxVehicleAirRollAngleToReturnToTrackFromBelow", 0x248, "FloatProperty"},
            {"NumberOfSideAvoidanceRaycasts", 0x24C, "IntProperty"},
            {"DegreesBetweenRaycasts", 0x250, "FloatProperty"},
            {"TrackInclineMaxRaycastDirectionRotationDegrees", 0x254, "FloatProperty"},
            {"DriftPrimaryTraceRotationFactor", 0x258, "FloatProperty"},
            {"NonJumpableHazardMinHitNormalDegrees", 0x25C, "FloatProperty"},
            {"AvoidanceTraceVerticalSpread", 0x260, "FloatProperty"},
            {"RaycastCollisionChannel", 0x264, "ByteProperty"},
            {"IgnoredActorClasses", 0x268, "ArrayProperty"},
            {"RaycastDistanceCurve", 0x278, "StructProperty"},
            {"RayCastDistanceContributionCurve", 0x2C8, "StructProperty"},
            {"VehicleDistanceAvoidanceCurve", 0x318, "StructProperty"},
            {"DriveGoalOffsetCancelPadding", 0x368, "FloatProperty"},
            {"DriveHazardOffsetCancelPadding", 0x36C, "FloatProperty"},
            {"VehicleTrackOffsetCancelPadding", 0x370, "FloatProperty"},
            {"DriveGoalOffsetMinTrackDepth", 0x374, "FloatProperty"},
            {"DriveHazardMaxJumpDistanceFactor", 0x378, "FloatProperty"},
            {"DriveHazardMinJumpDistanceFactor", 0x37C, "FloatProperty"},
            {"HazardJumpGoalMaxHeightOffset", 0x380, "FloatProperty"},
            {"HazardJumpGoalMinHeightOffset", 0x384, "FloatProperty"},
            {"BlockedJumpTracePadding", 0x388, "FloatProperty"},
            {"TrackGapJumpHeightThreshold", 0x38C, "FloatProperty"},
            {"TrackGapDriveGoalHeightOffset", 0x390, "FloatProperty"},
            {"VerticalTrackTransitionVehicleExtentMultiplier", 0x394, "FloatProperty"},
            {"JumpableActorClasses", 0x398, "ArrayProperty"},
            {"SideKickflipSurfaceNormalDegreeThreshold", 0x3A8, "FloatProperty"},
            {"UpwardKickflipMinNormalDegreesToWorldUp", 0x3AC, "FloatProperty"},
            {"KickflipDriveGoalTrackHeightOffset", 0x3B0, "FloatProperty"},
            {"KickflipDriveGoalForwardDistanceThreshold", 0x3B4, "FloatProperty"},
            {"UnderKickflipSurfaceForwardDistanceThreshold", 0x3B8, "FloatProperty"},
            {"KickflipTraceHeightOffset", 0x3BC, "FloatProperty"},
            {"KickflipTraceMaximumHeightFromTrack", 0x3C0, "FloatProperty"},
            {"KickflipMinimumDownwardDistanceFromTrack", 0x3C4, "FloatProperty"},
            {"PercentChanceToAllowDownKickflip", 0x3C8, "FloatProperty"},
            {"PercentChanceToExecuteDownKickflipCurve", 0x3D0, "StructProperty"},
            {"SwitchTrackJumpHeightThreshold", 0x420, "FloatProperty"},
            {"SwitchTrackToPipeHeightOffsetFactor", 0x424, "FloatProperty"},
            {"PercentChanceToIgnoreDriveHazard", 0x428, "FloatProperty"},
            {"PercentChanceToNotCheckForSafeLanding", 0x42C, "FloatProperty"},
            {"BlackboardComponent", 0x430, "WeakObjectProperty"},
            {"TrackPositionComponent", 0x438, "WeakObjectProperty"},
            {"TargetTrack", 0x440, "WeakObjectProperty"},
            {"TargetTrackSplineComponent", 0x448, "WeakObjectProperty"},
            {"ActiveTrack", 0x450, "WeakObjectProperty"},
            {"ActiveTrackSplineComponent", 0x458, "WeakObjectProperty"},
            {"OobTubePositionalRenderingComponent", 0x460, "WeakObjectProperty"},
            {"OffRoadDriveActor", 0x478, "WeakObjectProperty"},
            {"KickflipTrack", 0x490, "WeakObjectProperty"},
        }};
    };

    struct DelMarBTService_ResetVehicle
    {
        static constexpr std::string_view Name = "DelMarBTService_ResetVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarBTService_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CancelResetMinRequiredDistance = 0xA0;
            static constexpr std::uintptr_t CancelResetMaxRequiredDistance = 0xA4;
            static constexpr std::uintptr_t PlayerRaceDataComponent = 0xA8;
            static constexpr std::uintptr_t TrackPositionComponent = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CancelResetMinRequiredDistance", 0xA0, "FloatProperty"},
            {"CancelResetMaxRequiredDistance", 0xA4, "FloatProperty"},
            {"PlayerRaceDataComponent", 0xA8, "WeakObjectProperty"},
            {"TrackPositionComponent", 0xB0, "WeakObjectProperty"},
        }};
    };

    struct DelMarBTService_VehicleBase
    {
        static constexpr std::string_view Name = "DelMarBTService_VehicleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleKey = 0x70;
            static constexpr std::uintptr_t DelMarVehicle = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VehicleKey", 0x70, "StructProperty"},
            {"DelMarVehicle", 0x98, "WeakObjectProperty"},
        }};
    };

    struct DelMarBTTask_DriveTrack
    {
        static constexpr std::string_view Name = "DelMarBTTask_DriveTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarBTTask_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTrackDecisionKey = 0xA0;
            static constexpr std::uintptr_t DriveGoalLocationKey = 0xC8;
            static constexpr std::uintptr_t DriveGoalRotationKey = 0xF0;
            static constexpr std::uintptr_t IsJumpDriveGoalKey = 0x118;
            static constexpr std::uintptr_t IsOffRoadDriveGoalKey = 0x140;
            static constexpr std::uintptr_t IsKickflipDriveGoalKey = 0x168;
            static constexpr std::uintptr_t KickflipDirectionKey = 0x190;
            static constexpr std::uintptr_t HasUpcomingCollisionKey = 0x1B8;
            static constexpr std::uintptr_t GroundedTrackHorizontalOffsetSteerCurve = 0x1E0;
            static constexpr std::uintptr_t AirTrackHorizontalOffsetSteerCurve = 0x230;
            static constexpr std::uintptr_t CollisionAvoidanceHorizontalOffsetSteerCurve = 0x280;
            static constexpr std::uintptr_t AirCollisionAvoidanceHorizontalSteerDecisionCurve = 0x2D0;
            static constexpr std::uintptr_t GroundedTurnDegreesSteerDecisionCurve = 0x320;
            static constexpr std::uintptr_t AirTurnDegreesSteerDecisionCurve = 0x370;
            static constexpr std::uintptr_t CollisionTurnDegreesSteerDecisionCurve = 0x3C0;
            static constexpr std::uintptr_t DriveThrottle = 0x410;
            static constexpr std::uintptr_t bCanKickDrift = 0x414;
            static constexpr std::uintptr_t NumberOfDriftCheckSamples = 0x418;
            static constexpr std::uintptr_t MinDriftSampleDistanceScaleFactor = 0x41C;
            static constexpr std::uintptr_t MaxDriftSampleDistanceScaleFactor = 0x420;
            static constexpr std::uintptr_t MinExitDriftSampleDistanceFromVehicle = 0x424;
            static constexpr std::uintptr_t MaxExitDriftSampleDistanceFromVehicle = 0x428;
            static constexpr std::uintptr_t MinRequiredDriftDegrees = 0x42C;
            static constexpr std::uintptr_t MaxRequiredDriftDegrees = 0x430;
            static constexpr std::uintptr_t MinRequiredKickDriftDegrees = 0x434;
            static constexpr std::uintptr_t MaxRequiredKickDriftDegrees = 0x438;
            static constexpr std::uintptr_t MinSecondsToUpdateRandomDriftConfigValues = 0x43C;
            static constexpr std::uintptr_t PercentChanceToKickDriftCurve = 0x440;
            static constexpr std::uintptr_t MinDriftSlipRatioForExitKickDrift = 0x490;
            static constexpr std::uintptr_t MinDriftSpeed = 0x494;
            static constexpr std::uintptr_t DriftKickUnderSteerDegreesThreshold = 0x498;
            static constexpr std::uintptr_t DriftKickOverSteerDegreesThreshold = 0x49C;
            static constexpr std::uintptr_t DriftTapUnderSteerDegreesThreshold = 0x4A0;
            static constexpr std::uintptr_t DriftTapOverSteerDegreesThreshold = 0x4A4;
            static constexpr std::uintptr_t DriftCounterSteerDegreesThreshold = 0x4A8;
            static constexpr std::uintptr_t MinDriftSlipRatioCurve = 0x4B0;
            static constexpr std::uintptr_t DistanceBetweenDriftSamplesCurve = 0x500;
            static constexpr std::uintptr_t DriftSampleDistanceFromVehicleCurve = 0x550;
            static constexpr std::uintptr_t DriveGoalJumpHeightThresholdCurve = 0x5A0;
            static constexpr std::uintptr_t JumpGoalTrackAngleDistanceOffset = 0x5F0;
            static constexpr std::uintptr_t JumpMinSpeed = 0x5F4;
            static constexpr std::uintptr_t MinimumUnderthrustPitch = 0x5F8;
            static constexpr std::uintptr_t AirPitchAdjustmentCurve = 0x600;
            static constexpr std::uintptr_t AirPitchAdjustmentMaxVerticalDegrees = 0x650;
            static constexpr std::uintptr_t MinNumTurboChargesNeededToTurbo = 0x654;
            static constexpr std::uintptr_t MaxTurboTrackCutoffAngleInDegrees = 0x658;
            static constexpr std::uintptr_t TurboActivationBaseChance = 0x65C;
            static constexpr std::uintptr_t SecondaryTurboBoostChance = 0x660;
            static constexpr std::uintptr_t MinTimeBetweenTurboCheck = 0x664;
            static constexpr std::uintptr_t MaxTimeBetweenTurboCheck = 0x668;
            static constexpr std::uintptr_t TrackPositionComponent = 0x66C;
            static constexpr std::uintptr_t TargetTrack = 0x674;
            static constexpr std::uintptr_t TargetTrackSplineComponent = 0x67C;
            static constexpr std::uintptr_t BlackboardComponent = 0x684;
        };

        inline static constexpr std::array<PropertyInfo, 54> Properties{{
            {"TargetTrackDecisionKey", 0xA0, "StructProperty"},
            {"DriveGoalLocationKey", 0xC8, "StructProperty"},
            {"DriveGoalRotationKey", 0xF0, "StructProperty"},
            {"IsJumpDriveGoalKey", 0x118, "StructProperty"},
            {"IsOffRoadDriveGoalKey", 0x140, "StructProperty"},
            {"IsKickflipDriveGoalKey", 0x168, "StructProperty"},
            {"KickflipDirectionKey", 0x190, "StructProperty"},
            {"HasUpcomingCollisionKey", 0x1B8, "StructProperty"},
            {"GroundedTrackHorizontalOffsetSteerCurve", 0x1E0, "StructProperty"},
            {"AirTrackHorizontalOffsetSteerCurve", 0x230, "StructProperty"},
            {"CollisionAvoidanceHorizontalOffsetSteerCurve", 0x280, "StructProperty"},
            {"AirCollisionAvoidanceHorizontalSteerDecisionCurve", 0x2D0, "StructProperty"},
            {"GroundedTurnDegreesSteerDecisionCurve", 0x320, "StructProperty"},
            {"AirTurnDegreesSteerDecisionCurve", 0x370, "StructProperty"},
            {"CollisionTurnDegreesSteerDecisionCurve", 0x3C0, "StructProperty"},
            {"DriveThrottle", 0x410, "FloatProperty"},
            {"bCanKickDrift", 0x414, "BoolProperty"},
            {"NumberOfDriftCheckSamples", 0x418, "IntProperty"},
            {"MinDriftSampleDistanceScaleFactor", 0x41C, "FloatProperty"},
            {"MaxDriftSampleDistanceScaleFactor", 0x420, "FloatProperty"},
            {"MinExitDriftSampleDistanceFromVehicle", 0x424, "FloatProperty"},
            {"MaxExitDriftSampleDistanceFromVehicle", 0x428, "FloatProperty"},
            {"MinRequiredDriftDegrees", 0x42C, "FloatProperty"},
            {"MaxRequiredDriftDegrees", 0x430, "FloatProperty"},
            {"MinRequiredKickDriftDegrees", 0x434, "FloatProperty"},
            {"MaxRequiredKickDriftDegrees", 0x438, "FloatProperty"},
            {"MinSecondsToUpdateRandomDriftConfigValues", 0x43C, "FloatProperty"},
            {"PercentChanceToKickDriftCurve", 0x440, "StructProperty"},
            {"MinDriftSlipRatioForExitKickDrift", 0x490, "FloatProperty"},
            {"MinDriftSpeed", 0x494, "FloatProperty"},
            {"DriftKickUnderSteerDegreesThreshold", 0x498, "FloatProperty"},
            {"DriftKickOverSteerDegreesThreshold", 0x49C, "FloatProperty"},
            {"DriftTapUnderSteerDegreesThreshold", 0x4A0, "FloatProperty"},
            {"DriftTapOverSteerDegreesThreshold", 0x4A4, "FloatProperty"},
            {"DriftCounterSteerDegreesThreshold", 0x4A8, "FloatProperty"},
            {"MinDriftSlipRatioCurve", 0x4B0, "StructProperty"},
            {"DistanceBetweenDriftSamplesCurve", 0x500, "StructProperty"},
            {"DriftSampleDistanceFromVehicleCurve", 0x550, "StructProperty"},
            {"DriveGoalJumpHeightThresholdCurve", 0x5A0, "StructProperty"},
            {"JumpGoalTrackAngleDistanceOffset", 0x5F0, "FloatProperty"},
            {"JumpMinSpeed", 0x5F4, "FloatProperty"},
            {"MinimumUnderthrustPitch", 0x5F8, "FloatProperty"},
            {"AirPitchAdjustmentCurve", 0x600, "StructProperty"},
            {"AirPitchAdjustmentMaxVerticalDegrees", 0x650, "FloatProperty"},
            {"MinNumTurboChargesNeededToTurbo", 0x654, "FloatProperty"},
            {"MaxTurboTrackCutoffAngleInDegrees", 0x658, "FloatProperty"},
            {"TurboActivationBaseChance", 0x65C, "FloatProperty"},
            {"SecondaryTurboBoostChance", 0x660, "FloatProperty"},
            {"MinTimeBetweenTurboCheck", 0x664, "FloatProperty"},
            {"MaxTimeBetweenTurboCheck", 0x668, "FloatProperty"},
            {"TrackPositionComponent", 0x66C, "WeakObjectProperty"},
            {"TargetTrack", 0x674, "WeakObjectProperty"},
            {"TargetTrackSplineComponent", 0x67C, "WeakObjectProperty"},
            {"BlackboardComponent", 0x684, "WeakObjectProperty"},
        }};
    };

    struct DelMarBTTask_RaceCountdown
    {
        static constexpr std::string_view Name = "DelMarBTTask_RaceCountdown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarBTTask_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxReactionTime = 0xA0;
            static constexpr std::uintptr_t MinReactionTime = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxReactionTime", 0xA0, "FloatProperty"},
            {"MinReactionTime", 0xA4, "FloatProperty"},
        }};
    };

    struct DelMarBTTask_VehicleBase
    {
        static constexpr std::string_view Name = "DelMarBTTask_VehicleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleKey = 0x70;
            static constexpr std::uintptr_t DelMarVehicle = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VehicleKey", 0x70, "StructProperty"},
            {"DelMarVehicle", 0x98, "WeakObjectProperty"},
        }};
    };

    struct DelMarBlueprintLibrary
    {
        static constexpr std::string_view Name = "DelMarBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarCameraComponent
    {
        static constexpr std::string_view Name = "DelMarCameraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleManager = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VehicleManager", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct DelMarCameraInputControllerComponent
    {
        static constexpr std::string_view Name = "DelMarCameraInputControllerComponent";
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

    struct DelMarCameraModeOverrideComponent
    {
        static constexpr std::string_view Name = "DelMarCameraModeOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModeOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraModeOverride = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraModeOverride", 0xC0, "ClassProperty"},
        }};
    };

    struct DelMarCameraShakeComponent
    {
        static constexpr std::string_view Name = "DelMarCameraShakeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeIntensitySettingMap = 0xC0;
            static constexpr std::uintptr_t JumpShakeEffect = 0xD0;
            static constexpr std::uintptr_t HazardShakeEffect = 0xD8;
            static constexpr std::uintptr_t bUseVehicleLandedKickflipShake = 0xE0;
            static constexpr std::uintptr_t VehicleLandedKickflipShake = 0xE8;
            static constexpr std::uintptr_t VehicleLandedKickflipShakeIntensityCurve = 0xF0;
            static constexpr std::uintptr_t VehicleLandedCameraShakeEffect = 0x140;
            static constexpr std::uintptr_t VehicleLandedShakeIntensityCurve = 0x148;
            static constexpr std::uintptr_t MaxSecondsToDampenVehicleHit = 0x198;
            static constexpr std::uintptr_t VehicleHitShakeIntensityCurve = 0x1A0;
            static constexpr std::uintptr_t VehicleImpactShakeEffect = 0x1F0;
            static constexpr std::uintptr_t WallImpactShakeEffect = 0x250;
            static constexpr std::uintptr_t WallNoRedirectImpactShakeEffect = 0x2B0;
            static constexpr std::uintptr_t BaseAccelerationShakeEffect = 0x310;
            static constexpr std::uintptr_t Vehicle = 0x370;
            static constexpr std::uintptr_t CachedPlayerController = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ShakeIntensitySettingMap", 0xC0, "MapProperty"},
            {"JumpShakeEffect", 0xD0, "ClassProperty"},
            {"HazardShakeEffect", 0xD8, "ClassProperty"},
            {"bUseVehicleLandedKickflipShake", 0xE0, "BoolProperty"},
            {"VehicleLandedKickflipShake", 0xE8, "ClassProperty"},
            {"VehicleLandedKickflipShakeIntensityCurve", 0xF0, "StructProperty"},
            {"VehicleLandedCameraShakeEffect", 0x140, "ClassProperty"},
            {"VehicleLandedShakeIntensityCurve", 0x148, "StructProperty"},
            {"MaxSecondsToDampenVehicleHit", 0x198, "FloatProperty"},
            {"VehicleHitShakeIntensityCurve", 0x1A0, "StructProperty"},
            {"VehicleImpactShakeEffect", 0x1F0, "StructProperty"},
            {"WallImpactShakeEffect", 0x250, "StructProperty"},
            {"WallNoRedirectImpactShakeEffect", 0x2B0, "StructProperty"},
            {"BaseAccelerationShakeEffect", 0x310, "StructProperty"},
            {"Vehicle", 0x370, "InterfaceProperty"},
            {"CachedPlayerController", 0x380, "WeakObjectProperty"},
        }};
    };

    struct DelMarChallengeGhostSystemControllerComponent
    {
        static constexpr std::string_view Name = "DelMarChallengeGhostSystemControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GhostPlaybackSessionComponentClass = 0xC0;
            static constexpr std::uintptr_t GhostRecordingSessionComponentClass = 0xC8;
            static constexpr std::uintptr_t BestRunTime = 0xD0;
            static constexpr std::uintptr_t CachedPlaybackSession = 0xD8;
            static constexpr std::uintptr_t CachedRecordingSession = 0xE0;
            static constexpr std::uintptr_t CachedRaceManager = 0xE8;
            static constexpr std::uintptr_t CachedLocalPlayerState = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GhostPlaybackSessionComponentClass", 0xC0, "ClassProperty"},
            {"GhostRecordingSessionComponentClass", 0xC8, "ClassProperty"},
            {"BestRunTime", 0xD0, "DoubleProperty"},
            {"CachedPlaybackSession", 0xD8, "WeakObjectProperty"},
            {"CachedRecordingSession", 0xE0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE8, "WeakObjectProperty"},
            {"CachedLocalPlayerState", 0xF0, "WeakObjectProperty"},
        }};
    };

    struct DelMarChallengeRaceManager
    {
        static constexpr std::string_view Name = "DelMarChallengeRaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOvertime = 0x430;
            static constexpr std::uintptr_t OvertimeTimer = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsOvertime", 0x430, "BoolProperty"},
            {"OvertimeTimer", 0x438, "StructProperty"},
        }};
    };

    struct DelMarChallengeRacerStateMachineComponent
    {
        static constexpr std::string_view Name = "DelMarChallengeRacerStateMachineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerStateMachineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceManager = 0x188;
            static constexpr std::uintptr_t PreviousStateTag = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RaceManager", 0x188, "WeakObjectProperty"},
            {"PreviousStateTag", 0x190, "StructProperty"},
        }};
    };

    struct DelMarChallengeRacerState_RunActive
    {
        static constexpr std::string_view Name = "DelMarChallengeRacerState_RunActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarChallengeSpectatorControllerComponent
    {
        static constexpr std::string_view Name = "DelMarChallengeSpectatorControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarSpectatorControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectateNextPlayerAction = 0xC0;
            static constexpr std::uintptr_t SpectatePrevPlayerAction = 0xC8;
            static constexpr std::uintptr_t ExitSpectateAction = 0xD0;
            static constexpr std::uintptr_t InputManagerClass = 0xD8;
            static constexpr std::uintptr_t InputComponent = 0xE0;
            static constexpr std::uintptr_t CachedRaceManager = 0xE8;
            static constexpr std::uintptr_t SpectatorRequestComponent = 0xF0;
            static constexpr std::uintptr_t CurrentViewTarget = 0xF8;
            static constexpr std::uintptr_t PrevValidViewTarget = 0x100;
            static constexpr std::uintptr_t SpectatorPlayerState = 0x108;
            static constexpr std::uintptr_t SpectatorController = 0x110;
            static constexpr std::uintptr_t bIsLateJoinSpectator = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SpectateNextPlayerAction", 0xC0, "ObjectProperty"},
            {"SpectatePrevPlayerAction", 0xC8, "ObjectProperty"},
            {"ExitSpectateAction", 0xD0, "ObjectProperty"},
            {"InputManagerClass", 0xD8, "ClassProperty"},
            {"InputComponent", 0xE0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE8, "WeakObjectProperty"},
            {"SpectatorRequestComponent", 0xF0, "WeakObjectProperty"},
            {"CurrentViewTarget", 0xF8, "WeakObjectProperty"},
            {"PrevValidViewTarget", 0x100, "WeakObjectProperty"},
            {"SpectatorPlayerState", 0x108, "WeakObjectProperty"},
            {"SpectatorController", 0x110, "WeakObjectProperty"},
            {"bIsLateJoinSpectator", 0x118, "BoolProperty"},
        }};
    };

    struct DelMarChallengeTimeManagerComponent
    {
        static constexpr std::string_view Name = "DelMarChallengeTimeManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTimeManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SubsequentRunStartSet = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubsequentRunStartSet", 0x118, "SetProperty"},
        }};
    };

    struct DelMarCheatManager
    {
        static constexpr std::string_view Name = "DelMarCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t SafePlayerNames = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SafePlayerNames", 0x28, "ArrayProperty"},
        }};
    };

    struct DelMarCheckpoint
    {
        static constexpr std::string_view Name = "DelMarCheckpoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCheckpointTirggeredEvent = 0xB58;
            static constexpr std::uintptr_t bIsFinishLine = 0xB69;
            static constexpr std::uintptr_t bIsStartingLine = 0xB69;
            static constexpr std::uintptr_t bIsTeleportEnabled = 0xB69;
            static constexpr std::uintptr_t bIsTimeTrialSectionEnd = 0xB69;
            static constexpr std::uintptr_t NextCheckpoints = 0xB70;
            static constexpr std::uintptr_t DynamicSpawnOffset = 0xB80;
            static constexpr std::uintptr_t SpawnDistanceBeforeOrAfterSplineLocation = 0xB84;
            static constexpr std::uintptr_t BaseRadius = 0xB88;
            static constexpr std::uintptr_t IntersectionTolerance = 0xB90;
            static constexpr std::uintptr_t CheckpointId = 0xBA8;
            static constexpr std::uintptr_t SplinePointIndex = 0xBAC;
            static constexpr std::uintptr_t SpawnPoint = 0xBB0;
            static constexpr std::uintptr_t SnapToComponent = 0xBB8;
            static constexpr std::uintptr_t PreviousCheckpoints = 0xBC0;
            static constexpr std::uintptr_t NearestTrackIndex = 0xBF0;
            static constexpr std::uintptr_t AssociatedTracks = 0xBF8;
            static constexpr std::uintptr_t ComputedCheckpointIndex = 0xC08;
            static constexpr std::uintptr_t ColliderVolume = 0xC10;
            static constexpr std::uintptr_t CheckpointTheme = 0xC18;
            static constexpr std::uintptr_t CheckpointToTeleportTo = 0xC90;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OnCheckpointTirggeredEvent", 0xB58, "MulticastInlineDelegateProperty"},
            {"bIsFinishLine", 0xB69, "BoolProperty"},
            {"bIsStartingLine", 0xB69, "BoolProperty"},
            {"bIsTeleportEnabled", 0xB69, "BoolProperty"},
            {"bIsTimeTrialSectionEnd", 0xB69, "BoolProperty"},
            {"NextCheckpoints", 0xB70, "SetProperty"},
            {"DynamicSpawnOffset", 0xB80, "FloatProperty"},
            {"SpawnDistanceBeforeOrAfterSplineLocation", 0xB84, "FloatProperty"},
            {"BaseRadius", 0xB88, "FloatProperty"},
            {"IntersectionTolerance", 0xB90, "StructProperty"},
            {"CheckpointId", 0xBA8, "IntProperty"},
            {"SplinePointIndex", 0xBAC, "IntProperty"},
            {"SpawnPoint", 0xBB0, "ObjectProperty"},
            {"SnapToComponent", 0xBB8, "ObjectProperty"},
            {"PreviousCheckpoints", 0xBC0, "SetProperty"},
            {"NearestTrackIndex", 0xBF0, "IntProperty"},
            {"AssociatedTracks", 0xBF8, "ArrayProperty"},
            {"ComputedCheckpointIndex", 0xC08, "IntProperty"},
            {"ColliderVolume", 0xC10, "ObjectProperty"},
            {"CheckpointTheme", 0xC18, "ObjectProperty"},
            {"CheckpointToTeleportTo", 0xC90, "ObjectProperty"},
        }};
    };

    struct DelMarCheckpointManagerComponent
    {
        static constexpr std::string_view Name = "DelMarCheckpointManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bPromptFirstPlaceEvent = 0xC0;
            static constexpr std::uintptr_t StartingLineCheckpoint = 0xC4;
            static constexpr std::uintptr_t FinishLineCheckpoint = 0xCC;
            static constexpr std::uintptr_t LevelCheckpoints = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bPromptFirstPlaceEvent", 0xC0, "BoolProperty"},
            {"StartingLineCheckpoint", 0xC4, "WeakObjectProperty"},
            {"FinishLineCheckpoint", 0xCC, "WeakObjectProperty"},
            {"LevelCheckpoints", 0xD8, "SetProperty"},
        }};
    };

    struct DelMarCheckpointTheme
    {
        static constexpr std::string_view Name = "DelMarCheckpointTheme";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RimMesh = 0x28;
            static constexpr std::uintptr_t DefaultTentMesh = 0x30;
            static constexpr std::uintptr_t DefaultHoloMesh = 0x38;
            static constexpr std::uintptr_t StartLineTentMesh = 0x40;
            static constexpr std::uintptr_t StartLineHoloMesh = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RimMesh", 0x28, "ObjectProperty"},
            {"DefaultTentMesh", 0x30, "ObjectProperty"},
            {"DefaultHoloMesh", 0x38, "ObjectProperty"},
            {"StartLineTentMesh", 0x40, "ObjectProperty"},
            {"StartLineHoloMesh", 0x48, "ObjectProperty"},
        }};
    };

    struct DelMarClientReplayRecordingComponent
    {
        static constexpr std::string_view Name = "DelMarClientReplayRecordingComponent";
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

    struct DelMarCompetitiveRaceManager
    {
        static constexpr std::string_view Name = "DelMarCompetitiveRaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t FinishRaceAfterFirstPlayerFinishedSeconds = 0x430;
            static constexpr std::uintptr_t FirstPlayerFinishedTimestamp = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FinishRaceAfterFirstPlayerFinishedSeconds", 0x430, "FloatProperty"},
            {"FirstPlayerFinishedTimestamp", 0x448, "DoubleProperty"},
        }};
    };

    struct DelMarCompetitiveRacerStateMachineComponent
    {
        static constexpr std::string_view Name = "DelMarCompetitiveRacerStateMachineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerStateMachineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceManager = 0x188;
            static constexpr std::uintptr_t PreviousStateTag = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RaceManager", 0x188, "WeakObjectProperty"},
            {"PreviousStateTag", 0x190, "StructProperty"},
        }};
    };

    struct DelMarCompetitiveRacerState_RunActive
    {
        static constexpr std::string_view Name = "DelMarCompetitiveRacerState_RunActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarCompetitiveRacerState_RunFinished
    {
        static constexpr std::string_view Name = "DelMarCompetitiveRacerState_RunFinished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarConnectedHintComponent
    {
        static constexpr std::string_view Name = "DelMarConnectedHintComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldShowHint = 0xC0;
            static constexpr std::uintptr_t VehicleActionClass = 0xC8;
            static constexpr std::uintptr_t bAcceptMultipleTags = 0xD0;
            static constexpr std::uintptr_t MultipleTagContainer = 0xD8;
            static constexpr std::uintptr_t CachedVehicle = 0xF8;
            static constexpr std::uintptr_t VehicleAction = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShouldShowHint", 0xC0, "BoolProperty"},
            {"VehicleActionClass", 0xC8, "ClassProperty"},
            {"bAcceptMultipleTags", 0xD0, "BoolProperty"},
            {"MultipleTagContainer", 0xD8, "StructProperty"},
            {"CachedVehicle", 0xF8, "WeakObjectProperty"},
            {"VehicleAction", 0x100, "ObjectProperty"},
        }};
    };

    struct DelMarConsoleVariableMutator
    {
        static constexpr std::string_view Name = "DelMarConsoleVariableMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarMutator";
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

    struct DelMarContextualHintComponent
    {
        static constexpr std::string_view Name = "DelMarContextualHintComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HazardHitHint = 0xC0;
            static constexpr std::uintptr_t DemolishedByHints = 0x108;
            static constexpr std::uintptr_t SlowerTerrainHint = 0x118;
            static constexpr std::uintptr_t Vehicle = 0x160;
            static constexpr std::uintptr_t CachedPlayerController = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HazardHitHint", 0xC0, "StructProperty"},
            {"DemolishedByHints", 0x108, "MapProperty"},
            {"SlowerTerrainHint", 0x118, "StructProperty"},
            {"Vehicle", 0x160, "WeakObjectProperty"},
            {"CachedPlayerController", 0x168, "WeakObjectProperty"},
        }};
    };

    struct DelMarCoreOobTubePositionalRenderingComponent
    {
        static constexpr std::string_view Name = "DelMarCoreOobTubePositionalRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackOobTubePositionalRenderingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewTargetPlayerState = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewTargetPlayerState", 0xF0, "WeakObjectProperty"},
        }};
    };

    struct DelMarCoreSplineMeshComponent
    {
        static constexpr std::string_view Name = "DelMarCoreSplineMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineParams = 0x6A8;
            static constexpr std::uintptr_t SplineUpDir = 0x758;
            static constexpr std::uintptr_t SplineBoundaryMin = 0x770;
            static constexpr std::uintptr_t CachedMeshBodySetupGuid = 0x774;
            static constexpr std::uintptr_t VirtualTextureMainPassMaxDrawDistance = 0x784;
            static constexpr std::uintptr_t BodySetup = 0x7C0;
            static constexpr std::uintptr_t SplineBoundaryMax = 0x7C8;
            static constexpr std::uintptr_t ForwardAxis = 0x7CC;
            static constexpr std::uintptr_t bAllowSplineEditingPerInstance = 0x7CD;
            static constexpr std::uintptr_t bMeshDirty = 0x7CD;
            static constexpr std::uintptr_t bNeverNeedsCookedCollisionData = 0x7CD;
            static constexpr std::uintptr_t bSmoothInterpRollScale = 0x7CD;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SplineParams", 0x6A8, "StructProperty"},
            {"SplineUpDir", 0x758, "StructProperty"},
            {"SplineBoundaryMin", 0x770, "FloatProperty"},
            {"CachedMeshBodySetupGuid", 0x774, "StructProperty"},
            {"VirtualTextureMainPassMaxDrawDistance", 0x784, "FloatProperty"},
            {"BodySetup", 0x7C0, "ObjectProperty"},
            {"SplineBoundaryMax", 0x7C8, "FloatProperty"},
            {"ForwardAxis", 0x7CC, "ByteProperty"},
            {"bAllowSplineEditingPerInstance", 0x7CD, "BoolProperty"},
            {"bMeshDirty", 0x7CD, "BoolProperty"},
            {"bNeverNeedsCookedCollisionData", 0x7CD, "BoolProperty"},
            {"bSmoothInterpRollScale", 0x7CD, "BoolProperty"},
        }};
    };

    struct DelMarCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLogic = 0x278;
            static constexpr std::uintptr_t CosmeticDependencies = 0x280;
            static constexpr std::uintptr_t Vehicle = 0x290;
            static constexpr std::uintptr_t VehicleConfig = 0x2A0;
            static constexpr std::uintptr_t VehicleCosmeticComponent = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpawnLogic", 0x278, "ObjectProperty"},
            {"CosmeticDependencies", 0x280, "ArrayProperty"},
            {"Vehicle", 0x290, "InterfaceProperty"},
            {"VehicleConfig", 0x2A0, "ObjectProperty"},
            {"VehicleCosmeticComponent", 0x2A8, "ObjectProperty"},
        }};
    };

    struct DelMarCosmeticActorSpawnLogic
    {
        static constexpr std::string_view Name = "DelMarCosmeticActorSpawnLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarCosmeticActorSpawnLogic_AttachTo
    {
        static constexpr std::string_view Name = "DelMarCosmeticActorSpawnLogic_AttachTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocket = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSocket", 0x28, "NameProperty"},
        }};
    };

    struct DelMarCosmeticActorSpawnLogic_AttachToEach
    {
        static constexpr std::string_view Name = "DelMarCosmeticActorSpawnLogic_AttachToEach";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSockets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSockets", 0x28, "ArrayProperty"},
        }};
    };

    struct DelMarCosmeticItemDefinition
    {
        static constexpr std::string_view Name = "DelMarCosmeticItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x128;
            static constexpr std::uintptr_t CosmeticActorClasses = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slot", 0x128, "StructProperty"},
            {"CosmeticActorClasses", 0x130, "ArrayProperty"},
        }};
    };

    struct DelMarCosmeticsDatabase
    {
        static constexpr std::string_view Name = "DelMarCosmeticsDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
            static constexpr std::uintptr_t SlotInfos = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Items", 0x28, "ArrayProperty"},
            {"SlotInfos", 0x38, "ArrayProperty"},
        }};
    };

    struct DelMarDeathRaceManager
    {
        static constexpr std::string_view Name = "DelMarDeathRaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t NextRoundSeconds = 0x430;
            static constexpr std::uintptr_t DeathRaceConfigData = 0x438;
            static constexpr std::uintptr_t NumPlayersFinished = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NextRoundSeconds", 0x430, "FloatProperty"},
            {"DeathRaceConfigData", 0x438, "StructProperty"},
            {"NumPlayersFinished", 0x460, "IntProperty"},
        }};
    };

    struct DelMarDeathRacerStateMachineComponent
    {
        static constexpr std::string_view Name = "DelMarDeathRacerStateMachineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerStateMachineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceManager = 0x188;
            static constexpr std::uintptr_t PreviousStateTag = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RaceManager", 0x188, "WeakObjectProperty"},
            {"PreviousStateTag", 0x190, "StructProperty"},
        }};
    };

    struct DelMarDeathRacerState_ActiveRace
    {
        static constexpr std::string_view Name = "DelMarDeathRacerState_ActiveRace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DeathRaceManager = 0x30;
            static constexpr std::uintptr_t bFinishedRound = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeathRaceManager", 0x30, "WeakObjectProperty"},
            {"bFinishedRound", 0x38, "BoolProperty"},
        }};
    };

    struct DelMarDeathRacerState_FinishedRace
    {
        static constexpr std::string_view Name = "DelMarDeathRacerState_FinishedRace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarDoubleTapInputTrigger
    {
        static constexpr std::string_view Name = "DelMarDoubleTapInputTrigger";
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

    struct DelMarDriveParticlesPhysMatAttribute
    {
        static constexpr std::string_view Name = "DelMarDriveParticlesPhysMatAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPhysMatAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t DriveParticles = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DriveParticles", 0x28, "ObjectProperty"},
        }};
    };

    struct DelMarDriverInteractionComponent
    {
        static constexpr std::string_view Name = "DelMarDriverInteractionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewPlayerState = 0xC0;
            static constexpr std::uintptr_t ViewVehicle = 0xC8;
            static constexpr std::uintptr_t PassEventSquareDistThreshold = 0x100;
            static constexpr std::uintptr_t RaceData = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ViewPlayerState", 0xC0, "ObjectProperty"},
            {"ViewVehicle", 0xC8, "ObjectProperty"},
            {"PassEventSquareDistThreshold", 0x100, "FloatProperty"},
            {"RaceData", 0x108, "ObjectProperty"},
        }};
    };

    struct DelMarEliminationRaceManagerComponent
    {
        static constexpr std::string_view Name = "DelMarEliminationRaceManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EliminationsConfig = 0xC0;
            static constexpr std::uintptr_t ParsedNumberOfPlayersToEliminate = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EliminationsConfig", 0xC0, "ArrayProperty"},
            {"ParsedNumberOfPlayersToEliminate", 0xD0, "IntProperty"},
        }};
    };

    struct DelMarEnvironmentEffectCueNotify_Actor
    {
        static constexpr std::string_view Name = "DelMarEnvironmentEffectCueNotify_Actor";
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

    struct DelMarEnvironmentEffectsVolume
    {
        static constexpr std::string_view Name = "DelMarEnvironmentEffectsVolume";
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

    struct DelMarEvent_AttachmentChanged
    {
        static constexpr std::string_view Name = "DelMarEvent_AttachmentChanged";
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

    struct DelMarEvent_FinalFirstPlaceChanged
    {
        static constexpr std::string_view Name = "DelMarEvent_FinalFirstPlaceChanged";
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

    struct DelMarEvent_GlobalLeaderboardActive
    {
        static constexpr std::string_view Name = "DelMarEvent_GlobalLeaderboardActive";
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

    struct DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarEvent_GlobalLeaderboardPersonalBestRetrieved
    {
        static constexpr std::string_view Name = "DelMarEvent_GlobalLeaderboardPersonalBestRetrieved";
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

    struct DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
    {
        static constexpr std::string_view Name = "DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarEvent_PlayerFinishRace
    {
        static constexpr std::string_view Name = "DelMarEvent_PlayerFinishRace";
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

    struct DelMarEvent_PlayerInVehicle
    {
        static constexpr std::string_view Name = "DelMarEvent_PlayerInVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DelMarVehicle = 0x28;
            static constexpr std::uintptr_t SeatIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DelMarVehicle", 0x28, "WeakObjectProperty"},
            {"SeatIndex", 0x30, "IntProperty"},
        }};
    };

    struct DelMarEvent_PlayerPointsChanged
    {
        static constexpr std::string_view Name = "DelMarEvent_PlayerPointsChanged";
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

    struct DelMarEvent_VehicleDemolish
    {
        static constexpr std::string_view Name = "DelMarEvent_VehicleDemolish";
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

    struct DelMarFlowAnalyticsControllerComponent
    {
        static constexpr std::string_view Name = "DelMarFlowAnalyticsControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowAnalyicsEventName = 0xC0;
            static constexpr std::uintptr_t PlayerController = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FlowAnalyicsEventName", 0xC0, "StrProperty"},
            {"PlayerController", 0xD0, "WeakObjectProperty"},
        }};
    };

    struct DelMarGameAnalyticsComponent
    {
        static constexpr std::string_view Name = "DelMarGameAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameState = 0xC0;
            static constexpr std::uintptr_t CachedRaceManager = 0xC8;
            static constexpr std::uintptr_t TrackQuestUsageRaceModes = 0xD8;
            static constexpr std::uintptr_t CachedOpenedQuestPlayers = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedGameState", 0xC0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xC8, "WeakObjectProperty"},
            {"TrackQuestUsageRaceModes", 0xD8, "MapProperty"},
            {"CachedOpenedQuestPlayers", 0xE8, "ArrayProperty"},
        }};
    };

    struct DelMarGameStateMachine
    {
        static constexpr std::string_view Name = "DelMarGameStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t StateOverrides = 0xC0;
            static constexpr std::uintptr_t StateMappings = 0xD0;
            static constexpr std::uintptr_t RequestedStateTag = 0xE0;
            static constexpr std::uintptr_t CurrentStateTag = 0xE4;
            static constexpr std::uintptr_t DefaultStateTag = 0xE8;
            static constexpr std::uintptr_t ActiveStates = 0xF0;
            static constexpr std::uintptr_t ReplicatedStates = 0x100;
            static constexpr std::uintptr_t WaitingForStateReplicationTag = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StateOverrides", 0xC0, "ArrayProperty"},
            {"StateMappings", 0xD0, "MapProperty"},
            {"RequestedStateTag", 0xE0, "StructProperty"},
            {"CurrentStateTag", 0xE4, "StructProperty"},
            {"DefaultStateTag", 0xE8, "StructProperty"},
            {"ActiveStates", 0xF0, "ArrayProperty"},
            {"ReplicatedStates", 0x100, "ArrayProperty"},
            {"WaitingForStateReplicationTag", 0x110, "StructProperty"},
        }};
    };

    struct DelMarGameUserSettings
    {
        static constexpr std::string_view Name = "DelMarGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NuxLastViewedVideoVersion = 0x28;
            static constexpr std::uintptr_t bNuxHasPromptedToPlayTutorial = 0x2C;
            static constexpr std::uintptr_t bHasPromptedToPlaySpeedRun = 0x2D;
            static constexpr std::uintptr_t bNuxHasShownDefaultMode = 0x2E;
            static constexpr std::uintptr_t LastPlayedDelMarMnemonic = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NuxLastViewedVideoVersion", 0x28, "IntProperty"},
            {"bNuxHasPromptedToPlayTutorial", 0x2C, "BoolProperty"},
            {"bHasPromptedToPlaySpeedRun", 0x2D, "BoolProperty"},
            {"bNuxHasShownDefaultMode", 0x2E, "BoolProperty"},
            {"LastPlayedDelMarMnemonic", 0x30, "StrProperty"},
        }};
    };

    struct DelMarGameplayModifier
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier";
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

    struct DelMarGameplayModifierComponent
    {
        static constexpr std::string_view Name = "DelMarGameplayModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0xC0;
            static constexpr std::uintptr_t ModifierModes = 0xC8;
            static constexpr std::uintptr_t ModeName = 0xD0;
            static constexpr std::uintptr_t SpawnedModifiers = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnabled", 0xC0, "BoolProperty"},
            {"ModifierModes", 0xC8, "ObjectProperty"},
            {"ModeName", 0xD0, "StrProperty"},
            {"SpawnedModifiers", 0xE0, "ArrayProperty"},
        }};
    };

    struct DelMarGameplayModifierMap
    {
        static constexpr std::string_view Name = "DelMarGameplayModifierMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifierMap", 0x28, "MapProperty"},
        }};
    };

    struct DelMarGameplayModifier_AttachmentManager
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier_AttachmentManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayModifier";
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

    struct DelMarGameplayModifier_CVarOverride
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier_CVarOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayModifier";
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

    struct DelMarGameplayModifier_FriendlyFire
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier_FriendlyFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendlyFireType = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendlyFireType", 0x278, "EnumProperty"},
        }};
    };

    struct DelMarGameplayModifier_PlacementSpawner
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier_PlacementSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClassToSpawn = 0x278;
            static constexpr std::uintptr_t MaxPlacement = 0x280;
            static constexpr std::uintptr_t SecondsBetweenSpawns = 0x284;
            static constexpr std::uintptr_t RaceStartDelaySeconds = 0x288;
            static constexpr std::uintptr_t ActorLifespanSeconds = 0x28C;
            static constexpr std::uintptr_t ActorDisplacementUnits = 0x290;
            static constexpr std::uintptr_t MaxSpawnedActors = 0x294;
            static constexpr std::uintptr_t MinSpeedForVelocityOrientation = 0x298;
            static constexpr std::uintptr_t SpawnPoints = 0x29C;
            static constexpr std::uintptr_t TriggerPoints = 0x2A0;
            static constexpr std::uintptr_t CachedRaceManager = 0x2A4;
            static constexpr std::uintptr_t CachedPositionComponent = 0x2AC;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ActorClassToSpawn", 0x278, "ClassProperty"},
            {"MaxPlacement", 0x280, "IntProperty"},
            {"SecondsBetweenSpawns", 0x284, "FloatProperty"},
            {"RaceStartDelaySeconds", 0x288, "FloatProperty"},
            {"ActorLifespanSeconds", 0x28C, "FloatProperty"},
            {"ActorDisplacementUnits", 0x290, "FloatProperty"},
            {"MaxSpawnedActors", 0x294, "IntProperty"},
            {"MinSpeedForVelocityOrientation", 0x298, "FloatProperty"},
            {"SpawnPoints", 0x29C, "IntProperty"},
            {"TriggerPoints", 0x2A0, "IntProperty"},
            {"CachedRaceManager", 0x2A4, "WeakObjectProperty"},
            {"CachedPositionComponent", 0x2AC, "WeakObjectProperty"},
        }};
    };

    struct DelMarGameplayModifier_VehicleClassOverride
    {
        static constexpr std::string_view Name = "DelMarGameplayModifier_VehicleClassOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleClassOverride = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VehicleClassOverride", 0x278, "SoftClassProperty"},
        }};
    };

    struct DelMarGameplayState
    {
        static constexpr std::string_view Name = "DelMarGameplayState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarGhostPlaybackSessionComponent
    {
        static constexpr std::string_view Name = "DelMarGhostPlaybackSessionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGhostSessionComponent";
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

    struct DelMarGhostPlaybackTrigger
    {
        static constexpr std::string_view Name = "DelMarGhostPlaybackTrigger";
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

    struct DelMarGhostRecordingSessionComponent
    {
        static constexpr std::string_view Name = "DelMarGhostRecordingSessionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGhostSessionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordLog = 0xE8;
            static constexpr std::uintptr_t bRecordOffPhysicsDelegate = 0xF0;
            static constexpr std::uintptr_t CurrentFrame = 0x114;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RecordLog", 0xE8, "ObjectProperty"},
            {"bRecordOffPhysicsDelegate", 0xF0, "BoolProperty"},
            {"CurrentFrame", 0x114, "IntProperty"},
            {"CachedDelMarVehicle", 0x118, "WeakObjectProperty"},
        }};
    };

    struct DelMarGhostReplayLog
    {
        static constexpr std::string_view Name = "DelMarGhostReplayLog";
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

    struct DelMarGhostSessionComponent
    {
        static constexpr std::string_view Name = "DelMarGhostSessionComponent";
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

    struct DelMarGhostVehicle
    {
        static constexpr std::string_view Name = "DelMarGhostVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t GhostMaterial = 0x2068;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x2070;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GhostMaterial", 0x2068, "ObjectProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x2070, "IntProperty"},
        }};
    };

    struct DelMarGlobalInputDisabler
    {
        static constexpr std::string_view Name = "DelMarGlobalInputDisabler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisabledInputTags = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisabledInputTags", 0xD8, "StructProperty"},
        }};
    };

    struct DelMarGlobalLeaderboardControllerComponent
    {
        static constexpr std::string_view Name = "DelMarGlobalLeaderboardControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLeaderboardEnabled = 0xC0;
            static constexpr std::uintptr_t TopLeaderboardEntries = 0xC8;
            static constexpr std::uintptr_t FocusedLeaderboardEntries = 0xD8;
            static constexpr std::uintptr_t FriendLeaderboardEntries = 0xE8;
            static constexpr std::uintptr_t bHasRequestedLeaderboards = 0xF8;
            static constexpr std::uintptr_t bHasPersonalBest = 0xF9;
            static constexpr std::uintptr_t PersonalBest = 0x100;
            static constexpr std::uintptr_t GlobalLeaderboardActiveEvent = 0x148;
            static constexpr std::uintptr_t LeaderboardSettings = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bIsLeaderboardEnabled", 0xC0, "BoolProperty"},
            {"TopLeaderboardEntries", 0xC8, "ArrayProperty"},
            {"FocusedLeaderboardEntries", 0xD8, "ArrayProperty"},
            {"FriendLeaderboardEntries", 0xE8, "ArrayProperty"},
            {"bHasRequestedLeaderboards", 0xF8, "BoolProperty"},
            {"bHasPersonalBest", 0xF9, "BoolProperty"},
            {"PersonalBest", 0x100, "StructProperty"},
            {"GlobalLeaderboardActiveEvent", 0x148, "ObjectProperty"},
            {"LeaderboardSettings", 0x150, "StructProperty"},
        }};
    };

    struct DelMarGlobals
    {
        static constexpr std::string_view Name = "DelMarGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarGuidedTutorialZoneActor
    {
        static constexpr std::string_view Name = "DelMarGuidedTutorialZoneActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxCollider = 0x278;
            static constexpr std::uintptr_t FinalTimeDilation = 0x280;
            static constexpr std::uintptr_t TransitionSeconds = 0x284;
            static constexpr std::uintptr_t MaxTimeDilationSeconds = 0x288;
            static constexpr std::uintptr_t bDemoVehicleOnFail = 0x28C;
            static constexpr std::uintptr_t ScreenMessage = 0x290;
            static constexpr std::uintptr_t AlternativeScreenMessage = 0x2D0;
            static constexpr std::uintptr_t HintDelaySeconds = 0x310;
            static constexpr std::uintptr_t HintRemovalDelaySeconds = 0x314;
            static constexpr std::uintptr_t ZoneRequirementClass = 0x318;
            static constexpr std::uintptr_t InputTagsToRemoveOnZoneStart = 0x320;
            static constexpr std::uintptr_t InputTagsToAddOnZoneStart = 0x340;
            static constexpr std::uintptr_t InputTagsToRemoveOnZoneEnd = 0x360;
            static constexpr std::uintptr_t InputTagsToAddOnZoneEnd = 0x380;
            static constexpr std::uintptr_t ZoneRequirement = 0x3A0;
            static constexpr std::uintptr_t RaceManager = 0x3A8;
            static constexpr std::uintptr_t ActiveVehicle = 0x3B0;
            static constexpr std::uintptr_t ActivePlayerController = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"BoxCollider", 0x278, "ObjectProperty"},
            {"FinalTimeDilation", 0x280, "FloatProperty"},
            {"TransitionSeconds", 0x284, "FloatProperty"},
            {"MaxTimeDilationSeconds", 0x288, "FloatProperty"},
            {"bDemoVehicleOnFail", 0x28C, "BoolProperty"},
            {"ScreenMessage", 0x290, "StructProperty"},
            {"AlternativeScreenMessage", 0x2D0, "StructProperty"},
            {"HintDelaySeconds", 0x310, "FloatProperty"},
            {"HintRemovalDelaySeconds", 0x314, "FloatProperty"},
            {"ZoneRequirementClass", 0x318, "ClassProperty"},
            {"InputTagsToRemoveOnZoneStart", 0x320, "StructProperty"},
            {"InputTagsToAddOnZoneStart", 0x340, "StructProperty"},
            {"InputTagsToRemoveOnZoneEnd", 0x360, "StructProperty"},
            {"InputTagsToAddOnZoneEnd", 0x380, "StructProperty"},
            {"ZoneRequirement", 0x3A0, "ObjectProperty"},
            {"RaceManager", 0x3A8, "WeakObjectProperty"},
            {"ActiveVehicle", 0x3B0, "WeakObjectProperty"},
            {"ActivePlayerController", 0x3B8, "WeakObjectProperty"},
        }};
    };

    struct DelMarInputModifierHazard
    {
        static constexpr std::string_view Name = "DelMarInputModifierHazard";
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

    struct DelMarLeaderboardManager
    {
        static constexpr std::string_view Name = "DelMarLeaderboardManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSeasonIdentifier = 0xC0;
            static constexpr std::uintptr_t PersonalBestRetrievedEvent = 0xD0;
            static constexpr std::uintptr_t LeaderboardConfig = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentSeasonIdentifier", 0xC0, "StrProperty"},
            {"PersonalBestRetrievedEvent", 0xD0, "ObjectProperty"},
            {"LeaderboardConfig", 0x108, "StructProperty"},
        }};
    };

    struct DelMarLevelDataAsset
    {
        static constexpr std::string_view Name = "DelMarLevelDataAsset";
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

    struct DelMarLevelManagerComponent
    {
        static constexpr std::string_view Name = "DelMarLevelManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentLevelData = 0xF0;
            static constexpr std::uintptr_t CurrentLevelLinkId = 0xF8;
            static constexpr std::uintptr_t DesiredMapDescription = 0x110;
            static constexpr std::uintptr_t DesiredLinkId = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentLevelData", 0xF0, "ObjectProperty"},
            {"CurrentLevelLinkId", 0xF8, "StructProperty"},
            {"DesiredMapDescription", 0x110, "StructProperty"},
            {"DesiredLinkId", 0x130, "StructProperty"},
        }};
    };

    struct DelMarLoadingScreenMutator
    {
        static constexpr std::string_view Name = "DelMarLoadingScreenMutator";
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

    struct DelMarLoadoutSave
    {
        static constexpr std::string_view Name = "DelMarLoadoutSave";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SaveGame";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedLoadout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedLoadout", 0x28, "MapProperty"},
        }};
    };

    struct DelMarLocalCheckpointVisibilityControllerComponent
    {
        static constexpr std::string_view Name = "DelMarLocalCheckpointVisibilityControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRaceManager = 0xC0;
            static constexpr std::uintptr_t CachedCheckpointManager = 0xC8;
            static constexpr std::uintptr_t ViewTargetPlayerState = 0xD0;
            static constexpr std::uintptr_t CachedLocalPlayerState = 0xD8;
            static constexpr std::uintptr_t CurrentlyActiveCheckpoints = 0xE0;
            static constexpr std::uintptr_t bVisitedStartingCheckpoint = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedRaceManager", 0xC0, "WeakObjectProperty"},
            {"CachedCheckpointManager", 0xC8, "WeakObjectProperty"},
            {"ViewTargetPlayerState", 0xD0, "WeakObjectProperty"},
            {"CachedLocalPlayerState", 0xD8, "WeakObjectProperty"},
            {"CurrentlyActiveCheckpoints", 0xE0, "SetProperty"},
            {"bVisitedStartingCheckpoint", 0xF0, "BoolProperty"},
        }};
    };

    struct DelMarMatchEventSystemComponent
    {
        static constexpr std::string_view Name = "DelMarMatchEventSystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledMatchEventTags = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnabledMatchEventTags", 0xD8, "SetProperty"},
        }};
    };

    struct DelMarMatchmakeRatingComponentBase
    {
        static constexpr std::string_view Name = "DelMarMatchmakeRatingComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
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

    struct DelMarMutator
    {
        static constexpr std::string_view Name = "DelMarMutator";
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

    struct DelMarMutator_AllowSpectateOtherTeams
    {
        static constexpr std::string_view Name = "DelMarMutator_AllowSpectateOtherTeams";
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

    struct DelMarNetModelSubsystem
    {
        static constexpr std::string_view Name = "DelMarNetModelSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarNetworkInputComponent
    {
        static constexpr std::string_view Name = "DelMarNetworkInputComponent";
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

    struct DelMarNetworkPredictionMutator
    {
        static constexpr std::string_view Name = "DelMarNetworkPredictionMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarMutator";
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

    struct DelMarNuxBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "DelMarNuxBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarObjectiveProcessorBase
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_BeatPlayers
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_BeatPlayers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_BonusTurboActivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_BonusTurboActivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_BoostPadBonusSpeedEnded
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_BoostPadBonusSpeedEnded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_BoostPadHit
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_BoostPadHit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_Demolished
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_Demolished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_DistanceTraveled
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_DistanceTraveled";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_DraftActivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_DraftActivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_DriftBoostActivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_DriftBoostActivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_DriftBoostDeactivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_DriftBoostDeactivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_DriftComplete
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_DriftComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_HighestSpeedUpdated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_HighestSpeedUpdated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_InitialTurboActivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_InitialTurboActivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_JellyHit
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_JellyHit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_Kickflipped
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_Kickflipped";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_LapComplete
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_LapComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_LapStarted
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_LapStarted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_PlacementUpdated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_PlacementUpdated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_PlayedDelMarExperience
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_PlayedDelMarExperience";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_RaceFinished
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_RaceFinished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_RankAchieved
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_RankAchieved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_RunComplete
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_RunComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_StartlineBoostActivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_StartlineBoostActivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_StartlineBoostPercentEarned
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_StartlineBoostPercentEarned";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_UnderthrustDeactivated
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_UnderthrustDeactivated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_UnderthrustPercentUsed
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_UnderthrustPercentUsed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_VehicleJumped
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_VehicleJumped";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarObjectiveProcessor_VehicleLanded
    {
        static constexpr std::string_view Name = "DelMarObjectiveProcessor_VehicleLanded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarObjectiveProcessorBase";
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

    struct DelMarPhysMatAttribute
    {
        static constexpr std::string_view Name = "DelMarPhysMatAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarPhysMatAttributeMap
    {
        static constexpr std::string_view Name = "DelMarPhysMatAttributeMap";
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

    struct DelMarPhysMatAttribute_SoundTag
    {
        static constexpr std::string_view Name = "DelMarPhysMatAttribute_SoundTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPhysMatAttribute";
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

    struct DelMarPhysMatAttribute_Terrain
    {
        static constexpr std::string_view Name = "DelMarPhysMatAttribute_Terrain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPhysMatAttribute";
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

    struct DelMarPhysicsRateDevice
    {
        static constexpr std::string_view Name = "DelMarPhysicsRateDevice";
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

    struct DelMarPlayerActiveRaceManagerComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerActiveRaceManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveRaceManager = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveRaceManager", 0xD8, "ObjectProperty"},
        }};
    };

    struct DelMarPlayerAnalyticsComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRaceManager = 0xC0;
            static constexpr std::uintptr_t CachedPlayerController = 0xC8;
            static constexpr std::uintptr_t CachedVehicle = 0xD0;
            static constexpr std::uintptr_t CachedPlayerRaceData = 0xD8;
            static constexpr std::uintptr_t CachedRaceInfo = 0xE0;
            static constexpr std::uintptr_t CachedPositionalTracker = 0xE8;
            static constexpr std::uintptr_t MatchmakeRatingComponent = 0xF0;
            static constexpr std::uintptr_t CurrentRaceData = 0xF8;
            static constexpr std::uintptr_t CurrentRunData = 0x134;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CachedRaceManager", 0xC0, "WeakObjectProperty"},
            {"CachedPlayerController", 0xC8, "WeakObjectProperty"},
            {"CachedVehicle", 0xD0, "WeakObjectProperty"},
            {"CachedPlayerRaceData", 0xD8, "WeakObjectProperty"},
            {"CachedRaceInfo", 0xE0, "WeakObjectProperty"},
            {"CachedPositionalTracker", 0xE8, "WeakObjectProperty"},
            {"MatchmakeRatingComponent", 0xF0, "WeakObjectProperty"},
            {"CurrentRaceData", 0xF8, "StructProperty"},
            {"CurrentRunData", 0x134, "StructProperty"},
        }};
    };

    struct DelMarPlayerAttachmentComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerAttachmentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedPlayer = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachedPlayer", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerAutoThrottleComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerAutoThrottleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayAutoThrottle = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DelayAutoThrottle", 0xC0, "FloatProperty"},
        }};
    };

    struct DelMarPlayerChallengeRaceDataComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerChallengeRaceDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerRaceDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VisitedCheckpoints = 0xF0;
            static constexpr std::uintptr_t VisitedCheckpoints_ParallelPath = 0x100;
            static constexpr std::uintptr_t RunStartTime = 0x110;
            static constexpr std::uintptr_t RunFinishTime = 0x118;
            static constexpr std::uintptr_t CheckpointStartTime = 0x120;
            static constexpr std::uintptr_t LapStartTime = 0x128;
            static constexpr std::uintptr_t DistanceToFinishLine = 0x130;
            static constexpr std::uintptr_t LapDistance = 0x134;
            static constexpr std::uintptr_t PrimaryTrackDistance = 0x138;
            static constexpr std::uintptr_t IndependentTrackDistance = 0x13C;
            static constexpr std::uintptr_t LapsCompleted = 0x140;
            static constexpr std::uintptr_t bHasStartedFirstLap = 0x144;
            static constexpr std::uintptr_t bFinishedRace = 0x145;
            static constexpr std::uintptr_t Points = 0x148;
            static constexpr std::uintptr_t ViewingSpectators = 0x150;
            static constexpr std::uintptr_t MostRecentlyVisitedCheckpoint = 0x160;
            static constexpr std::uintptr_t CachedCheckpointManager = 0x168;
            static constexpr std::uintptr_t CachedRaceManager = 0x170;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x178;
            static constexpr std::uintptr_t CachedPositionalTracker = 0x180;
            static constexpr std::uintptr_t CachedLapTracker = 0x188;
            static constexpr std::uintptr_t CheckpointsVisitedThisLap = 0x190;
            static constexpr std::uintptr_t TimeTrialSectionIndex = 0x1A0;
            static constexpr std::uintptr_t CheckpointIndex = 0x1A4;
            static constexpr std::uintptr_t PointsUpdatedEvent = 0x1A8;
            static constexpr std::uintptr_t FinishRaceEvent = 0x1B0;
            static constexpr std::uintptr_t CachedBotPenaltyCurveIndex = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"VisitedCheckpoints", 0xF0, "SetProperty"},
            {"VisitedCheckpoints_ParallelPath", 0x100, "SetProperty"},
            {"RunStartTime", 0x110, "DoubleProperty"},
            {"RunFinishTime", 0x118, "DoubleProperty"},
            {"CheckpointStartTime", 0x120, "DoubleProperty"},
            {"LapStartTime", 0x128, "DoubleProperty"},
            {"DistanceToFinishLine", 0x130, "FloatProperty"},
            {"LapDistance", 0x134, "FloatProperty"},
            {"PrimaryTrackDistance", 0x138, "FloatProperty"},
            {"IndependentTrackDistance", 0x13C, "FloatProperty"},
            {"LapsCompleted", 0x140, "IntProperty"},
            {"bHasStartedFirstLap", 0x144, "BoolProperty"},
            {"bFinishedRace", 0x145, "BoolProperty"},
            {"Points", 0x148, "IntProperty"},
            {"ViewingSpectators", 0x150, "ArrayProperty"},
            {"MostRecentlyVisitedCheckpoint", 0x160, "WeakObjectProperty"},
            {"CachedCheckpointManager", 0x168, "WeakObjectProperty"},
            {"CachedRaceManager", 0x170, "WeakObjectProperty"},
            {"CachedDelMarVehicle", 0x178, "WeakObjectProperty"},
            {"CachedPositionalTracker", 0x180, "WeakObjectProperty"},
            {"CachedLapTracker", 0x188, "WeakObjectProperty"},
            {"CheckpointsVisitedThisLap", 0x190, "SetProperty"},
            {"TimeTrialSectionIndex", 0x1A0, "IntProperty"},
            {"CheckpointIndex", 0x1A4, "IntProperty"},
            {"PointsUpdatedEvent", 0x1A8, "ObjectProperty"},
            {"FinishRaceEvent", 0x1B0, "ObjectProperty"},
            {"CachedBotPenaltyCurveIndex", 0x1B8, "IntProperty"},
        }};
    };

    struct DelMarPlayerDeathRaceDataComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerDeathRaceDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerRaceDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Score = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Score", 0x1C0, "IntProperty"},
        }};
    };

    struct DelMarPlayerIdleComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerIdleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRaceManager = 0xC0;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedRaceManager", 0xC0, "WeakObjectProperty"},
            {"CachedDelMarVehicle", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerInputManagerComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerInputManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingContextMap = 0xC0;
            static constexpr std::uintptr_t PlatformDigitalRedirect = 0xD0;
            static constexpr std::uintptr_t CachedController = 0xD8;
            static constexpr std::uintptr_t CachedVehicle = 0xE0;
            static constexpr std::uintptr_t CachedRaceManager = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputMappingContextMap", 0xC0, "MapProperty"},
            {"PlatformDigitalRedirect", 0xD0, "ObjectProperty"},
            {"CachedController", 0xD8, "WeakObjectProperty"},
            {"CachedVehicle", 0xE0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE8, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerPreferencesComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerPreferencesComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnUseToggleOnExpandableHudWidgetChanged = 0xC0;
            static constexpr std::uintptr_t OnUseIconOnlyPlayerNameplatesChanged = 0xD0;
            static constexpr std::uintptr_t OnTouchControlsLayoutChanged = 0xE0;
            static constexpr std::uintptr_t InvertSteerMethod = 0xF0;
            static constexpr std::uintptr_t bPitchInverted = 0xF1;
            static constexpr std::uintptr_t bVerticalKickflipInverted = 0xF2;
            static constexpr std::uintptr_t bAerialPitchActivationEnabled = 0xF3;
            static constexpr std::uintptr_t bUseToggleOnExpandableHudWidget = 0xF4;
            static constexpr std::uintptr_t bUseIconOnlyPlayerNameplates = 0xF5;
            static constexpr std::uintptr_t TouchControlsLayout = 0xF8;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0xFC;
            static constexpr std::uintptr_t FortSettings = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnUseToggleOnExpandableHudWidgetChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnUseIconOnlyPlayerNameplatesChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnTouchControlsLayoutChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"InvertSteerMethod", 0xF0, "EnumProperty"},
            {"bPitchInverted", 0xF1, "BoolProperty"},
            {"bVerticalKickflipInverted", 0xF2, "BoolProperty"},
            {"bAerialPitchActivationEnabled", 0xF3, "BoolProperty"},
            {"bUseToggleOnExpandableHudWidget", 0xF4, "BoolProperty"},
            {"bUseIconOnlyPlayerNameplates", 0xF5, "BoolProperty"},
            {"TouchControlsLayout", 0xF8, "StructProperty"},
            {"CachedDelMarVehicle", 0xFC, "WeakObjectProperty"},
            {"FortSettings", 0x104, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerQuestDistanceTraveledComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerQuestDistanceTraveledComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedVehicle = 0xC0;
            static constexpr std::uintptr_t CachedPlayerState = 0xC8;
            static constexpr std::uintptr_t CachedRaceManager = 0xD0;
            static constexpr std::uintptr_t DistanceTraveledTimer = 0xD8;
            static constexpr std::uintptr_t DistanceTravelledObjectiveProcessor = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CachedVehicle", 0xC0, "WeakObjectProperty"},
            {"CachedPlayerState", 0xC8, "WeakObjectProperty"},
            {"CachedRaceManager", 0xD0, "WeakObjectProperty"},
            {"DistanceTraveledTimer", 0xD8, "StructProperty"},
            {"DistanceTravelledObjectiveProcessor", 0x110, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerQuestMatchInfoComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerQuestMatchInfoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedVehicle = 0xC4;
            static constexpr std::uintptr_t CachedRaceManager = 0xCC;
            static constexpr std::uintptr_t CachedPlayerState = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedVehicle", 0xC4, "WeakObjectProperty"},
            {"CachedRaceManager", 0xCC, "WeakObjectProperty"},
            {"CachedPlayerState", 0xD4, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerRaceDataComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerRaceDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VisitedCheckpoints = 0xF0;
            static constexpr std::uintptr_t VisitedCheckpoints_ParallelPath = 0x100;
            static constexpr std::uintptr_t RunStartTime = 0x110;
            static constexpr std::uintptr_t RunFinishTime = 0x118;
            static constexpr std::uintptr_t CheckpointStartTime = 0x120;
            static constexpr std::uintptr_t LapStartTime = 0x128;
            static constexpr std::uintptr_t DistanceToFinishLine = 0x130;
            static constexpr std::uintptr_t LapDistance = 0x134;
            static constexpr std::uintptr_t PrimaryTrackDistance = 0x138;
            static constexpr std::uintptr_t IndependentTrackDistance = 0x13C;
            static constexpr std::uintptr_t LapsCompleted = 0x140;
            static constexpr std::uintptr_t bHasStartedFirstLap = 0x144;
            static constexpr std::uintptr_t bFinishedRace = 0x145;
            static constexpr std::uintptr_t Points = 0x148;
            static constexpr std::uintptr_t ViewingSpectators = 0x150;
            static constexpr std::uintptr_t MostRecentlyVisitedCheckpoint = 0x160;
            static constexpr std::uintptr_t CachedCheckpointManager = 0x168;
            static constexpr std::uintptr_t CachedRaceManager = 0x170;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x178;
            static constexpr std::uintptr_t CachedPositionalTracker = 0x180;
            static constexpr std::uintptr_t CachedLapTracker = 0x188;
            static constexpr std::uintptr_t CheckpointsVisitedThisLap = 0x190;
            static constexpr std::uintptr_t TimeTrialSectionIndex = 0x1A0;
            static constexpr std::uintptr_t CheckpointIndex = 0x1A4;
            static constexpr std::uintptr_t PointsUpdatedEvent = 0x1A8;
            static constexpr std::uintptr_t FinishRaceEvent = 0x1B0;
            static constexpr std::uintptr_t CachedBotPenaltyCurveIndex = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"VisitedCheckpoints", 0xF0, "SetProperty"},
            {"VisitedCheckpoints_ParallelPath", 0x100, "SetProperty"},
            {"RunStartTime", 0x110, "DoubleProperty"},
            {"RunFinishTime", 0x118, "DoubleProperty"},
            {"CheckpointStartTime", 0x120, "DoubleProperty"},
            {"LapStartTime", 0x128, "DoubleProperty"},
            {"DistanceToFinishLine", 0x130, "FloatProperty"},
            {"LapDistance", 0x134, "FloatProperty"},
            {"PrimaryTrackDistance", 0x138, "FloatProperty"},
            {"IndependentTrackDistance", 0x13C, "FloatProperty"},
            {"LapsCompleted", 0x140, "IntProperty"},
            {"bHasStartedFirstLap", 0x144, "BoolProperty"},
            {"bFinishedRace", 0x145, "BoolProperty"},
            {"Points", 0x148, "IntProperty"},
            {"ViewingSpectators", 0x150, "ArrayProperty"},
            {"MostRecentlyVisitedCheckpoint", 0x160, "WeakObjectProperty"},
            {"CachedCheckpointManager", 0x168, "WeakObjectProperty"},
            {"CachedRaceManager", 0x170, "WeakObjectProperty"},
            {"CachedDelMarVehicle", 0x178, "WeakObjectProperty"},
            {"CachedPositionalTracker", 0x180, "WeakObjectProperty"},
            {"CachedLapTracker", 0x188, "WeakObjectProperty"},
            {"CheckpointsVisitedThisLap", 0x190, "SetProperty"},
            {"TimeTrialSectionIndex", 0x1A0, "IntProperty"},
            {"CheckpointIndex", 0x1A4, "IntProperty"},
            {"PointsUpdatedEvent", 0x1A8, "ObjectProperty"},
            {"FinishRaceEvent", 0x1B0, "ObjectProperty"},
            {"CachedBotPenaltyCurveIndex", 0x1B8, "IntProperty"},
        }};
    };

    struct DelMarPlayerRespawnComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerRespawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportEnterPhaseSeconds = 0xC0;
            static constexpr std::uintptr_t RespawnBackwardsRangeDistance = 0xC4;
            static constexpr std::uintptr_t RespawnForwardRangeDistance = 0xC8;
            static constexpr std::uintptr_t RespawnHeightStartDistance = 0xCC;
            static constexpr std::uintptr_t RespawnHeightPenetrationDistance = 0xD0;
            static constexpr std::uintptr_t RespawnValidTrackRadius = 0xD4;
            static constexpr std::uintptr_t bCheckForObstacles = 0xDC;
            static constexpr std::uintptr_t OppositeSideThreshold = 0xE0;
            static constexpr std::uintptr_t ObstacleAreaBounds = 0xE8;
            static constexpr std::uintptr_t ObstacleActorClasses = 0x100;
            static constexpr std::uintptr_t ObstacleActorIgnoreClasses = 0x110;
            static constexpr std::uintptr_t RaceManager = 0x124;
            static constexpr std::uintptr_t DelMarVehicle = 0x12C;
            static constexpr std::uintptr_t CheckpointManager = 0x134;
            static constexpr std::uintptr_t PlayerRaceData = 0x13C;
            static constexpr std::uintptr_t RaceConfig = 0x144;
            static constexpr std::uintptr_t LastActiveTrack = 0x14C;
            static constexpr std::uintptr_t TrackPosition = 0x154;
            static constexpr std::uintptr_t LastValidSegmentIndex = 0x15C;
            static constexpr std::uintptr_t LastValidDistanceAlongSpline = 0x160;
            static constexpr std::uintptr_t LastValidFurthestDistance = 0x164;
            static constexpr std::uintptr_t bSpawnOnOppositeSide = 0x16C;
            static constexpr std::uintptr_t bPreviousVehicleDemolished = 0x16D;
            static constexpr std::uintptr_t bFirstVehicleForPlayer = 0x16E;
            static constexpr std::uintptr_t CachedTeleportCheckpoint = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"TeleportEnterPhaseSeconds", 0xC0, "FloatProperty"},
            {"RespawnBackwardsRangeDistance", 0xC4, "FloatProperty"},
            {"RespawnForwardRangeDistance", 0xC8, "FloatProperty"},
            {"RespawnHeightStartDistance", 0xCC, "FloatProperty"},
            {"RespawnHeightPenetrationDistance", 0xD0, "FloatProperty"},
            {"RespawnValidTrackRadius", 0xD4, "FloatProperty"},
            {"bCheckForObstacles", 0xDC, "BoolProperty"},
            {"OppositeSideThreshold", 0xE0, "FloatProperty"},
            {"ObstacleAreaBounds", 0xE8, "StructProperty"},
            {"ObstacleActorClasses", 0x100, "ArrayProperty"},
            {"ObstacleActorIgnoreClasses", 0x110, "ArrayProperty"},
            {"RaceManager", 0x124, "WeakObjectProperty"},
            {"DelMarVehicle", 0x12C, "WeakObjectProperty"},
            {"CheckpointManager", 0x134, "WeakObjectProperty"},
            {"PlayerRaceData", 0x13C, "WeakObjectProperty"},
            {"RaceConfig", 0x144, "WeakObjectProperty"},
            {"LastActiveTrack", 0x14C, "WeakObjectProperty"},
            {"TrackPosition", 0x154, "WeakObjectProperty"},
            {"LastValidSegmentIndex", 0x15C, "IntProperty"},
            {"LastValidDistanceAlongSpline", 0x160, "FloatProperty"},
            {"LastValidFurthestDistance", 0x164, "FloatProperty"},
            {"bSpawnOnOppositeSide", 0x16C, "BoolProperty"},
            {"bPreviousVehicleDemolished", 0x16D, "BoolProperty"},
            {"bFirstVehicleForPlayer", 0x16E, "BoolProperty"},
            {"CachedTeleportCheckpoint", 0x170, "ObjectProperty"},
        }};
    };

    struct DelMarPlayerStart
    {
        static constexpr std::string_view Name = "DelMarPlayerStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStart";
        struct Offsets
        {
            static constexpr std::uintptr_t StartlinePriority = 0x2F0;
            static constexpr std::uintptr_t IsClaimedZDistanceCheck = 0x2F4;
            static constexpr std::uintptr_t DelMarRaceManager = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartlinePriority", 0x2F0, "IntProperty"},
            {"IsClaimedZDistanceCheck", 0x2F4, "FloatProperty"},
            {"DelMarRaceManager", 0x2F8, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerStartlineComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerStartlineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FailBufferSeconds = 0xC0;
            static constexpr std::uintptr_t DelMarVehicle = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FailBufferSeconds", 0xC0, "FloatProperty"},
            {"DelMarVehicle", 0xE0, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerStateComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerStateComponent";
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

    struct DelMarPlayerTurboManagerComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerTurboManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TurboCharges = 0xC0;
            static constexpr std::uintptr_t RechargeRateSeconds = 0xC4;
            static constexpr std::uintptr_t AdditiveRechargeRateModifierSeconds = 0xC8;
            static constexpr std::uintptr_t LapCompleteCharges = 0xCC;
            static constexpr std::uintptr_t RaceStartCharges = 0xD0;
            static constexpr std::uintptr_t MaxCharges = 0xD4;
            static constexpr std::uintptr_t CachedDelMarVehicle = 0xD8;
            static constexpr std::uintptr_t CachedRaceManager = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TurboCharges", 0xC0, "FloatProperty"},
            {"RechargeRateSeconds", 0xC4, "FloatProperty"},
            {"AdditiveRechargeRateModifierSeconds", 0xC8, "FloatProperty"},
            {"LapCompleteCharges", 0xCC, "FloatProperty"},
            {"RaceStartCharges", 0xD0, "FloatProperty"},
            {"MaxCharges", 0xD4, "FloatProperty"},
            {"CachedDelMarVehicle", 0xD8, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE0, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerWrongwayComponent
    {
        static constexpr std::string_view Name = "DelMarPlayerWrongwayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedDelMarVehicle = 0xC0;
            static constexpr std::uintptr_t CachedRaceManager = 0xC8;
            static constexpr std::uintptr_t CachedTrackPositionComp = 0xD0;
            static constexpr std::uintptr_t CachedRaceData = 0xD8;
            static constexpr std::uintptr_t CachedCheckpointManager = 0xE0;
            static constexpr std::uintptr_t CachedTrackManager = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedDelMarVehicle", 0xC0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xC8, "WeakObjectProperty"},
            {"CachedTrackPositionComp", 0xD0, "WeakObjectProperty"},
            {"CachedRaceData", 0xD8, "WeakObjectProperty"},
            {"CachedCheckpointManager", 0xE0, "WeakObjectProperty"},
            {"CachedTrackManager", 0xE8, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayspace
    {
        static constexpr std::string_view Name = "DelMarPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t MRSPlaylistData = 0x6F0;
            static constexpr std::uintptr_t MRSLinkId = 0x6F8;
            static constexpr std::uintptr_t PrimaryStateMachine = 0x718;
            static constexpr std::uintptr_t bShouldShowLoadingScreen = 0x720;
            static constexpr std::uintptr_t DefaultRaceLevelConfigs = 0x728;
            static constexpr std::uintptr_t ActiveRaceManager = 0x738;
            static constexpr std::uintptr_t PlaylistData = 0x740;
            static constexpr std::uintptr_t LevelManager = 0x748;
            static constexpr std::uintptr_t LevelStreamComponent = 0x750;
            static constexpr std::uintptr_t ServerExpirationComponent = 0x758;
            static constexpr std::uintptr_t MapSet = 0x760;
            static constexpr std::uintptr_t PlaylistDefinedMapTags = 0x778;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MRSPlaylistData", 0x6F0, "WeakObjectProperty"},
            {"MRSLinkId", 0x6F8, "StrProperty"},
            {"PrimaryStateMachine", 0x718, "ObjectProperty"},
            {"bShouldShowLoadingScreen", 0x720, "BoolProperty"},
            {"DefaultRaceLevelConfigs", 0x728, "MapProperty"},
            {"ActiveRaceManager", 0x738, "WeakObjectProperty"},
            {"PlaylistData", 0x740, "WeakObjectProperty"},
            {"LevelManager", 0x748, "WeakObjectProperty"},
            {"LevelStreamComponent", 0x750, "ObjectProperty"},
            {"ServerExpirationComponent", 0x758, "ObjectProperty"},
            {"MapSet", 0x760, "StructProperty"},
            {"PlaylistDefinedMapTags", 0x778, "StructProperty"},
        }};
    };

    struct DelMarPlayspaceComponent_ServerExpiration
    {
        static constexpr std::string_view Name = "DelMarPlayspaceComponent_ServerExpiration";
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

    struct DelMarPositionalTrackerComponent
    {
        static constexpr std::string_view Name = "DelMarPositionalTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetUpdateRateInSeconds = 0xC0;
            static constexpr std::uintptr_t SplinePositions = 0xF8;
            static constexpr std::uintptr_t RacePositions = 0x108;
            static constexpr std::uintptr_t FinalRacePositions = 0x118;
            static constexpr std::uintptr_t TimeSinceLastUpdate = 0x128;
            static constexpr std::uintptr_t NumLapsInRace = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetUpdateRateInSeconds", 0xC0, "FloatProperty"},
            {"SplinePositions", 0xF8, "MapProperty"},
            {"RacePositions", 0x108, "ArrayProperty"},
            {"FinalRacePositions", 0x118, "ArrayProperty"},
            {"TimeSinceLastUpdate", 0x128, "FloatProperty"},
            {"NumLapsInRace", 0x12C, "IntProperty"},
        }};
    };

    struct DelMarPreRaceControllerComponent
    {
        static constexpr std::string_view Name = "DelMarPreRaceControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigateAction = 0xD8;
            static constexpr std::uintptr_t ReadyUpAction = 0xE0;
            static constexpr std::uintptr_t ViewTargetTransitionParams = 0xE8;
            static constexpr std::uintptr_t NavigateInputDeadzone = 0xF8;
            static constexpr std::uintptr_t InputManagerClass = 0x100;
            static constexpr std::uintptr_t InputManager = 0x108;
            static constexpr std::uintptr_t InputComponent = 0x110;
            static constexpr std::uintptr_t PositionTracker = 0x118;
            static constexpr std::uintptr_t CurrentViewTarget = 0x120;
            static constexpr std::uintptr_t CellDistThreshold = 0x128;
            static constexpr std::uintptr_t MaxGridDim = 0x12C;
            static constexpr std::uintptr_t NavigationTimerHandle = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"NavigateAction", 0xD8, "ObjectProperty"},
            {"ReadyUpAction", 0xE0, "ObjectProperty"},
            {"ViewTargetTransitionParams", 0xE8, "StructProperty"},
            {"NavigateInputDeadzone", 0xF8, "FloatProperty"},
            {"InputManagerClass", 0x100, "ClassProperty"},
            {"InputManager", 0x108, "WeakObjectProperty"},
            {"InputComponent", 0x110, "WeakObjectProperty"},
            {"PositionTracker", 0x118, "WeakObjectProperty"},
            {"CurrentViewTarget", 0x120, "WeakObjectProperty"},
            {"CellDistThreshold", 0x128, "FloatProperty"},
            {"MaxGridDim", 0x12C, "FloatProperty"},
            {"NavigationTimerHandle", 0x130, "StructProperty"},
        }};
    };

    struct DelMarProxyGhostVisualComponent
    {
        static constexpr std::string_view Name = "DelMarProxyGhostVisualComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedVehicle = 0xC0;
            static constexpr std::uintptr_t CachedVCAMUC = 0xC8;
            static constexpr std::uintptr_t ProxyGhostMaterial = 0xD0;
            static constexpr std::uintptr_t VehicleMaterialInfoMap = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedVehicle", 0xC0, "WeakObjectProperty"},
            {"CachedVCAMUC", 0xC8, "WeakObjectProperty"},
            {"ProxyGhostMaterial", 0xD0, "ObjectProperty"},
            {"VehicleMaterialInfoMap", 0xD8, "MapProperty"},
        }};
    };

    struct DelMarRaceConfigComponent
    {
        static constexpr std::string_view Name = "DelMarRaceConfigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bGhostReplayEnabled = 0xC0;
            static constexpr std::uintptr_t bAllowExitingVehicles = 0xC1;
            static constexpr std::uintptr_t bResetPlayerRunOnUnregister = 0xC2;
            static constexpr std::uintptr_t MatchStartDelaySecondsOverride = 0xC4;
            static constexpr std::uintptr_t SecondsBeforeWrongwayWarning = 0xC8;
            static constexpr std::uintptr_t SecondsBeforeDemoWarningsAppear = 0xCC;
            static constexpr std::uintptr_t SecondsBeforeMissedCheckpointDemo = 0xD0;
            static constexpr std::uintptr_t SecondsBeforeReturnToTrackDemo = 0xD4;
            static constexpr std::uintptr_t DistanceFromTrackBeforeDemoWarning = 0xD8;
            static constexpr std::uintptr_t DistanceFromVehicleBeforeReset = 0xE0;
            static constexpr std::uintptr_t DefaultVehicleClass = 0xE8;
            static constexpr std::uintptr_t ServerPlayerStateComponents = 0x108;
            static constexpr std::uintptr_t ClientPlayerStateComponents = 0x118;
            static constexpr std::uintptr_t ServerControllerComponents = 0x128;
            static constexpr std::uintptr_t ClientControllerComponents = 0x138;
            static constexpr std::uintptr_t SpectatorControllerComponentClass = 0x148;
            static constexpr std::uintptr_t BotRuntimeConfig = 0x150;
            static constexpr std::uintptr_t MatchmakingConfig = 0x178;
            static constexpr std::uintptr_t StartlineConfig = 0x198;
            static constexpr std::uintptr_t VehicleRuntimeConfig = 0x1C0;
            static constexpr std::uintptr_t VehicleAbilityConfig = 0x1CC;
            static constexpr std::uintptr_t RespawnConfig = 0x1E0;
            static constexpr std::uintptr_t DefaultRubberbandingConfig = 0x1F0;
            static constexpr std::uintptr_t RubberbandingMMRConfigs = 0x218;
            static constexpr std::uintptr_t RubberbandingMMROverrideConfigs = 0x228;
            static constexpr std::uintptr_t NonMMRRubberbandingConfigs = 0x238;
            static constexpr std::uintptr_t NonMMRRubberbandingOverrideConfigs = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bGhostReplayEnabled", 0xC0, "BoolProperty"},
            {"bAllowExitingVehicles", 0xC1, "BoolProperty"},
            {"bResetPlayerRunOnUnregister", 0xC2, "BoolProperty"},
            {"MatchStartDelaySecondsOverride", 0xC4, "FloatProperty"},
            {"SecondsBeforeWrongwayWarning", 0xC8, "FloatProperty"},
            {"SecondsBeforeDemoWarningsAppear", 0xCC, "FloatProperty"},
            {"SecondsBeforeMissedCheckpointDemo", 0xD0, "FloatProperty"},
            {"SecondsBeforeReturnToTrackDemo", 0xD4, "FloatProperty"},
            {"DistanceFromTrackBeforeDemoWarning", 0xD8, "DoubleProperty"},
            {"DistanceFromVehicleBeforeReset", 0xE0, "DoubleProperty"},
            {"DefaultVehicleClass", 0xE8, "SoftClassProperty"},
            {"ServerPlayerStateComponents", 0x108, "ArrayProperty"},
            {"ClientPlayerStateComponents", 0x118, "ArrayProperty"},
            {"ServerControllerComponents", 0x128, "ArrayProperty"},
            {"ClientControllerComponents", 0x138, "ArrayProperty"},
            {"SpectatorControllerComponentClass", 0x148, "ClassProperty"},
            {"BotRuntimeConfig", 0x150, "StructProperty"},
            {"MatchmakingConfig", 0x178, "StructProperty"},
            {"StartlineConfig", 0x198, "StructProperty"},
            {"VehicleRuntimeConfig", 0x1C0, "StructProperty"},
            {"VehicleAbilityConfig", 0x1CC, "StructProperty"},
            {"RespawnConfig", 0x1E0, "StructProperty"},
            {"DefaultRubberbandingConfig", 0x1F0, "StructProperty"},
            {"RubberbandingMMRConfigs", 0x218, "ArrayProperty"},
            {"RubberbandingMMROverrideConfigs", 0x228, "ArrayProperty"},
            {"NonMMRRubberbandingConfigs", 0x238, "MapProperty"},
            {"NonMMRRubberbandingOverrideConfigs", 0x248, "MapProperty"},
        }};
    };

    struct DelMarRaceInfoComponent
    {
        static constexpr std::string_view Name = "DelMarRaceInfoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceGUID = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RaceGUID", 0xC0, "StrProperty"},
        }};
    };

    struct DelMarRaceLevelConfig
    {
        static constexpr std::string_view Name = "DelMarRaceLevelConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceMode = 0xB58;
            static constexpr std::uintptr_t DefaultNumRequiredLaps = 0xB5C;
            static constexpr std::uintptr_t NumVisibleNextCheckpoints = 0xB60;
            static constexpr std::uintptr_t ZKillOffsetDistanceFromLowestSplinePoint = 0xB64;
            static constexpr std::uintptr_t bShouldRunAsADelMarExperience = 0xB68;
            static constexpr std::uintptr_t OvertimeSeconds = 0xB6C;
            static constexpr std::uintptr_t bOverrideTurboChargeRegenRateSeconds = 0xB70;
            static constexpr std::uintptr_t TurboChargeRegenRateSeconds = 0xB74;
            static constexpr std::uintptr_t bOverrideTurboRaceStartCharges = 0xB78;
            static constexpr std::uintptr_t TurboRaceStartCharges = 0xB7C;
            static constexpr std::uintptr_t bOverrideTurboLapCompleteCharges = 0xB80;
            static constexpr std::uintptr_t TurboLapCompleteCharges = 0xB84;
            static constexpr std::uintptr_t bNonTrackVelocityRedirectEnabled = 0xB88;
            static constexpr std::uintptr_t LevelTag = 0xB8C;
            static constexpr std::uintptr_t bHasMatchTimeLimit = 0xB90;
            static constexpr std::uintptr_t MatchTimeLimitSeconds = 0xB94;
            static constexpr std::uintptr_t RaceManagerClassMap = 0xB98;
            static constexpr std::uintptr_t RaceCVars = 0xBA8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"RaceMode", 0xB58, "EnumProperty"},
            {"DefaultNumRequiredLaps", 0xB5C, "IntProperty"},
            {"NumVisibleNextCheckpoints", 0xB60, "IntProperty"},
            {"ZKillOffsetDistanceFromLowestSplinePoint", 0xB64, "FloatProperty"},
            {"bShouldRunAsADelMarExperience", 0xB68, "BoolProperty"},
            {"OvertimeSeconds", 0xB6C, "IntProperty"},
            {"bOverrideTurboChargeRegenRateSeconds", 0xB70, "BoolProperty"},
            {"TurboChargeRegenRateSeconds", 0xB74, "FloatProperty"},
            {"bOverrideTurboRaceStartCharges", 0xB78, "BoolProperty"},
            {"TurboRaceStartCharges", 0xB7C, "FloatProperty"},
            {"bOverrideTurboLapCompleteCharges", 0xB80, "BoolProperty"},
            {"TurboLapCompleteCharges", 0xB84, "FloatProperty"},
            {"bNonTrackVelocityRedirectEnabled", 0xB88, "BoolProperty"},
            {"LevelTag", 0xB8C, "StructProperty"},
            {"bHasMatchTimeLimit", 0xB90, "BoolProperty"},
            {"MatchTimeLimitSeconds", 0xB94, "IntProperty"},
            {"RaceManagerClassMap", 0xB98, "MapProperty"},
            {"RaceCVars", 0xBA8, "ArrayProperty"},
        }};
    };

    struct DelMarRaceManager
    {
        static constexpr std::string_view Name = "DelMarRaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRaceFinished = 0x320;
            static constexpr std::uintptr_t OnRaceStarted = 0x330;
            static constexpr std::uintptr_t OnRaceCountdownStarted = 0x340;
            static constexpr std::uintptr_t OnRaceReset = 0x350;
            static constexpr std::uintptr_t OnPlayerFinishedRace = 0x360;
            static constexpr std::uintptr_t OnPlayerLapComplete = 0x370;
            static constexpr std::uintptr_t OnPlayerResetRun = 0x380;
            static constexpr std::uintptr_t bRaceStarted = 0x390;
            static constexpr std::uintptr_t bRaceFinished = 0x391;
            static constexpr std::uintptr_t SpectatorPlayerStates = 0x398;
            static constexpr std::uintptr_t ActiveRacerPlayerStates = 0x3A8;
            static constexpr std::uintptr_t RaceConfig = 0x3B8;
            static constexpr std::uintptr_t ActiveRaceLevelConfig = 0x3C0;
            static constexpr std::uintptr_t TimeManager = 0x3C8;
            static constexpr std::uintptr_t RespawnManager = 0x3D0;
            static constexpr std::uintptr_t CheckpointManager = 0x3D8;
            static constexpr std::uintptr_t RubberbandingManager = 0x3E0;
            static constexpr std::uintptr_t GameplayModifierComponent = 0x3E8;
            static constexpr std::uintptr_t PositionalTracker = 0x3F0;
            static constexpr std::uintptr_t EliminationManager = 0x3F8;
            static constexpr std::uintptr_t InputDisablerComponent = 0x400;
            static constexpr std::uintptr_t MatchEventSystemComponent = 0x408;
            static constexpr std::uintptr_t ManagedPlayerStates = 0x410;
            static constexpr std::uintptr_t InactivePlayerStates = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"OnRaceFinished", 0x320, "MulticastInlineDelegateProperty"},
            {"OnRaceStarted", 0x330, "MulticastInlineDelegateProperty"},
            {"OnRaceCountdownStarted", 0x340, "MulticastInlineDelegateProperty"},
            {"OnRaceReset", 0x350, "MulticastInlineDelegateProperty"},
            {"OnPlayerFinishedRace", 0x360, "MulticastInlineDelegateProperty"},
            {"OnPlayerLapComplete", 0x370, "MulticastInlineDelegateProperty"},
            {"OnPlayerResetRun", 0x380, "MulticastInlineDelegateProperty"},
            {"bRaceStarted", 0x390, "BoolProperty"},
            {"bRaceFinished", 0x391, "BoolProperty"},
            {"SpectatorPlayerStates", 0x398, "ArrayProperty"},
            {"ActiveRacerPlayerStates", 0x3A8, "ArrayProperty"},
            {"RaceConfig", 0x3B8, "ObjectProperty"},
            {"ActiveRaceLevelConfig", 0x3C0, "WeakObjectProperty"},
            {"TimeManager", 0x3C8, "ObjectProperty"},
            {"RespawnManager", 0x3D0, "ObjectProperty"},
            {"CheckpointManager", 0x3D8, "ObjectProperty"},
            {"RubberbandingManager", 0x3E0, "ObjectProperty"},
            {"GameplayModifierComponent", 0x3E8, "ObjectProperty"},
            {"PositionalTracker", 0x3F0, "ObjectProperty"},
            {"EliminationManager", 0x3F8, "ObjectProperty"},
            {"InputDisablerComponent", 0x400, "ObjectProperty"},
            {"MatchEventSystemComponent", 0x408, "ObjectProperty"},
            {"ManagedPlayerStates", 0x410, "SetProperty"},
            {"InactivePlayerStates", 0x420, "SetProperty"},
        }};
    };

    struct DelMarRaceManagerComponent
    {
        static constexpr std::string_view Name = "DelMarRaceManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct DelMarRaceManagerVerbComponent
    {
        static constexpr std::string_view Name = "DelMarRaceManagerVerbComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRaceManager = 0xC0;
            static constexpr std::uintptr_t PositionalTracker = 0xC8;
            static constexpr std::uintptr_t PrevRacePositions = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedRaceManager", 0xC0, "WeakObjectProperty"},
            {"PositionalTracker", 0xC8, "WeakObjectProperty"},
            {"PrevRacePositions", 0xD0, "ArrayProperty"},
        }};
    };

    struct DelMarRaceMusicPlaylist
    {
        static constexpr std::string_view Name = "DelMarRaceMusicPlaylist";
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

    struct DelMarRaceMusicPlaylistComponent
    {
        static constexpr std::string_view Name = "DelMarRaceMusicPlaylistComponent";
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

    struct DelMarRacerState
    {
        static constexpr std::string_view Name = "DelMarRacerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarRacerStateMachineComponent
    {
        static constexpr std::string_view Name = "DelMarRacerStateMachineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceManager = 0x188;
            static constexpr std::uintptr_t PreviousStateTag = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RaceManager", 0x188, "WeakObjectProperty"},
            {"PreviousStateTag", 0x190, "StructProperty"},
        }};
    };

    struct DelMarRacerState_Countdown
    {
        static constexpr std::string_view Name = "DelMarRacerState_Countdown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vehicle", 0x30, "WeakObjectProperty"},
        }};
    };

    struct DelMarRacerState_RunFinished
    {
        static constexpr std::string_view Name = "DelMarRacerState_RunFinished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState_WithSpectatorTransitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vehicle", 0x30, "WeakObjectProperty"},
        }};
    };

    struct DelMarRacerState_Spectator
    {
        static constexpr std::string_view Name = "DelMarRacerState_Spectator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarRacerState_WithSpectatorTransitionBase
    {
        static constexpr std::string_view Name = "DelMarRacerState_WithSpectatorTransitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRacerState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarRemoveAthenaMarkerComponent
    {
        static constexpr std::string_view Name = "DelMarRemoveAthenaMarkerComponent";
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

    struct DelMarRequestComponent
    {
        static constexpr std::string_view Name = "DelMarRequestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MapChoice = 0x108;
            static constexpr std::uintptr_t bIsLoadingScreenActive = 0x128;
            static constexpr std::uintptr_t bIsReadyToStartRace = 0x129;
            static constexpr std::uintptr_t bIsReadyToJoinRace = 0x12A;
            static constexpr std::uintptr_t PostRaceVote = 0x12B;
            static constexpr std::uintptr_t bVotedPostRace = 0x12C;
            static constexpr std::uintptr_t CachedRaceManager = 0x130;
            static constexpr std::uintptr_t CachedRespawnManager = 0x138;
            static constexpr std::uintptr_t PlayerState = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MapChoice", 0x108, "StructProperty"},
            {"bIsLoadingScreenActive", 0x128, "BoolProperty"},
            {"bIsReadyToStartRace", 0x129, "BoolProperty"},
            {"bIsReadyToJoinRace", 0x12A, "BoolProperty"},
            {"PostRaceVote", 0x12B, "EnumProperty"},
            {"bVotedPostRace", 0x12C, "BoolProperty"},
            {"CachedRaceManager", 0x130, "WeakObjectProperty"},
            {"CachedRespawnManager", 0x138, "WeakObjectProperty"},
            {"PlayerState", 0x140, "WeakObjectProperty"},
        }};
    };

    struct DelMarRequestTrackerComponent
    {
        static constexpr std::string_view Name = "DelMarRequestTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerReadyStates = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerReadyStates", 0xC0, "StructProperty"},
        }};
    };

    struct DelMarRespawnManagerComponent
    {
        static constexpr std::string_view Name = "DelMarRespawnManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RespawnRetrySeconds = 0xC0;
            static constexpr std::uintptr_t CachedCheckpointManager = 0xD8;
            static constexpr std::uintptr_t CachedRaceManager = 0xE0;
            static constexpr std::uintptr_t CachedChallengeStartSpawnPoint = 0xE8;
            static constexpr std::uintptr_t RespawnRetryQueue = 0xF0;
            static constexpr std::uintptr_t LastSpawnedVehicleMap = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RespawnRetrySeconds", 0xC0, "FloatProperty"},
            {"CachedCheckpointManager", 0xD8, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE0, "WeakObjectProperty"},
            {"CachedChallengeStartSpawnPoint", 0xE8, "WeakObjectProperty"},
            {"RespawnRetryQueue", 0xF0, "ArrayProperty"},
            {"LastSpawnedVehicleMap", 0x100, "MapProperty"},
        }};
    };

    struct DelMarRubberbandingManagerComponent
    {
        static constexpr std::string_view Name = "DelMarRubberbandingManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PackDistance = 0xD8;
            static constexpr std::uintptr_t RubberbandingConfig = 0xDC;
            static constexpr std::uintptr_t MMRUsed = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PackDistance", 0xD8, "FloatProperty"},
            {"RubberbandingConfig", 0xDC, "StructProperty"},
            {"MMRUsed", 0x104, "IntProperty"},
        }};
    };

    struct DelMarRunRecordPlayerComponent
    {
        static constexpr std::string_view Name = "DelMarRunRecordPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRunRecord = 0xC0;
            static constexpr std::uintptr_t BestRunRecord = 0xE0;
            static constexpr std::uintptr_t BestSectionsRecord = 0x100;
            static constexpr std::uintptr_t BestSingleLapTime = 0x120;
            static constexpr std::uintptr_t RaceManager = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurrentRunRecord", 0xC0, "StructProperty"},
            {"BestRunRecord", 0xE0, "StructProperty"},
            {"BestSectionsRecord", 0x100, "StructProperty"},
            {"BestSingleLapTime", 0x120, "DoubleProperty"},
            {"RaceManager", 0x128, "WeakObjectProperty"},
        }};
    };

    struct DelMarSpectatorControllerComponent
    {
        static constexpr std::string_view Name = "DelMarSpectatorControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectateNextPlayerAction = 0xC0;
            static constexpr std::uintptr_t SpectatePrevPlayerAction = 0xC8;
            static constexpr std::uintptr_t ExitSpectateAction = 0xD0;
            static constexpr std::uintptr_t InputManagerClass = 0xD8;
            static constexpr std::uintptr_t InputComponent = 0xE0;
            static constexpr std::uintptr_t CachedRaceManager = 0xE8;
            static constexpr std::uintptr_t SpectatorRequestComponent = 0xF0;
            static constexpr std::uintptr_t CurrentViewTarget = 0xF8;
            static constexpr std::uintptr_t PrevValidViewTarget = 0x100;
            static constexpr std::uintptr_t SpectatorPlayerState = 0x108;
            static constexpr std::uintptr_t SpectatorController = 0x110;
            static constexpr std::uintptr_t bIsLateJoinSpectator = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SpectateNextPlayerAction", 0xC0, "ObjectProperty"},
            {"SpectatePrevPlayerAction", 0xC8, "ObjectProperty"},
            {"ExitSpectateAction", 0xD0, "ObjectProperty"},
            {"InputManagerClass", 0xD8, "ClassProperty"},
            {"InputComponent", 0xE0, "WeakObjectProperty"},
            {"CachedRaceManager", 0xE8, "WeakObjectProperty"},
            {"SpectatorRequestComponent", 0xF0, "WeakObjectProperty"},
            {"CurrentViewTarget", 0xF8, "WeakObjectProperty"},
            {"PrevValidViewTarget", 0x100, "WeakObjectProperty"},
            {"SpectatorPlayerState", 0x108, "WeakObjectProperty"},
            {"SpectatorController", 0x110, "WeakObjectProperty"},
            {"bIsLateJoinSpectator", 0x118, "BoolProperty"},
        }};
    };

    struct DelMarSpeedUpDevice
    {
        static constexpr std::string_view Name = "DelMarSpeedUpDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedAmount = 0xB58;
            static constexpr std::uintptr_t SpeedEffectDuration = 0xB5C;
            static constexpr std::uintptr_t TurboChargesGained = 0xB60;
            static constexpr std::uintptr_t MinDotProductAngleValue = 0xB80;
            static constexpr std::uintptr_t SpeedSourceTag = 0xB84;
            static constexpr std::uintptr_t bApplyForce = 0xB88;
            static constexpr std::uintptr_t GroupID = 0xB8C;
            static constexpr std::uintptr_t PowerIntensityScalarCurve = 0xB90;
            static constexpr std::uintptr_t MaxLifetimePowerIntensitySeconds = 0xBE0;
            static constexpr std::uintptr_t Collider = 0xBE8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SpeedAmount", 0xB58, "FloatProperty"},
            {"SpeedEffectDuration", 0xB5C, "FloatProperty"},
            {"TurboChargesGained", 0xB60, "FloatProperty"},
            {"MinDotProductAngleValue", 0xB80, "FloatProperty"},
            {"SpeedSourceTag", 0xB84, "StructProperty"},
            {"bApplyForce", 0xB88, "BoolProperty"},
            {"GroupID", 0xB8C, "IntProperty"},
            {"PowerIntensityScalarCurve", 0xB90, "StructProperty"},
            {"MaxLifetimePowerIntensitySeconds", 0xBE0, "FloatProperty"},
            {"Collider", 0xBE8, "ObjectProperty"},
        }};
    };

    struct DelMarSplineActorMovementComponent
    {
        static constexpr std::string_view Name = "DelMarSplineActorMovementComponent";
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

    struct DelMarStartLineActor
    {
        static constexpr std::string_view Name = "DelMarStartLineActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Checkpoint = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Checkpoint", 0x278, "ObjectProperty"},
        }};
    };

    struct DelMarState
    {
        static constexpr std::string_view Name = "DelMarState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarStateMachine
    {
        static constexpr std::string_view Name = "DelMarStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StateOverrides = 0xC0;
            static constexpr std::uintptr_t StateMappings = 0xD0;
            static constexpr std::uintptr_t RequestedStateTag = 0xE0;
            static constexpr std::uintptr_t CurrentStateTag = 0xE4;
            static constexpr std::uintptr_t DefaultStateTag = 0xE8;
            static constexpr std::uintptr_t ActiveStates = 0xF0;
            static constexpr std::uintptr_t ReplicatedStates = 0x100;
            static constexpr std::uintptr_t WaitingForStateReplicationTag = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StateOverrides", 0xC0, "ArrayProperty"},
            {"StateMappings", 0xD0, "MapProperty"},
            {"RequestedStateTag", 0xE0, "StructProperty"},
            {"CurrentStateTag", 0xE4, "StructProperty"},
            {"DefaultStateTag", 0xE8, "StructProperty"},
            {"ActiveStates", 0xF0, "ArrayProperty"},
            {"ReplicatedStates", 0x100, "ArrayProperty"},
            {"WaitingForStateReplicationTag", 0x110, "StructProperty"},
        }};
    };

    struct DelMarStateSequencerFXComponent
    {
        static constexpr std::string_view Name = "DelMarStateSequencerFXComponent";
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

    struct DelMarState_Gameplay
    {
        static constexpr std::string_view Name = "DelMarState_Gameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarState_Gameplay_ActiveRace
    {
        static constexpr std::string_view Name = "DelMarState_Gameplay_ActiveRace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarState_Gameplay_Postrace
    {
        static constexpr std::string_view Name = "DelMarState_Gameplay_Postrace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t PostRaceDuration = 0x30;
            static constexpr std::uintptr_t PostRaceEndServerTime = 0x38;
            static constexpr std::uintptr_t ReadyPlayers = 0x40;
            static constexpr std::uintptr_t CachedPlayspace = 0x50;
            static constexpr std::uintptr_t CachedRaceManager = 0x58;
            static constexpr std::uintptr_t EliminationList = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PostRaceDuration", 0x30, "FloatProperty"},
            {"PostRaceEndServerTime", 0x38, "DoubleProperty"},
            {"ReadyPlayers", 0x40, "SetProperty"},
            {"CachedPlayspace", 0x50, "WeakObjectProperty"},
            {"CachedRaceManager", 0x58, "WeakObjectProperty"},
            {"EliminationList", 0xB8, "StrProperty"},
        }};
    };

    struct DelMarState_Gameplay_Prerace
    {
        static constexpr std::string_view Name = "DelMarState_Gameplay_Prerace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceManager = 0x30;
            static constexpr std::uintptr_t PreRaceCountdownFinishServerTime = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RaceManager", 0x30, "WeakObjectProperty"},
            {"PreRaceCountdownFinishServerTime", 0x48, "DoubleProperty"},
        }};
    };

    struct DelMarState_Gameplay_WaitingForPlayers
    {
        static constexpr std::string_view Name = "DelMarState_Gameplay_WaitingForPlayers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPlayers = 0x34;
            static constexpr std::uintptr_t RaceManager = 0x38;
            static constexpr std::uintptr_t MatchmakeRatingComponent = 0x40;
            static constexpr std::uintptr_t LoadedPlayerStates = 0x48;
            static constexpr std::uintptr_t FortPartyBeacon = 0x50;
            static constexpr std::uintptr_t ContentBeacon = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MinPlayers", 0x34, "IntProperty"},
            {"RaceManager", 0x38, "WeakObjectProperty"},
            {"MatchmakeRatingComponent", 0x40, "WeakObjectProperty"},
            {"LoadedPlayerStates", 0x48, "StructProperty"},
            {"FortPartyBeacon", 0x50, "WeakObjectProperty"},
            {"ContentBeacon", 0x58, "WeakObjectProperty"},
        }};
    };

    struct DelMarState_LevelSetup
    {
        static constexpr std::string_view Name = "DelMarState_LevelSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t bVehiclesReady = 0x30;
            static constexpr std::uintptr_t bVehiclesSpawned = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bVehiclesReady", 0x30, "BoolProperty"},
            {"bVehiclesSpawned", 0x31, "BoolProperty"},
        }};
    };

    struct DelMarState_Loading
    {
        static constexpr std::string_view Name = "DelMarState_Loading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayBeforeLoadingActuallyStarts = 0x30;
            static constexpr std::uintptr_t DesiredMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DelayBeforeLoadingActuallyStarts", 0x30, "FloatProperty"},
            {"DesiredMap", 0x38, "StructProperty"},
        }};
    };

    struct DelMarState_Lobby
    {
        static constexpr std::string_view Name = "DelMarState_Lobby";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t bLevelLoadRequested = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bLevelLoadRequested", 0x30, "BoolProperty"},
        }};
    };

    struct DelMarState_Setup
    {
        static constexpr std::string_view Name = "DelMarState_Setup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasRequestedLink = 0x30;
            static constexpr std::uintptr_t bHasRecievedMatchAssignment = 0x31;
            static constexpr std::uintptr_t bRequiresMatchAssignmentToProceed = 0x32;
            static constexpr std::uintptr_t bCalledMapRotationService = 0x33;
            static constexpr std::uintptr_t DebugMapToLoad = 0x38;
            static constexpr std::uintptr_t DebugIslandCodeToLoad = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bHasRequestedLink", 0x30, "BoolProperty"},
            {"bHasRecievedMatchAssignment", 0x31, "BoolProperty"},
            {"bRequiresMatchAssignmentToProceed", 0x32, "BoolProperty"},
            {"bCalledMapRotationService", 0x33, "BoolProperty"},
            {"DebugMapToLoad", 0x38, "StructProperty"},
            {"DebugIslandCodeToLoad", 0x58, "StructProperty"},
        }};
    };

    struct DelMarSubmixSendExtension
    {
        static constexpr std::string_view Name = "DelMarSubmixSendExtension";
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

    struct DelMarTimeDelayedStateSequencer
    {
        static constexpr std::string_view Name = "DelMarTimeDelayedStateSequencer";
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

    struct DelMarTimeManagerComponent
    {
        static constexpr std::string_view Name = "DelMarTimeManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerCountdownStarted = 0xC0;
            static constexpr std::uintptr_t ServerCountdownStartTime = 0xD0;
            static constexpr std::uintptr_t ServerRaceStartTime = 0xD8;
            static constexpr std::uintptr_t ServerRaceFinishTime = 0xE0;
            static constexpr std::uintptr_t ServerCountdownIntervalTime = 0xE8;
            static constexpr std::uintptr_t RaceConfig = 0xF0;
            static constexpr std::uintptr_t RaceLevelConfig = 0xF8;
            static constexpr std::uintptr_t CachedRaceManager = 0x100;
            static constexpr std::uintptr_t ActiveCountdownRunStartTimeMap = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPlayerCountdownStarted", 0xC0, "MulticastInlineDelegateProperty"},
            {"ServerCountdownStartTime", 0xD0, "DoubleProperty"},
            {"ServerRaceStartTime", 0xD8, "DoubleProperty"},
            {"ServerRaceFinishTime", 0xE0, "DoubleProperty"},
            {"ServerCountdownIntervalTime", 0xE8, "DoubleProperty"},
            {"RaceConfig", 0xF0, "WeakObjectProperty"},
            {"RaceLevelConfig", 0xF8, "WeakObjectProperty"},
            {"CachedRaceManager", 0x100, "WeakObjectProperty"},
            {"ActiveCountdownRunStartTimeMap", 0x108, "MapProperty"},
        }};
    };

    struct DelMarTutorialConfigComponent
    {
        static constexpr std::string_view Name = "DelMarTutorialConfigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xC0, "ArrayProperty"},
        }};
    };

    struct DelMarTutorialInteractableSpline
    {
        static constexpr std::string_view Name = "DelMarTutorialInteractableSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bMustTriggerInOrder = 0x278;
            static constexpr std::uintptr_t ChildActorScaleMultiplier = 0x280;
            static constexpr std::uintptr_t SplineGenerationMode = 0x298;
            static constexpr std::uintptr_t ChildActorCount = 0x29C;
            static constexpr std::uintptr_t bUseSplineRotationForActors = 0x2A0;
            static constexpr std::uintptr_t bShowDebugNumbers = 0x2A1;
            static constexpr std::uintptr_t DebugTextZOffset = 0x2A4;
            static constexpr std::uintptr_t DebugTextSize = 0x2A8;
            static constexpr std::uintptr_t DebugTextMaterial = 0x2B0;
            static constexpr std::uintptr_t SplineComponent = 0x2B8;
            static constexpr std::uintptr_t ChildActorClass = 0x2C0;
            static constexpr std::uintptr_t ChildActorComponents = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bMustTriggerInOrder", 0x278, "BoolProperty"},
            {"ChildActorScaleMultiplier", 0x280, "StructProperty"},
            {"SplineGenerationMode", 0x298, "EnumProperty"},
            {"ChildActorCount", 0x29C, "IntProperty"},
            {"bUseSplineRotationForActors", 0x2A0, "BoolProperty"},
            {"bShowDebugNumbers", 0x2A1, "BoolProperty"},
            {"DebugTextZOffset", 0x2A4, "FloatProperty"},
            {"DebugTextSize", 0x2A8, "FloatProperty"},
            {"DebugTextMaterial", 0x2B0, "ObjectProperty"},
            {"SplineComponent", 0x2B8, "ObjectProperty"},
            {"ChildActorClass", 0x2C0, "ClassProperty"},
            {"ChildActorComponents", 0x2C8, "ArrayProperty"},
        }};
    };

    struct DelMarTutorialRaceManager
    {
        static constexpr std::string_view Name = "DelMarTutorialRaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarRaceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialVehicleAbilityConfig = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitialVehicleAbilityConfig", 0x430, "StructProperty"},
        }};
    };

    struct DelMarTutorialRequestComponent
    {
        static constexpr std::string_view Name = "DelMarTutorialRequestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerState = 0xC0;
            static constexpr std::uintptr_t TutorialRaceManager = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerState", 0xC0, "WeakObjectProperty"},
            {"TutorialRaceManager", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct DelMarTutorialTriggerActor
    {
        static constexpr std::string_view Name = "DelMarTutorialTriggerActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxCollider = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxCollider", 0x280, "ObjectProperty"},
        }};
    };

    struct DelMarUIInputControllerComponent
    {
        static constexpr std::string_view Name = "DelMarUIInputControllerComponent";
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

    struct DelMarVehicle
    {
        static constexpr std::string_view Name = "DelMarVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCameraMode = 0x20E0;
            static constexpr std::uintptr_t SeatIndexCameraModes = 0x20E8;
            static constexpr std::uintptr_t bLocalDriverHasReplicatedVehicle = 0x20F8;
            static constexpr std::uintptr_t PendingDriverInputState = 0x2118;
            static constexpr std::uintptr_t CurrentInputType = 0x2158;
            static constexpr std::uintptr_t DistanceToPack = 0x2178;
            static constexpr std::uintptr_t DistanceFromTrackFinish = 0x217C;
            static constexpr std::uintptr_t RaceStatusSpeedModifier = 0x2180;
            static constexpr std::uintptr_t TurboBoostChanceCache = 0x2184;
            static constexpr std::uintptr_t ATTR_bVehicleThrottleDisabled = 0x2188;
            static constexpr std::uintptr_t ThrottleAction = 0x2190;
            static constexpr std::uintptr_t BrakeAction = 0x21A0;
            static constexpr std::uintptr_t SteerAction = 0x21B0;
            static constexpr std::uintptr_t SteerLeftAction = 0x21C0;
            static constexpr std::uintptr_t SteerRightAction = 0x21D0;
            static constexpr std::uintptr_t PitchAction = 0x21E0;
            static constexpr std::uintptr_t PitchUpAction = 0x21F0;
            static constexpr std::uintptr_t PitchDownAction = 0x2200;
            static constexpr std::uintptr_t RollAction = 0x2210;
            static constexpr std::uintptr_t YawAction = 0x2220;
            static constexpr std::uintptr_t DriftAction = 0x2230;
            static constexpr std::uintptr_t JumpAction = 0x2240;
            static constexpr std::uintptr_t KickFlipAction = 0x2250;
            static constexpr std::uintptr_t UnderthrustAction = 0x2260;
            static constexpr std::uintptr_t TurboAction = 0x2270;
            static constexpr std::uintptr_t DelMarExitAction = 0x2280;
            static constexpr std::uintptr_t ResetRunAction = 0x2290;
            static constexpr std::uintptr_t AirFreestyleAction = 0x22A0;
            static constexpr std::uintptr_t StrafeAction = 0x22B0;
            static constexpr std::uintptr_t AerialPitchAction = 0x22C0;
            static constexpr std::uintptr_t DemolishAction = 0x22D0;
            static constexpr std::uintptr_t InputManagerClass = 0x22E0;
            static constexpr std::uintptr_t IdleVelocityLengthThreshold = 0x2300;
            static constexpr std::uintptr_t IdleInputSecondsThreshold = 0x2304;
            static constexpr std::uintptr_t bIdleFromNoInput = 0x2308;
            static constexpr std::uintptr_t RaceManager = 0x2358;
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x2360;
            static constexpr std::uintptr_t CosmeticComponent = 0x2368;
            static constexpr std::uintptr_t DelMarVehicleMovementSet = 0x2370;
            static constexpr std::uintptr_t FortSettings = 0x2378;
            static constexpr std::uintptr_t TrackPositionComponentClass = 0x2380;
            static constexpr std::uintptr_t TrackPositionComponent = 0x2388;
            static constexpr std::uintptr_t WheelSkeletalMeshComps = 0x2398;
            static constexpr std::uintptr_t PlayerInVehicleEvents = 0x23A8;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x23B8;
            static constexpr std::uintptr_t CachedContacts = 0x23C0;
            static constexpr std::uintptr_t NearbyTrackDistanceThreshold = 0x23D0;
            static constexpr std::uintptr_t MaxStableSpeedToUpdateWheels = 0x23E8;
            static constexpr std::uintptr_t SecondsUntilVehicleHitVelocityClears = 0x23EC;
            static constexpr std::uintptr_t bOverrideDamageFromInstigator = 0x23F0;
            static constexpr std::uintptr_t ConfigOverrides = 0x2450;
            static constexpr std::uintptr_t VisualSteerAngleInterpRate = 0x30C0;
            static constexpr std::uintptr_t DriftVisualSteerAngleInterpRate = 0x30C4;
            static constexpr std::uintptr_t bOverrideVisualSteeringAngle = 0x30C8;
            static constexpr std::uintptr_t DrivingVisualSteeringDegrees = 0x30CC;
            static constexpr std::uintptr_t DriftSteeringDegreesCurve = 0x30D0;
            static constexpr std::uintptr_t bShowVisualSteerAngleInAir = 0x3120;
            static constexpr std::uintptr_t BodySetup = 0x3128;
            static constexpr std::uintptr_t ActiveRaceConfig = 0x3148;
            static constexpr std::uintptr_t RaceTimeManager = 0x3150;
            static constexpr std::uintptr_t GlobalInputDisabler = 0x3158;
            static constexpr std::uintptr_t OnVehicleWheelsLeftGround = 0x3170;
            static constexpr std::uintptr_t OnSpeedometerSpeedChanged = 0x3180;
            static constexpr std::uintptr_t MinNoThrottleSpeed = 0x3190;
            static constexpr std::uintptr_t SpeedSlowdownSpeedometerSeconds = 0x3194;
            static constexpr std::uintptr_t SpeedSlowdownTags = 0x3198;
            static constexpr std::uintptr_t InvertSteerMethod = 0x31A8;
            static constexpr std::uintptr_t bPitchInverted = 0x31A9;
            static constexpr std::uintptr_t bVerticalKickflipInverted = 0x31AA;
            static constexpr std::uintptr_t bAerialPitchActivationEnabled = 0x31AB;
            static constexpr std::uintptr_t OnBonusSpeedActivated = 0x31E0;
            static constexpr std::uintptr_t OnBonusSpeedDeactivated = 0x31F0;
            static constexpr std::uintptr_t OnBonusSpeedChanged = 0x3200;
            static constexpr std::uintptr_t OnAnyWheelsOnGroundChanged = 0x3210;
            static constexpr std::uintptr_t OnWheelsOnGroundChanged = 0x3220;
            static constexpr std::uintptr_t OnVehicleForwardStateChanged = 0x3230;
            static constexpr std::uintptr_t OnDelMarVehicleHitWall = 0x3320;
            static constexpr std::uintptr_t OnDelMarVehicleHitVehicle = 0x3330;
            static constexpr std::uintptr_t OnDelMarVehicleHitByVehicle = 0x3340;
            static constexpr std::uintptr_t OnVehicleLanded = 0x3350;
            static constexpr std::uintptr_t OnWorldBonusSpeedStackGained = 0x33A0;
            static constexpr std::uintptr_t OnWorldBonusSpeedStackLost = 0x33B0;
            static constexpr std::uintptr_t OnVehicleStartedSkydiving = 0x33F0;
            static constexpr std::uintptr_t OnVehicleStoppedSkydiving = 0x3400;
            static constexpr std::uintptr_t OnDriftActivated = 0x3420;
            static constexpr std::uintptr_t OnDriftDeactivated = 0x3430;
            static constexpr std::uintptr_t OnDriftSlipAngleRatioChanged = 0x3440;
            static constexpr std::uintptr_t OnDriftKickActivated = 0x3450;
            static constexpr std::uintptr_t OnDriftKickDeactivated = 0x3460;
            static constexpr std::uintptr_t OnDriftControlChanged = 0x3470;
            static constexpr std::uintptr_t OnDriftDurationChanged = 0x3480;
            static constexpr std::uintptr_t OnEnteredDriftBoostRange = 0x34E0;
            static constexpr std::uintptr_t OnExitedDriftBoostRange = 0x34F0;
            static constexpr std::uintptr_t OnStartedLosingAppliedDriftBoost = 0x3500;
            static constexpr std::uintptr_t OnDriftBoostActivated = 0x3510;
            static constexpr std::uintptr_t OnDriftBoostDeactivated = 0x3520;
            static constexpr std::uintptr_t OnMaxPotentialReached = 0x3530;
            static constexpr std::uintptr_t OnMaxPotentialLost = 0x3540;
            static constexpr std::uintptr_t OnAllPotentialLost = 0x3550;
            static constexpr std::uintptr_t OnEarnedDriftBoost = 0x3560;
            static constexpr std::uintptr_t OnPotentialDriftBoostChanged = 0x3570;
            static constexpr std::uintptr_t OnDraftActivated = 0x35B8;
            static constexpr std::uintptr_t OnDraftDeactivated = 0x35C8;
            static constexpr std::uintptr_t OnDraftStateChanged = 0x35D8;
            static constexpr std::uintptr_t OnReachedMaxBonusSpeed = 0x35E8;
            static constexpr std::uintptr_t RubberbandingConfig = 0x362C;
            static constexpr std::uintptr_t OnStartlineBoostActivated = 0x3688;
            static constexpr std::uintptr_t OnStartlineBoostDeactivated = 0x3698;
            static constexpr std::uintptr_t OnStartlineBoostFailed = 0x36A8;
            static constexpr std::uintptr_t StartlineBoostData = 0x36B8;
            static constexpr std::uintptr_t OnStrafeActivated = 0x36E8;
            static constexpr std::uintptr_t OnStrafeDeactivated = 0x36F8;
            static constexpr std::uintptr_t OnStrafeCooldownChanged = 0x3708;
            static constexpr std::uintptr_t OnStrafeUsabilityChanged = 0x3718;
            static constexpr std::uintptr_t OnStrafeDisabledChanged = 0x3728;
            static constexpr std::uintptr_t OnTurboActivated = 0x3758;
            static constexpr std::uintptr_t OnTurboDeactivated = 0x3768;
            static constexpr std::uintptr_t OnTurboChargesUpdated = 0x3778;
            static constexpr std::uintptr_t OnTurboBonusZoneStateChanged = 0x3788;
            static constexpr std::uintptr_t OnTurboChargeUsed = 0x3798;
            static constexpr std::uintptr_t TurboCharges = 0x37A8;
            static constexpr std::uintptr_t OnKickflipActivated = 0x37F0;
            static constexpr std::uintptr_t OnKickflipDeactivated = 0x3800;
            static constexpr std::uintptr_t OnKickflipSuctionActivated = 0x3810;
            static constexpr std::uintptr_t OnKickflipSuctionDeactivated = 0x3820;
            static constexpr std::uintptr_t OnKickflipDistanceToSuctionSurfaceChanged = 0x3830;
            static constexpr std::uintptr_t OnKickflipDurationChanged = 0x3840;
            static constexpr std::uintptr_t OnKickflipActivationChargesChanged = 0x3850;
            static constexpr std::uintptr_t OnReattachmentActivated = 0x38E8;
            static constexpr std::uintptr_t OnReattachmentDeactivated = 0x38F8;
            static constexpr std::uintptr_t ForcedReattachmentDirection = 0x3908;
            static constexpr std::uintptr_t OnUnderthrustActivated = 0x3948;
            static constexpr std::uintptr_t OnUnderthrustDeactivated = 0x3958;
            static constexpr std::uintptr_t OnUnderthrustPercentChanged = 0x3968;
            static constexpr std::uintptr_t OnUnderthrustExhausted = 0x3978;
            static constexpr std::uintptr_t OnJumpActivated = 0x39A0;
            static constexpr std::uintptr_t OnJumpDeactivated = 0x39B0;
            static constexpr std::uintptr_t DemolitionRespawnSeconds = 0x39C8;
            static constexpr std::uintptr_t OnVehicleDemolished = 0x39D0;
            static constexpr std::uintptr_t OnDemolishPressDurationUpdated = 0x39E0;
            static constexpr std::uintptr_t HealthOverride = 0x39F0;
            static constexpr std::uintptr_t OnHazardHit = 0x3A18;
            static constexpr std::uintptr_t OnInvulnerabilityActivated = 0x3A28;
            static constexpr std::uintptr_t OnInvulnerabilityDeactivated = 0x3A38;
            static constexpr std::uintptr_t MaxSpawnBroadcastSeconds = 0x3A4C;
            static constexpr std::uintptr_t SpawnInfo = 0x3A50;
            static constexpr std::uintptr_t OnDelMarVehicleSpawned = 0x3A60;
            static constexpr std::uintptr_t bAllowExitingVehicle = 0x3A70;
            static constexpr std::uintptr_t OnVehicleTeleportEntered = 0x3A78;
            static constexpr std::uintptr_t OnVehicleTeleportExit = 0x3A88;
            static constexpr std::uintptr_t OnVehicleAppliedTeleportRotation = 0x3A98;
            static constexpr std::uintptr_t OnVehicleAppliedTeleportLocation = 0x3AA8;
            static constexpr std::uintptr_t OnEnvironmentEffectCueActivated = 0x3AB8;
            static constexpr std::uintptr_t OnEnvironmentEffectCueRemoved = 0x3AC8;
            static constexpr std::uintptr_t OnAirFreestyleActivated = 0x3AD8;
            static constexpr std::uintptr_t OnAirFreestyleDeactivated = 0x3AE8;
            static constexpr std::uintptr_t CachedVehicleAudioController = 0x3B00;
            static constexpr std::uintptr_t bVehicleCollisionsEnabled = 0x3B08;
            static constexpr std::uintptr_t bPawnCollisionsEnabled = 0x3B09;
            static constexpr std::uintptr_t bUsePredictiveInterpolation = 0x3B18;
            static constexpr std::uintptr_t PostProcessComp = 0x3B20;
            static constexpr std::uintptr_t OnVehicleCustomizationCompletedDelegate = 0x3B30;
            static constexpr std::uintptr_t OnVehiclePartParamsUpdatedDelegate = 0x3B40;
        };

        inline static constexpr std::array<PropertyInfo, 163> Properties{{
            {"DefaultCameraMode", 0x20E0, "ClassProperty"},
            {"SeatIndexCameraModes", 0x20E8, "ArrayProperty"},
            {"bLocalDriverHasReplicatedVehicle", 0x20F8, "BoolProperty"},
            {"PendingDriverInputState", 0x2118, "StructProperty"},
            {"CurrentInputType", 0x2158, "EnumProperty"},
            {"DistanceToPack", 0x2178, "FloatProperty"},
            {"DistanceFromTrackFinish", 0x217C, "FloatProperty"},
            {"RaceStatusSpeedModifier", 0x2180, "FloatProperty"},
            {"TurboBoostChanceCache", 0x2184, "FloatProperty"},
            {"ATTR_bVehicleThrottleDisabled", 0x2188, "BoolProperty"},
            {"ThrottleAction", 0x2190, "StructProperty"},
            {"BrakeAction", 0x21A0, "StructProperty"},
            {"SteerAction", 0x21B0, "StructProperty"},
            {"SteerLeftAction", 0x21C0, "StructProperty"},
            {"SteerRightAction", 0x21D0, "StructProperty"},
            {"PitchAction", 0x21E0, "StructProperty"},
            {"PitchUpAction", 0x21F0, "StructProperty"},
            {"PitchDownAction", 0x2200, "StructProperty"},
            {"RollAction", 0x2210, "StructProperty"},
            {"YawAction", 0x2220, "StructProperty"},
            {"DriftAction", 0x2230, "StructProperty"},
            {"JumpAction", 0x2240, "StructProperty"},
            {"KickFlipAction", 0x2250, "StructProperty"},
            {"UnderthrustAction", 0x2260, "StructProperty"},
            {"TurboAction", 0x2270, "StructProperty"},
            {"DelMarExitAction", 0x2280, "StructProperty"},
            {"ResetRunAction", 0x2290, "StructProperty"},
            {"AirFreestyleAction", 0x22A0, "StructProperty"},
            {"StrafeAction", 0x22B0, "StructProperty"},
            {"AerialPitchAction", 0x22C0, "StructProperty"},
            {"DemolishAction", 0x22D0, "StructProperty"},
            {"InputManagerClass", 0x22E0, "ClassProperty"},
            {"IdleVelocityLengthThreshold", 0x2300, "FloatProperty"},
            {"IdleInputSecondsThreshold", 0x2304, "FloatProperty"},
            {"bIdleFromNoInput", 0x2308, "BoolProperty"},
            {"RaceManager", 0x2358, "WeakObjectProperty"},
            {"NetworkPhysicsComponent", 0x2360, "ObjectProperty"},
            {"CosmeticComponent", 0x2368, "ObjectProperty"},
            {"DelMarVehicleMovementSet", 0x2370, "ObjectProperty"},
            {"FortSettings", 0x2378, "ObjectProperty"},
            {"TrackPositionComponentClass", 0x2380, "ClassProperty"},
            {"TrackPositionComponent", 0x2388, "ObjectProperty"},
            {"WheelSkeletalMeshComps", 0x2398, "ArrayProperty"},
            {"PlayerInVehicleEvents", 0x23A8, "MapProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x23B8, "IntProperty"},
            {"CachedContacts", 0x23C0, "ArrayProperty"},
            {"NearbyTrackDistanceThreshold", 0x23D0, "FloatProperty"},
            {"MaxStableSpeedToUpdateWheels", 0x23E8, "FloatProperty"},
            {"SecondsUntilVehicleHitVelocityClears", 0x23EC, "FloatProperty"},
            {"bOverrideDamageFromInstigator", 0x23F0, "BoolProperty"},
            {"ConfigOverrides", 0x2450, "StructProperty"},
            {"VisualSteerAngleInterpRate", 0x30C0, "FloatProperty"},
            {"DriftVisualSteerAngleInterpRate", 0x30C4, "FloatProperty"},
            {"bOverrideVisualSteeringAngle", 0x30C8, "BoolProperty"},
            {"DrivingVisualSteeringDegrees", 0x30CC, "FloatProperty"},
            {"DriftSteeringDegreesCurve", 0x30D0, "StructProperty"},
            {"bShowVisualSteerAngleInAir", 0x3120, "BoolProperty"},
            {"BodySetup", 0x3128, "ObjectProperty"},
            {"ActiveRaceConfig", 0x3148, "WeakObjectProperty"},
            {"RaceTimeManager", 0x3150, "WeakObjectProperty"},
            {"GlobalInputDisabler", 0x3158, "WeakObjectProperty"},
            {"OnVehicleWheelsLeftGround", 0x3170, "MulticastInlineDelegateProperty"},
            {"OnSpeedometerSpeedChanged", 0x3180, "MulticastInlineDelegateProperty"},
            {"MinNoThrottleSpeed", 0x3190, "FloatProperty"},
            {"SpeedSlowdownSpeedometerSeconds", 0x3194, "FloatProperty"},
            {"SpeedSlowdownTags", 0x3198, "ArrayProperty"},
            {"InvertSteerMethod", 0x31A8, "EnumProperty"},
            {"bPitchInverted", 0x31A9, "BoolProperty"},
            {"bVerticalKickflipInverted", 0x31AA, "BoolProperty"},
            {"bAerialPitchActivationEnabled", 0x31AB, "BoolProperty"},
            {"OnBonusSpeedActivated", 0x31E0, "MulticastInlineDelegateProperty"},
            {"OnBonusSpeedDeactivated", 0x31F0, "MulticastInlineDelegateProperty"},
            {"OnBonusSpeedChanged", 0x3200, "MulticastInlineDelegateProperty"},
            {"OnAnyWheelsOnGroundChanged", 0x3210, "MulticastInlineDelegateProperty"},
            {"OnWheelsOnGroundChanged", 0x3220, "MulticastInlineDelegateProperty"},
            {"OnVehicleForwardStateChanged", 0x3230, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitWall", 0x3320, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitVehicle", 0x3330, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitByVehicle", 0x3340, "MulticastInlineDelegateProperty"},
            {"OnVehicleLanded", 0x3350, "MulticastInlineDelegateProperty"},
            {"OnWorldBonusSpeedStackGained", 0x33A0, "MulticastInlineDelegateProperty"},
            {"OnWorldBonusSpeedStackLost", 0x33B0, "MulticastInlineDelegateProperty"},
            {"OnVehicleStartedSkydiving", 0x33F0, "MulticastInlineDelegateProperty"},
            {"OnVehicleStoppedSkydiving", 0x3400, "MulticastInlineDelegateProperty"},
            {"OnDriftActivated", 0x3420, "MulticastInlineDelegateProperty"},
            {"OnDriftDeactivated", 0x3430, "MulticastInlineDelegateProperty"},
            {"OnDriftSlipAngleRatioChanged", 0x3440, "MulticastInlineDelegateProperty"},
            {"OnDriftKickActivated", 0x3450, "MulticastInlineDelegateProperty"},
            {"OnDriftKickDeactivated", 0x3460, "MulticastInlineDelegateProperty"},
            {"OnDriftControlChanged", 0x3470, "MulticastInlineDelegateProperty"},
            {"OnDriftDurationChanged", 0x3480, "MulticastInlineDelegateProperty"},
            {"OnEnteredDriftBoostRange", 0x34E0, "MulticastInlineDelegateProperty"},
            {"OnExitedDriftBoostRange", 0x34F0, "MulticastInlineDelegateProperty"},
            {"OnStartedLosingAppliedDriftBoost", 0x3500, "MulticastInlineDelegateProperty"},
            {"OnDriftBoostActivated", 0x3510, "MulticastInlineDelegateProperty"},
            {"OnDriftBoostDeactivated", 0x3520, "MulticastInlineDelegateProperty"},
            {"OnMaxPotentialReached", 0x3530, "MulticastInlineDelegateProperty"},
            {"OnMaxPotentialLost", 0x3540, "MulticastInlineDelegateProperty"},
            {"OnAllPotentialLost", 0x3550, "MulticastInlineDelegateProperty"},
            {"OnEarnedDriftBoost", 0x3560, "MulticastInlineDelegateProperty"},
            {"OnPotentialDriftBoostChanged", 0x3570, "MulticastInlineDelegateProperty"},
            {"OnDraftActivated", 0x35B8, "MulticastInlineDelegateProperty"},
            {"OnDraftDeactivated", 0x35C8, "MulticastInlineDelegateProperty"},
            {"OnDraftStateChanged", 0x35D8, "MulticastInlineDelegateProperty"},
            {"OnReachedMaxBonusSpeed", 0x35E8, "MulticastInlineDelegateProperty"},
            {"RubberbandingConfig", 0x362C, "StructProperty"},
            {"OnStartlineBoostActivated", 0x3688, "MulticastInlineDelegateProperty"},
            {"OnStartlineBoostDeactivated", 0x3698, "MulticastInlineDelegateProperty"},
            {"OnStartlineBoostFailed", 0x36A8, "MulticastInlineDelegateProperty"},
            {"StartlineBoostData", 0x36B8, "StructProperty"},
            {"OnStrafeActivated", 0x36E8, "MulticastInlineDelegateProperty"},
            {"OnStrafeDeactivated", 0x36F8, "MulticastInlineDelegateProperty"},
            {"OnStrafeCooldownChanged", 0x3708, "MulticastInlineDelegateProperty"},
            {"OnStrafeUsabilityChanged", 0x3718, "MulticastInlineDelegateProperty"},
            {"OnStrafeDisabledChanged", 0x3728, "MulticastInlineDelegateProperty"},
            {"OnTurboActivated", 0x3758, "MulticastInlineDelegateProperty"},
            {"OnTurboDeactivated", 0x3768, "MulticastInlineDelegateProperty"},
            {"OnTurboChargesUpdated", 0x3778, "MulticastInlineDelegateProperty"},
            {"OnTurboBonusZoneStateChanged", 0x3788, "MulticastInlineDelegateProperty"},
            {"OnTurboChargeUsed", 0x3798, "MulticastInlineDelegateProperty"},
            {"TurboCharges", 0x37A8, "FloatProperty"},
            {"OnKickflipActivated", 0x37F0, "MulticastInlineDelegateProperty"},
            {"OnKickflipDeactivated", 0x3800, "MulticastInlineDelegateProperty"},
            {"OnKickflipSuctionActivated", 0x3810, "MulticastInlineDelegateProperty"},
            {"OnKickflipSuctionDeactivated", 0x3820, "MulticastInlineDelegateProperty"},
            {"OnKickflipDistanceToSuctionSurfaceChanged", 0x3830, "MulticastInlineDelegateProperty"},
            {"OnKickflipDurationChanged", 0x3840, "MulticastInlineDelegateProperty"},
            {"OnKickflipActivationChargesChanged", 0x3850, "MulticastInlineDelegateProperty"},
            {"OnReattachmentActivated", 0x38E8, "MulticastInlineDelegateProperty"},
            {"OnReattachmentDeactivated", 0x38F8, "MulticastInlineDelegateProperty"},
            {"ForcedReattachmentDirection", 0x3908, "StructProperty"},
            {"OnUnderthrustActivated", 0x3948, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustDeactivated", 0x3958, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustPercentChanged", 0x3968, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustExhausted", 0x3978, "MulticastInlineDelegateProperty"},
            {"OnJumpActivated", 0x39A0, "MulticastInlineDelegateProperty"},
            {"OnJumpDeactivated", 0x39B0, "MulticastInlineDelegateProperty"},
            {"DemolitionRespawnSeconds", 0x39C8, "FloatProperty"},
            {"OnVehicleDemolished", 0x39D0, "MulticastInlineDelegateProperty"},
            {"OnDemolishPressDurationUpdated", 0x39E0, "MulticastInlineDelegateProperty"},
            {"HealthOverride", 0x39F0, "FloatProperty"},
            {"OnHazardHit", 0x3A18, "MulticastInlineDelegateProperty"},
            {"OnInvulnerabilityActivated", 0x3A28, "MulticastInlineDelegateProperty"},
            {"OnInvulnerabilityDeactivated", 0x3A38, "MulticastInlineDelegateProperty"},
            {"MaxSpawnBroadcastSeconds", 0x3A4C, "FloatProperty"},
            {"SpawnInfo", 0x3A50, "StructProperty"},
            {"OnDelMarVehicleSpawned", 0x3A60, "MulticastInlineDelegateProperty"},
            {"bAllowExitingVehicle", 0x3A70, "BoolProperty"},
            {"OnVehicleTeleportEntered", 0x3A78, "MulticastInlineDelegateProperty"},
            {"OnVehicleTeleportExit", 0x3A88, "MulticastInlineDelegateProperty"},
            {"OnVehicleAppliedTeleportRotation", 0x3A98, "MulticastInlineDelegateProperty"},
            {"OnVehicleAppliedTeleportLocation", 0x3AA8, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueActivated", 0x3AB8, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueRemoved", 0x3AC8, "MulticastInlineDelegateProperty"},
            {"OnAirFreestyleActivated", 0x3AD8, "MulticastInlineDelegateProperty"},
            {"OnAirFreestyleDeactivated", 0x3AE8, "MulticastInlineDelegateProperty"},
            {"CachedVehicleAudioController", 0x3B00, "ObjectProperty"},
            {"bVehicleCollisionsEnabled", 0x3B08, "BoolProperty"},
            {"bPawnCollisionsEnabled", 0x3B09, "BoolProperty"},
            {"bUsePredictiveInterpolation", 0x3B18, "BoolProperty"},
            {"PostProcessComp", 0x3B20, "ObjectProperty"},
            {"OnVehicleCustomizationCompletedDelegate", 0x3B30, "MulticastInlineDelegateProperty"},
            {"OnVehiclePartParamsUpdatedDelegate", 0x3B40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction
    {
        static constexpr std::string_view Name = "DelMarVehicleAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_Drift
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_Drift";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_HazardHit
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_HazardHit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_Jump
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_KickFlip
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_KickFlip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_Turbo
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_Turbo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAction_Underthrust
    {
        static constexpr std::string_view Name = "DelMarVehicleAction_Underthrust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarVehicleAutoInputComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleAutoInputComponent";
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

    struct DelMarVehicleBodyItemDefinition
    {
        static constexpr std::string_view Name = "DelMarVehicleBodyItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x128;
            static constexpr std::uintptr_t CosmeticActorClasses = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slot", 0x128, "StructProperty"},
            {"CosmeticActorClasses", 0x130, "ArrayProperty"},
        }};
    };

    struct DelMarVehicleBodySetup
    {
        static constexpr std::string_view Name = "DelMarVehicleBodySetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxle = 0x28;
            static constexpr std::uintptr_t BackAxle = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrontAxle", 0x28, "StructProperty"},
            {"BackAxle", 0x50, "StructProperty"},
        }};
    };

    struct DelMarVehicleBodySetupMap
    {
        static constexpr std::string_view Name = "DelMarVehicleBodySetupMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BodySetupNameMap = 0x28;
            static constexpr std::uintptr_t BodySetupArchetypeMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BodySetupNameMap", 0x28, "MapProperty"},
            {"BodySetupArchetypeMap", 0x38, "MapProperty"},
        }};
    };

    struct DelMarVehicleCameraMode
    {
        static constexpr std::string_view Name = "DelMarVehicleCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraSettings = 0x20A0;
            static constexpr std::uintptr_t VelocityViewDistance = 0x20C0;
            static constexpr std::uintptr_t VelocityFOV = 0x2108;
            static constexpr std::uintptr_t AerialViewDistance = 0x2150;
            static constexpr std::uintptr_t AerialFocusOffset = 0x2198;
            static constexpr std::uintptr_t AerialPitch = 0x21E0;
            static constexpr std::uintptr_t AccelViewDistance = 0x2228;
            static constexpr std::uintptr_t AccelPitch = 0x2270;
            static constexpr std::uintptr_t AirRotationInterpRate = 0x22B8;
            static constexpr std::uintptr_t DriftSwivelSpeed = 0x2300;
            static constexpr std::uintptr_t ViewDistanceInterpSpeed = 0x2304;
            static constexpr std::uintptr_t FOVInterpSpeed = 0x2308;
            static constexpr std::uintptr_t AccelerationViewDistanceDecayRate = 0x230C;
            static constexpr std::uintptr_t MaxAccumulatedAccelViewDistance = 0x2310;
            static constexpr std::uintptr_t MinAccumulatedAccelViewDistance = 0x2314;
            static constexpr std::uintptr_t AerialOffsetInterpSpeed = 0x2318;
            static constexpr std::uintptr_t MaximumDownwardAerialPitch = 0x231C;
            static constexpr std::uintptr_t MaximumUpwardAerialPitch = 0x2320;
            static constexpr std::uintptr_t AccelerationPitchDecayRate = 0x2324;
            static constexpr std::uintptr_t MaxAccumulatedAccelPitch = 0x2328;
            static constexpr std::uintptr_t MinAccumulatedAccelPitch = 0x232C;
            static constexpr std::uintptr_t bPreventSpeedIncreaseInAir = 0x2330;
            static constexpr std::uintptr_t SpeedInputScalar = 0x2334;
            static constexpr std::uintptr_t SwivelPitchMax = 0x2338;
            static constexpr std::uintptr_t SwivelYawMax = 0x233C;
            static constexpr std::uintptr_t GroundPitchInterpRate = 0x2340;
            static constexpr std::uintptr_t GroundMaxPitchForNormalBlend = 0x2344;
            static constexpr std::uintptr_t GroundNormalInterpRate = 0x2348;
            static constexpr std::uintptr_t GroundNormalAirInterpRate = 0x234C;
            static constexpr std::uintptr_t GroundYawRateMin = 0x2350;
            static constexpr std::uintptr_t GroundYawRateMax = 0x2354;
            static constexpr std::uintptr_t WallYawRateMin = 0x2358;
            static constexpr std::uintptr_t WallYawRateMax = 0x235C;
            static constexpr std::uintptr_t InterpToGroundTime = 0x2360;
            static constexpr std::uintptr_t InterpToAirTime = 0x2364;
            static constexpr std::uintptr_t AverageVelocityInterpRate = 0x2368;
            static constexpr std::uintptr_t FocusOffsetInterpRate = 0x236C;
            static constexpr std::uintptr_t DistanceSpeedScale = 0x2370;
            static constexpr std::uintptr_t DistanceOffsetMin = 0x2374;
            static constexpr std::uintptr_t DistanceOffsetMax = 0x2378;
            static constexpr std::uintptr_t DistanceInterpRate = 0x237C;
            static constexpr std::uintptr_t MaxSpeedFOVOffset = 0x2380;
            static constexpr std::uintptr_t SupersonicFOVOffset = 0x2384;
            static constexpr std::uintptr_t FOVInterpRate = 0x2388;
            static constexpr std::uintptr_t VehicleTarget = 0x2390;
        };

        inline static constexpr std::array<PropertyInfo, 45> Properties{{
            {"CameraSettings", 0x20A0, "StructProperty"},
            {"VelocityViewDistance", 0x20C0, "StructProperty"},
            {"VelocityFOV", 0x2108, "StructProperty"},
            {"AerialViewDistance", 0x2150, "StructProperty"},
            {"AerialFocusOffset", 0x2198, "StructProperty"},
            {"AerialPitch", 0x21E0, "StructProperty"},
            {"AccelViewDistance", 0x2228, "StructProperty"},
            {"AccelPitch", 0x2270, "StructProperty"},
            {"AirRotationInterpRate", 0x22B8, "StructProperty"},
            {"DriftSwivelSpeed", 0x2300, "FloatProperty"},
            {"ViewDistanceInterpSpeed", 0x2304, "FloatProperty"},
            {"FOVInterpSpeed", 0x2308, "FloatProperty"},
            {"AccelerationViewDistanceDecayRate", 0x230C, "FloatProperty"},
            {"MaxAccumulatedAccelViewDistance", 0x2310, "FloatProperty"},
            {"MinAccumulatedAccelViewDistance", 0x2314, "FloatProperty"},
            {"AerialOffsetInterpSpeed", 0x2318, "FloatProperty"},
            {"MaximumDownwardAerialPitch", 0x231C, "FloatProperty"},
            {"MaximumUpwardAerialPitch", 0x2320, "FloatProperty"},
            {"AccelerationPitchDecayRate", 0x2324, "FloatProperty"},
            {"MaxAccumulatedAccelPitch", 0x2328, "FloatProperty"},
            {"MinAccumulatedAccelPitch", 0x232C, "FloatProperty"},
            {"bPreventSpeedIncreaseInAir", 0x2330, "BoolProperty"},
            {"SpeedInputScalar", 0x2334, "FloatProperty"},
            {"SwivelPitchMax", 0x2338, "FloatProperty"},
            {"SwivelYawMax", 0x233C, "FloatProperty"},
            {"GroundPitchInterpRate", 0x2340, "FloatProperty"},
            {"GroundMaxPitchForNormalBlend", 0x2344, "FloatProperty"},
            {"GroundNormalInterpRate", 0x2348, "FloatProperty"},
            {"GroundNormalAirInterpRate", 0x234C, "FloatProperty"},
            {"GroundYawRateMin", 0x2350, "FloatProperty"},
            {"GroundYawRateMax", 0x2354, "FloatProperty"},
            {"WallYawRateMin", 0x2358, "FloatProperty"},
            {"WallYawRateMax", 0x235C, "FloatProperty"},
            {"InterpToGroundTime", 0x2360, "FloatProperty"},
            {"InterpToAirTime", 0x2364, "FloatProperty"},
            {"AverageVelocityInterpRate", 0x2368, "FloatProperty"},
            {"FocusOffsetInterpRate", 0x236C, "FloatProperty"},
            {"DistanceSpeedScale", 0x2370, "FloatProperty"},
            {"DistanceOffsetMin", 0x2374, "FloatProperty"},
            {"DistanceOffsetMax", 0x2378, "FloatProperty"},
            {"DistanceInterpRate", 0x237C, "FloatProperty"},
            {"MaxSpeedFOVOffset", 0x2380, "FloatProperty"},
            {"SupersonicFOVOffset", 0x2384, "FloatProperty"},
            {"FOVInterpRate", 0x2388, "FloatProperty"},
            {"VehicleTarget", 0x2390, "ObjectProperty"},
        }};
    };

    struct DelMarVehicleCameraMode_V2
    {
        static constexpr std::string_view Name = "DelMarVehicleCameraMode_V2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraInputControllerComponentClass = 0x78;
            static constexpr std::uintptr_t VehicleArchetypeDefaults = 0x80;
            static constexpr std::uintptr_t DefaultInterpLambda = 0x90;
            static constexpr std::uintptr_t FOV = 0x94;
            static constexpr std::uintptr_t TotalFOVInterpLambda = 0x98;
            static constexpr std::uintptr_t TotalFOVClamp = 0x9C;
            static constexpr std::uintptr_t Distance = 0xAC;
            static constexpr std::uintptr_t TotalDistanceInterpLambda = 0xB0;
            static constexpr std::uintptr_t TotalDistanceClamp = 0xB4;
            static constexpr std::uintptr_t Height = 0xC4;
            static constexpr std::uintptr_t TotalHeightInterpLambda = 0xC8;
            static constexpr std::uintptr_t HeightOffsetInterpLambda = 0xCC;
            static constexpr std::uintptr_t TotalHeightClamp = 0xD0;
            static constexpr std::uintptr_t AngleToOriginDegrees = 0xE0;
            static constexpr std::uintptr_t AngleToOriginInterpLambda = 0xE4;
            static constexpr std::uintptr_t TotalAngleToOriginClamp = 0xE8;
            static constexpr std::uintptr_t SwivelInterpLambda = 0xF8;
            static constexpr std::uintptr_t SwivelPitchMax = 0xFC;
            static constexpr std::uintptr_t SwivelYawMax = 0x100;
            static constexpr std::uintptr_t GroundNormalInterpLambda = 0x104;
            static constexpr std::uintptr_t ForwardInterpLambda = 0x108;
            static constexpr std::uintptr_t CarPitchInterpLambda = 0x10C;
            static constexpr std::uintptr_t AerialCarPitchInterpLambda = 0x110;
            static constexpr std::uintptr_t MaxAerialCarPitch = 0x114;
            static constexpr std::uintptr_t PitchRotationAxisInterpLambda = 0x118;
            static constexpr std::uintptr_t VerticalDriftDegreeThreshold = 0x11C;
            static constexpr std::uintptr_t MinDegreesVehicleWorldUpThreshold = 0x120;
            static constexpr std::uintptr_t MaxUpRotationPerSecondCurve = 0x128;
            static constexpr std::uintptr_t MaxUpRotationPerSecondStatic = 0x178;
            static constexpr std::uintptr_t WorldUpInterpRate = 0x17C;
            static constexpr std::uintptr_t bPreventPenetration = 0x180;
            static constexpr std::uintptr_t bDoPredictiveAvoidance = 0x181;
            static constexpr std::uintptr_t CollisionPushOutDistance = 0x184;
            static constexpr std::uintptr_t PenetrationBlendOutTime = 0x188;
            static constexpr std::uintptr_t PenetrationBlendInTime = 0x18C;
            static constexpr std::uintptr_t PenetrationTraceChannel = 0x190;
            static constexpr std::uintptr_t PenetrationAvoidanceFeelers = 0x198;
            static constexpr std::uintptr_t ForwardAirInterpLambdaCurve = 0x1A8;
            static constexpr std::uintptr_t ForwardAirBlendCurve = 0x1F8;
            static constexpr std::uintptr_t MinForwardSpeedForAerialBlend = 0x240;
            static constexpr std::uintptr_t MinTimeInAirBeforeUsingVehicleUp = 0x244;
            static constexpr std::uintptr_t GroundNormalAirInterpLambdaCurve = 0x248;
            static constexpr std::uintptr_t AirFreestyleDeactivationExtendedSeconds = 0x298;
            static constexpr std::uintptr_t AirFreestyleDeactivationLambdaSeconds = 0x29C;
            static constexpr std::uintptr_t AirFreestyleDeactivationForwardLambda = 0x2A0;
            static constexpr std::uintptr_t AirFreestyleDeactivationNormalLambda = 0x2A4;
            static constexpr std::uintptr_t DriftForwardBlendCurve = 0x2A8;
            static constexpr std::uintptr_t AerialDriftForwardBlendCurve = 0x2F0;
            static constexpr std::uintptr_t DriftForwardInterpLambdaCurve = 0x338;
            static constexpr std::uintptr_t DriftOriginOffsetCurve = 0x380;
            static constexpr std::uintptr_t DriftOriginOffsetInterpLambdaCurve = 0x3C8;
            static constexpr std::uintptr_t DriftOriginOffsetInactiveLambda = 0x418;
            static constexpr std::uintptr_t DriftKickOffsetDistance = 0x420;
            static constexpr std::uintptr_t DriftKickOffsetLambda = 0x530;
            static constexpr std::uintptr_t DriftKickOffsetInactiveLambda = 0x534;
            static constexpr std::uintptr_t bDeactivateKickOffsetOnKickEnd = 0x538;
            static constexpr std::uintptr_t DriftRollDegreesCurve = 0x540;
            static constexpr std::uintptr_t DriftRollDegreesInterpLambdaCurve = 0x588;
            static constexpr std::uintptr_t DriftScalarCurveCurve = 0x5D8;
            static constexpr std::uintptr_t GroundMaxPitchForNormalBlend = 0x628;
            static constexpr std::uintptr_t GroundExtraPitchForNormalBlend = 0x62C;
            static constexpr std::uintptr_t StableSpeedDistance = 0x630;
            static constexpr std::uintptr_t StableSpeedFOV = 0x6A0;
            static constexpr std::uintptr_t StableSpeedHeight = 0x710;
            static constexpr std::uintptr_t StableSpeedAngleToOrigin = 0x780;
            static constexpr std::uintptr_t AccelerationDistance = 0x7F0;
            static constexpr std::uintptr_t AccelerationFOV = 0x860;
            static constexpr std::uintptr_t AccelerationHeight = 0x8D0;
            static constexpr std::uintptr_t AccelerationAngleToOrigin = 0x940;
            static constexpr std::uintptr_t BaseSpeedDistance = 0x9B0;
            static constexpr std::uintptr_t BaseSpeedFOV = 0xA20;
            static constexpr std::uintptr_t BaseSpeedHeight = 0xA90;
            static constexpr std::uintptr_t BaseSpeedAngleToOrigin = 0xB00;
            static constexpr std::uintptr_t BaseAccelerationDistance = 0xB70;
            static constexpr std::uintptr_t BaseAccelerationFOV = 0xBE0;
            static constexpr std::uintptr_t BaseAccelerationHeight = 0xC50;
            static constexpr std::uintptr_t BaseAccelerationAngleToOrigin = 0xCC0;
            static constexpr std::uintptr_t TurboDistance = 0xD30;
            static constexpr std::uintptr_t TurboFOV = 0xE40;
            static constexpr std::uintptr_t TurboBonusZoneSuccessDistance = 0xF50;
            static constexpr std::uintptr_t TurboBonusZoneSuccessFOV = 0x1060;
            static constexpr std::uintptr_t DriftBonusDistance = 0x1170;
            static constexpr std::uintptr_t DriftBonusFOV = 0x1280;
            static constexpr std::uintptr_t StartlineDistance = 0x1390;
            static constexpr std::uintptr_t StartlineFOV = 0x14A0;
            static constexpr std::uintptr_t DraftDistance = 0x15B0;
            static constexpr std::uintptr_t DraftFOV = 0x1620;
            static constexpr std::uintptr_t WorldBonusSpeedDistance = 0x1690;
            static constexpr std::uintptr_t WorldBonusSpeedFOV = 0x17A0;
            static constexpr std::uintptr_t AerialDivingBonusSpeedDistance = 0x18B0;
            static constexpr std::uintptr_t NonSkydivingDistanceScalar = 0x1920;
            static constexpr std::uintptr_t AerialDivingBonusSpeedFOV = 0x1928;
            static constexpr std::uintptr_t NonSkydivingFOVScalar = 0x1998;
            static constexpr std::uintptr_t VehicleTarget = 0x199C;
            static constexpr std::uintptr_t CameraInputControllerComponent = 0x19A4;
        };

        inline static constexpr std::array<PropertyInfo, 95> Properties{{
            {"CameraInputControllerComponentClass", 0x78, "ClassProperty"},
            {"VehicleArchetypeDefaults", 0x80, "MapProperty"},
            {"DefaultInterpLambda", 0x90, "FloatProperty"},
            {"FOV", 0x94, "FloatProperty"},
            {"TotalFOVInterpLambda", 0x98, "FloatProperty"},
            {"TotalFOVClamp", 0x9C, "StructProperty"},
            {"Distance", 0xAC, "FloatProperty"},
            {"TotalDistanceInterpLambda", 0xB0, "FloatProperty"},
            {"TotalDistanceClamp", 0xB4, "StructProperty"},
            {"Height", 0xC4, "FloatProperty"},
            {"TotalHeightInterpLambda", 0xC8, "FloatProperty"},
            {"HeightOffsetInterpLambda", 0xCC, "FloatProperty"},
            {"TotalHeightClamp", 0xD0, "StructProperty"},
            {"AngleToOriginDegrees", 0xE0, "FloatProperty"},
            {"AngleToOriginInterpLambda", 0xE4, "FloatProperty"},
            {"TotalAngleToOriginClamp", 0xE8, "StructProperty"},
            {"SwivelInterpLambda", 0xF8, "FloatProperty"},
            {"SwivelPitchMax", 0xFC, "FloatProperty"},
            {"SwivelYawMax", 0x100, "FloatProperty"},
            {"GroundNormalInterpLambda", 0x104, "FloatProperty"},
            {"ForwardInterpLambda", 0x108, "FloatProperty"},
            {"CarPitchInterpLambda", 0x10C, "FloatProperty"},
            {"AerialCarPitchInterpLambda", 0x110, "FloatProperty"},
            {"MaxAerialCarPitch", 0x114, "FloatProperty"},
            {"PitchRotationAxisInterpLambda", 0x118, "FloatProperty"},
            {"VerticalDriftDegreeThreshold", 0x11C, "FloatProperty"},
            {"MinDegreesVehicleWorldUpThreshold", 0x120, "FloatProperty"},
            {"MaxUpRotationPerSecondCurve", 0x128, "StructProperty"},
            {"MaxUpRotationPerSecondStatic", 0x178, "FloatProperty"},
            {"WorldUpInterpRate", 0x17C, "FloatProperty"},
            {"bPreventPenetration", 0x180, "BoolProperty"},
            {"bDoPredictiveAvoidance", 0x181, "BoolProperty"},
            {"CollisionPushOutDistance", 0x184, "FloatProperty"},
            {"PenetrationBlendOutTime", 0x188, "FloatProperty"},
            {"PenetrationBlendInTime", 0x18C, "FloatProperty"},
            {"PenetrationTraceChannel", 0x190, "ByteProperty"},
            {"PenetrationAvoidanceFeelers", 0x198, "ArrayProperty"},
            {"ForwardAirInterpLambdaCurve", 0x1A8, "StructProperty"},
            {"ForwardAirBlendCurve", 0x1F8, "StructProperty"},
            {"MinForwardSpeedForAerialBlend", 0x240, "FloatProperty"},
            {"MinTimeInAirBeforeUsingVehicleUp", 0x244, "FloatProperty"},
            {"GroundNormalAirInterpLambdaCurve", 0x248, "StructProperty"},
            {"AirFreestyleDeactivationExtendedSeconds", 0x298, "FloatProperty"},
            {"AirFreestyleDeactivationLambdaSeconds", 0x29C, "FloatProperty"},
            {"AirFreestyleDeactivationForwardLambda", 0x2A0, "FloatProperty"},
            {"AirFreestyleDeactivationNormalLambda", 0x2A4, "FloatProperty"},
            {"DriftForwardBlendCurve", 0x2A8, "StructProperty"},
            {"AerialDriftForwardBlendCurve", 0x2F0, "StructProperty"},
            {"DriftForwardInterpLambdaCurve", 0x338, "StructProperty"},
            {"DriftOriginOffsetCurve", 0x380, "StructProperty"},
            {"DriftOriginOffsetInterpLambdaCurve", 0x3C8, "StructProperty"},
            {"DriftOriginOffsetInactiveLambda", 0x418, "FloatProperty"},
            {"DriftKickOffsetDistance", 0x420, "StructProperty"},
            {"DriftKickOffsetLambda", 0x530, "FloatProperty"},
            {"DriftKickOffsetInactiveLambda", 0x534, "FloatProperty"},
            {"bDeactivateKickOffsetOnKickEnd", 0x538, "BoolProperty"},
            {"DriftRollDegreesCurve", 0x540, "StructProperty"},
            {"DriftRollDegreesInterpLambdaCurve", 0x588, "StructProperty"},
            {"DriftScalarCurveCurve", 0x5D8, "StructProperty"},
            {"GroundMaxPitchForNormalBlend", 0x628, "FloatProperty"},
            {"GroundExtraPitchForNormalBlend", 0x62C, "FloatProperty"},
            {"StableSpeedDistance", 0x630, "StructProperty"},
            {"StableSpeedFOV", 0x6A0, "StructProperty"},
            {"StableSpeedHeight", 0x710, "StructProperty"},
            {"StableSpeedAngleToOrigin", 0x780, "StructProperty"},
            {"AccelerationDistance", 0x7F0, "StructProperty"},
            {"AccelerationFOV", 0x860, "StructProperty"},
            {"AccelerationHeight", 0x8D0, "StructProperty"},
            {"AccelerationAngleToOrigin", 0x940, "StructProperty"},
            {"BaseSpeedDistance", 0x9B0, "StructProperty"},
            {"BaseSpeedFOV", 0xA20, "StructProperty"},
            {"BaseSpeedHeight", 0xA90, "StructProperty"},
            {"BaseSpeedAngleToOrigin", 0xB00, "StructProperty"},
            {"BaseAccelerationDistance", 0xB70, "StructProperty"},
            {"BaseAccelerationFOV", 0xBE0, "StructProperty"},
            {"BaseAccelerationHeight", 0xC50, "StructProperty"},
            {"BaseAccelerationAngleToOrigin", 0xCC0, "StructProperty"},
            {"TurboDistance", 0xD30, "StructProperty"},
            {"TurboFOV", 0xE40, "StructProperty"},
            {"TurboBonusZoneSuccessDistance", 0xF50, "StructProperty"},
            {"TurboBonusZoneSuccessFOV", 0x1060, "StructProperty"},
            {"DriftBonusDistance", 0x1170, "StructProperty"},
            {"DriftBonusFOV", 0x1280, "StructProperty"},
            {"StartlineDistance", 0x1390, "StructProperty"},
            {"StartlineFOV", 0x14A0, "StructProperty"},
            {"DraftDistance", 0x15B0, "StructProperty"},
            {"DraftFOV", 0x1620, "StructProperty"},
            {"WorldBonusSpeedDistance", 0x1690, "StructProperty"},
            {"WorldBonusSpeedFOV", 0x17A0, "StructProperty"},
            {"AerialDivingBonusSpeedDistance", 0x18B0, "StructProperty"},
            {"NonSkydivingDistanceScalar", 0x1920, "FloatProperty"},
            {"AerialDivingBonusSpeedFOV", 0x1928, "StructProperty"},
            {"NonSkydivingFOVScalar", 0x1998, "FloatProperty"},
            {"VehicleTarget", 0x199C, "WeakObjectProperty"},
            {"CameraInputControllerComponent", 0x19A4, "WeakObjectProperty"},
        }};
    };

    struct DelMarVehicleConfigs
    {
        static constexpr std::string_view Name = "DelMarVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t Collision = 0x990;
            static constexpr std::uintptr_t DefaultBodySetup = 0xAC8;
            static constexpr std::uintptr_t BodySetupMap = 0xAD0;
            static constexpr std::uintptr_t DriveSetup = 0xAD8;
            static constexpr std::uintptr_t PhysMatAttributeMap = 0xD08;
            static constexpr std::uintptr_t RigidBody = 0xD10;
            static constexpr std::uintptr_t Terrain = 0xD48;
            static constexpr std::uintptr_t WorldBonusSpeed = 0xD78;
            static constexpr std::uintptr_t AerialRotation = 0xDA0;
            static constexpr std::uintptr_t AirControl = 0xE48;
            static constexpr std::uintptr_t AirFreestyle = 0xED8;
            static constexpr std::uintptr_t AirThrottle = 0xF08;
            static constexpr std::uintptr_t AutoUpright = 0xF68;
            static constexpr std::uintptr_t Drafting = 0xF90;
            static constexpr std::uintptr_t Drift = 0x1018;
            static constexpr std::uintptr_t DriftBoost = 0x1470;
            static constexpr std::uintptr_t Gravity = 0x1588;
            static constexpr std::uintptr_t Jump = 0x15A8;
            static constexpr std::uintptr_t Kickflip = 0x15C0;
            static constexpr std::uintptr_t Oversteer = 0x16D8;
            static constexpr std::uintptr_t Reattachment = 0x1790;
            static constexpr std::uintptr_t Rubberbanding = 0x17F0;
            static constexpr std::uintptr_t StartlineBoost = 0x18E8;
            static constexpr std::uintptr_t Strafe = 0x1950;
            static constexpr std::uintptr_t Turbo = 0x1970;
            static constexpr std::uintptr_t Underthrust = 0x19E0;
            static constexpr std::uintptr_t SelfDemolish = 0x1AC8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"Collision", 0x990, "StructProperty"},
            {"DefaultBodySetup", 0xAC8, "ObjectProperty"},
            {"BodySetupMap", 0xAD0, "ObjectProperty"},
            {"DriveSetup", 0xAD8, "StructProperty"},
            {"PhysMatAttributeMap", 0xD08, "ObjectProperty"},
            {"RigidBody", 0xD10, "StructProperty"},
            {"Terrain", 0xD48, "StructProperty"},
            {"WorldBonusSpeed", 0xD78, "StructProperty"},
            {"AerialRotation", 0xDA0, "StructProperty"},
            {"AirControl", 0xE48, "StructProperty"},
            {"AirFreestyle", 0xED8, "StructProperty"},
            {"AirThrottle", 0xF08, "StructProperty"},
            {"AutoUpright", 0xF68, "StructProperty"},
            {"Drafting", 0xF90, "StructProperty"},
            {"Drift", 0x1018, "StructProperty"},
            {"DriftBoost", 0x1470, "StructProperty"},
            {"Gravity", 0x1588, "StructProperty"},
            {"Jump", 0x15A8, "StructProperty"},
            {"Kickflip", 0x15C0, "StructProperty"},
            {"Oversteer", 0x16D8, "StructProperty"},
            {"Reattachment", 0x1790, "StructProperty"},
            {"Rubberbanding", 0x17F0, "StructProperty"},
            {"StartlineBoost", 0x18E8, "StructProperty"},
            {"Strafe", 0x1950, "StructProperty"},
            {"Turbo", 0x1970, "StructProperty"},
            {"Underthrust", 0x19E0, "StructProperty"},
            {"SelfDemolish", 0x1AC8, "StructProperty"},
        }};
    };

    struct DelMarVehicleCosmeticComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleCosmeticComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCosmeticActorSpawned = 0xC0;
            static constexpr std::uintptr_t OnAllCosmeticActorsSpawned = 0xD0;
            static constexpr std::uintptr_t StaticCosmeticActorClasses = 0xE0;
            static constexpr std::uintptr_t AllowedServerCosmeticActorClasses = 0xF0;
            static constexpr std::uintptr_t SpawnedCosmeticActors = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnCosmeticActorSpawned", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnAllCosmeticActorsSpawned", 0xD0, "MulticastInlineDelegateProperty"},
            {"StaticCosmeticActorClasses", 0xE0, "ArrayProperty"},
            {"AllowedServerCosmeticActorClasses", 0xF0, "ArrayProperty"},
            {"SpawnedCosmeticActors", 0x100, "ArrayProperty"},
        }};
    };

    struct DelMarVehicleForceFeedbackComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleForceFeedbackComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingForceFeedback = 0xC0;
            static constexpr std::uintptr_t JumpForceFeedbackEffect = 0x168;
            static constexpr std::uintptr_t OversteerLeftForceFeedbackEffect = 0x170;
            static constexpr std::uintptr_t OversteerRightForceFeedbackEffect = 0x178;
            static constexpr std::uintptr_t LandingForceFeedbackEffects = 0x180;
            static constexpr std::uintptr_t LandingForceLevelLookupCurve = 0x190;
            static constexpr std::uintptr_t TurboForceFeedbackEffect = 0x1D8;
            static constexpr std::uintptr_t DriftForceFeedback = 0x1E0;
            static constexpr std::uintptr_t DriftUncontrolledForceFeedbackEffect = 0x288;
            static constexpr std::uintptr_t DriftBoostForceFeedbackEffect = 0x290;
            static constexpr std::uintptr_t DriftTractionForceFeedback = 0x298;
            static constexpr std::uintptr_t MaxTractionDriftShakeAngle = 0x2A0;
            static constexpr std::uintptr_t HazardHitForceFeedback = 0x2A8;
            static constexpr std::uintptr_t Vehicle = 0x2B0;
            static constexpr std::uintptr_t CachedPlayerController = 0x2C0;
            static constexpr std::uintptr_t CurrentOversteerForceFeedbackEffect = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"DrivingForceFeedback", 0xC0, "StructProperty"},
            {"JumpForceFeedbackEffect", 0x168, "ObjectProperty"},
            {"OversteerLeftForceFeedbackEffect", 0x170, "ObjectProperty"},
            {"OversteerRightForceFeedbackEffect", 0x178, "ObjectProperty"},
            {"LandingForceFeedbackEffects", 0x180, "ArrayProperty"},
            {"LandingForceLevelLookupCurve", 0x190, "StructProperty"},
            {"TurboForceFeedbackEffect", 0x1D8, "ObjectProperty"},
            {"DriftForceFeedback", 0x1E0, "StructProperty"},
            {"DriftUncontrolledForceFeedbackEffect", 0x288, "ObjectProperty"},
            {"DriftBoostForceFeedbackEffect", 0x290, "ObjectProperty"},
            {"DriftTractionForceFeedback", 0x298, "ObjectProperty"},
            {"MaxTractionDriftShakeAngle", 0x2A0, "FloatProperty"},
            {"HazardHitForceFeedback", 0x2A8, "ObjectProperty"},
            {"Vehicle", 0x2B0, "InterfaceProperty"},
            {"CachedPlayerController", 0x2C0, "WeakObjectProperty"},
            {"CurrentOversteerForceFeedbackEffect", 0x2C8, "WeakObjectProperty"},
        }};
    };

    struct DelMarVehicleInterface
    {
        static constexpr std::string_view Name = "DelMarVehicleInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarVehicleLoadoutSetup
    {
        static constexpr std::string_view Name = "DelMarVehicleLoadoutSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Loadout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Loadout", 0x28, "StructProperty"},
        }};
    };

    struct DelMarVehicleManager
    {
        static constexpr std::string_view Name = "DelMarVehicleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarVehicleMovementSet
    {
        static constexpr std::string_view Name = "DelMarVehicleMovementSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AccelMultiplier = 0x48;
            static constexpr std::uintptr_t bVehicleThrottleDisabled = 0x70;
            static constexpr std::uintptr_t BonusSpeed = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AccelMultiplier", 0x48, "StructProperty"},
            {"bVehicleThrottleDisabled", 0x70, "StructProperty"},
            {"BonusSpeed", 0x98, "StructProperty"},
        }};
    };

    struct DelMarVehicleNetworkPhysicsComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleNetworkPhysicsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedState = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedState", 0xD0, "StructProperty"},
        }};
    };

    struct DelMarVehicleStateTagManagerComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleStateTagManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedVehicle = 0xC0;
            static constexpr std::uintptr_t CachedASC = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedVehicle", 0xC0, "WeakObjectProperty"},
            {"CachedASC", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct DelMarVehicleTurboManagerComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleTurboManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TurboCharges = 0xC0;
            static constexpr std::uintptr_t RechargeRateSeconds = 0xC4;
            static constexpr std::uintptr_t MaxCharges = 0xC8;
            static constexpr std::uintptr_t OwnerVehicle = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TurboCharges", 0xC0, "FloatProperty"},
            {"RechargeRateSeconds", 0xC4, "FloatProperty"},
            {"MaxCharges", 0xC8, "FloatProperty"},
            {"OwnerVehicle", 0xD0, "ObjectProperty"},
        }};
    };

    struct DelMarVehicleVerbComponent
    {
        static constexpr std::string_view Name = "DelMarVehicleVerbComponent";
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

    struct DelmarCompetitiveMatchmakeRatingComponent
    {
        static constexpr std::string_view Name = "DelmarCompetitiveMatchmakeRatingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarMatchmakeRatingComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPlayerRankMap = 0xC0;
            static constexpr std::uintptr_t PlayerUniqueIdsGivenMMR = 0xD0;
            static constexpr std::uintptr_t PlayerUniqueIds = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedPlayerRankMap", 0xC0, "MapProperty"},
            {"PlayerUniqueIdsGivenMMR", 0xD0, "SetProperty"},
            {"PlayerUniqueIds", 0xE0, "SetProperty"},
        }};
    };

    struct FortAutomationRpcManager_DelMar
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_DelMar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_MergeRankedDisplayData
    {
        static constexpr std::string_view Name = "GameFeatureAction_MergeRankedDisplayData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MergeSource = 0x28;
            static constexpr std::uintptr_t MergeDestination = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MergeSource", 0x28, "SoftObjectProperty"},
            {"MergeDestination", 0x48, "SoftObjectProperty"},
        }};
    };

    struct GuidedZoneRequirement
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_Drift
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_Drift";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_DriftActive
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_DriftActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_DriftBoostActive
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_DriftBoostActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_DriftKick
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_DriftKick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_Jump
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_JumpOrUnderthrust
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_JumpOrUnderthrust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement_Jump";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_Kickflip
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_Kickflip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_MidTutorial
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_MidTutorial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_Turbo
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_Turbo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_TurboBonusZone
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_TurboBonusZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_Underthrust
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_Underthrust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidedZoneRequirement_VerticalKickflip
    {
        static constexpr std::string_view Name = "GuidedZoneRequirement_VerticalKickflip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GuidedZoneRequirement_Kickflip";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UDelMarPlayerSuspendComponent
    {
        static constexpr std::string_view Name = "UDelMarPlayerSuspendComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRaceManager = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedRaceManager", 0xC8, "WeakObjectProperty"},
        }};
    };

}

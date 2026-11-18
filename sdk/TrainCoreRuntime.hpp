#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TrainCoreRuntime
{
    struct FortGlobalTrainManager
    {
        static constexpr std::string_view Name = "FortGlobalTrainManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreferredUpdatesPerTick = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreferredUpdatesPerTick", 0xC0, "StructProperty"},
        }};
    };

    struct FortRailHotspotComponent
    {
        static constexpr std::string_view Name = "FortRailHotspotComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IdentifierTag = 0x240;
            static constexpr std::uintptr_t HotspotLength = 0x248;
            static constexpr std::uintptr_t AvoidanceBuffer = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IdentifierTag", 0x240, "StructProperty"},
            {"HotspotLength", 0x248, "StructProperty"},
            {"AvoidanceBuffer", 0x270, "StructProperty"},
        }};
    };

    struct FortTrainCheatManager
    {
        static constexpr std::string_view Name = "FortTrainCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortTrainManager
    {
        static constexpr std::string_view Name = "FortTrainManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTrainAboutToStopEvent = 0x128;
            static constexpr std::uintptr_t OnTrainStoppedEvent = 0x138;
            static constexpr std::uintptr_t RampUpLength = 0x158;
            static constexpr std::uintptr_t StoppingCoastLength = 0x180;
            static constexpr std::uintptr_t bKeepForwardRotationOnReverse = 0x1A8;
            static constexpr std::uintptr_t DynamicTickStates = 0x1B0;
            static constexpr std::uintptr_t LowDetailDynamicTickStates = 0x1C0;
            static constexpr std::uintptr_t UnrenderedMinTickInterval = 0x1D0;
            static constexpr std::uintptr_t bProceduralCarOrder = 0x200;
            static constexpr std::uintptr_t CarTable = 0x208;
            static constexpr std::uintptr_t CarOrder = 0x210;
            static constexpr std::uintptr_t DefaultConnectorLength = 0x220;
            static constexpr std::uintptr_t BaseMoveSpeed = 0x224;
            static constexpr std::uintptr_t TruckLocationTolerance = 0x228;
            static constexpr std::uintptr_t MaxIterations = 0x250;
            static constexpr std::uintptr_t MaxErrorOffset = 0x278;
            static constexpr std::uintptr_t ErrorCatchupSpeedModifier = 0x2A0;
            static constexpr std::uintptr_t DistanceAheadToRampUp = 0x2C8;
            static constexpr std::uintptr_t DistanceAheadToStop = 0x2F0;
            static constexpr std::uintptr_t ArrivalTimeInterval = 0x318;
            static constexpr std::uintptr_t ArrivalTimeIntervalEventMaxTime = 0x340;
            static constexpr std::uintptr_t Rail = 0x368;
            static constexpr std::uintptr_t Cars = 0x370;
            static constexpr std::uintptr_t ReplicatedMovementData = 0x39C;
            static constexpr std::uintptr_t CachedGlobalTrainManager = 0x3D0;
            static constexpr std::uintptr_t CachedAudioShapeLineList = 0x400;
            static constexpr std::uintptr_t PlayersToMarkStationsFor = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"OnTrainAboutToStopEvent", 0x128, "MulticastInlineDelegateProperty"},
            {"OnTrainStoppedEvent", 0x138, "MulticastInlineDelegateProperty"},
            {"RampUpLength", 0x158, "StructProperty"},
            {"StoppingCoastLength", 0x180, "StructProperty"},
            {"bKeepForwardRotationOnReverse", 0x1A8, "BoolProperty"},
            {"DynamicTickStates", 0x1B0, "ArrayProperty"},
            {"LowDetailDynamicTickStates", 0x1C0, "ArrayProperty"},
            {"UnrenderedMinTickInterval", 0x1D0, "StructProperty"},
            {"bProceduralCarOrder", 0x200, "BoolProperty"},
            {"CarTable", 0x208, "ObjectProperty"},
            {"CarOrder", 0x210, "ArrayProperty"},
            {"DefaultConnectorLength", 0x220, "FloatProperty"},
            {"BaseMoveSpeed", 0x224, "FloatProperty"},
            {"TruckLocationTolerance", 0x228, "StructProperty"},
            {"MaxIterations", 0x250, "StructProperty"},
            {"MaxErrorOffset", 0x278, "StructProperty"},
            {"ErrorCatchupSpeedModifier", 0x2A0, "StructProperty"},
            {"DistanceAheadToRampUp", 0x2C8, "StructProperty"},
            {"DistanceAheadToStop", 0x2F0, "StructProperty"},
            {"ArrivalTimeInterval", 0x318, "StructProperty"},
            {"ArrivalTimeIntervalEventMaxTime", 0x340, "StructProperty"},
            {"Rail", 0x368, "ObjectProperty"},
            {"Cars", 0x370, "ArrayProperty"},
            {"ReplicatedMovementData", 0x39C, "StructProperty"},
            {"CachedGlobalTrainManager", 0x3D0, "ObjectProperty"},
            {"CachedAudioShapeLineList", 0x400, "ObjectProperty"},
            {"PlayersToMarkStationsFor", 0x430, "MapProperty"},
        }};
    };

    struct FortTrainMovingPlatformComponent
    {
        static constexpr std::string_view Name = "FortTrainMovingPlatformComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovingPlatformComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PickupPushCurve = 0x1F8;
            static constexpr std::uintptr_t PickupTeleportDistance = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PickupPushCurve", 0x1F8, "ObjectProperty"},
            {"PickupTeleportDistance", 0x200, "StructProperty"},
        }};
    };

    struct FortTrainRail
    {
        static constexpr std::string_view Name = "FortTrainRail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTrainRegisteredEvent = 0x278;
            static constexpr std::uintptr_t OnTrainStationArrivalIntervalReachedEvent = 0x288;
            static constexpr std::uintptr_t OnTrainStationDepartureEvent = 0x298;
            static constexpr std::uintptr_t bMinimizeSplineComponent = 0x2B8;
            static constexpr std::uintptr_t MaxTangentDifference = 0x2BC;
            static constexpr std::uintptr_t UseStationTagOnAllCoastKeyframes = 0x2C0;
            static constexpr std::uintptr_t SplineComponent = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnTrainRegisteredEvent", 0x278, "MulticastInlineDelegateProperty"},
            {"OnTrainStationArrivalIntervalReachedEvent", 0x288, "MulticastInlineDelegateProperty"},
            {"OnTrainStationDepartureEvent", 0x298, "MulticastInlineDelegateProperty"},
            {"bMinimizeSplineComponent", 0x2B8, "BoolProperty"},
            {"MaxTangentDifference", 0x2BC, "FloatProperty"},
            {"UseStationTagOnAllCoastKeyframes", 0x2C0, "StructProperty"},
            {"SplineComponent", 0x2E8, "ObjectProperty"},
        }};
    };

    struct FortTrainSpawner
    {
        static constexpr std::string_view Name = "FortTrainSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TrainConfig = 0x278;
            static constexpr std::uintptr_t ShouldSpawn = 0x280;
            static constexpr std::uintptr_t RandomizeSpawnLocation = 0x2A8;
            static constexpr std::uintptr_t ReverseDirection = 0x2D0;
            static constexpr std::uintptr_t RandomizeDirection = 0x2F8;
            static constexpr std::uintptr_t StartDelay = 0x320;
            static constexpr std::uintptr_t Rail = 0x348;
            static constexpr std::uintptr_t DummyRoot = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TrainConfig", 0x278, "ObjectProperty"},
            {"ShouldSpawn", 0x280, "StructProperty"},
            {"RandomizeSpawnLocation", 0x2A8, "StructProperty"},
            {"ReverseDirection", 0x2D0, "StructProperty"},
            {"RandomizeDirection", 0x2F8, "StructProperty"},
            {"StartDelay", 0x320, "StructProperty"},
            {"Rail", 0x348, "SoftObjectProperty"},
            {"DummyRoot", 0x368, "ObjectProperty"},
        }};
    };

    struct FortTrainStationComponent
    {
        static constexpr std::string_view Name = "FortTrainStationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IdentifierTag = 0x240;
            static constexpr std::uintptr_t MarkerActor = 0x248;
            static constexpr std::uintptr_t EnterLength = 0x268;
            static constexpr std::uintptr_t CoastLength = 0x290;
            static constexpr std::uintptr_t ExitLength = 0x2B8;
            static constexpr std::uintptr_t SpeedMultiplier = 0x2E0;
            static constexpr std::uintptr_t ReverseDirectionOnExit = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IdentifierTag", 0x240, "StructProperty"},
            {"MarkerActor", 0x248, "SoftObjectProperty"},
            {"EnterLength", 0x268, "StructProperty"},
            {"CoastLength", 0x290, "StructProperty"},
            {"ExitLength", 0x2B8, "StructProperty"},
            {"SpeedMultiplier", 0x2E0, "StructProperty"},
            {"ReverseDirectionOnExit", 0x308, "StructProperty"},
        }};
    };

    struct FortTrainTransitSign
    {
        static constexpr std::string_view Name = "FortTrainTransitSign";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t TimerTickSound = 0x940;
            static constexpr std::uintptr_t TimeToArrival = 0x948;
            static constexpr std::uintptr_t TickLocation = 0x950;
            static constexpr std::uintptr_t TimerMesh = 0x968;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TimerTickSound", 0x940, "ObjectProperty"},
            {"TimeToArrival", 0x948, "FloatProperty"},
            {"TickLocation", 0x950, "StructProperty"},
            {"TimerMesh", 0x968, "ObjectProperty"},
        }};
    };

    struct TrainCar
    {
        static constexpr std::string_view Name = "TrainCar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayTagActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlockMarking = 0x2C4;
            static constexpr std::uintptr_t bCanBeMarked = 0x2C4;
            static constexpr std::uintptr_t bLockPitch = 0x2C4;
            static constexpr std::uintptr_t bLockRoll = 0x2C4;
            static constexpr std::uintptr_t bLockYaw = 0x2C4;
            static constexpr std::uintptr_t MarkerDisplay = 0x2C8;
            static constexpr std::uintptr_t MarkerPositionOffset = 0x378;
            static constexpr std::uintptr_t Length = 0x390;
            static constexpr std::uintptr_t ConnectorLength = 0x394;
            static constexpr std::uintptr_t MaxPitch = 0x398;
            static constexpr std::uintptr_t DestructionTargetingPreset = 0x3A0;
            static constexpr std::uintptr_t ImpulseTargetingPreset = 0x3A8;
            static constexpr std::uintptr_t DestroyBuildings = 0x3B0;
            static constexpr std::uintptr_t DestroyOnlyTargetPlayerBuilds = 0x3D8;
            static constexpr std::uintptr_t DestructionActorTags = 0x400;
            static constexpr std::uintptr_t DestructionIgnoredActorTags = 0x420;
            static constexpr std::uintptr_t DestructionAsyncTargetingHandle = 0x440;
            static constexpr std::uintptr_t ImpulseAsyncTargetingHandle = 0x444;
            static constexpr std::uintptr_t OnboardSoundIndicatorComponent = 0x448;
            static constexpr std::uintptr_t OnboardAudioShapeLineList = 0x450;
            static constexpr std::uintptr_t TrainMoveSoundCue = 0x458;
            static constexpr std::uintptr_t PlayerOnboardControlBusMix = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"bBlockMarking", 0x2C4, "BoolProperty"},
            {"bCanBeMarked", 0x2C4, "BoolProperty"},
            {"bLockPitch", 0x2C4, "BoolProperty"},
            {"bLockRoll", 0x2C4, "BoolProperty"},
            {"bLockYaw", 0x2C4, "BoolProperty"},
            {"MarkerDisplay", 0x2C8, "StructProperty"},
            {"MarkerPositionOffset", 0x378, "StructProperty"},
            {"Length", 0x390, "FloatProperty"},
            {"ConnectorLength", 0x394, "FloatProperty"},
            {"MaxPitch", 0x398, "FloatProperty"},
            {"DestructionTargetingPreset", 0x3A0, "ObjectProperty"},
            {"ImpulseTargetingPreset", 0x3A8, "ObjectProperty"},
            {"DestroyBuildings", 0x3B0, "StructProperty"},
            {"DestroyOnlyTargetPlayerBuilds", 0x3D8, "StructProperty"},
            {"DestructionActorTags", 0x400, "StructProperty"},
            {"DestructionIgnoredActorTags", 0x420, "StructProperty"},
            {"DestructionAsyncTargetingHandle", 0x440, "StructProperty"},
            {"ImpulseAsyncTargetingHandle", 0x444, "StructProperty"},
            {"OnboardSoundIndicatorComponent", 0x448, "ObjectProperty"},
            {"OnboardAudioShapeLineList", 0x450, "ObjectProperty"},
            {"TrainMoveSoundCue", 0x458, "ObjectProperty"},
            {"PlayerOnboardControlBusMix", 0x460, "ObjectProperty"},
        }};
    };

    struct TrainConfig
    {
        static constexpr std::string_view Name = "TrainConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TrainManagerClass = 0x28;
            static constexpr std::uintptr_t Cars = 0x30;
            static constexpr std::uintptr_t MoveSpeed = 0x40;
            static constexpr std::uintptr_t DefaultConnectorLength = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TrainManagerClass", 0x28, "ClassProperty"},
            {"Cars", 0x30, "ArrayProperty"},
            {"MoveSpeed", 0x40, "StructProperty"},
            {"DefaultConnectorLength", 0x68, "StructProperty"},
        }};
    };

}

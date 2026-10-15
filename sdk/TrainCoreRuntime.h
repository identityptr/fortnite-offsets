/**
 * decamp dumper generated SDK
 * Package: /Script/TrainCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TrainCoreRuntime.StationMarkerEntry
// Kind: ScriptStruct; super: none
struct FStationMarkerEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TrainCoreRuntime.TrainCarRuntimeData
// Kind: ScriptStruct; super: none
struct FTrainCarRuntimeData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float Length; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ConnectorLength; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTrainCarRuntimeData, Actor) == 0, "Offset mismatch for FTrainCarRuntimeData::Actor");
static_assert(offsetof(FTrainCarRuntimeData, Length) == 8, "Offset mismatch for FTrainCarRuntimeData::Length");
static_assert(offsetof(FTrainCarRuntimeData, ConnectorLength) == 12, "Offset mismatch for FTrainCarRuntimeData::ConnectorLength");

// /Script/TrainCoreRuntime.TrainDynamicTickState
// Kind: ScriptStruct; super: none
struct FTrainDynamicTickState
{
public:
    FName DebugName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t EffectiveDistance[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t TickPriority; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    std::uint8_t PrimaryTickInterval[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumCarsToMovePerTick[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t CarPositionUpdateInterval[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateAudioShapeLineList[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsHighAVFidelity[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CollisionEnabledOnClient[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTrainDynamicTickState, DebugName) == 0, "Offset mismatch for FTrainDynamicTickState::DebugName");
static_assert(offsetof(FTrainDynamicTickState, EffectiveDistance) == 8, "Offset mismatch for FTrainDynamicTickState::EffectiveDistance");
static_assert(offsetof(FTrainDynamicTickState, TickPriority) == 48, "Offset mismatch for FTrainDynamicTickState::TickPriority");
static_assert(offsetof(FTrainDynamicTickState, PrimaryTickInterval) == 56, "Offset mismatch for FTrainDynamicTickState::PrimaryTickInterval");
static_assert(offsetof(FTrainDynamicTickState, NumCarsToMovePerTick) == 96, "Offset mismatch for FTrainDynamicTickState::NumCarsToMovePerTick");
static_assert(offsetof(FTrainDynamicTickState, CarPositionUpdateInterval) == 136, "Offset mismatch for FTrainDynamicTickState::CarPositionUpdateInterval");
static_assert(offsetof(FTrainDynamicTickState, UpdateAudioShapeLineList) == 176, "Offset mismatch for FTrainDynamicTickState::UpdateAudioShapeLineList");
static_assert(offsetof(FTrainDynamicTickState, IsHighAVFidelity) == 216, "Offset mismatch for FTrainDynamicTickState::IsHighAVFidelity");
static_assert(offsetof(FTrainDynamicTickState, CollisionEnabledOnClient) == 256, "Offset mismatch for FTrainDynamicTickState::CollisionEnabledOnClient");

// /Script/TrainCoreRuntime.TrainMovementData
// Kind: ScriptStruct; super: none
struct FTrainMovementData
{
public:
    float Timestamp; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DistanceAlongRail; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StopDistanceAlongRail; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RampUpDistanceAlongRail; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RampUpSpeedMultipler; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TimeAlongRail; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementState; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasStarted; // 0x0019 (Size: 0x1, Type: BoolProperty)
    // 0x0019 BoolProperty bReverseDirection (shared storage)
};

static_assert(offsetof(FTrainMovementData, Timestamp) == 0, "Offset mismatch for FTrainMovementData::Timestamp");
static_assert(offsetof(FTrainMovementData, DistanceAlongRail) == 4, "Offset mismatch for FTrainMovementData::DistanceAlongRail");
static_assert(offsetof(FTrainMovementData, StopDistanceAlongRail) == 8, "Offset mismatch for FTrainMovementData::StopDistanceAlongRail");
static_assert(offsetof(FTrainMovementData, RampUpDistanceAlongRail) == 12, "Offset mismatch for FTrainMovementData::RampUpDistanceAlongRail");
static_assert(offsetof(FTrainMovementData, RampUpSpeedMultipler) == 16, "Offset mismatch for FTrainMovementData::RampUpSpeedMultipler");
static_assert(offsetof(FTrainMovementData, TimeAlongRail) == 20, "Offset mismatch for FTrainMovementData::TimeAlongRail");
static_assert(offsetof(FTrainMovementData, MovementState) == 24, "Offset mismatch for FTrainMovementData::MovementState");
static_assert(offsetof(FTrainMovementData, bHasStarted) == 25, "Offset mismatch for FTrainMovementData::bHasStarted");

// /Script/TrainCoreRuntime.TrainRailHotspot
// Kind: ScriptStruct; super: none
struct FTrainRailHotspot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TrainCoreRuntime.TrainRailKeyframe
// Kind: ScriptStruct; super: none
struct FTrainRailKeyframe
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TrainCoreRuntime.FortGlobalTrainManager
// Kind: Class; super: GameStateComponent
class UFortGlobalTrainManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PreferredUpdatesPerTick[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGlobalTrainManager, PreferredUpdatesPerTick) == 192, "Offset mismatch for UFortGlobalTrainManager::PreferredUpdatesPerTick");

// /Script/TrainCoreRuntime.FortRailHotspotComponent
// Kind: Class; super: SceneComponent
class UFortRailHotspotComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t IdentifierTag[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t HotspotLength[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t AvoidanceBuffer[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRailHotspotComponent, IdentifierTag) == 576, "Offset mismatch for UFortRailHotspotComponent::IdentifierTag");
static_assert(offsetof(UFortRailHotspotComponent, HotspotLength) == 584, "Offset mismatch for UFortRailHotspotComponent::HotspotLength");
static_assert(offsetof(UFortRailHotspotComponent, AvoidanceBuffer) == 624, "Offset mismatch for UFortRailHotspotComponent::AvoidanceBuffer");

// /Script/TrainCoreRuntime.FortTrainCheatManager
// Kind: Class; super: ChildCheatManager
class UFortTrainCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TrainCoreRuntime.FortTrainManager
// Kind: Class; super: MovementComponent
class UFortTrainManager
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnTrainAboutToStopEvent; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrainStoppedEvent; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0148
    std::uint8_t RampUpLength[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t StoppingCoastLength[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t bKeepForwardRotationOnReverse; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01A9
    TArray<void*> DynamicTickStates; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LowDetailDynamicTickStates; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UnrenderedMinTickInterval[0x30]; // 0x01D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bProceduralCarOrder; // 0x0200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0201
    void* CarTable; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CarOrder; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    float DefaultConnectorLength; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float BaseMoveSpeed; // 0x0224 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TruckLocationTolerance[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxIterations[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxErrorOffset[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t ErrorCatchupSpeedModifier[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceAheadToRampUp[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceAheadToStop[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ArrivalTimeInterval[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t ArrivalTimeIntervalEventMaxTime[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    void* Rail; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Cars; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x1C]; // 0x0380
    std::uint8_t ReplicatedMovementData[0x2C]; // 0x039C (Size: 0x2C, Type: StructProperty)
    void* CachedGlobalTrainManager; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x28]; // 0x03D0
    void* CachedAudioShapeLineList; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x28]; // 0x0400
    TMap<void*, void*> PlayersToMarkStationsFor; // 0x0428 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortTrainManager, OnTrainAboutToStopEvent) == 296, "Offset mismatch for UFortTrainManager::OnTrainAboutToStopEvent");
static_assert(offsetof(UFortTrainManager, OnTrainStoppedEvent) == 312, "Offset mismatch for UFortTrainManager::OnTrainStoppedEvent");
static_assert(offsetof(UFortTrainManager, RampUpLength) == 344, "Offset mismatch for UFortTrainManager::RampUpLength");
static_assert(offsetof(UFortTrainManager, StoppingCoastLength) == 384, "Offset mismatch for UFortTrainManager::StoppingCoastLength");
static_assert(offsetof(UFortTrainManager, bKeepForwardRotationOnReverse) == 424, "Offset mismatch for UFortTrainManager::bKeepForwardRotationOnReverse");
static_assert(offsetof(UFortTrainManager, DynamicTickStates) == 432, "Offset mismatch for UFortTrainManager::DynamicTickStates");
static_assert(offsetof(UFortTrainManager, LowDetailDynamicTickStates) == 448, "Offset mismatch for UFortTrainManager::LowDetailDynamicTickStates");
static_assert(offsetof(UFortTrainManager, UnrenderedMinTickInterval) == 464, "Offset mismatch for UFortTrainManager::UnrenderedMinTickInterval");
static_assert(offsetof(UFortTrainManager, bProceduralCarOrder) == 512, "Offset mismatch for UFortTrainManager::bProceduralCarOrder");
static_assert(offsetof(UFortTrainManager, CarTable) == 520, "Offset mismatch for UFortTrainManager::CarTable");
static_assert(offsetof(UFortTrainManager, CarOrder) == 528, "Offset mismatch for UFortTrainManager::CarOrder");
static_assert(offsetof(UFortTrainManager, DefaultConnectorLength) == 544, "Offset mismatch for UFortTrainManager::DefaultConnectorLength");
static_assert(offsetof(UFortTrainManager, BaseMoveSpeed) == 548, "Offset mismatch for UFortTrainManager::BaseMoveSpeed");
static_assert(offsetof(UFortTrainManager, TruckLocationTolerance) == 552, "Offset mismatch for UFortTrainManager::TruckLocationTolerance");
static_assert(offsetof(UFortTrainManager, MaxIterations) == 592, "Offset mismatch for UFortTrainManager::MaxIterations");
static_assert(offsetof(UFortTrainManager, MaxErrorOffset) == 632, "Offset mismatch for UFortTrainManager::MaxErrorOffset");
static_assert(offsetof(UFortTrainManager, ErrorCatchupSpeedModifier) == 672, "Offset mismatch for UFortTrainManager::ErrorCatchupSpeedModifier");
static_assert(offsetof(UFortTrainManager, DistanceAheadToRampUp) == 712, "Offset mismatch for UFortTrainManager::DistanceAheadToRampUp");
static_assert(offsetof(UFortTrainManager, DistanceAheadToStop) == 752, "Offset mismatch for UFortTrainManager::DistanceAheadToStop");
static_assert(offsetof(UFortTrainManager, ArrivalTimeInterval) == 792, "Offset mismatch for UFortTrainManager::ArrivalTimeInterval");
static_assert(offsetof(UFortTrainManager, ArrivalTimeIntervalEventMaxTime) == 832, "Offset mismatch for UFortTrainManager::ArrivalTimeIntervalEventMaxTime");
static_assert(offsetof(UFortTrainManager, Rail) == 872, "Offset mismatch for UFortTrainManager::Rail");
static_assert(offsetof(UFortTrainManager, Cars) == 880, "Offset mismatch for UFortTrainManager::Cars");
static_assert(offsetof(UFortTrainManager, ReplicatedMovementData) == 924, "Offset mismatch for UFortTrainManager::ReplicatedMovementData");
static_assert(offsetof(UFortTrainManager, CachedGlobalTrainManager) == 968, "Offset mismatch for UFortTrainManager::CachedGlobalTrainManager");
static_assert(offsetof(UFortTrainManager, CachedAudioShapeLineList) == 1016, "Offset mismatch for UFortTrainManager::CachedAudioShapeLineList");
static_assert(offsetof(UFortTrainManager, PlayersToMarkStationsFor) == 1064, "Offset mismatch for UFortTrainManager::PlayersToMarkStationsFor");

// /Script/TrainCoreRuntime.FortTrainMovingPlatformComponent
// Kind: Class; super: FortMovingPlatformComponent
class UFortTrainMovingPlatformComponent
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* PickupPushCurve; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PickupTeleportDistance[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTrainMovingPlatformComponent, PickupPushCurve) == 496, "Offset mismatch for UFortTrainMovingPlatformComponent::PickupPushCurve");
static_assert(offsetof(UFortTrainMovingPlatformComponent, PickupTeleportDistance) == 504, "Offset mismatch for UFortTrainMovingPlatformComponent::PickupTeleportDistance");

// /Script/TrainCoreRuntime.FortTrainRail
// Kind: Class; super: Actor
class UFortTrainRail
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnTrainRegisteredEvent; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrainStationArrivalIntervalReachedEvent; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrainStationDepartureEvent; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x02A0
    std::uint8_t bMinimizeSplineComponent; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02B1
    float MaxTangentDifference; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseStationTagOnAllCoastKeyframes[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    void* SplineComponent; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTrainRail, OnTrainRegisteredEvent) == 624, "Offset mismatch for UFortTrainRail::OnTrainRegisteredEvent");
static_assert(offsetof(UFortTrainRail, OnTrainStationArrivalIntervalReachedEvent) == 640, "Offset mismatch for UFortTrainRail::OnTrainStationArrivalIntervalReachedEvent");
static_assert(offsetof(UFortTrainRail, OnTrainStationDepartureEvent) == 656, "Offset mismatch for UFortTrainRail::OnTrainStationDepartureEvent");
static_assert(offsetof(UFortTrainRail, bMinimizeSplineComponent) == 688, "Offset mismatch for UFortTrainRail::bMinimizeSplineComponent");
static_assert(offsetof(UFortTrainRail, MaxTangentDifference) == 692, "Offset mismatch for UFortTrainRail::MaxTangentDifference");
static_assert(offsetof(UFortTrainRail, UseStationTagOnAllCoastKeyframes) == 696, "Offset mismatch for UFortTrainRail::UseStationTagOnAllCoastKeyframes");
static_assert(offsetof(UFortTrainRail, SplineComponent) == 736, "Offset mismatch for UFortTrainRail::SplineComponent");

// /Script/TrainCoreRuntime.FortTrainSpawner
// Kind: Class; super: Actor
class UFortTrainSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* TrainConfig; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShouldSpawn[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomizeSpawnLocation[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseDirection[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomizeDirection[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartDelay[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t Rail[0x20]; // 0x0340 (Size: 0x20, Type: SoftObjectProperty)
    void* DummyRoot; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTrainSpawner, TrainConfig) == 624, "Offset mismatch for UFortTrainSpawner::TrainConfig");
static_assert(offsetof(UFortTrainSpawner, ShouldSpawn) == 632, "Offset mismatch for UFortTrainSpawner::ShouldSpawn");
static_assert(offsetof(UFortTrainSpawner, RandomizeSpawnLocation) == 672, "Offset mismatch for UFortTrainSpawner::RandomizeSpawnLocation");
static_assert(offsetof(UFortTrainSpawner, ReverseDirection) == 712, "Offset mismatch for UFortTrainSpawner::ReverseDirection");
static_assert(offsetof(UFortTrainSpawner, RandomizeDirection) == 752, "Offset mismatch for UFortTrainSpawner::RandomizeDirection");
static_assert(offsetof(UFortTrainSpawner, StartDelay) == 792, "Offset mismatch for UFortTrainSpawner::StartDelay");
static_assert(offsetof(UFortTrainSpawner, Rail) == 832, "Offset mismatch for UFortTrainSpawner::Rail");
static_assert(offsetof(UFortTrainSpawner, DummyRoot) == 864, "Offset mismatch for UFortTrainSpawner::DummyRoot");

// /Script/TrainCoreRuntime.FortTrainStationComponent
// Kind: Class; super: SceneComponent
class UFortTrainStationComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t IdentifierTag[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t MarkerActor[0x20]; // 0x0248 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EnterLength[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t CoastLength[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitLength[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedMultiplier[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseDirectionOnExit[0x1]; // 0x0308 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTrainStationComponent, IdentifierTag) == 576, "Offset mismatch for UFortTrainStationComponent::IdentifierTag");
static_assert(offsetof(UFortTrainStationComponent, MarkerActor) == 584, "Offset mismatch for UFortTrainStationComponent::MarkerActor");
static_assert(offsetof(UFortTrainStationComponent, EnterLength) == 616, "Offset mismatch for UFortTrainStationComponent::EnterLength");
static_assert(offsetof(UFortTrainStationComponent, CoastLength) == 656, "Offset mismatch for UFortTrainStationComponent::CoastLength");
static_assert(offsetof(UFortTrainStationComponent, ExitLength) == 696, "Offset mismatch for UFortTrainStationComponent::ExitLength");
static_assert(offsetof(UFortTrainStationComponent, SpeedMultiplier) == 736, "Offset mismatch for UFortTrainStationComponent::SpeedMultiplier");
static_assert(offsetof(UFortTrainStationComponent, ReverseDirectionOnExit) == 776, "Offset mismatch for UFortTrainStationComponent::ReverseDirectionOnExit");

// /Script/TrainCoreRuntime.FortTrainTransitSign
// Kind: Class; super: BuildingGameplayActor
class UFortTrainTransitSign
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* TimerTickSound; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    float TimeToArrival; // 0x0928 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x092C
    std::uint8_t TickLocation[0x18]; // 0x0930 (Size: 0x18, Type: StructProperty)
    void* TimerMesh; // 0x0948 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTrainTransitSign, TimerTickSound) == 2336, "Offset mismatch for UFortTrainTransitSign::TimerTickSound");
static_assert(offsetof(UFortTrainTransitSign, TimeToArrival) == 2344, "Offset mismatch for UFortTrainTransitSign::TimeToArrival");
static_assert(offsetof(UFortTrainTransitSign, TickLocation) == 2352, "Offset mismatch for UFortTrainTransitSign::TickLocation");
static_assert(offsetof(UFortTrainTransitSign, TimerMesh) == 2376, "Offset mismatch for UFortTrainTransitSign::TimerMesh");

// /Script/TrainCoreRuntime.TrainCar
// Kind: Class; super: FortGameplayTagActor
class UTrainCar
{
public:
    std::uint8_t Pad_0000[0x2BC]; // 0x0000
    std::uint8_t bBlockMarking; // 0x02BC (Size: 0x1, Type: BoolProperty)
    // 0x02BC BoolProperty bCanBeMarked (shared storage)
    // 0x02BC BoolProperty bLockPitch (shared storage)
    // 0x02BC BoolProperty bLockRoll (shared storage)
    // 0x02BC BoolProperty bLockYaw (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02BD
    std::uint8_t MarkerDisplay[0xB0]; // 0x02C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    float Length; // 0x0388 (Size: 0x4, Type: FloatProperty)
    float ConnectorLength; // 0x038C (Size: 0x4, Type: FloatProperty)
    float MaxPitch; // 0x0390 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0394
    void* DestructionTargetingPreset; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* ImpulseTargetingPreset; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DestroyBuildings[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DestroyOnlyTargetPlayerBuilds[0x28]; // 0x03D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DestructionActorTags[0x20]; // 0x03F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t DestructionIgnoredActorTags[0x20]; // 0x0418 (Size: 0x20, Type: StructProperty)
    std::uint8_t DestructionAsyncTargetingHandle[0x4]; // 0x0438 (Size: 0x4, Type: StructProperty)
    std::uint8_t ImpulseAsyncTargetingHandle[0x4]; // 0x043C (Size: 0x4, Type: StructProperty)
    void* OnboardSoundIndicatorComponent; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* OnboardAudioShapeLineList; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* TrainMoveSoundCue; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* PlayerOnboardControlBusMix; // 0x0458 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTrainCar, bBlockMarking) == 700, "Offset mismatch for UTrainCar::bBlockMarking");
static_assert(offsetof(UTrainCar, MarkerDisplay) == 704, "Offset mismatch for UTrainCar::MarkerDisplay");
static_assert(offsetof(UTrainCar, MarkerPositionOffset) == 880, "Offset mismatch for UTrainCar::MarkerPositionOffset");
static_assert(offsetof(UTrainCar, Length) == 904, "Offset mismatch for UTrainCar::Length");
static_assert(offsetof(UTrainCar, ConnectorLength) == 908, "Offset mismatch for UTrainCar::ConnectorLength");
static_assert(offsetof(UTrainCar, MaxPitch) == 912, "Offset mismatch for UTrainCar::MaxPitch");
static_assert(offsetof(UTrainCar, DestructionTargetingPreset) == 920, "Offset mismatch for UTrainCar::DestructionTargetingPreset");
static_assert(offsetof(UTrainCar, ImpulseTargetingPreset) == 928, "Offset mismatch for UTrainCar::ImpulseTargetingPreset");
static_assert(offsetof(UTrainCar, DestroyBuildings) == 936, "Offset mismatch for UTrainCar::DestroyBuildings");
static_assert(offsetof(UTrainCar, DestroyOnlyTargetPlayerBuilds) == 976, "Offset mismatch for UTrainCar::DestroyOnlyTargetPlayerBuilds");
static_assert(offsetof(UTrainCar, DestructionActorTags) == 1016, "Offset mismatch for UTrainCar::DestructionActorTags");
static_assert(offsetof(UTrainCar, DestructionIgnoredActorTags) == 1048, "Offset mismatch for UTrainCar::DestructionIgnoredActorTags");
static_assert(offsetof(UTrainCar, DestructionAsyncTargetingHandle) == 1080, "Offset mismatch for UTrainCar::DestructionAsyncTargetingHandle");
static_assert(offsetof(UTrainCar, ImpulseAsyncTargetingHandle) == 1084, "Offset mismatch for UTrainCar::ImpulseAsyncTargetingHandle");
static_assert(offsetof(UTrainCar, OnboardSoundIndicatorComponent) == 1088, "Offset mismatch for UTrainCar::OnboardSoundIndicatorComponent");
static_assert(offsetof(UTrainCar, OnboardAudioShapeLineList) == 1096, "Offset mismatch for UTrainCar::OnboardAudioShapeLineList");
static_assert(offsetof(UTrainCar, TrainMoveSoundCue) == 1104, "Offset mismatch for UTrainCar::TrainMoveSoundCue");
static_assert(offsetof(UTrainCar, PlayerOnboardControlBusMix) == 1112, "Offset mismatch for UTrainCar::PlayerOnboardControlBusMix");

// /Script/TrainCoreRuntime.TrainConfig
// Kind: Class; super: PrimaryDataAsset
class UTrainConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TrainManagerClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Cars; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MoveSpeed[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultConnectorLength[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTrainConfig, TrainManagerClass) == 40, "Offset mismatch for UTrainConfig::TrainManagerClass");
static_assert(offsetof(UTrainConfig, Cars) == 48, "Offset mismatch for UTrainConfig::Cars");
static_assert(offsetof(UTrainConfig, MoveSpeed) == 64, "Offset mismatch for UTrainConfig::MoveSpeed");
static_assert(offsetof(UTrainConfig, DefaultConnectorLength) == 104, "Offset mismatch for UTrainConfig::DefaultConnectorLength");

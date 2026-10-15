/**
 * decamp dumper generated SDK
 * Package: /Script/JunoBattleBusRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoBattleBusRuntime.JunoBattleBusQueuedPlayersData
// Kind: ScriptStruct; super: none
struct FJunoBattleBusQueuedPlayersData
{
public:
    TArray<void*> QueuedPlayerIds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OriginBusStopGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DestinationBusStopGuid[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t BattleBusState; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDestinationTileLoaded; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoBattleBusQueuedPlayersData, QueuedPlayerIds) == 0, "Offset mismatch for FJunoBattleBusQueuedPlayersData::QueuedPlayerIds");
static_assert(offsetof(FJunoBattleBusQueuedPlayersData, OriginBusStopGuid) == 16, "Offset mismatch for FJunoBattleBusQueuedPlayersData::OriginBusStopGuid");
static_assert(offsetof(FJunoBattleBusQueuedPlayersData, DestinationBusStopGuid) == 32, "Offset mismatch for FJunoBattleBusQueuedPlayersData::DestinationBusStopGuid");
static_assert(offsetof(FJunoBattleBusQueuedPlayersData, BattleBusState) == 48, "Offset mismatch for FJunoBattleBusQueuedPlayersData::BattleBusState");
static_assert(offsetof(FJunoBattleBusQueuedPlayersData, bDestinationTileLoaded) == 49, "Offset mismatch for FJunoBattleBusQueuedPlayersData::bDestinationTileLoaded");

// /Script/JunoBattleBusRuntime.JunoBusTravelTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoBusTravelTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBattleBusRuntime.JunoDiscoveredBusStop
// Kind: ScriptStruct; super: none
struct FJunoDiscoveredBusStop
{
public:
    std::uint8_t LocationInfo[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t CachedUGCBusStopName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t BattleBusStopType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0079
    std::int32_t StationIndex; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoDiscoveredBusStop, LocationInfo) == 0, "Offset mismatch for FJunoDiscoveredBusStop::LocationInfo");
static_assert(offsetof(FJunoDiscoveredBusStop, CachedUGCBusStopName) == 104, "Offset mismatch for FJunoDiscoveredBusStop::CachedUGCBusStopName");
static_assert(offsetof(FJunoDiscoveredBusStop, BattleBusStopType) == 120, "Offset mismatch for FJunoDiscoveredBusStop::BattleBusStopType");
static_assert(offsetof(FJunoDiscoveredBusStop, StationIndex) == 124, "Offset mismatch for FJunoDiscoveredBusStop::StationIndex");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_DiscoveredBusStop
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_DiscoveredBusStop
{
public:
    void* DiscoveredContext; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_DiscoveredBusStop, DiscoveredContext) == 0, "Offset mismatch for FJunoEvent_BattleBus_DiscoveredBusStop::DiscoveredContext");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus
{
public:
    std::uint8_t bPlayerIsOnBus; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus, bPlayerIsOnBus) == 0, "Offset mismatch for FJunoEvent_BattleBus_LocalPlayerEnteredOrExitedBus::bPlayerIsOnBus");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_OpenMapWidget
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_OpenMapWidget
{
public:
    void* OwningBusStop; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InstigatingPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_OpenMapWidget, OwningBusStop) == 0, "Offset mismatch for FJunoEvent_BattleBus_OpenMapWidget::OwningBusStop");
static_assert(offsetof(FJunoEvent_BattleBus_OpenMapWidget, InstigatingPlayerState) == 8, "Offset mismatch for FJunoEvent_BattleBus_OpenMapWidget::InstigatingPlayerState");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_QueueTimerUpdate
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_QueueTimerUpdate
{
public:
    std::int32_t QueueTimeRemaining; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_QueueTimerUpdate, QueueTimeRemaining) == 0, "Offset mismatch for FJunoEvent_BattleBus_QueueTimerUpdate::QueueTimeRemaining");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_QueuedPlayersDataChanged
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_QueuedPlayersDataChanged
{
public:
    TWeakObjectPtr<void> OwningBusManager; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> QueuedPlayerIds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OriginBusStop[0x80]; // 0x0018 (Size: 0x80, Type: StructProperty)
    std::uint8_t DestinationBusStop[0x80]; // 0x0098 (Size: 0x80, Type: StructProperty)
    std::uint8_t BattleBusState; // 0x0118 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_QueuedPlayersDataChanged, OwningBusManager) == 0, "Offset mismatch for FJunoEvent_BattleBus_QueuedPlayersDataChanged::OwningBusManager");
static_assert(offsetof(FJunoEvent_BattleBus_QueuedPlayersDataChanged, QueuedPlayerIds) == 8, "Offset mismatch for FJunoEvent_BattleBus_QueuedPlayersDataChanged::QueuedPlayerIds");
static_assert(offsetof(FJunoEvent_BattleBus_QueuedPlayersDataChanged, OriginBusStop) == 24, "Offset mismatch for FJunoEvent_BattleBus_QueuedPlayersDataChanged::OriginBusStop");
static_assert(offsetof(FJunoEvent_BattleBus_QueuedPlayersDataChanged, DestinationBusStop) == 152, "Offset mismatch for FJunoEvent_BattleBus_QueuedPlayersDataChanged::DestinationBusStop");
static_assert(offsetof(FJunoEvent_BattleBus_QueuedPlayersDataChanged, BattleBusState) == 280, "Offset mismatch for FJunoEvent_BattleBus_QueuedPlayersDataChanged::BattleBusState");

// /Script/JunoBattleBusRuntime.JunoEvent_BattleBus_ShowLoadingScreen
// Kind: ScriptStruct; super: none
struct FJunoEvent_BattleBus_ShowLoadingScreen
{
public:
    std::uint8_t bShowLoadingScreen; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoEvent_BattleBus_ShowLoadingScreen, bShowLoadingScreen) == 0, "Offset mismatch for FJunoEvent_BattleBus_ShowLoadingScreen::bShowLoadingScreen");

// /Script/JunoBattleBusRuntime.JunoObjectiveFilter_GameTravelComplete
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoObjectiveFilter_GameTravelComplete
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString DestinationMnemonic; // 0x00A0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoObjectiveFilter_GameTravelComplete, DestinationMnemonic) == 160, "Offset mismatch for FJunoObjectiveFilter_GameTravelComplete::DestinationMnemonic");

// /Script/JunoBattleBusRuntime.JunoVerbMessage_GameTravelComplete
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_GameTravelComplete
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString DestinationMnemonic; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoVerbMessage_GameTravelComplete, DestinationMnemonic) == 120, "Offset mismatch for FJunoVerbMessage_GameTravelComplete::DestinationMnemonic");

// /Script/JunoBattleBusRuntime.JunoBattleBusAnalytics
// Kind: Class; super: Object
class UJunoBattleBusAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBattleBusRuntime.JunoBattleBusBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoBattleBusBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBattleBusRuntime.JunoBattleBusCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoBattleBusCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBattleBusRuntime.JunoBattleBusStop
// Kind: Class; super: JunoBuildingGameplayActor
class UJunoBattleBusStop
{
public:
    std::uint8_t Pad_0000[0xA00]; // 0x0000
    std::uint8_t PickDestination_InteractText[0x10]; // 0x0A00 (Size: 0x10, Type: TextProperty)
    std::uint8_t EnterQueue_InteractText[0x10]; // 0x0A10 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExitQueue_InteractText[0x10]; // 0x0A20 (Size: 0x10, Type: TextProperty)
    std::uint8_t OpenMap_InteractText[0x10]; // 0x0A30 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameTravel_InteractText[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    std::uint8_t ReplicatedSavedActorGuid[0x10]; // 0x0A50 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsBusStopDiscovered; // 0x0A60 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0A61
    std::uint8_t GameTravelInfoChangedEventHandle[0x1]; // 0x0A64 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBattleBusStop, PickDestination_InteractText) == 2560, "Offset mismatch for UJunoBattleBusStop::PickDestination_InteractText");
static_assert(offsetof(UJunoBattleBusStop, EnterQueue_InteractText) == 2576, "Offset mismatch for UJunoBattleBusStop::EnterQueue_InteractText");
static_assert(offsetof(UJunoBattleBusStop, ExitQueue_InteractText) == 2592, "Offset mismatch for UJunoBattleBusStop::ExitQueue_InteractText");
static_assert(offsetof(UJunoBattleBusStop, OpenMap_InteractText) == 2608, "Offset mismatch for UJunoBattleBusStop::OpenMap_InteractText");
static_assert(offsetof(UJunoBattleBusStop, GameTravel_InteractText) == 2624, "Offset mismatch for UJunoBattleBusStop::GameTravel_InteractText");
static_assert(offsetof(UJunoBattleBusStop, ReplicatedSavedActorGuid) == 2640, "Offset mismatch for UJunoBattleBusStop::ReplicatedSavedActorGuid");
static_assert(offsetof(UJunoBattleBusStop, bIsBusStopDiscovered) == 2656, "Offset mismatch for UJunoBattleBusStop::bIsBusStopDiscovered");
static_assert(offsetof(UJunoBattleBusStop, GameTravelInfoChangedEventHandle) == 2660, "Offset mismatch for UJunoBattleBusStop::GameTravelInfoChangedEventHandle");

// /Script/JunoBattleBusRuntime.JunoBattleBusStopDiscoveredContext
// Kind: Class; super: Object
class UJunoBattleBusStopDiscoveredContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DiscoveredBusStop[0x80]; // 0x0028 (Size: 0x80, Type: StructProperty)
    void* DiscoveringPlayerState; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBattleBusStopDiscoveredContext, DiscoveredBusStop) == 40, "Offset mismatch for UJunoBattleBusStopDiscoveredContext::DiscoveredBusStop");
static_assert(offsetof(UJunoBattleBusStopDiscoveredContext, DiscoveringPlayerState) == 168, "Offset mismatch for UJunoBattleBusStopDiscoveredContext::DiscoveringPlayerState");

// /Script/JunoBattleBusRuntime.JunoBattleBusStopLimitGetter
// Kind: Class; super: JunoBuildLimitGetter
class UJunoBattleBusStopLimitGetter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName PhysicalMarkerSettingName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoBattleBusStopLimitGetter, PhysicalMarkerSettingName) == 40, "Offset mismatch for UJunoBattleBusStopLimitGetter::PhysicalMarkerSettingName");

// /Script/JunoBattleBusRuntime.JunoBusManagerComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoBusManagerComponent
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t BattleBusFlightInfo[0x48]; // 0x0150 (Size: 0x48, Type: StructProperty)
    std::uint8_t BusStopActorTypeTag[0x4]; // 0x0198 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpecialBusStopLocationTag[0x4]; // 0x019C (Size: 0x4, Type: StructProperty)
    void* BattleBusClass; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TimeToReadyBus[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnDistanceFromTargetLocation[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BusSpawnHeightAboveBusStop[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBusSpawnHeight[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBusSpawnHeight[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceEndFlightAfterTime[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::int32_t MultiplayerBusQueueTimeInSeconds; // 0x0298 (Size: 0x4, Type: IntProperty)
    std::int32_t SingleplayerBusQueueTimeInSeconds; // 0x029C (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> SpecialCaseBusStopPOILayerNames; // 0x02A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t DefaultBusStopPOILayerName[0x4]; // 0x02B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t BusStopPOIRegistryKey[0x4]; // 0x02B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t JunoMarker[0x110]; // 0x02B8 (Size: 0x110, Type: StructProperty)
    TMap<void*, void*> MarkerSettingsByStopType; // 0x03C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MarkerSettingsByGameplayTag; // 0x03D8 (Size: 0x10, Type: MapProperty)
    TArray<void*> DiscoveredBusStops; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t QueuedPlayersData[0x38]; // 0x03F8 (Size: 0x38, Type: StructProperty)
    std::int32_t QueueTimeRemaining; // 0x0430 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x44]; // 0x0434
    std::uint8_t LastBusTeleportUseTime[0x18]; // 0x0478 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> OriginBusStop; // 0x0490 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x80]; // 0x0498
    std::uint8_t JunoBusTravelTelemetryData[0x1]; // 0x0518 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBusManagerComponent, BattleBusFlightInfo) == 336, "Offset mismatch for UJunoBusManagerComponent::BattleBusFlightInfo");
static_assert(offsetof(UJunoBusManagerComponent, BusStopActorTypeTag) == 408, "Offset mismatch for UJunoBusManagerComponent::BusStopActorTypeTag");
static_assert(offsetof(UJunoBusManagerComponent, SpecialBusStopLocationTag) == 412, "Offset mismatch for UJunoBusManagerComponent::SpecialBusStopLocationTag");
static_assert(offsetof(UJunoBusManagerComponent, BattleBusClass) == 416, "Offset mismatch for UJunoBusManagerComponent::BattleBusClass");
static_assert(offsetof(UJunoBusManagerComponent, TimeToReadyBus) == 424, "Offset mismatch for UJunoBusManagerComponent::TimeToReadyBus");
static_assert(offsetof(UJunoBusManagerComponent, SpawnDistanceFromTargetLocation) == 464, "Offset mismatch for UJunoBusManagerComponent::SpawnDistanceFromTargetLocation");
static_assert(offsetof(UJunoBusManagerComponent, BusSpawnHeightAboveBusStop) == 504, "Offset mismatch for UJunoBusManagerComponent::BusSpawnHeightAboveBusStop");
static_assert(offsetof(UJunoBusManagerComponent, MinBusSpawnHeight) == 544, "Offset mismatch for UJunoBusManagerComponent::MinBusSpawnHeight");
static_assert(offsetof(UJunoBusManagerComponent, MaxBusSpawnHeight) == 584, "Offset mismatch for UJunoBusManagerComponent::MaxBusSpawnHeight");
static_assert(offsetof(UJunoBusManagerComponent, ForceEndFlightAfterTime) == 624, "Offset mismatch for UJunoBusManagerComponent::ForceEndFlightAfterTime");
static_assert(offsetof(UJunoBusManagerComponent, MultiplayerBusQueueTimeInSeconds) == 664, "Offset mismatch for UJunoBusManagerComponent::MultiplayerBusQueueTimeInSeconds");
static_assert(offsetof(UJunoBusManagerComponent, SingleplayerBusQueueTimeInSeconds) == 668, "Offset mismatch for UJunoBusManagerComponent::SingleplayerBusQueueTimeInSeconds");
static_assert(offsetof(UJunoBusManagerComponent, SpecialCaseBusStopPOILayerNames) == 672, "Offset mismatch for UJunoBusManagerComponent::SpecialCaseBusStopPOILayerNames");
static_assert(offsetof(UJunoBusManagerComponent, DefaultBusStopPOILayerName) == 688, "Offset mismatch for UJunoBusManagerComponent::DefaultBusStopPOILayerName");
static_assert(offsetof(UJunoBusManagerComponent, BusStopPOIRegistryKey) == 692, "Offset mismatch for UJunoBusManagerComponent::BusStopPOIRegistryKey");
static_assert(offsetof(UJunoBusManagerComponent, JunoMarker) == 696, "Offset mismatch for UJunoBusManagerComponent::JunoMarker");
static_assert(offsetof(UJunoBusManagerComponent, MarkerSettingsByStopType) == 968, "Offset mismatch for UJunoBusManagerComponent::MarkerSettingsByStopType");
static_assert(offsetof(UJunoBusManagerComponent, MarkerSettingsByGameplayTag) == 984, "Offset mismatch for UJunoBusManagerComponent::MarkerSettingsByGameplayTag");
static_assert(offsetof(UJunoBusManagerComponent, DiscoveredBusStops) == 1000, "Offset mismatch for UJunoBusManagerComponent::DiscoveredBusStops");
static_assert(offsetof(UJunoBusManagerComponent, QueuedPlayersData) == 1016, "Offset mismatch for UJunoBusManagerComponent::QueuedPlayersData");
static_assert(offsetof(UJunoBusManagerComponent, QueueTimeRemaining) == 1072, "Offset mismatch for UJunoBusManagerComponent::QueueTimeRemaining");
static_assert(offsetof(UJunoBusManagerComponent, LastBusTeleportUseTime) == 1144, "Offset mismatch for UJunoBusManagerComponent::LastBusTeleportUseTime");
static_assert(offsetof(UJunoBusManagerComponent, OriginBusStop) == 1168, "Offset mismatch for UJunoBusManagerComponent::OriginBusStop");
static_assert(offsetof(UJunoBusManagerComponent, JunoBusTravelTelemetryData) == 1304, "Offset mismatch for UJunoBusManagerComponent::JunoBusTravelTelemetryData");

// /Script/JunoBattleBusRuntime.JunoControllerComponent_BusTeleport
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_BusTeleport
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPlayerEnterBattleBus; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerExitBattleBus; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* BusInputMapping; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* JumpAction; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* UpInputAction; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* DownInputAction; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BusAttachOffset[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> CurrentBattleBus; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoControllerComponent_BusTeleport, OnPlayerEnterBattleBus) == 200, "Offset mismatch for UJunoControllerComponent_BusTeleport::OnPlayerEnterBattleBus");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, OnPlayerExitBattleBus) == 216, "Offset mismatch for UJunoControllerComponent_BusTeleport::OnPlayerExitBattleBus");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, BusInputMapping) == 232, "Offset mismatch for UJunoControllerComponent_BusTeleport::BusInputMapping");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, JumpAction) == 240, "Offset mismatch for UJunoControllerComponent_BusTeleport::JumpAction");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, UpInputAction) == 248, "Offset mismatch for UJunoControllerComponent_BusTeleport::UpInputAction");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, DownInputAction) == 256, "Offset mismatch for UJunoControllerComponent_BusTeleport::DownInputAction");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, BusAttachOffset) == 264, "Offset mismatch for UJunoControllerComponent_BusTeleport::BusAttachOffset");
static_assert(offsetof(UJunoControllerComponent_BusTeleport, CurrentBattleBus) == 288, "Offset mismatch for UJunoControllerComponent_BusTeleport::CurrentBattleBus");

// /Script/JunoBattleBusRuntime.JunoObjectiveProcessor_GameTravelComplete
// Kind: Class; super: FortObjectiveProcessor
class UJunoObjectiveProcessor_GameTravelComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoObjectiveProcessor_GameTravelComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoObjectiveProcessor_GameTravelComplete::OwningProcessorSubsystem");

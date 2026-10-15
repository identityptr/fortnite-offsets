/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeDataChannelTriggerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeDataChannelTriggerRuntime.CDCFloatArray
// Kind: ScriptStruct; super: none
struct FCDCFloatArray
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCDCFloatArray, Data) == 0, "Offset mismatch for FCDCFloatArray::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCInt
// Kind: ScriptStruct; super: none
struct FCDCInt
{
public:
    std::int32_t Data; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCDCInt, Data) == 0, "Offset mismatch for FCDCInt::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCLargeInt
// Kind: ScriptStruct; super: none
struct FCDCLargeInt
{
public:
    std::int64_t Data; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FCDCLargeInt, Data) == 0, "Offset mismatch for FCDCLargeInt::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCString
// Kind: ScriptStruct; super: none
struct FCDCString
{
public:
    FString Data; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCDCString, Data) == 0, "Offset mismatch for FCDCString::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCStringArray
// Kind: ScriptStruct; super: none
struct FCDCStringArray
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ExtraData; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCDCStringArray, Data) == 0, "Offset mismatch for FCDCStringArray::Data");
static_assert(offsetof(FCDCStringArray, ExtraData) == 16, "Offset mismatch for FCDCStringArray::ExtraData");

// /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
// Kind: ScriptStruct; super: none
struct FCDCStringFloatArrayMap
{
public:
    TMap<void*, void*> Data; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCDCStringFloatArrayMap, Data) == 0, "Offset mismatch for FCDCStringFloatArrayMap::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatMap
// Kind: ScriptStruct; super: none
struct FCDCStringFloatMap
{
public:
    TMap<void*, void*> Data; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCDCStringFloatMap, Data) == 0, "Offset mismatch for FCDCStringFloatMap::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCStringIntMap
// Kind: ScriptStruct; super: none
struct FCDCStringIntMap
{
public:
    TMap<void*, void*> Data; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCDCStringIntMap, Data) == 0, "Offset mismatch for FCDCStringIntMap::Data");

// /Script/CreativeDataChannelTriggerRuntime.CDCStringStringMap
// Kind: ScriptStruct; super: none
struct FCDCStringStringMap
{
public:
    TMap<void*, void*> Data; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtraData; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCDCStringStringMap, Data) == 0, "Offset mismatch for FCDCStringStringMap::Data");
static_assert(offsetof(FCDCStringStringMap, ExtraData) == 16, "Offset mismatch for FCDCStringStringMap::ExtraData");

// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
// Kind: ScriptStruct; super: none
struct FCreativeDataChannelEvent
{
public:
    std::uint8_t EventName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Parameters[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName TriggerCondition; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCreativeDataChannelEvent, EventName) == 0, "Offset mismatch for FCreativeDataChannelEvent::EventName");
static_assert(offsetof(FCreativeDataChannelEvent, Parameters) == 4, "Offset mismatch for FCreativeDataChannelEvent::Parameters");
static_assert(offsetof(FCreativeDataChannelEvent, TriggerCondition) == 8, "Offset mismatch for FCreativeDataChannelEvent::TriggerCondition");

// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
// Kind: ScriptStruct; super: none
struct FCreativeDataChannelEvents
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCreativeDataChannelEvents, Events) == 0, "Offset mismatch for FCreativeDataChannelEvents::Events");

// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
// Kind: Class; super: Object
class UCreativeDataChannelAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
// Kind: Class; super: ElectraDataChannelTarget
class UCreativeDataChannelTarget
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::int8_t VersionByte; // 0x02B0 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    std::uint8_t Events[0x10]; // 0x02B8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnEventsRep; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EventsCache[0x1]; // 0x02D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeDataChannelTarget, VersionByte) == 688, "Offset mismatch for UCreativeDataChannelTarget::VersionByte");
static_assert(offsetof(UCreativeDataChannelTarget, Events) == 696, "Offset mismatch for UCreativeDataChannelTarget::Events");
static_assert(offsetof(UCreativeDataChannelTarget, OnEventsRep) == 712, "Offset mismatch for UCreativeDataChannelTarget::OnEventsRep");
static_assert(offsetof(UCreativeDataChannelTarget, EventsCache) == 728, "Offset mismatch for UCreativeDataChannelTarget::EventsCache");

// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
// Kind: Class; super: ElectraDataChannelTarget
class UCreativeDataChannelTargetFN
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::int32_t VersionByte; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t VersionByteTracker[0x4]; // 0x02B4 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate VersionByteEvent; // 0x02B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString LeaderBoard; // 0x02C8 (Size: 0x10, Type: StrProperty)
    std::int64_t StormCircleSize; // 0x02D8 (Size: 0x8, Type: Int64Property)
    std::uint8_t StormCircleSizeTracker[0x8]; // 0x02E0 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate StormCircleSizeEvent; // 0x02E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> StormCircleLocation; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StormCircleLocationTracker[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate StormCircleLocationEvent; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerLocation; // 0x0328 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerLocationTracker[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate PlayerLocationEvent; // 0x0348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString ArenaPointLeaderBoard; // 0x0358 (Size: 0x10, Type: StrProperty)
    std::uint8_t ArenaPointLeaderBoardTracker[0x20]; // 0x0368 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate ArenaPointLeaderBoardEvent; // 0x0388 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString CashCupDataAllTimeEarners; // 0x0398 (Size: 0x10, Type: StrProperty)
    std::uint8_t CashCupDataAllTimeEanersTracker[0x10]; // 0x03A8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate CashCupDataAllTimeEarnersEvent; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString MythicBossEliminatedPlayer; // 0x03C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t MythicBossEliminatedPlayerTracker[0x10]; // 0x03D8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate MythicBossEliminatedPlayerEvent; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString MythicWeaponPlayer; // 0x03F8 (Size: 0x10, Type: StrProperty)
    std::uint8_t MythicWeaponPlayerTracker[0x10]; // 0x0408 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate MythicWeaponPlayerEvent; // 0x0418 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerInfo; // 0x0428 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerInfoTracker[0x18]; // 0x0438 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate PlayerInfoEvent; // 0x0450 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCreativeDataChannelTargetFN, VersionByte) == 688, "Offset mismatch for UCreativeDataChannelTargetFN::VersionByte");
static_assert(offsetof(UCreativeDataChannelTargetFN, VersionByteTracker) == 692, "Offset mismatch for UCreativeDataChannelTargetFN::VersionByteTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, VersionByteEvent) == 696, "Offset mismatch for UCreativeDataChannelTargetFN::VersionByteEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, LeaderBoard) == 712, "Offset mismatch for UCreativeDataChannelTargetFN::LeaderBoard");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleSize) == 728, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleSize");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleSizeTracker) == 736, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleSizeTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleSizeEvent) == 744, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleSizeEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleLocation) == 760, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleLocation");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleLocationTracker) == 776, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleLocationTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, StormCircleLocationEvent) == 792, "Offset mismatch for UCreativeDataChannelTargetFN::StormCircleLocationEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerLocation) == 808, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerLocation");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerLocationTracker) == 824, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerLocationTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerLocationEvent) == 840, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerLocationEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, ArenaPointLeaderBoard) == 856, "Offset mismatch for UCreativeDataChannelTargetFN::ArenaPointLeaderBoard");
static_assert(offsetof(UCreativeDataChannelTargetFN, ArenaPointLeaderBoardTracker) == 872, "Offset mismatch for UCreativeDataChannelTargetFN::ArenaPointLeaderBoardTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, ArenaPointLeaderBoardEvent) == 904, "Offset mismatch for UCreativeDataChannelTargetFN::ArenaPointLeaderBoardEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, CashCupDataAllTimeEarners) == 920, "Offset mismatch for UCreativeDataChannelTargetFN::CashCupDataAllTimeEarners");
static_assert(offsetof(UCreativeDataChannelTargetFN, CashCupDataAllTimeEanersTracker) == 936, "Offset mismatch for UCreativeDataChannelTargetFN::CashCupDataAllTimeEanersTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, CashCupDataAllTimeEarnersEvent) == 952, "Offset mismatch for UCreativeDataChannelTargetFN::CashCupDataAllTimeEarnersEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicBossEliminatedPlayer) == 968, "Offset mismatch for UCreativeDataChannelTargetFN::MythicBossEliminatedPlayer");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicBossEliminatedPlayerTracker) == 984, "Offset mismatch for UCreativeDataChannelTargetFN::MythicBossEliminatedPlayerTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicBossEliminatedPlayerEvent) == 1000, "Offset mismatch for UCreativeDataChannelTargetFN::MythicBossEliminatedPlayerEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicWeaponPlayer) == 1016, "Offset mismatch for UCreativeDataChannelTargetFN::MythicWeaponPlayer");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicWeaponPlayerTracker) == 1032, "Offset mismatch for UCreativeDataChannelTargetFN::MythicWeaponPlayerTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, MythicWeaponPlayerEvent) == 1048, "Offset mismatch for UCreativeDataChannelTargetFN::MythicWeaponPlayerEvent");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerInfo) == 1064, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerInfo");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerInfoTracker) == 1080, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerInfoTracker");
static_assert(offsetof(UCreativeDataChannelTargetFN, PlayerInfoEvent) == 1104, "Offset mismatch for UCreativeDataChannelTargetFN::PlayerInfoEvent");

// /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
// Kind: Class; super: ElectraDataChannelTarget
class UCreativeDataChannelTargetRL
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::int32_t VersionByte; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t VersionByteTracker[0x4]; // 0x02B4 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate VersionByteEvent; // 0x02B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t ScoreTeam; // 0x02C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02CC
    std::uint8_t ScoreTeamTracker[0x10]; // 0x02D0 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate ScoreTeamEvent; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString ScoreTotal; // 0x02F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t ScoreTotalTracker[0x10]; // 0x0300 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate ScoreTotalEvent; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int64_t ScoreboardTimeLeft; // 0x0320 (Size: 0x8, Type: Int64Property)
    std::uint8_t ScoreboardTimeLeftTracker[0x8]; // 0x0328 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate ScoreboardTimeLeftEvent; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString ScoreboardBestOf; // 0x0340 (Size: 0x10, Type: StrProperty)
    std::uint8_t ScoreboardBestOfTracker[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate ScoreboardBestOfEvent; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t Overtime; // 0x0370 (Size: 0x4, Type: IntProperty)
    std::uint8_t OvertimeTracker[0x4]; // 0x0374 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate OvertimeEvent; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString TeamNames; // 0x0388 (Size: 0x10, Type: StrProperty)
    std::uint8_t TeamNamesTracker[0x18]; // 0x0398 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate TeamNamesEvent; // 0x03B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerNames; // 0x03C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerNamesTracker[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate PlayerNamesEvent; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerBoost; // 0x03F8 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerBoostTracker[0x10]; // 0x0408 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate PlayerBoostEvent; // 0x0418 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerBoostCollected; // 0x0428 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerBoostCollectedTracker[0x20]; // 0x0438 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate PlayerBoostCollectedEvent; // 0x0458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString PlayerCoords; // 0x0468 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerCoordsTracker[0x10]; // 0x0478 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate PlayerCoordsEvent; // 0x0488 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString BallCoords; // 0x0498 (Size: 0x10, Type: StrProperty)
    std::uint8_t BallCoordsTracker[0x10]; // 0x04A8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate BallCoordsEvent; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString MediaStart; // 0x04C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t MediaStartTracker[0x20]; // 0x04D8 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate MediaStartEvent; // 0x04F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t MediaStop; // 0x0508 (Size: 0x4, Type: IntProperty)
    std::uint8_t MediaStopTracker[0x4]; // 0x050C (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate MediaStopEvent; // 0x0510 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t SeriesState; // 0x0520 (Size: 0x4, Type: IntProperty)
    std::uint8_t SeriesStateTracker[0x4]; // 0x0524 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate SeriesStateEvent; // 0x0528 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t MatchState; // 0x0538 (Size: 0x4, Type: IntProperty)
    std::uint8_t MatchStateTracker[0x4]; // 0x053C (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate MatchStateEvent; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t FinaleState; // 0x0550 (Size: 0x4, Type: IntProperty)
    std::uint8_t FinaleStateTracker[0x4]; // 0x0554 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate FinaleStateEvent; // 0x0558 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCreativeDataChannelTargetRL, VersionByte) == 688, "Offset mismatch for UCreativeDataChannelTargetRL::VersionByte");
static_assert(offsetof(UCreativeDataChannelTargetRL, VersionByteTracker) == 692, "Offset mismatch for UCreativeDataChannelTargetRL::VersionByteTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, VersionByteEvent) == 696, "Offset mismatch for UCreativeDataChannelTargetRL::VersionByteEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTeam) == 712, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTeam");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTeamTracker) == 720, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTeamTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTeamEvent) == 736, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTeamEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTotal) == 752, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTotal");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTotalTracker) == 768, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTotalTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreTotalEvent) == 784, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreTotalEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardTimeLeft) == 800, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardTimeLeft");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardTimeLeftTracker) == 808, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardTimeLeftTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardTimeLeftEvent) == 816, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardTimeLeftEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardBestOf) == 832, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardBestOf");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardBestOfTracker) == 848, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardBestOfTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, ScoreboardBestOfEvent) == 864, "Offset mismatch for UCreativeDataChannelTargetRL::ScoreboardBestOfEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, Overtime) == 880, "Offset mismatch for UCreativeDataChannelTargetRL::Overtime");
static_assert(offsetof(UCreativeDataChannelTargetRL, OvertimeTracker) == 884, "Offset mismatch for UCreativeDataChannelTargetRL::OvertimeTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, OvertimeEvent) == 888, "Offset mismatch for UCreativeDataChannelTargetRL::OvertimeEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, TeamNames) == 904, "Offset mismatch for UCreativeDataChannelTargetRL::TeamNames");
static_assert(offsetof(UCreativeDataChannelTargetRL, TeamNamesTracker) == 920, "Offset mismatch for UCreativeDataChannelTargetRL::TeamNamesTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, TeamNamesEvent) == 944, "Offset mismatch for UCreativeDataChannelTargetRL::TeamNamesEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerNames) == 960, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerNames");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerNamesTracker) == 976, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerNamesTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerNamesEvent) == 1000, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerNamesEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoost) == 1016, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoost");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoostTracker) == 1032, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoostTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoostEvent) == 1048, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoostEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoostCollected) == 1064, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoostCollected");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoostCollectedTracker) == 1080, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoostCollectedTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerBoostCollectedEvent) == 1112, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerBoostCollectedEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerCoords) == 1128, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerCoords");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerCoordsTracker) == 1144, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerCoordsTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, PlayerCoordsEvent) == 1160, "Offset mismatch for UCreativeDataChannelTargetRL::PlayerCoordsEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, BallCoords) == 1176, "Offset mismatch for UCreativeDataChannelTargetRL::BallCoords");
static_assert(offsetof(UCreativeDataChannelTargetRL, BallCoordsTracker) == 1192, "Offset mismatch for UCreativeDataChannelTargetRL::BallCoordsTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, BallCoordsEvent) == 1208, "Offset mismatch for UCreativeDataChannelTargetRL::BallCoordsEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStart) == 1224, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStart");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStartTracker) == 1240, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStartTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStartEvent) == 1272, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStartEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStop) == 1288, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStop");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStopTracker) == 1292, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStopTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, MediaStopEvent) == 1296, "Offset mismatch for UCreativeDataChannelTargetRL::MediaStopEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, SeriesState) == 1312, "Offset mismatch for UCreativeDataChannelTargetRL::SeriesState");
static_assert(offsetof(UCreativeDataChannelTargetRL, SeriesStateTracker) == 1316, "Offset mismatch for UCreativeDataChannelTargetRL::SeriesStateTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, SeriesStateEvent) == 1320, "Offset mismatch for UCreativeDataChannelTargetRL::SeriesStateEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, MatchState) == 1336, "Offset mismatch for UCreativeDataChannelTargetRL::MatchState");
static_assert(offsetof(UCreativeDataChannelTargetRL, MatchStateTracker) == 1340, "Offset mismatch for UCreativeDataChannelTargetRL::MatchStateTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, MatchStateEvent) == 1344, "Offset mismatch for UCreativeDataChannelTargetRL::MatchStateEvent");
static_assert(offsetof(UCreativeDataChannelTargetRL, FinaleState) == 1360, "Offset mismatch for UCreativeDataChannelTargetRL::FinaleState");
static_assert(offsetof(UCreativeDataChannelTargetRL, FinaleStateTracker) == 1364, "Offset mismatch for UCreativeDataChannelTargetRL::FinaleStateTracker");
static_assert(offsetof(UCreativeDataChannelTargetRL, FinaleStateEvent) == 1368, "Offset mismatch for UCreativeDataChannelTargetRL::FinaleStateEvent");

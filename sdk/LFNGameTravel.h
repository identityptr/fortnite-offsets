/**
 * decamp dumper generated SDK
 * Package: /Script/LFNGameTravel
 */
#pragma once
#include "Basic.h"

// /Script/LFNGameTravel.GameTravelEvent_RequestHideTravelInitiator
// Kind: ScriptStruct; super: none
struct FGameTravelEvent_RequestHideTravelInitiator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNGameTravel.GameTravelEvent_RequestShowTravelInitiator
// Kind: ScriptStruct; super: none
struct FGameTravelEvent_RequestShowTravelInitiator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNGameTravel.GameTravelEvent_ServerTravelInfoChange
// Kind: ScriptStruct; super: none
struct FGameTravelEvent_ServerTravelInfoChange
{
public:
    std::uint8_t CurrentGameTravelInfo[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FGameTravelEvent_ServerTravelInfoChange, CurrentGameTravelInfo) == 0, "Offset mismatch for FGameTravelEvent_ServerTravelInfoChange::CurrentGameTravelInfo");
static_assert(offsetof(FGameTravelEvent_ServerTravelInfoChange, PlayerController) == 48, "Offset mismatch for FGameTravelEvent_ServerTravelInfoChange::PlayerController");

// /Script/LFNGameTravel.GameTravelEvent_TravelInfoChange
// Kind: ScriptStruct; super: none
struct FGameTravelEvent_TravelInfoChange
{
public:
    std::uint8_t CurrentGameTravelInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameTravelEvent_TravelInfoChange, CurrentGameTravelInfo) == 0, "Offset mismatch for FGameTravelEvent_TravelInfoChange::CurrentGameTravelInfo");

// /Script/LFNGameTravel.LFNGameTravelInfo
// Kind: ScriptStruct; super: none
struct FLFNGameTravelInfo
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DestinationLinkId[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t LaunchTimeUtc[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t ReadyUpDeadlineTimeUtc[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLFNGameTravelInfo, Status) == 0, "Offset mismatch for FLFNGameTravelInfo::Status");
static_assert(offsetof(FLFNGameTravelInfo, DestinationLinkId) == 8, "Offset mismatch for FLFNGameTravelInfo::DestinationLinkId");
static_assert(offsetof(FLFNGameTravelInfo, LaunchTimeUtc) == 32, "Offset mismatch for FLFNGameTravelInfo::LaunchTimeUtc");
static_assert(offsetof(FLFNGameTravelInfo, ReadyUpDeadlineTimeUtc) == 40, "Offset mismatch for FLFNGameTravelInfo::ReadyUpDeadlineTimeUtc");

// /Script/LFNGameTravel.LFNGameTravelPlaylistData
// Kind: ScriptStruct; super: TableRowBase
struct FLFNGameTravelPlaylistData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName DestinationPlaylistName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLFNGameTravelPlaylistData, DestinationPlaylistName) == 8, "Offset mismatch for FLFNGameTravelPlaylistData::DestinationPlaylistName");

// /Script/LFNGameTravel.LFNControllerComponent_GameTravel
// Kind: Class; super: ControllerComponent
class ULFNControllerComponent_GameTravel
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentGameTravelInfo[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNControllerComponent_GameTravel, CurrentGameTravelInfo) == 192, "Offset mismatch for ULFNControllerComponent_GameTravel::CurrentGameTravelInfo");

/**
 * decamp dumper generated SDK
 * Package: /Script/FortPlaylistTravelRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelEvent_DownloadInfoChanged
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelEvent_DownloadInfoChanged
{
public:
    std::uint8_t bIsDownloadingDestination; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortPlaylistTravelEvent_DownloadInfoChanged, bIsDownloadingDestination) == 0, "Offset mismatch for FFortPlaylistTravelEvent_DownloadInfoChanged::bIsDownloadingDestination");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelEvent_RequestHideTravelInitiator
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelEvent_RequestHideTravelInitiator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelEvent_RequestShowTravelInitiator
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelEvent_RequestShowTravelInitiator
{
public:
    std::uint8_t InitiatorOptions[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortPlaylistTravelEvent_RequestShowTravelInitiator, InitiatorOptions) == 0, "Offset mismatch for FFortPlaylistTravelEvent_RequestShowTravelInitiator::InitiatorOptions");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelEvent_ServerTravelInfoChange
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelEvent_ServerTravelInfoChange
{
public:
    std::uint8_t CurrentGameTravelInfo[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortPlaylistTravelEvent_ServerTravelInfoChange, CurrentGameTravelInfo) == 0, "Offset mismatch for FFortPlaylistTravelEvent_ServerTravelInfoChange::CurrentGameTravelInfo");
static_assert(offsetof(FFortPlaylistTravelEvent_ServerTravelInfoChange, PlayerController) == 128, "Offset mismatch for FFortPlaylistTravelEvent_ServerTravelInfoChange::PlayerController");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelEvent_TravelInfoChange
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelEvent_TravelInfoChange
{
public:
    std::uint8_t CurrentGameTravelInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortPlaylistTravelEvent_TravelInfoChange, CurrentGameTravelInfo) == 0, "Offset mismatch for FFortPlaylistTravelEvent_TravelInfoChange::CurrentGameTravelInfo");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelInfo
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelInfo
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DestinationLinkId[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedDestinationTag[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t LaunchTimeUtc[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t ReadyUpDeadlineTimeUtc[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t TravelInitiatorId[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ProductModes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TravelGroupSetting; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrivacyOverride; // 0x0079 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortPlaylistTravelInfo, Status) == 0, "Offset mismatch for FFortPlaylistTravelInfo::Status");
static_assert(offsetof(FFortPlaylistTravelInfo, DestinationLinkId) == 8, "Offset mismatch for FFortPlaylistTravelInfo::DestinationLinkId");
static_assert(offsetof(FFortPlaylistTravelInfo, SelectedDestinationTag) == 32, "Offset mismatch for FFortPlaylistTravelInfo::SelectedDestinationTag");
static_assert(offsetof(FFortPlaylistTravelInfo, LaunchTimeUtc) == 40, "Offset mismatch for FFortPlaylistTravelInfo::LaunchTimeUtc");
static_assert(offsetof(FFortPlaylistTravelInfo, ReadyUpDeadlineTimeUtc) == 48, "Offset mismatch for FFortPlaylistTravelInfo::ReadyUpDeadlineTimeUtc");
static_assert(offsetof(FFortPlaylistTravelInfo, TravelInitiatorId) == 56, "Offset mismatch for FFortPlaylistTravelInfo::TravelInitiatorId");
static_assert(offsetof(FFortPlaylistTravelInfo, ProductModes) == 104, "Offset mismatch for FFortPlaylistTravelInfo::ProductModes");
static_assert(offsetof(FFortPlaylistTravelInfo, TravelGroupSetting) == 120, "Offset mismatch for FFortPlaylistTravelInfo::TravelGroupSetting");
static_assert(offsetof(FFortPlaylistTravelInfo, PrivacyOverride) == 121, "Offset mismatch for FFortPlaylistTravelInfo::PrivacyOverride");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelPlaylistData
// Kind: ScriptStruct; super: TableRowBase
struct FFortPlaylistTravelPlaylistData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName DestinationPlaylistName; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString DestinationProductMode; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t PrivacyOverride; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortPlaylistTravelPlaylistData, DestinationPlaylistName) == 8, "Offset mismatch for FFortPlaylistTravelPlaylistData::DestinationPlaylistName");
static_assert(offsetof(FFortPlaylistTravelPlaylistData, DestinationProductMode) == 16, "Offset mismatch for FFortPlaylistTravelPlaylistData::DestinationProductMode");
static_assert(offsetof(FFortPlaylistTravelPlaylistData, PrivacyOverride) == 32, "Offset mismatch for FFortPlaylistTravelPlaylistData::PrivacyOverride");

// /Script/FortPlaylistTravelRuntime.FortTravelInitiatorOptions
// Kind: ScriptStruct; super: none
struct FFortTravelInitiatorOptions
{
public:
    TArray<void*> Destinations; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSkipToast; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TravelGroupSetting; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    float PrepTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortTravelInitiatorOptions, Destinations) == 0, "Offset mismatch for FFortTravelInitiatorOptions::Destinations");
static_assert(offsetof(FFortTravelInitiatorOptions, bShouldSkipToast) == 16, "Offset mismatch for FFortTravelInitiatorOptions::bShouldSkipToast");
static_assert(offsetof(FFortTravelInitiatorOptions, TravelGroupSetting) == 17, "Offset mismatch for FFortTravelInitiatorOptions::TravelGroupSetting");
static_assert(offsetof(FFortTravelInitiatorOptions, PrepTime) == 20, "Offset mismatch for FFortTravelInitiatorOptions::PrepTime");

// /Script/FortPlaylistTravelRuntime.FortTravelPlaylistData
// Kind: ScriptStruct; super: none
struct FFortTravelPlaylistData
{
public:
    std::uint8_t DestinationTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString DestinationPlaylistName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString DestinationProductMode; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t PrivacyOverride; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortTravelPlaylistData, DestinationTag) == 0, "Offset mismatch for FFortTravelPlaylistData::DestinationTag");
static_assert(offsetof(FFortTravelPlaylistData, DestinationPlaylistName) == 8, "Offset mismatch for FFortTravelPlaylistData::DestinationPlaylistName");
static_assert(offsetof(FFortTravelPlaylistData, DestinationProductMode) == 24, "Offset mismatch for FFortTravelPlaylistData::DestinationProductMode");
static_assert(offsetof(FFortTravelPlaylistData, PrivacyOverride) == 40, "Offset mismatch for FFortTravelPlaylistData::PrivacyOverride");

// /Script/FortPlaylistTravelRuntime.FortControllerComponent_PlaylistTravel
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_PlaylistTravel
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentGameTravelInfo[0xA8]; // 0x00C0 (Size: 0xA8, Type: StructProperty)
    void* SquadTravelInputIMC; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SquadTravelInputPriority[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    void* SquadTravelOptOutInputAction; // 0x0198 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_PlaylistTravel, CurrentGameTravelInfo) == 192, "Offset mismatch for UFortControllerComponent_PlaylistTravel::CurrentGameTravelInfo");
static_assert(offsetof(UFortControllerComponent_PlaylistTravel, SquadTravelInputIMC) == 360, "Offset mismatch for UFortControllerComponent_PlaylistTravel::SquadTravelInputIMC");
static_assert(offsetof(UFortControllerComponent_PlaylistTravel, SquadTravelInputPriority) == 368, "Offset mismatch for UFortControllerComponent_PlaylistTravel::SquadTravelInputPriority");
static_assert(offsetof(UFortControllerComponent_PlaylistTravel, SquadTravelOptOutInputAction) == 408, "Offset mismatch for UFortControllerComponent_PlaylistTravel::SquadTravelOptOutInputAction");

// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelCheatManager
// Kind: Class; super: ChildCheatManager
class UFortPlaylistTravelCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortPlaylistTravelRuntime.FortPlaylistTravelFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortPlaylistTravelFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};

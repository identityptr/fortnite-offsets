/**
 * decamp dumper generated SDK
 * Package: /Script/JunoMissionBaseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoMissionBaseRuntime.GetJunoObjectiveDataStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetJunoObjectiveDataStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetJunoObjectiveDataStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetJunoObjectiveDataStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetJunoObjectiveDataStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetJunoObjectiveDataStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetJunoObjectiveDataStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetJunoObjectiveDataStateTreeTask::TransitionHandlingPriority");

// /Script/JunoMissionBaseRuntime.GetJunoObjectiveDataStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetJunoObjectiveDataStateTreeTaskInstanceData
{
public:
    std::uint8_t ObjectiveIdentifierTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t ObjectiveDefinition[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetJunoObjectiveDataStateTreeTaskInstanceData, ObjectiveIdentifierTags) == 0, "Offset mismatch for FGetJunoObjectiveDataStateTreeTaskInstanceData::ObjectiveIdentifierTags");
static_assert(offsetof(FGetJunoObjectiveDataStateTreeTaskInstanceData, ObjectiveDefinition) == 32, "Offset mismatch for FGetJunoObjectiveDataStateTreeTaskInstanceData::ObjectiveDefinition");
static_assert(offsetof(FGetJunoObjectiveDataStateTreeTaskInstanceData, UserActor) == 64, "Offset mismatch for FGetJunoObjectiveDataStateTreeTaskInstanceData::UserActor");

// /Script/JunoMissionBaseRuntime.JunoActiveMissionLocationInfo
// Kind: ScriptStruct; super: none
struct FJunoActiveMissionLocationInfo
{
public:
    std::uint8_t ReleaseVersion[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionLocationTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Difficulty[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoActiveMissionLocationInfo, ReleaseVersion) == 0, "Offset mismatch for FJunoActiveMissionLocationInfo::ReleaseVersion");
static_assert(offsetof(FJunoActiveMissionLocationInfo, MissionLocationTag) == 4, "Offset mismatch for FJunoActiveMissionLocationInfo::MissionLocationTag");
static_assert(offsetof(FJunoActiveMissionLocationInfo, MissionName) == 8, "Offset mismatch for FJunoActiveMissionLocationInfo::MissionName");
static_assert(offsetof(FJunoActiveMissionLocationInfo, Difficulty) == 12, "Offset mismatch for FJunoActiveMissionLocationInfo::Difficulty");

// /Script/JunoMissionBaseRuntime.JunoMissionData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMissionData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MissionDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> MissionVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ObjectiveData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataLayers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RandomDataLayers; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlayerSpawnTag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t StartDelay[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t CompletionTime[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeOfDay[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Weather[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMissionData, MissionDefinition) == 8, "Offset mismatch for FJunoMissionData::MissionDefinition");
static_assert(offsetof(FJunoMissionData, MissionVariables) == 40, "Offset mismatch for FJunoMissionData::MissionVariables");
static_assert(offsetof(FJunoMissionData, ObjectiveData) == 56, "Offset mismatch for FJunoMissionData::ObjectiveData");
static_assert(offsetof(FJunoMissionData, DataLayers) == 72, "Offset mismatch for FJunoMissionData::DataLayers");
static_assert(offsetof(FJunoMissionData, RandomDataLayers) == 88, "Offset mismatch for FJunoMissionData::RandomDataLayers");
static_assert(offsetof(FJunoMissionData, PlayerSpawnTag) == 104, "Offset mismatch for FJunoMissionData::PlayerSpawnTag");
static_assert(offsetof(FJunoMissionData, StartDelay) == 112, "Offset mismatch for FJunoMissionData::StartDelay");
static_assert(offsetof(FJunoMissionData, CompletionTime) == 152, "Offset mismatch for FJunoMissionData::CompletionTime");
static_assert(offsetof(FJunoMissionData, TimeOfDay) == 192, "Offset mismatch for FJunoMissionData::TimeOfDay");
static_assert(offsetof(FJunoMissionData, Weather) == 232, "Offset mismatch for FJunoMissionData::Weather");

// /Script/JunoMissionBaseRuntime.JunoMissionInfo
// Kind: ScriptStruct; super: none
struct FJunoMissionInfo
{
public:
    std::uint8_t MissionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t MissionGUID[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    float MissionStartTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MissionElapsedTimeAtEnd; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MissionEndTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MetaData[0x78]; // 0x0020 (Size: 0x78, Type: StructProperty)
    std::uint8_t Data[0xF0]; // 0x0098 (Size: 0xF0, Type: StructProperty)
    TWeakObjectPtr<void> MissionPrefab; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoMissionInfo, MissionName) == 0, "Offset mismatch for FJunoMissionInfo::MissionName");
static_assert(offsetof(FJunoMissionInfo, MissionGUID) == 4, "Offset mismatch for FJunoMissionInfo::MissionGUID");
static_assert(offsetof(FJunoMissionInfo, MissionStartTime) == 20, "Offset mismatch for FJunoMissionInfo::MissionStartTime");
static_assert(offsetof(FJunoMissionInfo, MissionElapsedTimeAtEnd) == 24, "Offset mismatch for FJunoMissionInfo::MissionElapsedTimeAtEnd");
static_assert(offsetof(FJunoMissionInfo, MissionEndTime) == 28, "Offset mismatch for FJunoMissionInfo::MissionEndTime");
static_assert(offsetof(FJunoMissionInfo, MetaData) == 32, "Offset mismatch for FJunoMissionInfo::MetaData");
static_assert(offsetof(FJunoMissionInfo, Data) == 152, "Offset mismatch for FJunoMissionInfo::Data");
static_assert(offsetof(FJunoMissionInfo, MissionPrefab) == 392, "Offset mismatch for FJunoMissionInfo::MissionPrefab");

// /Script/JunoMissionBaseRuntime.JunoMissionLocations
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMissionLocations
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t ReleaseVersion[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionLocationTag[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t LocationName[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t LocationDescription[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowRolling; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0059
    TArray<void*> Missions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoMissionLocations, bEnabled) == 8, "Offset mismatch for FJunoMissionLocations::bEnabled");
static_assert(offsetof(FJunoMissionLocations, ReleaseVersion) == 12, "Offset mismatch for FJunoMissionLocations::ReleaseVersion");
static_assert(offsetof(FJunoMissionLocations, MissionLocationTag) == 16, "Offset mismatch for FJunoMissionLocations::MissionLocationTag");
static_assert(offsetof(FJunoMissionLocations, LocationName) == 24, "Offset mismatch for FJunoMissionLocations::LocationName");
static_assert(offsetof(FJunoMissionLocations, LocationDescription) == 40, "Offset mismatch for FJunoMissionLocations::LocationDescription");
static_assert(offsetof(FJunoMissionLocations, DisplayIcon) == 56, "Offset mismatch for FJunoMissionLocations::DisplayIcon");
static_assert(offsetof(FJunoMissionLocations, bAllowRolling) == 88, "Offset mismatch for FJunoMissionLocations::bAllowRolling");
static_assert(offsetof(FJunoMissionLocations, Missions) == 96, "Offset mismatch for FJunoMissionLocations::Missions");

// /Script/JunoMissionBaseRuntime.JunoMissionMetadata
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMissionMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t ReleaseVersion[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t Name[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t CompletionTextSuccess[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t CompletionTextFailure[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t MissionType[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t Difficulty[0x4]; // 0x0054 (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionTags[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMissionMetadata, bEnabled) == 8, "Offset mismatch for FJunoMissionMetadata::bEnabled");
static_assert(offsetof(FJunoMissionMetadata, ReleaseVersion) == 12, "Offset mismatch for FJunoMissionMetadata::ReleaseVersion");
static_assert(offsetof(FJunoMissionMetadata, Name) == 16, "Offset mismatch for FJunoMissionMetadata::Name");
static_assert(offsetof(FJunoMissionMetadata, Description) == 32, "Offset mismatch for FJunoMissionMetadata::Description");
static_assert(offsetof(FJunoMissionMetadata, CompletionTextSuccess) == 48, "Offset mismatch for FJunoMissionMetadata::CompletionTextSuccess");
static_assert(offsetof(FJunoMissionMetadata, CompletionTextFailure) == 64, "Offset mismatch for FJunoMissionMetadata::CompletionTextFailure");
static_assert(offsetof(FJunoMissionMetadata, MissionType) == 80, "Offset mismatch for FJunoMissionMetadata::MissionType");
static_assert(offsetof(FJunoMissionMetadata, Difficulty) == 84, "Offset mismatch for FJunoMissionMetadata::Difficulty");
static_assert(offsetof(FJunoMissionMetadata, MissionTags) == 88, "Offset mismatch for FJunoMissionMetadata::MissionTags");

// /Script/JunoMissionBaseRuntime.JunoMissionTypeMetadata
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMissionTypeMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> DisplayIcon; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoMissionTypeMetadata, DisplayIcon) == 8, "Offset mismatch for FJunoMissionTypeMetadata::DisplayIcon");

// /Script/JunoMissionBaseRuntime.JunoObjectiveData
// Kind: ScriptStruct; super: none
struct FJunoObjectiveData
{
public:
    std::uint8_t MetaData[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t ObjectiveIdentifierTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t ScenarioDefinition[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> FixedVariables; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VariableCollection[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    TArray<void*> VariableSelection; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataLayers; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MissionDataLayers; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoObjectiveData, MetaData) == 0, "Offset mismatch for FJunoObjectiveData::MetaData");
static_assert(offsetof(FJunoObjectiveData, ObjectiveIdentifierTags) == 56, "Offset mismatch for FJunoObjectiveData::ObjectiveIdentifierTags");
static_assert(offsetof(FJunoObjectiveData, ScenarioDefinition) == 88, "Offset mismatch for FJunoObjectiveData::ScenarioDefinition");
static_assert(offsetof(FJunoObjectiveData, FixedVariables) == 120, "Offset mismatch for FJunoObjectiveData::FixedVariables");
static_assert(offsetof(FJunoObjectiveData, VariableCollection) == 136, "Offset mismatch for FJunoObjectiveData::VariableCollection");
static_assert(offsetof(FJunoObjectiveData, VariableSelection) == 152, "Offset mismatch for FJunoObjectiveData::VariableSelection");
static_assert(offsetof(FJunoObjectiveData, DataLayers) == 168, "Offset mismatch for FJunoObjectiveData::DataLayers");
static_assert(offsetof(FJunoObjectiveData, MissionDataLayers) == 184, "Offset mismatch for FJunoObjectiveData::MissionDataLayers");

// /Script/JunoMissionBaseRuntime.JunoObjectiveInfo
// Kind: ScriptStruct; super: none
struct FJunoObjectiveInfo
{
public:
    std::uint8_t ObjectiveIdentifierTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> ObjectivePrefab; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoObjectiveInfo, ObjectiveIdentifierTags) == 0, "Offset mismatch for FJunoObjectiveInfo::ObjectiveIdentifierTags");
static_assert(offsetof(FJunoObjectiveInfo, ObjectivePrefab) == 32, "Offset mismatch for FJunoObjectiveInfo::ObjectivePrefab");

// /Script/JunoMissionBaseRuntime.JunoObjectiveMetadata
// Kind: ScriptStruct; super: none
struct FJunoObjectiveMetadata
{
public:
    std::uint8_t Title[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Type[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoObjectiveMetadata, Title) == 0, "Offset mismatch for FJunoObjectiveMetadata::Title");
static_assert(offsetof(FJunoObjectiveMetadata, ShortDescription) == 16, "Offset mismatch for FJunoObjectiveMetadata::ShortDescription");
static_assert(offsetof(FJunoObjectiveMetadata, FlavorText) == 32, "Offset mismatch for FJunoObjectiveMetadata::FlavorText");
static_assert(offsetof(FJunoObjectiveMetadata, Type) == 48, "Offset mismatch for FJunoObjectiveMetadata::Type");

// /Script/JunoMissionBaseRuntime.JunoPlayerMissionInfo
// Kind: ScriptStruct; super: none
struct FJunoPlayerMissionInfo
{
public:
    std::uint8_t PlayerID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::int32_t DeathCount; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerMissionInfo, PlayerID) == 0, "Offset mismatch for FJunoPlayerMissionInfo::PlayerID");
static_assert(offsetof(FJunoPlayerMissionInfo, DeathCount) == 48, "Offset mismatch for FJunoPlayerMissionInfo::DeathCount");

// /Script/JunoMissionBaseRuntime.JunoPlayerMissionTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoPlayerMissionTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.JunoPlayerObjectiveTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoPlayerObjectiveTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.JunoVerbFilter_MissionUpdated
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_MissionUpdated
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t CurrentMission[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t UpdateState; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SuccessState; // 0x00E9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoVerbFilter_MissionUpdated, CurrentMission) == 160, "Offset mismatch for FJunoVerbFilter_MissionUpdated::CurrentMission");
static_assert(offsetof(FJunoVerbFilter_MissionUpdated, UpdateState) == 232, "Offset mismatch for FJunoVerbFilter_MissionUpdated::UpdateState");
static_assert(offsetof(FJunoVerbFilter_MissionUpdated, SuccessState) == 233, "Offset mismatch for FJunoVerbFilter_MissionUpdated::SuccessState");

// /Script/JunoMissionBaseRuntime.JunoVerbMessage_MissionUpdated
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_MissionUpdated
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CurrentMission[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t UpdateState; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSuccess; // 0x00B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoVerbMessage_MissionUpdated, CurrentMission) == 120, "Offset mismatch for FJunoVerbMessage_MissionUpdated::CurrentMission");
static_assert(offsetof(FJunoVerbMessage_MissionUpdated, UpdateState) == 176, "Offset mismatch for FJunoVerbMessage_MissionUpdated::UpdateState");
static_assert(offsetof(FJunoVerbMessage_MissionUpdated, bSuccess) == 177, "Offset mismatch for FJunoVerbMessage_MissionUpdated::bSuccess");

// /Script/JunoMissionBaseRuntime.LoadJunoObjectiveStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLoadJunoObjectiveStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLoadJunoObjectiveStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLoadJunoObjectiveStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLoadJunoObjectiveStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLoadJunoObjectiveStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLoadJunoObjectiveStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLoadJunoObjectiveStateTreeTask::TransitionHandlingPriority");

// /Script/JunoMissionBaseRuntime.LoadJunoObjectiveStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLoadJunoObjectiveStateTreeTaskInstanceData
{
public:
    std::uint8_t ObjectiveInfo[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLoadJunoObjectiveStateTreeTaskInstanceData, ObjectiveInfo) == 0, "Offset mismatch for FLoadJunoObjectiveStateTreeTaskInstanceData::ObjectiveInfo");
static_assert(offsetof(FLoadJunoObjectiveStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FLoadJunoObjectiveStateTreeTaskInstanceData::UserActor");

// /Script/JunoMissionBaseRuntime.ObjectiveVariables
// Kind: ScriptStruct; super: none
struct FObjectiveVariables
{
public:
    std::uint8_t ObjectiveIdentifierTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TArray<void*> Variables; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FObjectiveVariables, ObjectiveIdentifierTags) == 0, "Offset mismatch for FObjectiveVariables::ObjectiveIdentifierTags");
static_assert(offsetof(FObjectiveVariables, Variables) == 32, "Offset mismatch for FObjectiveVariables::Variables");

// /Script/JunoMissionBaseRuntime.OnJunoMissionEnded
// Kind: ScriptStruct; super: none
struct FOnJunoMissionEnded
{
public:
    std::uint8_t Reason; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t MissionInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOnJunoMissionEnded, Reason) == 0, "Offset mismatch for FOnJunoMissionEnded::Reason");
static_assert(offsetof(FOnJunoMissionEnded, MissionInfo) == 8, "Offset mismatch for FOnJunoMissionEnded::MissionInfo");

// /Script/JunoMissionBaseRuntime.OnJunoMissionInfoUpdated
// Kind: ScriptStruct; super: none
struct FOnJunoMissionInfoUpdated
{
public:
    std::uint8_t MissionInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOnJunoMissionInfoUpdated, MissionInfo) == 0, "Offset mismatch for FOnJunoMissionInfoUpdated::MissionInfo");

// /Script/JunoMissionBaseRuntime.OnJunoMissionSelected
// Kind: ScriptStruct; super: none
struct FOnJunoMissionSelected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.OnJunoMissionSpawned
// Kind: ScriptStruct; super: none
struct FOnJunoMissionSpawned
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.OnJunoMissionStarted
// Kind: ScriptStruct; super: none
struct FOnJunoMissionStarted
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.OnJunoObjectiveEnded
// Kind: ScriptStruct; super: none
struct FOnJunoObjectiveEnded
{
public:
    std::uint8_t ObjectiveIdentifier[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t bWithSuccess; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    TWeakObjectPtr<void> CurrentObjective; // 0x0024 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOnJunoObjectiveEnded, ObjectiveIdentifier) == 0, "Offset mismatch for FOnJunoObjectiveEnded::ObjectiveIdentifier");
static_assert(offsetof(FOnJunoObjectiveEnded, bWithSuccess) == 32, "Offset mismatch for FOnJunoObjectiveEnded::bWithSuccess");
static_assert(offsetof(FOnJunoObjectiveEnded, CurrentObjective) == 36, "Offset mismatch for FOnJunoObjectiveEnded::CurrentObjective");

// /Script/JunoMissionBaseRuntime.OnJunoObjectiveSpawned
// Kind: ScriptStruct; super: none
struct FOnJunoObjectiveSpawned
{
public:
    TWeakObjectPtr<void> CurrentObjective; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOnJunoObjectiveSpawned, CurrentObjective) == 0, "Offset mismatch for FOnJunoObjectiveSpawned::CurrentObjective");

// /Script/JunoMissionBaseRuntime.OnJunoObjectiveStarted
// Kind: ScriptStruct; super: none
struct FOnJunoObjectiveStarted
{
public:
    TWeakObjectPtr<void> CurrentObjective; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOnJunoObjectiveStarted, CurrentObjective) == 0, "Offset mismatch for FOnJunoObjectiveStarted::CurrentObjective");

// /Script/JunoMissionBaseRuntime.SetJunoObjectiveInfoStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FSetJunoObjectiveInfoStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSetJunoObjectiveInfoStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FSetJunoObjectiveInfoStateTreeTask::bTaskEnabled");
static_assert(offsetof(FSetJunoObjectiveInfoStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FSetJunoObjectiveInfoStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FSetJunoObjectiveInfoStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FSetJunoObjectiveInfoStateTreeTask::TransitionHandlingPriority");

// /Script/JunoMissionBaseRuntime.SetJunoObjectiveInfoStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSetJunoObjectiveInfoStateTreeTaskInstanceData
{
public:
    std::uint8_t ObjectiveInfo[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSetJunoObjectiveInfoStateTreeTaskInstanceData, ObjectiveInfo) == 0, "Offset mismatch for FSetJunoObjectiveInfoStateTreeTaskInstanceData::ObjectiveInfo");
static_assert(offsetof(FSetJunoObjectiveInfoStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FSetJunoObjectiveInfoStateTreeTaskInstanceData::UserActor");

// /Script/JunoMissionBaseRuntime.JunoMissionAnalytics
// Kind: Class; super: Object
class UJunoMissionAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.JunoMissionCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoMissionCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.JunoMissionFilteredEventContextCollector
// Kind: Class; super: FilteredEventContextCollectorBase
class UJunoMissionFilteredEventContextCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMissionBaseRuntime.JunoMissionManagerComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoMissionManagerComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t MissionDataRegistryType[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionMetadataRegistryType[0x4]; // 0x011C (Size: 0x4, Type: StructProperty)
    std::uint8_t MissionSpawnTag[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    void* MissionPrefabClass; // 0x0128 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaxMissionTime[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentMissionInfo[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMissionManagerComponent, MissionDataRegistryType) == 280, "Offset mismatch for UJunoMissionManagerComponent::MissionDataRegistryType");
static_assert(offsetof(UJunoMissionManagerComponent, MissionMetadataRegistryType) == 284, "Offset mismatch for UJunoMissionManagerComponent::MissionMetadataRegistryType");
static_assert(offsetof(UJunoMissionManagerComponent, MissionSpawnTag) == 288, "Offset mismatch for UJunoMissionManagerComponent::MissionSpawnTag");
static_assert(offsetof(UJunoMissionManagerComponent, MissionPrefabClass) == 296, "Offset mismatch for UJunoMissionManagerComponent::MissionPrefabClass");
static_assert(offsetof(UJunoMissionManagerComponent, MaxMissionTime) == 304, "Offset mismatch for UJunoMissionManagerComponent::MaxMissionTime");
static_assert(offsetof(UJunoMissionManagerComponent, CurrentMissionInfo) == 344, "Offset mismatch for UJunoMissionManagerComponent::CurrentMissionInfo");

// /Script/JunoMissionBaseRuntime.JunoMissionPlayerControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoMissionPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoMissionPlayerControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoMissionPlayerControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoMissionPlayerControllerComponent::ComponentTags");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoMissionPlayerControllerComponent::AssetUserData");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoMissionPlayerControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoMissionPlayerControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoMissionPlayerControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoMissionPlayerControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoMissionPlayerControllerComponent::CreationMethod");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoMissionPlayerControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoMissionPlayerControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoMissionPlayerControllerComponent::OnComponentDeactivated");

// /Script/JunoMissionBaseRuntime.JunoMissionPrefab
// Kind: Class; super: LivingWorldEncounterPrefab
class UJunoMissionPrefab
{
public:
    std::uint8_t Pad_0000[0xA68]; // 0x0000
    std::uint8_t MissionStatus; // 0x0A68 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0A69
    std::uint8_t MissionInfo[0x190]; // 0x0A70 (Size: 0x190, Type: StructProperty)
    std::uint8_t CurrentObjective[0x1]; // 0x0C00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMissionPrefab, MissionStatus) == 2664, "Offset mismatch for UJunoMissionPrefab::MissionStatus");
static_assert(offsetof(UJunoMissionPrefab, MissionInfo) == 2672, "Offset mismatch for UJunoMissionPrefab::MissionInfo");
static_assert(offsetof(UJunoMissionPrefab, CurrentObjective) == 3072, "Offset mismatch for UJunoMissionPrefab::CurrentObjective");

// /Script/JunoMissionBaseRuntime.JunoObjectivePrefab
// Kind: Class; super: LivingWorldEncounterPrefab
class UJunoObjectivePrefab
{
public:
    std::uint8_t Pad_0000[0xA68]; // 0x0000
    std::uint8_t ObjectiveStatus; // 0x0A68 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoObjectivePrefab, ObjectiveStatus) == 2664, "Offset mismatch for UJunoObjectivePrefab::ObjectiveStatus");

// /Script/JunoMissionBaseRuntime.JunoVerbProcessor_MissionUpdated
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_MissionUpdated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_MissionUpdated, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_MissionUpdated::OwningProcessorSubsystem");

/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamSessionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamSessionRuntime.ExternalSlotFillerConfig
// Kind: ScriptStruct; super: none
struct FExternalSlotFillerConfig
{
public:
    TArray<void*> FillParams; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FillPriority; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t QuantizationMethod; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FillPermission; // 0x0012 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FExternalSlotFillerConfig, FillParams) == 0, "Offset mismatch for FExternalSlotFillerConfig::FillParams");
static_assert(offsetof(FExternalSlotFillerConfig, FillPriority) == 16, "Offset mismatch for FExternalSlotFillerConfig::FillPriority");
static_assert(offsetof(FExternalSlotFillerConfig, QuantizationMethod) == 17, "Offset mismatch for FExternalSlotFillerConfig::QuantizationMethod");
static_assert(offsetof(FExternalSlotFillerConfig, FillPermission) == 18, "Offset mismatch for FExternalSlotFillerConfig::FillPermission");

// /Script/FMJamSessionRuntime.JamEvent_JamLoopBase
// Kind: ScriptStruct; super: none
struct FJamEvent_JamLoopBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* CatalogEntry; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t PlayerNetId[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::int32_t LoopInstanceId; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAutoJammer; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChangedLoop; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0056
    std::uint8_t SlotParams[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJamEvent_JamLoopBase, SongShortName) == 8, "Offset mismatch for FJamEvent_JamLoopBase::SongShortName");
static_assert(offsetof(FJamEvent_JamLoopBase, CatalogEntry) == 16, "Offset mismatch for FJamEvent_JamLoopBase::CatalogEntry");
static_assert(offsetof(FJamEvent_JamLoopBase, LoopType) == 24, "Offset mismatch for FJamEvent_JamLoopBase::LoopType");
static_assert(offsetof(FJamEvent_JamLoopBase, PlayerNetId) == 32, "Offset mismatch for FJamEvent_JamLoopBase::PlayerNetId");
static_assert(offsetof(FJamEvent_JamLoopBase, LoopInstanceId) == 80, "Offset mismatch for FJamEvent_JamLoopBase::LoopInstanceId");
static_assert(offsetof(FJamEvent_JamLoopBase, bIsAutoJammer) == 84, "Offset mismatch for FJamEvent_JamLoopBase::bIsAutoJammer");
static_assert(offsetof(FJamEvent_JamLoopBase, bChangedLoop) == 85, "Offset mismatch for FJamEvent_JamLoopBase::bChangedLoop");
static_assert(offsetof(FJamEvent_JamLoopBase, SlotParams) == 88, "Offset mismatch for FJamEvent_JamLoopBase::SlotParams");

// /Script/FMJamSessionRuntime.JamEvent_JamLoopStarted
// Kind: ScriptStruct; super: JamEvent_JamLoopBase
struct FJamEvent_JamLoopStarted
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* CatalogEntry; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t PlayerNetId[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::int32_t LoopInstanceId; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAutoJammer; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChangedLoop; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0056
    std::uint8_t SlotParams[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJamEvent_JamLoopStarted, SongShortName) == 8, "Offset mismatch for FJamEvent_JamLoopStarted::SongShortName");
static_assert(offsetof(FJamEvent_JamLoopStarted, CatalogEntry) == 16, "Offset mismatch for FJamEvent_JamLoopStarted::CatalogEntry");
static_assert(offsetof(FJamEvent_JamLoopStarted, LoopType) == 24, "Offset mismatch for FJamEvent_JamLoopStarted::LoopType");
static_assert(offsetof(FJamEvent_JamLoopStarted, PlayerNetId) == 32, "Offset mismatch for FJamEvent_JamLoopStarted::PlayerNetId");
static_assert(offsetof(FJamEvent_JamLoopStarted, LoopInstanceId) == 80, "Offset mismatch for FJamEvent_JamLoopStarted::LoopInstanceId");
static_assert(offsetof(FJamEvent_JamLoopStarted, bIsAutoJammer) == 84, "Offset mismatch for FJamEvent_JamLoopStarted::bIsAutoJammer");
static_assert(offsetof(FJamEvent_JamLoopStarted, bChangedLoop) == 85, "Offset mismatch for FJamEvent_JamLoopStarted::bChangedLoop");
static_assert(offsetof(FJamEvent_JamLoopStarted, SlotParams) == 88, "Offset mismatch for FJamEvent_JamLoopStarted::SlotParams");

// /Script/FMJamSessionRuntime.JamEvent_JamLoopStopped
// Kind: ScriptStruct; super: JamEvent_JamLoopBase
struct FJamEvent_JamLoopStopped
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* CatalogEntry; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t PlayerNetId[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::int32_t LoopInstanceId; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAutoJammer; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChangedLoop; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0056
    std::uint8_t SlotParams[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJamEvent_JamLoopStopped, SongShortName) == 8, "Offset mismatch for FJamEvent_JamLoopStopped::SongShortName");
static_assert(offsetof(FJamEvent_JamLoopStopped, CatalogEntry) == 16, "Offset mismatch for FJamEvent_JamLoopStopped::CatalogEntry");
static_assert(offsetof(FJamEvent_JamLoopStopped, LoopType) == 24, "Offset mismatch for FJamEvent_JamLoopStopped::LoopType");
static_assert(offsetof(FJamEvent_JamLoopStopped, PlayerNetId) == 32, "Offset mismatch for FJamEvent_JamLoopStopped::PlayerNetId");
static_assert(offsetof(FJamEvent_JamLoopStopped, LoopInstanceId) == 80, "Offset mismatch for FJamEvent_JamLoopStopped::LoopInstanceId");
static_assert(offsetof(FJamEvent_JamLoopStopped, bIsAutoJammer) == 84, "Offset mismatch for FJamEvent_JamLoopStopped::bIsAutoJammer");
static_assert(offsetof(FJamEvent_JamLoopStopped, bChangedLoop) == 85, "Offset mismatch for FJamEvent_JamLoopStopped::bChangedLoop");
static_assert(offsetof(FJamEvent_JamLoopStopped, SlotParams) == 88, "Offset mismatch for FJamEvent_JamLoopStopped::SlotParams");

// /Script/FMJamSessionRuntime.JamEvent_LoopsChangedThisFrame
// Kind: ScriptStruct; super: none
struct FJamEvent_LoopsChangedThisFrame
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamEvent_MusicFXControlChange
// Kind: ScriptStruct; super: none
struct FJamEvent_MusicFXControlChange
{
public:
    std::int32_t SlotIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EffectIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t ParameterIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    float Value; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJamEvent_MusicFXControlChange, SlotIndex) == 0, "Offset mismatch for FJamEvent_MusicFXControlChange::SlotIndex");
static_assert(offsetof(FJamEvent_MusicFXControlChange, EffectIndex) == 4, "Offset mismatch for FJamEvent_MusicFXControlChange::EffectIndex");
static_assert(offsetof(FJamEvent_MusicFXControlChange, bEnabled) == 8, "Offset mismatch for FJamEvent_MusicFXControlChange::bEnabled");
static_assert(offsetof(FJamEvent_MusicFXControlChange, ParameterIndex) == 12, "Offset mismatch for FJamEvent_MusicFXControlChange::ParameterIndex");
static_assert(offsetof(FJamEvent_MusicFXControlChange, Value) == 16, "Offset mismatch for FJamEvent_MusicFXControlChange::Value");

// /Script/FMJamSessionRuntime.JamEvent_OnMidiEventDriverCreated
// Kind: ScriptStruct; super: none
struct FJamEvent_OnMidiEventDriverCreated
{
public:
    void* MidiEventDriver; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJamEvent_OnMidiEventDriverCreated, MidiEventDriver) == 0, "Offset mismatch for FJamEvent_OnMidiEventDriverCreated::MidiEventDriver");

// /Script/FMJamSessionRuntime.JamEvent_OnPrimaryPlayerPresenceChanged
// Kind: ScriptStruct; super: none
struct FJamEvent_OnPrimaryPlayerPresenceChanged
{
public:
    std::uint8_t bPrimaryPlayerInJamSession; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJamEvent_OnPrimaryPlayerPresenceChanged, bPrimaryPlayerInJamSession) == 0, "Offset mismatch for FJamEvent_OnPrimaryPlayerPresenceChanged::bPrimaryPlayerInJamSession");

// /Script/FMJamSessionRuntime.JamEvent_PrivacyChanged
// Kind: ScriptStruct; super: none
struct FJamEvent_PrivacyChanged
{
public:
    std::uint8_t JamPrivacySetting; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamEvent_PrivacyChanged, JamPrivacySetting) == 0, "Offset mismatch for FJamEvent_PrivacyChanged::JamPrivacySetting");

// /Script/FMJamSessionRuntime.JamLoadResult
// Kind: ScriptStruct; super: none
struct FJamLoadResult
{
public:
    void* FusionPatch; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MidiFile; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SongPart; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Mode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSuccess; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasCancelled; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJamLoadResult, FusionPatch) == 0, "Offset mismatch for FJamLoadResult::FusionPatch");
static_assert(offsetof(FJamLoadResult, MidiFile) == 8, "Offset mismatch for FJamLoadResult::MidiFile");
static_assert(offsetof(FJamLoadResult, SongPart) == 16, "Offset mismatch for FJamLoadResult::SongPart");
static_assert(offsetof(FJamLoadResult, Mode) == 24, "Offset mismatch for FJamLoadResult::Mode");
static_assert(offsetof(FJamLoadResult, bSuccess) == 25, "Offset mismatch for FJamLoadResult::bSuccess");
static_assert(offsetof(FJamLoadResult, bWasCancelled) == 26, "Offset mismatch for FJamLoadResult::bWasCancelled");

// /Script/FMJamSessionRuntime.JamLoopReactiveFX
// Kind: ScriptStruct; super: none
struct FJamLoopReactiveFX
{
public:
    TArray<void*> NiagaraComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SlotIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t LoopType; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamLoopReactiveFX, NiagaraComponents) == 0, "Offset mismatch for FJamLoopReactiveFX::NiagaraComponents");
static_assert(offsetof(FJamLoopReactiveFX, SlotIndex) == 16, "Offset mismatch for FJamLoopReactiveFX::SlotIndex");
static_assert(offsetof(FJamLoopReactiveFX, LoopType) == 20, "Offset mismatch for FJamLoopReactiveFX::LoopType");

// /Script/FMJamSessionRuntime.JamMusicFXControlState
// Kind: ScriptStruct; super: none
struct FJamMusicFXControlState
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Settings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamMusicFXControlState, bEnabled) == 0, "Offset mismatch for FJamMusicFXControlState::bEnabled");
static_assert(offsetof(FJamMusicFXControlState, Settings) == 8, "Offset mismatch for FJamMusicFXControlState::Settings");

// /Script/FMJamSessionRuntime.JamMusicSlotSearchParams
// Kind: ScriptStruct; super: none
struct FJamMusicSlotSearchParams
{
public:
    std::uint8_t ContextPlayer[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpecificLoopType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutojammerMode; // 0x0031 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamMusicSlotSearchParams, ContextPlayer) == 0, "Offset mismatch for FJamMusicSlotSearchParams::ContextPlayer");
static_assert(offsetof(FJamMusicSlotSearchParams, SpecificLoopType) == 48, "Offset mismatch for FJamMusicSlotSearchParams::SpecificLoopType");
static_assert(offsetof(FJamMusicSlotSearchParams, AutojammerMode) == 49, "Offset mismatch for FJamMusicSlotSearchParams::AutojammerMode");

// /Script/FMJamSessionRuntime.JamPlayParams
// Kind: ScriptStruct; super: none
struct FJamPlayParams
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LoopType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t PlayerNetId[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::int32_t LoopInstanceId; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAutoJammer; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    TWeakObjectPtr<void> PlayingActorOverride; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    float ServerQuantizationTimeSeconds; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    double SessionStartServerWorldTimeSeconds; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SlotStartMethod; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0059
    TWeakObjectPtr<void> CMSCatalogEntry; // 0x005C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Song; // 0x0064 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJamPlayParams, SongShortName) == 0, "Offset mismatch for FJamPlayParams::SongShortName");
static_assert(offsetof(FJamPlayParams, LoopType) == 4, "Offset mismatch for FJamPlayParams::LoopType");
static_assert(offsetof(FJamPlayParams, PlayerNetId) == 8, "Offset mismatch for FJamPlayParams::PlayerNetId");
static_assert(offsetof(FJamPlayParams, LoopInstanceId) == 56, "Offset mismatch for FJamPlayParams::LoopInstanceId");
static_assert(offsetof(FJamPlayParams, bIsAutoJammer) == 60, "Offset mismatch for FJamPlayParams::bIsAutoJammer");
static_assert(offsetof(FJamPlayParams, PlayingActorOverride) == 64, "Offset mismatch for FJamPlayParams::PlayingActorOverride");
static_assert(offsetof(FJamPlayParams, ServerQuantizationTimeSeconds) == 72, "Offset mismatch for FJamPlayParams::ServerQuantizationTimeSeconds");
static_assert(offsetof(FJamPlayParams, SessionStartServerWorldTimeSeconds) == 80, "Offset mismatch for FJamPlayParams::SessionStartServerWorldTimeSeconds");
static_assert(offsetof(FJamPlayParams, SlotStartMethod) == 88, "Offset mismatch for FJamPlayParams::SlotStartMethod");
static_assert(offsetof(FJamPlayParams, CMSCatalogEntry) == 92, "Offset mismatch for FJamPlayParams::CMSCatalogEntry");
static_assert(offsetof(FJamPlayParams, Song) == 100, "Offset mismatch for FJamPlayParams::Song");

// /Script/FMJamSessionRuntime.JamReactiveFXState
// Kind: ScriptStruct; super: none
struct FJamReactiveFXState
{
public:
    float OverallAmplitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> LoopAmplitudes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoopBandValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJamReactiveFXState, OverallAmplitude) == 0, "Offset mismatch for FJamReactiveFXState::OverallAmplitude");
static_assert(offsetof(FJamReactiveFXState, LoopAmplitudes) == 8, "Offset mismatch for FJamReactiveFXState::LoopAmplitudes");
static_assert(offsetof(FJamReactiveFXState, LoopBandValues) == 24, "Offset mismatch for FJamReactiveFXState::LoopBandValues");

// /Script/FMJamSessionRuntime.JamSessionPMC_SpawnableComponentEntry
// Kind: ScriptStruct; super: none
struct FJamSessionPMC_SpawnableComponentEntry
{
public:
    void* ComponentToSpawn; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PrimarySpawnRule; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ClientSpawnRule; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DestinationPlayActor; // 0x000A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamSessionPMC_SpawnableComponentEntry, ComponentToSpawn) == 0, "Offset mismatch for FJamSessionPMC_SpawnableComponentEntry::ComponentToSpawn");
static_assert(offsetof(FJamSessionPMC_SpawnableComponentEntry, PrimarySpawnRule) == 8, "Offset mismatch for FJamSessionPMC_SpawnableComponentEntry::PrimarySpawnRule");
static_assert(offsetof(FJamSessionPMC_SpawnableComponentEntry, ClientSpawnRule) == 9, "Offset mismatch for FJamSessionPMC_SpawnableComponentEntry::ClientSpawnRule");
static_assert(offsetof(FJamSessionPMC_SpawnableComponentEntry, DestinationPlayActor) == 10, "Offset mismatch for FJamSessionPMC_SpawnableComponentEntry::DestinationPlayActor");

// /Script/FMJamSessionRuntime.JamSessionPMC_SpawnedComponentEntry
// Kind: ScriptStruct; super: none
struct FJamSessionPMC_SpawnedComponentEntry
{
public:
    TWeakObjectPtr<void> ActorSpawnedFor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ComponentSpawned; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJamSessionPMC_SpawnedComponentEntry, ActorSpawnedFor) == 0, "Offset mismatch for FJamSessionPMC_SpawnedComponentEntry::ActorSpawnedFor");
static_assert(offsetof(FJamSessionPMC_SpawnedComponentEntry, ComponentSpawned) == 8, "Offset mismatch for FJamSessionPMC_SpawnedComponentEntry::ComponentSpawned");

// /Script/FMJamSessionRuntime.JammerTypeBreakdown
// Kind: ScriptStruct; super: none
struct FJammerTypeBreakdown
{
public:
    std::int32_t TotalNumPlayerJammers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNumHoloJammers; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNumAutoJammers; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJammerTypeBreakdown, TotalNumPlayerJammers) == 0, "Offset mismatch for FJammerTypeBreakdown::TotalNumPlayerJammers");
static_assert(offsetof(FJammerTypeBreakdown, TotalNumHoloJammers) == 4, "Offset mismatch for FJammerTypeBreakdown::TotalNumHoloJammers");
static_assert(offsetof(FJammerTypeBreakdown, TotalNumAutoJammers) == 8, "Offset mismatch for FJammerTypeBreakdown::TotalNumAutoJammers");

// /Script/FMJamSessionRuntime.PlayLoopWithSpecificSlotParams
// Kind: ScriptStruct; super: none
struct FPlayLoopWithSpecificSlotParams
{
public:
    std::uint8_t WasSinglePlayer[0x2]; // 0x0000 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t ForceAudioState[0x2]; // 0x0002 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t IsAutoJammer[0x4]; // 0x0004 (Size: 0x4, Type: OptionalProperty)
    TWeakObjectPtr<void> PlayingActorOverride; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPlayLoopWithSpecificSlotParams, WasSinglePlayer) == 0, "Offset mismatch for FPlayLoopWithSpecificSlotParams::WasSinglePlayer");
static_assert(offsetof(FPlayLoopWithSpecificSlotParams, ForceAudioState) == 2, "Offset mismatch for FPlayLoopWithSpecificSlotParams::ForceAudioState");
static_assert(offsetof(FPlayLoopWithSpecificSlotParams, IsAutoJammer) == 4, "Offset mismatch for FPlayLoopWithSpecificSlotParams::IsAutoJammer");
static_assert(offsetof(FPlayLoopWithSpecificSlotParams, PlayingActorOverride) == 8, "Offset mismatch for FPlayLoopWithSpecificSlotParams::PlayingActorOverride");

// /Script/FMJamSessionRuntime.SlotFillParams
// Kind: ScriptStruct; super: none
struct FSlotFillParams
{
public:
    std::uint8_t LoopTypeToFill; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName SongShortnameToFill; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSlotFillParams, LoopTypeToFill) == 0, "Offset mismatch for FSlotFillParams::LoopTypeToFill");
static_assert(offsetof(FSlotFillParams, SongShortnameToFill) == 4, "Offset mismatch for FSlotFillParams::SongShortnameToFill");

// /Script/FMJamSessionRuntime.ActorComponent_JamSessionNotifier
// Kind: Class; super: ActorComponent
class UActorComponent_JamSessionNotifier
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnJamSessionChangedBP; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UActorComponent_JamSessionNotifier, OnJamSessionChangedBP) == 216, "Offset mismatch for UActorComponent_JamSessionNotifier::OnJamSessionChangedBP");

// /Script/FMJamSessionRuntime.ControllerComponent_JamAnalytics
// Kind: Class; super: FortControllerComponent
class UControllerComponent_JamAnalytics
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t MinLoopLength[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> LoopStartTimes; // 0x0108 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UControllerComponent_JamAnalytics, MinLoopLength) == 224, "Offset mismatch for UControllerComponent_JamAnalytics::MinLoopLength");
static_assert(offsetof(UControllerComponent_JamAnalytics, LoopStartTimes) == 264, "Offset mismatch for UControllerComponent_JamAnalytics::LoopStartTimes");

// /Script/FMJamSessionRuntime.EnhancedInputHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UEnhancedInputHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamAuraCheatManager
// Kind: Class; super: ChildCheatManager
class UJamAuraCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamContentRefMetaData
// Kind: Class; super: AnimMetaData
class UJamContentRefMetaData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamControllerComponent_LoopPlayer
// Kind: Class; super: ControllerComponent
class UJamControllerComponent_LoopPlayer
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

static_assert(offsetof(UJamControllerComponent_LoopPlayer, PrimaryComponentTick) == 56, "Offset mismatch for UJamControllerComponent_LoopPlayer::PrimaryComponentTick");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, ComponentTags) == 104, "Offset mismatch for UJamControllerComponent_LoopPlayer::ComponentTags");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, AssetUserData) == 120, "Offset mismatch for UJamControllerComponent_LoopPlayer::AssetUserData");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, UCSSerializationIndex) == 144, "Offset mismatch for UJamControllerComponent_LoopPlayer::UCSSerializationIndex");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, bNetAddressable) == 152, "Offset mismatch for UJamControllerComponent_LoopPlayer::bNetAddressable");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, bAutoActivate) == 154, "Offset mismatch for UJamControllerComponent_LoopPlayer::bAutoActivate");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, bIsEditorOnly) == 155, "Offset mismatch for UJamControllerComponent_LoopPlayer::bIsEditorOnly");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, CreationMethod) == 185, "Offset mismatch for UJamControllerComponent_LoopPlayer::CreationMethod");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, OnComponentActivated) == 186, "Offset mismatch for UJamControllerComponent_LoopPlayer::OnComponentActivated");
static_assert(offsetof(UJamControllerComponent_LoopPlayer, OnComponentDeactivated) == 187, "Offset mismatch for UJamControllerComponent_LoopPlayer::OnComponentDeactivated");

// /Script/FMJamSessionRuntime.JamControllerComponent_UserSettings
// Kind: Class; super: ControllerComponent
class UJamControllerComponent_UserSettings
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

static_assert(offsetof(UJamControllerComponent_UserSettings, PrimaryComponentTick) == 56, "Offset mismatch for UJamControllerComponent_UserSettings::PrimaryComponentTick");
static_assert(offsetof(UJamControllerComponent_UserSettings, ComponentTags) == 104, "Offset mismatch for UJamControllerComponent_UserSettings::ComponentTags");
static_assert(offsetof(UJamControllerComponent_UserSettings, AssetUserData) == 120, "Offset mismatch for UJamControllerComponent_UserSettings::AssetUserData");
static_assert(offsetof(UJamControllerComponent_UserSettings, UCSSerializationIndex) == 144, "Offset mismatch for UJamControllerComponent_UserSettings::UCSSerializationIndex");
static_assert(offsetof(UJamControllerComponent_UserSettings, bNetAddressable) == 152, "Offset mismatch for UJamControllerComponent_UserSettings::bNetAddressable");
static_assert(offsetof(UJamControllerComponent_UserSettings, bAutoActivate) == 154, "Offset mismatch for UJamControllerComponent_UserSettings::bAutoActivate");
static_assert(offsetof(UJamControllerComponent_UserSettings, bIsEditorOnly) == 155, "Offset mismatch for UJamControllerComponent_UserSettings::bIsEditorOnly");
static_assert(offsetof(UJamControllerComponent_UserSettings, CreationMethod) == 185, "Offset mismatch for UJamControllerComponent_UserSettings::CreationMethod");
static_assert(offsetof(UJamControllerComponent_UserSettings, OnComponentActivated) == 186, "Offset mismatch for UJamControllerComponent_UserSettings::OnComponentActivated");
static_assert(offsetof(UJamControllerComponent_UserSettings, OnComponentDeactivated) == 187, "Offset mismatch for UJamControllerComponent_UserSettings::OnComponentDeactivated");

// /Script/FMJamSessionRuntime.JamMidiEventDriver
// Kind: Class; super: Object
class UJamMidiEventDriver
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> WeakOwningMusicSlotPtr; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    void* ParsedMidiEventData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamMidiEventDriver, WeakOwningMusicSlotPtr) == 48, "Offset mismatch for UJamMidiEventDriver::WeakOwningMusicSlotPtr");
static_assert(offsetof(UJamMidiEventDriver, ParsedMidiEventData) == 56, "Offset mismatch for UJamMidiEventDriver::ParsedMidiEventData");

// /Script/FMJamSessionRuntime.JamMusicSlot
// Kind: Class; super: Object
class UJamMusicSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnLoopStarted; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoopStopped; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0048
    void* QuantizationMidiEventDriver; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMidiFile; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* CurrentFusionPatch; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* CurrentSongPart; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* MidiEventDriver; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0080
    std::uint8_t LastSuccessfulLoadResult[0x98]; // 0x0088 (Size: 0x98, Type: StructProperty)
    std::uint8_t CurrentPlayParams[0x70]; // 0x0120 (Size: 0x70, Type: StructProperty)
    std::uint8_t LastStartedPlayParams[0x70]; // 0x0190 (Size: 0x70, Type: StructProperty)
    void* JamMusicManager; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NthSlot; // 0x0208 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x020C
    std::uint8_t OwnedGameplayTags[0x20]; // 0x0210 (Size: 0x20, Type: StructProperty)
    float StartAtSongSeconds; // 0x0230 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJamMusicSlot, OnLoopStarted) == 40, "Offset mismatch for UJamMusicSlot::OnLoopStarted");
static_assert(offsetof(UJamMusicSlot, OnLoopStopped) == 56, "Offset mismatch for UJamMusicSlot::OnLoopStopped");
static_assert(offsetof(UJamMusicSlot, QuantizationMidiEventDriver) == 88, "Offset mismatch for UJamMusicSlot::QuantizationMidiEventDriver");
static_assert(offsetof(UJamMusicSlot, CurrentMidiFile) == 96, "Offset mismatch for UJamMusicSlot::CurrentMidiFile");
static_assert(offsetof(UJamMusicSlot, CurrentFusionPatch) == 104, "Offset mismatch for UJamMusicSlot::CurrentFusionPatch");
static_assert(offsetof(UJamMusicSlot, CurrentSongPart) == 112, "Offset mismatch for UJamMusicSlot::CurrentSongPart");
static_assert(offsetof(UJamMusicSlot, MidiEventDriver) == 120, "Offset mismatch for UJamMusicSlot::MidiEventDriver");
static_assert(offsetof(UJamMusicSlot, LastSuccessfulLoadResult) == 136, "Offset mismatch for UJamMusicSlot::LastSuccessfulLoadResult");
static_assert(offsetof(UJamMusicSlot, CurrentPlayParams) == 288, "Offset mismatch for UJamMusicSlot::CurrentPlayParams");
static_assert(offsetof(UJamMusicSlot, LastStartedPlayParams) == 400, "Offset mismatch for UJamMusicSlot::LastStartedPlayParams");
static_assert(offsetof(UJamMusicSlot, JamMusicManager) == 512, "Offset mismatch for UJamMusicSlot::JamMusicManager");
static_assert(offsetof(UJamMusicSlot, NthSlot) == 520, "Offset mismatch for UJamMusicSlot::NthSlot");
static_assert(offsetof(UJamMusicSlot, OwnedGameplayTags) == 528, "Offset mismatch for UJamMusicSlot::OwnedGameplayTags");
static_assert(offsetof(UJamMusicSlot, StartAtSongSeconds) == 560, "Offset mismatch for UJamMusicSlot::StartAtSongSeconds");

// /Script/FMJamSessionRuntime.JamMusicSlotCheatExtension
// Kind: Class; super: CheatManagerExtension
class UJamMusicSlotCheatExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamMusicSlotDebugMenu
// Kind: Class; super: ImGuiDebugMenuBase
class UJamMusicSlotDebugMenu
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamMusicSlotDebugMenu, PrivateLocalPlayerController) == 656, "Offset mismatch for UJamMusicSlotDebugMenu::PrivateLocalPlayerController");

// /Script/FMJamSessionRuntime.JamPlayParamsUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UJamPlayParamsUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionActor
// Kind: Class; super: Actor
class UJamSessionActor
{
public:
    std::uint8_t Pad_0000[0x2C8]; // 0x0000
    void* JamPlayerManager; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock_Looped; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* AudioState; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* MusicManager; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* ReactiveFXComponent; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    void* NetSyncComponent; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* LipSyncManager; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* MidiEventDataManager; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundPlayer; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* JamAudioSource; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* SpecialLocationMarkerManager; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* EventRouter; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InnerJamColliderComponent[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t OuterJamColliderComponent[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t JamSessionGuid[0x30]; // 0x0380 (Size: 0x30, Type: StructProperty)
    std::uint8_t ExtraTags[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsPersistent; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlocksJamming; // 0x03D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJamSessionActor, JamPlayerManager) == 712, "Offset mismatch for UJamSessionActor::JamPlayerManager");
static_assert(offsetof(UJamSessionActor, MusicClock_Looped) == 720, "Offset mismatch for UJamSessionActor::MusicClock_Looped");
static_assert(offsetof(UJamSessionActor, AudioState) == 728, "Offset mismatch for UJamSessionActor::AudioState");
static_assert(offsetof(UJamSessionActor, MusicManager) == 736, "Offset mismatch for UJamSessionActor::MusicManager");
static_assert(offsetof(UJamSessionActor, ReactiveFXComponent) == 744, "Offset mismatch for UJamSessionActor::ReactiveFXComponent");
static_assert(offsetof(UJamSessionActor, NetSyncComponent) == 752, "Offset mismatch for UJamSessionActor::NetSyncComponent");
static_assert(offsetof(UJamSessionActor, LipSyncManager) == 760, "Offset mismatch for UJamSessionActor::LipSyncManager");
static_assert(offsetof(UJamSessionActor, MidiEventDataManager) == 768, "Offset mismatch for UJamSessionActor::MidiEventDataManager");
static_assert(offsetof(UJamSessionActor, MetasoundPlayer) == 776, "Offset mismatch for UJamSessionActor::MetasoundPlayer");
static_assert(offsetof(UJamSessionActor, JamAudioSource) == 784, "Offset mismatch for UJamSessionActor::JamAudioSource");
static_assert(offsetof(UJamSessionActor, MusicClock) == 792, "Offset mismatch for UJamSessionActor::MusicClock");
static_assert(offsetof(UJamSessionActor, SpecialLocationMarkerManager) == 800, "Offset mismatch for UJamSessionActor::SpecialLocationMarkerManager");
static_assert(offsetof(UJamSessionActor, EventRouter) == 808, "Offset mismatch for UJamSessionActor::EventRouter");
static_assert(offsetof(UJamSessionActor, InnerJamColliderComponent) == 816, "Offset mismatch for UJamSessionActor::InnerJamColliderComponent");
static_assert(offsetof(UJamSessionActor, OuterJamColliderComponent) == 856, "Offset mismatch for UJamSessionActor::OuterJamColliderComponent");
static_assert(offsetof(UJamSessionActor, JamSessionGuid) == 896, "Offset mismatch for UJamSessionActor::JamSessionGuid");
static_assert(offsetof(UJamSessionActor, ExtraTags) == 944, "Offset mismatch for UJamSessionActor::ExtraTags");
static_assert(offsetof(UJamSessionActor, bIsPersistent) == 984, "Offset mismatch for UJamSessionActor::bIsPersistent");
static_assert(offsetof(UJamSessionActor, bBlocksJamming) == 985, "Offset mismatch for UJamSessionActor::bBlocksJamming");

// /Script/FMJamSessionRuntime.JamSessionCheatManager
// Kind: Class; super: ChildCheatManager
class UJamSessionCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* JamSessionToSpawn; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJamSessionCheatManager, JamSessionToSpawn) == 40, "Offset mismatch for UJamSessionCheatManager::JamSessionToSpawn");

// /Script/FMJamSessionRuntime.JamSessionComponentLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJamSessionComponentLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionComponent_AudioState
// Kind: Class; super: ActorComponent
class UJamSessionComponent_AudioState
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentKey; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentMode; // 0x00C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00C2
    std::int32_t CurrentTempo; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJamSessionComponent_AudioState, CurrentKey) == 192, "Offset mismatch for UJamSessionComponent_AudioState::CurrentKey");
static_assert(offsetof(UJamSessionComponent_AudioState, CurrentMode) == 193, "Offset mismatch for UJamSessionComponent_AudioState::CurrentMode");
static_assert(offsetof(UJamSessionComponent_AudioState, CurrentTempo) == 196, "Offset mismatch for UJamSessionComponent_AudioState::CurrentTempo");

// /Script/FMJamSessionRuntime.JamSessionComponent_ExternalSlotFiller
// Kind: Class; super: ActorComponent
class UJamSessionComponent_ExternalSlotFiller
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Config[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamSessionComponent_ExternalSlotFiller, Config) == 192, "Offset mismatch for UJamSessionComponent_ExternalSlotFiller::Config");

// /Script/FMJamSessionRuntime.JamSessionComponent_LipSyncAssetManager
// Kind: Class; super: ActorComponent_LipSyncAssetManager
class UJamSessionComponent_LipSyncAssetManager
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

static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, PrimaryComponentTick) == 56, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::PrimaryComponentTick");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, ComponentTags) == 104, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::ComponentTags");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, AssetUserData) == 120, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::AssetUserData");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, UCSSerializationIndex) == 144, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::UCSSerializationIndex");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, bNetAddressable) == 152, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::bNetAddressable");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, bAutoActivate) == 154, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::bAutoActivate");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, bIsEditorOnly) == 155, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::bIsEditorOnly");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, CreationMethod) == 185, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::CreationMethod");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, OnComponentActivated) == 186, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::OnComponentActivated");
static_assert(offsetof(UJamSessionComponent_LipSyncAssetManager, OnComponentDeactivated) == 187, "Offset mismatch for UJamSessionComponent_LipSyncAssetManager::OnComponentDeactivated");

// /Script/FMJamSessionRuntime.JamSessionComponent_MidiEventDataManager
// Kind: Class; super: ActorComponent_MidiEventDataManager
class UJamSessionComponent_MidiEventDataManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    FMulticastInlineDelegate OnMidiEventDataParsed; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJamSessionComponent_MidiEventDataManager, OnMidiEventDriverChanged) == 192, "Offset mismatch for UJamSessionComponent_MidiEventDataManager::OnMidiEventDriverChanged");
static_assert(offsetof(UJamSessionComponent_MidiEventDataManager, OnMidiEventDataParsed) == 232, "Offset mismatch for UJamSessionComponent_MidiEventDataManager::OnMidiEventDataParsed");

// /Script/FMJamSessionRuntime.JamSessionComponent_MusicFXController
// Kind: Class; super: ActorComponent
class UJamSessionComponent_MusicFXController
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t NumEffects; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TArray<void*> MusicFXControl_Slot0; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MusicFXControl_Slot1; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MusicFXControl_Slot2; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MusicFXControl_Slot3; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamSessionComponent_MusicFXController, NumEffects) == 192, "Offset mismatch for UJamSessionComponent_MusicFXController::NumEffects");
static_assert(offsetof(UJamSessionComponent_MusicFXController, MusicFXControl_Slot0) == 200, "Offset mismatch for UJamSessionComponent_MusicFXController::MusicFXControl_Slot0");
static_assert(offsetof(UJamSessionComponent_MusicFXController, MusicFXControl_Slot1) == 216, "Offset mismatch for UJamSessionComponent_MusicFXController::MusicFXControl_Slot1");
static_assert(offsetof(UJamSessionComponent_MusicFXController, MusicFXControl_Slot2) == 232, "Offset mismatch for UJamSessionComponent_MusicFXController::MusicFXControl_Slot2");
static_assert(offsetof(UJamSessionComponent_MusicFXController, MusicFXControl_Slot3) == 248, "Offset mismatch for UJamSessionComponent_MusicFXController::MusicFXControl_Slot3");

// /Script/FMJamSessionRuntime.JamSessionComponent_MusicManager
// Kind: Class; super: ActorComponent
class UJamSessionComponent_MusicManager
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    FMulticastInlineDelegate OnLoopStarted; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoopStopped; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJamAudioSourceActiveStateChange; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0128
    FMulticastInlineDelegate OnEmoteMusicSettingChanged; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x28]; // 0x01A8
    TArray<void*> MusicSlots; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyChangedEventHandle[0x1C]; // 0x01E0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ModeChangedEventHandle[0x1C]; // 0x01FC (Size: 0x1C, Type: StructProperty)
    std::uint8_t TempoChangedEventHandle[0x1C]; // 0x0218 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ControlChangeEventHandle[0x74]; // 0x0234 (Size: 0x74, Type: StructProperty)
    float LocalPlayerGainParam; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float StandardGainParam; // 0x02AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentJamPrivacy; // 0x02B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02B1
    void* MetasoundPlayer; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMusicClock; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* LoopedMusicClock; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x60]; // 0x02D0
    std::uint8_t MutingTags[0x20]; // 0x0330 (Size: 0x20, Type: StructProperty)
    std::uint8_t MetasoundStoppingTags[0x38]; // 0x0350 (Size: 0x38, Type: StructProperty)
    void* MusicTimeNetSyncHandler; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamSessionComponent_MusicManager, OnLoopStarted) == 248, "Offset mismatch for UJamSessionComponent_MusicManager::OnLoopStarted");
static_assert(offsetof(UJamSessionComponent_MusicManager, OnLoopStopped) == 264, "Offset mismatch for UJamSessionComponent_MusicManager::OnLoopStopped");
static_assert(offsetof(UJamSessionComponent_MusicManager, OnJamAudioSourceActiveStateChange) == 280, "Offset mismatch for UJamSessionComponent_MusicManager::OnJamAudioSourceActiveStateChange");
static_assert(offsetof(UJamSessionComponent_MusicManager, OnEmoteMusicSettingChanged) == 408, "Offset mismatch for UJamSessionComponent_MusicManager::OnEmoteMusicSettingChanged");
static_assert(offsetof(UJamSessionComponent_MusicManager, MusicSlots) == 464, "Offset mismatch for UJamSessionComponent_MusicManager::MusicSlots");
static_assert(offsetof(UJamSessionComponent_MusicManager, KeyChangedEventHandle) == 480, "Offset mismatch for UJamSessionComponent_MusicManager::KeyChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager, ModeChangedEventHandle) == 508, "Offset mismatch for UJamSessionComponent_MusicManager::ModeChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager, TempoChangedEventHandle) == 536, "Offset mismatch for UJamSessionComponent_MusicManager::TempoChangedEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager, ControlChangeEventHandle) == 564, "Offset mismatch for UJamSessionComponent_MusicManager::ControlChangeEventHandle");
static_assert(offsetof(UJamSessionComponent_MusicManager, LocalPlayerGainParam) == 680, "Offset mismatch for UJamSessionComponent_MusicManager::LocalPlayerGainParam");
static_assert(offsetof(UJamSessionComponent_MusicManager, StandardGainParam) == 684, "Offset mismatch for UJamSessionComponent_MusicManager::StandardGainParam");
static_assert(offsetof(UJamSessionComponent_MusicManager, CurrentJamPrivacy) == 688, "Offset mismatch for UJamSessionComponent_MusicManager::CurrentJamPrivacy");
static_assert(offsetof(UJamSessionComponent_MusicManager, MetasoundPlayer) == 696, "Offset mismatch for UJamSessionComponent_MusicManager::MetasoundPlayer");
static_assert(offsetof(UJamSessionComponent_MusicManager, CurrentMusicClock) == 704, "Offset mismatch for UJamSessionComponent_MusicManager::CurrentMusicClock");
static_assert(offsetof(UJamSessionComponent_MusicManager, LoopedMusicClock) == 712, "Offset mismatch for UJamSessionComponent_MusicManager::LoopedMusicClock");
static_assert(offsetof(UJamSessionComponent_MusicManager, MutingTags) == 816, "Offset mismatch for UJamSessionComponent_MusicManager::MutingTags");
static_assert(offsetof(UJamSessionComponent_MusicManager, MetasoundStoppingTags) == 848, "Offset mismatch for UJamSessionComponent_MusicManager::MetasoundStoppingTags");
static_assert(offsetof(UJamSessionComponent_MusicManager, MusicTimeNetSyncHandler) == 904, "Offset mismatch for UJamSessionComponent_MusicManager::MusicTimeNetSyncHandler");

// /Script/FMJamSessionRuntime.JamSessionComponent_PlayerManager
// Kind: Class; super: ActorComponent
class UJamSessionComponent_PlayerManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPersistentPartyChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    std::uint8_t GameplayTagsToAdd_Server[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayTagsToAdd_Clients[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayEffectsToApply; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnableComponents; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnsInSession; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OtherActorsInSession; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerOnlySpawnedComponents; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0170
    TArray<void*> ControllerChangedPawnDelegateListeners; // 0x0190 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamSessionComponent_PlayerManager, OnPersistentPartyChanged) == 192, "Offset mismatch for UJamSessionComponent_PlayerManager::OnPersistentPartyChanged");
static_assert(offsetof(UJamSessionComponent_PlayerManager, GameplayTagsToAdd_Server) == 224, "Offset mismatch for UJamSessionComponent_PlayerManager::GameplayTagsToAdd_Server");
static_assert(offsetof(UJamSessionComponent_PlayerManager, GameplayTagsToAdd_Clients) == 256, "Offset mismatch for UJamSessionComponent_PlayerManager::GameplayTagsToAdd_Clients");
static_assert(offsetof(UJamSessionComponent_PlayerManager, GameplayEffectsToApply) == 288, "Offset mismatch for UJamSessionComponent_PlayerManager::GameplayEffectsToApply");
static_assert(offsetof(UJamSessionComponent_PlayerManager, SpawnableComponents) == 304, "Offset mismatch for UJamSessionComponent_PlayerManager::SpawnableComponents");
static_assert(offsetof(UJamSessionComponent_PlayerManager, PawnsInSession) == 320, "Offset mismatch for UJamSessionComponent_PlayerManager::PawnsInSession");
static_assert(offsetof(UJamSessionComponent_PlayerManager, OtherActorsInSession) == 336, "Offset mismatch for UJamSessionComponent_PlayerManager::OtherActorsInSession");
static_assert(offsetof(UJamSessionComponent_PlayerManager, ServerOnlySpawnedComponents) == 352, "Offset mismatch for UJamSessionComponent_PlayerManager::ServerOnlySpawnedComponents");
static_assert(offsetof(UJamSessionComponent_PlayerManager, ControllerChangedPawnDelegateListeners) == 400, "Offset mismatch for UJamSessionComponent_PlayerManager::ControllerChangedPawnDelegateListeners");

// /Script/FMJamSessionRuntime.JamSessionComponent_PlayerManagerDelegateListenerControllerChangedPossessedPawn
// Kind: Class; super: Object
class UJamSessionComponent_PlayerManagerDelegateListenerControllerChangedPossessedPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionComponent_ReactiveFX
// Kind: Class; super: ActorComponent
class UJamSessionComponent_ReactiveFX
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t ReactiveFXState[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    void* ReactiveMPC; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSetReactivityUpdateRateToTargetFPS; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float ReactivityUpdateRate; // 0x010C (Size: 0x4, Type: FloatProperty)
    float PeakTamerValueReleaseTimeSec; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0114
    TMap<void*, void*> LoopReactiveFX; // 0x0118 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x50]; // 0x0128
    void* DefaultPlayerFXToSpawn; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* DefaultPlayerDropFXToSpawn; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> DefaultLoopFXAmplitude; // 0x0188 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJamSessionComponent_ReactiveFX, ReactiveFXState) == 216, "Offset mismatch for UJamSessionComponent_ReactiveFX::ReactiveFXState");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, ReactiveMPC) == 256, "Offset mismatch for UJamSessionComponent_ReactiveFX::ReactiveMPC");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, bSetReactivityUpdateRateToTargetFPS) == 264, "Offset mismatch for UJamSessionComponent_ReactiveFX::bSetReactivityUpdateRateToTargetFPS");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, ReactivityUpdateRate) == 268, "Offset mismatch for UJamSessionComponent_ReactiveFX::ReactivityUpdateRate");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, PeakTamerValueReleaseTimeSec) == 272, "Offset mismatch for UJamSessionComponent_ReactiveFX::PeakTamerValueReleaseTimeSec");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, LoopReactiveFX) == 280, "Offset mismatch for UJamSessionComponent_ReactiveFX::LoopReactiveFX");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, DefaultPlayerFXToSpawn) == 376, "Offset mismatch for UJamSessionComponent_ReactiveFX::DefaultPlayerFXToSpawn");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, DefaultPlayerDropFXToSpawn) == 384, "Offset mismatch for UJamSessionComponent_ReactiveFX::DefaultPlayerDropFXToSpawn");
static_assert(offsetof(UJamSessionComponent_ReactiveFX, DefaultLoopFXAmplitude) == 392, "Offset mismatch for UJamSessionComponent_ReactiveFX::DefaultLoopFXAmplitude");

// /Script/FMJamSessionRuntime.JamSessionComponent_SpecialLocationMarkerManager
// Kind: Class; super: ActorComponent
class UJamSessionComponent_SpecialLocationMarkerManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> LocationMarkers; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamSessionComponent_SpecialLocationMarkerManager, LocationMarkers) == 208, "Offset mismatch for UJamSessionComponent_SpecialLocationMarkerManager::LocationMarkers");

// /Script/FMJamSessionRuntime.JamSessionInterface
// Kind: Class; super: Interface
class UJamSessionInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJamSessionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionManager
// Kind: Class; super: GameInstanceSubsystem
class UJamSessionManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionObserverInterface
// Kind: Class; super: Interface
class UJamSessionObserverInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSessionRuntime.JamSessionSpecialLocationMarker
// Kind: Class; super: SceneComponent
class UJamSessionSpecialLocationMarker
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t LocationTags[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamSessionSpecialLocationMarker, LocationTags) == 576, "Offset mismatch for UJamSessionSpecialLocationMarker::LocationTags");

// /Script/FMJamSessionRuntime.PlayerPawnComponent_JamSessionDecider
// Kind: Class; super: ActorComponent
class UPlayerPawnComponent_JamSessionDecider
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

static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, PrimaryComponentTick) == 56, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::PrimaryComponentTick");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, ComponentTags) == 104, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::ComponentTags");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, AssetUserData) == 120, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::AssetUserData");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, UCSSerializationIndex) == 144, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::UCSSerializationIndex");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, bNetAddressable) == 152, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::bNetAddressable");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, bAutoActivate) == 154, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::bAutoActivate");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, bIsEditorOnly) == 155, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::bIsEditorOnly");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, CreationMethod) == 185, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::CreationMethod");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, OnComponentActivated) == 186, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::OnComponentActivated");
static_assert(offsetof(UPlayerPawnComponent_JamSessionDecider, OnComponentDeactivated) == 187, "Offset mismatch for UPlayerPawnComponent_JamSessionDecider::OnComponentDeactivated");

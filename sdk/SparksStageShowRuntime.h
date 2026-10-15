/**
 * decamp dumper generated SDK
 * Package: /Script/SparksStageShowRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastColorPaletteType
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastColorPaletteType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette
{
public:
    std::uint8_t Event; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ColorPalettes; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette, Event) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette::Event");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette, ColorPalettes) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastForceGameplayColorPalette::ColorPalettes");

// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette
{
public:
    std::uint8_t Event; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ColorPalettes; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette, Event) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette::Event");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette, ColorPalettes) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastForceMIDIColorPalette::ColorPalettes");

// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastGameplayEvent
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastGameplayEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastGameplayEventMap
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastGameplayEventMap
{
public:
    void* EventMap; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ColorPalettes; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastGameplayEventMap, EventMap) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastGameplayEventMap::EventMap");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastGameplayEventMap, ColorPalettes) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastGameplayEventMap::ColorPalettes");

// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastMIDIDebugBeatsChange
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastMIDIDebugBeatsChange
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastMIDIEvent
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastMIDIEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_BroadcastMIDIEventMap
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_BroadcastMIDIEventMap
{
public:
    void* EventMap; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ColorPalettes; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastMIDIEventMap, EventMap) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastMIDIEventMap::EventMap");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_BroadcastMIDIEventMap, ColorPalettes) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_BroadcastMIDIEventMap::ColorPalettes");

// /Script/SparksStageShowRuntime.PilgrimEvent_PilgrimGame_StageShowManagerReady
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_StageShowManagerReady
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.StageColor
// Kind: ScriptStruct; super: none
struct FStageColor
{
public:
    std::uint8_t Index; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FStageColor, Index) == 0, "Offset mismatch for FStageColor::Index");

// /Script/SparksStageShowRuntime.StageManagerColorPaletteIndices
// Kind: ScriptStruct; super: none
struct FStageManagerColorPaletteIndices
{
public:
    std::uint8_t Primary[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
    std::uint8_t Secondary[0x1]; // 0x0001 (Size: 0x1, Type: StructProperty)
    std::uint8_t Tertiary[0x1]; // 0x0002 (Size: 0x1, Type: StructProperty)
    std::uint8_t AltPrimary[0x1]; // 0x0003 (Size: 0x1, Type: StructProperty)
    std::uint8_t AltSecondary[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
    std::uint8_t AltTertiary[0x1]; // 0x0005 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStageManagerColorPaletteIndices, Primary) == 0, "Offset mismatch for FStageManagerColorPaletteIndices::Primary");
static_assert(offsetof(FStageManagerColorPaletteIndices, Secondary) == 1, "Offset mismatch for FStageManagerColorPaletteIndices::Secondary");
static_assert(offsetof(FStageManagerColorPaletteIndices, Tertiary) == 2, "Offset mismatch for FStageManagerColorPaletteIndices::Tertiary");
static_assert(offsetof(FStageManagerColorPaletteIndices, AltPrimary) == 3, "Offset mismatch for FStageManagerColorPaletteIndices::AltPrimary");
static_assert(offsetof(FStageManagerColorPaletteIndices, AltSecondary) == 4, "Offset mismatch for FStageManagerColorPaletteIndices::AltSecondary");
static_assert(offsetof(FStageManagerColorPaletteIndices, AltTertiary) == 5, "Offset mismatch for FStageManagerColorPaletteIndices::AltTertiary");

// /Script/SparksStageShowRuntime.StageManagerEventColors
// Kind: ScriptStruct; super: none
struct FStageManagerEventColors
{
public:
    std::uint8_t SyncType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TArray<void*> EventColorPalettes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStageManagerEventColors, SyncType) == 0, "Offset mismatch for FStageManagerEventColors::SyncType");
static_assert(offsetof(FStageManagerEventColors, Frequency) == 4, "Offset mismatch for FStageManagerEventColors::Frequency");
static_assert(offsetof(FStageManagerEventColors, EventColorPalettes) == 8, "Offset mismatch for FStageManagerEventColors::EventColorPalettes");

// /Script/SparksStageShowRuntime.StageManagerSequenceSteps
// Kind: ScriptStruct; super: none
struct FStageManagerSequenceSteps
{
public:
    TArray<void*> StepEvents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStageManagerSequenceSteps, StepEvents) == 0, "Offset mismatch for FStageManagerSequenceSteps::StepEvents");

// /Script/SparksStageShowRuntime.StageShowEventSettings
// Kind: ScriptStruct; super: none
struct FStageShowEventSettings
{
public:
    std::uint8_t LightIntensitySignal[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t RotationSignal[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t RotationSettings[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t GroupPatternSettings[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStageShowEventSettings, LightIntensitySignal) == 0, "Offset mismatch for FStageShowEventSettings::LightIntensitySignal");
static_assert(offsetof(FStageShowEventSettings, RotationSignal) == 64, "Offset mismatch for FStageShowEventSettings::RotationSignal");
static_assert(offsetof(FStageShowEventSettings, RotationSettings) == 128, "Offset mismatch for FStageShowEventSettings::RotationSettings");
static_assert(offsetof(FStageShowEventSettings, GroupPatternSettings) == 136, "Offset mismatch for FStageShowEventSettings::GroupPatternSettings");

// /Script/SparksStageShowRuntime.StageShowGroupPatternData
// Kind: ScriptStruct; super: none
struct FStageShowGroupPatternData
{
public:
    std::uint8_t OffsetType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double duration; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FStageShowGroupPatternData, OffsetType) == 0, "Offset mismatch for FStageShowGroupPatternData::OffsetType");
static_assert(offsetof(FStageShowGroupPatternData, duration) == 8, "Offset mismatch for FStageShowGroupPatternData::duration");

// /Script/SparksStageShowRuntime.StageShowRotationSettings
// Kind: ScriptStruct; super: none
struct FStageShowRotationSettings
{
public:
    std::uint8_t Pattern; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnimationPlayback; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStageShowRotationSettings, Pattern) == 0, "Offset mismatch for FStageShowRotationSettings::Pattern");
static_assert(offsetof(FStageShowRotationSettings, AnimationPlayback) == 1, "Offset mismatch for FStageShowRotationSettings::AnimationPlayback");

// /Script/SparksStageShowRuntime.StageShowSignalData
// Kind: ScriptStruct; super: none
struct FStageShowSignalData
{
public:
    double RiseDuration; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double RiseEasing; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double FallDuration; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double FallEasing; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double BeatMultiplier; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double BeatOffset; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double PeakValue; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double MinimumValue; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FStageShowSignalData, RiseDuration) == 0, "Offset mismatch for FStageShowSignalData::RiseDuration");
static_assert(offsetof(FStageShowSignalData, RiseEasing) == 8, "Offset mismatch for FStageShowSignalData::RiseEasing");
static_assert(offsetof(FStageShowSignalData, FallDuration) == 16, "Offset mismatch for FStageShowSignalData::FallDuration");
static_assert(offsetof(FStageShowSignalData, FallEasing) == 24, "Offset mismatch for FStageShowSignalData::FallEasing");
static_assert(offsetof(FStageShowSignalData, BeatMultiplier) == 32, "Offset mismatch for FStageShowSignalData::BeatMultiplier");
static_assert(offsetof(FStageShowSignalData, BeatOffset) == 40, "Offset mismatch for FStageShowSignalData::BeatOffset");
static_assert(offsetof(FStageShowSignalData, PeakValue) == 48, "Offset mismatch for FStageShowSignalData::PeakValue");
static_assert(offsetof(FStageShowSignalData, MinimumValue) == 56, "Offset mismatch for FStageShowSignalData::MinimumValue");

// /Script/SparksStageShowRuntime.TimedStageShowEffect
// Kind: ScriptStruct; super: none
struct FTimedStageShowEffect
{
public:
    void* Event; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Effect; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    double time; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEventFinished; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTimedStageShowEffect, Event) == 0, "Offset mismatch for FTimedStageShowEffect::Event");
static_assert(offsetof(FTimedStageShowEffect, Effect) == 8, "Offset mismatch for FTimedStageShowEffect::Effect");
static_assert(offsetof(FTimedStageShowEffect, time) == 16, "Offset mismatch for FTimedStageShowEffect::time");
static_assert(offsetof(FTimedStageShowEffect, bEventFinished) == 24, "Offset mismatch for FTimedStageShowEffect::bEventFinished");

// /Script/SparksStageShowRuntime.SparksStageShowAssetConverter
// Kind: Class; super: Object
class USparksStageShowAssetConverter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksStageShowRuntime.StageLightCanBase
// Kind: Class; super: StageShowActorBase
class UStageLightCanBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* FlareStaticMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SpotlightStaticMeshComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* YachtSpotlightCanComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StaticColor[0x10]; // 0x0288 (Size: 0x10, Type: StructProperty)
    void* Can_MID; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* Beam_MID; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* LightBeamOverrideMaterial; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* LightCanOverrideMaterial; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* LightFlareOverrideMaterial; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* LightBeamOriginalMaterial; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* LightCanOriginalMaterial; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* LightFlareOriginalMaterial; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    double LastResult; // 0x02D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0001[0x10]; // 0x02E0
    std::uint8_t TurnOffOnEventChange; // 0x02F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStageLightCanBase, FlareStaticMeshComponent) == 624, "Offset mismatch for UStageLightCanBase::FlareStaticMeshComponent");
static_assert(offsetof(UStageLightCanBase, SpotlightStaticMeshComponent) == 632, "Offset mismatch for UStageLightCanBase::SpotlightStaticMeshComponent");
static_assert(offsetof(UStageLightCanBase, YachtSpotlightCanComponent) == 640, "Offset mismatch for UStageLightCanBase::YachtSpotlightCanComponent");
static_assert(offsetof(UStageLightCanBase, StaticColor) == 648, "Offset mismatch for UStageLightCanBase::StaticColor");
static_assert(offsetof(UStageLightCanBase, Can_MID) == 664, "Offset mismatch for UStageLightCanBase::Can_MID");
static_assert(offsetof(UStageLightCanBase, Beam_MID) == 672, "Offset mismatch for UStageLightCanBase::Beam_MID");
static_assert(offsetof(UStageLightCanBase, LightBeamOverrideMaterial) == 680, "Offset mismatch for UStageLightCanBase::LightBeamOverrideMaterial");
static_assert(offsetof(UStageLightCanBase, LightCanOverrideMaterial) == 688, "Offset mismatch for UStageLightCanBase::LightCanOverrideMaterial");
static_assert(offsetof(UStageLightCanBase, LightFlareOverrideMaterial) == 696, "Offset mismatch for UStageLightCanBase::LightFlareOverrideMaterial");
static_assert(offsetof(UStageLightCanBase, LightBeamOriginalMaterial) == 704, "Offset mismatch for UStageLightCanBase::LightBeamOriginalMaterial");
static_assert(offsetof(UStageLightCanBase, LightCanOriginalMaterial) == 712, "Offset mismatch for UStageLightCanBase::LightCanOriginalMaterial");
static_assert(offsetof(UStageLightCanBase, LightFlareOriginalMaterial) == 720, "Offset mismatch for UStageLightCanBase::LightFlareOriginalMaterial");
static_assert(offsetof(UStageLightCanBase, LastResult) == 728, "Offset mismatch for UStageLightCanBase::LastResult");
static_assert(offsetof(UStageLightCanBase, TurnOffOnEventChange) == 752, "Offset mismatch for UStageLightCanBase::TurnOffOnEventChange");

// /Script/SparksStageShowRuntime.StageManager
// Kind: Class; super: Actor
class UStageManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TMap<void*, void*> StageShowActors; // 0x0270 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0280
    std::uint8_t LastMidiEvent; // 0x0290 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LastGameplayEvent; // 0x0291 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0292
    std::uint8_t RandomStream[0x8]; // 0x0294 (Size: 0x8, Type: StructProperty)
    std::uint8_t RegisterGameplayEventMapEventHandle[0x1C]; // 0x029C (Size: 0x1C, Type: StructProperty)
    std::uint8_t RegisterMIDIEventMapEventHandle[0x1C]; // 0x02B8 (Size: 0x1C, Type: StructProperty)
    std::uint8_t PlayMIDIEventHandle[0x1C]; // 0x02D4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t PlayGameplayEventHandle[0x1C]; // 0x02F0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t SetColorPaletteEventHandle[0x1C]; // 0x030C (Size: 0x1C, Type: StructProperty)
    std::uint8_t MIDIDebugBeatsChangeEventHandle[0x1C]; // 0x0328 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ForceGameplayColorPaletteEventHandle[0x1C]; // 0x0344 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ForceMIDIColorPaletteEventHandle[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    void* GameplayEvents; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* MIDIEvents; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedActors; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    void* MIDIColorPalettes; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* GameplayColorPalettes; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x03B0
    std::int32_t ColorSettingsIndex; // 0x03C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x03C4
    TArray<void*> CurrentColorPalette; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentAltColorPalette; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorTimerHandles; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventTimerHandles; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0408
    TArray<void*> EffectTimeline; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x30]; // 0x0428
    void* MusicClockComponent; // 0x0458 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStageManager, StageShowActors) == 624, "Offset mismatch for UStageManager::StageShowActors");
static_assert(offsetof(UStageManager, LastMidiEvent) == 656, "Offset mismatch for UStageManager::LastMidiEvent");
static_assert(offsetof(UStageManager, LastGameplayEvent) == 657, "Offset mismatch for UStageManager::LastGameplayEvent");
static_assert(offsetof(UStageManager, RandomStream) == 660, "Offset mismatch for UStageManager::RandomStream");
static_assert(offsetof(UStageManager, RegisterGameplayEventMapEventHandle) == 668, "Offset mismatch for UStageManager::RegisterGameplayEventMapEventHandle");
static_assert(offsetof(UStageManager, RegisterMIDIEventMapEventHandle) == 696, "Offset mismatch for UStageManager::RegisterMIDIEventMapEventHandle");
static_assert(offsetof(UStageManager, PlayMIDIEventHandle) == 724, "Offset mismatch for UStageManager::PlayMIDIEventHandle");
static_assert(offsetof(UStageManager, PlayGameplayEventHandle) == 752, "Offset mismatch for UStageManager::PlayGameplayEventHandle");
static_assert(offsetof(UStageManager, SetColorPaletteEventHandle) == 780, "Offset mismatch for UStageManager::SetColorPaletteEventHandle");
static_assert(offsetof(UStageManager, MIDIDebugBeatsChangeEventHandle) == 808, "Offset mismatch for UStageManager::MIDIDebugBeatsChangeEventHandle");
static_assert(offsetof(UStageManager, ForceGameplayColorPaletteEventHandle) == 836, "Offset mismatch for UStageManager::ForceGameplayColorPaletteEventHandle");
static_assert(offsetof(UStageManager, ForceMIDIColorPaletteEventHandle) == 864, "Offset mismatch for UStageManager::ForceMIDIColorPaletteEventHandle");
static_assert(offsetof(UStageManager, GameplayEvents) == 896, "Offset mismatch for UStageManager::GameplayEvents");
static_assert(offsetof(UStageManager, MIDIEvents) == 904, "Offset mismatch for UStageManager::MIDIEvents");
static_assert(offsetof(UStageManager, CachedActors) == 912, "Offset mismatch for UStageManager::CachedActors");
static_assert(offsetof(UStageManager, MIDIColorPalettes) == 928, "Offset mismatch for UStageManager::MIDIColorPalettes");
static_assert(offsetof(UStageManager, GameplayColorPalettes) == 936, "Offset mismatch for UStageManager::GameplayColorPalettes");
static_assert(offsetof(UStageManager, ColorSettingsIndex) == 960, "Offset mismatch for UStageManager::ColorSettingsIndex");
static_assert(offsetof(UStageManager, CurrentColorPalette) == 968, "Offset mismatch for UStageManager::CurrentColorPalette");
static_assert(offsetof(UStageManager, CurrentAltColorPalette) == 984, "Offset mismatch for UStageManager::CurrentAltColorPalette");
static_assert(offsetof(UStageManager, ColorTimerHandles) == 1000, "Offset mismatch for UStageManager::ColorTimerHandles");
static_assert(offsetof(UStageManager, EventTimerHandles) == 1016, "Offset mismatch for UStageManager::EventTimerHandles");
static_assert(offsetof(UStageManager, EffectTimeline) == 1048, "Offset mismatch for UStageManager::EffectTimeline");
static_assert(offsetof(UStageManager, MusicClockComponent) == 1112, "Offset mismatch for UStageManager::MusicClockComponent");

// /Script/SparksStageShowRuntime.StageManagerGameplayColorPalettes
// Kind: Class; super: PrimaryDataAsset
class UStageManagerGameplayColorPalettes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ColorPalette; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AltColorPalette; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EventMap; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStageManagerGameplayColorPalettes, ColorPalette) == 40, "Offset mismatch for UStageManagerGameplayColorPalettes::ColorPalette");
static_assert(offsetof(UStageManagerGameplayColorPalettes, AltColorPalette) == 56, "Offset mismatch for UStageManagerGameplayColorPalettes::AltColorPalette");
static_assert(offsetof(UStageManagerGameplayColorPalettes, EventMap) == 72, "Offset mismatch for UStageManagerGameplayColorPalettes::EventMap");

// /Script/SparksStageShowRuntime.StageManagerMIDIColorPalettes
// Kind: Class; super: PrimaryDataAsset
class UStageManagerMIDIColorPalettes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ColorPalette; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AltColorPalette; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EventMap; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStageManagerMIDIColorPalettes, ColorPalette) == 40, "Offset mismatch for UStageManagerMIDIColorPalettes::ColorPalette");
static_assert(offsetof(UStageManagerMIDIColorPalettes, AltColorPalette) == 56, "Offset mismatch for UStageManagerMIDIColorPalettes::AltColorPalette");
static_assert(offsetof(UStageManagerMIDIColorPalettes, EventMap) == 72, "Offset mismatch for UStageManagerMIDIColorPalettes::EventMap");

// /Script/SparksStageShowRuntime.StageShowActorBase
// Kind: Class; super: Actor
class UStageShowActorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStageShowActorBase, PrimaryActorTick) == 40, "Offset mismatch for UStageShowActorBase::PrimaryActorTick");
static_assert(offsetof(UStageShowActorBase, bAlwaysRelevant) == 88, "Offset mismatch for UStageShowActorBase::bAlwaysRelevant");
static_assert(offsetof(UStageShowActorBase, bExchangedRoles) == 89, "Offset mismatch for UStageShowActorBase::bExchangedRoles");
static_assert(offsetof(UStageShowActorBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UStageShowActorBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UStageShowActorBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UStageShowActorBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UStageShowActorBase, bActorEnableCollision) == 93, "Offset mismatch for UStageShowActorBase::bActorEnableCollision");
static_assert(offsetof(UStageShowActorBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UStageShowActorBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UStageShowActorBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UStageShowActorBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UStageShowActorBase, RemoteRole) == 96, "Offset mismatch for UStageShowActorBase::RemoteRole");
static_assert(offsetof(UStageShowActorBase, InitialLifeSpan) == 100, "Offset mismatch for UStageShowActorBase::InitialLifeSpan");
static_assert(offsetof(UStageShowActorBase, CustomTimeDilation) == 104, "Offset mismatch for UStageShowActorBase::CustomTimeDilation");
static_assert(offsetof(UStageShowActorBase, RayTracingGroupId) == 108, "Offset mismatch for UStageShowActorBase::RayTracingGroupId");
static_assert(offsetof(UStageShowActorBase, AttachmentReplication) == 112, "Offset mismatch for UStageShowActorBase::AttachmentReplication");
static_assert(offsetof(UStageShowActorBase, ReplicatedMovement) == 208, "Offset mismatch for UStageShowActorBase::ReplicatedMovement");
static_assert(offsetof(UStageShowActorBase, Owner) == 344, "Offset mismatch for UStageShowActorBase::Owner");
static_assert(offsetof(UStageShowActorBase, NetDriverName) == 352, "Offset mismatch for UStageShowActorBase::NetDriverName");
static_assert(offsetof(UStageShowActorBase, Role) == 356, "Offset mismatch for UStageShowActorBase::Role");
static_assert(offsetof(UStageShowActorBase, NetDormancy) == 357, "Offset mismatch for UStageShowActorBase::NetDormancy");
static_assert(offsetof(UStageShowActorBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UStageShowActorBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(UStageShowActorBase, AutoReceiveInput) == 359, "Offset mismatch for UStageShowActorBase::AutoReceiveInput");
static_assert(offsetof(UStageShowActorBase, InputPriority) == 360, "Offset mismatch for UStageShowActorBase::InputPriority");
static_assert(offsetof(UStageShowActorBase, InputComponent) == 368, "Offset mismatch for UStageShowActorBase::InputComponent");
static_assert(offsetof(UStageShowActorBase, NetTag) == 376, "Offset mismatch for UStageShowActorBase::NetTag");
static_assert(offsetof(UStageShowActorBase, NetCullDistanceSquared) == 380, "Offset mismatch for UStageShowActorBase::NetCullDistanceSquared");
static_assert(offsetof(UStageShowActorBase, NetUpdateFrequency) == 384, "Offset mismatch for UStageShowActorBase::NetUpdateFrequency");
static_assert(offsetof(UStageShowActorBase, MinNetUpdateFrequency) == 388, "Offset mismatch for UStageShowActorBase::MinNetUpdateFrequency");
static_assert(offsetof(UStageShowActorBase, NetPriority) == 392, "Offset mismatch for UStageShowActorBase::NetPriority");
static_assert(offsetof(UStageShowActorBase, PhysicsReplicationMode) == 396, "Offset mismatch for UStageShowActorBase::PhysicsReplicationMode");
static_assert(offsetof(UStageShowActorBase, Instigator) == 408, "Offset mismatch for UStageShowActorBase::Instigator");
static_assert(offsetof(UStageShowActorBase, Children) == 416, "Offset mismatch for UStageShowActorBase::Children");
static_assert(offsetof(UStageShowActorBase, RootComponent) == 432, "Offset mismatch for UStageShowActorBase::RootComponent");
static_assert(offsetof(UStageShowActorBase, HLODLayer) == 448, "Offset mismatch for UStageShowActorBase::HLODLayer");
static_assert(offsetof(UStageShowActorBase, Layers) == 456, "Offset mismatch for UStageShowActorBase::Layers");
static_assert(offsetof(UStageShowActorBase, ParentComponent) == 472, "Offset mismatch for UStageShowActorBase::ParentComponent");
static_assert(offsetof(UStageShowActorBase, Tags) == 496, "Offset mismatch for UStageShowActorBase::Tags");
static_assert(offsetof(UStageShowActorBase, OnTakeAnyDamage) == 512, "Offset mismatch for UStageShowActorBase::OnTakeAnyDamage");
static_assert(offsetof(UStageShowActorBase, OnTakePointDamage) == 513, "Offset mismatch for UStageShowActorBase::OnTakePointDamage");
static_assert(offsetof(UStageShowActorBase, OnTakeRadialDamage) == 514, "Offset mismatch for UStageShowActorBase::OnTakeRadialDamage");
static_assert(offsetof(UStageShowActorBase, OnActorBeginOverlap) == 515, "Offset mismatch for UStageShowActorBase::OnActorBeginOverlap");
static_assert(offsetof(UStageShowActorBase, OnActorEndOverlap) == 516, "Offset mismatch for UStageShowActorBase::OnActorEndOverlap");
static_assert(offsetof(UStageShowActorBase, OnBeginCursorOver) == 517, "Offset mismatch for UStageShowActorBase::OnBeginCursorOver");
static_assert(offsetof(UStageShowActorBase, OnEndCursorOver) == 518, "Offset mismatch for UStageShowActorBase::OnEndCursorOver");
static_assert(offsetof(UStageShowActorBase, OnClicked) == 519, "Offset mismatch for UStageShowActorBase::OnClicked");
static_assert(offsetof(UStageShowActorBase, OnReleased) == 520, "Offset mismatch for UStageShowActorBase::OnReleased");
static_assert(offsetof(UStageShowActorBase, OnInputTouchBegin) == 521, "Offset mismatch for UStageShowActorBase::OnInputTouchBegin");
static_assert(offsetof(UStageShowActorBase, OnInputTouchEnd) == 522, "Offset mismatch for UStageShowActorBase::OnInputTouchEnd");
static_assert(offsetof(UStageShowActorBase, OnInputTouchEnter) == 523, "Offset mismatch for UStageShowActorBase::OnInputTouchEnter");
static_assert(offsetof(UStageShowActorBase, OnInputTouchLeave) == 524, "Offset mismatch for UStageShowActorBase::OnInputTouchLeave");
static_assert(offsetof(UStageShowActorBase, OnActorHit) == 525, "Offset mismatch for UStageShowActorBase::OnActorHit");
static_assert(offsetof(UStageShowActorBase, OnDestroyed) == 526, "Offset mismatch for UStageShowActorBase::OnDestroyed");
static_assert(offsetof(UStageShowActorBase, OnEndPlay) == 527, "Offset mismatch for UStageShowActorBase::OnEndPlay");
static_assert(offsetof(UStageShowActorBase, InstanceComponents) == 592, "Offset mismatch for UStageShowActorBase::InstanceComponents");
static_assert(offsetof(UStageShowActorBase, BlueprintCreatedComponents) == 608, "Offset mismatch for UStageShowActorBase::BlueprintCreatedComponents");

// /Script/SparksStageShowRuntime.StageShowActors
// Kind: Class; super: Actor
class UStageShowActors
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> StageShowActors; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AutonomousLoop; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IgnoreLoopConditions; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0282
    TArray<void*> AutonomousLoopEvents; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StartLoopState[0x4]; // 0x0298 (Size: 0x4, Type: NameProperty)
    std::uint8_t StopLoopState[0x4]; // 0x029C (Size: 0x4, Type: NameProperty)
    std::uint8_t AutonomousLoopTimer[0x8]; // 0x02A0 (Size: 0x8, Type: StructProperty)
    std::int32_t AutonomousLoopEventsIndex; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::int32_t BeatFrequencyCounter; // 0x02AC (Size: 0x4, Type: IntProperty)
    std::int32_t MeasureFrequencyCounter; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02B4
    double Delay; // 0x02B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FxManagerId[0x4]; // 0x02C0 (Size: 0x4, Type: NameProperty)
    std::int32_t CurrentLoopIndex; // 0x02C4 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentEffectIndex; // 0x02C8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UStageShowActors, StageShowActors) == 624, "Offset mismatch for UStageShowActors::StageShowActors");
static_assert(offsetof(UStageShowActors, AutonomousLoop) == 640, "Offset mismatch for UStageShowActors::AutonomousLoop");
static_assert(offsetof(UStageShowActors, IgnoreLoopConditions) == 641, "Offset mismatch for UStageShowActors::IgnoreLoopConditions");
static_assert(offsetof(UStageShowActors, AutonomousLoopEvents) == 648, "Offset mismatch for UStageShowActors::AutonomousLoopEvents");
static_assert(offsetof(UStageShowActors, StartLoopState) == 664, "Offset mismatch for UStageShowActors::StartLoopState");
static_assert(offsetof(UStageShowActors, StopLoopState) == 668, "Offset mismatch for UStageShowActors::StopLoopState");
static_assert(offsetof(UStageShowActors, AutonomousLoopTimer) == 672, "Offset mismatch for UStageShowActors::AutonomousLoopTimer");
static_assert(offsetof(UStageShowActors, AutonomousLoopEventsIndex) == 680, "Offset mismatch for UStageShowActors::AutonomousLoopEventsIndex");
static_assert(offsetof(UStageShowActors, BeatFrequencyCounter) == 684, "Offset mismatch for UStageShowActors::BeatFrequencyCounter");
static_assert(offsetof(UStageShowActors, MeasureFrequencyCounter) == 688, "Offset mismatch for UStageShowActors::MeasureFrequencyCounter");
static_assert(offsetof(UStageShowActors, Delay) == 696, "Offset mismatch for UStageShowActors::Delay");
static_assert(offsetof(UStageShowActors, FxManagerId) == 704, "Offset mismatch for UStageShowActors::FxManagerId");
static_assert(offsetof(UStageShowActors, CurrentLoopIndex) == 708, "Offset mismatch for UStageShowActors::CurrentLoopIndex");
static_assert(offsetof(UStageShowActors, CurrentEffectIndex) == 712, "Offset mismatch for UStageShowActors::CurrentEffectIndex");

// /Script/SparksStageShowRuntime.StageShowEvent
// Kind: Class; super: DataAsset
class UStageShowEvent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double StartDelay; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FxType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FxAnimation; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    std::int32_t LoopCount; // 0x0034 (Size: 0x4, Type: IntProperty)
    double AnimationStepDelay; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Indices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t AlternateCount; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomModeIndex; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t Reverse; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0059
    std::uint8_t NiagaraSystemOverride[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LoopingEvent; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FrequencyType; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0082
    double NoteFrequency; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::int32_t BeatFrequency; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t MeasureFrequency; // 0x0094 (Size: 0x4, Type: IntProperty)
    TArray<void*> TargetFxManagerIds; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StopFXManager; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StartFrequencyType; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseNewStageCans; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x00AB
    std::uint8_t StageShowEventSettings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStageShowEvent, StartDelay) == 40, "Offset mismatch for UStageShowEvent::StartDelay");
static_assert(offsetof(UStageShowEvent, FxType) == 48, "Offset mismatch for UStageShowEvent::FxType");
static_assert(offsetof(UStageShowEvent, FxAnimation) == 49, "Offset mismatch for UStageShowEvent::FxAnimation");
static_assert(offsetof(UStageShowEvent, LoopCount) == 52, "Offset mismatch for UStageShowEvent::LoopCount");
static_assert(offsetof(UStageShowEvent, AnimationStepDelay) == 56, "Offset mismatch for UStageShowEvent::AnimationStepDelay");
static_assert(offsetof(UStageShowEvent, Indices) == 64, "Offset mismatch for UStageShowEvent::Indices");
static_assert(offsetof(UStageShowEvent, AlternateCount) == 80, "Offset mismatch for UStageShowEvent::AlternateCount");
static_assert(offsetof(UStageShowEvent, CustomModeIndex) == 84, "Offset mismatch for UStageShowEvent::CustomModeIndex");
static_assert(offsetof(UStageShowEvent, Reverse) == 88, "Offset mismatch for UStageShowEvent::Reverse");
static_assert(offsetof(UStageShowEvent, NiagaraSystemOverride) == 96, "Offset mismatch for UStageShowEvent::NiagaraSystemOverride");
static_assert(offsetof(UStageShowEvent, LoopingEvent) == 128, "Offset mismatch for UStageShowEvent::LoopingEvent");
static_assert(offsetof(UStageShowEvent, FrequencyType) == 129, "Offset mismatch for UStageShowEvent::FrequencyType");
static_assert(offsetof(UStageShowEvent, NoteFrequency) == 136, "Offset mismatch for UStageShowEvent::NoteFrequency");
static_assert(offsetof(UStageShowEvent, BeatFrequency) == 144, "Offset mismatch for UStageShowEvent::BeatFrequency");
static_assert(offsetof(UStageShowEvent, MeasureFrequency) == 148, "Offset mismatch for UStageShowEvent::MeasureFrequency");
static_assert(offsetof(UStageShowEvent, TargetFxManagerIds) == 152, "Offset mismatch for UStageShowEvent::TargetFxManagerIds");
static_assert(offsetof(UStageShowEvent, StopFXManager) == 168, "Offset mismatch for UStageShowEvent::StopFXManager");
static_assert(offsetof(UStageShowEvent, StartFrequencyType) == 169, "Offset mismatch for UStageShowEvent::StartFrequencyType");
static_assert(offsetof(UStageShowEvent, bUseNewStageCans) == 170, "Offset mismatch for UStageShowEvent::bUseNewStageCans");
static_assert(offsetof(UStageShowEvent, StageShowEventSettings) == 176, "Offset mismatch for UStageShowEvent::StageShowEventSettings");

// /Script/SparksStageShowRuntime.StageShowGameplayEventMap
// Kind: Class; super: DataAsset
class UStageShowGameplayEventMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> EventMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStageShowGameplayEventMap, EventMap) == 40, "Offset mismatch for UStageShowGameplayEventMap::EventMap");

// /Script/SparksStageShowRuntime.StageShowMIDIEventMap
// Kind: Class; super: DataAsset
class UStageShowMIDIEventMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> EventMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStageShowMIDIEventMap, EventMap) == 40, "Offset mismatch for UStageShowMIDIEventMap::EventMap");

// /Script/SparksStageShowRuntime.StageShowManagerBase
// Kind: Class; super: Actor
class UStageShowManagerBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bIsSimulate; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0271
    void* CachedEventRouter; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStageShowManagerBase, bIsSimulate) == 624, "Offset mismatch for UStageShowManagerBase::bIsSimulate");
static_assert(offsetof(UStageShowManagerBase, CachedEventRouter) == 632, "Offset mismatch for UStageShowManagerBase::CachedEventRouter");

// /Script/SparksStageShowRuntime.StageShowRotator
// Kind: Class; super: StageShowActorBase
class UStageShowRotator
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CubeRotator; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartRotation[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndRotation[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    std::uint8_t Looping; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* RotationCurve; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    double AnimationOffset; // 0x02C0 (Size: 0x8, Type: DoubleProperty)
    double Length; // 0x02C8 (Size: 0x8, Type: DoubleProperty)
    double Position; // 0x02D0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Playing; // 0x02D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStageShowRotator, CubeRotator) == 624, "Offset mismatch for UStageShowRotator::CubeRotator");
static_assert(offsetof(UStageShowRotator, SceneRoot) == 632, "Offset mismatch for UStageShowRotator::SceneRoot");
static_assert(offsetof(UStageShowRotator, StartRotation) == 640, "Offset mismatch for UStageShowRotator::StartRotation");
static_assert(offsetof(UStageShowRotator, EndRotation) == 664, "Offset mismatch for UStageShowRotator::EndRotation");
static_assert(offsetof(UStageShowRotator, Looping) == 688, "Offset mismatch for UStageShowRotator::Looping");
static_assert(offsetof(UStageShowRotator, RotationCurve) == 696, "Offset mismatch for UStageShowRotator::RotationCurve");
static_assert(offsetof(UStageShowRotator, AnimationOffset) == 704, "Offset mismatch for UStageShowRotator::AnimationOffset");
static_assert(offsetof(UStageShowRotator, Length) == 712, "Offset mismatch for UStageShowRotator::Length");
static_assert(offsetof(UStageShowRotator, Position) == 720, "Offset mismatch for UStageShowRotator::Position");
static_assert(offsetof(UStageShowRotator, Playing) == 728, "Offset mismatch for UStageShowRotator::Playing");

// /Script/SparksStageShowRuntime.StageShowSequence
// Kind: Class; super: DataAsset
class UStageShowSequence
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SequenceSteps; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStageShowSequence, SequenceSteps) == 40, "Offset mismatch for UStageShowSequence::SequenceSteps");

// /Script/SparksStageShowRuntime.StageShowSequencePool
// Kind: Class; super: DataAsset
class UStageShowSequencePool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Sequences; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStageShowSequencePool, Sequences) == 40, "Offset mismatch for UStageShowSequencePool::Sequences");

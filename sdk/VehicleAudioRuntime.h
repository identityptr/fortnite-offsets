/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleAudioRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleAudioRuntime.FortMotorSimPatternState
// Kind: ScriptStruct; super: none
struct FFortMotorSimPatternState
{
public:
    TArray<void*> Curves; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float OnsetInterpSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ThrottleThreshold; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RpmFallRate; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SpeedMin; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SpeedMax; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float RpmOffsetMin; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RpmOffsetMax; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoopCurves; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMotorSimPatternState, Curves) == 0, "Offset mismatch for FFortMotorSimPatternState::Curves");
static_assert(offsetof(FFortMotorSimPatternState, OnsetInterpSpeed) == 16, "Offset mismatch for FFortMotorSimPatternState::OnsetInterpSpeed");
static_assert(offsetof(FFortMotorSimPatternState, ThrottleThreshold) == 20, "Offset mismatch for FFortMotorSimPatternState::ThrottleThreshold");
static_assert(offsetof(FFortMotorSimPatternState, RpmFallRate) == 24, "Offset mismatch for FFortMotorSimPatternState::RpmFallRate");
static_assert(offsetof(FFortMotorSimPatternState, SpeedMin) == 28, "Offset mismatch for FFortMotorSimPatternState::SpeedMin");
static_assert(offsetof(FFortMotorSimPatternState, SpeedMax) == 32, "Offset mismatch for FFortMotorSimPatternState::SpeedMax");
static_assert(offsetof(FFortMotorSimPatternState, RpmOffsetMin) == 36, "Offset mismatch for FFortMotorSimPatternState::RpmOffsetMin");
static_assert(offsetof(FFortMotorSimPatternState, RpmOffsetMax) == 40, "Offset mismatch for FFortMotorSimPatternState::RpmOffsetMax");
static_assert(offsetof(FFortMotorSimPatternState, bLoopCurves) == 44, "Offset mismatch for FFortMotorSimPatternState::bLoopCurves");

// /Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdateGroup
// Kind: ScriptStruct; super: none
struct FFortVehicleAudioControllerUpdateGroup
{
public:
    TArray<void*> RegisteredControllers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Updater; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleAudioControllerUpdateGroup, RegisteredControllers) == 0, "Offset mismatch for FFortVehicleAudioControllerUpdateGroup::RegisteredControllers");
static_assert(offsetof(FFortVehicleAudioControllerUpdateGroup, Updater) == 16, "Offset mismatch for FFortVehicleAudioControllerUpdateGroup::Updater");

// /Script/VehicleAudioRuntime.FortVehicleSoundComponentConfigData
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundComponentConfigData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortVehicleSoundSurfaceChooserParam
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundSurfaceChooserParam
{
public:
    std::uint8_t InPhysicalSurface; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInIsAirborne; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInIsLocal; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortVehicleSoundSurfaceChooserParam, InPhysicalSurface) == 0, "Offset mismatch for FFortVehicleSoundSurfaceChooserParam::InPhysicalSurface");
static_assert(offsetof(FFortVehicleSoundSurfaceChooserParam, bInIsAirborne) == 1, "Offset mismatch for FFortVehicleSoundSurfaceChooserParam::bInIsAirborne");
static_assert(offsetof(FFortVehicleSoundSurfaceChooserParam, bInIsLocal) == 2, "Offset mismatch for FFortVehicleSoundSurfaceChooserParam::bInIsLocal");

// /Script/VehicleAudioRuntime.VehicleAudioControllerBaseProperties
// Kind: ScriptStruct; super: none
struct FVehicleAudioControllerBaseProperties
{
public:
    std::uint8_t EngineSound[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    void* EngineOn; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* EngineOff; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GainFuelSound; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* EngineSoundAttenuation; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVehicleAudioControllerBaseProperties, EngineSound) == 0, "Offset mismatch for FVehicleAudioControllerBaseProperties::EngineSound");
static_assert(offsetof(FVehicleAudioControllerBaseProperties, EngineOn) == 32, "Offset mismatch for FVehicleAudioControllerBaseProperties::EngineOn");
static_assert(offsetof(FVehicleAudioControllerBaseProperties, EngineOff) == 40, "Offset mismatch for FVehicleAudioControllerBaseProperties::EngineOff");
static_assert(offsetof(FVehicleAudioControllerBaseProperties, GainFuelSound) == 48, "Offset mismatch for FVehicleAudioControllerBaseProperties::GainFuelSound");
static_assert(offsetof(FVehicleAudioControllerBaseProperties, EngineSoundAttenuation) == 56, "Offset mismatch for FVehicleAudioControllerBaseProperties::EngineSoundAttenuation");

// /Script/VehicleAudioRuntime.VehicleAudioUpdateRuleBaseData
// Kind: ScriptStruct; super: none
struct FVehicleAudioUpdateRuleBaseData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleEngineAudioRegistryEntryRequest
// Kind: ScriptStruct; super: none
struct FVehicleEngineAudioRegistryEntryRequest
{
public:
    TScriptInterface<void> Vehicle; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
    TSoftObjectPtr<void> Asset; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVehicleEngineAudioRegistryEntryRequest, Vehicle) == 0, "Offset mismatch for FVehicleEngineAudioRegistryEntryRequest::Vehicle");
static_assert(offsetof(FVehicleEngineAudioRegistryEntryRequest, Asset) == 16, "Offset mismatch for FVehicleEngineAudioRegistryEntryRequest::Asset");

// /Script/VehicleAudioRuntime.VehicleEngineAudioRegistryLoadedEntry
// Kind: ScriptStruct; super: none
struct FVehicleEngineAudioRegistryLoadedEntry
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* SoundBasePtr; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVehicleEngineAudioRegistryLoadedEntry, SoundBasePtr) == 24, "Offset mismatch for FVehicleEngineAudioRegistryLoadedEntry::SoundBasePtr");

// /Script/VehicleAudioRuntime.VehicleSoundSurfaceDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FVehicleSoundSurfaceDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SurfaceType; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> SurfaceSounds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleSoundSurfaceDataRow, SurfaceType) == 8, "Offset mismatch for FVehicleSoundSurfaceDataRow::SurfaceType");
static_assert(offsetof(FVehicleSoundSurfaceDataRow, SurfaceSounds) == 16, "Offset mismatch for FVehicleSoundSurfaceDataRow::SurfaceSounds");

// /Script/VehicleAudioRuntime.BudgetedEngineAudioUser
// Kind: Class; super: Interface
class UBudgetedEngineAudioUser
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
// Kind: Class; super: AudioMotorSimComponent
class UFortMotorSimComponent_PatternPlayer
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float PatternResetCooldown; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t DriftState[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AirState[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartlineState[0x50]; // 0x0138 (Size: 0x50, Type: StructProperty)
    void* CurrentCurve; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMotorSimComponent_PatternPlayer, PatternResetCooldown) == 208, "Offset mismatch for UFortMotorSimComponent_PatternPlayer::PatternResetCooldown");
static_assert(offsetof(UFortMotorSimComponent_PatternPlayer, DriftState) == 216, "Offset mismatch for UFortMotorSimComponent_PatternPlayer::DriftState");
static_assert(offsetof(UFortMotorSimComponent_PatternPlayer, AirState) == 264, "Offset mismatch for UFortMotorSimComponent_PatternPlayer::AirState");
static_assert(offsetof(UFortMotorSimComponent_PatternPlayer, StartlineState) == 312, "Offset mismatch for UFortMotorSimComponent_PatternPlayer::StartlineState");
static_assert(offsetof(UFortMotorSimComponent_PatternPlayer, CurrentCurve) == 392, "Offset mismatch for UFortMotorSimComponent_PatternPlayer::CurrentCurve");

// /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
// Kind: Class; super: AudioMotorSimComponent
class UFortMotorSimComponent_SurfaceModifier
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TMap<void*, void*> Surfaces; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t ThrottleRange[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    float OnsetInterpTime; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    void* CurrentCurve; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMotorSimComponent_SurfaceModifier, Surfaces) == 208, "Offset mismatch for UFortMotorSimComponent_SurfaceModifier::Surfaces");
static_assert(offsetof(UFortMotorSimComponent_SurfaceModifier, ThrottleRange) == 224, "Offset mismatch for UFortMotorSimComponent_SurfaceModifier::ThrottleRange");
static_assert(offsetof(UFortMotorSimComponent_SurfaceModifier, OnsetInterpTime) == 232, "Offset mismatch for UFortMotorSimComponent_SurfaceModifier::OnsetInterpTime");
static_assert(offsetof(UFortMotorSimComponent_SurfaceModifier, CurrentCurve) == 240, "Offset mismatch for UFortMotorSimComponent_SurfaceModifier::CurrentCurve");

// /Script/VehicleAudioRuntime.FortVehicleAudioControllerSubsystem
// Kind: Class; super: WorldSubsystem
class UFortVehicleAudioControllerSubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TMap<void*, void*> RegisteredUpdateGroups; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ControllerClassToUpdateGroupMappings; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> UpdateStateMap; // 0x0080 (Size: 0x10, Type: MapProperty)
    TArray<void*> UpdateStateReaders; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortVehicleAudioControllerSubsystem, RegisteredUpdateGroups) == 96, "Offset mismatch for UFortVehicleAudioControllerSubsystem::RegisteredUpdateGroups");
static_assert(offsetof(UFortVehicleAudioControllerSubsystem, ControllerClassToUpdateGroupMappings) == 112, "Offset mismatch for UFortVehicleAudioControllerSubsystem::ControllerClassToUpdateGroupMappings");
static_assert(offsetof(UFortVehicleAudioControllerSubsystem, UpdateStateMap) == 128, "Offset mismatch for UFortVehicleAudioControllerSubsystem::UpdateStateMap");
static_assert(offsetof(UFortVehicleAudioControllerSubsystem, UpdateStateReaders) == 144, "Offset mismatch for UFortVehicleAudioControllerSubsystem::UpdateStateReaders");

// /Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdateStateReader
// Kind: Class; super: Interface
class UFortVehicleAudioControllerUpdateStateReader
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater
// Kind: Class; super: Object
class UFortVehicleAudioControllerUpdater
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater_Proximity
// Kind: Class; super: FortVehicleAudioControllerUpdater
class UFortVehicleAudioControllerUpdater_Proximity
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SoundAttenuation; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float UpdateRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t UpdateCap; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortVehicleAudioControllerUpdater_Proximity, SoundAttenuation) == 40, "Offset mismatch for UFortVehicleAudioControllerUpdater_Proximity::SoundAttenuation");
static_assert(offsetof(UFortVehicleAudioControllerUpdater_Proximity, UpdateRadius) == 48, "Offset mismatch for UFortVehicleAudioControllerUpdater_Proximity::UpdateRadius");
static_assert(offsetof(UFortVehicleAudioControllerUpdater_Proximity, UpdateCap) == 52, "Offset mismatch for UFortVehicleAudioControllerUpdater_Proximity::UpdateCap");

// /Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater_UpdateAll
// Kind: Class; super: FortVehicleAudioControllerUpdater
class UFortVehicleAudioControllerUpdater_UpdateAll
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortVehicleAudioCookSettings
// Kind: Class; super: Object
class UFortVehicleAudioCookSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t RevModelChannelThreshold; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> MetaSoundQualitySettingsToExclude; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PathsToScan; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlatformQualitySettingsToExclude; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortVehicleAudioCookSettings, RevModelChannelThreshold) == 40, "Offset mismatch for UFortVehicleAudioCookSettings::RevModelChannelThreshold");
static_assert(offsetof(UFortVehicleAudioCookSettings, MetaSoundQualitySettingsToExclude) == 48, "Offset mismatch for UFortVehicleAudioCookSettings::MetaSoundQualitySettingsToExclude");
static_assert(offsetof(UFortVehicleAudioCookSettings, PathsToScan) == 64, "Offset mismatch for UFortVehicleAudioCookSettings::PathsToScan");
static_assert(offsetof(UFortVehicleAudioCookSettings, PlatformQualitySettingsToExclude) == 80, "Offset mismatch for UFortVehicleAudioCookSettings::PlatformQualitySettingsToExclude");

// /Script/VehicleAudioRuntime.FortVehicleAudioDataInterface
// Kind: Class; super: Interface
class UFortVehicleAudioDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.FortVehicleEngineAudioRegistry
// Kind: Class; super: WorldSubsystem
class UFortVehicleEngineAudioRegistry
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> LoadedAssets; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortVehicleEngineAudioRegistry, LoadedAssets) == 104, "Offset mismatch for UFortVehicleEngineAudioRegistry::LoadedAssets");

// /Script/VehicleAudioRuntime.FortVehicleSoundComponent
// Kind: Class; super: ActorComponent
class UFortVehicleSoundComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TScriptInterface<void> OwningVehicleData; // 0x00C8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortVehicleSoundComponent, OwningVehicleData) == 200, "Offset mismatch for UFortVehicleSoundComponent::OwningVehicleData");

// /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface
// Kind: Class; super: FortVehicleSoundComponent
class UFortVehicleSoundComponent_Surface
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SurfaceSoundsTable; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* OnSurfaceEnterSoundsTable; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* OnSurfaceExitSoundsTable; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* LandingSoundsTable; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    float SurfaceSoundFadeOutDuration; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float MinAirTimeForLandSound; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SurfaceSpeedParameterName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    std::uint8_t SlipAngleParameterName[0x4]; // 0x010C (Size: 0x4, Type: NameProperty)
    std::uint8_t bMapSlipAngleToCustomRange; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    std::uint8_t SourceSlipAngleRange[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetSlipAngleRange[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t bClampTargetSlipAngleRange; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    std::uint8_t CompressionMagnitudeParameterName[0x4]; // 0x013C (Size: 0x4, Type: NameProperty)
    std::uint8_t bMapCompressionMagnitudeToCustomRange; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0141
    std::uint8_t SourceCompressionMagnitudeRange[0x10]; // 0x0148 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetCompressionMagnitudeRange[0x10]; // 0x0158 (Size: 0x10, Type: StructProperty)
    std::uint8_t bClampTargetCompressionMagnitudeRange; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0169
    std::uint8_t LandingVelocityParameterName[0x4]; // 0x016C (Size: 0x4, Type: NameProperty)
    std::uint8_t bMapLandingVelocityToCustomRange; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0171
    std::uint8_t SourceLandingVelocityRange[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetLandingVelocityRange[0x10]; // 0x0188 (Size: 0x10, Type: StructProperty)
    std::uint8_t bClampLandingVelocityRange; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0xF]; // 0x0199
    TArray<void*> SurfaceAudioComponents; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortVehicleSoundComponent_Surface, SurfaceSoundsTable) == 224, "Offset mismatch for UFortVehicleSoundComponent_Surface::SurfaceSoundsTable");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, OnSurfaceEnterSoundsTable) == 232, "Offset mismatch for UFortVehicleSoundComponent_Surface::OnSurfaceEnterSoundsTable");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, OnSurfaceExitSoundsTable) == 240, "Offset mismatch for UFortVehicleSoundComponent_Surface::OnSurfaceExitSoundsTable");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, LandingSoundsTable) == 248, "Offset mismatch for UFortVehicleSoundComponent_Surface::LandingSoundsTable");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SurfaceSoundFadeOutDuration) == 256, "Offset mismatch for UFortVehicleSoundComponent_Surface::SurfaceSoundFadeOutDuration");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, MinAirTimeForLandSound) == 260, "Offset mismatch for UFortVehicleSoundComponent_Surface::MinAirTimeForLandSound");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SurfaceSpeedParameterName) == 264, "Offset mismatch for UFortVehicleSoundComponent_Surface::SurfaceSpeedParameterName");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SlipAngleParameterName) == 268, "Offset mismatch for UFortVehicleSoundComponent_Surface::SlipAngleParameterName");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bMapSlipAngleToCustomRange) == 272, "Offset mismatch for UFortVehicleSoundComponent_Surface::bMapSlipAngleToCustomRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SourceSlipAngleRange) == 280, "Offset mismatch for UFortVehicleSoundComponent_Surface::SourceSlipAngleRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, TargetSlipAngleRange) == 296, "Offset mismatch for UFortVehicleSoundComponent_Surface::TargetSlipAngleRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bClampTargetSlipAngleRange) == 312, "Offset mismatch for UFortVehicleSoundComponent_Surface::bClampTargetSlipAngleRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, CompressionMagnitudeParameterName) == 316, "Offset mismatch for UFortVehicleSoundComponent_Surface::CompressionMagnitudeParameterName");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bMapCompressionMagnitudeToCustomRange) == 320, "Offset mismatch for UFortVehicleSoundComponent_Surface::bMapCompressionMagnitudeToCustomRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SourceCompressionMagnitudeRange) == 328, "Offset mismatch for UFortVehicleSoundComponent_Surface::SourceCompressionMagnitudeRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, TargetCompressionMagnitudeRange) == 344, "Offset mismatch for UFortVehicleSoundComponent_Surface::TargetCompressionMagnitudeRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bClampTargetCompressionMagnitudeRange) == 360, "Offset mismatch for UFortVehicleSoundComponent_Surface::bClampTargetCompressionMagnitudeRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, LandingVelocityParameterName) == 364, "Offset mismatch for UFortVehicleSoundComponent_Surface::LandingVelocityParameterName");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bMapLandingVelocityToCustomRange) == 368, "Offset mismatch for UFortVehicleSoundComponent_Surface::bMapLandingVelocityToCustomRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SourceLandingVelocityRange) == 376, "Offset mismatch for UFortVehicleSoundComponent_Surface::SourceLandingVelocityRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, TargetLandingVelocityRange) == 392, "Offset mismatch for UFortVehicleSoundComponent_Surface::TargetLandingVelocityRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, bClampLandingVelocityRange) == 408, "Offset mismatch for UFortVehicleSoundComponent_Surface::bClampLandingVelocityRange");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, SurfaceAudioComponents) == 424, "Offset mismatch for UFortVehicleSoundComponent_Surface::SurfaceAudioComponents");

// /Script/VehicleAudioRuntime.FortVehicleSoundData
// Kind: Class; super: DataAsset
class UFortVehicleSoundData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AudioMotorSimComponents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundComponents; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseAudioComponentGroup; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreModelData; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    float MotorSimParamUpdateTolerance; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MaxBrakeThreshold; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float ThrottleMultiplier; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float SurfaceFrictionModifier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MotorFrictionModifier; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrictionJitter[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCanShiftOverride; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleSoundData, AudioMotorSimComponents) == 40, "Offset mismatch for UFortVehicleSoundData::AudioMotorSimComponents");
static_assert(offsetof(UFortVehicleSoundData, SoundComponents) == 56, "Offset mismatch for UFortVehicleSoundData::SoundComponents");
static_assert(offsetof(UFortVehicleSoundData, bUseAudioComponentGroup) == 72, "Offset mismatch for UFortVehicleSoundData::bUseAudioComponentGroup");
static_assert(offsetof(UFortVehicleSoundData, bIgnoreModelData) == 73, "Offset mismatch for UFortVehicleSoundData::bIgnoreModelData");
static_assert(offsetof(UFortVehicleSoundData, MotorSimParamUpdateTolerance) == 76, "Offset mismatch for UFortVehicleSoundData::MotorSimParamUpdateTolerance");
static_assert(offsetof(UFortVehicleSoundData, MaxBrakeThreshold) == 80, "Offset mismatch for UFortVehicleSoundData::MaxBrakeThreshold");
static_assert(offsetof(UFortVehicleSoundData, ThrottleMultiplier) == 84, "Offset mismatch for UFortVehicleSoundData::ThrottleMultiplier");
static_assert(offsetof(UFortVehicleSoundData, SurfaceFrictionModifier) == 88, "Offset mismatch for UFortVehicleSoundData::SurfaceFrictionModifier");
static_assert(offsetof(UFortVehicleSoundData, MotorFrictionModifier) == 92, "Offset mismatch for UFortVehicleSoundData::MotorFrictionModifier");
static_assert(offsetof(UFortVehicleSoundData, FrictionJitter) == 96, "Offset mismatch for UFortVehicleSoundData::FrictionJitter");
static_assert(offsetof(UFortVehicleSoundData, bCanShiftOverride) == 112, "Offset mismatch for UFortVehicleSoundData::bCanShiftOverride");

// /Script/VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioClassMappings
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterVehicleAudioClassMappings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClassMappings; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterVehicleAudioClassMappings, ClassMappings) == 40, "Offset mismatch for UGameFeatureAction_RegisterVehicleAudioClassMappings::ClassMappings");

// /Script/VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioControllerGroup
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterVehicleAudioControllerGroup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> GroupsToRegister; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterVehicleAudioControllerGroup, GroupsToRegister) == 40, "Offset mismatch for UGameFeatureAction_RegisterVehicleAudioControllerGroup::GroupsToRegister");

// /Script/VehicleAudioRuntime.GameFeatureAction_SetMaxLoadedEngineAudioItems
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetMaxLoadedEngineAudioItems
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t DefaultSetting; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t XB1Setting; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t XSXSetting; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t PS4Setting; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t PS5Setting; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t MobileSetting; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t SwitchSetting; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, DefaultSetting) == 40, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::DefaultSetting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, XB1Setting) == 44, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::XB1Setting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, XSXSetting) == 48, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::XSXSetting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, PS4Setting) == 52, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::PS4Setting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, PS5Setting) == 56, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::PS5Setting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, MobileSetting) == 60, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::MobileSetting");
static_assert(offsetof(UGameFeatureAction_SetMaxLoadedEngineAudioItems, SwitchSetting) == 64, "Offset mismatch for UGameFeatureAction_SetMaxLoadedEngineAudioItems::SwitchSetting");

// /Script/VehicleAudioRuntime.VehicleAudioController
// Kind: Class; super: VehicleAudioControllerBase
class UVehicleAudioController
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    void* VehicleSoundData; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* EngineComponentAttenuation; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* ControllerUpdateRule; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* AudioMotorModelUpdater; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* AudioParameterUpdater; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* AudioMotorModelComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* EngineComponent; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedParameterPack; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundGeneratorHandle; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* VehicleAudioComponentGroup; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VehicleSoundComponents; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleAudioController, VehicleSoundData) == 648, "Offset mismatch for UVehicleAudioController::VehicleSoundData");
static_assert(offsetof(UVehicleAudioController, EngineComponentAttenuation) == 656, "Offset mismatch for UVehicleAudioController::EngineComponentAttenuation");
static_assert(offsetof(UVehicleAudioController, ControllerUpdateRule) == 664, "Offset mismatch for UVehicleAudioController::ControllerUpdateRule");
static_assert(offsetof(UVehicleAudioController, AudioMotorModelUpdater) == 672, "Offset mismatch for UVehicleAudioController::AudioMotorModelUpdater");
static_assert(offsetof(UVehicleAudioController, AudioParameterUpdater) == 680, "Offset mismatch for UVehicleAudioController::AudioParameterUpdater");
static_assert(offsetof(UVehicleAudioController, AudioMotorModelComponent) == 688, "Offset mismatch for UVehicleAudioController::AudioMotorModelComponent");
static_assert(offsetof(UVehicleAudioController, EngineComponent) == 696, "Offset mismatch for UVehicleAudioController::EngineComponent");
static_assert(offsetof(UVehicleAudioController, CachedParameterPack) == 704, "Offset mismatch for UVehicleAudioController::CachedParameterPack");
static_assert(offsetof(UVehicleAudioController, MetasoundGeneratorHandle) == 712, "Offset mismatch for UVehicleAudioController::MetasoundGeneratorHandle");
static_assert(offsetof(UVehicleAudioController, VehicleAudioComponentGroup) == 720, "Offset mismatch for UVehicleAudioController::VehicleAudioComponentGroup");
static_assert(offsetof(UVehicleAudioController, VehicleSoundComponents) == 728, "Offset mismatch for UVehicleAudioController::VehicleSoundComponents");

// /Script/VehicleAudioRuntime.VehicleAudioControllerBase
// Kind: Class; super: Actor
class UVehicleAudioControllerBase
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

static_assert(offsetof(UVehicleAudioControllerBase, PrimaryActorTick) == 40, "Offset mismatch for UVehicleAudioControllerBase::PrimaryActorTick");
static_assert(offsetof(UVehicleAudioControllerBase, bAlwaysRelevant) == 88, "Offset mismatch for UVehicleAudioControllerBase::bAlwaysRelevant");
static_assert(offsetof(UVehicleAudioControllerBase, bExchangedRoles) == 89, "Offset mismatch for UVehicleAudioControllerBase::bExchangedRoles");
static_assert(offsetof(UVehicleAudioControllerBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UVehicleAudioControllerBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UVehicleAudioControllerBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UVehicleAudioControllerBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UVehicleAudioControllerBase, bActorEnableCollision) == 93, "Offset mismatch for UVehicleAudioControllerBase::bActorEnableCollision");
static_assert(offsetof(UVehicleAudioControllerBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UVehicleAudioControllerBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVehicleAudioControllerBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UVehicleAudioControllerBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVehicleAudioControllerBase, RemoteRole) == 96, "Offset mismatch for UVehicleAudioControllerBase::RemoteRole");
static_assert(offsetof(UVehicleAudioControllerBase, InitialLifeSpan) == 100, "Offset mismatch for UVehicleAudioControllerBase::InitialLifeSpan");
static_assert(offsetof(UVehicleAudioControllerBase, CustomTimeDilation) == 104, "Offset mismatch for UVehicleAudioControllerBase::CustomTimeDilation");
static_assert(offsetof(UVehicleAudioControllerBase, RayTracingGroupId) == 108, "Offset mismatch for UVehicleAudioControllerBase::RayTracingGroupId");
static_assert(offsetof(UVehicleAudioControllerBase, AttachmentReplication) == 112, "Offset mismatch for UVehicleAudioControllerBase::AttachmentReplication");
static_assert(offsetof(UVehicleAudioControllerBase, ReplicatedMovement) == 208, "Offset mismatch for UVehicleAudioControllerBase::ReplicatedMovement");
static_assert(offsetof(UVehicleAudioControllerBase, Owner) == 344, "Offset mismatch for UVehicleAudioControllerBase::Owner");
static_assert(offsetof(UVehicleAudioControllerBase, NetDriverName) == 352, "Offset mismatch for UVehicleAudioControllerBase::NetDriverName");
static_assert(offsetof(UVehicleAudioControllerBase, Role) == 356, "Offset mismatch for UVehicleAudioControllerBase::Role");
static_assert(offsetof(UVehicleAudioControllerBase, NetDormancy) == 357, "Offset mismatch for UVehicleAudioControllerBase::NetDormancy");
static_assert(offsetof(UVehicleAudioControllerBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UVehicleAudioControllerBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(UVehicleAudioControllerBase, AutoReceiveInput) == 359, "Offset mismatch for UVehicleAudioControllerBase::AutoReceiveInput");
static_assert(offsetof(UVehicleAudioControllerBase, InputPriority) == 360, "Offset mismatch for UVehicleAudioControllerBase::InputPriority");
static_assert(offsetof(UVehicleAudioControllerBase, InputComponent) == 368, "Offset mismatch for UVehicleAudioControllerBase::InputComponent");
static_assert(offsetof(UVehicleAudioControllerBase, NetTag) == 376, "Offset mismatch for UVehicleAudioControllerBase::NetTag");
static_assert(offsetof(UVehicleAudioControllerBase, NetCullDistanceSquared) == 380, "Offset mismatch for UVehicleAudioControllerBase::NetCullDistanceSquared");
static_assert(offsetof(UVehicleAudioControllerBase, NetUpdateFrequency) == 384, "Offset mismatch for UVehicleAudioControllerBase::NetUpdateFrequency");
static_assert(offsetof(UVehicleAudioControllerBase, MinNetUpdateFrequency) == 388, "Offset mismatch for UVehicleAudioControllerBase::MinNetUpdateFrequency");
static_assert(offsetof(UVehicleAudioControllerBase, NetPriority) == 392, "Offset mismatch for UVehicleAudioControllerBase::NetPriority");
static_assert(offsetof(UVehicleAudioControllerBase, PhysicsReplicationMode) == 396, "Offset mismatch for UVehicleAudioControllerBase::PhysicsReplicationMode");
static_assert(offsetof(UVehicleAudioControllerBase, Instigator) == 408, "Offset mismatch for UVehicleAudioControllerBase::Instigator");
static_assert(offsetof(UVehicleAudioControllerBase, Children) == 416, "Offset mismatch for UVehicleAudioControllerBase::Children");
static_assert(offsetof(UVehicleAudioControllerBase, RootComponent) == 432, "Offset mismatch for UVehicleAudioControllerBase::RootComponent");
static_assert(offsetof(UVehicleAudioControllerBase, HLODLayer) == 448, "Offset mismatch for UVehicleAudioControllerBase::HLODLayer");
static_assert(offsetof(UVehicleAudioControllerBase, Layers) == 456, "Offset mismatch for UVehicleAudioControllerBase::Layers");
static_assert(offsetof(UVehicleAudioControllerBase, ParentComponent) == 472, "Offset mismatch for UVehicleAudioControllerBase::ParentComponent");
static_assert(offsetof(UVehicleAudioControllerBase, Tags) == 496, "Offset mismatch for UVehicleAudioControllerBase::Tags");
static_assert(offsetof(UVehicleAudioControllerBase, OnTakeAnyDamage) == 512, "Offset mismatch for UVehicleAudioControllerBase::OnTakeAnyDamage");
static_assert(offsetof(UVehicleAudioControllerBase, OnTakePointDamage) == 513, "Offset mismatch for UVehicleAudioControllerBase::OnTakePointDamage");
static_assert(offsetof(UVehicleAudioControllerBase, OnTakeRadialDamage) == 514, "Offset mismatch for UVehicleAudioControllerBase::OnTakeRadialDamage");
static_assert(offsetof(UVehicleAudioControllerBase, OnActorBeginOverlap) == 515, "Offset mismatch for UVehicleAudioControllerBase::OnActorBeginOverlap");
static_assert(offsetof(UVehicleAudioControllerBase, OnActorEndOverlap) == 516, "Offset mismatch for UVehicleAudioControllerBase::OnActorEndOverlap");
static_assert(offsetof(UVehicleAudioControllerBase, OnBeginCursorOver) == 517, "Offset mismatch for UVehicleAudioControllerBase::OnBeginCursorOver");
static_assert(offsetof(UVehicleAudioControllerBase, OnEndCursorOver) == 518, "Offset mismatch for UVehicleAudioControllerBase::OnEndCursorOver");
static_assert(offsetof(UVehicleAudioControllerBase, OnClicked) == 519, "Offset mismatch for UVehicleAudioControllerBase::OnClicked");
static_assert(offsetof(UVehicleAudioControllerBase, OnReleased) == 520, "Offset mismatch for UVehicleAudioControllerBase::OnReleased");
static_assert(offsetof(UVehicleAudioControllerBase, OnInputTouchBegin) == 521, "Offset mismatch for UVehicleAudioControllerBase::OnInputTouchBegin");
static_assert(offsetof(UVehicleAudioControllerBase, OnInputTouchEnd) == 522, "Offset mismatch for UVehicleAudioControllerBase::OnInputTouchEnd");
static_assert(offsetof(UVehicleAudioControllerBase, OnInputTouchEnter) == 523, "Offset mismatch for UVehicleAudioControllerBase::OnInputTouchEnter");
static_assert(offsetof(UVehicleAudioControllerBase, OnInputTouchLeave) == 524, "Offset mismatch for UVehicleAudioControllerBase::OnInputTouchLeave");
static_assert(offsetof(UVehicleAudioControllerBase, OnActorHit) == 525, "Offset mismatch for UVehicleAudioControllerBase::OnActorHit");
static_assert(offsetof(UVehicleAudioControllerBase, OnDestroyed) == 526, "Offset mismatch for UVehicleAudioControllerBase::OnDestroyed");
static_assert(offsetof(UVehicleAudioControllerBase, OnEndPlay) == 527, "Offset mismatch for UVehicleAudioControllerBase::OnEndPlay");
static_assert(offsetof(UVehicleAudioControllerBase, InstanceComponents) == 592, "Offset mismatch for UVehicleAudioControllerBase::InstanceComponents");
static_assert(offsetof(UVehicleAudioControllerBase, BlueprintCreatedComponents) == 608, "Offset mismatch for UVehicleAudioControllerBase::BlueprintCreatedComponents");

// /Script/VehicleAudioRuntime.VehicleAudioControllerConfig
// Kind: Class; super: DataAsset
class UVehicleAudioControllerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VehicleAudioControllerClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* AudioControllerLogic; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSoundComponents; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* UserDefinedData; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleAudioControllerConfig, VehicleAudioControllerClass) == 40, "Offset mismatch for UVehicleAudioControllerConfig::VehicleAudioControllerClass");
static_assert(offsetof(UVehicleAudioControllerConfig, AudioControllerLogic) == 48, "Offset mismatch for UVehicleAudioControllerConfig::AudioControllerLogic");
static_assert(offsetof(UVehicleAudioControllerConfig, VehicleSoundComponents) == 56, "Offset mismatch for UVehicleAudioControllerConfig::VehicleSoundComponents");
static_assert(offsetof(UVehicleAudioControllerConfig, UserDefinedData) == 64, "Offset mismatch for UVehicleAudioControllerConfig::UserDefinedData");

// /Script/VehicleAudioRuntime.VehicleAudioControllerInterface
// Kind: Class; super: Interface
class UVehicleAudioControllerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioControllerLogic
// Kind: Class; super: DataAsset
class UVehicleAudioControllerLogic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ControllerUpdateRule; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* AudioMotorModelUpdater; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* AudioParameterUpdater; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UVehicleAudioControllerLogic, ControllerUpdateRule) == 40, "Offset mismatch for UVehicleAudioControllerLogic::ControllerUpdateRule");
static_assert(offsetof(UVehicleAudioControllerLogic, AudioMotorModelUpdater) == 48, "Offset mismatch for UVehicleAudioControllerLogic::AudioMotorModelUpdater");
static_assert(offsetof(UVehicleAudioControllerLogic, AudioParameterUpdater) == 56, "Offset mismatch for UVehicleAudioControllerLogic::AudioParameterUpdater");

// /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface
// Kind: Class; super: Interface
class UVehicleAudioLifecycleInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioMotorModelUpdaterBase
// Kind: Class; super: Object
class UVehicleAudioMotorModelUpdaterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioMotorModelUpdater_Default
// Kind: Class; super: VehicleAudioMotorModelUpdaterBase
class UVehicleAudioMotorModelUpdater_Default
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioParameterUpdaterBase
// Kind: Class; super: Object
class UVehicleAudioParameterUpdaterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioParameterUpdater_Default
// Kind: Class; super: VehicleAudioParameterUpdaterBase
class UVehicleAudioParameterUpdater_Default
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioUpdateRuleBase
// Kind: Class; super: Object
class UVehicleAudioUpdateRuleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioUpdateRule_Default
// Kind: Class; super: VehicleAudioUpdateRuleBase
class UVehicleAudioUpdateRule_Default
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleAudioRuntime.VehicleAudioUserDefinedData
// Kind: Class; super: DataAsset
class UVehicleAudioUserDefinedData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UserDefinedData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleAudioUserDefinedData, UserDefinedData) == 40, "Offset mismatch for UVehicleAudioUserDefinedData::UserDefinedData");

// /Script/VehicleAudioRuntime.VehicleSoundSurfaceData
// Kind: Class; super: PrimaryDataAsset
class UVehicleSoundSurfaceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SurfaceData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSound; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* InAirSound; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleSoundSurfaceData, SurfaceData) == 40, "Offset mismatch for UVehicleSoundSurfaceData::SurfaceData");
static_assert(offsetof(UVehicleSoundSurfaceData, DefaultSound) == 48, "Offset mismatch for UVehicleSoundSurfaceData::DefaultSound");
static_assert(offsetof(UVehicleSoundSurfaceData, InAirSound) == 56, "Offset mismatch for UVehicleSoundSurfaceData::InAirSound");

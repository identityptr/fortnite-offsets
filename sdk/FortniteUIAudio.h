/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteUIAudio
 */
#pragma once
#include "Basic.h"

// /Script/FortniteUIAudio.BusNameVolumePair
// Kind: ScriptStruct; super: none
struct FBusNameVolumePair
{
public:
    std::uint8_t BusName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Volume; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBusNameVolumePair, BusName) == 0, "Offset mismatch for FBusNameVolumePair::BusName");
static_assert(offsetof(FBusNameVolumePair, Volume) == 4, "Offset mismatch for FBusNameVolumePair::Volume");

// /Script/FortniteUIAudio.EditorBackgroundMutingUserMix
// Kind: ScriptStruct; super: UserMix
struct FEditorBackgroundMutingUserMix
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ControlBusMix[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float DeactivationDelay; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEditorBackgroundMutingUserMix, ControlBusMix) == 8, "Offset mismatch for FEditorBackgroundMutingUserMix::ControlBusMix");
static_assert(offsetof(FEditorBackgroundMutingUserMix, DeactivationDelay) == 40, "Offset mismatch for FEditorBackgroundMutingUserMix::DeactivationDelay");

// /Script/FortniteUIAudio.FrontEndUserMix
// Kind: ScriptStruct; super: UserMix
struct FFrontEndUserMix
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ControlBusMix[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float DeactivationDelay; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFrontEndUserMix, ControlBusMix) == 8, "Offset mismatch for FFrontEndUserMix::ControlBusMix");
static_assert(offsetof(FFrontEndUserMix, DeactivationDelay) == 40, "Offset mismatch for FFrontEndUserMix::DeactivationDelay");

// /Script/FortniteUIAudio.UserMix
// Kind: ScriptStruct; super: none
struct FUserMix
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ControlBusMix[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float DeactivationDelay; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUserMix, ControlBusMix) == 8, "Offset mismatch for FUserMix::ControlBusMix");
static_assert(offsetof(FUserMix, DeactivationDelay) == 40, "Offset mismatch for FUserMix::DeactivationDelay");

// /Script/FortniteUIAudio.FortAudioUserMixGameUserSettings
// Kind: Class; super: Object
class UFortAudioUserMixGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> UserMixCurrentValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Version; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAudioUserMixGameUserSettings, UserMixCurrentValues) == 40, "Offset mismatch for UFortAudioUserMixGameUserSettings::UserMixCurrentValues");
static_assert(offsetof(UFortAudioUserMixGameUserSettings, Version) == 56, "Offset mismatch for UFortAudioUserMixGameUserSettings::Version");

// /Script/FortniteUIAudio.FortAudioUserMixSettings
// Kind: Class; super: DeveloperSettings
class UFortAudioUserMixSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> UserMixes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAudioUserMixSettings, UserMixes) == 48, "Offset mismatch for UFortAudioUserMixSettings::UserMixes");

// /Script/FortniteUIAudio.FortAudioUserMixSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortAudioUserMixSubsystem
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SubsystemDataAssetPath[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    void* SubsystemData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* UserSettings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DirtyBusNames; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Mixes; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedMixes; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00B0
    TArray<void*> MutedBuses; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAudioUserMixSubsystem, SubsystemDataAssetPath) == 88, "Offset mismatch for UFortAudioUserMixSubsystem::SubsystemDataAssetPath");
static_assert(offsetof(UFortAudioUserMixSubsystem, SubsystemData) == 112, "Offset mismatch for UFortAudioUserMixSubsystem::SubsystemData");
static_assert(offsetof(UFortAudioUserMixSubsystem, UserSettings) == 120, "Offset mismatch for UFortAudioUserMixSubsystem::UserSettings");
static_assert(offsetof(UFortAudioUserMixSubsystem, DirtyBusNames) == 128, "Offset mismatch for UFortAudioUserMixSubsystem::DirtyBusNames");
static_assert(offsetof(UFortAudioUserMixSubsystem, Mixes) == 144, "Offset mismatch for UFortAudioUserMixSubsystem::Mixes");
static_assert(offsetof(UFortAudioUserMixSubsystem, LoadedMixes) == 160, "Offset mismatch for UFortAudioUserMixSubsystem::LoadedMixes");
static_assert(offsetof(UFortAudioUserMixSubsystem, MutedBuses) == 192, "Offset mismatch for UFortAudioUserMixSubsystem::MutedBuses");

// /Script/FortniteUIAudio.FortAudioUserMixSubsystemData
// Kind: Class; super: PrimaryDataAsset
class UFortAudioUserMixSubsystemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> UserMixes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAudioUserMixSubsystemData, UserMixes) == 40, "Offset mismatch for UFortAudioUserMixSubsystemData::UserMixes");

// /Script/FortniteUIAudio.FortSettingVolume
// Kind: Class; super: FortSettingValueScalar
class UFortSettingVolume
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* ControlBus; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingVolume, ControlBus) == 496, "Offset mismatch for UFortSettingVolume::ControlBus");

// /Script/FortniteUIAudio.FortSettingVolumeMarkup
// Kind: Class; super: FortSettingMarkup
class UFortSettingVolumeMarkup
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    double DefaultValue; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    void* ControlBus; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingVolumeMarkup, DefaultValue) == 136, "Offset mismatch for UFortSettingVolumeMarkup::DefaultValue");
static_assert(offsetof(UFortSettingVolumeMarkup, ControlBus) == 144, "Offset mismatch for UFortSettingVolumeMarkup::ControlBus");

// /Script/FortniteUIAudio.GameFeatureAction_ActivateAudioUserMix
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ActivateAudioUserMix
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UserMix[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameFeatureAction_ActivateAudioUserMix, UserMix) == 40, "Offset mismatch for UGameFeatureAction_ActivateAudioUserMix::UserMix");

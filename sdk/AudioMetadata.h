/**
 * decamp dumper generated SDK
 * Package: /Script/AudioMetadata
 */
#pragma once
#include "Basic.h"

// /Script/AudioMetadata.AudioMetadataModulationSettings
// Kind: ScriptStruct; super: none
struct FAudioMetadataModulationSettings
{
public:
    void* ControlBusLicensedAudioMuteAll; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ControlBusLicensedAudioMuteOthers; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioMetadataModulationSettings, ControlBusLicensedAudioMuteAll) == 0, "Offset mismatch for FAudioMetadataModulationSettings::ControlBusLicensedAudioMuteAll");
static_assert(offsetof(FAudioMetadataModulationSettings, ControlBusLicensedAudioMuteOthers) == 8, "Offset mismatch for FAudioMetadataModulationSettings::ControlBusLicensedAudioMuteOthers");

// /Script/AudioMetadata.AudioMetadataSubmixSettings
// Kind: ScriptStruct; super: none
struct FAudioMetadataSubmixSettings
{
public:
    void* LicensedAudioSubmix; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PostPartySubmix; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioMetadataSubmixSettings, LicensedAudioSubmix) == 0, "Offset mismatch for FAudioMetadataSubmixSettings::LicensedAudioSubmix");
static_assert(offsetof(FAudioMetadataSubmixSettings, PostPartySubmix) == 8, "Offset mismatch for FAudioMetadataSubmixSettings::PostPartySubmix");

// /Script/AudioMetadata.AudioMetadataDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UAudioMetadataDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ModulationSettings[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubmixSettings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMetadataDeveloperSettings, ModulationSettings) == 48, "Offset mismatch for UAudioMetadataDeveloperSettings::ModulationSettings");
static_assert(offsetof(UAudioMetadataDeveloperSettings, SubmixSettings) == 64, "Offset mismatch for UAudioMetadataDeveloperSettings::SubmixSettings");

// /Script/AudioMetadata.AudioMetadataSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UAudioMetadataSubsystem
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/EpicGamesAssets
 */
#pragma once
#include "Basic.h"

// /Script/EpicGamesAssets.VerseParticleSystemIntParam
// Kind: ScriptStruct; super: none
struct FVerseParticleSystemIntParam
{
public:
    std::uint8_t Key[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVerseParticleSystemIntParam, Key) == 0, "Offset mismatch for FVerseParticleSystemIntParam::Key");
static_assert(offsetof(FVerseParticleSystemIntParam, Value) == 4, "Offset mismatch for FVerseParticleSystemIntParam::Value");

// /Script/EpicGamesAssets.VerseParticleSystemRepData
// Kind: ScriptStruct; super: none
struct FVerseParticleSystemRepData
{
public:
    double StartTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    void* ParticleSystemAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PendingIntParams; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseParticleSystemRepData, StartTime) == 0, "Offset mismatch for FVerseParticleSystemRepData::StartTime");
static_assert(offsetof(FVerseParticleSystemRepData, ParticleSystemAsset) == 8, "Offset mismatch for FVerseParticleSystemRepData::ParticleSystemAsset");
static_assert(offsetof(FVerseParticleSystemRepData, PendingIntParams) == 16, "Offset mismatch for FVerseParticleSystemRepData::PendingIntParams");

// /Script/EpicGamesAssets.PlayedSoundReplication
// Kind: Class; super: Actor
class UPlayedSoundReplication
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    double StartTime; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPlaySound2D; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    std::uint8_t SoundAsset[0x20]; // 0x0280 (Size: 0x20, Type: SoftObjectProperty)
    void* AudioComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* SoundAttenuation; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayedSoundReplication, StartTime) == 624, "Offset mismatch for UPlayedSoundReplication::StartTime");
static_assert(offsetof(UPlayedSoundReplication, bPlaySound2D) == 632, "Offset mismatch for UPlayedSoundReplication::bPlaySound2D");
static_assert(offsetof(UPlayedSoundReplication, SoundAsset) == 640, "Offset mismatch for UPlayedSoundReplication::SoundAsset");
static_assert(offsetof(UPlayedSoundReplication, AudioComponent) == 672, "Offset mismatch for UPlayedSoundReplication::AudioComponent");
static_assert(offsetof(UPlayedSoundReplication, SoundAttenuation) == 680, "Offset mismatch for UPlayedSoundReplication::SoundAttenuation");

// /Script/EpicGamesAssets.SpawnedParticleSystemReplication
// Kind: Class; super: Actor
class USpawnedParticleSystemReplication
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ParticleSystemRepData[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    void* ParticleSystemComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpawnedParticleSystemReplication, ParticleSystemRepData) == 624, "Offset mismatch for USpawnedParticleSystemReplication::ParticleSystemRepData");
static_assert(offsetof(USpawnedParticleSystemReplication, ParticleSystemComponent) == 656, "Offset mismatch for USpawnedParticleSystemReplication::ParticleSystemComponent");

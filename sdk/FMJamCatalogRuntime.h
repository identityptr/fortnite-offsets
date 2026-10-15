/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamCatalogRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamCatalogRuntime.FMJamLoop
// Kind: Class; super: PrimaryDataAsset
class UFMJamLoop
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MidiFileMajor[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MidiFileMinor[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FusionPatchMajor[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FusionPatchMinor[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bOverrideDefaultTransposition; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    TMap<void*, void*> Transposes; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TSoftObjectPtr<void> Song; // 0x00C0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFMJamLoop, MidiFileMajor) == 40, "Offset mismatch for UFMJamLoop::MidiFileMajor");
static_assert(offsetof(UFMJamLoop, MidiFileMinor) == 72, "Offset mismatch for UFMJamLoop::MidiFileMinor");
static_assert(offsetof(UFMJamLoop, FusionPatchMajor) == 104, "Offset mismatch for UFMJamLoop::FusionPatchMajor");
static_assert(offsetof(UFMJamLoop, FusionPatchMinor) == 136, "Offset mismatch for UFMJamLoop::FusionPatchMinor");
static_assert(offsetof(UFMJamLoop, bOverrideDefaultTransposition) == 168, "Offset mismatch for UFMJamLoop::bOverrideDefaultTransposition");
static_assert(offsetof(UFMJamLoop, Transposes) == 176, "Offset mismatch for UFMJamLoop::Transposes");
static_assert(offsetof(UFMJamLoop, Song) == 192, "Offset mismatch for UFMJamLoop::Song");

// /Script/FMJamCatalogRuntime.FMJamSong
// Kind: Class; super: SparksSongData
class UFMJamSong
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::int32_t Tempo; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    void* Lead; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* Misc; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* bass; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* Beat; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMJamSong, Tempo) == 184, "Offset mismatch for UFMJamSong::Tempo");
static_assert(offsetof(UFMJamSong, Lead) == 192, "Offset mismatch for UFMJamSong::Lead");
static_assert(offsetof(UFMJamSong, Misc) == 200, "Offset mismatch for UFMJamSong::Misc");
static_assert(offsetof(UFMJamSong, bass) == 208, "Offset mismatch for UFMJamSong::bass");
static_assert(offsetof(UFMJamSong, Beat) == 216, "Offset mismatch for UFMJamSong::Beat");

// /Script/FMJamCatalogRuntime.FMJamSongCatalog
// Kind: Class; super: GameStateComponent
class UFMJamSongCatalog
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TMap<void*, void*> SongsByShortName; // 0x0108 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0118
    void* CachedCMSCatalog; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumCMSRetries; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsInitialScanComplete; // 0x0134 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMJamSongCatalog, SongsByShortName) == 264, "Offset mismatch for UFMJamSongCatalog::SongsByShortName");
static_assert(offsetof(UFMJamSongCatalog, CachedCMSCatalog) == 296, "Offset mismatch for UFMJamSongCatalog::CachedCMSCatalog");
static_assert(offsetof(UFMJamSongCatalog, NumCMSRetries) == 304, "Offset mismatch for UFMJamSongCatalog::NumCMSRetries");
static_assert(offsetof(UFMJamSongCatalog, bIsInitialScanComplete) == 308, "Offset mismatch for UFMJamSongCatalog::bIsInitialScanComplete");

/**
 * decamp dumper generated SDK
 * Package: /Script/SparksAlbumArtRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksAlbumArtRuntime.SparksBakedAlbumArt
// Kind: ScriptStruct; super: TableRowBase
struct FSparksBakedAlbumArt
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> AlbumArt; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSparksBakedAlbumArt, SongShortName) == 8, "Offset mismatch for FSparksBakedAlbumArt::SongShortName");
static_assert(offsetof(FSparksBakedAlbumArt, AlbumArt) == 16, "Offset mismatch for FSparksBakedAlbumArt::AlbumArt");

// /Script/SparksAlbumArtRuntime.SparksAlbumArtData
// Kind: Class; super: PrimaryDataAsset
class USparksAlbumArtData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* BakedAlbumArt; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksAlbumArtData, BakedAlbumArt) == 40, "Offset mismatch for USparksAlbumArtData::BakedAlbumArt");

// /Script/SparksAlbumArtRuntime.SparksAlbumArtManager
// Kind: Class; super: GameInstanceSubsystem
class USparksAlbumArtManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CachedAlbumArtData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksAlbumArtManager, CachedAlbumArtData) == 48, "Offset mismatch for USparksAlbumArtManager::CachedAlbumArtData");

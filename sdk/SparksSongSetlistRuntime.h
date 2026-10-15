/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSongSetlistRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksSongSetlistRuntime.SetlistChanged
// Kind: ScriptStruct; super: none
struct FSetlistChanged
{
public:
    TWeakObjectPtr<void> Setlist; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSetlistChanged, Setlist) == 0, "Offset mismatch for FSetlistChanged::Setlist");

// /Script/SparksSongSetlistRuntime.SparksCustomSetlistEntry
// Kind: ScriptStruct; super: none
struct FSparksCustomSetlistEntry
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> AddedByPlayer; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSparksCustomSetlistEntry, SongShortName) == 0, "Offset mismatch for FSparksCustomSetlistEntry::SongShortName");
static_assert(offsetof(FSparksCustomSetlistEntry, AddedByPlayer) == 4, "Offset mismatch for FSparksCustomSetlistEntry::AddedByPlayer");

// /Script/SparksSongSetlistRuntime.SparksCustomSetlist
// Kind: Class; super: PlayspaceComponent
class USparksCustomSetlist
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnSetlistChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> SetlistEntries; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksCustomSetlist, OnSetlistChanged) == 200, "Offset mismatch for USparksCustomSetlist::OnSetlistChanged");
static_assert(offsetof(USparksCustomSetlist, SetlistEntries) == 216, "Offset mismatch for USparksCustomSetlist::SetlistEntries");

// /Script/SparksSongSetlistRuntime.SparksPremadeSetlist
// Kind: Class; super: DataAsset
class USparksPremadeSetlist
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> SongShortNameList; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksPremadeSetlist, SongShortNameList) == 48, "Offset mismatch for USparksPremadeSetlist::SongShortNameList");

// /Script/SparksSongSetlistRuntime.SparksSetlistInterface
// Kind: Class; super: Interface
class USparksSetlistInterface
{
public:
    std::uint8_t Opaque[1];
};

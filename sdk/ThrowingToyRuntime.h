/**
 * decamp dumper generated SDK
 * Package: /Script/ThrowingToyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ThrowingToyRuntime.ThrowingToyData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FThrowingToyData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ThrowingToy; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldItemGuid[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FThrowingToyData, ThrowingToy) == 16, "Offset mismatch for FThrowingToyData::ThrowingToy");
static_assert(offsetof(FThrowingToyData, WorldItemGuid) == 24, "Offset mismatch for FThrowingToyData::WorldItemGuid");

// /Script/ThrowingToyRuntime.ThrowingToyDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FThrowingToyDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FThrowingToyDataArray, Entries) == 72, "Offset mismatch for FThrowingToyDataArray::Entries");

// /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
// Kind: Class; super: ActorComponent
class UThrowingToyTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ThrowingToysData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UThrowingToyTrackerComponent, ThrowingToysData) == 192, "Offset mismatch for UThrowingToyTrackerComponent::ThrowingToysData");

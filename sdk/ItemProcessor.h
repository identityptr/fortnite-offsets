/**
 * decamp dumper generated SDK
 * Package: /Script/ItemProcessor
 */
#pragma once
#include "Basic.h"

// /Script/ItemProcessor.ItemProcessorData
// Kind: ScriptStruct; super: none
struct FItemProcessorData
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemProcessorData, Tags) == 0, "Offset mismatch for FItemProcessorData::Tags");

// /Script/ItemProcessor.ItemProcessorRow
// Kind: ScriptStruct; super: TableRowBase
struct FItemProcessorRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Priority; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Requirements[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemProcessorRow, Item) == 8, "Offset mismatch for FItemProcessorRow::Item");
static_assert(offsetof(FItemProcessorRow, Priority) == 40, "Offset mismatch for FItemProcessorRow::Priority");
static_assert(offsetof(FItemProcessorRow, Requirements) == 48, "Offset mismatch for FItemProcessorRow::Requirements");

// /Script/ItemProcessor.ItemProcessorComponent
// Kind: Class; super: ActorComponent
class UItemProcessorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnProcessComplete; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ItemProcessorData[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UItemProcessorComponent, OnProcessComplete) == 192, "Offset mismatch for UItemProcessorComponent::OnProcessComplete");
static_assert(offsetof(UItemProcessorComponent, ItemProcessorData) == 208, "Offset mismatch for UItemProcessorComponent::ItemProcessorData");

/**
 * decamp dumper generated SDK
 * Package: /Script/ItemizationDebug
 */
#pragma once
#include "Basic.h"

// /Script/ItemizationDebug.FortInventoryDebugSnapshot
// Kind: ScriptStruct; super: none
struct FFortInventoryDebugSnapshot
{
public:
    FString FortInventoryName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Inventory[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsValid; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortInventoryDebugSnapshot, FortInventoryName) == 0, "Offset mismatch for FFortInventoryDebugSnapshot::FortInventoryName");
static_assert(offsetof(FFortInventoryDebugSnapshot, Inventory) == 16, "Offset mismatch for FFortInventoryDebugSnapshot::Inventory");
static_assert(offsetof(FFortInventoryDebugSnapshot, bIsValid) == 32, "Offset mismatch for FFortInventoryDebugSnapshot::bIsValid");

// /Script/ItemizationDebug.InventoryDebugSnapshot
// Kind: ScriptStruct; super: none
struct FInventoryDebugSnapshot
{
public:
    FString NativeInventoryName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString VerseInventoryName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString VerseInventoryType; // 0x0020 (Size: 0x10, Type: StrProperty)
    TArray<void*> Items; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildInventoryIndices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int64_t Priority; // 0x0050 (Size: 0x8, Type: Int64Property)
    std::int64_t TotalSlotCount; // 0x0058 (Size: 0x8, Type: Int64Property)
    std::int32_t HotbarClientFocusedItemSlotIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldDrawClientFocusedSlot; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideSlotIndices; // 0x0065 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInventoryDebugSnapshot, NativeInventoryName) == 0, "Offset mismatch for FInventoryDebugSnapshot::NativeInventoryName");
static_assert(offsetof(FInventoryDebugSnapshot, VerseInventoryName) == 16, "Offset mismatch for FInventoryDebugSnapshot::VerseInventoryName");
static_assert(offsetof(FInventoryDebugSnapshot, VerseInventoryType) == 32, "Offset mismatch for FInventoryDebugSnapshot::VerseInventoryType");
static_assert(offsetof(FInventoryDebugSnapshot, Items) == 48, "Offset mismatch for FInventoryDebugSnapshot::Items");
static_assert(offsetof(FInventoryDebugSnapshot, ChildInventoryIndices) == 64, "Offset mismatch for FInventoryDebugSnapshot::ChildInventoryIndices");
static_assert(offsetof(FInventoryDebugSnapshot, Priority) == 80, "Offset mismatch for FInventoryDebugSnapshot::Priority");
static_assert(offsetof(FInventoryDebugSnapshot, TotalSlotCount) == 88, "Offset mismatch for FInventoryDebugSnapshot::TotalSlotCount");
static_assert(offsetof(FInventoryDebugSnapshot, HotbarClientFocusedItemSlotIndex) == 96, "Offset mismatch for FInventoryDebugSnapshot::HotbarClientFocusedItemSlotIndex");
static_assert(offsetof(FInventoryDebugSnapshot, bShouldDrawClientFocusedSlot) == 100, "Offset mismatch for FInventoryDebugSnapshot::bShouldDrawClientFocusedSlot");
static_assert(offsetof(FInventoryDebugSnapshot, bShouldHideSlotIndices) == 101, "Offset mismatch for FInventoryDebugSnapshot::bShouldHideSlotIndices");

// /Script/ItemizationDebug.ItemDebugSnapshot
// Kind: ScriptStruct; super: none
struct FItemDebugSnapshot
{
public:
    FString Data; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ItemID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int64_t SlotNumber; // 0x0020 (Size: 0x8, Type: Int64Property)
    std::int64_t StackSize; // 0x0028 (Size: 0x8, Type: Int64Property)
    void* ItemDefinition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsEquipped; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FItemDebugSnapshot, Data) == 0, "Offset mismatch for FItemDebugSnapshot::Data");
static_assert(offsetof(FItemDebugSnapshot, ItemID) == 16, "Offset mismatch for FItemDebugSnapshot::ItemID");
static_assert(offsetof(FItemDebugSnapshot, SlotNumber) == 32, "Offset mismatch for FItemDebugSnapshot::SlotNumber");
static_assert(offsetof(FItemDebugSnapshot, StackSize) == 40, "Offset mismatch for FItemDebugSnapshot::StackSize");
static_assert(offsetof(FItemDebugSnapshot, ItemDefinition) == 48, "Offset mismatch for FItemDebugSnapshot::ItemDefinition");
static_assert(offsetof(FItemDebugSnapshot, IsEquipped) == 56, "Offset mismatch for FItemDebugSnapshot::IsEquipped");

// /Script/ItemizationDebug.ParameterDebugSnapshot
// Kind: ScriptStruct; super: none
struct FParameterDebugSnapshot
{
public:
    FString FieldName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FieldValue; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ChildCount; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FParameterDebugSnapshot, FieldName) == 0, "Offset mismatch for FParameterDebugSnapshot::FieldName");
static_assert(offsetof(FParameterDebugSnapshot, FieldValue) == 16, "Offset mismatch for FParameterDebugSnapshot::FieldValue");
static_assert(offsetof(FParameterDebugSnapshot, ChildCount) == 32, "Offset mismatch for FParameterDebugSnapshot::ChildCount");

// /Script/ItemizationDebug.PropertyInterfaceDebugSnapshot
// Kind: ScriptStruct; super: none
struct FPropertyInterfaceDebugSnapshot
{
public:
    FString CollectionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CollectionClassName; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RootParameterCount; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsValid; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPropertyInterfaceDebugSnapshot, CollectionName) == 0, "Offset mismatch for FPropertyInterfaceDebugSnapshot::CollectionName");
static_assert(offsetof(FPropertyInterfaceDebugSnapshot, CollectionClassName) == 16, "Offset mismatch for FPropertyInterfaceDebugSnapshot::CollectionClassName");
static_assert(offsetof(FPropertyInterfaceDebugSnapshot, Parameters) == 32, "Offset mismatch for FPropertyInterfaceDebugSnapshot::Parameters");
static_assert(offsetof(FPropertyInterfaceDebugSnapshot, RootParameterCount) == 48, "Offset mismatch for FPropertyInterfaceDebugSnapshot::RootParameterCount");
static_assert(offsetof(FPropertyInterfaceDebugSnapshot, bIsValid) == 49, "Offset mismatch for FPropertyInterfaceDebugSnapshot::bIsValid");

// /Script/ItemizationDebug.PropertyInterfaceListDebugSnapshot
// Kind: ScriptStruct; super: none
struct FPropertyInterfaceListDebugSnapshot
{
public:
    TArray<void*> PropertyInterfaces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPropertyInterfaceListDebugSnapshot, PropertyInterfaces) == 0, "Offset mismatch for FPropertyInterfaceListDebugSnapshot::PropertyInterfaces");

// /Script/ItemizationDebug.PropertyInterfaceListEntryDebugSnapshot
// Kind: ScriptStruct; super: none
struct FPropertyInterfaceListEntryDebugSnapshot
{
public:
    FString CollectionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CollectionClassName; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* VersePropertyInterface; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyInterfaceListEntryDebugSnapshot, CollectionName) == 0, "Offset mismatch for FPropertyInterfaceListEntryDebugSnapshot::CollectionName");
static_assert(offsetof(FPropertyInterfaceListEntryDebugSnapshot, CollectionClassName) == 16, "Offset mismatch for FPropertyInterfaceListEntryDebugSnapshot::CollectionClassName");
static_assert(offsetof(FPropertyInterfaceListEntryDebugSnapshot, VersePropertyInterface) == 32, "Offset mismatch for FPropertyInterfaceListEntryDebugSnapshot::VersePropertyInterface");

// /Script/ItemizationDebug.RootInventoryDebugSnapshot
// Kind: ScriptStruct; super: none
struct FRootInventoryDebugSnapshot
{
public:
    TArray<void*> AllInventories; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRootInventoryDebugSnapshot, AllInventories) == 0, "Offset mismatch for FRootInventoryDebugSnapshot::AllInventories");

// /Script/ItemizationDebug.InventoryDebugMenu
// Kind: Class; super: ImGuiDebugMenuBase
class UInventoryDebugMenu
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    void* MonitoredActor; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServerDebugSnapshot[0x10]; // 0x0438 (Size: 0x10, Type: StructProperty)
    std::uint8_t ServerDebugSnapshot_FortInventory[0x28]; // 0x0448 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDisplayClient; // 0x0470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayServer; // 0x0471 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayFortInventories; // 0x0472 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayItemizationInventories; // 0x0473 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInventoryDebugMenu, MonitoredActor) == 1072, "Offset mismatch for UInventoryDebugMenu::MonitoredActor");
static_assert(offsetof(UInventoryDebugMenu, ServerDebugSnapshot) == 1080, "Offset mismatch for UInventoryDebugMenu::ServerDebugSnapshot");
static_assert(offsetof(UInventoryDebugMenu, ServerDebugSnapshot_FortInventory) == 1096, "Offset mismatch for UInventoryDebugMenu::ServerDebugSnapshot_FortInventory");
static_assert(offsetof(UInventoryDebugMenu, bDisplayClient) == 1136, "Offset mismatch for UInventoryDebugMenu::bDisplayClient");
static_assert(offsetof(UInventoryDebugMenu, bDisplayServer) == 1137, "Offset mismatch for UInventoryDebugMenu::bDisplayServer");
static_assert(offsetof(UInventoryDebugMenu, bDisplayFortInventories) == 1138, "Offset mismatch for UInventoryDebugMenu::bDisplayFortInventories");
static_assert(offsetof(UInventoryDebugMenu, bDisplayItemizationInventories) == 1139, "Offset mismatch for UInventoryDebugMenu::bDisplayItemizationInventories");

// /Script/ItemizationDebug.ItemizationCheatManager
// Kind: Class; super: CheatManagerExtension
class UItemizationCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VerseDebugLibrary; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemizationCheatManager, VerseDebugLibrary) == 40, "Offset mismatch for UItemizationCheatManager::VerseDebugLibrary");

// /Script/ItemizationDebug.PropertyInterfaceDebugCheatRequest
// Kind: Class; super: Object
class UPropertyInterfaceDebugCheatRequest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CollectionName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPropertyInterfaceDebugCheatRequest, CollectionName) == 40, "Offset mismatch for UPropertyInterfaceDebugCheatRequest::CollectionName");

// /Script/ItemizationDebug.PropertyInterfaceDebugger
// Kind: Class; super: ImGuiDebugMenuBase
class UPropertyInterfaceDebugger
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    void* MonitoredPropertyInterface; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServerDebugSnapshot[0x38]; // 0x0438 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDisplayClient; // 0x0470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayServer; // 0x0471 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayNativeOnClient; // 0x0472 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0473
    TArray<void*> DebugCheatRequests; // 0x0478 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPropertyInterfaceDebugger, MonitoredPropertyInterface) == 1072, "Offset mismatch for UPropertyInterfaceDebugger::MonitoredPropertyInterface");
static_assert(offsetof(UPropertyInterfaceDebugger, ServerDebugSnapshot) == 1080, "Offset mismatch for UPropertyInterfaceDebugger::ServerDebugSnapshot");
static_assert(offsetof(UPropertyInterfaceDebugger, bDisplayClient) == 1136, "Offset mismatch for UPropertyInterfaceDebugger::bDisplayClient");
static_assert(offsetof(UPropertyInterfaceDebugger, bDisplayServer) == 1137, "Offset mismatch for UPropertyInterfaceDebugger::bDisplayServer");
static_assert(offsetof(UPropertyInterfaceDebugger, bDisplayNativeOnClient) == 1138, "Offset mismatch for UPropertyInterfaceDebugger::bDisplayNativeOnClient");
static_assert(offsetof(UPropertyInterfaceDebugger, DebugCheatRequests) == 1144, "Offset mismatch for UPropertyInterfaceDebugger::DebugCheatRequests");

// /Script/ItemizationDebug.PropertyInterfacePropertyRefreshCheatRequest
// Kind: Class; super: PropertyInterfaceDebugCheatRequest
class UPropertyInterfacePropertyRefreshCheatRequest
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString PropertyName; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPropertyInterfacePropertyRefreshCheatRequest, PropertyName) == 56, "Offset mismatch for UPropertyInterfacePropertyRefreshCheatRequest::PropertyName");

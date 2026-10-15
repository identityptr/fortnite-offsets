/**
 * decamp dumper generated SDK
 * Package: /Script/SidecarSys
 */
#pragma once
#include "Basic.h"

// /Script/SidecarSys.SidecarFileInfo
// Kind: ScriptStruct; super: none
struct FSidecarFileInfo
{
public:
    TMap<void*, void*> Meta; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsCheckedOut; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOperationPending; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    FString CheckoutGuid; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSidecarFileInfo, Meta) == 0, "Offset mismatch for FSidecarFileInfo::Meta");
static_assert(offsetof(FSidecarFileInfo, bIsCheckedOut) == 16, "Offset mismatch for FSidecarFileInfo::bIsCheckedOut");
static_assert(offsetof(FSidecarFileInfo, bOperationPending) == 17, "Offset mismatch for FSidecarFileInfo::bOperationPending");
static_assert(offsetof(FSidecarFileInfo, CheckoutGuid) == 24, "Offset mismatch for FSidecarFileInfo::CheckoutGuid");

// /Script/SidecarSys.SidecarDss
// Kind: Class; super: Object
class USidecarDss
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> FileInfoMap; // 0x0028 (Size: 0x10, Type: MapProperty)
    FString DssDownloadUrl; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString DssCheckoutUrl; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString DssUploadUrl; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString DssRestoreUrl; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString DssCheckinUrl; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString DssListFilesUrl; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USidecarDss, FileInfoMap) == 40, "Offset mismatch for USidecarDss::FileInfoMap");
static_assert(offsetof(USidecarDss, DssDownloadUrl) == 56, "Offset mismatch for USidecarDss::DssDownloadUrl");
static_assert(offsetof(USidecarDss, DssCheckoutUrl) == 72, "Offset mismatch for USidecarDss::DssCheckoutUrl");
static_assert(offsetof(USidecarDss, DssUploadUrl) == 88, "Offset mismatch for USidecarDss::DssUploadUrl");
static_assert(offsetof(USidecarDss, DssRestoreUrl) == 104, "Offset mismatch for USidecarDss::DssRestoreUrl");
static_assert(offsetof(USidecarDss, DssCheckinUrl) == 120, "Offset mismatch for USidecarDss::DssCheckinUrl");
static_assert(offsetof(USidecarDss, DssListFilesUrl) == 136, "Offset mismatch for USidecarDss::DssListFilesUrl");

// /Script/SidecarSys.SidecarInventorySys
// Kind: Class; super: Object
class USidecarInventorySys
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString InventoryDownloadUrl; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString InventoryLockUrl; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString ItemUpdateUrl; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USidecarInventorySys, InventoryDownloadUrl) == 48, "Offset mismatch for USidecarInventorySys::InventoryDownloadUrl");
static_assert(offsetof(USidecarInventorySys, InventoryLockUrl) == 64, "Offset mismatch for USidecarInventorySys::InventoryLockUrl");
static_assert(offsetof(USidecarInventorySys, ItemUpdateUrl) == 80, "Offset mismatch for USidecarInventorySys::ItemUpdateUrl");

// /Script/SidecarSys.SidecarSys
// Kind: Class; super: Object
class USidecarSys
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SidecarDss; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SidecarInventory; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USidecarSys, SidecarDss) == 56, "Offset mismatch for USidecarSys::SidecarDss");
static_assert(offsetof(USidecarSys, SidecarInventory) == 64, "Offset mismatch for USidecarSys::SidecarInventory");

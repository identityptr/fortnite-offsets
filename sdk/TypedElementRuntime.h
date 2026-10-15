/**
 * decamp dumper generated SDK
 * Package: /Script/TypedElementRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TypedElementRuntime.TypedElementAssetDataReferencedOptions
// Kind: ScriptStruct; super: none
struct FTypedElementAssetDataReferencedOptions
{
public:
    std::uint8_t bOnlyTopLevelAsset; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSoftReferences; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTypedElementAssetDataReferencedOptions, bOnlyTopLevelAsset) == 0, "Offset mismatch for FTypedElementAssetDataReferencedOptions::bOnlyTopLevelAsset");
static_assert(offsetof(FTypedElementAssetDataReferencedOptions, bIncludeSoftReferences) == 1, "Offset mismatch for FTypedElementAssetDataReferencedOptions::bIncludeSoftReferences");

// /Script/TypedElementRuntime.TypedElementIsSelectedOptions
// Kind: ScriptStruct; super: none
struct FTypedElementIsSelectedOptions
{
public:
    std::uint8_t bAllowIndirect; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTypedElementIsSelectedOptions, bAllowIndirect) == 0, "Offset mismatch for FTypedElementIsSelectedOptions::bAllowIndirect");

// /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
// Kind: ScriptStruct; super: none
struct FTypedElementSelectionNormalizationOptions
{
public:
    std::uint8_t bExpandGroups; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFollowAttachment; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bExpandGroups) == 0, "Offset mismatch for FTypedElementSelectionNormalizationOptions::bExpandGroups");
static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bFollowAttachment) == 1, "Offset mismatch for FTypedElementSelectionNormalizationOptions::bFollowAttachment");

// /Script/TypedElementRuntime.TypedElementSelectionOptions
// Kind: ScriptStruct; super: none
struct FTypedElementSelectionOptions
{
public:
    std::uint8_t bAllowHidden; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowGroups; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowLegacyNotifications; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarnIfLocked; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSubRootSelection; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ChildElementInclusionMethod; // 0x0005 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTypedElementSelectionOptions, bAllowHidden) == 0, "Offset mismatch for FTypedElementSelectionOptions::bAllowHidden");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowGroups) == 1, "Offset mismatch for FTypedElementSelectionOptions::bAllowGroups");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowLegacyNotifications) == 2, "Offset mismatch for FTypedElementSelectionOptions::bAllowLegacyNotifications");
static_assert(offsetof(FTypedElementSelectionOptions, bWarnIfLocked) == 3, "Offset mismatch for FTypedElementSelectionOptions::bWarnIfLocked");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowSubRootSelection) == 4, "Offset mismatch for FTypedElementSelectionOptions::bAllowSubRootSelection");
static_assert(offsetof(FTypedElementSelectionOptions, ChildElementInclusionMethod) == 5, "Offset mismatch for FTypedElementSelectionOptions::ChildElementInclusionMethod");

// /Script/TypedElementRuntime.TypedElementSelectionSetState
// Kind: ScriptStruct; super: none
struct FTypedElementSelectionSetState
{
public:
    TWeakObjectPtr<void> CreatedFromSelectionSet; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTypedElementSelectionSetState, CreatedFromSelectionSet) == 0, "Offset mismatch for FTypedElementSelectionSetState::CreatedFromSelectionSet");

// /Script/TypedElementRuntime.TypedElementAssetDataInterface
// Kind: Class; super: Interface
class UTypedElementAssetDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementRuntime.TypedElementHierarchyInterface
// Kind: Class; super: Interface
class UTypedElementHierarchyInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementRuntime.TypedElementObjectInterface
// Kind: Class; super: Interface
class UTypedElementObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
// Kind: Class; super: Interface
class UTypedElementPrimitiveCustomDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementRuntime.TypedElementSelectionInterface
// Kind: Class; super: Interface
class UTypedElementSelectionInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementRuntime.TypedElementSelectionSet
// Kind: Class; super: Object
class UTypedElementSelectionSet
{
public:
    std::uint8_t Pad_0000[0x828]; // 0x0000
    FMulticastInlineDelegate OnPreSelectionChange; // 0x0828 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSelectionChange; // 0x0838 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTypedElementSelectionSet, OnPreSelectionChange) == 2088, "Offset mismatch for UTypedElementSelectionSet::OnPreSelectionChange");
static_assert(offsetof(UTypedElementSelectionSet, OnSelectionChange) == 2104, "Offset mismatch for UTypedElementSelectionSet::OnSelectionChange");

// /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
// Kind: Class; super: Object
class UTypedElementSelectionSetLibrary
{
public:
    std::uint8_t Opaque[1];
};

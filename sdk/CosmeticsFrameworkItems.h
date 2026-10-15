/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkItems
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkItems.CosmeticPropertyBase
// Kind: ScriptStruct; super: none
struct FCosmeticPropertyBase
{
public:
    std::uint8_t PropertyTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticPropertyBase, PropertyTag) == 0, "Offset mismatch for FCosmeticPropertyBase::PropertyTag");

// /Script/CosmeticsFrameworkItems.CosmeticProperty_GameplayTag
// Kind: ScriptStruct; super: CosmeticPropertyBase
struct FCosmeticProperty_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t GameplayTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticProperty_GameplayTag, GameplayTag) == 4, "Offset mismatch for FCosmeticProperty_GameplayTag::GameplayTag");

// /Script/CosmeticsFrameworkItems.CosmeticProperty_Int
// Kind: ScriptStruct; super: CosmeticPropertyBase
struct FCosmeticProperty_Int
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCosmeticProperty_Int, Value) == 4, "Offset mismatch for FCosmeticProperty_Int::Value");

// /Script/CosmeticsFrameworkItems.CosmeticProperty_TableRow
// Kind: ScriptStruct; super: CosmeticPropertyBase
struct FCosmeticProperty_TableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TableRow[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticProperty_TableRow, TableRow) == 8, "Offset mismatch for FCosmeticProperty_TableRow::TableRow");

// /Script/CosmeticsFrameworkItems.CosmeticProperty_Vector
// Kind: ScriptStruct; super: CosmeticPropertyBase
struct FCosmeticProperty_Vector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticProperty_Vector, Value) == 8, "Offset mismatch for FCosmeticProperty_Vector::Value");

// /Script/CosmeticsFrameworkItems.CosmeticDataComponent
// Kind: Class; super: ActorComponent
class UCosmeticDataComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> PropertyContainers; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCosmeticDataComponent, PropertyContainers) == 192, "Offset mismatch for UCosmeticDataComponent::PropertyContainers");

// /Script/CosmeticsFrameworkItems.CosmeticVariantBase
// Kind: Class; super: Object
class UCosmeticVariantBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VariantChannelTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticVariantBase, VariantChannelTag) == 40, "Offset mismatch for UCosmeticVariantBase::VariantChannelTag");

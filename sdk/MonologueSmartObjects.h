/**
 * decamp dumper generated SDK
 * Package: /Script/MonologueSmartObjects
 */
#pragma once
#include "Basic.h"

// /Script/MonologueSmartObjects.MonologueSmartObjectAndBehaviorDescriptions
// Kind: ScriptStruct; super: none
struct FMonologueSmartObjectAndBehaviorDescriptions
{
public:
    std::uint8_t SmartObjectDescription[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> SmartObjectBehaviorDescriptions; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMonologueSmartObjectAndBehaviorDescriptions, SmartObjectDescription) == 0, "Offset mismatch for FMonologueSmartObjectAndBehaviorDescriptions::SmartObjectDescription");
static_assert(offsetof(FMonologueSmartObjectAndBehaviorDescriptions, SmartObjectBehaviorDescriptions) == 32, "Offset mismatch for FMonologueSmartObjectAndBehaviorDescriptions::SmartObjectBehaviorDescriptions");

// /Script/MonologueSmartObjects.MonologueSmartObjectBehaviorDescription
// Kind: ScriptStruct; super: none
struct FMonologueSmartObjectBehaviorDescription
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FMonologueSmartObjectBehaviorDescription, Name) == 0, "Offset mismatch for FMonologueSmartObjectBehaviorDescription::Name");
static_assert(offsetof(FMonologueSmartObjectBehaviorDescription, Description) == 16, "Offset mismatch for FMonologueSmartObjectBehaviorDescription::Description");

// /Script/MonologueSmartObjects.MonologueSmartObjectDescription
// Kind: ScriptStruct; super: none
struct FMonologueSmartObjectDescription
{
public:
    std::uint8_t Identifier[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FMonologueSmartObjectDescription, Identifier) == 0, "Offset mismatch for FMonologueSmartObjectDescription::Identifier");
static_assert(offsetof(FMonologueSmartObjectDescription, Description) == 16, "Offset mismatch for FMonologueSmartObjectDescription::Description");

// /Script/MonologueSmartObjects.MonologueSmartObjectDescriptionCollection
// Kind: ScriptStruct; super: none
struct FMonologueSmartObjectDescriptionCollection
{
public:
    TMap<void*, void*> Descriptions; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::int64_t Hash; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FMonologueSmartObjectDescriptionCollection, Descriptions) == 0, "Offset mismatch for FMonologueSmartObjectDescriptionCollection::Descriptions");
static_assert(offsetof(FMonologueSmartObjectDescriptionCollection, Hash) == 16, "Offset mismatch for FMonologueSmartObjectDescriptionCollection::Hash");

// /Script/MonologueSmartObjects.MonologueSmartObjectBehaviorDescriber
// Kind: Class; super: MonologueSmartObjectBehaviorDescriberBase
class UMonologueSmartObjectBehaviorDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Description[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueSmartObjectBehaviorDescriber, Description) == 40, "Offset mismatch for UMonologueSmartObjectBehaviorDescriber::Description");

// /Script/MonologueSmartObjects.MonologueSmartObjectBehaviorDescriberBase
// Kind: Class; super: SmartObjectBehaviorDefinition
class UMonologueSmartObjectBehaviorDescriberBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MonologueSmartObjects.MonologueSmartObjectDescriber
// Kind: Class; super: MonologueSmartObjectDescriberBase
class UMonologueSmartObjectDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Description[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    FText Identifier; // 0x0048 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UMonologueSmartObjectDescriber, Description) == 40, "Offset mismatch for UMonologueSmartObjectDescriber::Description");
static_assert(offsetof(UMonologueSmartObjectDescriber, Identifier) == 72, "Offset mismatch for UMonologueSmartObjectDescriber::Identifier");

// /Script/MonologueSmartObjects.MonologueSmartObjectDescriberBase
// Kind: Class; super: SmartObjectBehaviorDefinition
class UMonologueSmartObjectDescriberBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MonologueSmartObjects.MonologueSmartObjectsFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMonologueSmartObjectsFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MonologueSmartObjects.MonologueSmartObjectsSubsystem
// Kind: Class; super: MonologueWorldFactsSubsystemBase
class UMonologueSmartObjectsSubsystem
{
public:
    std::uint8_t Opaque[1];
};

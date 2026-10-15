/**
 * decamp dumper generated SDK
 * Package: /Script/SubsonicCore
 */
#pragma once
#include "Basic.h"

// /Script/SubsonicCore.SubsonicEvent
// Kind: ScriptStruct; super: none
struct FSubsonicEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsPublic; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t Parameters[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> ActionCollection; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubsonicEvent, bIsPublic) == 8, "Offset mismatch for FSubsonicEvent::bIsPublic");
static_assert(offsetof(FSubsonicEvent, Parameters) == 16, "Offset mismatch for FSubsonicEvent::Parameters");
static_assert(offsetof(FSubsonicEvent, ActionCollection) == 32, "Offset mismatch for FSubsonicEvent::ActionCollection");

// /Script/SubsonicCore.SubsonicEventActionBase
// Kind: ScriptStruct; super: none
struct FSubsonicEventActionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> Bindings; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSubsonicEventActionBase, Bindings) == 8, "Offset mismatch for FSubsonicEventActionBase::Bindings");

// /Script/SubsonicCore.SubsonicEventActionBoundProperties
// Kind: ScriptStruct; super: none
struct FSubsonicEventActionBoundProperties
{
public:
    TArray<void*> Properties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubsonicEventActionBoundProperties, Properties) == 0, "Offset mismatch for FSubsonicEventActionBoundProperties::Properties");

// /Script/SubsonicCore.SubsonicEventActionDefinition
// Kind: ScriptStruct; super: none
struct FSubsonicEventActionDefinition
{
public:
    std::uint8_t Action[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubsonicEventActionDefinition, Action) == 0, "Offset mismatch for FSubsonicEventActionDefinition::Action");

// /Script/SubsonicCore.SubsonicEventCollectionDefinition
// Kind: ScriptStruct; super: none
struct FSubsonicEventCollectionDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> Events; // 0x0008 (Size: 0x10, Type: MapProperty)
    std::uint8_t Parameters[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubsonicEventCollectionDefinition, Events) == 8, "Offset mismatch for FSubsonicEventCollectionDefinition::Events");
static_assert(offsetof(FSubsonicEventCollectionDefinition, Parameters) == 24, "Offset mismatch for FSubsonicEventCollectionDefinition::Parameters");

// /Script/SubsonicCore.SubsonicParameterStore
// Kind: ScriptStruct; super: none
struct FSubsonicParameterStore
{
public:
    std::uint8_t Parameters[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubsonicParameterStore, Parameters) == 0, "Offset mismatch for FSubsonicParameterStore::Parameters");

// /Script/SubsonicCore.SubsonicEventCollectionCore
// Kind: Class; super: Interface
class USubsonicEventCollectionCore
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicCore.SubsonicEventSubscriberInterface
// Kind: Class; super: Interface
class USubsonicEventSubscriberInterface
{
public:
    std::uint8_t Opaque[1];
};

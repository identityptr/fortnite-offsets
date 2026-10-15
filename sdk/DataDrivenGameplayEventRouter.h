/**
 * decamp dumper generated SDK
 * Package: /Script/DataDrivenGameplayEventRouter
 */
#pragma once
#include "Basic.h"

// /Script/DataDrivenGameplayEventRouter.GameplayEventDefinition
// Kind: ScriptStruct; super: none
struct FGameplayEventDefinition
{
public:
    void* EventType; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsStateful; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NetPolicy; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayEventDefinition, EventType) == 0, "Offset mismatch for FGameplayEventDefinition::EventType");
static_assert(offsetof(FGameplayEventDefinition, bIsStateful) == 8, "Offset mismatch for FGameplayEventDefinition::bIsStateful");
static_assert(offsetof(FGameplayEventDefinition, NetPolicy) == 9, "Offset mismatch for FGameplayEventDefinition::NetPolicy");

// /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptor
// Kind: ScriptStruct; super: none
struct FGameplayEventDescriptor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataDrivenGameplayEventRouter.GameplayEventFunction
// Kind: ScriptStruct; super: none
struct FGameplayEventFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventSubscriptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayEventFunction, EventSubscriptions) == 8, "Offset mismatch for FGameplayEventFunction::EventSubscriptions");

// /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
// Kind: ScriptStruct; super: none
struct FGameplayEventHandlerFunction
{
public:
    std::uint8_t EventHandlerFunction[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> EventHandlerFunctionDefaultValues; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGameplayEventHandlerFunction, EventHandlerFunction) == 0, "Offset mismatch for FGameplayEventHandlerFunction::EventHandlerFunction");
static_assert(offsetof(FGameplayEventHandlerFunction, EventHandlerFunctionDefaultValues) == 48, "Offset mismatch for FGameplayEventHandlerFunction::EventHandlerFunctionDefaultValues");

// /Script/DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
// Kind: ScriptStruct; super: none
struct FGameplayEventHandlerFunctions
{
public:
    std::uint8_t OnEventReceived[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t OnStatefulEventApplied[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t OnStatefulEventCleared[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEventHandlerFunctions, OnEventReceived) == 0, "Offset mismatch for FGameplayEventHandlerFunctions::OnEventReceived");
static_assert(offsetof(FGameplayEventHandlerFunctions, OnStatefulEventApplied) == 64, "Offset mismatch for FGameplayEventHandlerFunctions::OnStatefulEventApplied");
static_assert(offsetof(FGameplayEventHandlerFunctions, OnStatefulEventCleared) == 128, "Offset mismatch for FGameplayEventHandlerFunctions::OnStatefulEventCleared");

// /Script/DataDrivenGameplayEventRouter.GameplayEventSubscription
// Kind: ScriptStruct; super: none
struct FGameplayEventSubscription
{
public:
    std::uint8_t Object[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EventDescriptor[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::uint8_t EventHandle[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEventSubscription, Object) == 0, "Offset mismatch for FGameplayEventSubscription::Object");
static_assert(offsetof(FGameplayEventSubscription, EventDescriptor) == 32, "Offset mismatch for FGameplayEventSubscription::EventDescriptor");
static_assert(offsetof(FGameplayEventSubscription, EventHandle) == 80, "Offset mismatch for FGameplayEventSubscription::EventHandle");

// /Script/DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGameplayEventDescriptorLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
// Kind: Class; super: Interface
class UGameplayEventLegacyBroadcast
{
public:
    std::uint8_t Opaque[1];
};

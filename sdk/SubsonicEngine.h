/**
 * decamp dumper generated SDK
 * Package: /Script/SubsonicEngine
 */
#pragma once
#include "Basic.h"

// /Script/SubsonicEngine.GeneratorSourceContext
// Kind: ScriptStruct; super: none
struct FGeneratorSourceContext
{
public:
    void* Sound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceParameters[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGeneratorSourceContext, Sound) == 0, "Offset mismatch for FGeneratorSourceContext::Sound");
static_assert(offsetof(FGeneratorSourceContext, SourceParameters) == 8, "Offset mismatch for FGeneratorSourceContext::SourceParameters");

// /Script/SubsonicEngine.GeneratorSourceParameterStore
// Kind: ScriptStruct; super: none
struct FGeneratorSourceParameterStore
{
public:
    std::uint8_t Parameters[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> ParameterInfo; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGeneratorSourceParameterStore, Parameters) == 0, "Offset mismatch for FGeneratorSourceParameterStore::Parameters");
static_assert(offsetof(FGeneratorSourceParameterStore, ParameterInfo) == 16, "Offset mismatch for FGeneratorSourceParameterStore::ParameterInfo");

// /Script/SubsonicEngine.SourceParameterInfo
// Kind: ScriptStruct; super: none
struct FSourceParameterInfo
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSourceParameterInfo, ParameterName) == 0, "Offset mismatch for FSourceParameterInfo::ParameterName");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifierBase
// Kind: ScriptStruct; super: none
struct FSubsonicEventAction_AudioComponentModifierBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_ExecuteOnFinished
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_ExecuteOnFinished
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Event[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_ExecuteOnFinished, Event) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_ExecuteOnFinished::Event");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_Play
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_Play
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float StartTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_Play, StartTime) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_Play::StartTime");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_SetAttenuation
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_SetAttenuation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Attenuation; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetAttenuation, Attenuation) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetAttenuation::Attenuation");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_SetConcurrency
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_SetConcurrency
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Concurrency; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetConcurrency, Concurrency) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetConcurrency::Concurrency");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_SetModulationRouting
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_SetModulationRouting
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Modulators[0x10]; // 0x0008 (Size: 0x10, Type: SetProperty)
    std::uint8_t Destination; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RoutingMethod; // 0x0019 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetModulationRouting, Modulators) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetModulationRouting::Modulators");
static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetModulationRouting, Destination) == 24, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetModulationRouting::Destination");
static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetModulationRouting, RoutingMethod) == 25, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetModulationRouting::RoutingMethod");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_SetSound
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_SetSound
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Sound; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModifier_SetSound, Sound) == 8, "Offset mismatch for FSubsonicEventAction_AudioComponentModifier_SetSound::Sound");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModifier_Stop
// Kind: ScriptStruct; super: SubsonicEventAction_AudioComponentModifierBase
struct FSubsonicEventAction_AudioComponentModifier_Stop
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentModify
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_AudioComponentModify
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Scope; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Access; // 0x001D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001E
    TArray<void*> Modifiers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentModify, Name) == 24, "Offset mismatch for FSubsonicEventAction_AudioComponentModify::Name");
static_assert(offsetof(FSubsonicEventAction_AudioComponentModify, Scope) == 28, "Offset mismatch for FSubsonicEventAction_AudioComponentModify::Scope");
static_assert(offsetof(FSubsonicEventAction_AudioComponentModify, Access) == 29, "Offset mismatch for FSubsonicEventAction_AudioComponentModify::Access");
static_assert(offsetof(FSubsonicEventAction_AudioComponentModify, Modifiers) == 32, "Offset mismatch for FSubsonicEventAction_AudioComponentModify::Modifiers");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentPlay
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_AudioComponentPlay
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName Name; // 0x0018 (Size: 0x8, Type: NameProperty)
    void* Sound; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Scope; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Access; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentPlay, Name) == 24, "Offset mismatch for FSubsonicEventAction_AudioComponentPlay::Name");
static_assert(offsetof(FSubsonicEventAction_AudioComponentPlay, Sound) == 32, "Offset mismatch for FSubsonicEventAction_AudioComponentPlay::Sound");
static_assert(offsetof(FSubsonicEventAction_AudioComponentPlay, Scope) == 40, "Offset mismatch for FSubsonicEventAction_AudioComponentPlay::Scope");
static_assert(offsetof(FSubsonicEventAction_AudioComponentPlay, Access) == 41, "Offset mismatch for FSubsonicEventAction_AudioComponentPlay::Access");

// /Script/SubsonicEngine.SubsonicEventAction_AudioComponentStop
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_AudioComponentStop
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Scope; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubsonicEventAction_AudioComponentStop, Name) == 24, "Offset mismatch for FSubsonicEventAction_AudioComponentStop::Name");
static_assert(offsetof(FSubsonicEventAction_AudioComponentStop, Scope) == 28, "Offset mismatch for FSubsonicEventAction_AudioComponentStop::Scope");

// /Script/SubsonicEngine.SubsonicEventAction_DelayEvent
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_DelayEvent
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t DelayName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t EventName[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    float Delay; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubsonicEventAction_DelayEvent, DelayName) == 24, "Offset mismatch for FSubsonicEventAction_DelayEvent::DelayName");
static_assert(offsetof(FSubsonicEventAction_DelayEvent, EventName) == 28, "Offset mismatch for FSubsonicEventAction_DelayEvent::EventName");
static_assert(offsetof(FSubsonicEventAction_DelayEvent, Delay) == 32, "Offset mismatch for FSubsonicEventAction_DelayEvent::Delay");

// /Script/SubsonicEngine.SubsonicEventAction_DelayEvent_Cancel
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_DelayEvent_Cancel
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName DelayName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSubsonicEventAction_DelayEvent_Cancel, DelayName) == 24, "Offset mismatch for FSubsonicEventAction_DelayEvent_Cancel::DelayName");

// /Script/SubsonicEngine.SubsonicEventAction_GeneratorSourcePlay
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_GeneratorSourcePlay
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Scope; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t Context[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubsonicEventAction_GeneratorSourcePlay, Name) == 24, "Offset mismatch for FSubsonicEventAction_GeneratorSourcePlay::Name");
static_assert(offsetof(FSubsonicEventAction_GeneratorSourcePlay, Scope) == 28, "Offset mismatch for FSubsonicEventAction_GeneratorSourcePlay::Scope");
static_assert(offsetof(FSubsonicEventAction_GeneratorSourcePlay, Context) == 32, "Offset mismatch for FSubsonicEventAction_GeneratorSourcePlay::Context");

// /Script/SubsonicEngine.SubsonicEventAction_GeneratorSourceStop
// Kind: ScriptStruct; super: SubsonicEventActionBase
struct FSubsonicEventAction_GeneratorSourceStop
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Scope; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubsonicEventAction_GeneratorSourceStop, Name) == 24, "Offset mismatch for FSubsonicEventAction_GeneratorSourceStop::Name");
static_assert(offsetof(FSubsonicEventAction_GeneratorSourceStop, Scope) == 28, "Offset mismatch for FSubsonicEventAction_GeneratorSourceStop::Scope");

// /Script/SubsonicEngine.SubsonicAudioComponentSubscriber
// Kind: Class; super: SubsonicEventSubscriberBase
class USubsonicAudioComponentSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicEventCollection
// Kind: Class; super: Object
class USubsonicEventCollection
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CollectionDefinition[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubsonicEventCollection, CollectionDefinition) == 48, "Offset mismatch for USubsonicEventCollection::CollectionDefinition");

// /Script/SubsonicEngine.SubsonicEventCollectionExecutor
// Kind: Class; super: Object
class USubsonicEventCollectionExecutor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Collection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USubsonicEventCollectionExecutor, Collection) == 40, "Offset mismatch for USubsonicEventCollectionExecutor::Collection");

// /Script/SubsonicEngine.SubsonicEventDispatchSubscriber
// Kind: Class; super: SubsonicEventSubscriberBase
class USubsonicEventDispatchSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicEventSubscriberBase
// Kind: Class; super: AudioEngineSubsystem
class USubsonicEventSubscriberBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicGeneratorSourceSubscriber
// Kind: Class; super: SubsonicEventSubscriberBase
class USubsonicGeneratorSourceSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubsonicEngine.SubsonicSubsystem
// Kind: Class; super: EngineSubsystem
class USubsonicSubsystem
{
public:
    std::uint8_t Opaque[1];
};

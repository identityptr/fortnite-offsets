/**
 * decamp dumper generated SDK
 * Package: /Script/EntityModifiers
 */
#pragma once
#include "Basic.h"

// /Script/EntityModifiers.EntityEasingModifierClientData
// Kind: ScriptStruct; super: none
struct FEntityEasingModifierClientData
{
public:
    std::uint8_t SampledEaseIn[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t SampledEaseOut[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    double SampledEaseInDuration; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double SampledEaseInOffset; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double SampledEaseOutDuration; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double SampledEaseOutOffset; // 0x0098 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseIn) == 0, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseIn");
static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseOut) == 64, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseOut");
static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseInDuration) == 128, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseInDuration");
static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseInOffset) == 136, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseInOffset");
static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseOutDuration) == 144, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseOutDuration");
static_assert(offsetof(FEntityEasingModifierClientData, SampledEaseOutOffset) == 152, "Offset mismatch for FEntityEasingModifierClientData::SampledEaseOutOffset");

// /Script/EntityModifiers.EntityEasingModifierEaseRequest
// Kind: ScriptStruct; super: none
struct FEntityEasingModifierEaseRequest
{
public:
    std::uint8_t SampledEasing[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    double duration; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double Offset; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint16_t RequestCount; // 0x0050 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Type; // 0x0052 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReplace; // 0x0053 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEntityEasingModifierEaseRequest, SampledEasing) == 0, "Offset mismatch for FEntityEasingModifierEaseRequest::SampledEasing");
static_assert(offsetof(FEntityEasingModifierEaseRequest, duration) == 64, "Offset mismatch for FEntityEasingModifierEaseRequest::duration");
static_assert(offsetof(FEntityEasingModifierEaseRequest, Offset) == 72, "Offset mismatch for FEntityEasingModifierEaseRequest::Offset");
static_assert(offsetof(FEntityEasingModifierEaseRequest, RequestCount) == 80, "Offset mismatch for FEntityEasingModifierEaseRequest::RequestCount");
static_assert(offsetof(FEntityEasingModifierEaseRequest, Type) == 82, "Offset mismatch for FEntityEasingModifierEaseRequest::Type");
static_assert(offsetof(FEntityEasingModifierEaseRequest, bReplace) == 83, "Offset mismatch for FEntityEasingModifierEaseRequest::bReplace");

// /Script/EntityModifiers.EntityEasingModifierFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntityEasingModifierFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityEasingModifierSampledEasingFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntityEasingModifierSampledEasingFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntitySampledEasingModifierNative
// Kind: ScriptStruct; super: none
struct FEntitySampledEasingModifierNative
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0001
    std::uint16_t QuantizedOffset; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t QuantizedRange; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Samples; // 0x0006 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FEntitySampledEasingModifierNative, Type) == 0, "Offset mismatch for FEntitySampledEasingModifierNative::Type");
static_assert(offsetof(FEntitySampledEasingModifierNative, QuantizedOffset) == 2, "Offset mismatch for FEntitySampledEasingModifierNative::QuantizedOffset");
static_assert(offsetof(FEntitySampledEasingModifierNative, QuantizedRange) == 4, "Offset mismatch for FEntitySampledEasingModifierNative::QuantizedRange");
static_assert(offsetof(FEntitySampledEasingModifierNative, Samples) == 6, "Offset mismatch for FEntitySampledEasingModifierNative::Samples");

// /Script/EntityModifiers.EntitySampledEasingModifierNativeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEntitySampledEasingModifierNativeNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityTimerFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntityTimerFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityEasingModifierBase
// Kind: Class; super: EntityModifierBase
class UEntityEasingModifierBase
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t ClientData[0xA0]; // 0x00B0 (Size: 0xA0, Type: StructProperty)
    std::uint8_t EaseRequest[0x58]; // 0x0150 (Size: 0x58, Type: StructProperty)
    double EaseInStartTime; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    double EaseOutStartTime; // 0x01B0 (Size: 0x8, Type: DoubleProperty)
    std::uint16_t ProcessedRequestCount; // 0x01B8 (Size: 0x2, Type: UInt16Property)
    std::uint8_t bInitialClientDataReplicated; // 0x01BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEaseInActive; // 0x01BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEaseOutActive; // 0x01BC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntityEasingModifierBase, ClientData) == 176, "Offset mismatch for UEntityEasingModifierBase::ClientData");
static_assert(offsetof(UEntityEasingModifierBase, EaseRequest) == 336, "Offset mismatch for UEntityEasingModifierBase::EaseRequest");
static_assert(offsetof(UEntityEasingModifierBase, EaseInStartTime) == 424, "Offset mismatch for UEntityEasingModifierBase::EaseInStartTime");
static_assert(offsetof(UEntityEasingModifierBase, EaseOutStartTime) == 432, "Offset mismatch for UEntityEasingModifierBase::EaseOutStartTime");
static_assert(offsetof(UEntityEasingModifierBase, ProcessedRequestCount) == 440, "Offset mismatch for UEntityEasingModifierBase::ProcessedRequestCount");
static_assert(offsetof(UEntityEasingModifierBase, bInitialClientDataReplicated) == 442, "Offset mismatch for UEntityEasingModifierBase::bInitialClientDataReplicated");
static_assert(offsetof(UEntityEasingModifierBase, bIsEaseInActive) == 443, "Offset mismatch for UEntityEasingModifierBase::bIsEaseInActive");
static_assert(offsetof(UEntityEasingModifierBase, bIsEaseOutActive) == 444, "Offset mismatch for UEntityEasingModifierBase::bIsEaseOutActive");

// /Script/EntityModifiers.EntityEasingModifierProcessor
// Kind: Class; super: MassProcessor
class UEntityEasingModifierProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UEntityEasingModifierProcessor, ExecutionOrder) == 40, "Offset mismatch for UEntityEasingModifierProcessor::ExecutionOrder");
static_assert(offsetof(UEntityEasingModifierProcessor, ProcessingPhase) == 80, "Offset mismatch for UEntityEasingModifierProcessor::ProcessingPhase");
static_assert(offsetof(UEntityEasingModifierProcessor, ExecutionFlags) == 81, "Offset mismatch for UEntityEasingModifierProcessor::ExecutionFlags");
static_assert(offsetof(UEntityEasingModifierProcessor, bAggregateRequirements) == 82, "Offset mismatch for UEntityEasingModifierProcessor::bAggregateRequirements");
static_assert(offsetof(UEntityEasingModifierProcessor, ActivationState) == 83, "Offset mismatch for UEntityEasingModifierProcessor::ActivationState");
static_assert(offsetof(UEntityEasingModifierProcessor, ExecutionPriority) == 84, "Offset mismatch for UEntityEasingModifierProcessor::ExecutionPriority");

// /Script/EntityModifiers.EntityEasingModifierSampledEasingProcessor
// Kind: Class; super: MassProcessor
class UEntityEasingModifierSampledEasingProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, ExecutionOrder) == 40, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::ExecutionOrder");
static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, ProcessingPhase) == 80, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::ProcessingPhase");
static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, ExecutionFlags) == 81, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::ExecutionFlags");
static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, bAggregateRequirements) == 82, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::bAggregateRequirements");
static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, ActivationState) == 83, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::ActivationState");
static_assert(offsetof(UEntityEasingModifierSampledEasingProcessor, ExecutionPriority) == 84, "Offset mismatch for UEntityEasingModifierSampledEasingProcessor::ExecutionPriority");

// /Script/EntityModifiers.EntityModifierBase
// Kind: Class; super: Object
class UEntityModifierBase
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t MassEntityHandle[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* Entity; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakWorld; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    void* CachedImpl; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityModifierBase, MassEntityHandle) == 88, "Offset mismatch for UEntityModifierBase::MassEntityHandle");
static_assert(offsetof(UEntityModifierBase, Entity) == 96, "Offset mismatch for UEntityModifierBase::Entity");
static_assert(offsetof(UEntityModifierBase, WeakWorld) == 104, "Offset mismatch for UEntityModifierBase::WeakWorld");
static_assert(offsetof(UEntityModifierBase, CachedImpl) == 112, "Offset mismatch for UEntityModifierBase::CachedImpl");

// /Script/EntityModifiers.EntityModifierImplInterface
// Kind: Class; super: Interface
class UEntityModifierImplInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityModifierRelevancySubsystem
// Kind: Class; super: WorldSubsystem
class UEntityModifierRelevancySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityModifierRelevancyTarget
// Kind: Class; super: Interface
class UEntityModifierRelevancyTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityModifierStackImpl
// Kind: Class; super: VerseModifierStackImpl
class UEntityModifierStackImpl
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReplicatedEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityModifierStackImpl, ReplicatedEntries) == 40, "Offset mismatch for UEntityModifierStackImpl::ReplicatedEntries");

// /Script/EntityModifiers.EntityTimerInterface
// Kind: Class; super: Interface
class UEntityTimerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityModifiers.EntityTimerProcessor
// Kind: Class; super: MassProcessor
class UEntityTimerProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UEntityTimerProcessor, ExecutionOrder) == 40, "Offset mismatch for UEntityTimerProcessor::ExecutionOrder");
static_assert(offsetof(UEntityTimerProcessor, ProcessingPhase) == 80, "Offset mismatch for UEntityTimerProcessor::ProcessingPhase");
static_assert(offsetof(UEntityTimerProcessor, ExecutionFlags) == 81, "Offset mismatch for UEntityTimerProcessor::ExecutionFlags");
static_assert(offsetof(UEntityTimerProcessor, bAggregateRequirements) == 82, "Offset mismatch for UEntityTimerProcessor::bAggregateRequirements");
static_assert(offsetof(UEntityTimerProcessor, ActivationState) == 83, "Offset mismatch for UEntityTimerProcessor::ActivationState");
static_assert(offsetof(UEntityTimerProcessor, ExecutionPriority) == 84, "Offset mismatch for UEntityTimerProcessor::ExecutionPriority");

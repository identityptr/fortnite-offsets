/**
 * decamp dumper generated SDK
 * Package: /Script/MassMovement
 */
#pragma once
#include "Basic.h"

// /Script/MassMovement.MassCodeDrivenMovementTag
// Kind: ScriptStruct; super: MassTag
struct FMassCodeDrivenMovementTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.MassCustomMovementTag
// Kind: ScriptStruct; super: MassTag
struct FMassCustomMovementTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.MassDesiredMovementFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassDesiredMovementFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.MassForceFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassForceFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.MassMovementParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassMovementParameters
{
public:
    float MaxSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeedAccelerating; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxAcceleration; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DefaultDesiredSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DefaultDesiredSpeedVariance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float HeightSmoothingTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> MovementStyles; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsCodeDrivenMovement; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassMovementParameters, MaxSpeed) == 0, "Offset mismatch for FMassMovementParameters::MaxSpeed");
static_assert(offsetof(FMassMovementParameters, MinSpeed) == 4, "Offset mismatch for FMassMovementParameters::MinSpeed");
static_assert(offsetof(FMassMovementParameters, MinSpeedAccelerating) == 8, "Offset mismatch for FMassMovementParameters::MinSpeedAccelerating");
static_assert(offsetof(FMassMovementParameters, MaxAcceleration) == 12, "Offset mismatch for FMassMovementParameters::MaxAcceleration");
static_assert(offsetof(FMassMovementParameters, DefaultDesiredSpeed) == 16, "Offset mismatch for FMassMovementParameters::DefaultDesiredSpeed");
static_assert(offsetof(FMassMovementParameters, DefaultDesiredSpeedVariance) == 20, "Offset mismatch for FMassMovementParameters::DefaultDesiredSpeedVariance");
static_assert(offsetof(FMassMovementParameters, HeightSmoothingTime) == 24, "Offset mismatch for FMassMovementParameters::HeightSmoothingTime");
static_assert(offsetof(FMassMovementParameters, MovementStyles) == 32, "Offset mismatch for FMassMovementParameters::MovementStyles");
static_assert(offsetof(FMassMovementParameters, bIsCodeDrivenMovement) == 48, "Offset mismatch for FMassMovementParameters::bIsCodeDrivenMovement");

// /Script/MassMovement.MassMovementStyle
// Kind: ScriptStruct; super: none
struct FMassMovementStyle
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassMovementStyle, Name) == 0, "Offset mismatch for FMassMovementStyle::Name");
static_assert(offsetof(FMassMovementStyle, ID) == 4, "Offset mismatch for FMassMovementStyle::ID");

// /Script/MassMovement.MassMovementStyleParameters
// Kind: ScriptStruct; super: none
struct FMassMovementStyleParameters
{
public:
    std::uint8_t Style[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> DesiredSpeeds; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassMovementStyleParameters, Style) == 0, "Offset mismatch for FMassMovementStyleParameters::Style");
static_assert(offsetof(FMassMovementStyleParameters, DesiredSpeeds) == 24, "Offset mismatch for FMassMovementStyleParameters::DesiredSpeeds");

// /Script/MassMovement.MassMovementStyleRef
// Kind: ScriptStruct; super: none
struct FMassMovementStyleRef
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassMovementStyleRef, Name) == 0, "Offset mismatch for FMassMovementStyleRef::Name");
static_assert(offsetof(FMassMovementStyleRef, ID) == 4, "Offset mismatch for FMassMovementStyleRef::ID");

// /Script/MassMovement.MassMovementStyleSpeedParameters
// Kind: ScriptStruct; super: none
struct FMassMovementStyleSpeedParameters
{
public:
    float Speed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Variance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Probability; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassMovementStyleSpeedParameters, Speed) == 0, "Offset mismatch for FMassMovementStyleSpeedParameters::Speed");
static_assert(offsetof(FMassMovementStyleSpeedParameters, Variance) == 4, "Offset mismatch for FMassMovementStyleSpeedParameters::Variance");
static_assert(offsetof(FMassMovementStyleSpeedParameters, Probability) == 8, "Offset mismatch for FMassMovementStyleSpeedParameters::Probability");

// /Script/MassMovement.MassSimpleMovementTag
// Kind: ScriptStruct; super: MassTag
struct FMassSimpleMovementTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.MassVelocityFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassVelocityFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.SpringMovementRuntime
// Kind: ScriptStruct; super: MassFragment
struct FSpringMovementRuntime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassMovement.SpringMovementSettings
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FSpringMovementSettings
{
public:
    float VelocitySmoothingTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FacingSmoothingTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float VelocityDeadzoneThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpringMovementSettings, VelocitySmoothingTime) == 0, "Offset mismatch for FSpringMovementSettings::VelocitySmoothingTime");
static_assert(offsetof(FSpringMovementSettings, FacingSmoothingTime) == 4, "Offset mismatch for FSpringMovementSettings::FacingSmoothingTime");
static_assert(offsetof(FSpringMovementSettings, VelocityDeadzoneThreshold) == 8, "Offset mismatch for FSpringMovementSettings::VelocityDeadzoneThreshold");

// /Script/MassMovement.MassApplyForceProcessor
// Kind: Class; super: MassProcessor
class UMassApplyForceProcessor
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

static_assert(offsetof(UMassApplyForceProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassApplyForceProcessor::ExecutionOrder");
static_assert(offsetof(UMassApplyForceProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassApplyForceProcessor::ProcessingPhase");
static_assert(offsetof(UMassApplyForceProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassApplyForceProcessor::ExecutionFlags");
static_assert(offsetof(UMassApplyForceProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassApplyForceProcessor::bAggregateRequirements");
static_assert(offsetof(UMassApplyForceProcessor, ActivationState) == 83, "Offset mismatch for UMassApplyForceProcessor::ActivationState");
static_assert(offsetof(UMassApplyForceProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassApplyForceProcessor::ExecutionPriority");

// /Script/MassMovement.MassApplyMovementProcessor
// Kind: Class; super: MassProcessor
class UMassApplyMovementProcessor
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

static_assert(offsetof(UMassApplyMovementProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassApplyMovementProcessor::ExecutionOrder");
static_assert(offsetof(UMassApplyMovementProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassApplyMovementProcessor::ProcessingPhase");
static_assert(offsetof(UMassApplyMovementProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassApplyMovementProcessor::ExecutionFlags");
static_assert(offsetof(UMassApplyMovementProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassApplyMovementProcessor::bAggregateRequirements");
static_assert(offsetof(UMassApplyMovementProcessor, ActivationState) == 83, "Offset mismatch for UMassApplyMovementProcessor::ActivationState");
static_assert(offsetof(UMassApplyMovementProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassApplyMovementProcessor::ExecutionPriority");

// /Script/MassMovement.MassMovementSettings
// Kind: Class; super: MassModuleSettings
class UMassMovementSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MovementStyles; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassMovementSettings, MovementStyles) == 40, "Offset mismatch for UMassMovementSettings::MovementStyles");

// /Script/MassMovement.MassMovementTrait
// Kind: Class; super: MassEntityTraitBase
class UMassMovementTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Movement[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassMovementTrait, Movement) == 48, "Offset mismatch for UMassMovementTrait::Movement");

// /Script/MassMovement.MassRandomVelocityInitializer
// Kind: Class; super: MassObserverProcessor
class UMassRandomVelocityInitializer
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    float MinSpeed; // 0x0730 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0734 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetZComponent; // 0x0738 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRandomVelocityInitializer, MinSpeed) == 1840, "Offset mismatch for UMassRandomVelocityInitializer::MinSpeed");
static_assert(offsetof(UMassRandomVelocityInitializer, MaxSpeed) == 1844, "Offset mismatch for UMassRandomVelocityInitializer::MaxSpeed");
static_assert(offsetof(UMassRandomVelocityInitializer, bSetZComponent) == 1848, "Offset mismatch for UMassRandomVelocityInitializer::bSetZComponent");

// /Script/MassMovement.MassSimpleMovementProcessor
// Kind: Class; super: MassProcessor
class UMassSimpleMovementProcessor
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

static_assert(offsetof(UMassSimpleMovementProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassSimpleMovementProcessor::ExecutionOrder");
static_assert(offsetof(UMassSimpleMovementProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassSimpleMovementProcessor::ProcessingPhase");
static_assert(offsetof(UMassSimpleMovementProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassSimpleMovementProcessor::ExecutionFlags");
static_assert(offsetof(UMassSimpleMovementProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassSimpleMovementProcessor::bAggregateRequirements");
static_assert(offsetof(UMassSimpleMovementProcessor, ActivationState) == 83, "Offset mismatch for UMassSimpleMovementProcessor::ActivationState");
static_assert(offsetof(UMassSimpleMovementProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassSimpleMovementProcessor::ExecutionPriority");

// /Script/MassMovement.MassSimpleMovementTrait
// Kind: Class; super: MassEntityTraitBase
class UMassSimpleMovementTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassSimpleMovementTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassSimpleMovementTrait::ValidTargetConfig");

// /Script/MassMovement.MassVelocityRandomizerTrait
// Kind: Class; super: MassEntityTraitBase
class UMassVelocityRandomizerTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float MinSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetZComponent; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassVelocityRandomizerTrait, MinSpeed) == 48, "Offset mismatch for UMassVelocityRandomizerTrait::MinSpeed");
static_assert(offsetof(UMassVelocityRandomizerTrait, MaxSpeed) == 52, "Offset mismatch for UMassVelocityRandomizerTrait::MaxSpeed");
static_assert(offsetof(UMassVelocityRandomizerTrait, bSetZComponent) == 56, "Offset mismatch for UMassVelocityRandomizerTrait::bSetZComponent");

// /Script/MassMovement.SpringApplyMovementProcessor
// Kind: Class; super: MassProcessor
class USpringApplyMovementProcessor
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

static_assert(offsetof(USpringApplyMovementProcessor, ExecutionOrder) == 40, "Offset mismatch for USpringApplyMovementProcessor::ExecutionOrder");
static_assert(offsetof(USpringApplyMovementProcessor, ProcessingPhase) == 80, "Offset mismatch for USpringApplyMovementProcessor::ProcessingPhase");
static_assert(offsetof(USpringApplyMovementProcessor, ExecutionFlags) == 81, "Offset mismatch for USpringApplyMovementProcessor::ExecutionFlags");
static_assert(offsetof(USpringApplyMovementProcessor, bAggregateRequirements) == 82, "Offset mismatch for USpringApplyMovementProcessor::bAggregateRequirements");
static_assert(offsetof(USpringApplyMovementProcessor, ActivationState) == 83, "Offset mismatch for USpringApplyMovementProcessor::ActivationState");
static_assert(offsetof(USpringApplyMovementProcessor, ExecutionPriority) == 84, "Offset mismatch for USpringApplyMovementProcessor::ExecutionPriority");

// /Script/MassMovement.SpringMovementLODResyncObserver
// Kind: Class; super: MassObserverProcessor
class USpringMovementLODResyncObserver
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpringMovementLODResyncObserver, ObservedType) == 256, "Offset mismatch for USpringMovementLODResyncObserver::ObservedType");
static_assert(offsetof(USpringMovementLODResyncObserver, ObservedTypes) == 264, "Offset mismatch for USpringMovementLODResyncObserver::ObservedTypes");
static_assert(offsetof(USpringMovementLODResyncObserver, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for USpringMovementLODResyncObserver::bAutoRegisterWithObserverRegistry");

// /Script/MassMovement.SpringMovementTrait
// Kind: Class; super: MassEntityTraitBase
class USpringMovementTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SpringSettings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpringMovementTrait, SpringSettings) == 48, "Offset mismatch for USpringMovementTrait::SpringSettings");

// /Script/MassMovement.SpringUpdateProcessor
// Kind: Class; super: MassProcessor
class USpringUpdateProcessor
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

static_assert(offsetof(USpringUpdateProcessor, ExecutionOrder) == 40, "Offset mismatch for USpringUpdateProcessor::ExecutionOrder");
static_assert(offsetof(USpringUpdateProcessor, ProcessingPhase) == 80, "Offset mismatch for USpringUpdateProcessor::ProcessingPhase");
static_assert(offsetof(USpringUpdateProcessor, ExecutionFlags) == 81, "Offset mismatch for USpringUpdateProcessor::ExecutionFlags");
static_assert(offsetof(USpringUpdateProcessor, bAggregateRequirements) == 82, "Offset mismatch for USpringUpdateProcessor::bAggregateRequirements");
static_assert(offsetof(USpringUpdateProcessor, ActivationState) == 83, "Offset mismatch for USpringUpdateProcessor::ActivationState");
static_assert(offsetof(USpringUpdateProcessor, ExecutionPriority) == 84, "Offset mismatch for USpringUpdateProcessor::ExecutionPriority");

/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_LimeAssembleRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_LimeAssembleRuntime.AtomAssemblyCollision
// Kind: ScriptStruct; super: none
struct FAtomAssemblyCollision
{
public:
    std::uint8_t bOverrideCollisionEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CollisionEnabled; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAtomAssemblyCollision, bOverrideCollisionEnabled) == 0, "Offset mismatch for FAtomAssemblyCollision::bOverrideCollisionEnabled");
static_assert(offsetof(FAtomAssemblyCollision, CollisionEnabled) == 1, "Offset mismatch for FAtomAssemblyCollision::CollisionEnabled");

// /Script/CRD_LimeAssembleRuntime.AtomAssemblyRange
// Kind: ScriptStruct; super: none
struct FAtomAssemblyRange
{
public:
    std::uint8_t bHasValue; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double RangeMin; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double RangeMax; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FAtomAssemblyRange, bHasValue) == 0, "Offset mismatch for FAtomAssemblyRange::bHasValue");
static_assert(offsetof(FAtomAssemblyRange, RangeMin) == 8, "Offset mismatch for FAtomAssemblyRange::RangeMin");
static_assert(offsetof(FAtomAssemblyRange, RangeMax) == 16, "Offset mismatch for FAtomAssemblyRange::RangeMax");

// /Script/CRD_LimeAssembleRuntime.AtomAssemblyState
// Kind: ScriptStruct; super: none
struct FAtomAssemblyState
{
public:
    std::uint8_t CurrentState[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float CurrentRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TargetRatio; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomAssemblyState, CurrentState) == 0, "Offset mismatch for FAtomAssemblyState::CurrentState");
static_assert(offsetof(FAtomAssemblyState, CurrentRatio) == 4, "Offset mismatch for FAtomAssemblyState::CurrentRatio");
static_assert(offsetof(FAtomAssemblyState, TargetRatio) == 8, "Offset mismatch for FAtomAssemblyState::TargetRatio");

// /Script/CRD_LimeAssembleRuntime.AtomGeometryAssemblyComponent
// Kind: Class; super: ActorComponent
class UAtomGeometryAssemblyComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnBeginAssembleDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeginDisassembleDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFullyAssembledDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFullyDisassembledDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResumeAssembleDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResumeDisassembleDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStopDelegate; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AssemblyEventFlags; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0131
    std::uint8_t AssemblyState[0xC]; // 0x0134 (Size: 0xC, Type: StructProperty)
    std::uint8_t AssemblyCollision[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t MarshalledRange[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAtomGeometryAssemblyComponent, OnBeginAssembleDelegate) == 192, "Offset mismatch for UAtomGeometryAssemblyComponent::OnBeginAssembleDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnBeginDisassembleDelegate) == 208, "Offset mismatch for UAtomGeometryAssemblyComponent::OnBeginDisassembleDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnFullyAssembledDelegate) == 224, "Offset mismatch for UAtomGeometryAssemblyComponent::OnFullyAssembledDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnFullyDisassembledDelegate) == 240, "Offset mismatch for UAtomGeometryAssemblyComponent::OnFullyDisassembledDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnResumeAssembleDelegate) == 256, "Offset mismatch for UAtomGeometryAssemblyComponent::OnResumeAssembleDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnResumeDisassembleDelegate) == 272, "Offset mismatch for UAtomGeometryAssemblyComponent::OnResumeDisassembleDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, OnStopDelegate) == 288, "Offset mismatch for UAtomGeometryAssemblyComponent::OnStopDelegate");
static_assert(offsetof(UAtomGeometryAssemblyComponent, AssemblyEventFlags) == 304, "Offset mismatch for UAtomGeometryAssemblyComponent::AssemblyEventFlags");
static_assert(offsetof(UAtomGeometryAssemblyComponent, AssemblyState) == 308, "Offset mismatch for UAtomGeometryAssemblyComponent::AssemblyState");
static_assert(offsetof(UAtomGeometryAssemblyComponent, AssemblyCollision) == 320, "Offset mismatch for UAtomGeometryAssemblyComponent::AssemblyCollision");
static_assert(offsetof(UAtomGeometryAssemblyComponent, MarshalledRange) == 328, "Offset mismatch for UAtomGeometryAssemblyComponent::MarshalledRange");

// /Script/CRD_LimeAssembleRuntime.LimeAssembleBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULimeAssembleBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CRD_LimeAssembleRuntime.LimeAssembleComponent
// Kind: Class; super: ActorComponent
class ULimeAssembleComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate TargetActorAddedDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TargetActorRemovedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> TargetActors; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* ContextActor; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IgnoredActorTags[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULimeAssembleComponent, TargetActorAddedDelegate) == 192, "Offset mismatch for ULimeAssembleComponent::TargetActorAddedDelegate");
static_assert(offsetof(ULimeAssembleComponent, TargetActorRemovedDelegate) == 208, "Offset mismatch for ULimeAssembleComponent::TargetActorRemovedDelegate");
static_assert(offsetof(ULimeAssembleComponent, TargetActors) == 224, "Offset mismatch for ULimeAssembleComponent::TargetActors");
static_assert(offsetof(ULimeAssembleComponent, ContextActor) == 240, "Offset mismatch for ULimeAssembleComponent::ContextActor");
static_assert(offsetof(ULimeAssembleComponent, IgnoredActorTags) == 248, "Offset mismatch for ULimeAssembleComponent::IgnoredActorTags");

// /Script/CRD_LimeAssembleRuntime.LimeAssembleContextActorComponent
// Kind: Class; super: ActorComponent
class ULimeAssembleContextActorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate TargetActorsChangedDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BeginAssembleDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BeginDisassembleDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate FullyAssembledDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate FullyDisassembledDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BoundsChangedDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bNormalizeAssembly; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> TargetActors; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t LastEvent; // 0x0170 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULimeAssembleContextActorComponent, TargetActorsChangedDelegate) == 192, "Offset mismatch for ULimeAssembleContextActorComponent::TargetActorsChangedDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, BeginAssembleDelegate) == 208, "Offset mismatch for ULimeAssembleContextActorComponent::BeginAssembleDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, BeginDisassembleDelegate) == 224, "Offset mismatch for ULimeAssembleContextActorComponent::BeginDisassembleDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, FullyAssembledDelegate) == 240, "Offset mismatch for ULimeAssembleContextActorComponent::FullyAssembledDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, FullyDisassembledDelegate) == 256, "Offset mismatch for ULimeAssembleContextActorComponent::FullyDisassembledDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, BoundsChangedDelegate) == 272, "Offset mismatch for ULimeAssembleContextActorComponent::BoundsChangedDelegate");
static_assert(offsetof(ULimeAssembleContextActorComponent, bNormalizeAssembly) == 288, "Offset mismatch for ULimeAssembleContextActorComponent::bNormalizeAssembly");
static_assert(offsetof(ULimeAssembleContextActorComponent, TargetActors) == 296, "Offset mismatch for ULimeAssembleContextActorComponent::TargetActors");
static_assert(offsetof(ULimeAssembleContextActorComponent, Bounds) == 312, "Offset mismatch for ULimeAssembleContextActorComponent::Bounds");
static_assert(offsetof(ULimeAssembleContextActorComponent, LastEvent) == 368, "Offset mismatch for ULimeAssembleContextActorComponent::LastEvent");

// /Script/CRD_LimeAssembleRuntime.LimeGeometryAssemblyComponent
// Kind: Class; super: AtomGeometryAssemblyComponent
class ULimeGeometryAssemblyComponent
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    void* DamageImmunityEffectClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    void* PreviewActor; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWantsPreviewActorVisible; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreviewActorVisible; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01AA
    std::uint8_t DamageImmunityHandle[0x1]; // 0x01AC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULimeGeometryAssemblyComponent, DamageImmunityEffectClass) == 408, "Offset mismatch for ULimeGeometryAssemblyComponent::DamageImmunityEffectClass");
static_assert(offsetof(ULimeGeometryAssemblyComponent, PreviewActor) == 416, "Offset mismatch for ULimeGeometryAssemblyComponent::PreviewActor");
static_assert(offsetof(ULimeGeometryAssemblyComponent, bWantsPreviewActorVisible) == 424, "Offset mismatch for ULimeGeometryAssemblyComponent::bWantsPreviewActorVisible");
static_assert(offsetof(ULimeGeometryAssemblyComponent, bIsPreviewActorVisible) == 425, "Offset mismatch for ULimeGeometryAssemblyComponent::bIsPreviewActorVisible");
static_assert(offsetof(ULimeGeometryAssemblyComponent, DamageImmunityHandle) == 428, "Offset mismatch for ULimeGeometryAssemblyComponent::DamageImmunityHandle");

// /Script/CRD_LimeAssembleRuntime.LimeGeometryAssemblyComponent_BrickRain
// Kind: Class; super: LimeGeometryAssemblyComponent
class ULimeGeometryAssemblyComponent_BrickRain
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::int32_t TotalGeometryCount; // 0x01C0 (Size: 0x4, Type: IntProperty)
    float GeometryAssemblyRate; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float SingleGeometryDuration; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float DisassembledZDistance; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float DisassembledZDistanceRandomRatio; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float DisassembledRotationAmount; // 0x01D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, TotalGeometryCount) == 448, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::TotalGeometryCount");
static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, GeometryAssemblyRate) == 452, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::GeometryAssemblyRate");
static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, SingleGeometryDuration) == 456, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::SingleGeometryDuration");
static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, DisassembledZDistance) == 460, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::DisassembledZDistance");
static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, DisassembledZDistanceRandomRatio) == 464, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::DisassembledZDistanceRandomRatio");
static_assert(offsetof(ULimeGeometryAssemblyComponent_BrickRain, DisassembledRotationAmount) == 468, "Offset mismatch for ULimeGeometryAssemblyComponent_BrickRain::DisassembledRotationAmount");

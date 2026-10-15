/**
 * decamp dumper generated SDK
 * Package: /Script/Area51GunRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Area51GunRuntime.ChainLightningArcConfig
// Kind: ScriptStruct; super: none
struct FChainLightningArcConfig
{
public:
    std::uint8_t MaxChildArcs[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChainLightningArcConfig, MaxChildArcs) == 0, "Offset mismatch for FChainLightningArcConfig::MaxChildArcs");

// /Script/Area51GunRuntime.ChainLightningArcData
// Kind: ScriptStruct; super: none
struct FChainLightningArcData
{
public:
    TWeakObjectPtr<void> TargetActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t StartLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndLocation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartNormal[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndNormal[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t ArcId[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChainLightningArcData, TargetActor) == 0, "Offset mismatch for FChainLightningArcData::TargetActor");
static_assert(offsetof(FChainLightningArcData, StartLocation) == 8, "Offset mismatch for FChainLightningArcData::StartLocation");
static_assert(offsetof(FChainLightningArcData, EndLocation) == 32, "Offset mismatch for FChainLightningArcData::EndLocation");
static_assert(offsetof(FChainLightningArcData, StartNormal) == 56, "Offset mismatch for FChainLightningArcData::StartNormal");
static_assert(offsetof(FChainLightningArcData, EndNormal) == 80, "Offset mismatch for FChainLightningArcData::EndNormal");
static_assert(offsetof(FChainLightningArcData, ArcId) == 104, "Offset mismatch for FChainLightningArcData::ArcId");

// /Script/Area51GunRuntime.Area51LayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance_ChargedWeapon
class UArea51LayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    double CurrentJumpValue; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    double CurrentOverheat; // 0x0368 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bLaserActive_Standing; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLaserActive_Crouching; // 0x0371 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UArea51LayerAnimInstance, CurrentJumpValue) == 864, "Offset mismatch for UArea51LayerAnimInstance::CurrentJumpValue");
static_assert(offsetof(UArea51LayerAnimInstance, CurrentOverheat) == 872, "Offset mismatch for UArea51LayerAnimInstance::CurrentOverheat");
static_assert(offsetof(UArea51LayerAnimInstance, bLaserActive_Standing) == 880, "Offset mismatch for UArea51LayerAnimInstance::bLaserActive_Standing");
static_assert(offsetof(UArea51LayerAnimInstance, bLaserActive_Crouching) == 881, "Offset mismatch for UArea51LayerAnimInstance::bLaserActive_Crouching");

// /Script/Area51GunRuntime.Area51WeaponAnimInterface
// Kind: Class; super: Interface
class UArea51WeaponAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Area51GunRuntime.ChainLightningArc
// Kind: Class; super: Object
class UChainLightningArc
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StartLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartNormal[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndNormal[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousTargetLocation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> OwningComponent; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ChildArcs; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> TargetActor; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ParentArc; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UChainLightningArc, StartLocation) == 40, "Offset mismatch for UChainLightningArc::StartLocation");
static_assert(offsetof(UChainLightningArc, EndLocation) == 64, "Offset mismatch for UChainLightningArc::EndLocation");
static_assert(offsetof(UChainLightningArc, StartNormal) == 88, "Offset mismatch for UChainLightningArc::StartNormal");
static_assert(offsetof(UChainLightningArc, EndNormal) == 112, "Offset mismatch for UChainLightningArc::EndNormal");
static_assert(offsetof(UChainLightningArc, PreviousTargetLocation) == 136, "Offset mismatch for UChainLightningArc::PreviousTargetLocation");
static_assert(offsetof(UChainLightningArc, OwningComponent) == 160, "Offset mismatch for UChainLightningArc::OwningComponent");
static_assert(offsetof(UChainLightningArc, ChildArcs) == 168, "Offset mismatch for UChainLightningArc::ChildArcs");
static_assert(offsetof(UChainLightningArc, TargetActor) == 184, "Offset mismatch for UChainLightningArc::TargetActor");
static_assert(offsetof(UChainLightningArc, ParentArc) == 192, "Offset mismatch for UChainLightningArc::ParentArc");

// /Script/Area51GunRuntime.FortActorComponent_ChainLightning
// Kind: Class; super: ActorComponent
class UFortActorComponent_ChainLightning
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t AddEquippedWeaponTagsToDamage[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    void* ChainLightningTargetGE; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InitialTargetingUpdateRate[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcEndpointRadiusMin[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcEndpointRadiusMax[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcMaxLength[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcStartpointRadius[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcAnglePrecision[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcTraceHeightMax[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialCosmeticArcTraceHeightMin[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerChainTickRate[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClientChainTickRate[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t NDCUpdateRate[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxInitialTargets[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClientSideArcDamage[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TickDamageOnArcAttachment[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ComponentTraceLength[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNumComponentTraces[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNumChainsLOSPerTick[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    TArray<void*> ArcLayerConfigs; // 0x0398 (Size: 0x10, Type: ArrayProperty)
    void* InitialTargetingPreset; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* ArcTargetingPreset; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LineOfSightCollisionChannel; // 0x03B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03B9
    std::uint8_t LineOfSightImpactBackoffDistance[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    void* ArcLightningFxDataChannel; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TargetingInstigator; // 0x03F0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActiveChains; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveArcData; // 0x0408 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x60]; // 0x0418
    std::uint8_t bLightningActive; // 0x0478 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortActorComponent_ChainLightning, AddEquippedWeaponTagsToDamage) == 192, "Offset mismatch for UFortActorComponent_ChainLightning::AddEquippedWeaponTagsToDamage");
static_assert(offsetof(UFortActorComponent_ChainLightning, ChainLightningTargetGE) == 232, "Offset mismatch for UFortActorComponent_ChainLightning::ChainLightningTargetGE");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialTargetingUpdateRate) == 240, "Offset mismatch for UFortActorComponent_ChainLightning::InitialTargetingUpdateRate");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcEndpointRadiusMin) == 280, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcEndpointRadiusMin");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcEndpointRadiusMax) == 320, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcEndpointRadiusMax");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcMaxLength) == 360, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcMaxLength");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcStartpointRadius) == 400, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcStartpointRadius");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcAnglePrecision) == 440, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcAnglePrecision");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcTraceHeightMax) == 480, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcTraceHeightMax");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialCosmeticArcTraceHeightMin) == 520, "Offset mismatch for UFortActorComponent_ChainLightning::InitialCosmeticArcTraceHeightMin");
static_assert(offsetof(UFortActorComponent_ChainLightning, ServerChainTickRate) == 560, "Offset mismatch for UFortActorComponent_ChainLightning::ServerChainTickRate");
static_assert(offsetof(UFortActorComponent_ChainLightning, ClientChainTickRate) == 600, "Offset mismatch for UFortActorComponent_ChainLightning::ClientChainTickRate");
static_assert(offsetof(UFortActorComponent_ChainLightning, NDCUpdateRate) == 640, "Offset mismatch for UFortActorComponent_ChainLightning::NDCUpdateRate");
static_assert(offsetof(UFortActorComponent_ChainLightning, MaxInitialTargets) == 680, "Offset mismatch for UFortActorComponent_ChainLightning::MaxInitialTargets");
static_assert(offsetof(UFortActorComponent_ChainLightning, ClientSideArcDamage) == 720, "Offset mismatch for UFortActorComponent_ChainLightning::ClientSideArcDamage");
static_assert(offsetof(UFortActorComponent_ChainLightning, TickDamageOnArcAttachment) == 760, "Offset mismatch for UFortActorComponent_ChainLightning::TickDamageOnArcAttachment");
static_assert(offsetof(UFortActorComponent_ChainLightning, ComponentTraceLength) == 800, "Offset mismatch for UFortActorComponent_ChainLightning::ComponentTraceLength");
static_assert(offsetof(UFortActorComponent_ChainLightning, MaxNumComponentTraces) == 840, "Offset mismatch for UFortActorComponent_ChainLightning::MaxNumComponentTraces");
static_assert(offsetof(UFortActorComponent_ChainLightning, MaxNumChainsLOSPerTick) == 880, "Offset mismatch for UFortActorComponent_ChainLightning::MaxNumChainsLOSPerTick");
static_assert(offsetof(UFortActorComponent_ChainLightning, ArcLayerConfigs) == 920, "Offset mismatch for UFortActorComponent_ChainLightning::ArcLayerConfigs");
static_assert(offsetof(UFortActorComponent_ChainLightning, InitialTargetingPreset) == 936, "Offset mismatch for UFortActorComponent_ChainLightning::InitialTargetingPreset");
static_assert(offsetof(UFortActorComponent_ChainLightning, ArcTargetingPreset) == 944, "Offset mismatch for UFortActorComponent_ChainLightning::ArcTargetingPreset");
static_assert(offsetof(UFortActorComponent_ChainLightning, LineOfSightCollisionChannel) == 952, "Offset mismatch for UFortActorComponent_ChainLightning::LineOfSightCollisionChannel");
static_assert(offsetof(UFortActorComponent_ChainLightning, LineOfSightImpactBackoffDistance) == 960, "Offset mismatch for UFortActorComponent_ChainLightning::LineOfSightImpactBackoffDistance");
static_assert(offsetof(UFortActorComponent_ChainLightning, ArcLightningFxDataChannel) == 1000, "Offset mismatch for UFortActorComponent_ChainLightning::ArcLightningFxDataChannel");
static_assert(offsetof(UFortActorComponent_ChainLightning, TargetingInstigator) == 1008, "Offset mismatch for UFortActorComponent_ChainLightning::TargetingInstigator");
static_assert(offsetof(UFortActorComponent_ChainLightning, ActiveChains) == 1016, "Offset mismatch for UFortActorComponent_ChainLightning::ActiveChains");
static_assert(offsetof(UFortActorComponent_ChainLightning, ActiveArcData) == 1032, "Offset mismatch for UFortActorComponent_ChainLightning::ActiveArcData");
static_assert(offsetof(UFortActorComponent_ChainLightning, bLightningActive) == 1144, "Offset mismatch for UFortActorComponent_ChainLightning::bLightningActive");

// /Script/Area51GunRuntime.TargetingSelectionTask_AOE_Area51Gun
// Kind: Class; super: TargetingSelectionTask_AOE
class UTargetingSelectionTask_AOE_Area51Gun
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ShapeType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    TArray<void*> CollisionObjectTypes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultSourceRotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIgnoreInstigatorActor; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0070 BoolProperty bTraceComplex (shared storage)
    // 0x0070 BoolProperty bUseRelativeOffset (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t HalfExtentX[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentY[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentZ[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfHeight[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    FName ComponentTag; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, ShapeType) == 40, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::ShapeType");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, CollisionChannel) == 41, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::CollisionChannel");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, CollisionProfileName) == 44, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::CollisionProfileName");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, CollisionObjectTypes) == 48, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::CollisionObjectTypes");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, DefaultSourceOffset) == 64, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::DefaultSourceOffset");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, DefaultSourceRotationOffset) == 88, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::DefaultSourceRotationOffset");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, bIgnoreInstigatorActor) == 112, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::bIgnoreInstigatorActor");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, HalfExtentX) == 120, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::HalfExtentX");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, HalfExtentY) == 160, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::HalfExtentY");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, HalfExtentZ) == 200, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::HalfExtentZ");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, Radius) == 240, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::Radius");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, HalfHeight) == 280, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::HalfHeight");
static_assert(offsetof(UTargetingSelectionTask_AOE_Area51Gun, ComponentTag) == 320, "Offset mismatch for UTargetingSelectionTask_AOE_Area51Gun::ComponentTag");

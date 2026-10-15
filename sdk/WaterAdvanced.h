/**
 * decamp dumper generated SDK
 * Package: /Script/WaterAdvanced
 */
#pragma once
#include "Basic.h"

// /Script/WaterAdvanced.ShallowWaterCollisionContext
// Kind: ScriptStruct; super: none
struct FShallowWaterCollisionContext
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    TWeakObjectPtr<void> WeakComponent; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FShallowWaterCollisionContext, WeakComponent) == 4, "Offset mismatch for FShallowWaterCollisionContext::WeakComponent");

// /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverride
// Kind: ScriptStruct; super: none
struct FShallowWaterPhysicsAssetOverride
{
public:
    TSoftObjectPtr<void> PhysicsAsset; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FShallowWaterPhysicsAssetOverride, PhysicsAsset) == 0, "Offset mismatch for FShallowWaterPhysicsAssetOverride::PhysicsAsset");

// /Script/WaterAdvanced.ShallowWaterSimParameters
// Kind: ScriptStruct; super: none
struct FShallowWaterSimParameters
{
public:
    float WorldGridSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t ResolutionMaxAxis; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FShallowWaterSimParameters, WorldGridSize) == 0, "Offset mismatch for FShallowWaterSimParameters::WorldGridSize");
static_assert(offsetof(FShallowWaterSimParameters, ResolutionMaxAxis) == 4, "Offset mismatch for FShallowWaterSimParameters::ResolutionMaxAxis");

// /Script/WaterAdvanced.BasicShallowWaterSubsystem
// Kind: Class; super: ShallowWaterSubsystem
class UBasicShallowWaterSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ShallowWaterNiagaraSimulation; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WaterInfoTexture; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    void* NormalRT; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* VelocityRT; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* MPC; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xC0]; // 0x0078
    TArray<void*> PreviousContexts; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingContexts; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> VehicleCollisionProxies; // 0x0158 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBasicShallowWaterSubsystem, ShallowWaterNiagaraSimulation) == 72, "Offset mismatch for UBasicShallowWaterSubsystem::ShallowWaterNiagaraSimulation");
static_assert(offsetof(UBasicShallowWaterSubsystem, WaterInfoTexture) == 80, "Offset mismatch for UBasicShallowWaterSubsystem::WaterInfoTexture");
static_assert(offsetof(UBasicShallowWaterSubsystem, NormalRT) == 88, "Offset mismatch for UBasicShallowWaterSubsystem::NormalRT");
static_assert(offsetof(UBasicShallowWaterSubsystem, VelocityRT) == 96, "Offset mismatch for UBasicShallowWaterSubsystem::VelocityRT");
static_assert(offsetof(UBasicShallowWaterSubsystem, Settings) == 104, "Offset mismatch for UBasicShallowWaterSubsystem::Settings");
static_assert(offsetof(UBasicShallowWaterSubsystem, MPC) == 112, "Offset mismatch for UBasicShallowWaterSubsystem::MPC");
static_assert(offsetof(UBasicShallowWaterSubsystem, PreviousContexts) == 312, "Offset mismatch for UBasicShallowWaterSubsystem::PreviousContexts");
static_assert(offsetof(UBasicShallowWaterSubsystem, PendingContexts) == 328, "Offset mismatch for UBasicShallowWaterSubsystem::PendingContexts");
static_assert(offsetof(UBasicShallowWaterSubsystem, VehicleCollisionProxies) == 344, "Offset mismatch for UBasicShallowWaterSubsystem::VehicleCollisionProxies");

// /Script/WaterAdvanced.FFTOceanPatchSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFFTOceanPatchSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Settings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFFTOceanPatchSubsystem, Settings) == 72, "Offset mismatch for UFFTOceanPatchSubsystem::Settings");

// /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset
// Kind: Class; super: DataAsset
class UShallowWaterPhysicsAssetOverridesDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Overrides; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UShallowWaterPhysicsAssetOverridesDataAsset, Overrides) == 40, "Offset mismatch for UShallowWaterPhysicsAssetOverridesDataAsset::Overrides");

// /Script/WaterAdvanced.ShallowWaterRiver
// Kind: Class; super: Actor
class UShallowWaterRiver
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ShallowWaterRiverComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShallowWaterRiver, ShallowWaterRiverComponent) == 624, "Offset mismatch for UShallowWaterRiver::ShallowWaterRiverComponent");

// /Script/WaterAdvanced.ShallowWaterRiverComponent
// Kind: Class; super: PrimitiveComponent
class UShallowWaterRiverComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* NiagaraRiverSimulation; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ResolutionMaxAxis; // 0x0578 (Size: 0x4, Type: IntProperty)
    float SourceSize; // 0x057C (Size: 0x4, Type: FloatProperty)
    float SimSpeed; // 0x0580 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSteps; // 0x0584 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMatchSpline; // 0x0588 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0589
    float MatchSplineHeightAmount; // 0x058C (Size: 0x4, Type: FloatProperty)
    float RemoveOutsideSplineAmount; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableCPUThrottling; // 0x0594 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0595
    TArray<void*> SourceRiverWaterBodies; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SinkRiverWaterBodies; // 0x05A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RenderState; // 0x05B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05B9
    void* BakedSimMaterial; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* BakedSimUnderWaterMaterial; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* BakedSimRiverToLakeTransitionMaterial; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* BakedSimRiverToOceanTransitionMaterial; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* SplineRiverMaterial; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* SplineRiverToLakeTransitionMaterial; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* SplineRiverToOceanTransitionMaterial; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* SplineRiverUnderWaterMaterial; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SmoothingWidth; // 0x0600 (Size: 0x4, Type: IntProperty)
    float SmoothingCutoff; // 0x0604 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseVirtualTextures; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNormalMapVirtualTexture; // 0x0609 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x060A
    std::uint8_t SimRes[0x10]; // 0x0610 (Size: 0x10, Type: StructProperty)
    float SimDx; // 0x0620 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0624
    void* BakedWaterSurfaceTexture; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* BakedFoamTexture; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* BakedWaterSurfaceNormalTexture; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    float InputPaintResolutionScale; // 0x0640 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0644
    void* PaintPreviewMaterial; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputPaintTraceChannel; // 0x0650 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0651
    void* MaterialPaintTexture; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseHeightfieldCollision; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0661
    float HeightfieldCollisionResolution; // 0x0664 (Size: 0x4, Type: FloatProperty)
    void* RiverSimSystem; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    void* WaterInfoTexture; // 0x0670 (Size: 0x8, Type: ObjectProperty)
    void* BakedWaterSurfaceRT; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* BakedFoamRT; // 0x0680 (Size: 0x8, Type: ObjectProperty)
    void* BakedWaterSurfaceNormalRT; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* BakedSim; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x0698
    std::uint8_t AllWaterBodies[0x10]; // 0x06A0 (Size: 0x10, Type: SetProperty)
    std::uint8_t WorldGridSize[0x10]; // 0x06B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SystemPos[0x18]; // 0x06C0 (Size: 0x18, Type: StructProperty)
    void* NormalDetailRT; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    void* OceanPatchSystem; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000A[0x28]; // 0x06E8
    void* HeightfieldBodySetup; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShallowWaterRiverComponent, NiagaraRiverSimulation) == 1392, "Offset mismatch for UShallowWaterRiverComponent::NiagaraRiverSimulation");
static_assert(offsetof(UShallowWaterRiverComponent, ResolutionMaxAxis) == 1400, "Offset mismatch for UShallowWaterRiverComponent::ResolutionMaxAxis");
static_assert(offsetof(UShallowWaterRiverComponent, SourceSize) == 1404, "Offset mismatch for UShallowWaterRiverComponent::SourceSize");
static_assert(offsetof(UShallowWaterRiverComponent, SimSpeed) == 1408, "Offset mismatch for UShallowWaterRiverComponent::SimSpeed");
static_assert(offsetof(UShallowWaterRiverComponent, NumSteps) == 1412, "Offset mismatch for UShallowWaterRiverComponent::NumSteps");
static_assert(offsetof(UShallowWaterRiverComponent, bMatchSpline) == 1416, "Offset mismatch for UShallowWaterRiverComponent::bMatchSpline");
static_assert(offsetof(UShallowWaterRiverComponent, MatchSplineHeightAmount) == 1420, "Offset mismatch for UShallowWaterRiverComponent::MatchSplineHeightAmount");
static_assert(offsetof(UShallowWaterRiverComponent, RemoveOutsideSplineAmount) == 1424, "Offset mismatch for UShallowWaterRiverComponent::RemoveOutsideSplineAmount");
static_assert(offsetof(UShallowWaterRiverComponent, bDisableCPUThrottling) == 1428, "Offset mismatch for UShallowWaterRiverComponent::bDisableCPUThrottling");
static_assert(offsetof(UShallowWaterRiverComponent, SourceRiverWaterBodies) == 1432, "Offset mismatch for UShallowWaterRiverComponent::SourceRiverWaterBodies");
static_assert(offsetof(UShallowWaterRiverComponent, SinkRiverWaterBodies) == 1448, "Offset mismatch for UShallowWaterRiverComponent::SinkRiverWaterBodies");
static_assert(offsetof(UShallowWaterRiverComponent, RenderState) == 1464, "Offset mismatch for UShallowWaterRiverComponent::RenderState");
static_assert(offsetof(UShallowWaterRiverComponent, BakedSimMaterial) == 1472, "Offset mismatch for UShallowWaterRiverComponent::BakedSimMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, BakedSimUnderWaterMaterial) == 1480, "Offset mismatch for UShallowWaterRiverComponent::BakedSimUnderWaterMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, BakedSimRiverToLakeTransitionMaterial) == 1488, "Offset mismatch for UShallowWaterRiverComponent::BakedSimRiverToLakeTransitionMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, BakedSimRiverToOceanTransitionMaterial) == 1496, "Offset mismatch for UShallowWaterRiverComponent::BakedSimRiverToOceanTransitionMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, SplineRiverMaterial) == 1504, "Offset mismatch for UShallowWaterRiverComponent::SplineRiverMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, SplineRiverToLakeTransitionMaterial) == 1512, "Offset mismatch for UShallowWaterRiverComponent::SplineRiverToLakeTransitionMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, SplineRiverToOceanTransitionMaterial) == 1520, "Offset mismatch for UShallowWaterRiverComponent::SplineRiverToOceanTransitionMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, SplineRiverUnderWaterMaterial) == 1528, "Offset mismatch for UShallowWaterRiverComponent::SplineRiverUnderWaterMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, SmoothingWidth) == 1536, "Offset mismatch for UShallowWaterRiverComponent::SmoothingWidth");
static_assert(offsetof(UShallowWaterRiverComponent, SmoothingCutoff) == 1540, "Offset mismatch for UShallowWaterRiverComponent::SmoothingCutoff");
static_assert(offsetof(UShallowWaterRiverComponent, bUseVirtualTextures) == 1544, "Offset mismatch for UShallowWaterRiverComponent::bUseVirtualTextures");
static_assert(offsetof(UShallowWaterRiverComponent, bUseNormalMapVirtualTexture) == 1545, "Offset mismatch for UShallowWaterRiverComponent::bUseNormalMapVirtualTexture");
static_assert(offsetof(UShallowWaterRiverComponent, SimRes) == 1552, "Offset mismatch for UShallowWaterRiverComponent::SimRes");
static_assert(offsetof(UShallowWaterRiverComponent, SimDx) == 1568, "Offset mismatch for UShallowWaterRiverComponent::SimDx");
static_assert(offsetof(UShallowWaterRiverComponent, BakedWaterSurfaceTexture) == 1576, "Offset mismatch for UShallowWaterRiverComponent::BakedWaterSurfaceTexture");
static_assert(offsetof(UShallowWaterRiverComponent, BakedFoamTexture) == 1584, "Offset mismatch for UShallowWaterRiverComponent::BakedFoamTexture");
static_assert(offsetof(UShallowWaterRiverComponent, BakedWaterSurfaceNormalTexture) == 1592, "Offset mismatch for UShallowWaterRiverComponent::BakedWaterSurfaceNormalTexture");
static_assert(offsetof(UShallowWaterRiverComponent, InputPaintResolutionScale) == 1600, "Offset mismatch for UShallowWaterRiverComponent::InputPaintResolutionScale");
static_assert(offsetof(UShallowWaterRiverComponent, PaintPreviewMaterial) == 1608, "Offset mismatch for UShallowWaterRiverComponent::PaintPreviewMaterial");
static_assert(offsetof(UShallowWaterRiverComponent, InputPaintTraceChannel) == 1616, "Offset mismatch for UShallowWaterRiverComponent::InputPaintTraceChannel");
static_assert(offsetof(UShallowWaterRiverComponent, MaterialPaintTexture) == 1624, "Offset mismatch for UShallowWaterRiverComponent::MaterialPaintTexture");
static_assert(offsetof(UShallowWaterRiverComponent, bUseHeightfieldCollision) == 1632, "Offset mismatch for UShallowWaterRiverComponent::bUseHeightfieldCollision");
static_assert(offsetof(UShallowWaterRiverComponent, HeightfieldCollisionResolution) == 1636, "Offset mismatch for UShallowWaterRiverComponent::HeightfieldCollisionResolution");
static_assert(offsetof(UShallowWaterRiverComponent, RiverSimSystem) == 1640, "Offset mismatch for UShallowWaterRiverComponent::RiverSimSystem");
static_assert(offsetof(UShallowWaterRiverComponent, WaterInfoTexture) == 1648, "Offset mismatch for UShallowWaterRiverComponent::WaterInfoTexture");
static_assert(offsetof(UShallowWaterRiverComponent, BakedWaterSurfaceRT) == 1656, "Offset mismatch for UShallowWaterRiverComponent::BakedWaterSurfaceRT");
static_assert(offsetof(UShallowWaterRiverComponent, BakedFoamRT) == 1664, "Offset mismatch for UShallowWaterRiverComponent::BakedFoamRT");
static_assert(offsetof(UShallowWaterRiverComponent, BakedWaterSurfaceNormalRT) == 1672, "Offset mismatch for UShallowWaterRiverComponent::BakedWaterSurfaceNormalRT");
static_assert(offsetof(UShallowWaterRiverComponent, BakedSim) == 1680, "Offset mismatch for UShallowWaterRiverComponent::BakedSim");
static_assert(offsetof(UShallowWaterRiverComponent, AllWaterBodies) == 1696, "Offset mismatch for UShallowWaterRiverComponent::AllWaterBodies");
static_assert(offsetof(UShallowWaterRiverComponent, WorldGridSize) == 1712, "Offset mismatch for UShallowWaterRiverComponent::WorldGridSize");
static_assert(offsetof(UShallowWaterRiverComponent, SystemPos) == 1728, "Offset mismatch for UShallowWaterRiverComponent::SystemPos");
static_assert(offsetof(UShallowWaterRiverComponent, NormalDetailRT) == 1752, "Offset mismatch for UShallowWaterRiverComponent::NormalDetailRT");
static_assert(offsetof(UShallowWaterRiverComponent, OceanPatchSystem) == 1760, "Offset mismatch for UShallowWaterRiverComponent::OceanPatchSystem");
static_assert(offsetof(UShallowWaterRiverComponent, HeightfieldBodySetup) == 1808, "Offset mismatch for UShallowWaterRiverComponent::HeightfieldBodySetup");

// /Script/WaterAdvanced.ShallowWaterSettings
// Kind: Class; super: DeveloperSettings
class UShallowWaterSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultShallowWaterNiagaraSimulation[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultShallowWaterCollisionNDC[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultOceanPatchNiagaraSystem[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ShallowWaterSimParameters[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t WaterMPC[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GridCenterMPCName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldGridSizeMPCName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t ResolutionMaxAxisMPCName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t NormalRTMaterialName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t VelocityRTMaterialName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t NormalRTNiagaraName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t VelocityRTNiagaraName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t UseDefaultShallowWaterSubsystem; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OutputVelocity; // 0x00D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00D6
    std::int32_t MaxActivePawnNum; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxImpulseForceNum; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::uint8_t PhysicsAssetProxiesDataAsset[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bVisualizeActivePawn; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UShallowWaterSettings, DefaultShallowWaterNiagaraSimulation) == 48, "Offset mismatch for UShallowWaterSettings::DefaultShallowWaterNiagaraSimulation");
static_assert(offsetof(UShallowWaterSettings, DefaultShallowWaterCollisionNDC) == 80, "Offset mismatch for UShallowWaterSettings::DefaultShallowWaterCollisionNDC");
static_assert(offsetof(UShallowWaterSettings, DefaultOceanPatchNiagaraSystem) == 112, "Offset mismatch for UShallowWaterSettings::DefaultOceanPatchNiagaraSystem");
static_assert(offsetof(UShallowWaterSettings, ShallowWaterSimParameters) == 144, "Offset mismatch for UShallowWaterSettings::ShallowWaterSimParameters");
static_assert(offsetof(UShallowWaterSettings, WaterMPC) == 152, "Offset mismatch for UShallowWaterSettings::WaterMPC");
static_assert(offsetof(UShallowWaterSettings, GridCenterMPCName) == 184, "Offset mismatch for UShallowWaterSettings::GridCenterMPCName");
static_assert(offsetof(UShallowWaterSettings, WorldGridSizeMPCName) == 188, "Offset mismatch for UShallowWaterSettings::WorldGridSizeMPCName");
static_assert(offsetof(UShallowWaterSettings, ResolutionMaxAxisMPCName) == 192, "Offset mismatch for UShallowWaterSettings::ResolutionMaxAxisMPCName");
static_assert(offsetof(UShallowWaterSettings, NormalRTMaterialName) == 196, "Offset mismatch for UShallowWaterSettings::NormalRTMaterialName");
static_assert(offsetof(UShallowWaterSettings, VelocityRTMaterialName) == 200, "Offset mismatch for UShallowWaterSettings::VelocityRTMaterialName");
static_assert(offsetof(UShallowWaterSettings, NormalRTNiagaraName) == 204, "Offset mismatch for UShallowWaterSettings::NormalRTNiagaraName");
static_assert(offsetof(UShallowWaterSettings, VelocityRTNiagaraName) == 208, "Offset mismatch for UShallowWaterSettings::VelocityRTNiagaraName");
static_assert(offsetof(UShallowWaterSettings, UseDefaultShallowWaterSubsystem) == 212, "Offset mismatch for UShallowWaterSettings::UseDefaultShallowWaterSubsystem");
static_assert(offsetof(UShallowWaterSettings, OutputVelocity) == 213, "Offset mismatch for UShallowWaterSettings::OutputVelocity");
static_assert(offsetof(UShallowWaterSettings, MaxActivePawnNum) == 216, "Offset mismatch for UShallowWaterSettings::MaxActivePawnNum");
static_assert(offsetof(UShallowWaterSettings, MaxImpulseForceNum) == 220, "Offset mismatch for UShallowWaterSettings::MaxImpulseForceNum");
static_assert(offsetof(UShallowWaterSettings, PhysicsAssetProxiesDataAsset) == 224, "Offset mismatch for UShallowWaterSettings::PhysicsAssetProxiesDataAsset");
static_assert(offsetof(UShallowWaterSettings, bVisualizeActivePawn) == 256, "Offset mismatch for UShallowWaterSettings::bVisualizeActivePawn");

// /Script/WaterAdvanced.ShallowWaterSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UShallowWaterSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ShallowWaterNiagaraSimulation; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WaterInfoTexture; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    void* NormalRT; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* VelocityRT; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* MPC; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xC0]; // 0x0078
    TArray<void*> PreviousContexts; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingContexts; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> VehicleCollisionProxies; // 0x0158 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UShallowWaterSubsystem, ShallowWaterNiagaraSimulation) == 72, "Offset mismatch for UShallowWaterSubsystem::ShallowWaterNiagaraSimulation");
static_assert(offsetof(UShallowWaterSubsystem, WaterInfoTexture) == 80, "Offset mismatch for UShallowWaterSubsystem::WaterInfoTexture");
static_assert(offsetof(UShallowWaterSubsystem, NormalRT) == 88, "Offset mismatch for UShallowWaterSubsystem::NormalRT");
static_assert(offsetof(UShallowWaterSubsystem, VelocityRT) == 96, "Offset mismatch for UShallowWaterSubsystem::VelocityRT");
static_assert(offsetof(UShallowWaterSubsystem, Settings) == 104, "Offset mismatch for UShallowWaterSubsystem::Settings");
static_assert(offsetof(UShallowWaterSubsystem, MPC) == 112, "Offset mismatch for UShallowWaterSubsystem::MPC");
static_assert(offsetof(UShallowWaterSubsystem, PreviousContexts) == 312, "Offset mismatch for UShallowWaterSubsystem::PreviousContexts");
static_assert(offsetof(UShallowWaterSubsystem, PendingContexts) == 328, "Offset mismatch for UShallowWaterSubsystem::PendingContexts");
static_assert(offsetof(UShallowWaterSubsystem, VehicleCollisionProxies) == 344, "Offset mismatch for UShallowWaterSubsystem::VehicleCollisionProxies");

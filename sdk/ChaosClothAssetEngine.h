/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosClothAssetEngine
 */
#pragma once
#include "Basic.h"

// /Script/ChaosClothAssetEngine.ChaosClothAssetLodTransitionDataCache
// Kind: ScriptStruct; super: none
struct FChaosClothAssetLodTransitionDataCache
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosClothAssetEngine.ChaosClothComponentEndTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FChaosClothComponentEndTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosClothComponentEndTickFunction, TickGroup) == 8, "Offset mismatch for FChaosClothComponentEndTickFunction::TickGroup");
static_assert(offsetof(FChaosClothComponentEndTickFunction, EndTickGroup) == 9, "Offset mismatch for FChaosClothComponentEndTickFunction::EndTickGroup");
static_assert(offsetof(FChaosClothComponentEndTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FChaosClothComponentEndTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FChaosClothComponentEndTickFunction, TickInterval) == 12, "Offset mismatch for FChaosClothComponentEndTickFunction::TickInterval");

// /Script/ChaosClothAssetEngine.ChaosClothComponentInstanceData
// Kind: ScriptStruct; super: SceneComponentInstanceData
struct FChaosClothComponentInstanceData
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Asset; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FChaosClothComponentInstanceData, Asset) == 120, "Offset mismatch for FChaosClothComponentInstanceData::Asset");

// /Script/ChaosClothAssetEngine.ChaosClothSimulationLodModel
// Kind: ScriptStruct; super: none
struct FChaosClothSimulationLodModel
{
public:
    TArray<void*> Positions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Normals; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Indices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneData; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RequiredExtraBoneIndices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x20]; // 0x0050
    TArray<void*> PatternPositions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PatternIndices; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PatternToWeldedIndices; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00A0
    std::uint8_t TetherData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosClothSimulationLodModel, Positions) == 0, "Offset mismatch for FChaosClothSimulationLodModel::Positions");
static_assert(offsetof(FChaosClothSimulationLodModel, Normals) == 16, "Offset mismatch for FChaosClothSimulationLodModel::Normals");
static_assert(offsetof(FChaosClothSimulationLodModel, Indices) == 32, "Offset mismatch for FChaosClothSimulationLodModel::Indices");
static_assert(offsetof(FChaosClothSimulationLodModel, BoneData) == 48, "Offset mismatch for FChaosClothSimulationLodModel::BoneData");
static_assert(offsetof(FChaosClothSimulationLodModel, RequiredExtraBoneIndices) == 64, "Offset mismatch for FChaosClothSimulationLodModel::RequiredExtraBoneIndices");
static_assert(offsetof(FChaosClothSimulationLodModel, PatternPositions) == 112, "Offset mismatch for FChaosClothSimulationLodModel::PatternPositions");
static_assert(offsetof(FChaosClothSimulationLodModel, PatternIndices) == 128, "Offset mismatch for FChaosClothSimulationLodModel::PatternIndices");
static_assert(offsetof(FChaosClothSimulationLodModel, PatternToWeldedIndices) == 144, "Offset mismatch for FChaosClothSimulationLodModel::PatternToWeldedIndices");
static_assert(offsetof(FChaosClothSimulationLodModel, TetherData) == 176, "Offset mismatch for FChaosClothSimulationLodModel::TetherData");

// /Script/ChaosClothAssetEngine.ChaosClothSimulationModel
// Kind: ScriptStruct; super: none
struct FChaosClothSimulationModel
{
public:
    TArray<void*> ClothSimulationLodModels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedBoneNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedBoneIndices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ReferenceBoneIndex; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosClothSimulationModel, ClothSimulationLodModels) == 0, "Offset mismatch for FChaosClothSimulationModel::ClothSimulationLodModels");
static_assert(offsetof(FChaosClothSimulationModel, UsedBoneNames) == 16, "Offset mismatch for FChaosClothSimulationModel::UsedBoneNames");
static_assert(offsetof(FChaosClothSimulationModel, UsedBoneIndices) == 32, "Offset mismatch for FChaosClothSimulationModel::UsedBoneIndices");
static_assert(offsetof(FChaosClothSimulationModel, ReferenceBoneIndex) == 48, "Offset mismatch for FChaosClothSimulationModel::ReferenceBoneIndex");

// /Script/ChaosClothAssetEngine.ChaosClothSimulationProperties
// Kind: ScriptStruct; super: none
struct FChaosClothSimulationProperties
{
public:
    void* ClothOutfitInteractor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FChaosClothSimulationProperties, ClothOutfitInteractor) == 0, "Offset mismatch for FChaosClothSimulationProperties::ClothOutfitInteractor");

// /Script/ChaosClothAssetEngine.ClothAssetInteractorPropertyBag
// Kind: ScriptStruct; super: InstancedPropertyBag
struct FClothAssetInteractorPropertyBag
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClothAssetInteractorPropertyBag, Value) == 0, "Offset mismatch for FClothAssetInteractorPropertyBag::Value");

// /Script/ChaosClothAssetEngine.ChaosClothAsset
// Kind: Class; super: ChaosClothAssetBase
class UChaosClothAsset
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* skeleton; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSmoothTransition; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMultipleInfluences; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x02C2
    float SkinningKernelRadius; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AssetGuid[0x1]; // 0x02C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosClothAsset, skeleton) == 688, "Offset mismatch for UChaosClothAsset::skeleton");
static_assert(offsetof(UChaosClothAsset, PhysicsAsset) == 696, "Offset mismatch for UChaosClothAsset::PhysicsAsset");
static_assert(offsetof(UChaosClothAsset, bSmoothTransition) == 704, "Offset mismatch for UChaosClothAsset::bSmoothTransition");
static_assert(offsetof(UChaosClothAsset, bUseMultipleInfluences) == 705, "Offset mismatch for UChaosClothAsset::bUseMultipleInfluences");
static_assert(offsetof(UChaosClothAsset, SkinningKernelRadius) == 708, "Offset mismatch for UChaosClothAsset::SkinningKernelRadius");
static_assert(offsetof(UChaosClothAsset, AssetGuid) == 712, "Offset mismatch for UChaosClothAsset::AssetGuid");

// /Script/ChaosClothAssetEngine.ChaosClothAssetBase
// Kind: Class; super: SkinnedAsset
class UChaosClothAssetBase
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DataflowInstance[0x50]; // 0x00C8 (Size: 0x50, Type: StructProperty)
    TArray<void*> Materials; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODInfo; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinQualityLevelLOD[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t DisableBelowMinLodStripping[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinLOD[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSupportRayTracing; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0191
    std::int32_t RayTracingMinLOD; // 0x0194 (Size: 0x4, Type: IntProperty)
    void* ShadowPhysicsAsset; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* OverlayMaterial; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    float OverlayMaterialMaxDrawDistance; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasVertexColors; // 0x01AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x9B]; // 0x01AD
    std::uint8_t Bounds[0x1]; // 0x0248 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosClothAssetBase, DataflowInstance) == 200, "Offset mismatch for UChaosClothAssetBase::DataflowInstance");
static_assert(offsetof(UChaosClothAssetBase, Materials) == 280, "Offset mismatch for UChaosClothAssetBase::Materials");
static_assert(offsetof(UChaosClothAssetBase, LODInfo) == 296, "Offset mismatch for UChaosClothAssetBase::LODInfo");
static_assert(offsetof(UChaosClothAssetBase, MinQualityLevelLOD) == 312, "Offset mismatch for UChaosClothAssetBase::MinQualityLevelLOD");
static_assert(offsetof(UChaosClothAssetBase, DisableBelowMinLodStripping) == 352, "Offset mismatch for UChaosClothAssetBase::DisableBelowMinLodStripping");
static_assert(offsetof(UChaosClothAssetBase, MinLOD) == 376, "Offset mismatch for UChaosClothAssetBase::MinLOD");
static_assert(offsetof(UChaosClothAssetBase, bSupportRayTracing) == 400, "Offset mismatch for UChaosClothAssetBase::bSupportRayTracing");
static_assert(offsetof(UChaosClothAssetBase, RayTracingMinLOD) == 404, "Offset mismatch for UChaosClothAssetBase::RayTracingMinLOD");
static_assert(offsetof(UChaosClothAssetBase, ShadowPhysicsAsset) == 408, "Offset mismatch for UChaosClothAssetBase::ShadowPhysicsAsset");
static_assert(offsetof(UChaosClothAssetBase, OverlayMaterial) == 416, "Offset mismatch for UChaosClothAssetBase::OverlayMaterial");
static_assert(offsetof(UChaosClothAssetBase, OverlayMaterialMaxDrawDistance) == 424, "Offset mismatch for UChaosClothAssetBase::OverlayMaterialMaxDrawDistance");
static_assert(offsetof(UChaosClothAssetBase, bHasVertexColors) == 428, "Offset mismatch for UChaosClothAssetBase::bHasVertexColors");
static_assert(offsetof(UChaosClothAssetBase, Bounds) == 584, "Offset mismatch for UChaosClothAssetBase::Bounds");

// /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor
// Kind: Class; super: ClothingInteractor
class UChaosClothAssetInteractor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosClothAssetEngine.ChaosClothAssetSKMClothingAsset
// Kind: Class; super: ClothingAssetBase
class UChaosClothAssetSKMClothingAsset
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Asset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ClothSimulationModelIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UChaosClothAssetSKMClothingAsset, Asset) == 56, "Offset mismatch for UChaosClothAssetSKMClothingAsset::Asset");
static_assert(offsetof(UChaosClothAssetSKMClothingAsset, ClothSimulationModelIndex) == 64, "Offset mismatch for UChaosClothAssetSKMClothingAsset::ClothSimulationModelIndex");

// /Script/ChaosClothAssetEngine.ChaosClothAssetSKMClothingInteractor
// Kind: Class; super: ClothingInteractor
class UChaosClothAssetSKMClothingInteractor
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ClothingAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosClothAssetSKMClothingInteractor, ClothingAsset) == 48, "Offset mismatch for UChaosClothAssetSKMClothingInteractor::ClothingAsset");

// /Script/ChaosClothAssetEngine.ChaosClothAssetSKMClothingSimulationFactory
// Kind: Class; super: ClothingSimulationFactory
class UChaosClothAssetSKMClothingSimulationFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosClothAssetEngine.ChaosClothAssetSKMClothingSimulationInteractor
// Kind: Class; super: ClothingSimulationInteractor
class UChaosClothAssetSKMClothingSimulationInteractor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClothingInteractors; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UChaosClothAssetSKMClothingSimulationInteractor, ClothingInteractors) == 40, "Offset mismatch for UChaosClothAssetSKMClothingSimulationInteractor::ClothingInteractors");

// /Script/ChaosClothAssetEngine.ChaosClothComponent
// Kind: Class; super: SkinnedMeshComponent
class UChaosClothComponent
{
public:
    std::uint8_t Pad_0000[0x950]; // 0x0000
    std::uint8_t SimulationAsset[0x18]; // 0x0950 (Size: 0x18, Type: StructProperty)
    float BlendWeight; // 0x0968 (Size: 0x4, Type: FloatProperty)
    float ClothGeometryScale; // 0x096C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBindToLeaderComponent; // 0x0970 (Size: 0x1, Type: BoolProperty)
    // 0x0970 BoolProperty bCollideWithEnvironment (shared storage)
    // 0x0970 BoolProperty bEnableSimulation (shared storage)
    // 0x0970 BoolProperty bReset (shared storage)
    // 0x0970 BoolProperty bSuspendSimulation (shared storage)
    // 0x0970 BoolProperty bTeleport (shared storage)
    // 0x0970 BoolProperty bUseAttachedParentAsPoseComponent (shared storage)
    // 0x0970 BoolProperty bWaitForParallelTask (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0971
    TWeakObjectPtr<void> LeaderClothComponent; // 0x0974 (Size: 0x8, Type: WeakObjectProperty)
    float TeleportDistanceThreshold; // 0x097C (Size: 0x4, Type: FloatProperty)
    float TeleportRotationThreshold; // 0x0980 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xA4]; // 0x0984
    TArray<void*> ClothSimulationProperties; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChaosClothComponent, SimulationAsset) == 2384, "Offset mismatch for UChaosClothComponent::SimulationAsset");
static_assert(offsetof(UChaosClothComponent, BlendWeight) == 2408, "Offset mismatch for UChaosClothComponent::BlendWeight");
static_assert(offsetof(UChaosClothComponent, ClothGeometryScale) == 2412, "Offset mismatch for UChaosClothComponent::ClothGeometryScale");
static_assert(offsetof(UChaosClothComponent, bBindToLeaderComponent) == 2416, "Offset mismatch for UChaosClothComponent::bBindToLeaderComponent");
static_assert(offsetof(UChaosClothComponent, LeaderClothComponent) == 2420, "Offset mismatch for UChaosClothComponent::LeaderClothComponent");
static_assert(offsetof(UChaosClothComponent, TeleportDistanceThreshold) == 2428, "Offset mismatch for UChaosClothComponent::TeleportDistanceThreshold");
static_assert(offsetof(UChaosClothComponent, TeleportRotationThreshold) == 2432, "Offset mismatch for UChaosClothComponent::TeleportRotationThreshold");
static_assert(offsetof(UChaosClothComponent, ClothSimulationProperties) == 2600, "Offset mismatch for UChaosClothComponent::ClothSimulationProperties");

// /Script/ChaosClothAssetEngine.ClothAssetInteractorDataAsset
// Kind: Class; super: DataAsset
class UClothAssetInteractorDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultProperties[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> PropertySets; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UClothAssetInteractorDataAsset, DefaultProperties) == 40, "Offset mismatch for UClothAssetInteractorDataAsset::DefaultProperties");
static_assert(offsetof(UClothAssetInteractorDataAsset, PropertySets) == 56, "Offset mismatch for UClothAssetInteractorDataAsset::PropertySets");

// /Script/ChaosClothAssetEngine.ClothAssetSkeletalMeshConverter
// Kind: Class; super: Object
class UClothAssetSkeletalMeshConverter
{
public:
    std::uint8_t Opaque[1];
};

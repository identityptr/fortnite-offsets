/**
 * decamp dumper generated SDK
 * Package: /Script/MassRepresentation
 */
#pragma once
#include "Basic.h"

// /Script/MassRepresentation.MassBlendSpaceLayerData
// Kind: ScriptStruct; super: none
struct FMassBlendSpaceLayerData
{
public:
    std::uint8_t LayerIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Data[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassBlendSpaceLayerData, LayerIndex) == 0, "Offset mismatch for FMassBlendSpaceLayerData::LayerIndex");
static_assert(offsetof(FMassBlendSpaceLayerData, Data) == 4, "Offset mismatch for FMassBlendSpaceLayerData::Data");

// /Script/MassRepresentation.MassDistanceLODParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassDistanceLODParameters
{
public:
    float LODDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    float BufferHysteresisOnDistancePercentage; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    void* FilterTag; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassDistanceLODParameters, LODDistance) == 0, "Offset mismatch for FMassDistanceLODParameters::LODDistance");
static_assert(offsetof(FMassDistanceLODParameters, BufferHysteresisOnDistancePercentage) == 16, "Offset mismatch for FMassDistanceLODParameters::BufferHysteresisOnDistancePercentage");
static_assert(offsetof(FMassDistanceLODParameters, FilterTag) == 24, "Offset mismatch for FMassDistanceLODParameters::FilterTag");

// /Script/MassRepresentation.MassDistanceLODProcessorTag
// Kind: ScriptStruct; super: MassTag
struct FMassDistanceLODProcessorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassDistanceLODSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassDistanceLODSharedFragment
{
public:
    std::uint8_t Pad_0000[0x2018]; // 0x0000
    void* FilterTag; // 0x2018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassDistanceLODSharedFragment, FilterTag) == 8216, "Offset mismatch for FMassDistanceLODSharedFragment::FilterTag");

// /Script/MassRepresentation.MassInstancedAnimationBatchData
// Kind: ScriptStruct; super: none
struct FMassInstancedAnimationBatchData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassInstancedSkinnedMeshInfo
// Kind: ScriptStruct; super: none
struct FMassInstancedSkinnedMeshInfo
{
public:
    std::uint8_t Desc[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    TArray<void*> InstancedSkinnedMeshComponents; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODSignificanceRanges; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassInstancedSkinnedMeshInfo, Desc) == 0, "Offset mismatch for FMassInstancedSkinnedMeshInfo::Desc");
static_assert(offsetof(FMassInstancedSkinnedMeshInfo, InstancedSkinnedMeshComponents) == 144, "Offset mismatch for FMassInstancedSkinnedMeshInfo::InstancedSkinnedMeshComponents");
static_assert(offsetof(FMassInstancedSkinnedMeshInfo, LODSignificanceRanges) == 160, "Offset mismatch for FMassInstancedSkinnedMeshInfo::LODSignificanceRanges");

// /Script/MassRepresentation.MassInstancedStaticMeshInfo
// Kind: ScriptStruct; super: none
struct FMassInstancedStaticMeshInfo
{
public:
    std::uint8_t Desc[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    TArray<void*> InstancedStaticMeshComponents; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODSignificanceRanges; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassInstancedStaticMeshInfo, Desc) == 0, "Offset mismatch for FMassInstancedStaticMeshInfo::Desc");
static_assert(offsetof(FMassInstancedStaticMeshInfo, InstancedStaticMeshComponents) == 144, "Offset mismatch for FMassInstancedStaticMeshInfo::InstancedStaticMeshComponents");
static_assert(offsetof(FMassInstancedStaticMeshInfo, LODSignificanceRanges) == 160, "Offset mismatch for FMassInstancedStaticMeshInfo::LODSignificanceRanges");

// /Script/MassRepresentation.MassLODInstancedSkinnedMeshSignificanceRange
// Kind: ScriptStruct; super: none
struct FMassLODInstancedSkinnedMeshSignificanceRange
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassLODSignificanceRange
// Kind: ScriptStruct; super: none
struct FMassLODSignificanceRange
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassManualLayerData
// Kind: ScriptStruct; super: none
struct FMassManualLayerData
{
public:
    std::uint8_t LayerIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Data[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassManualLayerData, LayerIndex) == 0, "Offset mismatch for FMassManualLayerData::LayerIndex");
static_assert(offsetof(FMassManualLayerData, Data) == 4, "Offset mismatch for FMassManualLayerData::Data");

// /Script/MassRepresentation.MassRepresentationAnimationBlendSpaceLayersFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRepresentationAnimationBlendSpaceLayersFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassRepresentationAnimationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRepresentationAnimationFragment
{
public:
    std::uint8_t AnimData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassRepresentationAnimationFragment, AnimData) == 0, "Offset mismatch for FMassRepresentationAnimationFragment::AnimData");

// /Script/MassRepresentation.MassRepresentationAnimationManualLayersFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRepresentationAnimationManualLayersFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassRepresentationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRepresentationFragment
{
public:
    std::uint8_t CurrentRepresentation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrevRepresentation; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::int16_t HighResTemplateActorIndex; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int16_t LowResTemplateActorIndex; // 0x0004 (Size: 0x2, Type: Int16Property)
    std::uint8_t StaticMeshDescHandle[0x2]; // 0x0006 (Size: 0x2, Type: StructProperty)
    std::uint8_t SkinnedMeshDescHandle[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float PrevLODSignificance; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPendingDestruction; // 0x0010 (Size: 0x1, Type: BoolProperty)
    // 0x0010 BoolProperty bIsWaitingForActorVisualReadiness (shared storage)
    std::uint8_t ActorVisualReadinessWaitFrames; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    std::uint8_t ActorSpawnRequestHandle[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    std::uint8_t PrevTransform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassRepresentationFragment, CurrentRepresentation) == 0, "Offset mismatch for FMassRepresentationFragment::CurrentRepresentation");
static_assert(offsetof(FMassRepresentationFragment, PrevRepresentation) == 1, "Offset mismatch for FMassRepresentationFragment::PrevRepresentation");
static_assert(offsetof(FMassRepresentationFragment, HighResTemplateActorIndex) == 2, "Offset mismatch for FMassRepresentationFragment::HighResTemplateActorIndex");
static_assert(offsetof(FMassRepresentationFragment, LowResTemplateActorIndex) == 4, "Offset mismatch for FMassRepresentationFragment::LowResTemplateActorIndex");
static_assert(offsetof(FMassRepresentationFragment, StaticMeshDescHandle) == 6, "Offset mismatch for FMassRepresentationFragment::StaticMeshDescHandle");
static_assert(offsetof(FMassRepresentationFragment, SkinnedMeshDescHandle) == 8, "Offset mismatch for FMassRepresentationFragment::SkinnedMeshDescHandle");
static_assert(offsetof(FMassRepresentationFragment, PrevLODSignificance) == 12, "Offset mismatch for FMassRepresentationFragment::PrevLODSignificance");
static_assert(offsetof(FMassRepresentationFragment, bIsPendingDestruction) == 16, "Offset mismatch for FMassRepresentationFragment::bIsPendingDestruction");
static_assert(offsetof(FMassRepresentationFragment, ActorVisualReadinessWaitFrames) == 17, "Offset mismatch for FMassRepresentationFragment::ActorVisualReadinessWaitFrames");
static_assert(offsetof(FMassRepresentationFragment, ActorSpawnRequestHandle) == 20, "Offset mismatch for FMassRepresentationFragment::ActorSpawnRequestHandle");
static_assert(offsetof(FMassRepresentationFragment, PrevTransform) == 32, "Offset mismatch for FMassRepresentationFragment::PrevTransform");

// /Script/MassRepresentation.MassRepresentationLODFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRepresentationLODFragment
{
public:
    std::uint8_t LOD; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PrevLOD; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Visibility; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrevVisibility; // 0x0003 (Size: 0x1, Type: EnumProperty)
    float LODSignificance; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassRepresentationLODFragment, LOD) == 0, "Offset mismatch for FMassRepresentationLODFragment::LOD");
static_assert(offsetof(FMassRepresentationLODFragment, PrevLOD) == 1, "Offset mismatch for FMassRepresentationLODFragment::PrevLOD");
static_assert(offsetof(FMassRepresentationLODFragment, Visibility) == 2, "Offset mismatch for FMassRepresentationLODFragment::Visibility");
static_assert(offsetof(FMassRepresentationLODFragment, PrevVisibility) == 3, "Offset mismatch for FMassRepresentationLODFragment::PrevVisibility");
static_assert(offsetof(FMassRepresentationLODFragment, LODSignificance) == 4, "Offset mismatch for FMassRepresentationLODFragment::LODSignificance");

// /Script/MassRepresentation.MassRepresentationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassRepresentationParameters
{
public:
    void* RepresentationActorManagementClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LODRepresentation; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t WorldPartitionGridNameContainingCollision[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float NotVisibleUpdateRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceActorRepresentationForExternalActors; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty bKeepActorExtraFrame (shared storage)
    // 0x0014 BoolProperty bKeepLowResActors (shared storage)
    // 0x0014 BoolProperty bSpreadFirstVisualizationUpdate (shared storage)
    // 0x0014 BoolProperty bWaitForActorVisualReadiness (shared storage)
    std::uint8_t CachedDefaultRepresentationType; // 0x0015 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassRepresentationParameters, RepresentationActorManagementClass) == 0, "Offset mismatch for FMassRepresentationParameters::RepresentationActorManagementClass");
static_assert(offsetof(FMassRepresentationParameters, LODRepresentation) == 8, "Offset mismatch for FMassRepresentationParameters::LODRepresentation");
static_assert(offsetof(FMassRepresentationParameters, WorldPartitionGridNameContainingCollision) == 12, "Offset mismatch for FMassRepresentationParameters::WorldPartitionGridNameContainingCollision");
static_assert(offsetof(FMassRepresentationParameters, NotVisibleUpdateRate) == 16, "Offset mismatch for FMassRepresentationParameters::NotVisibleUpdateRate");
static_assert(offsetof(FMassRepresentationParameters, bForceActorRepresentationForExternalActors) == 20, "Offset mismatch for FMassRepresentationParameters::bForceActorRepresentationForExternalActors");
static_assert(offsetof(FMassRepresentationParameters, CachedDefaultRepresentationType) == 21, "Offset mismatch for FMassRepresentationParameters::CachedDefaultRepresentationType");

// /Script/MassRepresentation.MassRepresentationSubsystemSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassRepresentationSubsystemSharedFragment
{
public:
    TWeakObjectPtr<void> RepresentationSubsystem; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassRepresentationSubsystemSharedFragment, RepresentationSubsystem) == 0, "Offset mismatch for FMassRepresentationSubsystemSharedFragment::RepresentationSubsystem");

// /Script/MassRepresentation.MassRepresentationUpdateParams
// Kind: ScriptStruct; super: none
struct FMassRepresentationUpdateParams
{
public:
    std::uint8_t bTestCollisionAvailibilityForActorVisualization; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassRepresentationUpdateParams, bTestCollisionAvailibilityForActorVisualization) == 0, "Offset mismatch for FMassRepresentationUpdateParams::bTestCollisionAvailibilityForActorVisualization");

// /Script/MassRepresentation.MassSkinnedMeshInstanceVisualizationMeshDesc
// Kind: ScriptStruct; super: none
struct FMassSkinnedMeshInstanceVisualizationMeshDesc
{
public:
    std::uint8_t LocalTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    void* Asset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TransformProvider; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialOverrides; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    float MinLODSignificance; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxLODSignificance; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCastShadows; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0089
    void* InstancedSkinnedMeshComponentClass; // 0x0090 (Size: 0x8, Type: ClassProperty)
    float AnimationMinScreenSize; // 0x0098 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, LocalTransform) == 0, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::LocalTransform");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, Asset) == 96, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::Asset");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, TransformProvider) == 104, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::TransformProvider");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, MaterialOverrides) == 112, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::MaterialOverrides");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, MinLODSignificance) == 128, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::MinLODSignificance");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, MaxLODSignificance) == 132, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::MaxLODSignificance");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, bCastShadows) == 136, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::bCastShadows");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, InstancedSkinnedMeshComponentClass) == 144, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::InstancedSkinnedMeshComponentClass");
static_assert(offsetof(FMassSkinnedMeshInstanceVisualizationMeshDesc, AnimationMinScreenSize) == 152, "Offset mismatch for FMassSkinnedMeshInstanceVisualizationMeshDesc::AnimationMinScreenSize");

// /Script/MassRepresentation.MassStaticMeshInstanceVisualizationMeshDesc
// Kind: ScriptStruct; super: none
struct FMassStaticMeshInstanceVisualizationMeshDesc
{
public:
    std::uint8_t LocalTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    void* Mesh; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialOverrides; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    float MinLODSignificance; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaxLODSignificance; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCastShadows; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0081
    void* ISMComponentClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, LocalTransform) == 0, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::LocalTransform");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, Mesh) == 96, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::Mesh");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, MaterialOverrides) == 104, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::MaterialOverrides");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, MinLODSignificance) == 120, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::MinLODSignificance");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, MaxLODSignificance) == 124, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::MaxLODSignificance");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, bCastShadows) == 128, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::bCastShadows");
static_assert(offsetof(FMassStaticMeshInstanceVisualizationMeshDesc, ISMComponentClass) == 136, "Offset mismatch for FMassStaticMeshInstanceVisualizationMeshDesc::ISMComponentClass");

// /Script/MassRepresentation.MassStaticRepresentationTag
// Kind: ScriptStruct; super: MassTag
struct FMassStaticRepresentationTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassStationaryISMSwitcherProcessorTag
// Kind: ScriptStruct; super: MassTag
struct FMassStationaryISMSwitcherProcessorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassVisualizationLODParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassVisualizationLODParameters
{
public:
    float BaseLODDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    float VisibleLODDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0014
    float BufferHysteresisOnDistancePercentage; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t LODMaxCount; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0028
    float DistanceToFrustum; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DistanceToFrustumHysteresis; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x003C
    void* FilterTag; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassVisualizationLODParameters, BaseLODDistance) == 0, "Offset mismatch for FMassVisualizationLODParameters::BaseLODDistance");
static_assert(offsetof(FMassVisualizationLODParameters, VisibleLODDistance) == 16, "Offset mismatch for FMassVisualizationLODParameters::VisibleLODDistance");
static_assert(offsetof(FMassVisualizationLODParameters, BufferHysteresisOnDistancePercentage) == 32, "Offset mismatch for FMassVisualizationLODParameters::BufferHysteresisOnDistancePercentage");
static_assert(offsetof(FMassVisualizationLODParameters, LODMaxCount) == 36, "Offset mismatch for FMassVisualizationLODParameters::LODMaxCount");
static_assert(offsetof(FMassVisualizationLODParameters, DistanceToFrustum) == 52, "Offset mismatch for FMassVisualizationLODParameters::DistanceToFrustum");
static_assert(offsetof(FMassVisualizationLODParameters, DistanceToFrustumHysteresis) == 56, "Offset mismatch for FMassVisualizationLODParameters::DistanceToFrustumHysteresis");
static_assert(offsetof(FMassVisualizationLODParameters, FilterTag) == 64, "Offset mismatch for FMassVisualizationLODParameters::FilterTag");

// /Script/MassRepresentation.MassVisualizationLODProcessorTag
// Kind: ScriptStruct; super: MassTag
struct FMassVisualizationLODProcessorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassVisualizationLODSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassVisualizationLODSharedFragment
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    void* FilterTag; // 0x2020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassVisualizationLODSharedFragment, FilterTag) == 8224, "Offset mismatch for FMassVisualizationLODSharedFragment::FilterTag");

// /Script/MassRepresentation.MassVisualizationProcessorTag
// Kind: ScriptStruct; super: MassTag
struct FMassVisualizationProcessorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.SkinnedMeshInstanceVisualizationDesc
// Kind: ScriptStruct; super: TableRowBase
struct FSkinnedMeshInstanceVisualizationDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Meshes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseTransformOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t TransformOffset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    TArray<void*> CustomDataFloats; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSkinnedMeshInstanceVisualizationDesc, Meshes) == 8, "Offset mismatch for FSkinnedMeshInstanceVisualizationDesc::Meshes");
static_assert(offsetof(FSkinnedMeshInstanceVisualizationDesc, bUseTransformOffset) == 24, "Offset mismatch for FSkinnedMeshInstanceVisualizationDesc::bUseTransformOffset");
static_assert(offsetof(FSkinnedMeshInstanceVisualizationDesc, TransformOffset) == 32, "Offset mismatch for FSkinnedMeshInstanceVisualizationDesc::TransformOffset");
static_assert(offsetof(FSkinnedMeshInstanceVisualizationDesc, CustomDataFloats) == 128, "Offset mismatch for FSkinnedMeshInstanceVisualizationDesc::CustomDataFloats");

// /Script/MassRepresentation.SkinnedMeshInstanceVisualizationDescHandle
// Kind: ScriptStruct; super: none
struct FSkinnedMeshInstanceVisualizationDescHandle
{
public:
    std::uint16_t Index; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FSkinnedMeshInstanceVisualizationDescHandle, Index) == 0, "Offset mismatch for FSkinnedMeshInstanceVisualizationDescHandle::Index");

// /Script/MassRepresentation.StaticMeshInstanceVisualizationDesc
// Kind: ScriptStruct; super: TableRowBase
struct FStaticMeshInstanceVisualizationDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Meshes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseTransformOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t TransformOffset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    TArray<void*> CustomDataFloats; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStaticMeshInstanceVisualizationDesc, Meshes) == 8, "Offset mismatch for FStaticMeshInstanceVisualizationDesc::Meshes");
static_assert(offsetof(FStaticMeshInstanceVisualizationDesc, bUseTransformOffset) == 24, "Offset mismatch for FStaticMeshInstanceVisualizationDesc::bUseTransformOffset");
static_assert(offsetof(FStaticMeshInstanceVisualizationDesc, TransformOffset) == 32, "Offset mismatch for FStaticMeshInstanceVisualizationDesc::TransformOffset");
static_assert(offsetof(FStaticMeshInstanceVisualizationDesc, CustomDataFloats) == 128, "Offset mismatch for FStaticMeshInstanceVisualizationDesc::CustomDataFloats");

// /Script/MassRepresentation.StaticMeshInstanceVisualizationDescHandle
// Kind: ScriptStruct; super: none
struct FStaticMeshInstanceVisualizationDescHandle
{
public:
    std::uint16_t Index; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FStaticMeshInstanceVisualizationDescHandle, Index) == 0, "Offset mismatch for FStaticMeshInstanceVisualizationDescHandle::Index");

// /Script/MassRepresentation.MassConsumeInstancedSkinnedMeshAnimationProcessor
// Kind: Class; super: MassProcessor
class UMassConsumeInstancedSkinnedMeshAnimationProcessor
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

static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::ExecutionOrder");
static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::ProcessingPhase");
static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::ExecutionFlags");
static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, ActivationState) == 83, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::ActivationState");
static_assert(offsetof(UMassConsumeInstancedSkinnedMeshAnimationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassConsumeInstancedSkinnedMeshAnimationProcessor::ExecutionPriority");

// /Script/MassRepresentation.MassDistanceLODProcessor
// Kind: Class; super: MassProcessor
class UMassDistanceLODProcessor
{
public:
    std::uint8_t Pad_0000[0x1338]; // 0x0000
    void* FilterTag; // 0x1338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassDistanceLODProcessor, FilterTag) == 4920, "Offset mismatch for UMassDistanceLODProcessor::FilterTag");

// /Script/MassRepresentation.MassDistanceVisualizationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassDistanceVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StaticMeshInstanceDesc[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    void* HighResTemplateActor; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* LowResTemplateActor; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* RepresentationSubsystemClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t LODParams[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowServerSideVisualization; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassDistanceVisualizationTrait, StaticMeshInstanceDesc) == 48, "Offset mismatch for UMassDistanceVisualizationTrait::StaticMeshInstanceDesc");
static_assert(offsetof(UMassDistanceVisualizationTrait, HighResTemplateActor) == 192, "Offset mismatch for UMassDistanceVisualizationTrait::HighResTemplateActor");
static_assert(offsetof(UMassDistanceVisualizationTrait, LowResTemplateActor) == 200, "Offset mismatch for UMassDistanceVisualizationTrait::LowResTemplateActor");
static_assert(offsetof(UMassDistanceVisualizationTrait, RepresentationSubsystemClass) == 208, "Offset mismatch for UMassDistanceVisualizationTrait::RepresentationSubsystemClass");
static_assert(offsetof(UMassDistanceVisualizationTrait, Params) == 216, "Offset mismatch for UMassDistanceVisualizationTrait::Params");
static_assert(offsetof(UMassDistanceVisualizationTrait, LODParams) == 248, "Offset mismatch for UMassDistanceVisualizationTrait::LODParams");
static_assert(offsetof(UMassDistanceVisualizationTrait, bAllowServerSideVisualization) == 280, "Offset mismatch for UMassDistanceVisualizationTrait::bAllowServerSideVisualization");

// /Script/MassRepresentation.MassMovableVisualizationTrait
// Kind: Class; super: MassVisualizationTrait
class UMassMovableVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StaticMeshInstanceDesc[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    std::uint8_t SkinnedMeshInstanceDesc[0x90]; // 0x00C0 (Size: 0x90, Type: StructProperty)
    void* HighResTemplateActor; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* LowResTemplateActor; // 0x0158 (Size: 0x8, Type: ClassProperty)
    void* RepresentationSubsystemClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x20]; // 0x0168 (Size: 0x20, Type: StructProperty)
    std::uint8_t LODParams[0x48]; // 0x0188 (Size: 0x48, Type: StructProperty)
    std::uint8_t bAllowServerSideVisualization; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassMovableVisualizationTrait, StaticMeshInstanceDesc) == 48, "Offset mismatch for UMassMovableVisualizationTrait::StaticMeshInstanceDesc");
static_assert(offsetof(UMassMovableVisualizationTrait, SkinnedMeshInstanceDesc) == 192, "Offset mismatch for UMassMovableVisualizationTrait::SkinnedMeshInstanceDesc");
static_assert(offsetof(UMassMovableVisualizationTrait, HighResTemplateActor) == 336, "Offset mismatch for UMassMovableVisualizationTrait::HighResTemplateActor");
static_assert(offsetof(UMassMovableVisualizationTrait, LowResTemplateActor) == 344, "Offset mismatch for UMassMovableVisualizationTrait::LowResTemplateActor");
static_assert(offsetof(UMassMovableVisualizationTrait, RepresentationSubsystemClass) == 352, "Offset mismatch for UMassMovableVisualizationTrait::RepresentationSubsystemClass");
static_assert(offsetof(UMassMovableVisualizationTrait, Params) == 360, "Offset mismatch for UMassMovableVisualizationTrait::Params");
static_assert(offsetof(UMassMovableVisualizationTrait, LODParams) == 392, "Offset mismatch for UMassMovableVisualizationTrait::LODParams");
static_assert(offsetof(UMassMovableVisualizationTrait, bAllowServerSideVisualization) == 464, "Offset mismatch for UMassMovableVisualizationTrait::bAllowServerSideVisualization");

// /Script/MassRepresentation.MassRepresentationActorManagement
// Kind: Class; super: Object
class UMassRepresentationActorManagement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassRepresentation.MassRepresentationFragmentDestructor
// Kind: Class; super: MassObserverProcessor
class UMassRepresentationFragmentDestructor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRepresentationFragmentDestructor, ObservedType) == 256, "Offset mismatch for UMassRepresentationFragmentDestructor::ObservedType");
static_assert(offsetof(UMassRepresentationFragmentDestructor, ObservedTypes) == 264, "Offset mismatch for UMassRepresentationFragmentDestructor::ObservedTypes");
static_assert(offsetof(UMassRepresentationFragmentDestructor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRepresentationFragmentDestructor::bAutoRegisterWithObserverRegistry");

// /Script/MassRepresentation.MassRepresentationProcessor
// Kind: Class; super: MassProcessor
class UMassRepresentationProcessor
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    std::uint8_t UpdateParams[0x1]; // 0x0710 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassRepresentationProcessor, UpdateParams) == 1808, "Offset mismatch for UMassRepresentationProcessor::UpdateParams");

// /Script/MassRepresentation.MassRepresentationSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassRepresentationSubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> VisualizationComponent; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Visualizer; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    void* ActorSpawnerSubsystem; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0090
    void* WorldPartitionSubsystem; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassRepresentationSubsystem, VisualizationComponent) == 120, "Offset mismatch for UMassRepresentationSubsystem::VisualizationComponent");
static_assert(offsetof(UMassRepresentationSubsystem, Visualizer) == 128, "Offset mismatch for UMassRepresentationSubsystem::Visualizer");
static_assert(offsetof(UMassRepresentationSubsystem, ActorSpawnerSubsystem) == 136, "Offset mismatch for UMassRepresentationSubsystem::ActorSpawnerSubsystem");
static_assert(offsetof(UMassRepresentationSubsystem, WorldPartitionSubsystem) == 160, "Offset mismatch for UMassRepresentationSubsystem::WorldPartitionSubsystem");

// /Script/MassRepresentation.MassStationaryDistanceVisualizationTrait
// Kind: Class; super: MassDistanceVisualizationTrait
class UMassStationaryDistanceVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StaticMeshInstanceDesc[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    void* HighResTemplateActor; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* LowResTemplateActor; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* RepresentationSubsystemClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t LODParams[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowServerSideVisualization; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, StaticMeshInstanceDesc) == 48, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::StaticMeshInstanceDesc");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, HighResTemplateActor) == 192, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::HighResTemplateActor");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, LowResTemplateActor) == 200, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::LowResTemplateActor");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, RepresentationSubsystemClass) == 208, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::RepresentationSubsystemClass");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, Params) == 216, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::Params");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, LODParams) == 248, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::LODParams");
static_assert(offsetof(UMassStationaryDistanceVisualizationTrait, bAllowServerSideVisualization) == 280, "Offset mismatch for UMassStationaryDistanceVisualizationTrait::bAllowServerSideVisualization");

// /Script/MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
// Kind: Class; super: MassObserverProcessor
class UMassStationaryISMRepresentationFragmentDestructor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassStationaryISMRepresentationFragmentDestructor, ObservedType) == 256, "Offset mismatch for UMassStationaryISMRepresentationFragmentDestructor::ObservedType");
static_assert(offsetof(UMassStationaryISMRepresentationFragmentDestructor, ObservedTypes) == 264, "Offset mismatch for UMassStationaryISMRepresentationFragmentDestructor::ObservedTypes");
static_assert(offsetof(UMassStationaryISMRepresentationFragmentDestructor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassStationaryISMRepresentationFragmentDestructor::bAutoRegisterWithObserverRegistry");

// /Script/MassRepresentation.MassStationaryISMSwitcherProcessor
// Kind: Class; super: MassProcessor
class UMassStationaryISMSwitcherProcessor
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

static_assert(offsetof(UMassStationaryISMSwitcherProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassStationaryISMSwitcherProcessor::ExecutionOrder");
static_assert(offsetof(UMassStationaryISMSwitcherProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassStationaryISMSwitcherProcessor::ProcessingPhase");
static_assert(offsetof(UMassStationaryISMSwitcherProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassStationaryISMSwitcherProcessor::ExecutionFlags");
static_assert(offsetof(UMassStationaryISMSwitcherProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassStationaryISMSwitcherProcessor::bAggregateRequirements");
static_assert(offsetof(UMassStationaryISMSwitcherProcessor, ActivationState) == 83, "Offset mismatch for UMassStationaryISMSwitcherProcessor::ActivationState");
static_assert(offsetof(UMassStationaryISMSwitcherProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassStationaryISMSwitcherProcessor::ExecutionPriority");

// /Script/MassRepresentation.MassStationaryVisualizationTrait
// Kind: Class; super: MassVisualizationTrait
class UMassStationaryVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StaticMeshInstanceDesc[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    std::uint8_t SkinnedMeshInstanceDesc[0x90]; // 0x00C0 (Size: 0x90, Type: StructProperty)
    void* HighResTemplateActor; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* LowResTemplateActor; // 0x0158 (Size: 0x8, Type: ClassProperty)
    void* RepresentationSubsystemClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x20]; // 0x0168 (Size: 0x20, Type: StructProperty)
    std::uint8_t LODParams[0x48]; // 0x0188 (Size: 0x48, Type: StructProperty)
    std::uint8_t bAllowServerSideVisualization; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassStationaryVisualizationTrait, StaticMeshInstanceDesc) == 48, "Offset mismatch for UMassStationaryVisualizationTrait::StaticMeshInstanceDesc");
static_assert(offsetof(UMassStationaryVisualizationTrait, SkinnedMeshInstanceDesc) == 192, "Offset mismatch for UMassStationaryVisualizationTrait::SkinnedMeshInstanceDesc");
static_assert(offsetof(UMassStationaryVisualizationTrait, HighResTemplateActor) == 336, "Offset mismatch for UMassStationaryVisualizationTrait::HighResTemplateActor");
static_assert(offsetof(UMassStationaryVisualizationTrait, LowResTemplateActor) == 344, "Offset mismatch for UMassStationaryVisualizationTrait::LowResTemplateActor");
static_assert(offsetof(UMassStationaryVisualizationTrait, RepresentationSubsystemClass) == 352, "Offset mismatch for UMassStationaryVisualizationTrait::RepresentationSubsystemClass");
static_assert(offsetof(UMassStationaryVisualizationTrait, Params) == 360, "Offset mismatch for UMassStationaryVisualizationTrait::Params");
static_assert(offsetof(UMassStationaryVisualizationTrait, LODParams) == 392, "Offset mismatch for UMassStationaryVisualizationTrait::LODParams");
static_assert(offsetof(UMassStationaryVisualizationTrait, bAllowServerSideVisualization) == 464, "Offset mismatch for UMassStationaryVisualizationTrait::bAllowServerSideVisualization");

// /Script/MassRepresentation.MassUpdateISMProcessor
// Kind: Class; super: MassProcessor
class UMassUpdateISMProcessor
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

static_assert(offsetof(UMassUpdateISMProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassUpdateISMProcessor::ExecutionOrder");
static_assert(offsetof(UMassUpdateISMProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassUpdateISMProcessor::ProcessingPhase");
static_assert(offsetof(UMassUpdateISMProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassUpdateISMProcessor::ExecutionFlags");
static_assert(offsetof(UMassUpdateISMProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassUpdateISMProcessor::bAggregateRequirements");
static_assert(offsetof(UMassUpdateISMProcessor, ActivationState) == 83, "Offset mismatch for UMassUpdateISMProcessor::ActivationState");
static_assert(offsetof(UMassUpdateISMProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassUpdateISMProcessor::ExecutionPriority");

// /Script/MassRepresentation.MassUpdateInstancedSkinnedMeshProcessor
// Kind: Class; super: MassProcessor
class UMassUpdateInstancedSkinnedMeshProcessor
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

static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::ExecutionOrder");
static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::ProcessingPhase");
static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::ExecutionFlags");
static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::bAggregateRequirements");
static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, ActivationState) == 83, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::ActivationState");
static_assert(offsetof(UMassUpdateInstancedSkinnedMeshProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassUpdateInstancedSkinnedMeshProcessor::ExecutionPriority");

// /Script/MassRepresentation.MassVisualizationComponent
// Kind: Class; super: ActorComponent
class UMassVisualizationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> InstancedStaticMeshInfos; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x90]; // 0x00D0
    TArray<void*> InstancedSkinnedMeshInfos; // 0x0160 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassVisualizationComponent, InstancedStaticMeshInfos) == 192, "Offset mismatch for UMassVisualizationComponent::InstancedStaticMeshInfos");
static_assert(offsetof(UMassVisualizationComponent, InstancedSkinnedMeshInfos) == 352, "Offset mismatch for UMassVisualizationComponent::InstancedSkinnedMeshInfos");

// /Script/MassRepresentation.MassVisualizationLODProcessor
// Kind: Class; super: MassProcessor
class UMassVisualizationLODProcessor
{
public:
    std::uint8_t Pad_0000[0x1948]; // 0x0000
    void* FilterTag; // 0x1948 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDoAdjustmentFromCount; // 0x1950 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassVisualizationLODProcessor, FilterTag) == 6472, "Offset mismatch for UMassVisualizationLODProcessor::FilterTag");
static_assert(offsetof(UMassVisualizationLODProcessor, bDoAdjustmentFromCount) == 6480, "Offset mismatch for UMassVisualizationLODProcessor::bDoAdjustmentFromCount");

// /Script/MassRepresentation.MassVisualizationProcessor
// Kind: Class; super: MassRepresentationProcessor
class UMassVisualizationProcessor
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    std::uint8_t UpdateParams[0x1]; // 0x0710 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassVisualizationProcessor, UpdateParams) == 1808, "Offset mismatch for UMassVisualizationProcessor::UpdateParams");

// /Script/MassRepresentation.MassVisualizationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StaticMeshInstanceDesc[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    std::uint8_t SkinnedMeshInstanceDesc[0x90]; // 0x00C0 (Size: 0x90, Type: StructProperty)
    void* HighResTemplateActor; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* LowResTemplateActor; // 0x0158 (Size: 0x8, Type: ClassProperty)
    void* RepresentationSubsystemClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x20]; // 0x0168 (Size: 0x20, Type: StructProperty)
    std::uint8_t LODParams[0x48]; // 0x0188 (Size: 0x48, Type: StructProperty)
    std::uint8_t bAllowServerSideVisualization; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassVisualizationTrait, StaticMeshInstanceDesc) == 48, "Offset mismatch for UMassVisualizationTrait::StaticMeshInstanceDesc");
static_assert(offsetof(UMassVisualizationTrait, SkinnedMeshInstanceDesc) == 192, "Offset mismatch for UMassVisualizationTrait::SkinnedMeshInstanceDesc");
static_assert(offsetof(UMassVisualizationTrait, HighResTemplateActor) == 336, "Offset mismatch for UMassVisualizationTrait::HighResTemplateActor");
static_assert(offsetof(UMassVisualizationTrait, LowResTemplateActor) == 344, "Offset mismatch for UMassVisualizationTrait::LowResTemplateActor");
static_assert(offsetof(UMassVisualizationTrait, RepresentationSubsystemClass) == 352, "Offset mismatch for UMassVisualizationTrait::RepresentationSubsystemClass");
static_assert(offsetof(UMassVisualizationTrait, Params) == 360, "Offset mismatch for UMassVisualizationTrait::Params");
static_assert(offsetof(UMassVisualizationTrait, LODParams) == 392, "Offset mismatch for UMassVisualizationTrait::LODParams");
static_assert(offsetof(UMassVisualizationTrait, bAllowServerSideVisualization) == 464, "Offset mismatch for UMassVisualizationTrait::bAllowServerSideVisualization");

// /Script/MassRepresentation.MassVisualizer
// Kind: Class; super: Actor
class UMassVisualizer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* VisComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassVisualizer, VisComponent) == 624, "Offset mismatch for UMassVisualizer::VisComponent");

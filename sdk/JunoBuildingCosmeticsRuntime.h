/**
 * decamp dumper generated SDK
 * Package: /Script/JunoBuildingCosmeticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPlacementPreview
// Kind: ScriptStruct; super: none
struct FJunoBuildingPlacementPreview
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> MeshComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ToWorld[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Bounds[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingPlacementPreview, Guid) == 0, "Offset mismatch for FJunoBuildingPlacementPreview::Guid");
static_assert(offsetof(FJunoBuildingPlacementPreview, MeshComponents) == 16, "Offset mismatch for FJunoBuildingPlacementPreview::MeshComponents");
static_assert(offsetof(FJunoBuildingPlacementPreview, ToWorld) == 32, "Offset mismatch for FJunoBuildingPlacementPreview::ToWorld");
static_assert(offsetof(FJunoBuildingPlacementPreview, Bounds) == 128, "Offset mismatch for FJunoBuildingPlacementPreview::Bounds");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewParams
// Kind: ScriptStruct; super: none
struct FJunoBuildingPreviewParams
{
public:
    TArray<void*> CollisionResponses; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowFoundationPieces; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetCustomDepthStencil; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPrimitiveComponentsInPreview; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoBuildingPreviewParams, CollisionResponses) == 0, "Offset mismatch for FJunoBuildingPreviewParams::CollisionResponses");
static_assert(offsetof(FJunoBuildingPreviewParams, bShowFoundationPieces) == 16, "Offset mismatch for FJunoBuildingPreviewParams::bShowFoundationPieces");
static_assert(offsetof(FJunoBuildingPreviewParams, bSetCustomDepthStencil) == 17, "Offset mismatch for FJunoBuildingPreviewParams::bSetCustomDepthStencil");
static_assert(offsetof(FJunoBuildingPreviewParams, bAllowPrimitiveComponentsInPreview) == 18, "Offset mismatch for FJunoBuildingPreviewParams::bAllowPrimitiveComponentsInPreview");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewerRequestData
// Kind: ScriptStruct; super: none
struct FJunoBuildingPreviewerRequestData
{
public:
    TMap<void*, void*> AttachParents; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoBuildingPreviewerRequestData, AttachParents) == 0, "Offset mismatch for FJunoBuildingPreviewerRequestData::AttachParents");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewerWorkingData
// Kind: ScriptStruct; super: none
struct FJunoBuildingPreviewerWorkingData
{
public:
    TArray<void*> DefaultComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequestData[0xE0]; // 0x0010 (Size: 0xE0, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingPreviewerWorkingData, DefaultComponents) == 0, "Offset mismatch for FJunoBuildingPreviewerWorkingData::DefaultComponents");
static_assert(offsetof(FJunoBuildingPreviewerWorkingData, RequestData) == 16, "Offset mismatch for FJunoBuildingPreviewerWorkingData::RequestData");
static_assert(offsetof(FJunoBuildingPreviewerWorkingData, Result) == 240, "Offset mismatch for FJunoBuildingPreviewerWorkingData::Result");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewerWorkingDataAsync
// Kind: ScriptStruct; super: none
struct FJunoBuildingPreviewerWorkingDataAsync
{
public:
    std::uint8_t WorkingData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingPreviewerWorkingDataAsync, WorkingData) == 0, "Offset mismatch for FJunoBuildingPreviewerWorkingDataAsync::WorkingData");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingSelectionPreview
// Kind: ScriptStruct; super: none
struct FJunoBuildingSelectionPreview
{
public:
    TArray<void*> PreviewComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceCollisionComponents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshComponents; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SnapEntryPreviews; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentToClassMap; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalCollisionBounds[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingSelectionPreview, PreviewComponents) == 0, "Offset mismatch for FJunoBuildingSelectionPreview::PreviewComponents");
static_assert(offsetof(FJunoBuildingSelectionPreview, CollisionComponents) == 16, "Offset mismatch for FJunoBuildingSelectionPreview::CollisionComponents");
static_assert(offsetof(FJunoBuildingSelectionPreview, SourceCollisionComponents) == 32, "Offset mismatch for FJunoBuildingSelectionPreview::SourceCollisionComponents");
static_assert(offsetof(FJunoBuildingSelectionPreview, MeshComponents) == 48, "Offset mismatch for FJunoBuildingSelectionPreview::MeshComponents");
static_assert(offsetof(FJunoBuildingSelectionPreview, SnapEntryPreviews) == 64, "Offset mismatch for FJunoBuildingSelectionPreview::SnapEntryPreviews");
static_assert(offsetof(FJunoBuildingSelectionPreview, ComponentToClassMap) == 80, "Offset mismatch for FJunoBuildingSelectionPreview::ComponentToClassMap");
static_assert(offsetof(FJunoBuildingSelectionPreview, LocalCollisionBounds) == 96, "Offset mismatch for FJunoBuildingSelectionPreview::LocalCollisionBounds");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingSnapEntry
// Kind: ScriptStruct; super: none
struct FJunoBuildingSnapEntry
{
public:
    FName Label; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Tags[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t ToActor[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t PreviewOffset[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConnectableTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetingArea[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingSnapEntry, Label) == 0, "Offset mismatch for FJunoBuildingSnapEntry::Label");
static_assert(offsetof(FJunoBuildingSnapEntry, Tags) == 8, "Offset mismatch for FJunoBuildingSnapEntry::Tags");
static_assert(offsetof(FJunoBuildingSnapEntry, ToActor) == 48, "Offset mismatch for FJunoBuildingSnapEntry::ToActor");
static_assert(offsetof(FJunoBuildingSnapEntry, PreviewOffset) == 144, "Offset mismatch for FJunoBuildingSnapEntry::PreviewOffset");
static_assert(offsetof(FJunoBuildingSnapEntry, ConnectableTags) == 168, "Offset mismatch for FJunoBuildingSnapEntry::ConnectableTags");
static_assert(offsetof(FJunoBuildingSnapEntry, TargetingArea) == 200, "Offset mismatch for FJunoBuildingSnapEntry::TargetingArea");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingSnapEntryContext
// Kind: ScriptStruct; super: none
struct FJunoBuildingSnapEntryContext
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t State; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t ToWorld[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingSnapEntryContext, State) == 8, "Offset mismatch for FJunoBuildingSnapEntryContext::State");
static_assert(offsetof(FJunoBuildingSnapEntryContext, ToWorld) == 16, "Offset mismatch for FJunoBuildingSnapEntryContext::ToWorld");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingSnapEntryPreview
// Kind: ScriptStruct; super: none
struct FJunoBuildingSnapEntryPreview
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t ToWorld[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t TargetingArea[0x38]; // 0x0070 (Size: 0x38, Type: StructProperty)
    double FadePercentage; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bOnPrimaryActor; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoBuildingSnapEntryPreview, State) == 0, "Offset mismatch for FJunoBuildingSnapEntryPreview::State");
static_assert(offsetof(FJunoBuildingSnapEntryPreview, ToWorld) == 16, "Offset mismatch for FJunoBuildingSnapEntryPreview::ToWorld");
static_assert(offsetof(FJunoBuildingSnapEntryPreview, TargetingArea) == 112, "Offset mismatch for FJunoBuildingSnapEntryPreview::TargetingArea");
static_assert(offsetof(FJunoBuildingSnapEntryPreview, FadePercentage) == 168, "Offset mismatch for FJunoBuildingSnapEntryPreview::FadePercentage");
static_assert(offsetof(FJunoBuildingSnapEntryPreview, bOnPrimaryActor) == 176, "Offset mismatch for FJunoBuildingSnapEntryPreview::bOnPrimaryActor");

// /Script/JunoBuildingCosmeticsRuntime.JunoCollisionChannelResponsePair
// Kind: ScriptStruct; super: none
struct FJunoCollisionChannelResponsePair
{
public:
    std::uint8_t Channel; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Response; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FJunoCollisionChannelResponsePair, Channel) == 0, "Offset mismatch for FJunoCollisionChannelResponsePair::Channel");
static_assert(offsetof(FJunoCollisionChannelResponsePair, Response) == 1, "Offset mismatch for FJunoCollisionChannelResponsePair::Response");

// /Script/JunoBuildingCosmeticsRuntime.JunoComponentActorMapEntry
// Kind: ScriptStruct; super: none
struct FJunoComponentActorMapEntry
{
public:
    TWeakObjectPtr<void> Component; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    void* SelectedActorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoComponentActorMapEntry, Component) == 0, "Offset mismatch for FJunoComponentActorMapEntry::Component");
static_assert(offsetof(FJunoComponentActorMapEntry, SelectedActorClass) == 8, "Offset mismatch for FJunoComponentActorMapEntry::SelectedActorClass");

// /Script/JunoBuildingCosmeticsRuntime.JunoGuidedBuildingBaseData
// Kind: ScriptStruct; super: none
struct FJunoGuidedBuildingBaseData
{
public:
    TArray<void*> ComponentReferences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Recipe[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsFoundation; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoGuidedBuildingBaseData, ComponentReferences) == 0, "Offset mismatch for FJunoGuidedBuildingBaseData::ComponentReferences");
static_assert(offsetof(FJunoGuidedBuildingBaseData, Recipe) == 16, "Offset mismatch for FJunoGuidedBuildingBaseData::Recipe");
static_assert(offsetof(FJunoGuidedBuildingBaseData, bIsFoundation) == 20, "Offset mismatch for FJunoGuidedBuildingBaseData::bIsFoundation");

// /Script/JunoBuildingCosmeticsRuntime.JunoGuidedBuildingDisplayActorDataEntry
// Kind: ScriptStruct; super: JunoGuidedBuildingBaseData
struct FJunoGuidedBuildingDisplayActorDataEntry
{
public:
    TArray<void*> ComponentReferences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Recipe[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsFoundation; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoGuidedBuildingDisplayActorDataEntry, ComponentReferences) == 0, "Offset mismatch for FJunoGuidedBuildingDisplayActorDataEntry::ComponentReferences");
static_assert(offsetof(FJunoGuidedBuildingDisplayActorDataEntry, Recipe) == 16, "Offset mismatch for FJunoGuidedBuildingDisplayActorDataEntry::Recipe");
static_assert(offsetof(FJunoGuidedBuildingDisplayActorDataEntry, bIsFoundation) == 20, "Offset mismatch for FJunoGuidedBuildingDisplayActorDataEntry::bIsFoundation");

// /Script/JunoBuildingCosmeticsRuntime.JunoKnowledgeBundleTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoKnowledgeBundleTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName CraftingRecipeIdentifier; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoKnowledgeBundleTableRow, CraftingRecipeIdentifier) == 8, "Offset mismatch for FJunoKnowledgeBundleTableRow::CraftingRecipeIdentifier");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingAccountItemDefBase
// Kind: Class; super: AthenaCosmeticItemDefinition
class UJunoBuildingAccountItemDefBase
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    float JunoBuildingFrontendPreviewScale; // 0x03F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03FC
    std::uint8_t JunoBuildingFrontendFramingCenterOffsetRatio[0x1]; // 0x0400 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBuildingAccountItemDefBase, JunoBuildingFrontendPreviewScale) == 1016, "Offset mismatch for UJunoBuildingAccountItemDefBase::JunoBuildingFrontendPreviewScale");
static_assert(offsetof(UJunoBuildingAccountItemDefBase, JunoBuildingFrontendFramingCenterOffsetRatio) == 1024, "Offset mismatch for UJunoBuildingAccountItemDefBase::JunoBuildingFrontendFramingCenterOffsetRatio");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingCosmeticsSettings
// Kind: Class; super: PrimaryDataAsset
class UJunoBuildingCosmeticsSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t JunoBuildingSetPreviewActorClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t JunoBuildingPropPreviewActorClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t JunoBuildingSetPreviewPrefabAssetClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t JunoBuildingPropPreviewPrefabAssetClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t BlueprintCategoryTag[0x4]; // 0x00A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuildingPartSubCategoryTag[0x1]; // 0x00AC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBuildingCosmeticsSettings, JunoBuildingSetPreviewActorClass) == 40, "Offset mismatch for UJunoBuildingCosmeticsSettings::JunoBuildingSetPreviewActorClass");
static_assert(offsetof(UJunoBuildingCosmeticsSettings, JunoBuildingPropPreviewActorClass) == 72, "Offset mismatch for UJunoBuildingCosmeticsSettings::JunoBuildingPropPreviewActorClass");
static_assert(offsetof(UJunoBuildingCosmeticsSettings, JunoBuildingSetPreviewPrefabAssetClass) == 104, "Offset mismatch for UJunoBuildingCosmeticsSettings::JunoBuildingSetPreviewPrefabAssetClass");
static_assert(offsetof(UJunoBuildingCosmeticsSettings, JunoBuildingPropPreviewPrefabAssetClass) == 136, "Offset mismatch for UJunoBuildingCosmeticsSettings::JunoBuildingPropPreviewPrefabAssetClass");
static_assert(offsetof(UJunoBuildingCosmeticsSettings, BlueprintCategoryTag) == 168, "Offset mismatch for UJunoBuildingCosmeticsSettings::BlueprintCategoryTag");
static_assert(offsetof(UJunoBuildingCosmeticsSettings, BuildingPartSubCategoryTag) == 172, "Offset mismatch for UJunoBuildingCosmeticsSettings::BuildingPartSubCategoryTag");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingItemPreviewActor
// Kind: Class; super: FortItemPreviewOffPawnActor
class UJunoBuildingItemPreviewActor
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* PreviewActorComponent; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* ChildPreviewActor; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewStaticMeshComponent; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSkelMeshComponent; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultPreviewActorClass; // 0x04D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowPivotLocationOffsetOnPreviewChildActor; // 0x04E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04E1
    void* GliderSpawnComponent; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBuildingItemPreviewActor, PreviewActorComponent) == 1208, "Offset mismatch for UJunoBuildingItemPreviewActor::PreviewActorComponent");
static_assert(offsetof(UJunoBuildingItemPreviewActor, ChildPreviewActor) == 1216, "Offset mismatch for UJunoBuildingItemPreviewActor::ChildPreviewActor");
static_assert(offsetof(UJunoBuildingItemPreviewActor, PreviewStaticMeshComponent) == 1224, "Offset mismatch for UJunoBuildingItemPreviewActor::PreviewStaticMeshComponent");
static_assert(offsetof(UJunoBuildingItemPreviewActor, PreviewSkelMeshComponent) == 1232, "Offset mismatch for UJunoBuildingItemPreviewActor::PreviewSkelMeshComponent");
static_assert(offsetof(UJunoBuildingItemPreviewActor, DefaultPreviewActorClass) == 1240, "Offset mismatch for UJunoBuildingItemPreviewActor::DefaultPreviewActorClass");
static_assert(offsetof(UJunoBuildingItemPreviewActor, bAllowPivotLocationOffsetOnPreviewChildActor) == 1248, "Offset mismatch for UJunoBuildingItemPreviewActor::bAllowPivotLocationOffsetOnPreviewChildActor");
static_assert(offsetof(UJunoBuildingItemPreviewActor, GliderSpawnComponent) == 1256, "Offset mismatch for UJunoBuildingItemPreviewActor::GliderSpawnComponent");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoBuildingPreviewComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoBuildingPreviewComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoBuildingPreviewComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoBuildingPreviewComponent, ComponentTags) == 104, "Offset mismatch for UJunoBuildingPreviewComponent::ComponentTags");
static_assert(offsetof(UJunoBuildingPreviewComponent, AssetUserData) == 120, "Offset mismatch for UJunoBuildingPreviewComponent::AssetUserData");
static_assert(offsetof(UJunoBuildingPreviewComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoBuildingPreviewComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoBuildingPreviewComponent, bNetAddressable) == 152, "Offset mismatch for UJunoBuildingPreviewComponent::bNetAddressable");
static_assert(offsetof(UJunoBuildingPreviewComponent, bAutoActivate) == 154, "Offset mismatch for UJunoBuildingPreviewComponent::bAutoActivate");
static_assert(offsetof(UJunoBuildingPreviewComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoBuildingPreviewComponent::bIsEditorOnly");
static_assert(offsetof(UJunoBuildingPreviewComponent, CreationMethod) == 185, "Offset mismatch for UJunoBuildingPreviewComponent::CreationMethod");
static_assert(offsetof(UJunoBuildingPreviewComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoBuildingPreviewComponent::OnComponentActivated");
static_assert(offsetof(UJunoBuildingPreviewComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoBuildingPreviewComponent::OnComponentDeactivated");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewInterface
// Kind: Class; super: Interface
class UJunoBuildingPreviewInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewPrefabAsset
// Kind: Class; super: Actor
class UJunoBuildingPreviewPrefabAsset
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    std::uint8_t CameraFrameTargetBounds[0x20]; // 0x0280 (Size: 0x20, Type: StructProperty)
    float ZoomedInBoundsScale; // 0x02A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoBuildingPreviewPrefabAsset, CameraFrameTargetBounds) == 640, "Offset mismatch for UJunoBuildingPreviewPrefabAsset::CameraFrameTargetBounds");
static_assert(offsetof(UJunoBuildingPreviewPrefabAsset, ZoomedInBoundsScale) == 672, "Offset mismatch for UJunoBuildingPreviewPrefabAsset::ZoomedInBoundsScale");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPreviewerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UJunoBuildingPreviewerSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> AsyncPreviewsStack; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoBuildingPreviewerSubsystem, AsyncPreviewsStack) == 72, "Offset mismatch for UJunoBuildingPreviewerSubsystem::AsyncPreviewsStack");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingPropAccountItemDefinition
// Kind: Class; super: JunoBuildingAccountItemDefBase
class UJunoBuildingPropAccountItemDefinition
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    TSoftClassPtr<void> BuildingActorClassToPreview; // 0x0410 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJunoBuildingPropAccountItemDefinition, BuildingActorClassToPreview) == 1040, "Offset mismatch for UJunoBuildingPropAccountItemDefinition::BuildingActorClassToPreview");

// /Script/JunoBuildingCosmeticsRuntime.JunoBuildingSetAccountItemDefinition
// Kind: Class; super: JunoBuildingAccountItemDefBase
class UJunoBuildingSetAccountItemDefinition
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    float FoundationPiecesHeightToShow; // 0x0410 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0414
    TSoftClassPtr<void> BuildingActorClassToPreview; // 0x0418 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJunoBuildingSetAccountItemDefinition, FoundationPiecesHeightToShow) == 1040, "Offset mismatch for UJunoBuildingSetAccountItemDefinition::FoundationPiecesHeightToShow");
static_assert(offsetof(UJunoBuildingSetAccountItemDefinition, BuildingActorClassToPreview) == 1048, "Offset mismatch for UJunoBuildingSetAccountItemDefinition::BuildingActorClassToPreview");

// /Script/JunoBuildingCosmeticsRuntime.JunoGuidedBuildingCosmeticInterface
// Kind: Class; super: Interface
class UJunoGuidedBuildingCosmeticInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoBuildingCosmeticsRuntime.JunoGuidedBuildingDisplayActor
// Kind: Class; super: Actor
class UJunoGuidedBuildingDisplayActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TArray<void*> DataArray; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    FName GuidedBuildingRecipe; // 0x0288 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoGuidedBuildingDisplayActor, DataArray) == 632, "Offset mismatch for UJunoGuidedBuildingDisplayActor::DataArray");
static_assert(offsetof(UJunoGuidedBuildingDisplayActor, GuidedBuildingRecipe) == 648, "Offset mismatch for UJunoGuidedBuildingDisplayActor::GuidedBuildingRecipe");

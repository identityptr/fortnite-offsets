/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticShoesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticShoesRuntime.FlowgraphShoesCustomizationParameters
// Kind: ScriptStruct; super: none
struct FFlowgraphShoesCustomizationParameters
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ShoesItemDef; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableComponent; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFlowgraphShoesCustomizationParameters, ShoesItemDef) == 16, "Offset mismatch for FFlowgraphShoesCustomizationParameters::ShoesItemDef");
static_assert(offsetof(FFlowgraphShoesCustomizationParameters, Mesh) == 24, "Offset mismatch for FFlowgraphShoesCustomizationParameters::Mesh");
static_assert(offsetof(FFlowgraphShoesCustomizationParameters, CustomizableComponent) == 32, "Offset mismatch for FFlowgraphShoesCustomizationParameters::CustomizableComponent");

// /Script/CosmeticShoesRuntime.ShoesFlowCommonData
// Kind: ScriptStruct; super: none
struct FShoesFlowCommonData
{
public:
    TArray<void*> ShoeParts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> IdleVFX; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FShoesFlowCommonData, ShoeParts) == 0, "Offset mismatch for FShoesFlowCommonData::ShoeParts");
static_assert(offsetof(FShoesFlowCommonData, IdleVFX) == 16, "Offset mismatch for FShoesFlowCommonData::IdleVFX");

// /Script/CosmeticShoesRuntime.CosmeticItemStep_ShoesCharacterPartSetup
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_ShoesCharacterPartSetup
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_ShoesCharacterPartSetup, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_ShoesCharacterPartSetup::FlowgraphKey");

// /Script/CosmeticShoesRuntime.CosmeticItemStep_ShoesPostCharacterPartSetup
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_ShoesPostCharacterPartSetup
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_ShoesPostCharacterPartSetup, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_ShoesPostCharacterPartSetup::FlowgraphKey");

// /Script/CosmeticShoesRuntime.CosmeticItemStep_ShoesPostCustomizableObject
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_ShoesPostCustomizableObject
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_ShoesPostCustomizableObject, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_ShoesPostCustomizableObject::FlowgraphKey");

// /Script/CosmeticShoesRuntime.CosmeticItemStep_ShoesRunCustomizableObject
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_ShoesRunCustomizableObject
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_ShoesRunCustomizableObject, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_ShoesRunCustomizableObject::FlowgraphKey");

// /Script/CosmeticShoesRuntime.CosmeticShoesAnimInstance
// Kind: Class; super: AnimInstance
class UCosmeticShoesAnimInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CurrentSkeleton; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPropagateNotifiesToLinkedInstances; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bReceiveNotifiesFromLinkedInstances (shared storage)
    // 0x0031 BoolProperty bUseMainInstanceMontageEvaluationData (shared storage)
    // 0x0031 BoolProperty bUseMultiThreadedAnimationUpdate (shared storage)
    // 0x0031 BoolProperty bUsingCopyPoseFromMesh (shared storage)
    std::uint8_t bQueueMontageEvents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    FMulticastInlineDelegate OnMontageBlendingOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendedIn; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageStarted; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageEnded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageSectionChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0098
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x48]; // 0x00C8
    std::uint8_t NotifyQueue[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    TArray<void*> ActiveAnimNotifyState; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveAnimNotifyEventReference; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticShoesAnimInstance, CurrentSkeleton) == 40, "Offset mismatch for UCosmeticShoesAnimInstance::CurrentSkeleton");
static_assert(offsetof(UCosmeticShoesAnimInstance, RootMotionMode) == 48, "Offset mismatch for UCosmeticShoesAnimInstance::RootMotionMode");
static_assert(offsetof(UCosmeticShoesAnimInstance, bPropagateNotifiesToLinkedInstances) == 49, "Offset mismatch for UCosmeticShoesAnimInstance::bPropagateNotifiesToLinkedInstances");
static_assert(offsetof(UCosmeticShoesAnimInstance, bQueueMontageEvents) == 50, "Offset mismatch for UCosmeticShoesAnimInstance::bQueueMontageEvents");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnMontageBlendingOut) == 56, "Offset mismatch for UCosmeticShoesAnimInstance::OnMontageBlendingOut");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnMontageBlendedIn) == 72, "Offset mismatch for UCosmeticShoesAnimInstance::OnMontageBlendedIn");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnMontageStarted) == 88, "Offset mismatch for UCosmeticShoesAnimInstance::OnMontageStarted");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnMontageEnded) == 104, "Offset mismatch for UCosmeticShoesAnimInstance::OnMontageEnded");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnAllMontageInstancesEnded) == 120, "Offset mismatch for UCosmeticShoesAnimInstance::OnAllMontageInstancesEnded");
static_assert(offsetof(UCosmeticShoesAnimInstance, OnMontageSectionChanged) == 136, "Offset mismatch for UCosmeticShoesAnimInstance::OnMontageSectionChanged");
static_assert(offsetof(UCosmeticShoesAnimInstance, SlotGroupInertializationRequestDataMap) == 184, "Offset mismatch for UCosmeticShoesAnimInstance::SlotGroupInertializationRequestDataMap");
static_assert(offsetof(UCosmeticShoesAnimInstance, NotifyQueue) == 272, "Offset mismatch for UCosmeticShoesAnimInstance::NotifyQueue");
static_assert(offsetof(UCosmeticShoesAnimInstance, ActiveAnimNotifyState) == 328, "Offset mismatch for UCosmeticShoesAnimInstance::ActiveAnimNotifyState");
static_assert(offsetof(UCosmeticShoesAnimInstance, ActiveAnimNotifyEventReference) == 344, "Offset mismatch for UCosmeticShoesAnimInstance::ActiveAnimNotifyEventReference");

// /Script/CosmeticShoesRuntime.CosmeticShoesItem
// Kind: Class; super: AthenaCosmeticAccountItem
class UCosmeticShoesItem
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> VariantChannels; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveVariantOverrides; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Variants; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    void* Hero; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticShoesItem, VariantChannels) == 264, "Offset mismatch for UCosmeticShoesItem::VariantChannels");
static_assert(offsetof(UCosmeticShoesItem, ActiveVariantOverrides) == 280, "Offset mismatch for UCosmeticShoesItem::ActiveVariantOverrides");
static_assert(offsetof(UCosmeticShoesItem, Variants) == 296, "Offset mismatch for UCosmeticShoesItem::Variants");
static_assert(offsetof(UCosmeticShoesItem, Hero) == 328, "Offset mismatch for UCosmeticShoesItem::Hero");

// /Script/CosmeticShoesRuntime.CosmeticShoesItemDefinition
// Kind: Class; super: AthenaCharacterPartItemDefinition
class UCosmeticShoesItemDefinition
{
public:
    std::uint8_t Pad_0000[0x408]; // 0x0000
    std::uint8_t LeftShoesPosition[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightShoesPosition[0x1]; // 0x0420 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticShoesItemDefinition, LeftShoesPosition) == 1032, "Offset mismatch for UCosmeticShoesItemDefinition::LeftShoesPosition");
static_assert(offsetof(UCosmeticShoesItemDefinition, RightShoesPosition) == 1056, "Offset mismatch for UCosmeticShoesItemDefinition::RightShoesPosition");

// /Script/CosmeticShoesRuntime.CosmeticShoesPreviewPrefabAsset
// Kind: Class; super: Actor
class UCosmeticShoesPreviewPrefabAsset
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    void* Mesh; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> IdleVFX; // 0x02A0 (Size: 0x8, Type: WeakObjectProperty)
    void* CustomizableComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ShoesItemDefinition; // 0x02B0 (Size: 0x8, Type: WeakObjectProperty)
    float CylinderHalfHeight; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float CylinderRadius; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x30]; // 0x02C0
    TArray<void*> PartModifiers; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AppliedCharacterParts; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DesiredCosmeticParts; // 0x0310 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, Mesh) == 664, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::Mesh");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, IdleVFX) == 672, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::IdleVFX");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, CustomizableComponent) == 680, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::CustomizableComponent");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, ShoesItemDefinition) == 688, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::ShoesItemDefinition");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, CylinderHalfHeight) == 696, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::CylinderHalfHeight");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, CylinderRadius) == 700, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::CylinderRadius");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, PartModifiers) == 752, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::PartModifiers");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, AppliedCharacterParts) == 768, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::AppliedCharacterParts");
static_assert(offsetof(UCosmeticShoesPreviewPrefabAsset, DesiredCosmeticParts) == 784, "Offset mismatch for UCosmeticShoesPreviewPrefabAsset::DesiredCosmeticParts");

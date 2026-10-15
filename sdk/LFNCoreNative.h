/**
 * decamp dumper generated SDK
 * Package: /Script/LFNCoreNative
 */
#pragma once
#include "Basic.h"

// /Script/LFNCoreNative.LFNEditorDataCollection
// Kind: ScriptStruct; super: none
struct FLFNEditorDataCollection
{
public:
    std::uint8_t AssetCategory; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> SourceAtomModels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintVariants; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LutVariants; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GeneratedGCs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GeneratedGameBPs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OtherObjects; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Attributes; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLFNEditorDataCollection, AssetCategory) == 0, "Offset mismatch for FLFNEditorDataCollection::AssetCategory");
static_assert(offsetof(FLFNEditorDataCollection, SourceAtomModels) == 8, "Offset mismatch for FLFNEditorDataCollection::SourceAtomModels");
static_assert(offsetof(FLFNEditorDataCollection, BlueprintVariants) == 24, "Offset mismatch for FLFNEditorDataCollection::BlueprintVariants");
static_assert(offsetof(FLFNEditorDataCollection, LutVariants) == 40, "Offset mismatch for FLFNEditorDataCollection::LutVariants");
static_assert(offsetof(FLFNEditorDataCollection, GeneratedGCs) == 56, "Offset mismatch for FLFNEditorDataCollection::GeneratedGCs");
static_assert(offsetof(FLFNEditorDataCollection, GeneratedGameBPs) == 72, "Offset mismatch for FLFNEditorDataCollection::GeneratedGameBPs");
static_assert(offsetof(FLFNEditorDataCollection, OtherObjects) == 88, "Offset mismatch for FLFNEditorDataCollection::OtherObjects");
static_assert(offsetof(FLFNEditorDataCollection, Attributes) == 104, "Offset mismatch for FLFNEditorDataCollection::Attributes");

// /Script/LFNCoreNative.LFNAmbientLifeActor
// Kind: Class; super: Actor
class ULFNAmbientLifeActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t DefaultTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t UroShiftBucket; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0299
    std::int32_t MaxEvalRateForInterpolation; // 0x029C (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> LODToFrameSkipMap; // 0x02A0 (Size: 0x10, Type: MapProperty)
    void* SkelMeshComp; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNAmbientLifeActor, DefaultTags) == 632, "Offset mismatch for ULFNAmbientLifeActor::DefaultTags");
static_assert(offsetof(ULFNAmbientLifeActor, UroShiftBucket) == 664, "Offset mismatch for ULFNAmbientLifeActor::UroShiftBucket");
static_assert(offsetof(ULFNAmbientLifeActor, MaxEvalRateForInterpolation) == 668, "Offset mismatch for ULFNAmbientLifeActor::MaxEvalRateForInterpolation");
static_assert(offsetof(ULFNAmbientLifeActor, LODToFrameSkipMap) == 672, "Offset mismatch for ULFNAmbientLifeActor::LODToFrameSkipMap");
static_assert(offsetof(ULFNAmbientLifeActor, SkelMeshComp) == 688, "Offset mismatch for ULFNAmbientLifeActor::SkelMeshComp");

// /Script/LFNCoreNative.LFNBaseFEActor
// Kind: Class; super: Actor
class ULFNBaseFEActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* LFNColor; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoAssignNavProperties; // 0x0278 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNBaseFEActor, LFNColor) == 624, "Offset mismatch for ULFNBaseFEActor::LFNColor");
static_assert(offsetof(ULFNBaseFEActor, bAutoAssignNavProperties) == 632, "Offset mismatch for ULFNBaseFEActor::bAutoAssignNavProperties");

// /Script/LFNCoreNative.LFNColorComponent
// Kind: Class; super: ActorComponent
class ULFNColorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ColorLUTAtlas; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ColorLUTTexture; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNColorComponent, ColorLUTAtlas) == 192, "Offset mismatch for ULFNColorComponent::ColorLUTAtlas");
static_assert(offsetof(ULFNColorComponent, ColorLUTTexture) == 200, "Offset mismatch for ULFNColorComponent::ColorLUTTexture");

// /Script/LFNCoreNative.LFNColorIDSwapComponent
// Kind: Class; super: ActorComponent
class ULFNColorIDSwapComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t SourceId; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t DestinationID; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULFNColorIDSwapComponent, SourceId) == 192, "Offset mismatch for ULFNColorIDSwapComponent::SourceId");
static_assert(offsetof(ULFNColorIDSwapComponent, DestinationID) == 196, "Offset mismatch for ULFNColorIDSwapComponent::DestinationID");

// /Script/LFNCoreNative.LFNCustomInstanceDataLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULFNCustomInstanceDataLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNCoreNative.LFNEditorDataComponent
// Kind: Class; super: ActorComponent
class ULFNEditorDataComponent
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

static_assert(offsetof(ULFNEditorDataComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULFNEditorDataComponent::PrimaryComponentTick");
static_assert(offsetof(ULFNEditorDataComponent, ComponentTags) == 104, "Offset mismatch for ULFNEditorDataComponent::ComponentTags");
static_assert(offsetof(ULFNEditorDataComponent, AssetUserData) == 120, "Offset mismatch for ULFNEditorDataComponent::AssetUserData");
static_assert(offsetof(ULFNEditorDataComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULFNEditorDataComponent::UCSSerializationIndex");
static_assert(offsetof(ULFNEditorDataComponent, bNetAddressable) == 152, "Offset mismatch for ULFNEditorDataComponent::bNetAddressable");
static_assert(offsetof(ULFNEditorDataComponent, bAutoActivate) == 154, "Offset mismatch for ULFNEditorDataComponent::bAutoActivate");
static_assert(offsetof(ULFNEditorDataComponent, bIsEditorOnly) == 155, "Offset mismatch for ULFNEditorDataComponent::bIsEditorOnly");
static_assert(offsetof(ULFNEditorDataComponent, CreationMethod) == 185, "Offset mismatch for ULFNEditorDataComponent::CreationMethod");
static_assert(offsetof(ULFNEditorDataComponent, OnComponentActivated) == 186, "Offset mismatch for ULFNEditorDataComponent::OnComponentActivated");
static_assert(offsetof(ULFNEditorDataComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULFNEditorDataComponent::OnComponentDeactivated");

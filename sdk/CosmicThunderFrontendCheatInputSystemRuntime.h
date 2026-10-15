/**
 * decamp dumper generated SDK
 * Package: /Script/CosmicThunderFrontendCheatInputSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderBigHeadBoneScale
// Kind: ScriptStruct; super: none
struct FCosmicThunderBigHeadBoneScale
{
public:
    FName BoneName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t BoneScale[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmicThunderBigHeadBoneScale, BoneName) == 0, "Offset mismatch for FCosmicThunderBigHeadBoneScale::BoneName");
static_assert(offsetof(FCosmicThunderBigHeadBoneScale, BoneScale) == 8, "Offset mismatch for FCosmicThunderBigHeadBoneScale::BoneScale");

// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderBigHeadScaleRow
// Kind: ScriptStruct; super: TableRowBase
struct FCosmicThunderBigHeadScaleRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> BonesToScale; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmicThunderBigHeadScaleRow, BonesToScale) == 8, "Offset mismatch for FCosmicThunderBigHeadScaleRow::BonesToScale");

// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderBigHeadPawnComponent
// Kind: Class; super: ActorComponent
class UCosmicThunderBigHeadPawnComponent
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

static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, PrimaryComponentTick) == 56, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::PrimaryComponentTick");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, ComponentTags) == 104, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::ComponentTags");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, AssetUserData) == 120, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::AssetUserData");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, UCSSerializationIndex) == 144, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::UCSSerializationIndex");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, bNetAddressable) == 152, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::bNetAddressable");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, bAutoActivate) == 154, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::bAutoActivate");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, bIsEditorOnly) == 155, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::bIsEditorOnly");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, CreationMethod) == 185, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::CreationMethod");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, OnComponentActivated) == 186, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::OnComponentActivated");
static_assert(offsetof(UCosmicThunderBigHeadPawnComponent, OnComponentDeactivated) == 187, "Offset mismatch for UCosmicThunderBigHeadPawnComponent::OnComponentDeactivated");

// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderFrontendCheatPropInterface
// Kind: Class; super: Interface
class UCosmicThunderFrontendCheatPropInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderFrontendCommandHandlerBigHead
// Kind: Class; super: LocalTerminalCommandHandler
class UCosmicThunderFrontendCommandHandlerBigHead
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BigHeadScaleConfig[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    float GrowDurationSeconds; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float EffectDurationSeconds; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCosmicThunderFrontendCommandHandlerBigHead, BigHeadScaleConfig) == 40, "Offset mismatch for UCosmicThunderFrontendCommandHandlerBigHead::BigHeadScaleConfig");
static_assert(offsetof(UCosmicThunderFrontendCommandHandlerBigHead, GrowDurationSeconds) == 72, "Offset mismatch for UCosmicThunderFrontendCommandHandlerBigHead::GrowDurationSeconds");
static_assert(offsetof(UCosmicThunderFrontendCommandHandlerBigHead, EffectDurationSeconds) == 76, "Offset mismatch for UCosmicThunderFrontendCommandHandlerBigHead::EffectDurationSeconds");

// /Script/CosmicThunderFrontendCheatInputSystemRuntime.CosmicThunderFrontendCommandHandlerPlayMusic
// Kind: Class; super: LocalTerminalCommandHandler
class UCosmicThunderFrontendCommandHandlerPlayMusic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClientActionTagToSimpleMusicItemMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCosmicThunderFrontendCommandHandlerPlayMusic, ClientActionTagToSimpleMusicItemMap) == 40, "Offset mismatch for UCosmicThunderFrontendCommandHandlerPlayMusic::ClientActionTagToSimpleMusicItemMap");

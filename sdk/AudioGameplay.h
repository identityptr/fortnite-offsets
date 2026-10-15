/**
 * decamp dumper generated SDK
 * Package: /Script/AudioGameplay
 */
#pragma once
#include "Basic.h"

// /Script/AudioGameplay.AudioGameplayRequirements
// Kind: ScriptStruct; super: none
struct FAudioGameplayRequirements
{
public:
    void* Preset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Custom[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioGameplayRequirements, Preset) == 0, "Offset mismatch for FAudioGameplayRequirements::Preset");
static_assert(offsetof(FAudioGameplayRequirements, Custom) == 8, "Offset mismatch for FAudioGameplayRequirements::Custom");

// /Script/AudioGameplay.AudioAssetUserData
// Kind: Class; super: AssetUserData
class UAudioAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MetadataTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioAssetUserData, MetadataTags) == 40, "Offset mismatch for UAudioAssetUserData::MetadataTags");

// /Script/AudioGameplay.AudioComponentGroup
// Kind: Class; super: SceneComponent
class UAudioComponentGroup
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    FMulticastInlineDelegate OnStopped; // 0x0248 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKilled; // 0x0258 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVirtualized; // 0x0268 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnvirtualized; // 0x0278 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> Components; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParamsToSet; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersistentParams; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioComponentGroup, OnStopped) == 584, "Offset mismatch for UAudioComponentGroup::OnStopped");
static_assert(offsetof(UAudioComponentGroup, OnKilled) == 600, "Offset mismatch for UAudioComponentGroup::OnKilled");
static_assert(offsetof(UAudioComponentGroup, OnVirtualized) == 616, "Offset mismatch for UAudioComponentGroup::OnVirtualized");
static_assert(offsetof(UAudioComponentGroup, OnUnvirtualized) == 632, "Offset mismatch for UAudioComponentGroup::OnUnvirtualized");
static_assert(offsetof(UAudioComponentGroup, Components) == 648, "Offset mismatch for UAudioComponentGroup::Components");
static_assert(offsetof(UAudioComponentGroup, ParamsToSet) == 664, "Offset mismatch for UAudioComponentGroup::ParamsToSet");
static_assert(offsetof(UAudioComponentGroup, PersistentParams) == 680, "Offset mismatch for UAudioComponentGroup::PersistentParams");
static_assert(offsetof(UAudioComponentGroup, Extensions) == 696, "Offset mismatch for UAudioComponentGroup::Extensions");

// /Script/AudioGameplay.AudioComponentGroupExtension
// Kind: Class; super: Interface
class UAudioComponentGroupExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplay.AudioGameplayComponent
// Kind: Class; super: ActorComponent
class UAudioGameplayComponent
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

static_assert(offsetof(UAudioGameplayComponent, PrimaryComponentTick) == 56, "Offset mismatch for UAudioGameplayComponent::PrimaryComponentTick");
static_assert(offsetof(UAudioGameplayComponent, ComponentTags) == 104, "Offset mismatch for UAudioGameplayComponent::ComponentTags");
static_assert(offsetof(UAudioGameplayComponent, AssetUserData) == 120, "Offset mismatch for UAudioGameplayComponent::AssetUserData");
static_assert(offsetof(UAudioGameplayComponent, UCSSerializationIndex) == 144, "Offset mismatch for UAudioGameplayComponent::UCSSerializationIndex");
static_assert(offsetof(UAudioGameplayComponent, bNetAddressable) == 152, "Offset mismatch for UAudioGameplayComponent::bNetAddressable");
static_assert(offsetof(UAudioGameplayComponent, bAutoActivate) == 154, "Offset mismatch for UAudioGameplayComponent::bAutoActivate");
static_assert(offsetof(UAudioGameplayComponent, bIsEditorOnly) == 155, "Offset mismatch for UAudioGameplayComponent::bIsEditorOnly");
static_assert(offsetof(UAudioGameplayComponent, CreationMethod) == 185, "Offset mismatch for UAudioGameplayComponent::CreationMethod");
static_assert(offsetof(UAudioGameplayComponent, OnComponentActivated) == 186, "Offset mismatch for UAudioGameplayComponent::OnComponentActivated");
static_assert(offsetof(UAudioGameplayComponent, OnComponentDeactivated) == 187, "Offset mismatch for UAudioGameplayComponent::OnComponentDeactivated");

// /Script/AudioGameplay.AudioGameplayCondition
// Kind: Class; super: Interface
class UAudioGameplayCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplay.AudioGameplayTagCacheSubsystem
// Kind: Class; super: WorldSubsystem
class UAudioGameplayTagCacheSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplay.AudioGameplayVolumeInteraction
// Kind: Class; super: Interface
class UAudioGameplayVolumeInteraction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplay.AudioParameterComponent
// Kind: Class; super: AudioGameplayComponent
class UAudioParameterComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> ActiveComponents; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Parameters; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioParameterComponent, ActiveComponents) == 216, "Offset mismatch for UAudioParameterComponent::ActiveComponents");
static_assert(offsetof(UAudioParameterComponent, Parameters) == 232, "Offset mismatch for UAudioParameterComponent::Parameters");

// /Script/AudioGameplay.AudioRequirementPreset
// Kind: Class; super: DataAsset
class UAudioRequirementPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Query[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioRequirementPreset, Query) == 40, "Offset mismatch for UAudioRequirementPreset::Query");

// /Script/AudioGameplay.SoundHandleSubsystem
// Kind: Class; super: AudioEngineSubsystem
class USoundHandleSubsystem
{
public:
    std::uint8_t Opaque[1];
};

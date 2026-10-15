/**
 * decamp dumper generated SDK
 * Package: /Script/AudioGameplayVolume
 */
#pragma once
#include "Basic.h"

// /Script/AudioGameplayVolume.AGVConditionProxy
// Kind: Class; super: AudioGameplayVolumeProxy
class UAGVConditionProxy
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ObjectPtr; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAGVConditionProxy, ObjectPtr) == 72, "Offset mismatch for UAGVConditionProxy::ObjectPtr");

// /Script/AudioGameplayVolume.AGVPrimitiveComponentProxy
// Kind: Class; super: AudioGameplayVolumeProxy
class UAGVPrimitiveComponentProxy
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Primitives; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAGVPrimitiveComponentProxy, Primitives) == 72, "Offset mismatch for UAGVPrimitiveComponentProxy::Primitives");

// /Script/AudioGameplayVolume.AttenuationVolumeComponent
// Kind: Class; super: AudioGameplayVolumeMutator
class UAttenuationVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float ExteriorVolume; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float ExteriorTime; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float InteriorVolume; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float InteriorTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAttenuationVolumeComponent, ExteriorVolume) == 208, "Offset mismatch for UAttenuationVolumeComponent::ExteriorVolume");
static_assert(offsetof(UAttenuationVolumeComponent, ExteriorTime) == 212, "Offset mismatch for UAttenuationVolumeComponent::ExteriorTime");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorVolume) == 216, "Offset mismatch for UAttenuationVolumeComponent::InteriorVolume");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorTime) == 220, "Offset mismatch for UAttenuationVolumeComponent::InteriorTime");

// /Script/AudioGameplayVolume.AudioGameplayVolume
// Kind: Class; super: Volume
class UAudioGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* AGVComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnabled; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    FMulticastInlineDelegate OnListenerEnterEvent; // 0x02B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnListenerExitEvent; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioGameplayVolume, AGVComponent) == 680, "Offset mismatch for UAudioGameplayVolume::AGVComponent");
static_assert(offsetof(UAudioGameplayVolume, bEnabled) == 688, "Offset mismatch for UAudioGameplayVolume::bEnabled");
static_assert(offsetof(UAudioGameplayVolume, OnListenerEnterEvent) == 696, "Offset mismatch for UAudioGameplayVolume::OnListenerEnterEvent");
static_assert(offsetof(UAudioGameplayVolume, OnListenerExitEvent) == 712, "Offset mismatch for UAudioGameplayVolume::OnListenerExitEvent");

// /Script/AudioGameplayVolume.AudioGameplayVolumeComponent
// Kind: Class; super: AudioGameplayComponent
class UAudioGameplayVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnProxyEnter; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProxyExit; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Proxy; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyEnter) == 200, "Offset mismatch for UAudioGameplayVolumeComponent::OnProxyEnter");
static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyExit) == 216, "Offset mismatch for UAudioGameplayVolumeComponent::OnProxyExit");
static_assert(offsetof(UAudioGameplayVolumeComponent, Proxy) == 232, "Offset mismatch for UAudioGameplayVolumeComponent::Proxy");

// /Script/AudioGameplayVolume.AudioGameplayVolumeComponentBase
// Kind: Class; super: AudioGameplayComponent
class UAudioGameplayVolumeComponentBase
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

static_assert(offsetof(UAudioGameplayVolumeComponentBase, PrimaryComponentTick) == 56, "Offset mismatch for UAudioGameplayVolumeComponentBase::PrimaryComponentTick");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, ComponentTags) == 104, "Offset mismatch for UAudioGameplayVolumeComponentBase::ComponentTags");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, AssetUserData) == 120, "Offset mismatch for UAudioGameplayVolumeComponentBase::AssetUserData");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, UCSSerializationIndex) == 144, "Offset mismatch for UAudioGameplayVolumeComponentBase::UCSSerializationIndex");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, bNetAddressable) == 152, "Offset mismatch for UAudioGameplayVolumeComponentBase::bNetAddressable");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, bAutoActivate) == 154, "Offset mismatch for UAudioGameplayVolumeComponentBase::bAutoActivate");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, bIsEditorOnly) == 155, "Offset mismatch for UAudioGameplayVolumeComponentBase::bIsEditorOnly");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, CreationMethod) == 185, "Offset mismatch for UAudioGameplayVolumeComponentBase::CreationMethod");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, OnComponentActivated) == 186, "Offset mismatch for UAudioGameplayVolumeComponentBase::OnComponentActivated");
static_assert(offsetof(UAudioGameplayVolumeComponentBase, OnComponentDeactivated) == 187, "Offset mismatch for UAudioGameplayVolumeComponentBase::OnComponentDeactivated");

// /Script/AudioGameplayVolume.AudioGameplayVolumeMutator
// Kind: Class; super: AudioGameplayComponent
class UAudioGameplayVolumeMutator
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::int32_t Priority; // 0x00C8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAudioGameplayVolumeMutator, Priority) == 200, "Offset mismatch for UAudioGameplayVolumeMutator::Priority");

// /Script/AudioGameplayVolume.AudioGameplayVolumeProxy
// Kind: Class; super: Object
class UAudioGameplayVolumeProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplayVolume.AudioGameplayVolumeSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UAudioGameplayVolumeSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> TransientProxyList; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> AGVComponents; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAudioGameplayVolumeSubsystem, TransientProxyList) == 56, "Offset mismatch for UAudioGameplayVolumeSubsystem::TransientProxyList");
static_assert(offsetof(UAudioGameplayVolumeSubsystem, AGVComponents) == 72, "Offset mismatch for UAudioGameplayVolumeSubsystem::AGVComponents");

// /Script/AudioGameplayVolume.FilterVolumeComponent
// Kind: Class; super: AudioGameplayVolumeMutator
class UFilterVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float ExteriorLPF; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float ExteriorLPFTime; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float InteriorLPF; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float InteriorLPFTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFilterVolumeComponent, ExteriorLPF) == 208, "Offset mismatch for UFilterVolumeComponent::ExteriorLPF");
static_assert(offsetof(UFilterVolumeComponent, ExteriorLPFTime) == 212, "Offset mismatch for UFilterVolumeComponent::ExteriorLPFTime");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPF) == 216, "Offset mismatch for UFilterVolumeComponent::InteriorLPF");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPFTime) == 220, "Offset mismatch for UFilterVolumeComponent::InteriorLPFTime");

// /Script/AudioGameplayVolume.ReverbVolumeComponent
// Kind: Class; super: AudioGameplayVolumeMutator
class UReverbVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ReverbSettings[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UReverbVolumeComponent, ReverbSettings) == 208, "Offset mismatch for UReverbVolumeComponent::ReverbSettings");

// /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent
// Kind: Class; super: AudioGameplayVolumeMutator
class USubmixOverrideVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> SubmixOverrideSettings; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USubmixOverrideVolumeComponent, SubmixOverrideSettings) == 208, "Offset mismatch for USubmixOverrideVolumeComponent::SubmixOverrideSettings");

// /Script/AudioGameplayVolume.SubmixSendVolumeComponent
// Kind: Class; super: AudioGameplayVolumeMutator
class USubmixSendVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> SubmixSendSettings; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USubmixSendVolumeComponent, SubmixSendSettings) == 208, "Offset mismatch for USubmixSendVolumeComponent::SubmixSendSettings");

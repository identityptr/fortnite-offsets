/**
 * decamp dumper generated SDK
 * Package: /Script/SparksVocalStreamingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksVocalStreamingRuntime.VocalAudioChunk
// Kind: ScriptStruct; super: none
struct FVocalAudioChunk
{
public:
    float SongPosSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double WallClockSeconds; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> CompressedAudio; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SequenceNumber; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVocalAudioChunk, SongPosSeconds) == 0, "Offset mismatch for FVocalAudioChunk::SongPosSeconds");
static_assert(offsetof(FVocalAudioChunk, WallClockSeconds) == 8, "Offset mismatch for FVocalAudioChunk::WallClockSeconds");
static_assert(offsetof(FVocalAudioChunk, CompressedAudio) == 16, "Offset mismatch for FVocalAudioChunk::CompressedAudio");
static_assert(offsetof(FVocalAudioChunk, SequenceNumber) == 32, "Offset mismatch for FVocalAudioChunk::SequenceNumber");

// /Script/SparksVocalStreamingRuntime.SparksVocalStreamChannel
// Kind: Class; super: Channel
class USparksVocalStreamChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksVocalStreamChannel, Connection) == 40, "Offset mismatch for USparksVocalStreamChannel::Connection");

// /Script/SparksVocalStreamingRuntime.SparksVocalStreamControllerComponent
// Kind: Class; super: FortControllerComponent
class USparksVocalStreamControllerComponent
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

static_assert(offsetof(USparksVocalStreamControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for USparksVocalStreamControllerComponent::PrimaryComponentTick");
static_assert(offsetof(USparksVocalStreamControllerComponent, ComponentTags) == 104, "Offset mismatch for USparksVocalStreamControllerComponent::ComponentTags");
static_assert(offsetof(USparksVocalStreamControllerComponent, AssetUserData) == 120, "Offset mismatch for USparksVocalStreamControllerComponent::AssetUserData");
static_assert(offsetof(USparksVocalStreamControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for USparksVocalStreamControllerComponent::UCSSerializationIndex");
static_assert(offsetof(USparksVocalStreamControllerComponent, bNetAddressable) == 152, "Offset mismatch for USparksVocalStreamControllerComponent::bNetAddressable");
static_assert(offsetof(USparksVocalStreamControllerComponent, bAutoActivate) == 154, "Offset mismatch for USparksVocalStreamControllerComponent::bAutoActivate");
static_assert(offsetof(USparksVocalStreamControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for USparksVocalStreamControllerComponent::bIsEditorOnly");
static_assert(offsetof(USparksVocalStreamControllerComponent, CreationMethod) == 185, "Offset mismatch for USparksVocalStreamControllerComponent::CreationMethod");
static_assert(offsetof(USparksVocalStreamControllerComponent, OnComponentActivated) == 186, "Offset mismatch for USparksVocalStreamControllerComponent::OnComponentActivated");
static_assert(offsetof(USparksVocalStreamControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for USparksVocalStreamControllerComponent::OnComponentDeactivated");

// /Script/SparksVocalStreamingRuntime.SparksVocalStreamSubsystem
// Kind: Class; super: TickableWorldSubsystem
class USparksVocalStreamSubsystem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SubsystemData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SubsystemDataAssetPath[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksVocalStreamSubsystem, SubsystemData) == 112, "Offset mismatch for USparksVocalStreamSubsystem::SubsystemData");
static_assert(offsetof(USparksVocalStreamSubsystem, SubsystemDataAssetPath) == 120, "Offset mismatch for USparksVocalStreamSubsystem::SubsystemDataAssetPath");

// /Script/SparksVocalStreamingRuntime.SparksVocalStreamSubsystemData
// Kind: Class; super: PrimaryDataAsset
class USparksVocalStreamSubsystemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VocalStreamSubmix; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* VocalStreamSoundClass; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DefaultAttenuation; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxConcurrentSenders; // 0x0040 (Size: 0x4, Type: IntProperty)
    float DormancyThresholdSeconds; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableDefault2DPlayback; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksVocalStreamSubsystemData, VocalStreamSubmix) == 40, "Offset mismatch for USparksVocalStreamSubsystemData::VocalStreamSubmix");
static_assert(offsetof(USparksVocalStreamSubsystemData, VocalStreamSoundClass) == 48, "Offset mismatch for USparksVocalStreamSubsystemData::VocalStreamSoundClass");
static_assert(offsetof(USparksVocalStreamSubsystemData, DefaultAttenuation) == 56, "Offset mismatch for USparksVocalStreamSubsystemData::DefaultAttenuation");
static_assert(offsetof(USparksVocalStreamSubsystemData, MaxConcurrentSenders) == 64, "Offset mismatch for USparksVocalStreamSubsystemData::MaxConcurrentSenders");
static_assert(offsetof(USparksVocalStreamSubsystemData, DormancyThresholdSeconds) == 68, "Offset mismatch for USparksVocalStreamSubsystemData::DormancyThresholdSeconds");
static_assert(offsetof(USparksVocalStreamSubsystemData, bEnableDefault2DPlayback) == 72, "Offset mismatch for USparksVocalStreamSubsystemData::bEnableDefault2DPlayback");

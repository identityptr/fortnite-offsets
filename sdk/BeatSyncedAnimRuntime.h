/**
 * decamp dumper generated SDK
 * Package: /Script/BeatSyncedAnimRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeatSyncedAnimRuntime.AnimNode_PlayBeatSyncedAnim
// Kind: ScriptStruct; super: AnimNode_SequenceEvaluator
struct FAnimNode_PlayBeatSyncedAnim
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InSequence; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    float TempoMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTempoVariants; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x005D
    float TempoVariantHysteresis; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowDebug; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    TArray<void*> BpsBuckets; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* OldAnimSequence; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, InSequence) == 72, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::InSequence");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, MusicClock) == 80, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::MusicClock");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, TempoMultiplier) == 88, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::TempoMultiplier");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, bEnableTempoVariants) == 92, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::bEnableTempoVariants");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, TempoVariantHysteresis) == 96, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::TempoVariantHysteresis");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, bShowDebug) == 100, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::bShowDebug");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, BpsBuckets) == 104, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::BpsBuckets");
static_assert(offsetof(FAnimNode_PlayBeatSyncedAnim, OldAnimSequence) == 120, "Offset mismatch for FAnimNode_PlayBeatSyncedAnim::OldAnimSequence");

// /Script/BeatSyncedAnimRuntime.BeatAndTime
// Kind: ScriptStruct; super: none
struct FBeatAndTime
{
public:
    float Beat; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float time; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BeatsPerSecond; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsValid; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBeatAndTime, Beat) == 0, "Offset mismatch for FBeatAndTime::Beat");
static_assert(offsetof(FBeatAndTime, time) == 4, "Offset mismatch for FBeatAndTime::time");
static_assert(offsetof(FBeatAndTime, BeatsPerSecond) == 8, "Offset mismatch for FBeatAndTime::BeatsPerSecond");
static_assert(offsetof(FBeatAndTime, IsValid) == 12, "Offset mismatch for FBeatAndTime::IsValid");

// /Script/BeatSyncedAnimRuntime.BeatSyncMontageInfo
// Kind: ScriptStruct; super: none
struct FBeatSyncMontageInfo
{
public:
    void* AnimInstance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Montage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MetaData; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBeatSyncMontageInfo, AnimInstance) == 0, "Offset mismatch for FBeatSyncMontageInfo::AnimInstance");
static_assert(offsetof(FBeatSyncMontageInfo, Montage) == 8, "Offset mismatch for FBeatSyncMontageInfo::Montage");
static_assert(offsetof(FBeatSyncMontageInfo, MetaData) == 16, "Offset mismatch for FBeatSyncMontageInfo::MetaData");

// /Script/BeatSyncedAnimRuntime.AnimNotify_BeatMarker
// Kind: Class; super: AnimNotify
class UAnimNotify_BeatMarker
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBeatSyncedAnimLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UFMBeatTimingUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent
// Kind: Class; super: ActorComponent
class UMontageBeatSyncComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TWeakObjectPtr<void> WeakMusicClockPtr; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakMusicEventPtr; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bBeatSyncingPermission; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* OwnerFortPlayerPawn; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* OwnerSkeletalMeshActor; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* OwnerMeshComponent; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveMontageInfo[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMontageBeatSyncComponent, WeakMusicClockPtr) == 224, "Offset mismatch for UMontageBeatSyncComponent::WeakMusicClockPtr");
static_assert(offsetof(UMontageBeatSyncComponent, WeakMusicEventPtr) == 232, "Offset mismatch for UMontageBeatSyncComponent::WeakMusicEventPtr");
static_assert(offsetof(UMontageBeatSyncComponent, bBeatSyncingPermission) == 240, "Offset mismatch for UMontageBeatSyncComponent::bBeatSyncingPermission");
static_assert(offsetof(UMontageBeatSyncComponent, OwnerFortPlayerPawn) == 248, "Offset mismatch for UMontageBeatSyncComponent::OwnerFortPlayerPawn");
static_assert(offsetof(UMontageBeatSyncComponent, OwnerSkeletalMeshActor) == 256, "Offset mismatch for UMontageBeatSyncComponent::OwnerSkeletalMeshActor");
static_assert(offsetof(UMontageBeatSyncComponent, OwnerMeshComponent) == 264, "Offset mismatch for UMontageBeatSyncComponent::OwnerMeshComponent");
static_assert(offsetof(UMontageBeatSyncComponent, ActiveMontageInfo) == 272, "Offset mismatch for UMontageBeatSyncComponent::ActiveMontageInfo");

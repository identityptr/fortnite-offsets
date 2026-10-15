/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_VolumeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNE_VolumeRuntime.FNE_Volume
// Kind: Class; super: GameplayVolume
class UFNE_Volume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate PlayspaceSetEvent; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0280
    std::uint8_t PlayspaceClassTemplate[0x20]; // 0x0298 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PlayspaceCreationType; // 0x02B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02B9
    void* PlayspaceClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDestroyPlayspaceOnEndPlay; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnPlayspaceAtGameplayVolumeLocation; // 0x02C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x02CA
    void* Playspace; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VolumeTags[0x20]; // 0x02D8 (Size: 0x20, Type: StructProperty)
    void* BoundsComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNE_Volume, PlayspaceSetEvent) == 624, "Offset mismatch for UFNE_Volume::PlayspaceSetEvent");
static_assert(offsetof(UFNE_Volume, PlayspaceClassTemplate) == 664, "Offset mismatch for UFNE_Volume::PlayspaceClassTemplate");
static_assert(offsetof(UFNE_Volume, PlayspaceCreationType) == 696, "Offset mismatch for UFNE_Volume::PlayspaceCreationType");
static_assert(offsetof(UFNE_Volume, PlayspaceClass) == 704, "Offset mismatch for UFNE_Volume::PlayspaceClass");
static_assert(offsetof(UFNE_Volume, bDestroyPlayspaceOnEndPlay) == 712, "Offset mismatch for UFNE_Volume::bDestroyPlayspaceOnEndPlay");
static_assert(offsetof(UFNE_Volume, bSpawnPlayspaceAtGameplayVolumeLocation) == 713, "Offset mismatch for UFNE_Volume::bSpawnPlayspaceAtGameplayVolumeLocation");
static_assert(offsetof(UFNE_Volume, Playspace) == 720, "Offset mismatch for UFNE_Volume::Playspace");
static_assert(offsetof(UFNE_Volume, VolumeTags) == 728, "Offset mismatch for UFNE_Volume::VolumeTags");
static_assert(offsetof(UFNE_Volume, BoundsComponent) == 760, "Offset mismatch for UFNE_Volume::BoundsComponent");

// /Script/FNE_VolumeRuntime.FNE_VolumeComponent
// Kind: Class; super: ChildActorComponent
class UFNE_VolumeComponent
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    FMulticastInlineDelegate OnPlayerStateBeginOverlap; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerStateEndOverlap; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOtherActorBeginOverlap; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOtherActorEndOverlap; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableOverlap; // 0x02D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02D1
    TMap<void*, void*> FNEVolumeShapeMap; // 0x02D8 (Size: 0x10, Type: MapProperty)
    void* SpatialGameplayActorTracker; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNE_VolumeComponent, OnPlayerStateBeginOverlap) == 656, "Offset mismatch for UFNE_VolumeComponent::OnPlayerStateBeginOverlap");
static_assert(offsetof(UFNE_VolumeComponent, OnPlayerStateEndOverlap) == 672, "Offset mismatch for UFNE_VolumeComponent::OnPlayerStateEndOverlap");
static_assert(offsetof(UFNE_VolumeComponent, OnOtherActorBeginOverlap) == 688, "Offset mismatch for UFNE_VolumeComponent::OnOtherActorBeginOverlap");
static_assert(offsetof(UFNE_VolumeComponent, OnOtherActorEndOverlap) == 704, "Offset mismatch for UFNE_VolumeComponent::OnOtherActorEndOverlap");
static_assert(offsetof(UFNE_VolumeComponent, bEnableOverlap) == 720, "Offset mismatch for UFNE_VolumeComponent::bEnableOverlap");
static_assert(offsetof(UFNE_VolumeComponent, FNEVolumeShapeMap) == 728, "Offset mismatch for UFNE_VolumeComponent::FNEVolumeShapeMap");
static_assert(offsetof(UFNE_VolumeComponent, SpatialGameplayActorTracker) == 744, "Offset mismatch for UFNE_VolumeComponent::SpatialGameplayActorTracker");

// /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
// Kind: Class; super: StaticMeshComponent
class UFNE_VolumeOverlapComponent
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    FMulticastInlineDelegate OnPlayerStateBeginOverlap; // 0x06B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerStateEndOverlap; // 0x06C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOtherActorBeginOverlap; // 0x06D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOtherActorEndOverlap; // 0x06E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EnableOverlapBehavior; // 0x06F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06F9
    TMap<void*, void*> FNEVolumeShapeMap; // 0x0700 (Size: 0x10, Type: MapProperty)
    std::uint8_t SceneQueryShape; // 0x0710 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0711
    TArray<void*> SceneQueryObjectTypes; // 0x0718 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0728
    TWeakObjectPtr<void> CachedMinigame; // 0x0748 (Size: 0x8, Type: WeakObjectProperty)
    TSet<void*> TrackedActors; // 0x0750 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFNE_VolumeOverlapComponent, OnPlayerStateBeginOverlap) == 1720, "Offset mismatch for UFNE_VolumeOverlapComponent::OnPlayerStateBeginOverlap");
static_assert(offsetof(UFNE_VolumeOverlapComponent, OnPlayerStateEndOverlap) == 1736, "Offset mismatch for UFNE_VolumeOverlapComponent::OnPlayerStateEndOverlap");
static_assert(offsetof(UFNE_VolumeOverlapComponent, OnOtherActorBeginOverlap) == 1752, "Offset mismatch for UFNE_VolumeOverlapComponent::OnOtherActorBeginOverlap");
static_assert(offsetof(UFNE_VolumeOverlapComponent, OnOtherActorEndOverlap) == 1768, "Offset mismatch for UFNE_VolumeOverlapComponent::OnOtherActorEndOverlap");
static_assert(offsetof(UFNE_VolumeOverlapComponent, EnableOverlapBehavior) == 1784, "Offset mismatch for UFNE_VolumeOverlapComponent::EnableOverlapBehavior");
static_assert(offsetof(UFNE_VolumeOverlapComponent, FNEVolumeShapeMap) == 1792, "Offset mismatch for UFNE_VolumeOverlapComponent::FNEVolumeShapeMap");
static_assert(offsetof(UFNE_VolumeOverlapComponent, SceneQueryShape) == 1808, "Offset mismatch for UFNE_VolumeOverlapComponent::SceneQueryShape");
static_assert(offsetof(UFNE_VolumeOverlapComponent, SceneQueryObjectTypes) == 1816, "Offset mismatch for UFNE_VolumeOverlapComponent::SceneQueryObjectTypes");
static_assert(offsetof(UFNE_VolumeOverlapComponent, CachedMinigame) == 1864, "Offset mismatch for UFNE_VolumeOverlapComponent::CachedMinigame");
static_assert(offsetof(UFNE_VolumeOverlapComponent, TrackedActors) == 1872, "Offset mismatch for UFNE_VolumeOverlapComponent::TrackedActors");

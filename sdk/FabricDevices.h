/**
 * decamp dumper generated SDK
 * Package: /Script/FabricDevices
 */
#pragma once
#include "Basic.h"

// /Script/FabricDevices.FabricDeviceComponent
// Kind: Class; super: FabricDeviceComponentBase
class UFabricDeviceComponent
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t bListenToMusicManagerEvents; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    FMulticastInlineDelegate OnTempoChangedDelegate; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpeedChangedDelegate; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKeyChangedDelegate; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModeChangedDelegate; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimeSignatureChangedDelegate; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> SpeakerManager; // 0x0158 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MetaSoundManager; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicManager; // 0x0168 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClock; // 0x0170 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicTempometer; // 0x0178 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricDeviceComponent, bListenToMusicManagerEvents) == 256, "Offset mismatch for UFabricDeviceComponent::bListenToMusicManagerEvents");
static_assert(offsetof(UFabricDeviceComponent, OnTempoChangedDelegate) == 264, "Offset mismatch for UFabricDeviceComponent::OnTempoChangedDelegate");
static_assert(offsetof(UFabricDeviceComponent, OnSpeedChangedDelegate) == 280, "Offset mismatch for UFabricDeviceComponent::OnSpeedChangedDelegate");
static_assert(offsetof(UFabricDeviceComponent, OnKeyChangedDelegate) == 296, "Offset mismatch for UFabricDeviceComponent::OnKeyChangedDelegate");
static_assert(offsetof(UFabricDeviceComponent, OnModeChangedDelegate) == 312, "Offset mismatch for UFabricDeviceComponent::OnModeChangedDelegate");
static_assert(offsetof(UFabricDeviceComponent, OnTimeSignatureChangedDelegate) == 328, "Offset mismatch for UFabricDeviceComponent::OnTimeSignatureChangedDelegate");
static_assert(offsetof(UFabricDeviceComponent, SpeakerManager) == 344, "Offset mismatch for UFabricDeviceComponent::SpeakerManager");
static_assert(offsetof(UFabricDeviceComponent, MetaSoundManager) == 352, "Offset mismatch for UFabricDeviceComponent::MetaSoundManager");
static_assert(offsetof(UFabricDeviceComponent, MusicManager) == 360, "Offset mismatch for UFabricDeviceComponent::MusicManager");
static_assert(offsetof(UFabricDeviceComponent, MusicClock) == 368, "Offset mismatch for UFabricDeviceComponent::MusicClock");
static_assert(offsetof(UFabricDeviceComponent, MusicTempometer) == 376, "Offset mismatch for UFabricDeviceComponent::MusicTempometer");

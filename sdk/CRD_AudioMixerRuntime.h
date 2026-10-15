/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_AudioMixerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice
// Kind: Class; super: FortCreativeDeviceProp
class UCreativeAudioMixerDevice
{
public:
    std::uint8_t Pad_0000[0xB30]; // 0x0000
    void* Mix; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    void* Bus; // 0x0B38 (Size: 0x8, Type: ObjectProperty)
    float FaderValue; // 0x0B40 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CanBeHeardBy; // 0x0B44 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bActivateInEditMode; // 0x0B45 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateOnGameStart; // 0x0B46 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0B47
    void* CreativeProxyManagerComponent; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    void* FortMinigameProgressComponent; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* CreativeRegisteredPlayersManagerComponent; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    void* FortActorOptionsComponent; // 0x0B60 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCachedIsActive; // 0x0B68 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0B69
    void* CachedInstigator; // 0x0B70 (Size: 0x8, Type: ObjectProperty)
    void* ClientCachedProxy; // 0x0B78 (Size: 0x8, Type: ObjectProperty)
    void* CachedBusMix; // 0x0B80 (Size: 0x8, Type: ObjectProperty)
    FName CachedBusMixName; // 0x0B88 (Size: 0x8, Type: NameProperty)
    TArray<void*> RegisteredPlayerIds; // 0x0B90 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NonRegisteredPlayerIds; // 0x0BA0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasUpdatedStateInEditMode; // 0x0BB0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasUpdatedStateInGameplay; // 0x0BB1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeAudioMixerDevice, Mix) == 2864, "Offset mismatch for UCreativeAudioMixerDevice::Mix");
static_assert(offsetof(UCreativeAudioMixerDevice, Bus) == 2872, "Offset mismatch for UCreativeAudioMixerDevice::Bus");
static_assert(offsetof(UCreativeAudioMixerDevice, FaderValue) == 2880, "Offset mismatch for UCreativeAudioMixerDevice::FaderValue");
static_assert(offsetof(UCreativeAudioMixerDevice, CanBeHeardBy) == 2884, "Offset mismatch for UCreativeAudioMixerDevice::CanBeHeardBy");
static_assert(offsetof(UCreativeAudioMixerDevice, bActivateInEditMode) == 2885, "Offset mismatch for UCreativeAudioMixerDevice::bActivateInEditMode");
static_assert(offsetof(UCreativeAudioMixerDevice, bActivateOnGameStart) == 2886, "Offset mismatch for UCreativeAudioMixerDevice::bActivateOnGameStart");
static_assert(offsetof(UCreativeAudioMixerDevice, CreativeProxyManagerComponent) == 2888, "Offset mismatch for UCreativeAudioMixerDevice::CreativeProxyManagerComponent");
static_assert(offsetof(UCreativeAudioMixerDevice, FortMinigameProgressComponent) == 2896, "Offset mismatch for UCreativeAudioMixerDevice::FortMinigameProgressComponent");
static_assert(offsetof(UCreativeAudioMixerDevice, CreativeRegisteredPlayersManagerComponent) == 2904, "Offset mismatch for UCreativeAudioMixerDevice::CreativeRegisteredPlayersManagerComponent");
static_assert(offsetof(UCreativeAudioMixerDevice, FortActorOptionsComponent) == 2912, "Offset mismatch for UCreativeAudioMixerDevice::FortActorOptionsComponent");
static_assert(offsetof(UCreativeAudioMixerDevice, bCachedIsActive) == 2920, "Offset mismatch for UCreativeAudioMixerDevice::bCachedIsActive");
static_assert(offsetof(UCreativeAudioMixerDevice, CachedInstigator) == 2928, "Offset mismatch for UCreativeAudioMixerDevice::CachedInstigator");
static_assert(offsetof(UCreativeAudioMixerDevice, ClientCachedProxy) == 2936, "Offset mismatch for UCreativeAudioMixerDevice::ClientCachedProxy");
static_assert(offsetof(UCreativeAudioMixerDevice, CachedBusMix) == 2944, "Offset mismatch for UCreativeAudioMixerDevice::CachedBusMix");
static_assert(offsetof(UCreativeAudioMixerDevice, CachedBusMixName) == 2952, "Offset mismatch for UCreativeAudioMixerDevice::CachedBusMixName");
static_assert(offsetof(UCreativeAudioMixerDevice, RegisteredPlayerIds) == 2960, "Offset mismatch for UCreativeAudioMixerDevice::RegisteredPlayerIds");
static_assert(offsetof(UCreativeAudioMixerDevice, NonRegisteredPlayerIds) == 2976, "Offset mismatch for UCreativeAudioMixerDevice::NonRegisteredPlayerIds");
static_assert(offsetof(UCreativeAudioMixerDevice, bHasUpdatedStateInEditMode) == 2992, "Offset mismatch for UCreativeAudioMixerDevice::bHasUpdatedStateInEditMode");
static_assert(offsetof(UCreativeAudioMixerDevice, bHasUpdatedStateInGameplay) == 2993, "Offset mismatch for UCreativeAudioMixerDevice::bHasUpdatedStateInGameplay");

// /Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
// Kind: Class; super: CreativePlayerReplicationProxy
class UCreativeAudioMixerReplicationProxy
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    std::uint8_t bIsActive; // 0x0280 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeAudioMixerReplicationProxy, bIsActive) == 640, "Offset mismatch for UCreativeAudioMixerReplicationProxy::bIsActive");

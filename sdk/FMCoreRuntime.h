/**
 * decamp dumper generated SDK
 * Package: /Script/FMCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMCoreRuntime.FMCoreEvent_MuteJamAudioChanged
// Kind: ScriptStruct; super: none
struct FFMCoreEvent_MuteJamAudioChanged
{
public:
    std::uint8_t bIsMuted; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFMCoreEvent_MuteJamAudioChanged, bIsMuted) == 0, "Offset mismatch for FFMCoreEvent_MuteJamAudioChanged::bIsMuted");

// /Script/FMCoreRuntime.FMCoreTimeSignature
// Kind: ScriptStruct; super: none
struct FFMCoreTimeSignature
{
public:
    std::int32_t Numerator; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Denominator; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFMCoreTimeSignature, Numerator) == 0, "Offset mismatch for FFMCoreTimeSignature::Numerator");
static_assert(offsetof(FFMCoreTimeSignature, Denominator) == 4, "Offset mismatch for FFMCoreTimeSignature::Denominator");

// /Script/FMCoreRuntime.FMEvent_OnInputDeviceConnectionChanged
// Kind: ScriptStruct; super: none
struct FFMEvent_OnInputDeviceConnectionChanged
{
public:
    void* FortPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlatformUserId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewConnectionState; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t InputDeviceId[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsPeripheral; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasNoConnectedDevice; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, FortPlayer) == 0, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::FortPlayer");
static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, PlatformUserId) == 8, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::PlatformUserId");
static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, NewConnectionState) == 12, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::NewConnectionState");
static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, InputDeviceId) == 16, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::InputDeviceId");
static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, bIsPeripheral) == 20, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::bIsPeripheral");
static_assert(offsetof(FFMEvent_OnInputDeviceConnectionChanged, bHasNoConnectedDevice) == 21, "Offset mismatch for FFMEvent_OnInputDeviceConnectionChanged::bHasNoConnectedDevice");

// /Script/FMCoreRuntime.FMEvent_OnInputDeviceManagerInitialized
// Kind: ScriptStruct; super: none
struct FFMEvent_OnInputDeviceManagerInitialized
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCoreRuntime.FMEvent_OnInputDevicePairingChanged
// Kind: ScriptStruct; super: none
struct FFMEvent_OnInputDevicePairingChanged
{
public:
    std::uint8_t InputDeviceId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewPairedPlayerId[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t OldPairedPlayerId[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFMEvent_OnInputDevicePairingChanged, InputDeviceId) == 0, "Offset mismatch for FFMEvent_OnInputDevicePairingChanged::InputDeviceId");
static_assert(offsetof(FFMEvent_OnInputDevicePairingChanged, NewPairedPlayerId) == 4, "Offset mismatch for FFMEvent_OnInputDevicePairingChanged::NewPairedPlayerId");
static_assert(offsetof(FFMEvent_OnInputDevicePairingChanged, OldPairedPlayerId) == 8, "Offset mismatch for FFMEvent_OnInputDevicePairingChanged::OldPairedPlayerId");

// /Script/FMCoreRuntime.FMEvent_OnPrimaryInputDeviceChanged
// Kind: ScriptStruct; super: none
struct FFMEvent_OnPrimaryInputDeviceChanged
{
public:
    void* FortPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputDeviceId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsUsingPeripheral; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFMEvent_OnPrimaryInputDeviceChanged, FortPlayer) == 0, "Offset mismatch for FFMEvent_OnPrimaryInputDeviceChanged::FortPlayer");
static_assert(offsetof(FFMEvent_OnPrimaryInputDeviceChanged, InputDeviceId) == 8, "Offset mismatch for FFMEvent_OnPrimaryInputDeviceChanged::InputDeviceId");
static_assert(offsetof(FFMEvent_OnPrimaryInputDeviceChanged, bIsUsingPeripheral) == 12, "Offset mismatch for FFMEvent_OnPrimaryInputDeviceChanged::bIsUsingPeripheral");

// /Script/FMCoreRuntime.FMPlayspaceSystemInfo
// Kind: ScriptStruct; super: none
struct FFMPlayspaceSystemInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCoreRuntime.MusicTimeNetSyncServerSongPosition
// Kind: ScriptStruct; super: none
struct FMusicTimeNetSyncServerSongPosition
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float SecondsIncludingCountIn; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BeatsIncludingCountIn; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Tempo; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float NetServerTimeWhenSent; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicTimeNetSyncServerSongPosition, Timestamp) == 0, "Offset mismatch for FMusicTimeNetSyncServerSongPosition::Timestamp");
static_assert(offsetof(FMusicTimeNetSyncServerSongPosition, SecondsIncludingCountIn) == 8, "Offset mismatch for FMusicTimeNetSyncServerSongPosition::SecondsIncludingCountIn");
static_assert(offsetof(FMusicTimeNetSyncServerSongPosition, BeatsIncludingCountIn) == 12, "Offset mismatch for FMusicTimeNetSyncServerSongPosition::BeatsIncludingCountIn");
static_assert(offsetof(FMusicTimeNetSyncServerSongPosition, Tempo) == 16, "Offset mismatch for FMusicTimeNetSyncServerSongPosition::Tempo");
static_assert(offsetof(FMusicTimeNetSyncServerSongPosition, NetServerTimeWhenSent) == 20, "Offset mismatch for FMusicTimeNetSyncServerSongPosition::NetServerTimeWhenSent");

// /Script/FMCoreRuntime.FMCoreDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UFMCoreDeveloperSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCoreRuntime.FMCoreMusicFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFMCoreMusicFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCoreRuntime.FMCoreMusicManagerComponent
// Kind: Class; super: ActorComponent
class UFMCoreMusicManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTempoChangedDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpeedChangedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKeyChangedDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModeChangedDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimeSignatureChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartingKey; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartingMode; // 0x0111 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0112
    float StartingTempo; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float StartingSpeed; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::int32_t StartingTimeSignatureNumerator; // 0x011C (Size: 0x4, Type: IntProperty)
    std::int32_t StartingTimeSignatureDenominator; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t CurrentKey; // 0x0124 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentMode; // 0x0125 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0126
    float CurrentTempo; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float CurrentSpeed; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentTimeSignature[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t ServerKey; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ServerMode; // 0x0139 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x013A
    float ServerTempo; // 0x013C (Size: 0x4, Type: FloatProperty)
    float ServerSpeed; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ServerTimeSignature[0x1]; // 0x0144 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMCoreMusicManagerComponent, OnTempoChangedDelegate) == 192, "Offset mismatch for UFMCoreMusicManagerComponent::OnTempoChangedDelegate");
static_assert(offsetof(UFMCoreMusicManagerComponent, OnSpeedChangedDelegate) == 208, "Offset mismatch for UFMCoreMusicManagerComponent::OnSpeedChangedDelegate");
static_assert(offsetof(UFMCoreMusicManagerComponent, OnKeyChangedDelegate) == 224, "Offset mismatch for UFMCoreMusicManagerComponent::OnKeyChangedDelegate");
static_assert(offsetof(UFMCoreMusicManagerComponent, OnModeChangedDelegate) == 240, "Offset mismatch for UFMCoreMusicManagerComponent::OnModeChangedDelegate");
static_assert(offsetof(UFMCoreMusicManagerComponent, OnTimeSignatureChanged) == 256, "Offset mismatch for UFMCoreMusicManagerComponent::OnTimeSignatureChanged");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingKey) == 272, "Offset mismatch for UFMCoreMusicManagerComponent::StartingKey");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingMode) == 273, "Offset mismatch for UFMCoreMusicManagerComponent::StartingMode");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingTempo) == 276, "Offset mismatch for UFMCoreMusicManagerComponent::StartingTempo");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingSpeed) == 280, "Offset mismatch for UFMCoreMusicManagerComponent::StartingSpeed");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingTimeSignatureNumerator) == 284, "Offset mismatch for UFMCoreMusicManagerComponent::StartingTimeSignatureNumerator");
static_assert(offsetof(UFMCoreMusicManagerComponent, StartingTimeSignatureDenominator) == 288, "Offset mismatch for UFMCoreMusicManagerComponent::StartingTimeSignatureDenominator");
static_assert(offsetof(UFMCoreMusicManagerComponent, CurrentKey) == 292, "Offset mismatch for UFMCoreMusicManagerComponent::CurrentKey");
static_assert(offsetof(UFMCoreMusicManagerComponent, CurrentMode) == 293, "Offset mismatch for UFMCoreMusicManagerComponent::CurrentMode");
static_assert(offsetof(UFMCoreMusicManagerComponent, CurrentTempo) == 296, "Offset mismatch for UFMCoreMusicManagerComponent::CurrentTempo");
static_assert(offsetof(UFMCoreMusicManagerComponent, CurrentSpeed) == 300, "Offset mismatch for UFMCoreMusicManagerComponent::CurrentSpeed");
static_assert(offsetof(UFMCoreMusicManagerComponent, CurrentTimeSignature) == 304, "Offset mismatch for UFMCoreMusicManagerComponent::CurrentTimeSignature");
static_assert(offsetof(UFMCoreMusicManagerComponent, ServerKey) == 312, "Offset mismatch for UFMCoreMusicManagerComponent::ServerKey");
static_assert(offsetof(UFMCoreMusicManagerComponent, ServerMode) == 313, "Offset mismatch for UFMCoreMusicManagerComponent::ServerMode");
static_assert(offsetof(UFMCoreMusicManagerComponent, ServerTempo) == 316, "Offset mismatch for UFMCoreMusicManagerComponent::ServerTempo");
static_assert(offsetof(UFMCoreMusicManagerComponent, ServerSpeed) == 320, "Offset mismatch for UFMCoreMusicManagerComponent::ServerSpeed");
static_assert(offsetof(UFMCoreMusicManagerComponent, ServerTimeSignature) == 324, "Offset mismatch for UFMCoreMusicManagerComponent::ServerTimeSignature");

// /Script/FMCoreRuntime.FMPlayerInputDeviceManagerComponent
// Kind: Class; super: ControllerComponent
class UFMPlayerInputDeviceManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bHasConnectedInputDevice; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPeripheralDeviceConnected_AnyUser; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPeripheralDeviceConnected_OwningUser; // 0x00C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMPlayerInputDeviceManagerComponent, bHasConnectedInputDevice) == 192, "Offset mismatch for UFMPlayerInputDeviceManagerComponent::bHasConnectedInputDevice");
static_assert(offsetof(UFMPlayerInputDeviceManagerComponent, bIsPeripheralDeviceConnected_AnyUser) == 193, "Offset mismatch for UFMPlayerInputDeviceManagerComponent::bIsPeripheralDeviceConnected_AnyUser");
static_assert(offsetof(UFMPlayerInputDeviceManagerComponent, bIsPeripheralDeviceConnected_OwningUser) == 194, "Offset mismatch for UFMPlayerInputDeviceManagerComponent::bIsPeripheralDeviceConnected_OwningUser");

// /Script/FMCoreRuntime.FMPlayerMonitorComponent
// Kind: Class; super: GameFrameworkComponent
class UFMPlayerMonitorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PlayerEnteredHandle[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t PlayerExitedHandle[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMPlayerMonitorComponent, PlayerEnteredHandle) == 192, "Offset mismatch for UFMPlayerMonitorComponent::PlayerEnteredHandle");
static_assert(offsetof(UFMPlayerMonitorComponent, PlayerExitedHandle) == 264, "Offset mismatch for UFMPlayerMonitorComponent::PlayerExitedHandle");

// /Script/FMCoreRuntime.FMPlayspaceScopedSystemComponent
// Kind: Class; super: ActorComponent
class UFMPlayspaceScopedSystemComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAddedToPlayspaceSystemManager; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFMPlayspaceScopedSystemComponent, OnAddedToPlayspaceSystemManager) == 192, "Offset mismatch for UFMPlayspaceScopedSystemComponent::OnAddedToPlayspaceSystemManager");

// /Script/FMCoreRuntime.FMPlayspaceScopedSystemManager
// Kind: Class; super: ActorComponent
class UFMPlayspaceScopedSystemManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> VKClassRedirects; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> VKClassDenyList; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UEFNNotableActors; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayspacesSystemInfo; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFMPlayspaceScopedSystemManager, VKClassRedirects) == 192, "Offset mismatch for UFMPlayspaceScopedSystemManager::VKClassRedirects");
static_assert(offsetof(UFMPlayspaceScopedSystemManager, VKClassDenyList) == 208, "Offset mismatch for UFMPlayspaceScopedSystemManager::VKClassDenyList");
static_assert(offsetof(UFMPlayspaceScopedSystemManager, UEFNNotableActors) == 224, "Offset mismatch for UFMPlayspaceScopedSystemManager::UEFNNotableActors");
static_assert(offsetof(UFMPlayspaceScopedSystemManager, PlayspacesSystemInfo) == 240, "Offset mismatch for UFMPlayspaceScopedSystemManager::PlayspacesSystemInfo");

// /Script/FMCoreRuntime.MusicTimeNetSyncComponent
// Kind: Class; super: ActorComponent
class UMusicTimeNetSyncComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    float ThresholdForSeekMS; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float ThresholdForStartSpeedAdjustMS; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float ThresholdForEndOfSpeedAdjustMS; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float SpeedAdjustFactor; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float MinSpeedAdjustFactor; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x00EC
    TWeakObjectPtr<void> Weak_CachedMusicClock; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ServerTimelineSyncServerSongPosition[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMusicTimeNetSyncComponent, ThresholdForSeekMS) == 216, "Offset mismatch for UMusicTimeNetSyncComponent::ThresholdForSeekMS");
static_assert(offsetof(UMusicTimeNetSyncComponent, ThresholdForStartSpeedAdjustMS) == 220, "Offset mismatch for UMusicTimeNetSyncComponent::ThresholdForStartSpeedAdjustMS");
static_assert(offsetof(UMusicTimeNetSyncComponent, ThresholdForEndOfSpeedAdjustMS) == 224, "Offset mismatch for UMusicTimeNetSyncComponent::ThresholdForEndOfSpeedAdjustMS");
static_assert(offsetof(UMusicTimeNetSyncComponent, SpeedAdjustFactor) == 228, "Offset mismatch for UMusicTimeNetSyncComponent::SpeedAdjustFactor");
static_assert(offsetof(UMusicTimeNetSyncComponent, MinSpeedAdjustFactor) == 232, "Offset mismatch for UMusicTimeNetSyncComponent::MinSpeedAdjustFactor");
static_assert(offsetof(UMusicTimeNetSyncComponent, Weak_CachedMusicClock) == 256, "Offset mismatch for UMusicTimeNetSyncComponent::Weak_CachedMusicClock");
static_assert(offsetof(UMusicTimeNetSyncComponent, ServerTimelineSyncServerSongPosition) == 264, "Offset mismatch for UMusicTimeNetSyncComponent::ServerTimelineSyncServerSongPosition");

// /Script/FMCoreRuntime.MusicTimeNetSyncHandler
// Kind: Class; super: Interface
class UMusicTimeNetSyncHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCoreRuntime.MusicTimeNetSyncHandler_Metasound
// Kind: Class; super: Object
class UMusicTimeNetSyncHandler_Metasound
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* MetasoundGeneratorHandle; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SeekMetasoundParameterPack; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SpeedMetasoundParameterPack; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> Weak_AudioComponent; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMusicTimeNetSyncHandler_Metasound, MetasoundGeneratorHandle) == 48, "Offset mismatch for UMusicTimeNetSyncHandler_Metasound::MetasoundGeneratorHandle");
static_assert(offsetof(UMusicTimeNetSyncHandler_Metasound, SeekMetasoundParameterPack) == 56, "Offset mismatch for UMusicTimeNetSyncHandler_Metasound::SeekMetasoundParameterPack");
static_assert(offsetof(UMusicTimeNetSyncHandler_Metasound, SpeedMetasoundParameterPack) == 64, "Offset mismatch for UMusicTimeNetSyncHandler_Metasound::SpeedMetasoundParameterPack");
static_assert(offsetof(UMusicTimeNetSyncHandler_Metasound, Weak_AudioComponent) == 72, "Offset mismatch for UMusicTimeNetSyncHandler_Metasound::Weak_AudioComponent");

// /Script/FMCoreRuntime.MusicTimeNetSyncState
// Kind: Class; super: Interface
class UMusicTimeNetSyncState
{
public:
    std::uint8_t Opaque[1];
};

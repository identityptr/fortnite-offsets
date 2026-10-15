/**
 * decamp dumper generated SDK
 * Package: /Script/FMDanceSpotlightRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMDanceSpotlightRuntime.DanceSpotlightAnalyticsData
// Kind: ScriptStruct; super: none
struct FDanceSpotlightAnalyticsData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNearbyPlayerCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EmoteCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDidCameraFacePlayer; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    TMap<void*, void*> MoodCount; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MoodDuration; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDanceSpotlightAnalyticsData, duration) == 0, "Offset mismatch for FDanceSpotlightAnalyticsData::duration");
static_assert(offsetof(FDanceSpotlightAnalyticsData, MaxNearbyPlayerCount) == 4, "Offset mismatch for FDanceSpotlightAnalyticsData::MaxNearbyPlayerCount");
static_assert(offsetof(FDanceSpotlightAnalyticsData, EmoteCount) == 8, "Offset mismatch for FDanceSpotlightAnalyticsData::EmoteCount");
static_assert(offsetof(FDanceSpotlightAnalyticsData, bDidCameraFacePlayer) == 12, "Offset mismatch for FDanceSpotlightAnalyticsData::bDidCameraFacePlayer");
static_assert(offsetof(FDanceSpotlightAnalyticsData, MoodCount) == 16, "Offset mismatch for FDanceSpotlightAnalyticsData::MoodCount");
static_assert(offsetof(FDanceSpotlightAnalyticsData, MoodDuration) == 32, "Offset mismatch for FDanceSpotlightAnalyticsData::MoodDuration");

// /Script/FMDanceSpotlightRuntime.DanceSpotlightMood
// Kind: ScriptStruct; super: none
struct FDanceSpotlightMood
{
public:
    FString DebugName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t TrailNiagaraSystem[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BurstNiagaraSystem[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t TrailVfxColorIdx; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDanceSpotlightMood, DebugName) == 0, "Offset mismatch for FDanceSpotlightMood::DebugName");
static_assert(offsetof(FDanceSpotlightMood, TrailNiagaraSystem) == 16, "Offset mismatch for FDanceSpotlightMood::TrailNiagaraSystem");
static_assert(offsetof(FDanceSpotlightMood, BurstNiagaraSystem) == 48, "Offset mismatch for FDanceSpotlightMood::BurstNiagaraSystem");
static_assert(offsetof(FDanceSpotlightMood, TrailVfxColorIdx) == 80, "Offset mismatch for FDanceSpotlightMood::TrailVfxColorIdx");

// /Script/FMDanceSpotlightRuntime.DanceSpotlightMoodChangedEvent
// Kind: ScriptStruct; super: none
struct FDanceSpotlightMoodChangedEvent
{
public:
    std::int32_t CurrentMoodIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDanceSpotlightMoodChangedEvent, CurrentMoodIndex) == 0, "Offset mismatch for FDanceSpotlightMoodChangedEvent::CurrentMoodIndex");

// /Script/FMDanceSpotlightRuntime.DanceVfxStyleEntry
// Kind: ScriptStruct; super: TableRowBase
struct FDanceVfxStyleEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> NiagaraSystem; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDanceVfxStyleEntry, NiagaraSystem) == 8, "Offset mismatch for FDanceVfxStyleEntry::NiagaraSystem");

// /Script/FMDanceSpotlightRuntime.DanceSpotlightComponent
// Kind: Class; super: PawnComponent
class UDanceSpotlightComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnDanceSpotlightHoldChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> MoodVfxSetup; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwnerSkeletalMeshComp; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    void* ActiveTrailVFX; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* ActiveBurstVFX; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* LoadedBurstNiagaraSystem; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t JamGameplayTag[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::uint8_t DanceGameplayTag[0x4]; // 0x0104 (Size: 0x4, Type: StructProperty)
    std::uint8_t DanceSpotlightGameplayTag[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    float DanceEnergy; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPlayerOnTheBeat; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    float NearbyPlayerRange; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::int32_t NearbyPlayerCount; // 0x0118 (Size: 0x4, Type: IntProperty)
    float NearbyPlayerUpdateTime; // 0x011C (Size: 0x4, Type: FloatProperty)
    float TimeSpentQuestUpdateTime; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x14]; // 0x0124
    double CooldownDurationForTrailVfxInS; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::int32_t DeferredMoodIndex; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0144
    double LastMoodChangeTimeInS; // 0x0148 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0150
    std::uint8_t bInTheSpotlight; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrailVFXActive; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x015A
    std::int32_t CurrentMoodIndex; // 0x015C (Size: 0x4, Type: IntProperty)
    std::uint8_t bPlayerHolding; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0161
    TWeakObjectPtr<void> WeakMusicClockPtr; // 0x0164 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakMusicEventPtr; // 0x016C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0174
    void* CurrentEmote; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnalyticsData[0x30]; // 0x0180 (Size: 0x30, Type: StructProperty)
    float Analytics_SpotlightStartTime; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float Analytics_MoodStartTime; // 0x01B4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDanceSpotlightComponent, OnDanceSpotlightHoldChanged) == 192, "Offset mismatch for UDanceSpotlightComponent::OnDanceSpotlightHoldChanged");
static_assert(offsetof(UDanceSpotlightComponent, MoodVfxSetup) == 208, "Offset mismatch for UDanceSpotlightComponent::MoodVfxSetup");
static_assert(offsetof(UDanceSpotlightComponent, OwnerSkeletalMeshComp) == 224, "Offset mismatch for UDanceSpotlightComponent::OwnerSkeletalMeshComp");
static_assert(offsetof(UDanceSpotlightComponent, ActiveTrailVFX) == 232, "Offset mismatch for UDanceSpotlightComponent::ActiveTrailVFX");
static_assert(offsetof(UDanceSpotlightComponent, ActiveBurstVFX) == 240, "Offset mismatch for UDanceSpotlightComponent::ActiveBurstVFX");
static_assert(offsetof(UDanceSpotlightComponent, LoadedBurstNiagaraSystem) == 248, "Offset mismatch for UDanceSpotlightComponent::LoadedBurstNiagaraSystem");
static_assert(offsetof(UDanceSpotlightComponent, JamGameplayTag) == 256, "Offset mismatch for UDanceSpotlightComponent::JamGameplayTag");
static_assert(offsetof(UDanceSpotlightComponent, DanceGameplayTag) == 260, "Offset mismatch for UDanceSpotlightComponent::DanceGameplayTag");
static_assert(offsetof(UDanceSpotlightComponent, DanceSpotlightGameplayTag) == 264, "Offset mismatch for UDanceSpotlightComponent::DanceSpotlightGameplayTag");
static_assert(offsetof(UDanceSpotlightComponent, DanceEnergy) == 268, "Offset mismatch for UDanceSpotlightComponent::DanceEnergy");
static_assert(offsetof(UDanceSpotlightComponent, bPlayerOnTheBeat) == 272, "Offset mismatch for UDanceSpotlightComponent::bPlayerOnTheBeat");
static_assert(offsetof(UDanceSpotlightComponent, NearbyPlayerRange) == 276, "Offset mismatch for UDanceSpotlightComponent::NearbyPlayerRange");
static_assert(offsetof(UDanceSpotlightComponent, NearbyPlayerCount) == 280, "Offset mismatch for UDanceSpotlightComponent::NearbyPlayerCount");
static_assert(offsetof(UDanceSpotlightComponent, NearbyPlayerUpdateTime) == 284, "Offset mismatch for UDanceSpotlightComponent::NearbyPlayerUpdateTime");
static_assert(offsetof(UDanceSpotlightComponent, TimeSpentQuestUpdateTime) == 288, "Offset mismatch for UDanceSpotlightComponent::TimeSpentQuestUpdateTime");
static_assert(offsetof(UDanceSpotlightComponent, CooldownDurationForTrailVfxInS) == 312, "Offset mismatch for UDanceSpotlightComponent::CooldownDurationForTrailVfxInS");
static_assert(offsetof(UDanceSpotlightComponent, DeferredMoodIndex) == 320, "Offset mismatch for UDanceSpotlightComponent::DeferredMoodIndex");
static_assert(offsetof(UDanceSpotlightComponent, LastMoodChangeTimeInS) == 328, "Offset mismatch for UDanceSpotlightComponent::LastMoodChangeTimeInS");
static_assert(offsetof(UDanceSpotlightComponent, bInTheSpotlight) == 344, "Offset mismatch for UDanceSpotlightComponent::bInTheSpotlight");
static_assert(offsetof(UDanceSpotlightComponent, bTrailVFXActive) == 345, "Offset mismatch for UDanceSpotlightComponent::bTrailVFXActive");
static_assert(offsetof(UDanceSpotlightComponent, CurrentMoodIndex) == 348, "Offset mismatch for UDanceSpotlightComponent::CurrentMoodIndex");
static_assert(offsetof(UDanceSpotlightComponent, bPlayerHolding) == 352, "Offset mismatch for UDanceSpotlightComponent::bPlayerHolding");
static_assert(offsetof(UDanceSpotlightComponent, WeakMusicClockPtr) == 356, "Offset mismatch for UDanceSpotlightComponent::WeakMusicClockPtr");
static_assert(offsetof(UDanceSpotlightComponent, WeakMusicEventPtr) == 364, "Offset mismatch for UDanceSpotlightComponent::WeakMusicEventPtr");
static_assert(offsetof(UDanceSpotlightComponent, CurrentEmote) == 376, "Offset mismatch for UDanceSpotlightComponent::CurrentEmote");
static_assert(offsetof(UDanceSpotlightComponent, AnalyticsData) == 384, "Offset mismatch for UDanceSpotlightComponent::AnalyticsData");
static_assert(offsetof(UDanceSpotlightComponent, Analytics_SpotlightStartTime) == 432, "Offset mismatch for UDanceSpotlightComponent::Analytics_SpotlightStartTime");
static_assert(offsetof(UDanceSpotlightComponent, Analytics_MoodStartTime) == 436, "Offset mismatch for UDanceSpotlightComponent::Analytics_MoodStartTime");

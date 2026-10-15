/**
 * decamp dumper generated SDK
 * Package: /Script/AISpawner
 */
#pragma once
#include "Basic.h"

// /Script/AISpawner.AISpawnerPreviewCosmeticDownloadComponent
// Kind: Class; super: ActorComponent
class UAISpawnerPreviewCosmeticDownloadComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CandidateComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAISpawnerPreviewCosmeticDownloadComponent, CandidateComponent) == 192, "Offset mismatch for UAISpawnerPreviewCosmeticDownloadComponent::CandidateComponent");

// /Script/AISpawner.AISpawnerPreviewerComponent
// Kind: Class; super: ChildActorComponent
class UAISpawnerPreviewerComponent
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PlayerMannequinClass; // 0x0290 (Size: 0x8, Type: ClassProperty)
    void* AIPawnPreviewClass; // 0x0298 (Size: 0x8, Type: ClassProperty)
    void* DefaultCustomAnimationBPClass; // 0x02A0 (Size: 0x8, Type: ClassProperty)
    float RotationWhenFacingY; // 0x02A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAISpawnerPreviewerComponent, PlayerMannequinClass) == 656, "Offset mismatch for UAISpawnerPreviewerComponent::PlayerMannequinClass");
static_assert(offsetof(UAISpawnerPreviewerComponent, AIPawnPreviewClass) == 664, "Offset mismatch for UAISpawnerPreviewerComponent::AIPawnPreviewClass");
static_assert(offsetof(UAISpawnerPreviewerComponent, DefaultCustomAnimationBPClass) == 672, "Offset mismatch for UAISpawnerPreviewerComponent::DefaultCustomAnimationBPClass");
static_assert(offsetof(UAISpawnerPreviewerComponent, RotationWhenFacingY) == 680, "Offset mismatch for UAISpawnerPreviewerComponent::RotationWhenFacingY");

// /Script/AISpawner.CreaturePreviewActor
// Kind: Class; super: Actor
class UCreaturePreviewActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PreviewAssets[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreaturePreviewActor, PreviewAssets) == 624, "Offset mismatch for UCreaturePreviewActor::PreviewAssets");

// /Script/AISpawner.FortAthenaMutator_AISpawner
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_AISpawner
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    std::uint8_t bAutomaticallyFinishInitialization; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02E9
    std::uint8_t GameMsg_AircraftPhaseIntroMessage[0x50]; // 0x02F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t Stinger_MatchStart[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEnd[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndWin[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndLose[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    void* StingerAudioComponent; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* StingerEventForwarder; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0398
    TArray<void*> FortSquadStartActors; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_AISpawner, bAutomaticallyFinishInitialization) == 744, "Offset mismatch for UFortAthenaMutator_AISpawner::bAutomaticallyFinishInitialization");
static_assert(offsetof(UFortAthenaMutator_AISpawner, GameMsg_AircraftPhaseIntroMessage) == 752, "Offset mismatch for UFortAthenaMutator_AISpawner::GameMsg_AircraftPhaseIntroMessage");
static_assert(offsetof(UFortAthenaMutator_AISpawner, Stinger_MatchStart) == 832, "Offset mismatch for UFortAthenaMutator_AISpawner::Stinger_MatchStart");
static_assert(offsetof(UFortAthenaMutator_AISpawner, Stinger_MatchEnd) == 848, "Offset mismatch for UFortAthenaMutator_AISpawner::Stinger_MatchEnd");
static_assert(offsetof(UFortAthenaMutator_AISpawner, Stinger_MatchEndWin) == 864, "Offset mismatch for UFortAthenaMutator_AISpawner::Stinger_MatchEndWin");
static_assert(offsetof(UFortAthenaMutator_AISpawner, Stinger_MatchEndLose) == 880, "Offset mismatch for UFortAthenaMutator_AISpawner::Stinger_MatchEndLose");
static_assert(offsetof(UFortAthenaMutator_AISpawner, StingerAudioComponent) == 904, "Offset mismatch for UFortAthenaMutator_AISpawner::StingerAudioComponent");
static_assert(offsetof(UFortAthenaMutator_AISpawner, StingerEventForwarder) == 912, "Offset mismatch for UFortAthenaMutator_AISpawner::StingerEventForwarder");
static_assert(offsetof(UFortAthenaMutator_AISpawner, FortSquadStartActors) == 944, "Offset mismatch for UFortAthenaMutator_AISpawner::FortSquadStartActors");

// /Script/AISpawner.FortGameFeatureAction_AddSpawnerDeviceBindingTrack
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_AddSpawnerDeviceBindingTrack
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpawnerDeviceClassPath[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t BindingTrackClassPath[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddSpawnerDeviceBindingTrack, SpawnerDeviceClassPath) == 40, "Offset mismatch for UFortGameFeatureAction_AddSpawnerDeviceBindingTrack::SpawnerDeviceClassPath");
static_assert(offsetof(UFortGameFeatureAction_AddSpawnerDeviceBindingTrack, BindingTrackClassPath) == 64, "Offset mismatch for UFortGameFeatureAction_AddSpawnerDeviceBindingTrack::BindingTrackClassPath");

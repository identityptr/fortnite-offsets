/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_CinematicSequence
 */
#pragma once
#include "Basic.h"

// /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
// Kind: Class; super: BuildingProp
class UCinematicSequenceDeviceBase
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t AISpawnerDeviceClassPath[0x18]; // 0x0B68 (Size: 0x18, Type: StructProperty)
    void* Sequence; // 0x0B80 (Size: 0x8, Type: ObjectProperty)
    void* LevelSequenceActor; // 0x0B88 (Size: 0x8, Type: ObjectProperty)
    void* InstigatingController; // 0x0B90 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstigatingTeam; // 0x0B98 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0B99
    std::uint8_t bAutoPlay; // 0x0B9C (Size: 0x1, Type: BoolProperty)
    // 0x0B9C BoolProperty bLoopPlayback (shared storage)
    // 0x0B9C BoolProperty bOverrideReplicationBehavior (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0B9D
    std::uint8_t EnabledOnPhase; // 0x0BA0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Visibility; // 0x0BA1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLevelSequenceActorAlwaysRelevant; // 0x0BA2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0BA3
    float PlayRate; // 0x0BA4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShowHUDDuringCinematic; // 0x0BA8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DisablePlayerInput; // 0x0BA9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FinishCompletionStateOverride; // 0x0BAA (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCinematicSequenceDeviceBase, AISpawnerDeviceClassPath) == 2920, "Offset mismatch for UCinematicSequenceDeviceBase::AISpawnerDeviceClassPath");
static_assert(offsetof(UCinematicSequenceDeviceBase, Sequence) == 2944, "Offset mismatch for UCinematicSequenceDeviceBase::Sequence");
static_assert(offsetof(UCinematicSequenceDeviceBase, LevelSequenceActor) == 2952, "Offset mismatch for UCinematicSequenceDeviceBase::LevelSequenceActor");
static_assert(offsetof(UCinematicSequenceDeviceBase, InstigatingController) == 2960, "Offset mismatch for UCinematicSequenceDeviceBase::InstigatingController");
static_assert(offsetof(UCinematicSequenceDeviceBase, InstigatingTeam) == 2968, "Offset mismatch for UCinematicSequenceDeviceBase::InstigatingTeam");
static_assert(offsetof(UCinematicSequenceDeviceBase, bAutoPlay) == 2972, "Offset mismatch for UCinematicSequenceDeviceBase::bAutoPlay");
static_assert(offsetof(UCinematicSequenceDeviceBase, EnabledOnPhase) == 2976, "Offset mismatch for UCinematicSequenceDeviceBase::EnabledOnPhase");
static_assert(offsetof(UCinematicSequenceDeviceBase, Visibility) == 2977, "Offset mismatch for UCinematicSequenceDeviceBase::Visibility");
static_assert(offsetof(UCinematicSequenceDeviceBase, bLevelSequenceActorAlwaysRelevant) == 2978, "Offset mismatch for UCinematicSequenceDeviceBase::bLevelSequenceActorAlwaysRelevant");
static_assert(offsetof(UCinematicSequenceDeviceBase, PlayRate) == 2980, "Offset mismatch for UCinematicSequenceDeviceBase::PlayRate");
static_assert(offsetof(UCinematicSequenceDeviceBase, ShowHUDDuringCinematic) == 2984, "Offset mismatch for UCinematicSequenceDeviceBase::ShowHUDDuringCinematic");
static_assert(offsetof(UCinematicSequenceDeviceBase, DisablePlayerInput) == 2985, "Offset mismatch for UCinematicSequenceDeviceBase::DisablePlayerInput");
static_assert(offsetof(UCinematicSequenceDeviceBase, FinishCompletionStateOverride) == 2986, "Offset mismatch for UCinematicSequenceDeviceBase::FinishCompletionStateOverride");

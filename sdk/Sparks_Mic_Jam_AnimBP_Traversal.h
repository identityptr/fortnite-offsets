/**
 * decamp dumper generated SDK
 * Package: /SparksCharacterCommon/Animation/MainPlayer/BandPlay/Sparks_Mic_Jam_AnimBP_Traversal
 */
#pragma once
#include "Basic.h"

// /SparksCharacterCommon/Animation/MainPlayer/BandPlay/Sparks_Mic_Jam_AnimBP_Traversal.Sparks_Mic_Jam_AnimBP_Traversal_C
// Kind: AnimBlueprintGeneratedClass; super: SparksMicAnimInstance
class USparks_Mic_Jam_AnimBP_Traversal_C
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    std::uint8_t UberGraphFrame[0x48]; // 0x0410 (Size: 0x48, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x0458 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x8]; // 0x0460 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimGraphNode_PlayBeatSyncedAnim[0x880]; // 0x0468 (Size: 0x880, Type: StructProperty)
    std::uint8_t AnimGraphNode_PlayBeatSyncedAnim_2[0x1F8]; // 0x0CE8 (Size: 0x1F8, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0x158]; // 0x0EE0 (Size: 0x158, Type: StructProperty)
    std::uint8_t AnimGraphNode_PlayBeatSyncedAnim_3[0xC8]; // 0x1038 (Size: 0xC8, Type: StructProperty)
    std::uint8_t AnimGraphNode_PlayBeatSyncedAnim_4[0x380]; // 0x1100 (Size: 0x380, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x158]; // 0x1480 (Size: 0x158, Type: StructProperty)
    std::uint8_t AnimGraphNode_LayeredBoneBlend[0x298]; // 0x15D8 (Size: 0x298, Type: StructProperty)
    std::uint8_t InstrumentType; // 0x1870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1871
    TArray<void*> PlaySequences; // 0x1878 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TempoMultipliers; // 0x1888 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MidiTrackName[0x4]; // 0x1898 (Size: 0x4, Type: NameProperty)
    std::uint8_t AnimNotify_TextColor[0x10]; // 0x189C (Size: 0x10, Type: StructProperty)
    float SecBeforeIntensity; // 0x18AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t DEBUG_PrintAnimLogic; // 0x18B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x18B1
    double LipSyncBlendWeight; // 0x18B8 (Size: 0x8, Type: DoubleProperty)
    void* IntensityMidiListener; // 0x18C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x80]; // 0x18C8
    std::uint8_t ShouldUseJamAnim; // 0x1948 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x1949
    void* TraversalGeneralAdditiveSequence; // 0x1950 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DEBUG_UseInputLayering; // 0x1958 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x1959
    double micStandScaleAlpha; // 0x1960 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TraversalPoseActive; // 0x1968 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, UberGraphFrame) == 1040, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::UberGraphFrame");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimBlueprintExtension_PropertyAccess) == 1112, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimBlueprintExtension_Base) == 1120, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimBlueprintExtension_Base");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_PlayBeatSyncedAnim) == 1128, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_PlayBeatSyncedAnim");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_PlayBeatSyncedAnim_2) == 3304, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_PlayBeatSyncedAnim_2");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_LinkedInputPose) == 3808, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_PlayBeatSyncedAnim_3) == 4152, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_PlayBeatSyncedAnim_3");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_PlayBeatSyncedAnim_4) == 4352, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_PlayBeatSyncedAnim_4");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_Root) == 5248, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_Root");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimGraphNode_LayeredBoneBlend) == 5592, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimGraphNode_LayeredBoneBlend");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, InstrumentType) == 6256, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::InstrumentType");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, PlaySequences) == 6264, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::PlaySequences");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, TempoMultipliers) == 6280, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::TempoMultipliers");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, MidiTrackName) == 6296, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::MidiTrackName");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, AnimNotify_TextColor) == 6300, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::AnimNotify_TextColor");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, SecBeforeIntensity) == 6316, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::SecBeforeIntensity");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, DEBUG_PrintAnimLogic) == 6320, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::DEBUG_PrintAnimLogic");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, LipSyncBlendWeight) == 6328, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::LipSyncBlendWeight");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, IntensityMidiListener) == 6336, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::IntensityMidiListener");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, ShouldUseJamAnim) == 6472, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::ShouldUseJamAnim");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, TraversalGeneralAdditiveSequence) == 6480, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::TraversalGeneralAdditiveSequence");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, DEBUG_UseInputLayering) == 6488, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::DEBUG_UseInputLayering");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, micStandScaleAlpha) == 6496, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::micStandScaleAlpha");
static_assert(offsetof(USparks_Mic_Jam_AnimBP_Traversal_C, TraversalPoseActive) == 6504, "Offset mismatch for USparks_Mic_Jam_AnimBP_Traversal_C::TraversalPoseActive");

/**
 * decamp dumper generated SDK
 * Package: /Script/JunoQuestsInGame
 */
#pragma once
#include "Basic.h"

// /Script/JunoQuestsInGame.FTUEQuestBundleWithRequiredTag
// Kind: ScriptStruct; super: none
struct FFTUEQuestBundleWithRequiredTag
{
public:
    void* FTUEQuestBundleDef; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RequiredTagInPreviousBundleForTracking[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFTUEQuestBundleWithRequiredTag, FTUEQuestBundleDef) == 0, "Offset mismatch for FFTUEQuestBundleWithRequiredTag::FTUEQuestBundleDef");
static_assert(offsetof(FFTUEQuestBundleWithRequiredTag, RequiredTagInPreviousBundleForTracking) == 8, "Offset mismatch for FFTUEQuestBundleWithRequiredTag::RequiredTagInPreviousBundleForTracking");

// /Script/JunoQuestsInGame.JunoControllerComponent_QuestEventTracker
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_QuestEventTracker
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnTrackedFTUEQuestsEnabled; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> TrackedFTUEQuests; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FTUEQuestBundles; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoControllerComponent_QuestEventTracker, OnTrackedFTUEQuestsEnabled) == 216, "Offset mismatch for UJunoControllerComponent_QuestEventTracker::OnTrackedFTUEQuestsEnabled");
static_assert(offsetof(UJunoControllerComponent_QuestEventTracker, TrackedFTUEQuests) == 232, "Offset mismatch for UJunoControllerComponent_QuestEventTracker::TrackedFTUEQuests");
static_assert(offsetof(UJunoControllerComponent_QuestEventTracker, FTUEQuestBundles) == 248, "Offset mismatch for UJunoControllerComponent_QuestEventTracker::FTUEQuestBundles");

// /Script/JunoQuestsInGame.JunoQuestCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoQuestCheatManager
{
public:
    std::uint8_t Opaque[1];
};

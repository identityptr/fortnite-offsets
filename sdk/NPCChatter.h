/**
 * decamp dumper generated SDK
 * Package: /Script/NPCChatter
 */
#pragma once
#include "Basic.h"

// /Script/NPCChatter.Chatter
// Kind: ScriptStruct; super: none
struct FChatter
{
public:
    std::uint8_t ChatterTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> VoiceLines; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Cooldown; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Priority; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChatter, ChatterTag) == 0, "Offset mismatch for FChatter::ChatterTag");
static_assert(offsetof(FChatter, VoiceLines) == 8, "Offset mismatch for FChatter::VoiceLines");
static_assert(offsetof(FChatter, Cooldown) == 24, "Offset mismatch for FChatter::Cooldown");
static_assert(offsetof(FChatter, Priority) == 28, "Offset mismatch for FChatter::Priority");

// /Script/NPCChatter.ChatterVoiceLine
// Kind: ScriptStruct; super: none
struct FChatterVoiceLine
{
public:
    std::uint8_t Text[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t VoiceSound[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChatterVoiceLine, Text) == 0, "Offset mismatch for FChatterVoiceLine::Text");
static_assert(offsetof(FChatterVoiceLine, VoiceSound) == 16, "Offset mismatch for FChatterVoiceLine::VoiceSound");
static_assert(offsetof(FChatterVoiceLine, Weight) == 48, "Offset mismatch for FChatterVoiceLine::Weight");

// /Script/NPCChatter.ChatterDialog
// Kind: Class; super: PrimaryDataAsset
class UChatterDialog
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Chatters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChatterDialog, Chatters) == 40, "Offset mismatch for UChatterDialog::Chatters");

// /Script/NPCChatter.ChatterDialogSet
// Kind: Class; super: PrimaryDataAsset
class UChatterDialogSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DialogsByIdentity; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UChatterDialogSet, DialogsByIdentity) == 40, "Offset mismatch for UChatterDialogSet::DialogsByIdentity");

// /Script/NPCChatter.NPCChatterBaseComponent
// Kind: Class; super: FortPawnComponent
class UNPCChatterBaseComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* DialogSet; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSpeechBubbleActive; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSoundActive; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTextMessageActive; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextMessageAudience; // 0x00DB (Size: 0x1, Type: EnumProperty)
    float DefaultLineDuration; // 0x00DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    void* ChatterAudioComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* ResolvedDialog; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNPCChatterBaseComponent, DialogSet) == 208, "Offset mismatch for UNPCChatterBaseComponent::DialogSet");
static_assert(offsetof(UNPCChatterBaseComponent, bSpeechBubbleActive) == 216, "Offset mismatch for UNPCChatterBaseComponent::bSpeechBubbleActive");
static_assert(offsetof(UNPCChatterBaseComponent, bSoundActive) == 217, "Offset mismatch for UNPCChatterBaseComponent::bSoundActive");
static_assert(offsetof(UNPCChatterBaseComponent, bTextMessageActive) == 218, "Offset mismatch for UNPCChatterBaseComponent::bTextMessageActive");
static_assert(offsetof(UNPCChatterBaseComponent, TextMessageAudience) == 219, "Offset mismatch for UNPCChatterBaseComponent::TextMessageAudience");
static_assert(offsetof(UNPCChatterBaseComponent, DefaultLineDuration) == 220, "Offset mismatch for UNPCChatterBaseComponent::DefaultLineDuration");
static_assert(offsetof(UNPCChatterBaseComponent, ChatterAudioComponent) == 232, "Offset mismatch for UNPCChatterBaseComponent::ChatterAudioComponent");
static_assert(offsetof(UNPCChatterBaseComponent, ResolvedDialog) == 240, "Offset mismatch for UNPCChatterBaseComponent::ResolvedDialog");

// /Script/NPCChatter.NPCChatterBaseUserOptionsComponent
// Kind: Class; super: FortUserOptionContainerComponent
class UNPCChatterBaseUserOptionsComponent
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t bSpeechBubbleActive; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSoundActive; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTextMessageActive; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTextMessageToTeamOnly; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitializeOnSpawn; // 0x0154 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCChatterBaseUserOptionsComponent, bSpeechBubbleActive) == 336, "Offset mismatch for UNPCChatterBaseUserOptionsComponent::bSpeechBubbleActive");
static_assert(offsetof(UNPCChatterBaseUserOptionsComponent, bSoundActive) == 337, "Offset mismatch for UNPCChatterBaseUserOptionsComponent::bSoundActive");
static_assert(offsetof(UNPCChatterBaseUserOptionsComponent, bTextMessageActive) == 338, "Offset mismatch for UNPCChatterBaseUserOptionsComponent::bTextMessageActive");
static_assert(offsetof(UNPCChatterBaseUserOptionsComponent, bTextMessageToTeamOnly) == 339, "Offset mismatch for UNPCChatterBaseUserOptionsComponent::bTextMessageToTeamOnly");
static_assert(offsetof(UNPCChatterBaseUserOptionsComponent, bInitializeOnSpawn) == 340, "Offset mismatch for UNPCChatterBaseUserOptionsComponent::bInitializeOnSpawn");

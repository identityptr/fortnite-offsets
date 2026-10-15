/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay
 */
#pragma once
#include "Basic.h"

// /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
// Kind: BlueprintGeneratedClass; super: FortEmotePreviewActor
class UB_EmotePreviewDisplay_C
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0288 (Size: 0x8, Type: StructProperty)
    void* Scene; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* EmojiItemDefinition; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Animation[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    void* DanceOrEmojiItemDefinition; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    FName StartSectionName; // 0x02C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x10]; // 0x02D0
    void* ShoutItemDefinition; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DynamicallySpawnedSounds; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UB_EmotePreviewDisplay_C, UberGraphFrame) == 648, "Offset mismatch for UB_EmotePreviewDisplay_C::UberGraphFrame");
static_assert(offsetof(UB_EmotePreviewDisplay_C, Scene) == 656, "Offset mismatch for UB_EmotePreviewDisplay_C::Scene");
static_assert(offsetof(UB_EmotePreviewDisplay_C, EmojiItemDefinition) == 664, "Offset mismatch for UB_EmotePreviewDisplay_C::EmojiItemDefinition");
static_assert(offsetof(UB_EmotePreviewDisplay_C, Animation) == 672, "Offset mismatch for UB_EmotePreviewDisplay_C::Animation");
static_assert(offsetof(UB_EmotePreviewDisplay_C, DanceOrEmojiItemDefinition) == 704, "Offset mismatch for UB_EmotePreviewDisplay_C::DanceOrEmojiItemDefinition");
static_assert(offsetof(UB_EmotePreviewDisplay_C, StartSectionName) == 712, "Offset mismatch for UB_EmotePreviewDisplay_C::StartSectionName");
static_assert(offsetof(UB_EmotePreviewDisplay_C, ShoutItemDefinition) == 736, "Offset mismatch for UB_EmotePreviewDisplay_C::ShoutItemDefinition");
static_assert(offsetof(UB_EmotePreviewDisplay_C, DynamicallySpawnedSounds) == 744, "Offset mismatch for UB_EmotePreviewDisplay_C::DynamicallySpawnedSounds");

/**
 * decamp dumper generated SDK
 * Package: /VerseNPC/_Verse/VNI/VerseNPC
 */
#pragma once
#include "Basic.h"

// /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_default_behavior
// Kind: VerseClass; super: None
class UVerseNPC_default_behavior
{
public:
    std::uint8_t Opaque[1];
};


// /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_wildlife_avatar_template
// Kind: VerseClass; super: Entity
class UVerseNPC_wildlife_avatar_template
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* verse_0xFDD74F27_TransformComponent; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x818B44C9_MeshComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseNPC_wildlife_avatar_template, verse_0xFDD74F27_TransformComponent) == 120, "Offset mismatch for UVerseNPC_wildlife_avatar_template::verse_0xFDD74F27_TransformComponent");
static_assert(offsetof(UVerseNPC_wildlife_avatar_template, verse_0x818B44C9_MeshComponent) == 128, "Offset mismatch for UVerseNPC_wildlife_avatar_template::verse_0x818B44C9_MeshComponent");

// /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_wildlife_template
// Kind: VerseClass; super: Entity
class UVerseNPC_wildlife_template
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* verse_0xC81F8A41_NPCComponent; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x61DDA868_PossessableComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x16DE5B80_IconComponent; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xA70A9FFD_DescriptionComponent; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xA59EB3B1_PlayAnimationComponent; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x33D9284B_ActionsComponent; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x24707EFB_AwarenessComponent; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xF5E659EC_NPCBehaviorComponent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xF0FDCB22_Avatar; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseNPC_wildlife_template, verse_0xC81F8A41_NPCComponent) == 120, "Offset mismatch for UVerseNPC_wildlife_template::verse_0xC81F8A41_NPCComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0x61DDA868_PossessableComponent) == 128, "Offset mismatch for UVerseNPC_wildlife_template::verse_0x61DDA868_PossessableComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0x16DE5B80_IconComponent) == 136, "Offset mismatch for UVerseNPC_wildlife_template::verse_0x16DE5B80_IconComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0xA70A9FFD_DescriptionComponent) == 144, "Offset mismatch for UVerseNPC_wildlife_template::verse_0xA70A9FFD_DescriptionComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0xA59EB3B1_PlayAnimationComponent) == 152, "Offset mismatch for UVerseNPC_wildlife_template::verse_0xA59EB3B1_PlayAnimationComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0x33D9284B_ActionsComponent) == 160, "Offset mismatch for UVerseNPC_wildlife_template::verse_0x33D9284B_ActionsComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0x24707EFB_AwarenessComponent) == 168, "Offset mismatch for UVerseNPC_wildlife_template::verse_0x24707EFB_AwarenessComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0xF5E659EC_NPCBehaviorComponent) == 176, "Offset mismatch for UVerseNPC_wildlife_template::verse_0xF5E659EC_NPCBehaviorComponent");
static_assert(offsetof(UVerseNPC_wildlife_template, verse_0xF0FDCB22_Avatar) == 184, "Offset mismatch for UVerseNPC_wildlife_template::verse_0xF0FDCB22_Avatar");

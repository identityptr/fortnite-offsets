/**
 * decamp dumper generated SDK
 * Package: /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine
 */
#pragma once
#include "Basic.h"

// /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
// Kind: BlueprintGeneratedClass; super: FortClientAnnouncement_Cinematic
class UAnnounce_EventCine_C
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x02F0 (Size: 0x8, Type: StructProperty)
    void* DefaultSceneRoot; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnnounce_EventCine_C, UberGraphFrame) == 752, "Offset mismatch for UAnnounce_EventCine_C::UberGraphFrame");
static_assert(offsetof(UAnnounce_EventCine_C, DefaultSceneRoot) == 760, "Offset mismatch for UAnnounce_EventCine_C::DefaultSceneRoot");

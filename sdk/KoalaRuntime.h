/**
 * decamp dumper generated SDK
 * Package: /Script/KoalaRuntime
 */
#pragma once
#include "Basic.h"

// /Script/KoalaRuntime.FortContextualTutorial_GameplayEventKoala
// Kind: Class; super: FortContextualTutorial_GameplayEvent
class UFortContextualTutorial_GameplayEventKoala
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_GameplayEventKoala, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_GameplayEventKoala::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_GameplayEventKoala, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_GameplayEventKoala::MarkerText");
static_assert(offsetof(UFortContextualTutorial_GameplayEventKoala, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_GameplayEventKoala::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_GameplayEventKoala, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_GameplayEventKoala::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_GameplayEventKoala, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_GameplayEventKoala::OwnerController");

// /Script/KoalaRuntime.KoalaAnalytics
// Kind: Class; super: Object
class UKoalaAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/KoalaRuntime.KoalaGlobals
// Kind: Class; super: Object
class UKoalaGlobals
{
public:
    std::uint8_t Opaque[1];
};

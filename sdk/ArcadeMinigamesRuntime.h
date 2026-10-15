/**
 * decamp dumper generated SDK
 * Package: /Script/ArcadeMinigamesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ArcadeMinigamesRuntime.FortControllerComponent_ArcadeMinigame
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_ArcadeMinigame
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnArcadeMinigameIsInSessionUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ArcadeInputMappingContext; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ArcadeInputMappingContext_Switch; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultInputMappingContextToSuppress; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t DefaultInputMappingContextRestorePriority; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t ArcadeInputMappingPriority; // 0x00F4 (Size: 0x4, Type: IntProperty)
    void* ExitInputAction; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* MobileControlOverlayScene; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInSession; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0109
    void* ActiveScene; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* ActiveMobileOverlayScene; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* ActiveInputMappingContext; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, OnArcadeMinigameIsInSessionUpdated) == 200, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::OnArcadeMinigameIsInSessionUpdated");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ArcadeInputMappingContext) == 216, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ArcadeInputMappingContext");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ArcadeInputMappingContext_Switch) == 224, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ArcadeInputMappingContext_Switch");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, DefaultInputMappingContextToSuppress) == 232, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::DefaultInputMappingContextToSuppress");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, DefaultInputMappingContextRestorePriority) == 240, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::DefaultInputMappingContextRestorePriority");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ArcadeInputMappingPriority) == 244, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ArcadeInputMappingPriority");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ExitInputAction) == 248, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ExitInputAction");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, MobileControlOverlayScene) == 256, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::MobileControlOverlayScene");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, bIsInSession) == 264, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::bIsInSession");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ActiveScene) == 280, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ActiveScene");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ActiveMobileOverlayScene) == 288, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ActiveMobileOverlayScene");
static_assert(offsetof(UFortControllerComponent_ArcadeMinigame, ActiveInputMappingContext) == 296, "Offset mismatch for UFortControllerComponent_ArcadeMinigame::ActiveInputMappingContext");

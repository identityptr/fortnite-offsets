/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_GameStreamRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
// Kind: Class; super: ActorComponent
class UCreativeGameStreamDeviceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t OnTriggered[0x4]; // 0x00C0 (Size: 0x4, Type: MulticastSparseDelegateProperty)
    TWeakObjectPtr<void> MinigameLogicComponent; // 0x00C4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCreativeGameStreamDeviceComponent, OnTriggered) == 192, "Offset mismatch for UCreativeGameStreamDeviceComponent::OnTriggered");
static_assert(offsetof(UCreativeGameStreamDeviceComponent, MinigameLogicComponent) == 196, "Offset mismatch for UCreativeGameStreamDeviceComponent::MinigameLogicComponent");

// /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
// Kind: Class; super: PlayspaceComponent
class UCreativeGameStreamDeviceCoordinatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> EndGameCreativeGameStreamDeviceComponentQueue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Minigame; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCreativeGameStreamDeviceCoordinatorComponent, EndGameCreativeGameStreamDeviceComponentQueue) == 192, "Offset mismatch for UCreativeGameStreamDeviceCoordinatorComponent::EndGameCreativeGameStreamDeviceComponentQueue");
static_assert(offsetof(UCreativeGameStreamDeviceCoordinatorComponent, Minigame) == 208, "Offset mismatch for UCreativeGameStreamDeviceCoordinatorComponent::Minigame");

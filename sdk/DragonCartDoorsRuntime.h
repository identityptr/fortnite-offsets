/**
 * decamp dumper generated SDK
 * Package: /Script/DragonCartDoorsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DragonCartDoorsRuntime.DragonCartDoorPushComponent
// Kind: Class; super: ActorComponent
class UDragonCartDoorPushComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnActorTargeted; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PushPointSceneComp; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseSourceActor; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    void* ImpulseTargetingPreset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AsyncTargetingHandle[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t NextTargetingTimerHandle[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDragonCartDoorPushComponent, OnActorTargeted) == 192, "Offset mismatch for UDragonCartDoorPushComponent::OnActorTargeted");
static_assert(offsetof(UDragonCartDoorPushComponent, PushPointSceneComp) == 208, "Offset mismatch for UDragonCartDoorPushComponent::PushPointSceneComp");
static_assert(offsetof(UDragonCartDoorPushComponent, bUseSourceActor) == 216, "Offset mismatch for UDragonCartDoorPushComponent::bUseSourceActor");
static_assert(offsetof(UDragonCartDoorPushComponent, ImpulseTargetingPreset) == 224, "Offset mismatch for UDragonCartDoorPushComponent::ImpulseTargetingPreset");
static_assert(offsetof(UDragonCartDoorPushComponent, AsyncTargetingHandle) == 232, "Offset mismatch for UDragonCartDoorPushComponent::AsyncTargetingHandle");
static_assert(offsetof(UDragonCartDoorPushComponent, NextTargetingTimerHandle) == 240, "Offset mismatch for UDragonCartDoorPushComponent::NextTargetingTimerHandle");

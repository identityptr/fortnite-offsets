/**
 * decamp dumper generated SDK
 * Package: /Script/ExplosiveDevice
 */
#pragma once
#include "Basic.h"

// /Script/ExplosiveDevice.ExplosiveDeviceAsyncOverlapQueue
// Kind: Class; super: Object
class UExplosiveDeviceAsyncOverlapQueue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExplosiveDevice.PlayspaceComponent_ExplosiveDeviceAsyncOverlap
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_ExplosiveDeviceAsyncOverlap
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* AsyncOverlapQueue; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayspaceComponent_ExplosiveDeviceAsyncOverlap, AsyncOverlapQueue) == 280, "Offset mismatch for UPlayspaceComponent_ExplosiveDeviceAsyncOverlap::AsyncOverlapQueue");

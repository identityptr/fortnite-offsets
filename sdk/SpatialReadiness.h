/**
 * decamp dumper generated SDK
 * Package: /Script/SpatialReadiness
 */
#pragma once
#include "Basic.h"

// /Script/SpatialReadiness.SpatialReadiness
// Kind: Class; super: WorldSubsystem
class USpatialReadiness
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialReadiness.SpatialReadinessVolumeComponent
// Kind: Class; super: ActorComponent
class USpatialReadinessVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString Description; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t Bounds[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bStartReady; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpatialReadinessVolumeComponent, Description) == 192, "Offset mismatch for USpatialReadinessVolumeComponent::Description");
static_assert(offsetof(USpatialReadinessVolumeComponent, Bounds) == 208, "Offset mismatch for USpatialReadinessVolumeComponent::Bounds");
static_assert(offsetof(USpatialReadinessVolumeComponent, bStartReady) == 264, "Offset mismatch for USpatialReadinessVolumeComponent::bStartReady");

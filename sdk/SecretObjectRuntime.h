/**
 * decamp dumper generated SDK
 * Package: /Script/SecretObjectRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SecretObjectRuntime.FortRevealWallActor
// Kind: Class; super: BuildingSMActor
class UFortRevealWallActor
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    TArray<void*> DiscoveryMaterials; // 0x0AD8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSuppressShotDamage; // 0x0AE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVehicleDestruction; // 0x0AE9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0AEA
    void* DiscoveryComponent; // 0x0AF0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRevealWallActor, DiscoveryMaterials) == 2776, "Offset mismatch for UFortRevealWallActor::DiscoveryMaterials");
static_assert(offsetof(UFortRevealWallActor, bSuppressShotDamage) == 2792, "Offset mismatch for UFortRevealWallActor::bSuppressShotDamage");
static_assert(offsetof(UFortRevealWallActor, bAllowVehicleDestruction) == 2793, "Offset mismatch for UFortRevealWallActor::bAllowVehicleDestruction");
static_assert(offsetof(UFortRevealWallActor, DiscoveryComponent) == 2800, "Offset mismatch for UFortRevealWallActor::DiscoveryComponent");

// /Script/SecretObjectRuntime.FortSecretObjectComponent
// Kind: Class; super: BoxComponent
class UFortSecretObjectComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    FMulticastInlineDelegate OnDiscovered; // 0x05B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUndiscovered; // 0x05C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllowProximityOverlapsOnClient; // 0x05D0 (Size: 0x1, Type: BoolProperty)
    // 0x05D0 BoolProperty bDiscoverOnDamage (shared storage)
    // 0x05D0 BoolProperty bDiscoverOnProximity (shared storage)
    // 0x05D0 BoolProperty bDiscovered (shared storage)
    // 0x05D0 BoolProperty bShowDebugVolume (shared storage)
    // 0x05D0 BoolProperty bUndiscoverWhenOutOfRange (shared storage)
};

static_assert(offsetof(UFortSecretObjectComponent, OnDiscovered) == 1456, "Offset mismatch for UFortSecretObjectComponent::OnDiscovered");
static_assert(offsetof(UFortSecretObjectComponent, OnUndiscovered) == 1472, "Offset mismatch for UFortSecretObjectComponent::OnUndiscovered");
static_assert(offsetof(UFortSecretObjectComponent, bAllowProximityOverlapsOnClient) == 1488, "Offset mismatch for UFortSecretObjectComponent::bAllowProximityOverlapsOnClient");

// /Script/SecretObjectRuntime.FortSecretWallActor
// Kind: Class; super: FortRevealWallActor
class UFortSecretWallActor
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    TArray<void*> DiscoveryMaterials; // 0x0AD8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSuppressShotDamage; // 0x0AE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVehicleDestruction; // 0x0AE9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0AEA
    void* DiscoveryComponent; // 0x0AF0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSecretWallActor, DiscoveryMaterials) == 2776, "Offset mismatch for UFortSecretWallActor::DiscoveryMaterials");
static_assert(offsetof(UFortSecretWallActor, bSuppressShotDamage) == 2792, "Offset mismatch for UFortSecretWallActor::bSuppressShotDamage");
static_assert(offsetof(UFortSecretWallActor, bAllowVehicleDestruction) == 2793, "Offset mismatch for UFortSecretWallActor::bAllowVehicleDestruction");
static_assert(offsetof(UFortSecretWallActor, DiscoveryComponent) == 2800, "Offset mismatch for UFortSecretWallActor::DiscoveryComponent");

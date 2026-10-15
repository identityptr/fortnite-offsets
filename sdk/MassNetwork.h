/**
 * decamp dumper generated SDK
 * Package: /Script/MassNetwork
 */
#pragma once
#include "Basic.h"

// /Script/MassNetwork.MassNetworkIDFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNetworkIDFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNetwork.MassNetEntityProvider
// Kind: Class; super: Interface
class UMassNetEntityProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNetwork.MassNetworkIDFragmentInitializer
// Kind: Class; super: MassObserverProcessor
class UMassNetworkIDFragmentInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassNetworkIDFragmentInitializer, ObservedType) == 256, "Offset mismatch for UMassNetworkIDFragmentInitializer::ObservedType");
static_assert(offsetof(UMassNetworkIDFragmentInitializer, ObservedTypes) == 264, "Offset mismatch for UMassNetworkIDFragmentInitializer::ObservedTypes");
static_assert(offsetof(UMassNetworkIDFragmentInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassNetworkIDFragmentInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassNetwork.MassNetworkSubsystem
// Kind: Class; super: WorldSubsystem
class UMassNetworkSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> RegisteredProviders; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassNetworkSubsystem, RegisteredProviders) == 104, "Offset mismatch for UMassNetworkSubsystem::RegisteredProviders");

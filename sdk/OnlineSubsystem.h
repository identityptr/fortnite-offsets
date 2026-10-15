/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineSubsystem
 */
#pragma once
#include "Basic.h"

// /Script/OnlineSubsystem.NamedInterface
// Kind: ScriptStruct; super: none
struct FNamedInterface
{
public:
    FName InterfaceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* InterfaceObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNamedInterface, InterfaceName) == 0, "Offset mismatch for FNamedInterface::InterfaceName");
static_assert(offsetof(FNamedInterface, InterfaceObject) == 8, "Offset mismatch for FNamedInterface::InterfaceObject");

// /Script/OnlineSubsystem.NamedInterfaceDef
// Kind: ScriptStruct; super: none
struct FNamedInterfaceDef
{
public:
    FName InterfaceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString InterfaceClassName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0, "Offset mismatch for FNamedInterfaceDef::InterfaceName");
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 8, "Offset mismatch for FNamedInterfaceDef::InterfaceClassName");

// /Script/OnlineSubsystem.NamedInterfaces
// Kind: Class; super: Object
class UNamedInterfaces
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NamedInterfaces; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NamedInterfaceDefs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNamedInterfaces, NamedInterfaces) == 40, "Offset mismatch for UNamedInterfaces::NamedInterfaces");
static_assert(offsetof(UNamedInterfaces, NamedInterfaceDefs) == 56, "Offset mismatch for UNamedInterfaces::NamedInterfaceDefs");

// /Script/OnlineSubsystem.TurnBasedMatchInterface
// Kind: Class; super: Interface
class UTurnBasedMatchInterface
{
public:
    std::uint8_t Opaque[1];
};

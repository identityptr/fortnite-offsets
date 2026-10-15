/**
 * decamp dumper generated SDK
 * Package: /Script/ORS
 */
#pragma once
#include "Basic.h"

// /Script/ORS.ORSCheatManager
// Kind: Class; super: ChildCheatManager
class UORSCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UORSSubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* ComponentManager; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UORSSubsystem, ComponentManager) == 96, "Offset mismatch for UORSSubsystem::ComponentManager");

// /Script/ORS.ORSSubsystemShutdown
// Kind: Class; super: Object
class UORSSubsystemShutdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectA
// Kind: Class; super: ORSTestObjectBase
class UORSTestObjectA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectA_Child
// Kind: Class; super: ORSTestObjectA
class UORSTestObjectA_Child
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectB
// Kind: Class; super: ORSTestObjectBase
class UORSTestObjectB
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectBase
// Kind: Class; super: Object
class UORSTestObjectBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectC
// Kind: Class; super: ORSTestObjectBase
class UORSTestObjectC
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestObjectD
// Kind: Class; super: ORSTestObjectBase
class UORSTestObjectD
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestPS
// Kind: Class; super: Object
class UORSTestPS
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestPawn
// Kind: Class; super: Object
class UORSTestPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestPlayer
// Kind: Class; super: Object
class UORSTestPlayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestRoot
// Kind: Class; super: Object
class UORSTestRoot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestSubscriber
// Kind: Class; super: ORSTestObjectBase
class UORSTestSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ORS.ORSTestWorld
// Kind: Class; super: Object
class UORSTestWorld
{
public:
    std::uint8_t Opaque[1];
};

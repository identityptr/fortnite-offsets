/**
 * decamp dumper generated SDK
 * Package: /Script/InputCore
 */
#pragma once
#include "Basic.h"

// /Script/InputCore.Key
// Kind: ScriptStruct; super: none
struct FKey
{
public:
    FName KeyName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FKey, KeyName) == 0, "Offset mismatch for FKey::KeyName");

// /Script/InputCore.TouchId
// Kind: ScriptStruct; super: none
struct FTouchId
{
public:
    std::uint8_t DeviceID[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TouchIndex; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FTouchId, DeviceID) == 0, "Offset mismatch for FTouchId::DeviceID");
static_assert(offsetof(FTouchId, TouchIndex) == 4, "Offset mismatch for FTouchId::TouchIndex");

// /Script/InputCore.InputCoreTypes
// Kind: Class; super: Object
class UInputCoreTypes
{
public:
    std::uint8_t Opaque[1];
};

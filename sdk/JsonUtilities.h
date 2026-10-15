/**
 * decamp dumper generated SDK
 * Package: /Script/JsonUtilities
 */
#pragma once
#include "Basic.h"

// /Script/JsonUtilities.JsonObjectWrapper
// Kind: ScriptStruct; super: none
struct FJsonObjectWrapper
{
public:
    FString JsonString; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJsonObjectWrapper, JsonString) == 0, "Offset mismatch for FJsonObjectWrapper::JsonString");

// /Script/JsonUtilities.JsonUtilitiesDummyObject
// Kind: Class; super: Object
class UJsonUtilitiesDummyObject
{
public:
    std::uint8_t Opaque[1];
};

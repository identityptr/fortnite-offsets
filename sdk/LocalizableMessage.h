/**
 * decamp dumper generated SDK
 * Package: /Script/LocalizableMessage
 */
#pragma once
#include "Basic.h"

// /Script/LocalizableMessage.LocalizableMessage
// Kind: ScriptStruct; super: none
struct FLocalizableMessage
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DefaultText; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> Substitutions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLocalizableMessage, Key) == 0, "Offset mismatch for FLocalizableMessage::Key");
static_assert(offsetof(FLocalizableMessage, DefaultText) == 16, "Offset mismatch for FLocalizableMessage::DefaultText");
static_assert(offsetof(FLocalizableMessage, Substitutions) == 32, "Offset mismatch for FLocalizableMessage::Substitutions");

// /Script/LocalizableMessage.LocalizableMessageParameterEntry
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterEntry
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Value[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLocalizableMessageParameterEntry, Key) == 0, "Offset mismatch for FLocalizableMessageParameterEntry::Key");
static_assert(offsetof(FLocalizableMessageParameterEntry, Value) == 16, "Offset mismatch for FLocalizableMessageParameterEntry::Value");

// /Script/LocalizableMessage.LocalizableMessageParameterFloat
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterFloat
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLocalizableMessageParameterFloat, Value) == 0, "Offset mismatch for FLocalizableMessageParameterFloat::Value");

// /Script/LocalizableMessage.LocalizableMessageParameterInt
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterInt
{
public:
    std::int64_t Value; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FLocalizableMessageParameterInt, Value) == 0, "Offset mismatch for FLocalizableMessageParameterInt::Value");

// /Script/LocalizableMessage.LocalizableMessageParameterMessage
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterMessage
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLocalizableMessageParameterMessage, Value) == 0, "Offset mismatch for FLocalizableMessageParameterMessage::Value");

// /Script/LocalizableMessage.LocalizableMessageParameterString
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterString
{
public:
    FString Value; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLocalizableMessageParameterString, Value) == 0, "Offset mismatch for FLocalizableMessageParameterString::Value");

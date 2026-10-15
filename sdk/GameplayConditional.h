/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayConditional
 */
#pragma once
#include "Basic.h"

// /Script/GameplayConditional.GameplayConditional
// Kind: ScriptStruct; super: none
struct FGameplayConditional
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalAttribute
// Kind: ScriptStruct; super: none
struct FGameplayConditionalAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalAttributeDefinition
// Kind: ScriptStruct; super: none
struct FGameplayConditionalAttributeDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalCacheContainer
// Kind: ScriptStruct; super: none
struct FGameplayConditionalCacheContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalContextBase
// Kind: ScriptStruct; super: none
struct FGameplayConditionalContextBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Instigator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    double Delta; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGameplayConditionalContextBase, Instigator) == 8, "Offset mismatch for FGameplayConditionalContextBase::Instigator");
static_assert(offsetof(FGameplayConditionalContextBase, Delta) == 16, "Offset mismatch for FGameplayConditionalContextBase::Delta");

// /Script/GameplayConditional.GameplayConditionalDefinition
// Kind: ScriptStruct; super: none
struct FGameplayConditionalDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> AttributeDefinitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayConditionalDefinition, AttributeDefinitions) == 8, "Offset mismatch for FGameplayConditionalDefinition::AttributeDefinitions");

// /Script/GameplayConditional.GameplayConditionalHandleKey
// Kind: ScriptStruct; super: none
struct FGameplayConditionalHandleKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalListenerBase
// Kind: ScriptStruct; super: none
struct FGameplayConditionalListenerBase
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSet<void*> Participants; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FGameplayConditionalListenerBase, Participants) == 24, "Offset mismatch for FGameplayConditionalListenerBase::Participants");

// /Script/GameplayConditional.NativeGameplayConditionalListenerBase
// Kind: ScriptStruct; super: GameplayConditionalListenerBase
struct FNativeGameplayConditionalListenerBase
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSet<void*> Participants; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeGameplayConditionalListenerBase, Participants) == 24, "Offset mismatch for FNativeGameplayConditionalListenerBase::Participants");

// /Script/GameplayConditional.NativeGameplayConditionalListener_Instanced
// Kind: ScriptStruct; super: NativeGameplayConditionalListenerBase
struct FNativeGameplayConditionalListener_Instanced
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSet<void*> Participants; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeGameplayConditionalListener_Instanced, Participants) == 24, "Offset mismatch for FNativeGameplayConditionalListener_Instanced::Participants");

// /Script/GameplayConditional.VerseGameplayConditionalContextWrapper
// Kind: ScriptStruct; super: GameplayConditionalContextBase
struct FVerseGameplayConditionalContextWrapper
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Instigator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    double Delta; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVerseGameplayConditionalContextWrapper, Instigator) == 8, "Offset mismatch for FVerseGameplayConditionalContextWrapper::Instigator");
static_assert(offsetof(FVerseGameplayConditionalContextWrapper, Delta) == 16, "Offset mismatch for FVerseGameplayConditionalContextWrapper::Delta");

// /Script/GameplayConditional.VerseGameplayConditionalListenerBase
// Kind: ScriptStruct; super: GameplayConditionalListenerBase
struct FVerseGameplayConditionalListenerBase
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSet<void*> Participants; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseGameplayConditionalListenerBase, Participants) == 24, "Offset mismatch for FVerseGameplayConditionalListenerBase::Participants");

// /Script/GameplayConditional.VerseGameplayConditionalListener_Shared
// Kind: ScriptStruct; super: VerseGameplayConditionalListenerBase
struct FVerseGameplayConditionalListener_Shared
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSet<void*> Participants; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseGameplayConditionalListener_Shared, Participants) == 24, "Offset mismatch for FVerseGameplayConditionalListener_Shared::Participants");

// /Script/GameplayConditional.GameplayConditionalHandle
// Kind: Class; super: Object
class UGameplayConditionalHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.GameplayConditionalParticipant
// Kind: Class; super: Interface
class UGameplayConditionalParticipant
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.VerseGameplayConditional
// Kind: Class; super: Object
class UVerseGameplayConditional
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.VerseGameplayConditionalAttribute
// Kind: Class; super: Object
class UVerseGameplayConditionalAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.VerseGameplayConditionalContext
// Kind: Class; super: Object
class UVerseGameplayConditionalContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.VerseGameplayConditionalListenerHandle
// Kind: Class; super: Object
class UVerseGameplayConditionalListenerHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayConditional.VerseGameplayConditionalSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseGameplayConditionalSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t GameplayConditionalCache[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseGameplayConditionalSubsystem, GameplayConditionalCache) == 56, "Offset mismatch for UVerseGameplayConditionalSubsystem::GameplayConditionalCache");

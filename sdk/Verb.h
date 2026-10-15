/**
 * decamp dumper generated SDK
 * Package: /Script/Verb
 */
#pragma once
#include "Basic.h"

// /Script/Verb.NativeVerbFilterListenerBase
// Kind: ScriptStruct; super: NativeVerbListenerBase
struct FNativeVerbFilterListenerBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeVerbFilterListenerBase, Participants) == 8, "Offset mismatch for FNativeVerbFilterListenerBase::Participants");

// /Script/Verb.NativeVerbFilterListener_Instanced
// Kind: ScriptStruct; super: NativeVerbFilterListenerBase
struct FNativeVerbFilterListener_Instanced
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeVerbFilterListener_Instanced, Participants) == 8, "Offset mismatch for FNativeVerbFilterListener_Instanced::Participants");

// /Script/Verb.NativeVerbFilterListener_Shared
// Kind: ScriptStruct; super: NativeVerbFilterListenerBase
struct FNativeVerbFilterListener_Shared
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeVerbFilterListener_Shared, Participants) == 8, "Offset mismatch for FNativeVerbFilterListener_Shared::Participants");

// /Script/Verb.NativeVerbFilterListener_Weak
// Kind: ScriptStruct; super: NativeVerbFilterListenerBase
struct FNativeVerbFilterListener_Weak
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeVerbFilterListener_Weak, Participants) == 8, "Offset mismatch for FNativeVerbFilterListener_Weak::Participants");

// /Script/Verb.NativeVerbListenerBase
// Kind: ScriptStruct; super: VerbListenerBase
struct FNativeVerbListenerBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNativeVerbListenerBase, Participants) == 8, "Offset mismatch for FNativeVerbListenerBase::Participants");

// /Script/Verb.NativeVerbMessageTypeListener
// Kind: ScriptStruct; super: NativeVerbListenerBase
struct FNativeVerbMessageTypeListener
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* VerbMessageClass; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNativeVerbMessageTypeListener, VerbMessageClass) == 80, "Offset mismatch for FNativeVerbMessageTypeListener::VerbMessageClass");

// /Script/Verb.SceneEventVerbMessage
// Kind: ScriptStruct; super: VerbMessageBase
struct FSceneEventVerbMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbFilter
// Kind: ScriptStruct; super: none
struct FVerbFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbHandleKey
// Kind: ScriptStruct; super: none
struct FVerbHandleKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbListenerBase
// Kind: ScriptStruct; super: none
struct FVerbListenerBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerbListenerBase, Participants) == 8, "Offset mismatch for FVerbListenerBase::Participants");

// /Script/Verb.VerbListenerCacheContainer
// Kind: ScriptStruct; super: none
struct FVerbListenerCacheContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbMessageBase
// Kind: ScriptStruct; super: none
struct FVerbMessageBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbParticipantKey
// Kind: ScriptStruct; super: none
struct FVerbParticipantKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerseVerbFilterListenerBase
// Kind: ScriptStruct; super: VerseVerbListenerBase
struct FVerseVerbFilterListenerBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseVerbFilterListenerBase, Participants) == 8, "Offset mismatch for FVerseVerbFilterListenerBase::Participants");

// /Script/Verb.VerseVerbFilterListener_Shared
// Kind: ScriptStruct; super: VerseVerbFilterListenerBase
struct FVerseVerbFilterListener_Shared
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseVerbFilterListener_Shared, Participants) == 8, "Offset mismatch for FVerseVerbFilterListener_Shared::Participants");

// /Script/Verb.VerseVerbFilterListener_Weak
// Kind: ScriptStruct; super: VerseVerbFilterListenerBase
struct FVerseVerbFilterListener_Weak
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseVerbFilterListener_Weak, Participants) == 8, "Offset mismatch for FVerseVerbFilterListener_Weak::Participants");

// /Script/Verb.VerseVerbListenerBase
// Kind: ScriptStruct; super: VerbListenerBase
struct FVerseVerbListenerBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> Participants; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FVerseVerbListenerBase, Participants) == 8, "Offset mismatch for FVerseVerbListenerBase::Participants");

// /Script/Verb.VerseVerbMessageTypeListener
// Kind: ScriptStruct; super: VerseVerbListenerBase
struct FVerseVerbMessageTypeListener
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* VerbMessageClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FVerseVerbMessageTypeListener, VerbMessageClass) == 48, "Offset mismatch for FVerseVerbMessageTypeListener::VerbMessageClass");

// /Script/Verb.VerbListenerHandle
// Kind: Class; super: Object
class UVerbListenerHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbParticipant
// Kind: Class; super: Interface
class UVerbParticipant
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerbSubsystem
// Kind: Class; super: WorldSubsystem
class UVerbSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t VerbListenerCache[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerbSubsystem, VerbListenerCache) == 56, "Offset mismatch for UVerbSubsystem::VerbListenerCache");

// /Script/Verb.VerseVerbFilter
// Kind: Class; super: Object
class UVerseVerbFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Verb.VerseVerbListenerHandle
// Kind: Class; super: Object
class UVerseVerbListenerHandle
{
public:
    std::uint8_t Opaque[1];
};

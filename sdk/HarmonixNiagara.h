/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixNiagara
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockProviderContext
// Kind: ScriptStruct; super: none
struct FNiagaraDataInterfaceMusicClockProviderContext
{
public:
    void* MusicClockNDI; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraSystem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* AttachComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* World; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraDataInterfaceMusicClockProviderContext, MusicClockNDI) == 0, "Offset mismatch for FNiagaraDataInterfaceMusicClockProviderContext::MusicClockNDI");
static_assert(offsetof(FNiagaraDataInterfaceMusicClockProviderContext, NiagaraSystem) == 8, "Offset mismatch for FNiagaraDataInterfaceMusicClockProviderContext::NiagaraSystem");
static_assert(offsetof(FNiagaraDataInterfaceMusicClockProviderContext, AttachComponent) == 16, "Offset mismatch for FNiagaraDataInterfaceMusicClockProviderContext::AttachComponent");
static_assert(offsetof(FNiagaraDataInterfaceMusicClockProviderContext, World) == 24, "Offset mismatch for FNiagaraDataInterfaceMusicClockProviderContext::World");

// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClock
// Kind: Class; super: NiagaraDataInterfaceWithPerInstanceDataType
class UNiagaraDataInterfaceMusicClock
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t MusicClockActor[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    void* DefaultMusicClockProvider; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MusicClockProviderObjectOrClassBinding[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMusicClock, MusicClockActor) == 88, "Offset mismatch for UNiagaraDataInterfaceMusicClock::MusicClockActor");
static_assert(offsetof(UNiagaraDataInterfaceMusicClock, DefaultMusicClockProvider) == 120, "Offset mismatch for UNiagaraDataInterfaceMusicClock::DefaultMusicClockProvider");
static_assert(offsetof(UNiagaraDataInterfaceMusicClock, MusicClockProviderObjectOrClassBinding) == 128, "Offset mismatch for UNiagaraDataInterfaceMusicClock::MusicClockProviderObjectOrClassBinding");

// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockActorProvider
// Kind: Class; super: NiagaraDataInterfaceMusicClockProvider
class UNiagaraDataInterfaceMusicClockActorProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftObjectPtr<void> MusicClockActor; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMusicClockActorProvider, MusicClockActor) == 48, "Offset mismatch for UNiagaraDataInterfaceMusicClockActorProvider::MusicClockActor");

// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockAttachmentProvider
// Kind: Class; super: NiagaraDataInterfaceMusicClockProvider
class UNiagaraDataInterfaceMusicClockAttachmentProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockProvider
// Kind: Class; super: DataAsset
class UNiagaraDataInterfaceMusicClockProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockProviderInterface
// Kind: Class; super: Interface
class UNiagaraDataInterfaceMusicClockProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockSelector
// Kind: Class; super: DataAsset
class UNiagaraDataInterfaceMusicClockSelector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockSelectorInterface
// Kind: Class; super: Interface
class UNiagaraDataInterfaceMusicClockSelectorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixNiagara.NiagaraDataInterfaceMusicClockSubsystem
// Kind: Class; super: EngineSubsystem
class UNiagaraDataInterfaceMusicClockSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> MusicClockSelectorMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMusicClockSubsystem, MusicClockSelectorMap) == 48, "Offset mismatch for UNiagaraDataInterfaceMusicClockSubsystem::MusicClockSelectorMap");

// /Script/HarmonixNiagara.NiagaraDataInterfaceWithPerInstanceDataType
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceWithPerInstanceDataType
{
public:
    std::uint8_t Opaque[1];
};

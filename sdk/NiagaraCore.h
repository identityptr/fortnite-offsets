/**
 * decamp dumper generated SDK
 * Package: /Script/NiagaraCore
 */
#pragma once
#include "Basic.h"

// /Script/NiagaraCore.NiagaraCompileHash
// Kind: ScriptStruct; super: none
struct FNiagaraCompileHash
{
public:
    TArray<void*> DataHash; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0, "Offset mismatch for FNiagaraCompileHash::DataHash");

// /Script/NiagaraCore.NiagaraVariableCommonReference
// Kind: ScriptStruct; super: none
struct FNiagaraVariableCommonReference
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* UnderlyingType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraVariableCommonReference, Name) == 0, "Offset mismatch for FNiagaraVariableCommonReference::Name");
static_assert(offsetof(FNiagaraVariableCommonReference, UnderlyingType) == 8, "Offset mismatch for FNiagaraVariableCommonReference::UnderlyingType");

// /Script/NiagaraCore.NiagaraDataInterfaceBase
// Kind: Class; super: NiagaraNotifyOnChanged
class UNiagaraDataInterfaceBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NiagaraCore.NiagaraMergeable
// Kind: Class; super: NiagaraNotifyOnChanged
class UNiagaraMergeable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NiagaraCore.NiagaraNotifyOnChanged
// Kind: Class; super: Object
class UNiagaraNotifyOnChanged
{
public:
    std::uint8_t Opaque[1];
};

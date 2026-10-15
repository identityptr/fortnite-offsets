/**
 * decamp dumper generated SDK
 * Package: /Script/ProxyTable
 */
#pragma once
#include "Basic.h"

// /Script/ProxyTable.ChooserParameterProxyTableBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterProxyTableBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ProxyTable.LookupProxy
// Kind: ScriptStruct; super: ObjectChooserBase
struct FLookupProxy
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Proxy; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProxyTable[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLookupProxy, Proxy) == 8, "Offset mismatch for FLookupProxy::Proxy");
static_assert(offsetof(FLookupProxy, ProxyTable) == 16, "Offset mismatch for FLookupProxy::ProxyTable");

// /Script/ProxyTable.LookupProxyWithOverrideTable
// Kind: ScriptStruct; super: ObjectChooserBase
struct FLookupProxyWithOverrideTable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Proxy; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* OverrideProxyTable; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLookupProxyWithOverrideTable, Proxy) == 8, "Offset mismatch for FLookupProxyWithOverrideTable::Proxy");
static_assert(offsetof(FLookupProxyWithOverrideTable, OverrideProxyTable) == 16, "Offset mismatch for FLookupProxyWithOverrideTable::OverrideProxyTable");

// /Script/ProxyTable.ProxyEntry
// Kind: ScriptStruct; super: none
struct FProxyEntry
{
public:
    void* Proxy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName Key; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t ValueStruct[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> OutputStructData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProxyEntry, Proxy) == 0, "Offset mismatch for FProxyEntry::Proxy");
static_assert(offsetof(FProxyEntry, Key) == 8, "Offset mismatch for FProxyEntry::Key");
static_assert(offsetof(FProxyEntry, ValueStruct) == 16, "Offset mismatch for FProxyEntry::ValueStruct");
static_assert(offsetof(FProxyEntry, OutputStructData) == 32, "Offset mismatch for FProxyEntry::OutputStructData");

// /Script/ProxyTable.ProxyStructOutput
// Kind: ScriptStruct; super: none
struct FProxyStructOutput
{
public:
    std::uint8_t Binding[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProxyStructOutput, Binding) == 0, "Offset mismatch for FProxyStructOutput::Binding");
static_assert(offsetof(FProxyStructOutput, Value) == 48, "Offset mismatch for FProxyStructOutput::Value");

// /Script/ProxyTable.ProxyTableContextProperty
// Kind: ScriptStruct; super: ChooserParameterProxyTableBase
struct FProxyTableContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProxyTableContextProperty, Binding) == 8, "Offset mismatch for FProxyTableContextProperty::Binding");

// /Script/ProxyTable.RuntimeProxyValue
// Kind: ScriptStruct; super: none
struct FRuntimeProxyValue
{
public:
    void* ProxyAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> OutputStructData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRuntimeProxyValue, ProxyAsset) == 0, "Offset mismatch for FRuntimeProxyValue::ProxyAsset");
static_assert(offsetof(FRuntimeProxyValue, Value) == 8, "Offset mismatch for FRuntimeProxyValue::Value");
static_assert(offsetof(FRuntimeProxyValue, OutputStructData) == 24, "Offset mismatch for FRuntimeProxyValue::OutputStructData");

// /Script/ProxyTable.ChooserParameterProxyTable
// Kind: Class; super: Interface
class UChooserParameterProxyTable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ProxyTable.ProxyAsset
// Kind: Class; super: Object
class UProxyAsset
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Type; // 0x0048 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ResultType; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    TArray<void*> ContextData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Guid[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProxyAsset, Type) == 72, "Offset mismatch for UProxyAsset::Type");
static_assert(offsetof(UProxyAsset, ResultType) == 80, "Offset mismatch for UProxyAsset::ResultType");
static_assert(offsetof(UProxyAsset, ContextData) == 88, "Offset mismatch for UProxyAsset::ContextData");
static_assert(offsetof(UProxyAsset, Guid) == 104, "Offset mismatch for UProxyAsset::Guid");

// /Script/ProxyTable.ProxyTable
// Kind: Class; super: Object
class UProxyTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Keys; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeValues; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProxyTable, Keys) == 40, "Offset mismatch for UProxyTable::Keys");
static_assert(offsetof(UProxyTable, RuntimeValues) == 56, "Offset mismatch for UProxyTable::RuntimeValues");

// /Script/ProxyTable.ProxyTableFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UProxyTableFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};

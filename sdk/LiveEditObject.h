/**
 * decamp dumper generated SDK
 * Package: /Script/LiveEditObject
 */
#pragma once
#include "Basic.h"

// /Script/LiveEditObject.LiveEditObjectTestStruct
// Kind: ScriptStruct; super: none
struct FLiveEditObjectTestStruct
{
public:
    std::uint8_t bool_; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::int8_t int8; // 0x0001 (Size: 0x1, Type: Int8Property)
    std::int16_t int16; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int32_t int32; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int64_t int64; // 0x0008 (Size: 0x8, Type: Int64Property)
    float float_; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    double Double; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    FString String; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Text[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    FName Name; // 0x0040 (Size: 0x8, Type: NameProperty)
    void* RawObjectPtr; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* ObjectPtr; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftObjectPath[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Struct[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::int32_t FixedArray; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0084
    TArray<void*> DynamicArray; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Set[0x10]; // 0x00A0 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> Map; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLiveEditObjectTestStruct, bool_) == 0, "Offset mismatch for FLiveEditObjectTestStruct::bool_");
static_assert(offsetof(FLiveEditObjectTestStruct, int8) == 1, "Offset mismatch for FLiveEditObjectTestStruct::int8");
static_assert(offsetof(FLiveEditObjectTestStruct, int16) == 2, "Offset mismatch for FLiveEditObjectTestStruct::int16");
static_assert(offsetof(FLiveEditObjectTestStruct, int32) == 4, "Offset mismatch for FLiveEditObjectTestStruct::int32");
static_assert(offsetof(FLiveEditObjectTestStruct, int64) == 8, "Offset mismatch for FLiveEditObjectTestStruct::int64");
static_assert(offsetof(FLiveEditObjectTestStruct, float_) == 16, "Offset mismatch for FLiveEditObjectTestStruct::float_");
static_assert(offsetof(FLiveEditObjectTestStruct, Double) == 24, "Offset mismatch for FLiveEditObjectTestStruct::Double");
static_assert(offsetof(FLiveEditObjectTestStruct, String) == 32, "Offset mismatch for FLiveEditObjectTestStruct::String");
static_assert(offsetof(FLiveEditObjectTestStruct, Text) == 48, "Offset mismatch for FLiveEditObjectTestStruct::Text");
static_assert(offsetof(FLiveEditObjectTestStruct, Name) == 64, "Offset mismatch for FLiveEditObjectTestStruct::Name");
static_assert(offsetof(FLiveEditObjectTestStruct, RawObjectPtr) == 72, "Offset mismatch for FLiveEditObjectTestStruct::RawObjectPtr");
static_assert(offsetof(FLiveEditObjectTestStruct, ObjectPtr) == 80, "Offset mismatch for FLiveEditObjectTestStruct::ObjectPtr");
static_assert(offsetof(FLiveEditObjectTestStruct, SoftObjectPath) == 88, "Offset mismatch for FLiveEditObjectTestStruct::SoftObjectPath");
static_assert(offsetof(FLiveEditObjectTestStruct, Struct) == 112, "Offset mismatch for FLiveEditObjectTestStruct::Struct");
static_assert(offsetof(FLiveEditObjectTestStruct, FixedArray) == 128, "Offset mismatch for FLiveEditObjectTestStruct::FixedArray");
static_assert(offsetof(FLiveEditObjectTestStruct, DynamicArray) == 144, "Offset mismatch for FLiveEditObjectTestStruct::DynamicArray");
static_assert(offsetof(FLiveEditObjectTestStruct, Set) == 160, "Offset mismatch for FLiveEditObjectTestStruct::Set");
static_assert(offsetof(FLiveEditObjectTestStruct, Map) == 176, "Offset mismatch for FLiveEditObjectTestStruct::Map");

// /Script/LiveEditObject.LiveEditActorUtils
// Kind: Class; super: BlueprintFunctionLibrary
class ULiveEditActorUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveEditObject.LiveEditEntityUtils
// Kind: Class; super: BlueprintFunctionLibrary
class ULiveEditEntityUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveEditObject.LiveEditLargeNetworkMessageChannel
// Kind: Class; super: LiveEditNetworkStreamChannel
class ULiveEditLargeNetworkMessageChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveEditLargeNetworkMessageChannel, Connection) == 40, "Offset mismatch for ULiveEditLargeNetworkMessageChannel::Connection");

// /Script/LiveEditObject.LiveEditNetworkStreamChannel
// Kind: Class; super: Channel
class ULiveEditNetworkStreamChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveEditNetworkStreamChannel, Connection) == 40, "Offset mismatch for ULiveEditNetworkStreamChannel::Connection");

// /Script/LiveEditObject.LiveEditObjectChannel
// Kind: Class; super: LiveEditLargeNetworkMessageChannel
class ULiveEditObjectChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveEditObjectChannel, Connection) == 40, "Offset mismatch for ULiveEditObjectChannel::Connection");

// /Script/LiveEditObject.LiveEditObjectConnection
// Kind: Class; super: Object
class ULiveEditObjectConnection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveEditObject.LiveEditObjectDataStream
// Kind: Class; super: ChunkedDataStream
class ULiveEditObjectDataStream
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* PackageMap; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveEditObjectDataStream, PackageMap) == 88, "Offset mismatch for ULiveEditObjectDataStream::PackageMap");

// /Script/LiveEditObject.LiveEditObjectInterface
// Kind: Class; super: Interface
class ULiveEditObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveEditObject.LiveEditObjectSubsystem
// Kind: Class; super: EngineSubsystem
class ULiveEditObjectSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t MaxBytesQueuedForReplication; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPackageMapBunchesToDelayTickFor; // 0x003C (Size: 0x4, Type: IntProperty)
    TArray<void*> NetDriverStates; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiveEditObjectSubsystem, MaxBytesQueuedForReplication) == 56, "Offset mismatch for ULiveEditObjectSubsystem::MaxBytesQueuedForReplication");
static_assert(offsetof(ULiveEditObjectSubsystem, NumPackageMapBunchesToDelayTickFor) == 60, "Offset mismatch for ULiveEditObjectSubsystem::NumPackageMapBunchesToDelayTickFor");
static_assert(offsetof(ULiveEditObjectSubsystem, NetDriverStates) == 64, "Offset mismatch for ULiveEditObjectSubsystem::NetDriverStates");

// /Script/LiveEditObject.LiveEditObjectSubsystemState
// Kind: Class; super: Object
class ULiveEditObjectSubsystemState
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Connections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiveEditObjectSubsystemState, Connections) == 56, "Offset mismatch for ULiveEditObjectSubsystemState::Connections");

// /Script/LiveEditObject.LiveEditObjectTestObject
// Kind: Class; super: Object
class ULiveEditObjectTestObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t int32; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x002C
    std::uint8_t StructProperty[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveEditObjectTestObject, int32) == 40, "Offset mismatch for ULiveEditObjectTestObject::int32");
static_assert(offsetof(ULiveEditObjectTestObject, StructProperty) == 56, "Offset mismatch for ULiveEditObjectTestObject::StructProperty");

// /Script/LiveEditObject.LiveEditObjectUtils
// Kind: Class; super: BlueprintFunctionLibrary
class ULiveEditObjectUtils
{
public:
    std::uint8_t Opaque[1];
};

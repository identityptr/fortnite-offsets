/**
 * decamp dumper generated SDK
 * Package: /Script/ComputeDataInterface
 */
#pragma once
#include "Basic.h"

// /Script/ComputeDataInterface.BufferDataProvider
// Kind: Class; super: ComputeDataProvider
class UBufferDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValueType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t ElementCount; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t bClearBeforeUse; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBufferDataProvider, ValueType) == 40, "Offset mismatch for UBufferDataProvider::ValueType");
static_assert(offsetof(UBufferDataProvider, ElementCount) == 44, "Offset mismatch for UBufferDataProvider::ElementCount");
static_assert(offsetof(UBufferDataProvider, bClearBeforeUse) == 48, "Offset mismatch for UBufferDataProvider::bClearBeforeUse");

// /Script/ComputeDataInterface.ComputeDataInterfaceBuffer
// Kind: Class; super: ComputeDataInterface
class UComputeDataInterfaceBuffer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValueType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowReadWrite; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UComputeDataInterfaceBuffer, ValueType) == 40, "Offset mismatch for UComputeDataInterfaceBuffer::ValueType");
static_assert(offsetof(UComputeDataInterfaceBuffer, bAllowReadWrite) == 41, "Offset mismatch for UComputeDataInterfaceBuffer::bAllowReadWrite");

// /Script/ComputeDataInterface.ComputeDataInterfaceDispatch
// Kind: Class; super: ComputeDataInterface
class UComputeDataInterfaceDispatch
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ComputeDataInterface.DispatchDataProvider
// Kind: Class; super: ComputeDataProvider
class UDispatchDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ThreadCount[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDispatchDataProvider, ThreadCount) == 40, "Offset mismatch for UDispatchDataProvider::ThreadCount");

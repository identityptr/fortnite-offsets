/**
 * decamp dumper generated SDK
 * Package: /Script/FortControlRigUnits
 */
#pragma once
#include "Basic.h"

// /Script/FortControlRigUnits.FortRigUnit_DeltaRef
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FFortRigUnit_DeltaRef
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bone[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t base[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DeltaComponentType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float InputMin; // 0x001C (Size: 0x4, Type: FloatProperty)
    float InputMax; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float OutputMin; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float OutputMax; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x002C
    std::uint8_t TwistAxis[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float AlphaOutput; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float RawOutput; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoneCache[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaseCache[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRigUnit_DeltaRef, bone) == 8, "Offset mismatch for FFortRigUnit_DeltaRef::bone");
static_assert(offsetof(FFortRigUnit_DeltaRef, base) == 16, "Offset mismatch for FFortRigUnit_DeltaRef::base");
static_assert(offsetof(FFortRigUnit_DeltaRef, DeltaComponentType) == 24, "Offset mismatch for FFortRigUnit_DeltaRef::DeltaComponentType");
static_assert(offsetof(FFortRigUnit_DeltaRef, InputMin) == 28, "Offset mismatch for FFortRigUnit_DeltaRef::InputMin");
static_assert(offsetof(FFortRigUnit_DeltaRef, InputMax) == 32, "Offset mismatch for FFortRigUnit_DeltaRef::InputMax");
static_assert(offsetof(FFortRigUnit_DeltaRef, OutputMin) == 36, "Offset mismatch for FFortRigUnit_DeltaRef::OutputMin");
static_assert(offsetof(FFortRigUnit_DeltaRef, OutputMax) == 40, "Offset mismatch for FFortRigUnit_DeltaRef::OutputMax");
static_assert(offsetof(FFortRigUnit_DeltaRef, TwistAxis) == 48, "Offset mismatch for FFortRigUnit_DeltaRef::TwistAxis");
static_assert(offsetof(FFortRigUnit_DeltaRef, AlphaOutput) == 72, "Offset mismatch for FFortRigUnit_DeltaRef::AlphaOutput");
static_assert(offsetof(FFortRigUnit_DeltaRef, RawOutput) == 76, "Offset mismatch for FFortRigUnit_DeltaRef::RawOutput");
static_assert(offsetof(FFortRigUnit_DeltaRef, BoneCache) == 80, "Offset mismatch for FFortRigUnit_DeltaRef::BoneCache");
static_assert(offsetof(FFortRigUnit_DeltaRef, BaseCache) == 104, "Offset mismatch for FFortRigUnit_DeltaRef::BaseCache");

// /Script/FortControlRigUnits.FortRigUnit_SphereTraceByChannel
// Kind: ScriptStruct; super: RigUnit
struct FFortRigUnit_SphereTraceByChannel
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Radius; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTraceComplex; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    TArray<void*> IgnoreActorTags; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IgnoreGameplayTags[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t TraceType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHit; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitialOverlap; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x007B
    std::uint8_t HitLocation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, Start) == 8, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::Start");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, End) == 32, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::End");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, TraceChannel) == 56, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::TraceChannel");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, Radius) == 60, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::Radius");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, bTraceComplex) == 64, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::bTraceComplex");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, IgnoreActorTags) == 72, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::IgnoreActorTags");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, IgnoreGameplayTags) == 88, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::IgnoreGameplayTags");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, TraceType) == 120, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::TraceType");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, bHit) == 121, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::bHit");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, bInitialOverlap) == 122, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::bInitialOverlap");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, HitLocation) == 128, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::HitLocation");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, HitNormal) == 152, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::HitNormal");
static_assert(offsetof(FFortRigUnit_SphereTraceByChannel, WorkData) == 176, "Offset mismatch for FFortRigUnit_SphereTraceByChannel::WorkData");

// /Script/FortControlRigUnits.FortRigUnit_SphereTrace_WorkData
// Kind: ScriptStruct; super: none
struct FFortRigUnit_SphereTrace_WorkData
{
public:
    std::uint32_t Hash; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bHit; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitialOverlap; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t HitLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRigUnit_SphereTrace_WorkData, Hash) == 0, "Offset mismatch for FFortRigUnit_SphereTrace_WorkData::Hash");
static_assert(offsetof(FFortRigUnit_SphereTrace_WorkData, bHit) == 4, "Offset mismatch for FFortRigUnit_SphereTrace_WorkData::bHit");
static_assert(offsetof(FFortRigUnit_SphereTrace_WorkData, bInitialOverlap) == 5, "Offset mismatch for FFortRigUnit_SphereTrace_WorkData::bInitialOverlap");
static_assert(offsetof(FFortRigUnit_SphereTrace_WorkData, HitLocation) == 8, "Offset mismatch for FFortRigUnit_SphereTrace_WorkData::HitLocation");
static_assert(offsetof(FFortRigUnit_SphereTrace_WorkData, HitNormal) == 32, "Offset mismatch for FFortRigUnit_SphereTrace_WorkData::HitNormal");

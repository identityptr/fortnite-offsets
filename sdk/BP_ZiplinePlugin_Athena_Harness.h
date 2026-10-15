/**
 * decamp dumper generated SDK
 * Package: /Zipline/Meshes/BP_ZiplinePlugin_Athena_Harness
 */
#pragma once
#include "Basic.h"

// /Zipline/Meshes/BP_ZiplinePlugin_Athena_Harness.BP_ZiplinePlugin_Athena_Harness_C
// Kind: BlueprintGeneratedClass; super: FortZiplineMotorHarness
class UBP_ZiplinePlugin_Athena_Harness_C
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0288 (Size: 0x8, Type: StructProperty)
    void* P_Zipline_AttachedToPlayer; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* SM_Zipline_Magnet; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* Arrow; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* P_Zipline_Pulley_SpeedLines; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* SM_Zipline_Motor; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* Scene; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* SpawnFX; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* DestroyFX; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* CollideDestroyVFX; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* AttachSound; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* DetachSound; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    double ZiplineChimeVisualUpdate; // 0x02E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02F0
    std::uint8_t ZiplineDirection[0x18]; // 0x02F8 (Size: 0x18, Type: StructProperty)
    void* ZiplineSpline; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    double SplineRotationUpdateSeconds; // 0x0318 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MotorUpdateTimer[0x8]; // 0x0320 (Size: 0x8, Type: StructProperty)
    std::uint8_t debugOutput; // 0x0328 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsReversingMomentum; // 0x0329 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTravelingUphill; // 0x032A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTravelingDownhill; // 0x032B (Size: 0x1, Type: BoolProperty)
    std::uint8_t GCNTag_Travel[0x4]; // 0x032C (Size: 0x4, Type: StructProperty)
    void* TravelSound; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GCNTag_HighSpeed[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCNTag_ZiplineBraking[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t bLoopingDownhillGCN; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0341
    std::uint8_t DownhillTravelGE[0x14]; // 0x0344 (Size: 0x14, Type: StructProperty)
    std::uint8_t UseMeshAttachment; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1F]; // 0x0359
    void* DynamicZiplineSpline; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0380
    float SpawnTime; // 0x0388 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, UberGraphFrame) == 648, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::UberGraphFrame");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, P_Zipline_AttachedToPlayer) == 656, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::P_Zipline_AttachedToPlayer");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, SM_Zipline_Magnet) == 664, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::SM_Zipline_Magnet");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, Arrow) == 672, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::Arrow");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, P_Zipline_Pulley_SpeedLines) == 680, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::P_Zipline_Pulley_SpeedLines");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, SM_Zipline_Motor) == 688, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::SM_Zipline_Motor");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, Scene) == 696, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::Scene");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, SpawnFX) == 704, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::SpawnFX");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, DestroyFX) == 712, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::DestroyFX");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, CollideDestroyVFX) == 720, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::CollideDestroyVFX");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, AttachSound) == 728, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::AttachSound");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, DetachSound) == 736, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::DetachSound");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, ZiplineChimeVisualUpdate) == 744, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::ZiplineChimeVisualUpdate");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, ZiplineDirection) == 760, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::ZiplineDirection");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, ZiplineSpline) == 784, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::ZiplineSpline");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, SplineRotationUpdateSeconds) == 792, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::SplineRotationUpdateSeconds");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, MotorUpdateTimer) == 800, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::MotorUpdateTimer");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, debugOutput) == 808, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::debugOutput");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, IsReversingMomentum) == 809, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::IsReversingMomentum");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, bIsTravelingUphill) == 810, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::bIsTravelingUphill");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, bIsTravelingDownhill) == 811, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::bIsTravelingDownhill");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, GCNTag_Travel) == 812, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::GCNTag_Travel");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, TravelSound) == 816, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::TravelSound");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, GCNTag_HighSpeed) == 824, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::GCNTag_HighSpeed");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, GCNTag_ZiplineBraking) == 828, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::GCNTag_ZiplineBraking");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, bLoopingDownhillGCN) == 832, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::bLoopingDownhillGCN");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, DownhillTravelGE) == 836, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::DownhillTravelGE");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, UseMeshAttachment) == 856, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::UseMeshAttachment");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, DynamicZiplineSpline) == 888, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::DynamicZiplineSpline");
static_assert(offsetof(UBP_ZiplinePlugin_Athena_Harness_C, SpawnTime) == 904, "Offset mismatch for UBP_ZiplinePlugin_Athena_Harness_C::SpawnTime");

/**
 * decamp dumper generated SDK
 * Package: /Game/Blueprints/Camera/Original/Default3PCamera
 */
#pragma once
#include "Basic.h"

// /Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C
// Kind: BlueprintGeneratedClass; super: Fort3PCam_Default
class UDefault3PCamera_C
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ViewOffsets[0x48]; // 0x0078 (Size: 0x48, Type: StructProperty)
    float FOV; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t SafeLocationOffset[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDoPredictiveAvoidance; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    // 0x00E0 BoolProperty bPreventPenetration (shared storage)
    // 0x00E0 BoolProperty bValidateSafeLoc (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    TArray<void*> PenetrationAvoidanceFeelers; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float PenetrationBlendInTime; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendOutTime; // 0x00FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotLocInterpSpeed[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    float PivotRotInterpSpeed; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float FOVInterpSpeed; // 0x011C (Size: 0x4, Type: FloatProperty)
    float ViewOffsetInterpSpeed; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float SafeLocationInterpSpeed; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastActualViewOffset[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastIdealViewOffset[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastSafeLocationLocal[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastSafeLocation[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    float LastSafeLocBlockedPct; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float LastPenetrationBlockedPct; // 0x018C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastActualPivotLoc[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastActualPivotRot[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastIdealPivotLoc[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastIdealPivotRot[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDefault3PCamera_C, ViewOffsets) == 120, "Offset mismatch for UDefault3PCamera_C::ViewOffsets");
static_assert(offsetof(UDefault3PCamera_C, FOV) == 192, "Offset mismatch for UDefault3PCamera_C::FOV");
static_assert(offsetof(UDefault3PCamera_C, SafeLocationOffset) == 200, "Offset mismatch for UDefault3PCamera_C::SafeLocationOffset");
static_assert(offsetof(UDefault3PCamera_C, bDoPredictiveAvoidance) == 224, "Offset mismatch for UDefault3PCamera_C::bDoPredictiveAvoidance");
static_assert(offsetof(UDefault3PCamera_C, PenetrationAvoidanceFeelers) == 232, "Offset mismatch for UDefault3PCamera_C::PenetrationAvoidanceFeelers");
static_assert(offsetof(UDefault3PCamera_C, PenetrationBlendInTime) == 248, "Offset mismatch for UDefault3PCamera_C::PenetrationBlendInTime");
static_assert(offsetof(UDefault3PCamera_C, PenetrationBlendOutTime) == 252, "Offset mismatch for UDefault3PCamera_C::PenetrationBlendOutTime");
static_assert(offsetof(UDefault3PCamera_C, PivotLocInterpSpeed) == 256, "Offset mismatch for UDefault3PCamera_C::PivotLocInterpSpeed");
static_assert(offsetof(UDefault3PCamera_C, PivotRotInterpSpeed) == 280, "Offset mismatch for UDefault3PCamera_C::PivotRotInterpSpeed");
static_assert(offsetof(UDefault3PCamera_C, FOVInterpSpeed) == 284, "Offset mismatch for UDefault3PCamera_C::FOVInterpSpeed");
static_assert(offsetof(UDefault3PCamera_C, ViewOffsetInterpSpeed) == 288, "Offset mismatch for UDefault3PCamera_C::ViewOffsetInterpSpeed");
static_assert(offsetof(UDefault3PCamera_C, SafeLocationInterpSpeed) == 292, "Offset mismatch for UDefault3PCamera_C::SafeLocationInterpSpeed");
static_assert(offsetof(UDefault3PCamera_C, LastActualViewOffset) == 296, "Offset mismatch for UDefault3PCamera_C::LastActualViewOffset");
static_assert(offsetof(UDefault3PCamera_C, LastIdealViewOffset) == 320, "Offset mismatch for UDefault3PCamera_C::LastIdealViewOffset");
static_assert(offsetof(UDefault3PCamera_C, LastSafeLocationLocal) == 344, "Offset mismatch for UDefault3PCamera_C::LastSafeLocationLocal");
static_assert(offsetof(UDefault3PCamera_C, LastSafeLocation) == 368, "Offset mismatch for UDefault3PCamera_C::LastSafeLocation");
static_assert(offsetof(UDefault3PCamera_C, LastSafeLocBlockedPct) == 392, "Offset mismatch for UDefault3PCamera_C::LastSafeLocBlockedPct");
static_assert(offsetof(UDefault3PCamera_C, LastPenetrationBlockedPct) == 396, "Offset mismatch for UDefault3PCamera_C::LastPenetrationBlockedPct");
static_assert(offsetof(UDefault3PCamera_C, LastActualPivotLoc) == 400, "Offset mismatch for UDefault3PCamera_C::LastActualPivotLoc");
static_assert(offsetof(UDefault3PCamera_C, LastActualPivotRot) == 424, "Offset mismatch for UDefault3PCamera_C::LastActualPivotRot");
static_assert(offsetof(UDefault3PCamera_C, LastIdealPivotLoc) == 448, "Offset mismatch for UDefault3PCamera_C::LastIdealPivotLoc");
static_assert(offsetof(UDefault3PCamera_C, LastIdealPivotRot) == 472, "Offset mismatch for UDefault3PCamera_C::LastIdealPivotRot");

/**
 * decamp dumper generated SDK
 * Package: /Script/UnstableLiquidGunRuntime
 */
#pragma once
#include "Basic.h"

// /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
// Kind: ScriptStruct; super: none
struct FLiquidRibbonSplineDetachment
{
public:
    std::int32_t FirstRibbonID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SecondRibbonID; // 0x0004 (Size: 0x4, Type: IntProperty)
    float TimeDetached; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Segment[0x78]; // 0x0010 (Size: 0x78, Type: StructProperty)
    std::uint8_t SegmentStartPoint[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t SegmentEndPoint[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiquidRibbonSplineDetachment, FirstRibbonID) == 0, "Offset mismatch for FLiquidRibbonSplineDetachment::FirstRibbonID");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SecondRibbonID) == 4, "Offset mismatch for FLiquidRibbonSplineDetachment::SecondRibbonID");
static_assert(offsetof(FLiquidRibbonSplineDetachment, TimeDetached) == 8, "Offset mismatch for FLiquidRibbonSplineDetachment::TimeDetached");
static_assert(offsetof(FLiquidRibbonSplineDetachment, Segment) == 16, "Offset mismatch for FLiquidRibbonSplineDetachment::Segment");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SegmentStartPoint) == 136, "Offset mismatch for FLiquidRibbonSplineDetachment::SegmentStartPoint");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SegmentEndPoint) == 160, "Offset mismatch for FLiquidRibbonSplineDetachment::SegmentEndPoint");

// /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
// Kind: ScriptStruct; super: none
struct FLiquidRibbonSplineSegment
{
public:
    std::uint8_t A[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t B[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t C[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t D[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float DirectLength; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasDetachment; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0065
    TArray<void*> PointPositions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiquidRibbonSplineSegment, A) == 0, "Offset mismatch for FLiquidRibbonSplineSegment::A");
static_assert(offsetof(FLiquidRibbonSplineSegment, B) == 24, "Offset mismatch for FLiquidRibbonSplineSegment::B");
static_assert(offsetof(FLiquidRibbonSplineSegment, C) == 48, "Offset mismatch for FLiquidRibbonSplineSegment::C");
static_assert(offsetof(FLiquidRibbonSplineSegment, D) == 72, "Offset mismatch for FLiquidRibbonSplineSegment::D");
static_assert(offsetof(FLiquidRibbonSplineSegment, DirectLength) == 96, "Offset mismatch for FLiquidRibbonSplineSegment::DirectLength");
static_assert(offsetof(FLiquidRibbonSplineSegment, bHasDetachment) == 100, "Offset mismatch for FLiquidRibbonSplineSegment::bHasDetachment");
static_assert(offsetof(FLiquidRibbonSplineSegment, PointPositions) == 104, "Offset mismatch for FLiquidRibbonSplineSegment::PointPositions");

// /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile
// Kind: Class; super: FortProjectileBase
class UFortLiquidGunProjectile
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    void* AttachComponent; // 0x0AD8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachOffset[0x18]; // 0x0AE0 (Size: 0x18, Type: StructProperty)
    std::int32_t ProjectileIndex; // 0x0AF8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0AFC
    std::uint8_t StopNormal[0x18]; // 0x0B00 (Size: 0x18, Type: StructProperty)
    void* RibbonManager; // 0x0B18 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MinDistBetweenProjectilesForSplineCollisionTest[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistBetweenInLineProjectilesForSplineCollisionTest[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinProjectileVelocityAngleToBeInLine[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t BroadSphereOverlapTraceChannel; // 0x0B98 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B99
    std::uint8_t CapsuleTraceProfileName[0x4]; // 0x0B9C (Size: 0x4, Type: NameProperty)
    std::uint8_t bCapsuleTraceComplex; // 0x0BA0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0BA1
    std::uint8_t RandomDetachmentAngleFirstHalf[0x18]; // 0x0BA8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomDetachmentAngleSecondHalf[0x18]; // 0x0BC0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawDebugCollision; // 0x0BD8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawDebugCollisionOnlyCapsuleTraceHits; // 0x0BD9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DetachmentReason; // 0x0BDA (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortLiquidGunProjectile, AttachComponent) == 2776, "Offset mismatch for UFortLiquidGunProjectile::AttachComponent");
static_assert(offsetof(UFortLiquidGunProjectile, AttachOffset) == 2784, "Offset mismatch for UFortLiquidGunProjectile::AttachOffset");
static_assert(offsetof(UFortLiquidGunProjectile, ProjectileIndex) == 2808, "Offset mismatch for UFortLiquidGunProjectile::ProjectileIndex");
static_assert(offsetof(UFortLiquidGunProjectile, StopNormal) == 2816, "Offset mismatch for UFortLiquidGunProjectile::StopNormal");
static_assert(offsetof(UFortLiquidGunProjectile, RibbonManager) == 2840, "Offset mismatch for UFortLiquidGunProjectile::RibbonManager");
static_assert(offsetof(UFortLiquidGunProjectile, MinDistBetweenProjectilesForSplineCollisionTest) == 2848, "Offset mismatch for UFortLiquidGunProjectile::MinDistBetweenProjectilesForSplineCollisionTest");
static_assert(offsetof(UFortLiquidGunProjectile, MinDistBetweenInLineProjectilesForSplineCollisionTest) == 2888, "Offset mismatch for UFortLiquidGunProjectile::MinDistBetweenInLineProjectilesForSplineCollisionTest");
static_assert(offsetof(UFortLiquidGunProjectile, MinProjectileVelocityAngleToBeInLine) == 2928, "Offset mismatch for UFortLiquidGunProjectile::MinProjectileVelocityAngleToBeInLine");
static_assert(offsetof(UFortLiquidGunProjectile, BroadSphereOverlapTraceChannel) == 2968, "Offset mismatch for UFortLiquidGunProjectile::BroadSphereOverlapTraceChannel");
static_assert(offsetof(UFortLiquidGunProjectile, CapsuleTraceProfileName) == 2972, "Offset mismatch for UFortLiquidGunProjectile::CapsuleTraceProfileName");
static_assert(offsetof(UFortLiquidGunProjectile, bCapsuleTraceComplex) == 2976, "Offset mismatch for UFortLiquidGunProjectile::bCapsuleTraceComplex");
static_assert(offsetof(UFortLiquidGunProjectile, RandomDetachmentAngleFirstHalf) == 2984, "Offset mismatch for UFortLiquidGunProjectile::RandomDetachmentAngleFirstHalf");
static_assert(offsetof(UFortLiquidGunProjectile, RandomDetachmentAngleSecondHalf) == 3008, "Offset mismatch for UFortLiquidGunProjectile::RandomDetachmentAngleSecondHalf");
static_assert(offsetof(UFortLiquidGunProjectile, bDrawDebugCollision) == 3032, "Offset mismatch for UFortLiquidGunProjectile::bDrawDebugCollision");
static_assert(offsetof(UFortLiquidGunProjectile, bDrawDebugCollisionOnlyCapsuleTraceHits) == 3033, "Offset mismatch for UFortLiquidGunProjectile::bDrawDebugCollisionOnlyCapsuleTraceHits");
static_assert(offsetof(UFortLiquidGunProjectile, DetachmentReason) == 3034, "Offset mismatch for UFortLiquidGunProjectile::DetachmentReason");

// /Script/UnstableLiquidGunRuntime.LiquidRibbonManager
// Kind: Class; super: Actor
class ULiquidRibbonManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t PointsPerSegment; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    std::uint8_t MaxSegmentLengthBeforeBreak[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    float SplineCurveTension; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float MinPointSize; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float MaxPointSize; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPointsAtMinPointSize; // 0x02AC (Size: 0x4, Type: IntProperty)
    std::int32_t NumPointsAtMaxPointSize; // 0x02B0 (Size: 0x4, Type: IntProperty)
    float SplineLengthForSizeCalculation; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPointsToTaperDownSplineEndSize; // 0x02B8 (Size: 0x4, Type: IntProperty)
    float MinSplineEndTaperSize; // 0x02BC (Size: 0x4, Type: FloatProperty)
    float TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    float TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float MinPointSizePercentForFlashIntensity; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float MaxPointSizePercentForFlashIntensity; // 0x02CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PositionsNiagaraParamName[0x4]; // 0x02D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RibbonIDsNiagaraParamName[0x4]; // 0x02D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RibbonVisibilitiesNiagaraParamName[0x4]; // 0x02D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FlashIntensitiesNiagaraParamName[0x4]; // 0x02DC (Size: 0x4, Type: NameProperty)
    FName RibbonSizesNiagaraParamName; // 0x02E0 (Size: 0x8, Type: NameProperty)
    std::uint8_t CalculateBaseCurlOffset_MaxSegmentLength[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateBaseCurlOffset_MaxTimeSinceDetachment[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateBaseCurlOffset_TowardPerpendicularMult[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateBaseCurlOffset_TowardEndMult[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateBaseCurlOffset_TowardRandomMult[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    void* TimeSinceDetachmentCurlCurve; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TimeSinceDetachmentCurlCurve_MaxTime[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    float CurlingMaxClosenessToBreakage; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03E4
    TArray<void*> SegmentLengths; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Detachments; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SplineSegments; // 0x0408 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Projectiles_Native; // 0x0418 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiquidRibbonManager, PointsPerSegment) == 624, "Offset mismatch for ULiquidRibbonManager::PointsPerSegment");
static_assert(offsetof(ULiquidRibbonManager, MaxSegmentLengthBeforeBreak) == 632, "Offset mismatch for ULiquidRibbonManager::MaxSegmentLengthBeforeBreak");
static_assert(offsetof(ULiquidRibbonManager, SplineCurveTension) == 672, "Offset mismatch for ULiquidRibbonManager::SplineCurveTension");
static_assert(offsetof(ULiquidRibbonManager, MinPointSize) == 676, "Offset mismatch for ULiquidRibbonManager::MinPointSize");
static_assert(offsetof(ULiquidRibbonManager, MaxPointSize) == 680, "Offset mismatch for ULiquidRibbonManager::MaxPointSize");
static_assert(offsetof(ULiquidRibbonManager, NumPointsAtMinPointSize) == 684, "Offset mismatch for ULiquidRibbonManager::NumPointsAtMinPointSize");
static_assert(offsetof(ULiquidRibbonManager, NumPointsAtMaxPointSize) == 688, "Offset mismatch for ULiquidRibbonManager::NumPointsAtMaxPointSize");
static_assert(offsetof(ULiquidRibbonManager, SplineLengthForSizeCalculation) == 692, "Offset mismatch for ULiquidRibbonManager::SplineLengthForSizeCalculation");
static_assert(offsetof(ULiquidRibbonManager, NumPointsToTaperDownSplineEndSize) == 696, "Offset mismatch for ULiquidRibbonManager::NumPointsToTaperDownSplineEndSize");
static_assert(offsetof(ULiquidRibbonManager, MinSplineEndTaperSize) == 700, "Offset mismatch for ULiquidRibbonManager::MinSplineEndTaperSize");
static_assert(offsetof(ULiquidRibbonManager, TaperSizeAtDetachment_RemapClosenessToBreakageOldMin) == 704, "Offset mismatch for ULiquidRibbonManager::TaperSizeAtDetachment_RemapClosenessToBreakageOldMin");
static_assert(offsetof(ULiquidRibbonManager, TaperSizeAtDetachment_RemapClosenessToBreakageOldMax) == 708, "Offset mismatch for ULiquidRibbonManager::TaperSizeAtDetachment_RemapClosenessToBreakageOldMax");
static_assert(offsetof(ULiquidRibbonManager, MinPointSizePercentForFlashIntensity) == 712, "Offset mismatch for ULiquidRibbonManager::MinPointSizePercentForFlashIntensity");
static_assert(offsetof(ULiquidRibbonManager, MaxPointSizePercentForFlashIntensity) == 716, "Offset mismatch for ULiquidRibbonManager::MaxPointSizePercentForFlashIntensity");
static_assert(offsetof(ULiquidRibbonManager, PositionsNiagaraParamName) == 720, "Offset mismatch for ULiquidRibbonManager::PositionsNiagaraParamName");
static_assert(offsetof(ULiquidRibbonManager, RibbonIDsNiagaraParamName) == 724, "Offset mismatch for ULiquidRibbonManager::RibbonIDsNiagaraParamName");
static_assert(offsetof(ULiquidRibbonManager, RibbonVisibilitiesNiagaraParamName) == 728, "Offset mismatch for ULiquidRibbonManager::RibbonVisibilitiesNiagaraParamName");
static_assert(offsetof(ULiquidRibbonManager, FlashIntensitiesNiagaraParamName) == 732, "Offset mismatch for ULiquidRibbonManager::FlashIntensitiesNiagaraParamName");
static_assert(offsetof(ULiquidRibbonManager, RibbonSizesNiagaraParamName) == 736, "Offset mismatch for ULiquidRibbonManager::RibbonSizesNiagaraParamName");
static_assert(offsetof(ULiquidRibbonManager, CalculateBaseCurlOffset_MaxSegmentLength) == 744, "Offset mismatch for ULiquidRibbonManager::CalculateBaseCurlOffset_MaxSegmentLength");
static_assert(offsetof(ULiquidRibbonManager, CalculateBaseCurlOffset_MaxTimeSinceDetachment) == 784, "Offset mismatch for ULiquidRibbonManager::CalculateBaseCurlOffset_MaxTimeSinceDetachment");
static_assert(offsetof(ULiquidRibbonManager, CalculateBaseCurlOffset_TowardPerpendicularMult) == 824, "Offset mismatch for ULiquidRibbonManager::CalculateBaseCurlOffset_TowardPerpendicularMult");
static_assert(offsetof(ULiquidRibbonManager, CalculateBaseCurlOffset_TowardEndMult) == 864, "Offset mismatch for ULiquidRibbonManager::CalculateBaseCurlOffset_TowardEndMult");
static_assert(offsetof(ULiquidRibbonManager, CalculateBaseCurlOffset_TowardRandomMult) == 904, "Offset mismatch for ULiquidRibbonManager::CalculateBaseCurlOffset_TowardRandomMult");
static_assert(offsetof(ULiquidRibbonManager, TimeSinceDetachmentCurlCurve) == 944, "Offset mismatch for ULiquidRibbonManager::TimeSinceDetachmentCurlCurve");
static_assert(offsetof(ULiquidRibbonManager, TimeSinceDetachmentCurlCurve_MaxTime) == 952, "Offset mismatch for ULiquidRibbonManager::TimeSinceDetachmentCurlCurve_MaxTime");
static_assert(offsetof(ULiquidRibbonManager, CurlingMaxClosenessToBreakage) == 992, "Offset mismatch for ULiquidRibbonManager::CurlingMaxClosenessToBreakage");
static_assert(offsetof(ULiquidRibbonManager, SegmentLengths) == 1000, "Offset mismatch for ULiquidRibbonManager::SegmentLengths");
static_assert(offsetof(ULiquidRibbonManager, Detachments) == 1016, "Offset mismatch for ULiquidRibbonManager::Detachments");
static_assert(offsetof(ULiquidRibbonManager, SplineSegments) == 1032, "Offset mismatch for ULiquidRibbonManager::SplineSegments");
static_assert(offsetof(ULiquidRibbonManager, Projectiles_Native) == 1048, "Offset mismatch for ULiquidRibbonManager::Projectiles_Native");

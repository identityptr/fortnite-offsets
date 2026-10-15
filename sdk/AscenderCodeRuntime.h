/**
 * decamp dumper generated SDK
 * Package: /Script/AscenderCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AscenderCodeRuntime.FortAscenderZipline
// Kind: Class; super: FortAthenaSplineZipline
class UFortAscenderZipline
{
public:
    std::uint8_t Pad_0000[0xC08]; // 0x0000
    FMulticastInlineDelegate OnAscenderSetupComplete; // 0x0C08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SplineTopAttachPointName[0x4]; // 0x0C18 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAutoFindSplineEndLocation; // 0x0C1C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0C1D
    float SplineOffsetFromGround; // 0x0C20 (Size: 0x4, Type: FloatProperty)
    float CableOffsetFromSplineEnd; // 0x0C24 (Size: 0x4, Type: FloatProperty)
    float SplineLength; // 0x0C28 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0C2C
    void* SplineStaticMesh; // 0x0C30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MeshForwardAxis; // 0x0C38 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHandleReturning; // 0x0C39 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0C3A
    float HandleReturnSpeed; // 0x0C3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCableDropping; // 0x0C40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0C41
    float CableDropSpeed; // 0x0C44 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLockPawnRotationWhileUsing; // 0x0C48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyHolsterWhileUsing; // 0x0C49 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0C4A
    float YawRotationOffsetWhileUsingHandle; // 0x0C4C (Size: 0x4, Type: FloatProperty)
    float YawRotationOffsetWhileSlidingDown; // 0x0C50 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0C54
    std::uint8_t CancelAbilitiesWithTags[0x20]; // 0x0C58 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseComplexSplineCollision; // 0x0C78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0C79
    float SimpleSplineCollisionRadius; // 0x0C7C (Size: 0x4, Type: FloatProperty)
    float SimpleSplineCollisionHeightExtension; // 0x0C80 (Size: 0x4, Type: FloatProperty)
    float ReachedTopLaunchAngle; // 0x0C84 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DescendMinDistanceFromBottom[0x28]; // 0x0C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendReachedEndHorizontalLaunchSpeed[0x28]; // 0x0CB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendReachedEndVerticalLaunchSpeed[0x28]; // 0x0CD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendMMEReachedEndHorizontalLaunchSpeed[0x28]; // 0x0D00 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendMMEReachedEndVerticalLaunchSpeed[0x28]; // 0x0D28 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendJumpedOffHorizontalLaunchSpeed[0x28]; // 0x0D50 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendJumpedOffVerticalLaunchSpeed[0x28]; // 0x0D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t DescendReachedEndHorizontalLaunchSpeed[0x28]; // 0x0DA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DescendReachedEndVerticalLaunchSpeed[0x28]; // 0x0DC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DescendJumpedOffHorizontalLaunchSpeed[0x28]; // 0x0DF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DescendJumpedOffVerticalLaunchSpeed[0x28]; // 0x0E18 (Size: 0x28, Type: StructProperty)
    std::uint8_t HandleActorHitPlayerHorizontalLaunchSpeed[0x28]; // 0x0E40 (Size: 0x28, Type: StructProperty)
    std::uint8_t HandleActorHitPlayerVerticalLaunchSpeed[0x28]; // 0x0E68 (Size: 0x28, Type: StructProperty)
    std::uint8_t HandleDestroyBuildingsOverlapExtents[0x18]; // 0x0E90 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerDestroyBuildingsOverlapExtents[0x18]; // 0x0EA8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseBakedEndLocation; // 0x0EC0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0EC1
    std::uint8_t BakedEndLocation[0x18]; // 0x0EC8 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialSplineEndLocation[0x18]; // 0x0EE0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentSplineEndLocation[0x18]; // 0x0EF8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetSplineEndLocation[0x18]; // 0x0F10 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentHandleLocation[0x18]; // 0x0F28 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> CurrentInteractComponent; // 0x0F40 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PawnUsingHandle; // 0x0F48 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PreviousPawnUsingHandle; // 0x0F50 (Size: 0x8, Type: WeakObjectProperty)
    void* SplineMesh; // 0x0F58 (Size: 0x8, Type: ObjectProperty)
    void* SimpleSplineMeshCollision; // 0x0F60 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> FloorActor; // 0x0F68 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> RotationLockedPawns; // 0x0F70 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0009[0x40]; // 0x0F80
    void* LinkToActorComponent; // 0x0FC0 (Size: 0x8, Type: ObjectProperty)
    void* ZiplineLinkComponent; // 0x0FC8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAscenderZipline, OnAscenderSetupComplete) == 3080, "Offset mismatch for UFortAscenderZipline::OnAscenderSetupComplete");
static_assert(offsetof(UFortAscenderZipline, SplineTopAttachPointName) == 3096, "Offset mismatch for UFortAscenderZipline::SplineTopAttachPointName");
static_assert(offsetof(UFortAscenderZipline, bAutoFindSplineEndLocation) == 3100, "Offset mismatch for UFortAscenderZipline::bAutoFindSplineEndLocation");
static_assert(offsetof(UFortAscenderZipline, SplineOffsetFromGround) == 3104, "Offset mismatch for UFortAscenderZipline::SplineOffsetFromGround");
static_assert(offsetof(UFortAscenderZipline, CableOffsetFromSplineEnd) == 3108, "Offset mismatch for UFortAscenderZipline::CableOffsetFromSplineEnd");
static_assert(offsetof(UFortAscenderZipline, SplineLength) == 3112, "Offset mismatch for UFortAscenderZipline::SplineLength");
static_assert(offsetof(UFortAscenderZipline, SplineStaticMesh) == 3120, "Offset mismatch for UFortAscenderZipline::SplineStaticMesh");
static_assert(offsetof(UFortAscenderZipline, MeshForwardAxis) == 3128, "Offset mismatch for UFortAscenderZipline::MeshForwardAxis");
static_assert(offsetof(UFortAscenderZipline, bHandleReturning) == 3129, "Offset mismatch for UFortAscenderZipline::bHandleReturning");
static_assert(offsetof(UFortAscenderZipline, HandleReturnSpeed) == 3132, "Offset mismatch for UFortAscenderZipline::HandleReturnSpeed");
static_assert(offsetof(UFortAscenderZipline, bCableDropping) == 3136, "Offset mismatch for UFortAscenderZipline::bCableDropping");
static_assert(offsetof(UFortAscenderZipline, CableDropSpeed) == 3140, "Offset mismatch for UFortAscenderZipline::CableDropSpeed");
static_assert(offsetof(UFortAscenderZipline, bLockPawnRotationWhileUsing) == 3144, "Offset mismatch for UFortAscenderZipline::bLockPawnRotationWhileUsing");
static_assert(offsetof(UFortAscenderZipline, bApplyHolsterWhileUsing) == 3145, "Offset mismatch for UFortAscenderZipline::bApplyHolsterWhileUsing");
static_assert(offsetof(UFortAscenderZipline, YawRotationOffsetWhileUsingHandle) == 3148, "Offset mismatch for UFortAscenderZipline::YawRotationOffsetWhileUsingHandle");
static_assert(offsetof(UFortAscenderZipline, YawRotationOffsetWhileSlidingDown) == 3152, "Offset mismatch for UFortAscenderZipline::YawRotationOffsetWhileSlidingDown");
static_assert(offsetof(UFortAscenderZipline, CancelAbilitiesWithTags) == 3160, "Offset mismatch for UFortAscenderZipline::CancelAbilitiesWithTags");
static_assert(offsetof(UFortAscenderZipline, bUseComplexSplineCollision) == 3192, "Offset mismatch for UFortAscenderZipline::bUseComplexSplineCollision");
static_assert(offsetof(UFortAscenderZipline, SimpleSplineCollisionRadius) == 3196, "Offset mismatch for UFortAscenderZipline::SimpleSplineCollisionRadius");
static_assert(offsetof(UFortAscenderZipline, SimpleSplineCollisionHeightExtension) == 3200, "Offset mismatch for UFortAscenderZipline::SimpleSplineCollisionHeightExtension");
static_assert(offsetof(UFortAscenderZipline, ReachedTopLaunchAngle) == 3204, "Offset mismatch for UFortAscenderZipline::ReachedTopLaunchAngle");
static_assert(offsetof(UFortAscenderZipline, DescendMinDistanceFromBottom) == 3208, "Offset mismatch for UFortAscenderZipline::DescendMinDistanceFromBottom");
static_assert(offsetof(UFortAscenderZipline, AscendReachedEndHorizontalLaunchSpeed) == 3248, "Offset mismatch for UFortAscenderZipline::AscendReachedEndHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, AscendReachedEndVerticalLaunchSpeed) == 3288, "Offset mismatch for UFortAscenderZipline::AscendReachedEndVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, AscendMMEReachedEndHorizontalLaunchSpeed) == 3328, "Offset mismatch for UFortAscenderZipline::AscendMMEReachedEndHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, AscendMMEReachedEndVerticalLaunchSpeed) == 3368, "Offset mismatch for UFortAscenderZipline::AscendMMEReachedEndVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, AscendJumpedOffHorizontalLaunchSpeed) == 3408, "Offset mismatch for UFortAscenderZipline::AscendJumpedOffHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, AscendJumpedOffVerticalLaunchSpeed) == 3448, "Offset mismatch for UFortAscenderZipline::AscendJumpedOffVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, DescendReachedEndHorizontalLaunchSpeed) == 3488, "Offset mismatch for UFortAscenderZipline::DescendReachedEndHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, DescendReachedEndVerticalLaunchSpeed) == 3528, "Offset mismatch for UFortAscenderZipline::DescendReachedEndVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, DescendJumpedOffHorizontalLaunchSpeed) == 3568, "Offset mismatch for UFortAscenderZipline::DescendJumpedOffHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, DescendJumpedOffVerticalLaunchSpeed) == 3608, "Offset mismatch for UFortAscenderZipline::DescendJumpedOffVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, HandleActorHitPlayerHorizontalLaunchSpeed) == 3648, "Offset mismatch for UFortAscenderZipline::HandleActorHitPlayerHorizontalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, HandleActorHitPlayerVerticalLaunchSpeed) == 3688, "Offset mismatch for UFortAscenderZipline::HandleActorHitPlayerVerticalLaunchSpeed");
static_assert(offsetof(UFortAscenderZipline, HandleDestroyBuildingsOverlapExtents) == 3728, "Offset mismatch for UFortAscenderZipline::HandleDestroyBuildingsOverlapExtents");
static_assert(offsetof(UFortAscenderZipline, PlayerDestroyBuildingsOverlapExtents) == 3752, "Offset mismatch for UFortAscenderZipline::PlayerDestroyBuildingsOverlapExtents");
static_assert(offsetof(UFortAscenderZipline, bUseBakedEndLocation) == 3776, "Offset mismatch for UFortAscenderZipline::bUseBakedEndLocation");
static_assert(offsetof(UFortAscenderZipline, BakedEndLocation) == 3784, "Offset mismatch for UFortAscenderZipline::BakedEndLocation");
static_assert(offsetof(UFortAscenderZipline, InitialSplineEndLocation) == 3808, "Offset mismatch for UFortAscenderZipline::InitialSplineEndLocation");
static_assert(offsetof(UFortAscenderZipline, CurrentSplineEndLocation) == 3832, "Offset mismatch for UFortAscenderZipline::CurrentSplineEndLocation");
static_assert(offsetof(UFortAscenderZipline, TargetSplineEndLocation) == 3856, "Offset mismatch for UFortAscenderZipline::TargetSplineEndLocation");
static_assert(offsetof(UFortAscenderZipline, CurrentHandleLocation) == 3880, "Offset mismatch for UFortAscenderZipline::CurrentHandleLocation");
static_assert(offsetof(UFortAscenderZipline, CurrentInteractComponent) == 3904, "Offset mismatch for UFortAscenderZipline::CurrentInteractComponent");
static_assert(offsetof(UFortAscenderZipline, PawnUsingHandle) == 3912, "Offset mismatch for UFortAscenderZipline::PawnUsingHandle");
static_assert(offsetof(UFortAscenderZipline, PreviousPawnUsingHandle) == 3920, "Offset mismatch for UFortAscenderZipline::PreviousPawnUsingHandle");
static_assert(offsetof(UFortAscenderZipline, SplineMesh) == 3928, "Offset mismatch for UFortAscenderZipline::SplineMesh");
static_assert(offsetof(UFortAscenderZipline, SimpleSplineMeshCollision) == 3936, "Offset mismatch for UFortAscenderZipline::SimpleSplineMeshCollision");
static_assert(offsetof(UFortAscenderZipline, FloorActor) == 3944, "Offset mismatch for UFortAscenderZipline::FloorActor");
static_assert(offsetof(UFortAscenderZipline, RotationLockedPawns) == 3952, "Offset mismatch for UFortAscenderZipline::RotationLockedPawns");
static_assert(offsetof(UFortAscenderZipline, LinkToActorComponent) == 4032, "Offset mismatch for UFortAscenderZipline::LinkToActorComponent");
static_assert(offsetof(UFortAscenderZipline, ZiplineLinkComponent) == 4040, "Offset mismatch for UFortAscenderZipline::ZiplineLinkComponent");

// /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_AscenderZipline
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AscenderCodeRuntime.FortPawnComponent_AscenderMontageProvider
// Kind: Class; super: PawnComponent
class UFortPawnComponent_AscenderMontageProvider
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* M_Ascending; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* M_Descending; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* F_Ascending; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* F_Descending; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_AscenderMontageProvider, M_Ascending) == 192, "Offset mismatch for UFortPawnComponent_AscenderMontageProvider::M_Ascending");
static_assert(offsetof(UFortPawnComponent_AscenderMontageProvider, M_Descending) == 200, "Offset mismatch for UFortPawnComponent_AscenderMontageProvider::M_Descending");
static_assert(offsetof(UFortPawnComponent_AscenderMontageProvider, F_Ascending) == 208, "Offset mismatch for UFortPawnComponent_AscenderMontageProvider::F_Ascending");
static_assert(offsetof(UFortPawnComponent_AscenderMontageProvider, F_Descending) == 216, "Offset mismatch for UFortPawnComponent_AscenderMontageProvider::F_Descending");

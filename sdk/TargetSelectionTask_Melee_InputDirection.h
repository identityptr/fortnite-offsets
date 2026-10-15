/**
 * decamp dumper generated SDK
 * Package: /Mantis/Gameplay/Targeting/TargetSelectionTask_Melee_InputDirection
 */
#pragma once
#include "Basic.h"

// /Mantis/Gameplay/Targeting/TargetSelectionTask_Melee_InputDirection.TargetSelectionTask_Melee_InputDirection_C
// Kind: BlueprintGeneratedClass; super: TargetingSelectionTask_Trace
class UTargetSelectionTask_Melee_InputDirection_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TraceType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TraceChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRadius[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceCapsuleHalfHeight[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentX[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentY[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentZ[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultTraceLength[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExplicitTraceDirection[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bComplexTrace; // 0x0168 (Size: 0x1, Type: BoolProperty)
    // 0x0168 BoolProperty bIgnoreInstigatorActor (shared storage)
    // 0x0168 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0168 BoolProperty bMultiTrace (shared storage)
};

static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, TraceType) == 40, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::TraceType");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, TraceChannel) == 41, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::TraceChannel");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, CollisionProfileName) == 44, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::CollisionProfileName");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceRadius) == 48, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceRadius");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceCapsuleHalfHeight) == 88, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceCapsuleHalfHeight");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceBoxHalfExtentX) == 128, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceBoxHalfExtentX");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceBoxHalfExtentY) == 168, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceBoxHalfExtentY");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceBoxHalfExtentZ) == 208, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceBoxHalfExtentZ");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSweptTraceRotation) == 248, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSweptTraceRotation");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultTraceLength) == 272, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultTraceLength");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, DefaultSourceOffset) == 312, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::DefaultSourceOffset");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, ExplicitTraceDirection) == 336, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::ExplicitTraceDirection");
static_assert(offsetof(UTargetSelectionTask_Melee_InputDirection_C, bComplexTrace) == 360, "Offset mismatch for UTargetSelectionTask_Melee_InputDirection_C::bComplexTrace");

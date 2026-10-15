/**
 * decamp dumper generated SDK
 * Package: /Script/NarrowFleaChromeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NarrowFleaChromeRuntime.FortMovementMode_ExtNarrowFleaChromeLaunch
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ExtNarrowFleaChromeLaunch
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* FallDamageImmunityGE; // 0x05A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShouldActivateAbility[0x28]; // 0x05A8 (Size: 0x28, Type: StructProperty)
    void* WhileActiveAbilityClass; // 0x05D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_ExtNarrowFleaChromeLaunch, FallDamageImmunityGE) == 1440, "Offset mismatch for UFortMovementMode_ExtNarrowFleaChromeLaunch::FallDamageImmunityGE");
static_assert(offsetof(UFortMovementMode_ExtNarrowFleaChromeLaunch, ShouldActivateAbility) == 1448, "Offset mismatch for UFortMovementMode_ExtNarrowFleaChromeLaunch::ShouldActivateAbility");
static_assert(offsetof(UFortMovementMode_ExtNarrowFleaChromeLaunch, WhileActiveAbilityClass) == 1488, "Offset mismatch for UFortMovementMode_ExtNarrowFleaChromeLaunch::WhileActiveAbilityClass");

// /Script/NarrowFleaChromeRuntime.FortMovementMode_NarrowFleaChromeLaunchRuntimeData
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_NarrowFleaChromeLaunchRuntimeData
{
public:
    std::uint8_t Pad_0000[0x3C]; // 0x0000
    TWeakObjectPtr<void> NetInitialComponent_MoveToActor; // 0x003C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t NetInitialWorldLocation_MoveToActor[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetInitialWorldDirection_MoveToActor[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bNetInitialHasMovementInput; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t NetInitialPlayerLocation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    TArray<void*> NetOptionalBools; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NetOptionalFloats; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalGuideMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B9
    std::uint8_t LocalMoveToEndLocation[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float LocalStartElapsedTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float LocalEndElapsedTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    FScriptDelegate OnFinished; // 0x00E0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0004[0x54]; // 0x00F0
    float LocalMaxDuration; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x60]; // 0x0148
    float LocalStrength; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x01AC
    std::uint8_t LocalDirection[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float LocalHeightAboveGround; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x5C]; // 0x01CC
    std::uint8_t LocalInitialPlayerLocation[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetInitialComponent_MoveToActor) == 60, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetInitialComponent_MoveToActor");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetInitialWorldLocation_MoveToActor) == 72, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetInitialWorldLocation_MoveToActor");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetInitialWorldDirection_MoveToActor) == 96, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetInitialWorldDirection_MoveToActor");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, bNetInitialHasMovementInput) == 120, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::bNetInitialHasMovementInput");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetInitialPlayerLocation) == 128, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetInitialPlayerLocation");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetOptionalBools) == 152, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetOptionalBools");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, NetOptionalFloats) == 168, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::NetOptionalFloats");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalGuideMode) == 184, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalGuideMode");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalMoveToEndLocation) == 192, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalMoveToEndLocation");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalStartElapsedTime) == 216, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalStartElapsedTime");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalEndElapsedTime) == 220, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalEndElapsedTime");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, OnFinished) == 224, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::OnFinished");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalMaxDuration) == 324, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalMaxDuration");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalStrength) == 424, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalStrength");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalDirection) == 432, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalDirection");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalHeightAboveGround) == 456, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalHeightAboveGround");
static_assert(offsetof(UFortMovementMode_NarrowFleaChromeLaunchRuntimeData, LocalInitialPlayerLocation) == 552, "Offset mismatch for UFortMovementMode_NarrowFleaChromeLaunchRuntimeData::LocalInitialPlayerLocation");

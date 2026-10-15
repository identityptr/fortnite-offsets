/**
 * decamp dumper generated SDK
 * Package: /Script/DentureSayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DentureSayRuntime.DentureSayPlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UDentureSayPlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float AirAttack_AO_Alpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsGrinding; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1175
    std::uint8_t GrindingTagName[0x8]; // 0x1178 (Size: 0x8, Type: StructProperty)
    void* DentureSayAirAttackMontage; // 0x1180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDentureSayPlayerAnimInstance, AirAttack_AO_Alpha) == 4464, "Offset mismatch for UDentureSayPlayerAnimInstance::AirAttack_AO_Alpha");
static_assert(offsetof(UDentureSayPlayerAnimInstance, bIsGrinding) == 4468, "Offset mismatch for UDentureSayPlayerAnimInstance::bIsGrinding");
static_assert(offsetof(UDentureSayPlayerAnimInstance, GrindingTagName) == 4472, "Offset mismatch for UDentureSayPlayerAnimInstance::GrindingTagName");
static_assert(offsetof(UDentureSayPlayerAnimInstance, DentureSayAirAttackMontage) == 4480, "Offset mismatch for UDentureSayPlayerAnimInstance::DentureSayAirAttackMontage");

// /Script/DentureSayRuntime.FortCameraModifier_DentureSay
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_DentureSay
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float CameraModifierLifetimeDuration; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInterpCameraViewFov; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    float FOVInterpSpeed; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float TargetDeltaFov; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInterpCameraViewLocation; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0091
    float DeltaLocationInterpSpeed; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float TargetDeltaForwardDirectionOffset; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWindingDown; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x009D
    float CurrentDeltaFov; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00A4
    std::uint8_t CurrentDeltaLocation[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LifetimeDurationTimerHandle[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraModifier_DentureSay, CameraModifierLifetimeDuration) == 128, "Offset mismatch for UFortCameraModifier_DentureSay::CameraModifierLifetimeDuration");
static_assert(offsetof(UFortCameraModifier_DentureSay, bInterpCameraViewFov) == 132, "Offset mismatch for UFortCameraModifier_DentureSay::bInterpCameraViewFov");
static_assert(offsetof(UFortCameraModifier_DentureSay, FOVInterpSpeed) == 136, "Offset mismatch for UFortCameraModifier_DentureSay::FOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_DentureSay, TargetDeltaFov) == 140, "Offset mismatch for UFortCameraModifier_DentureSay::TargetDeltaFov");
static_assert(offsetof(UFortCameraModifier_DentureSay, bInterpCameraViewLocation) == 144, "Offset mismatch for UFortCameraModifier_DentureSay::bInterpCameraViewLocation");
static_assert(offsetof(UFortCameraModifier_DentureSay, DeltaLocationInterpSpeed) == 148, "Offset mismatch for UFortCameraModifier_DentureSay::DeltaLocationInterpSpeed");
static_assert(offsetof(UFortCameraModifier_DentureSay, TargetDeltaForwardDirectionOffset) == 152, "Offset mismatch for UFortCameraModifier_DentureSay::TargetDeltaForwardDirectionOffset");
static_assert(offsetof(UFortCameraModifier_DentureSay, bWindingDown) == 156, "Offset mismatch for UFortCameraModifier_DentureSay::bWindingDown");
static_assert(offsetof(UFortCameraModifier_DentureSay, CurrentDeltaFov) == 160, "Offset mismatch for UFortCameraModifier_DentureSay::CurrentDeltaFov");
static_assert(offsetof(UFortCameraModifier_DentureSay, CurrentDeltaLocation) == 168, "Offset mismatch for UFortCameraModifier_DentureSay::CurrentDeltaLocation");
static_assert(offsetof(UFortCameraModifier_DentureSay, LifetimeDurationTimerHandle) == 192, "Offset mismatch for UFortCameraModifier_DentureSay::LifetimeDurationTimerHandle");

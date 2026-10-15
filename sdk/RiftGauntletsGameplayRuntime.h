/**
 * decamp dumper generated SDK
 * Package: /Script/RiftGauntletsGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RiftGauntletsGameplayRuntime.FortCameraModifier_RiftGauntlets
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_RiftGauntlets
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bNativeDash; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeModifyCameraOffset; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeModifyCameraLag; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeModifyCameraFOV; // 0x0083 (Size: 0x1, Type: BoolProperty)
    float NativeCameraOffsetTargetInterpSpeed; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float NativeCameraLagMagnitude; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float NativeCameraLagInterpSpeed; // 0x008C (Size: 0x4, Type: FloatProperty)
    float NativeTargetFOV_Dash; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float NativeTargetFOV_Hover; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float NativeInterpSpeedFOV_Dash; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float NativeInterpSpeedFOV_Hover; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t NativeCameraOffsetTarget[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraModifier_RiftGauntlets, bNativeDash) == 128, "Offset mismatch for UFortCameraModifier_RiftGauntlets::bNativeDash");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, bNativeModifyCameraOffset) == 129, "Offset mismatch for UFortCameraModifier_RiftGauntlets::bNativeModifyCameraOffset");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, bNativeModifyCameraLag) == 130, "Offset mismatch for UFortCameraModifier_RiftGauntlets::bNativeModifyCameraLag");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, bNativeModifyCameraFOV) == 131, "Offset mismatch for UFortCameraModifier_RiftGauntlets::bNativeModifyCameraFOV");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeCameraOffsetTargetInterpSpeed) == 132, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeCameraOffsetTargetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeCameraLagMagnitude) == 136, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeCameraLagMagnitude");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeCameraLagInterpSpeed) == 140, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeCameraLagInterpSpeed");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeTargetFOV_Dash) == 144, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeTargetFOV_Dash");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeTargetFOV_Hover) == 148, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeTargetFOV_Hover");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeInterpSpeedFOV_Dash) == 152, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeInterpSpeedFOV_Dash");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeInterpSpeedFOV_Hover) == 156, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeInterpSpeedFOV_Hover");
static_assert(offsetof(UFortCameraModifier_RiftGauntlets, NativeCameraOffsetTarget) == 160, "Offset mismatch for UFortCameraModifier_RiftGauntlets::NativeCameraOffsetTarget");

// /Script/RiftGauntletsGameplayRuntime.FortPawnComponent_RiftGauntlets
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_RiftGauntlets
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t HeightAboveWorldCheckInterval[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t HeightAboveWorldCheckTraceLength[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DistanceThreshold_HeightAboveWorld[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t VelocityClampZ_HeightAboveWorld[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t BuildGridMaxHeightOffset[0x30]; // 0x0188 (Size: 0x30, Type: StructProperty)
    std::uint8_t VelocityClampZ_AboveBuildGrid[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    float CurrentHeightAboveWorld; // 0x01E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortPawnComponent_RiftGauntlets, HeightAboveWorldCheckInterval) == 200, "Offset mismatch for UFortPawnComponent_RiftGauntlets::HeightAboveWorldCheckInterval");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, HeightAboveWorldCheckTraceLength) == 248, "Offset mismatch for UFortPawnComponent_RiftGauntlets::HeightAboveWorldCheckTraceLength");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, DistanceThreshold_HeightAboveWorld) == 296, "Offset mismatch for UFortPawnComponent_RiftGauntlets::DistanceThreshold_HeightAboveWorld");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, VelocityClampZ_HeightAboveWorld) == 344, "Offset mismatch for UFortPawnComponent_RiftGauntlets::VelocityClampZ_HeightAboveWorld");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, BuildGridMaxHeightOffset) == 392, "Offset mismatch for UFortPawnComponent_RiftGauntlets::BuildGridMaxHeightOffset");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, VelocityClampZ_AboveBuildGrid) == 440, "Offset mismatch for UFortPawnComponent_RiftGauntlets::VelocityClampZ_AboveBuildGrid");
static_assert(offsetof(UFortPawnComponent_RiftGauntlets, CurrentHeightAboveWorld) == 488, "Offset mismatch for UFortPawnComponent_RiftGauntlets::CurrentHeightAboveWorld");

// /Script/RiftGauntletsGameplayRuntime.RiftGauntletsLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class URiftGauntletsLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float RootRotation; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float MoveAngle; // 0x1174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPerformRootRotation; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPerformDashBlendSpace; // 0x1179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x117A
    std::uint8_t RootRotationMax[0x30]; // 0x1180 (Size: 0x30, Type: StructProperty)
    std::uint8_t RootRotationMin[0x30]; // 0x11B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t DashMontage_Flipped[0x20]; // 0x11E0 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DashMontage; // 0x1200 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(URiftGauntletsLayerAnimInstance, RootRotation) == 4464, "Offset mismatch for URiftGauntletsLayerAnimInstance::RootRotation");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, MoveAngle) == 4468, "Offset mismatch for URiftGauntletsLayerAnimInstance::MoveAngle");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, bPerformRootRotation) == 4472, "Offset mismatch for URiftGauntletsLayerAnimInstance::bPerformRootRotation");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, bPerformDashBlendSpace) == 4473, "Offset mismatch for URiftGauntletsLayerAnimInstance::bPerformDashBlendSpace");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, RootRotationMax) == 4480, "Offset mismatch for URiftGauntletsLayerAnimInstance::RootRotationMax");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, RootRotationMin) == 4528, "Offset mismatch for URiftGauntletsLayerAnimInstance::RootRotationMin");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, DashMontage_Flipped) == 4576, "Offset mismatch for URiftGauntletsLayerAnimInstance::DashMontage_Flipped");
static_assert(offsetof(URiftGauntletsLayerAnimInstance, DashMontage) == 4608, "Offset mismatch for URiftGauntletsLayerAnimInstance::DashMontage");

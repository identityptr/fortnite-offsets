/**
 * decamp dumper generated SDK
 * Package: /Game/Blueprints/Camera/Original/MainPlayerCamera
 */
#pragma once
#include "Basic.h"

// /Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C
// Kind: BlueprintGeneratedClass; super: FortPlayerCameraZone
class UMainPlayerCamera_C
{
public:
    std::uint8_t Pad_0000[0x28E0]; // 0x0000
    TArray<void*> CameraBlendStack; // 0x28E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraInstances; // 0x28F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraOverridesStack; // 0x2900 (Size: 0x10, Type: ArrayProperty)
    void* UICamera; // 0x2910 (Size: 0x8, Type: ObjectProperty)
    void* Base3PClass; // 0x2918 (Size: 0x8, Type: ClassProperty)
    void* Targeting3PClass; // 0x2920 (Size: 0x8, Type: ClassProperty)
    void* OverrideCameraClass; // 0x2928 (Size: 0x8, Type: ClassProperty)
    void* CinematicCameraClass; // 0x2930 (Size: 0x8, Type: ClassProperty)
    void* DBNOCameraClass; // 0x2938 (Size: 0x8, Type: ClassProperty)
    void* DBNOCarriedCameraClass; // 0x2940 (Size: 0x8, Type: ClassProperty)
    void* DeathCameraClass; // 0x2948 (Size: 0x8, Type: ClassProperty)
    void* RespawnedInAirCameraClass; // 0x2950 (Size: 0x8, Type: ClassProperty)
    void* SkydiveGlideCameraClass; // 0x2958 (Size: 0x8, Type: ClassProperty)
    void* SkydiveDiveCameraClass; // 0x2960 (Size: 0x8, Type: ClassProperty)
    void* SkydiveParachuteCameraClass; // 0x2968 (Size: 0x8, Type: ClassProperty)
    void* HoverboardCameraClass; // 0x2970 (Size: 0x8, Type: ClassProperty)
    void* WaterSprintBoostCameraClass; // 0x2978 (Size: 0x8, Type: ClassProperty)
    void* FocalPointCameraClass; // 0x2980 (Size: 0x8, Type: ClassProperty)
    void* TetheredTargeting3PClass; // 0x2988 (Size: 0x8, Type: ClassProperty)
    void* RCActorCameraClass; // 0x2990 (Size: 0x8, Type: ClassProperty)
    TArray<void*> CameraPrototypes; // 0x2998 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanDeathCameraBlendOut; // 0x29A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x8F]; // 0x29A9
    void* ZoomPostProcessVolume; // 0x2A38 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TaggedOverrideStack; // 0x2A40 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x920]; // 0x2A50
    std::uint8_t bLockCameraWhileInactiveForNextTransition; // 0x3370 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMainPlayerCamera_C, CameraBlendStack) == 10464, "Offset mismatch for UMainPlayerCamera_C::CameraBlendStack");
static_assert(offsetof(UMainPlayerCamera_C, CameraInstances) == 10480, "Offset mismatch for UMainPlayerCamera_C::CameraInstances");
static_assert(offsetof(UMainPlayerCamera_C, CameraOverridesStack) == 10496, "Offset mismatch for UMainPlayerCamera_C::CameraOverridesStack");
static_assert(offsetof(UMainPlayerCamera_C, UICamera) == 10512, "Offset mismatch for UMainPlayerCamera_C::UICamera");
static_assert(offsetof(UMainPlayerCamera_C, Base3PClass) == 10520, "Offset mismatch for UMainPlayerCamera_C::Base3PClass");
static_assert(offsetof(UMainPlayerCamera_C, Targeting3PClass) == 10528, "Offset mismatch for UMainPlayerCamera_C::Targeting3PClass");
static_assert(offsetof(UMainPlayerCamera_C, OverrideCameraClass) == 10536, "Offset mismatch for UMainPlayerCamera_C::OverrideCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, CinematicCameraClass) == 10544, "Offset mismatch for UMainPlayerCamera_C::CinematicCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, DBNOCameraClass) == 10552, "Offset mismatch for UMainPlayerCamera_C::DBNOCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, DBNOCarriedCameraClass) == 10560, "Offset mismatch for UMainPlayerCamera_C::DBNOCarriedCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, DeathCameraClass) == 10568, "Offset mismatch for UMainPlayerCamera_C::DeathCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, RespawnedInAirCameraClass) == 10576, "Offset mismatch for UMainPlayerCamera_C::RespawnedInAirCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, SkydiveGlideCameraClass) == 10584, "Offset mismatch for UMainPlayerCamera_C::SkydiveGlideCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, SkydiveDiveCameraClass) == 10592, "Offset mismatch for UMainPlayerCamera_C::SkydiveDiveCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, SkydiveParachuteCameraClass) == 10600, "Offset mismatch for UMainPlayerCamera_C::SkydiveParachuteCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, HoverboardCameraClass) == 10608, "Offset mismatch for UMainPlayerCamera_C::HoverboardCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, WaterSprintBoostCameraClass) == 10616, "Offset mismatch for UMainPlayerCamera_C::WaterSprintBoostCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, FocalPointCameraClass) == 10624, "Offset mismatch for UMainPlayerCamera_C::FocalPointCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, TetheredTargeting3PClass) == 10632, "Offset mismatch for UMainPlayerCamera_C::TetheredTargeting3PClass");
static_assert(offsetof(UMainPlayerCamera_C, RCActorCameraClass) == 10640, "Offset mismatch for UMainPlayerCamera_C::RCActorCameraClass");
static_assert(offsetof(UMainPlayerCamera_C, CameraPrototypes) == 10648, "Offset mismatch for UMainPlayerCamera_C::CameraPrototypes");
static_assert(offsetof(UMainPlayerCamera_C, bCanDeathCameraBlendOut) == 10664, "Offset mismatch for UMainPlayerCamera_C::bCanDeathCameraBlendOut");
static_assert(offsetof(UMainPlayerCamera_C, ZoomPostProcessVolume) == 10808, "Offset mismatch for UMainPlayerCamera_C::ZoomPostProcessVolume");
static_assert(offsetof(UMainPlayerCamera_C, TaggedOverrideStack) == 10816, "Offset mismatch for UMainPlayerCamera_C::TaggedOverrideStack");
static_assert(offsetof(UMainPlayerCamera_C, bLockCameraWhileInactiveForNextTransition) == 13168, "Offset mismatch for UMainPlayerCamera_C::bLockCameraWhileInactiveForNextTransition");

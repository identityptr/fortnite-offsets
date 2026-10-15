/**
 * decamp dumper generated SDK
 * Package: /Script/MotherGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MotherGameplayRuntime.GoopAudioMapRangeClamped
// Kind: ScriptStruct; super: none
struct FGoopAudioMapRangeClamped
{
public:
    std::uint8_t InRange[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutRange[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGoopAudioMapRangeClamped, InRange) == 0, "Offset mismatch for FGoopAudioMapRangeClamped::InRange");
static_assert(offsetof(FGoopAudioMapRangeClamped, OutRange) == 16, "Offset mismatch for FGoopAudioMapRangeClamped::OutRange");

// /Script/MotherGameplayRuntime.GravyGoblinActivatable_Event
// Kind: ScriptStruct; super: none
struct FGravyGoblinActivatable_Event
{
public:
    std::uint8_t bIsActivatable; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGravyGoblinActivatable_Event, bIsActivatable) == 0, "Offset mismatch for FGravyGoblinActivatable_Event::bIsActivatable");

// /Script/MotherGameplayRuntime.GravyGoblinRotatable_Event
// Kind: ScriptStruct; super: none
struct FGravyGoblinRotatable_Event
{
public:
    std::uint8_t bIsRotatable; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGravyGoblinRotatable_Event, bIsRotatable) == 0, "Offset mismatch for FGravyGoblinRotatable_Event::bIsRotatable");

// /Script/MotherGameplayRuntime.PaddleGingerPropActivatedData
// Kind: ScriptStruct; super: none
struct FPaddleGingerPropActivatedData
{
public:
    std::uint8_t bActivated; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Sender; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPaddleGingerPropActivatedData, bActivated) == 0, "Offset mismatch for FPaddleGingerPropActivatedData::bActivated");
static_assert(offsetof(FPaddleGingerPropActivatedData, Sender) == 8, "Offset mismatch for FPaddleGingerPropActivatedData::Sender");

// /Script/MotherGameplayRuntime.PaddleGingerPropData
// Kind: ScriptStruct; super: none
struct FPaddleGingerPropData
{
public:
    std::uint8_t CategoryLabelText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::int32_t PropIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPropCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CategoryIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxCategoryCount; // 0x001C (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> Sender; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPaddleGingerPropData, CategoryLabelText) == 0, "Offset mismatch for FPaddleGingerPropData::CategoryLabelText");
static_assert(offsetof(FPaddleGingerPropData, PropIndex) == 16, "Offset mismatch for FPaddleGingerPropData::PropIndex");
static_assert(offsetof(FPaddleGingerPropData, MaxPropCount) == 20, "Offset mismatch for FPaddleGingerPropData::MaxPropCount");
static_assert(offsetof(FPaddleGingerPropData, CategoryIndex) == 24, "Offset mismatch for FPaddleGingerPropData::CategoryIndex");
static_assert(offsetof(FPaddleGingerPropData, MaxCategoryCount) == 28, "Offset mismatch for FPaddleGingerPropData::MaxCategoryCount");
static_assert(offsetof(FPaddleGingerPropData, Sender) == 32, "Offset mismatch for FPaddleGingerPropData::Sender");

// /Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
// Kind: Class; super: FortBaseAnimInstance
class UFortBaseAnimInstance_CageSaddle
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* AsFortSphericalVehicle; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsOnGround; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0339
    float RemappedPitch; // 0x033C (Size: 0x4, Type: FloatProperty)
    float CurrentRoll; // 0x0340 (Size: 0x4, Type: FloatProperty)
    float LockedRoll; // 0x0344 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHeadShouldBend; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFootShouldBend; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x034A
    std::uint8_t BodyGroundOffset[0x18]; // 0x0350 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinClampPitchInRange[0x10]; // 0x0368 (Size: 0x10, Type: StructProperty)
    std::uint8_t MinClampPitchOutRange[0x10]; // 0x0378 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxClampPitchInRange[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxClampPitchOutRange[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    float HeadAlphaInterpSpeed; // 0x03A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, AsFortSphericalVehicle) == 816, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::AsFortSphericalVehicle");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bIsOnGround) == 824, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::bIsOnGround");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, RemappedPitch) == 828, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::RemappedPitch");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, CurrentRoll) == 832, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::CurrentRoll");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, LockedRoll) == 836, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::LockedRoll");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bHeadShouldBend) == 840, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::bHeadShouldBend");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bFootShouldBend) == 841, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::bFootShouldBend");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, BodyGroundOffset) == 848, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::BodyGroundOffset");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MinClampPitchInRange) == 872, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::MinClampPitchInRange");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MinClampPitchOutRange) == 888, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::MinClampPitchOutRange");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MaxClampPitchInRange) == 904, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::MaxClampPitchInRange");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MaxClampPitchOutRange) == 920, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::MaxClampPitchOutRange");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, HeadAlphaInterpSpeed) == 936, "Offset mismatch for UFortBaseAnimInstance_CageSaddle::HeadAlphaInterpSpeed");

// /Script/MotherGameplayRuntime.FortCabbageIglooVehicle
// Kind: Class; super: FortOctopusVehicle
class UFortCabbageIglooVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    void* CacheDriverCameraShake; // 0x2020 (Size: 0x8, Type: ObjectProperty)
    float BounceContactRepulsionForce; // 0x2028 (Size: 0x4, Type: FloatProperty)
    float BoostForce; // 0x202C (Size: 0x4, Type: FloatProperty)
    float MaxVerticalBoostForce; // 0x2030 (Size: 0x4, Type: FloatProperty)
    float BoostSpeedKmh; // 0x2034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BaseSphericalDriveParams[0x48]; // 0x2038 (Size: 0x48, Type: StructProperty)
    std::uint8_t BaseTowhookParams[0xD0]; // 0x2080 (Size: 0xD0, Type: StructProperty)
    float TowhookSpringDeformationRateOnGround; // 0x2150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoRetractGrapple; // 0x2154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanHoldGrapple; // 0x2155 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x2156
    float TowhookInterpSpeed; // 0x2158 (Size: 0x4, Type: FloatProperty)
    float TowhookInterpMaxPercentPerSecond; // 0x215C (Size: 0x4, Type: FloatProperty)
    float TowhookMaxInvalidateTargetAngleDeg; // 0x2160 (Size: 0x4, Type: FloatProperty)
    float TowhookMaxInvalidateTargetDot; // 0x2164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InternalBlockerCollisionName[0x4]; // 0x2168 (Size: 0x4, Type: NameProperty)
    float ShellRotationInterpSpeed; // 0x216C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoostBounceAction[0xDC]; // 0x2170 (Size: 0xDC, Type: StructProperty)
    std::uint8_t ProjectileTraceChannel; // 0x224C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x224D
    float ProjectileSpeedKmh; // 0x2250 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x2254
    FMulticastInlineDelegate OnTowhookShot; // 0x2258 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTowhookAttached; // 0x2268 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTowhookDetached; // 0x2278 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTowhookMissed; // 0x2288 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTowhookHolstered; // 0x2298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTowhookYanked; // 0x22A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExtendToggled; // 0x22B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReplicatedAttachState[0x70]; // 0x22C8 (Size: 0x70, Type: StructProperty)
    void* FortOctopusVehicleConfigs; // 0x2338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x180]; // 0x2340
    std::uint8_t ShellRotation[0x60]; // 0x24C0 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedCameraDir[0xE8]; // 0x2520 (Size: 0xE8, Type: StructProperty)
    std::uint8_t TowhookModel[0x448]; // 0x2608 (Size: 0x448, Type: StructProperty)
    std::uint8_t TowhookAimDir[0xC0]; // 0x2A50 (Size: 0xC0, Type: StructProperty)
    std::uint8_t NetTowhookAimDir[0x18]; // 0x2B10 (Size: 0x18, Type: StructProperty)
    TArray<void*> CachedContactPoints; // 0x2B28 (Size: 0x10, Type: ArrayProperty)
    void* CacheCoilIdleTopR; // 0x2B38 (Size: 0x8, Type: ObjectProperty)
    void* CacheCoilIdleTopL; // 0x2B40 (Size: 0x8, Type: ObjectProperty)
    void* CacheCoilIdleBottomR; // 0x2B48 (Size: 0x8, Type: ObjectProperty)
    void* CacheCoilIdleBottomL; // 0x2B50 (Size: 0x8, Type: ObjectProperty)
    void* CacheBoostFX; // 0x2B58 (Size: 0x8, Type: ObjectProperty)
    void* CacheDustFX; // 0x2B60 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioMovement; // 0x2B68 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioWind; // 0x2B70 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioTowCable; // 0x2B78 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCabbageIglooVehicle, CacheDriverCameraShake) == 8224, "Offset mismatch for UFortCabbageIglooVehicle::CacheDriverCameraShake");
static_assert(offsetof(UFortCabbageIglooVehicle, BounceContactRepulsionForce) == 8232, "Offset mismatch for UFortCabbageIglooVehicle::BounceContactRepulsionForce");
static_assert(offsetof(UFortCabbageIglooVehicle, BoostForce) == 8236, "Offset mismatch for UFortCabbageIglooVehicle::BoostForce");
static_assert(offsetof(UFortCabbageIglooVehicle, MaxVerticalBoostForce) == 8240, "Offset mismatch for UFortCabbageIglooVehicle::MaxVerticalBoostForce");
static_assert(offsetof(UFortCabbageIglooVehicle, BoostSpeedKmh) == 8244, "Offset mismatch for UFortCabbageIglooVehicle::BoostSpeedKmh");
static_assert(offsetof(UFortCabbageIglooVehicle, BaseSphericalDriveParams) == 8248, "Offset mismatch for UFortCabbageIglooVehicle::BaseSphericalDriveParams");
static_assert(offsetof(UFortCabbageIglooVehicle, BaseTowhookParams) == 8320, "Offset mismatch for UFortCabbageIglooVehicle::BaseTowhookParams");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookSpringDeformationRateOnGround) == 8528, "Offset mismatch for UFortCabbageIglooVehicle::TowhookSpringDeformationRateOnGround");
static_assert(offsetof(UFortCabbageIglooVehicle, bAutoRetractGrapple) == 8532, "Offset mismatch for UFortCabbageIglooVehicle::bAutoRetractGrapple");
static_assert(offsetof(UFortCabbageIglooVehicle, bCanHoldGrapple) == 8533, "Offset mismatch for UFortCabbageIglooVehicle::bCanHoldGrapple");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookInterpSpeed) == 8536, "Offset mismatch for UFortCabbageIglooVehicle::TowhookInterpSpeed");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookInterpMaxPercentPerSecond) == 8540, "Offset mismatch for UFortCabbageIglooVehicle::TowhookInterpMaxPercentPerSecond");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookMaxInvalidateTargetAngleDeg) == 8544, "Offset mismatch for UFortCabbageIglooVehicle::TowhookMaxInvalidateTargetAngleDeg");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookMaxInvalidateTargetDot) == 8548, "Offset mismatch for UFortCabbageIglooVehicle::TowhookMaxInvalidateTargetDot");
static_assert(offsetof(UFortCabbageIglooVehicle, InternalBlockerCollisionName) == 8552, "Offset mismatch for UFortCabbageIglooVehicle::InternalBlockerCollisionName");
static_assert(offsetof(UFortCabbageIglooVehicle, ShellRotationInterpSpeed) == 8556, "Offset mismatch for UFortCabbageIglooVehicle::ShellRotationInterpSpeed");
static_assert(offsetof(UFortCabbageIglooVehicle, BoostBounceAction) == 8560, "Offset mismatch for UFortCabbageIglooVehicle::BoostBounceAction");
static_assert(offsetof(UFortCabbageIglooVehicle, ProjectileTraceChannel) == 8780, "Offset mismatch for UFortCabbageIglooVehicle::ProjectileTraceChannel");
static_assert(offsetof(UFortCabbageIglooVehicle, ProjectileSpeedKmh) == 8784, "Offset mismatch for UFortCabbageIglooVehicle::ProjectileSpeedKmh");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookShot) == 8792, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookShot");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookAttached) == 8808, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookAttached");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookDetached) == 8824, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookDetached");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookMissed) == 8840, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookMissed");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookHolstered) == 8856, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookHolstered");
static_assert(offsetof(UFortCabbageIglooVehicle, OnTowhookYanked) == 8872, "Offset mismatch for UFortCabbageIglooVehicle::OnTowhookYanked");
static_assert(offsetof(UFortCabbageIglooVehicle, OnExtendToggled) == 8888, "Offset mismatch for UFortCabbageIglooVehicle::OnExtendToggled");
static_assert(offsetof(UFortCabbageIglooVehicle, ReplicatedAttachState) == 8904, "Offset mismatch for UFortCabbageIglooVehicle::ReplicatedAttachState");
static_assert(offsetof(UFortCabbageIglooVehicle, FortOctopusVehicleConfigs) == 9016, "Offset mismatch for UFortCabbageIglooVehicle::FortOctopusVehicleConfigs");
static_assert(offsetof(UFortCabbageIglooVehicle, ShellRotation) == 9408, "Offset mismatch for UFortCabbageIglooVehicle::ShellRotation");
static_assert(offsetof(UFortCabbageIglooVehicle, CachedCameraDir) == 9504, "Offset mismatch for UFortCabbageIglooVehicle::CachedCameraDir");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookModel) == 9736, "Offset mismatch for UFortCabbageIglooVehicle::TowhookModel");
static_assert(offsetof(UFortCabbageIglooVehicle, TowhookAimDir) == 10832, "Offset mismatch for UFortCabbageIglooVehicle::TowhookAimDir");
static_assert(offsetof(UFortCabbageIglooVehicle, NetTowhookAimDir) == 11024, "Offset mismatch for UFortCabbageIglooVehicle::NetTowhookAimDir");
static_assert(offsetof(UFortCabbageIglooVehicle, CachedContactPoints) == 11048, "Offset mismatch for UFortCabbageIglooVehicle::CachedContactPoints");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheCoilIdleTopR) == 11064, "Offset mismatch for UFortCabbageIglooVehicle::CacheCoilIdleTopR");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheCoilIdleTopL) == 11072, "Offset mismatch for UFortCabbageIglooVehicle::CacheCoilIdleTopL");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheCoilIdleBottomR) == 11080, "Offset mismatch for UFortCabbageIglooVehicle::CacheCoilIdleBottomR");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheCoilIdleBottomL) == 11088, "Offset mismatch for UFortCabbageIglooVehicle::CacheCoilIdleBottomL");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheBoostFX) == 11096, "Offset mismatch for UFortCabbageIglooVehicle::CacheBoostFX");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheDustFX) == 11104, "Offset mismatch for UFortCabbageIglooVehicle::CacheDustFX");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheAudioMovement) == 11112, "Offset mismatch for UFortCabbageIglooVehicle::CacheAudioMovement");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheAudioWind) == 11120, "Offset mismatch for UFortCabbageIglooVehicle::CacheAudioWind");
static_assert(offsetof(UFortCabbageIglooVehicle, CacheAudioTowCable) == 11128, "Offset mismatch for UFortCabbageIglooVehicle::CacheAudioTowCable");

// /Script/MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotifyLoop_Goop
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t SpeedParamName[0x4]; // 0x0C48 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsFallingParamName[0x4]; // 0x0C4C (Size: 0x4, Type: NameProperty)
    std::uint8_t SpeedMapRangeClamped[0x20]; // 0x0C50 (Size: 0x20, Type: StructProperty)
    float InterpSpeed; // 0x0C70 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C74
    void* LoopingAudioComponent; // 0x0C78 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_Goop, SpeedParamName) == 3144, "Offset mismatch for UFortGameplayCueNotifyLoop_Goop::SpeedParamName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Goop, IsFallingParamName) == 3148, "Offset mismatch for UFortGameplayCueNotifyLoop_Goop::IsFallingParamName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Goop, SpeedMapRangeClamped) == 3152, "Offset mismatch for UFortGameplayCueNotifyLoop_Goop::SpeedMapRangeClamped");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Goop, InterpSpeed) == 3184, "Offset mismatch for UFortGameplayCueNotifyLoop_Goop::InterpSpeed");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Goop, LoopingAudioComponent) == 3192, "Offset mismatch for UFortGameplayCueNotifyLoop_Goop::LoopingAudioComponent");

// /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent
// Kind: Class; super: ActorComponent
class UGravityGunTargetTrackingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t AllowLargeObjects[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowMultipleGrabbers[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowVehicles[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowPickups[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowProjectiles[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowForay[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowWhileInVehicle[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    FName GrabbedByGravityGunTagName; // 0x01D8 (Size: 0x8, Type: NameProperty)
    std::uint8_t InvalidTargetTags[0x20]; // 0x01E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetIsPlayerTag[0x20]; // 0x0200 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetIsAlreadyGrabbedTag[0x20]; // 0x0220 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetIsOwnVehicleTag[0x20]; // 0x0240 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate FoundTargetDelegate; // 0x0260 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate DeactivateReticleDelegate; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowLargeObjects) == 192, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowLargeObjects");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowMultipleGrabbers) == 232, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowMultipleGrabbers");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowVehicles) == 272, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowVehicles");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowPickups) == 312, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowPickups");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowProjectiles) == 352, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowProjectiles");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowForay) == 392, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowForay");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowWhileInVehicle) == 432, "Offset mismatch for UGravityGunTargetTrackingComponent::AllowWhileInVehicle");
static_assert(offsetof(UGravityGunTargetTrackingComponent, GrabbedByGravityGunTagName) == 472, "Offset mismatch for UGravityGunTargetTrackingComponent::GrabbedByGravityGunTagName");
static_assert(offsetof(UGravityGunTargetTrackingComponent, InvalidTargetTags) == 480, "Offset mismatch for UGravityGunTargetTrackingComponent::InvalidTargetTags");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsPlayerTag) == 512, "Offset mismatch for UGravityGunTargetTrackingComponent::TargetIsPlayerTag");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsAlreadyGrabbedTag) == 544, "Offset mismatch for UGravityGunTargetTrackingComponent::TargetIsAlreadyGrabbedTag");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsOwnVehicleTag) == 576, "Offset mismatch for UGravityGunTargetTrackingComponent::TargetIsOwnVehicleTag");
static_assert(offsetof(UGravityGunTargetTrackingComponent, FoundTargetDelegate) == 608, "Offset mismatch for UGravityGunTargetTrackingComponent::FoundTargetDelegate");
static_assert(offsetof(UGravityGunTargetTrackingComponent, DeactivateReticleDelegate) == 624, "Offset mismatch for UGravityGunTargetTrackingComponent::DeactivateReticleDelegate");

// /Script/MotherGameplayRuntime.PropGunFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPropGunFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// Kind: Class; super: FortGameplayCueNotify_Loop
class UReactorGradeGameplayCue_ChargeUp
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    void* Pawn; // 0x0C48 (Size: 0x8, Type: ObjectProperty)
    void* CachedAimLocationComponent; // 0x0C50 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FoundEndPoint[0x18]; // 0x0C58 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinHitDistance[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitObjectsLimit[0x2C]; // 0x0C98 (Size: 0x2C, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x0CC4 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, Pawn) == 3144, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::Pawn");
static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, CachedAimLocationComponent) == 3152, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::CachedAimLocationComponent");
static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, FoundEndPoint) == 3160, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::FoundEndPoint");
static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, MinHitDistance) == 3184, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::MinHitDistance");
static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, HitObjectsLimit) == 3224, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::HitObjectsLimit");
static_assert(offsetof(UReactorGradeGameplayCue_ChargeUp, TraceChannel) == 3268, "Offset mismatch for UReactorGradeGameplayCue_ChargeUp::TraceChannel");

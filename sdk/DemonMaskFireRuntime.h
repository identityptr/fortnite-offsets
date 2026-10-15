/**
 * decamp dumper generated SDK
 * Package: /Script/DemonMaskFireRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DemonMaskFireRuntime.DemonMaskFireGadgetAnimInstance
// Kind: Class; super: MaskBaseCCPAnimInstance
class UDemonMaskFireGadgetAnimInstance
{
public:
    std::uint8_t Pad_0000[0x690]; // 0x0000
    std::uint8_t Floater[0x18]; // 0x0690 (Size: 0x18, Type: StructProperty)
    double ElapsedTime; // 0x06A8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UDemonMaskFireGadgetAnimInstance, Floater) == 1680, "Offset mismatch for UDemonMaskFireGadgetAnimInstance::Floater");
static_assert(offsetof(UDemonMaskFireGadgetAnimInstance, ElapsedTime) == 1704, "Offset mismatch for UDemonMaskFireGadgetAnimInstance::ElapsedTime");

// /Script/DemonMaskFireRuntime.DemonMaskLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UDemonMaskLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double IsPlayingFire01_Alpha; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    double IsPlayingFire02_Alpha; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    void* DemonMaskFirePlayerFire01MontageObject; // 0x1180 (Size: 0x8, Type: ObjectProperty)
    void* DemonMaskFirePlayerFire02MontageObject; // 0x1188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDemonMaskLayerAnimInstance, IsPlayingFire01_Alpha) == 4464, "Offset mismatch for UDemonMaskLayerAnimInstance::IsPlayingFire01_Alpha");
static_assert(offsetof(UDemonMaskLayerAnimInstance, IsPlayingFire02_Alpha) == 4472, "Offset mismatch for UDemonMaskLayerAnimInstance::IsPlayingFire02_Alpha");
static_assert(offsetof(UDemonMaskLayerAnimInstance, DemonMaskFirePlayerFire01MontageObject) == 4480, "Offset mismatch for UDemonMaskLayerAnimInstance::DemonMaskFirePlayerFire01MontageObject");
static_assert(offsetof(UDemonMaskLayerAnimInstance, DemonMaskFirePlayerFire02MontageObject) == 4488, "Offset mismatch for UDemonMaskLayerAnimInstance::DemonMaskFirePlayerFire02MontageObject");

// /Script/DemonMaskFireRuntime.FortPrjAthenaDemonFireMask
// Kind: Class; super: FortProjectileAthena
class UFortPrjAthenaDemonFireMask
{
public:
    std::uint8_t Pad_0000[0xC30]; // 0x0000
    TWeakObjectPtr<void> FortPlayerPawn; // 0x0C30 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortPrjAthenaDemonFireMask, FortPlayerPawn) == 3120, "Offset mismatch for UFortPrjAthenaDemonFireMask::FortPlayerPawn");

// /Script/DemonMaskFireRuntime.FortWeaponRangedDemonFireMask
// Kind: Class; super: FortWeaponRanged
class UFortWeaponRangedDemonFireMask
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    TWeakObjectPtr<void> FortPlayerPawn; // 0x2968 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> OutHits; // 0x2970 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortWeaponRangedDemonFireMask, FortPlayerPawn) == 10600, "Offset mismatch for UFortWeaponRangedDemonFireMask::FortPlayerPawn");
static_assert(offsetof(UFortWeaponRangedDemonFireMask, OutHits) == 10608, "Offset mismatch for UFortWeaponRangedDemonFireMask::OutHits");

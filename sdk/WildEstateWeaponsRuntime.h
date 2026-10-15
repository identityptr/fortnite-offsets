/**
 * decamp dumper generated SDK
 * Package: /Script/WildEstateWeaponsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WildEstateWeaponsRuntime.BeanDogAnimInstance
// Kind: Class; super: FortBowWeaponAnimInstance
class UBeanDogAnimInstance
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    std::uint8_t StringRotation[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    std::uint8_t StringLocation[0x18]; // 0x0488 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIkHandR_Off; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitCharging; // 0x04A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStringIK_On; // 0x04A2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBeanDogAnimInstance, StringRotation) == 1136, "Offset mismatch for UBeanDogAnimInstance::StringRotation");
static_assert(offsetof(UBeanDogAnimInstance, StringLocation) == 1160, "Offset mismatch for UBeanDogAnimInstance::StringLocation");
static_assert(offsetof(UBeanDogAnimInstance, bIkHandR_Off) == 1184, "Offset mismatch for UBeanDogAnimInstance::bIkHandR_Off");
static_assert(offsetof(UBeanDogAnimInstance, bExitCharging) == 1185, "Offset mismatch for UBeanDogAnimInstance::bExitCharging");
static_assert(offsetof(UBeanDogAnimInstance, bStringIK_On) == 1186, "Offset mismatch for UBeanDogAnimInstance::bStringIK_On");

// /Script/WildEstateWeaponsRuntime.BeanDogLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance_ExplosiveBow
class UBeanDogLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1250]; // 0x0000
    float PelvisTwist; // 0x1250 (Size: 0x4, Type: FloatProperty)
    float ChargeBlendSpaceCrouchSpeed; // 0x1254 (Size: 0x4, Type: FloatProperty)
    double NW_Run_Alpha; // 0x1258 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UBeanDogLayerAnimInstance, PelvisTwist) == 4688, "Offset mismatch for UBeanDogLayerAnimInstance::PelvisTwist");
static_assert(offsetof(UBeanDogLayerAnimInstance, ChargeBlendSpaceCrouchSpeed) == 4692, "Offset mismatch for UBeanDogLayerAnimInstance::ChargeBlendSpaceCrouchSpeed");
static_assert(offsetof(UBeanDogLayerAnimInstance, NW_Run_Alpha) == 4696, "Offset mismatch for UBeanDogLayerAnimInstance::NW_Run_Alpha");

// /Script/WildEstateWeaponsRuntime.CoveSpiceArmGadgetWeaponAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UCoveSpiceArmGadgetWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    double TranslationZ; // 0x0330 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UCoveSpiceArmGadgetWeaponAnimInstance, TranslationZ) == 816, "Offset mismatch for UCoveSpiceArmGadgetWeaponAnimInstance::TranslationZ");

// /Script/WildEstateWeaponsRuntime.DeerPlumLayerAnimInstance
// Kind: Class; super: ChainsawLayerAnimInstance
class UDeerPlumLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1280]; // 0x0000
    float ScooterPelvisOffset; // 0x1280 (Size: 0x4, Type: FloatProperty)
    float MeleeTwist; // 0x1284 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDeerPlumLayerAnimInstance, ScooterPelvisOffset) == 4736, "Offset mismatch for UDeerPlumLayerAnimInstance::ScooterPelvisOffset");
static_assert(offsetof(UDeerPlumLayerAnimInstance, MeleeTwist) == 4740, "Offset mismatch for UDeerPlumLayerAnimInstance::MeleeTwist");

// /Script/WildEstateWeaponsRuntime.WildEstateColdFernLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UWildEstateColdFernLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bDoSpecialShot; // 0x1170 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWildEstateColdFernLayerAnimInstance, bDoSpecialShot) == 4464, "Offset mismatch for UWildEstateColdFernLayerAnimInstance::bDoSpecialShot");

// /Script/WildEstateWeaponsRuntime.WildEstateColdFernWeaponInterface
// Kind: Class; super: Interface
class UWildEstateColdFernWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WildEstateWeaponsRuntime.WildEstateLunarEelExoticAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UWildEstateLunarEelExoticAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bDynamics; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFired; // 0x0361 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0362
    void* WildEstateLunarEelFireMObject; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* WildEstateLunarEelReloadExoticCMMMObject; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWildEstateLunarEelExoticAnimInstance, bDynamics) == 864, "Offset mismatch for UWildEstateLunarEelExoticAnimInstance::bDynamics");
static_assert(offsetof(UWildEstateLunarEelExoticAnimInstance, bFired) == 865, "Offset mismatch for UWildEstateLunarEelExoticAnimInstance::bFired");
static_assert(offsetof(UWildEstateLunarEelExoticAnimInstance, WildEstateLunarEelFireMObject) == 872, "Offset mismatch for UWildEstateLunarEelExoticAnimInstance::WildEstateLunarEelFireMObject");
static_assert(offsetof(UWildEstateLunarEelExoticAnimInstance, WildEstateLunarEelReloadExoticCMMMObject) == 880, "Offset mismatch for UWildEstateLunarEelExoticAnimInstance::WildEstateLunarEelReloadExoticCMMMObject");

/**
 * decamp dumper generated SDK
 * Package: /Script/FNRetargetOps
 */
#pragma once
#include "Basic.h"

// /Script/FNRetargetOps.IKRetargetWeaponGripOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetWeaponGripOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetWeaponGripOp, Settings) == 24, "Offset mismatch for FIKRetargetWeaponGripOp::Settings");

// /Script/FNRetargetOps.IKRetargetWeaponGripOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetWeaponGripOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SourceMainHandBone[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t SourceOffHandBone[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetMainHandGoalName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetOffHandGoalName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    float OffHandAlpha; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float WeaponScale; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleFromMainHand; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> BonesToScale; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDebugDrawOffHand; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float DebugDrawScale; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDebugDrawSourceLine; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebugDrawAlignment; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetWeaponGripOpSettings, SourceMainHandBone) == 32, "Offset mismatch for FIKRetargetWeaponGripOpSettings::SourceMainHandBone");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, SourceOffHandBone) == 44, "Offset mismatch for FIKRetargetWeaponGripOpSettings::SourceOffHandBone");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, TargetMainHandGoalName) == 56, "Offset mismatch for FIKRetargetWeaponGripOpSettings::TargetMainHandGoalName");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, TargetOffHandGoalName) == 60, "Offset mismatch for FIKRetargetWeaponGripOpSettings::TargetOffHandGoalName");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, OffHandAlpha) == 64, "Offset mismatch for FIKRetargetWeaponGripOpSettings::OffHandAlpha");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, WeaponScale) == 68, "Offset mismatch for FIKRetargetWeaponGripOpSettings::WeaponScale");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, bScaleFromMainHand) == 72, "Offset mismatch for FIKRetargetWeaponGripOpSettings::bScaleFromMainHand");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, BonesToScale) == 80, "Offset mismatch for FIKRetargetWeaponGripOpSettings::BonesToScale");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, bDebugDrawOffHand) == 96, "Offset mismatch for FIKRetargetWeaponGripOpSettings::bDebugDrawOffHand");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, DebugDrawScale) == 100, "Offset mismatch for FIKRetargetWeaponGripOpSettings::DebugDrawScale");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, bDebugDrawSourceLine) == 104, "Offset mismatch for FIKRetargetWeaponGripOpSettings::bDebugDrawSourceLine");
static_assert(offsetof(FIKRetargetWeaponGripOpSettings, bDebugDrawAlignment) == 105, "Offset mismatch for FIKRetargetWeaponGripOpSettings::bDebugDrawAlignment");

// /Script/FNRetargetOps.IKRetargetWeaponGripOpController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetWeaponGripOpController
{
public:
    std::uint8_t Opaque[1];
};

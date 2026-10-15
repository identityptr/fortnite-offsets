/**
 * decamp dumper generated SDK
 * Package: /Script/MetaHumanSDKRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MetaHumanSDKRuntime.MetaHumanCustomizableBodyPart
// Kind: ScriptStruct; super: none
struct FMetaHumanCustomizableBodyPart
{
public:
    void* ControlRigClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t ControlRigLODThreshold; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* PhysicsAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RigidBodyLODThreshold; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    FString ComponentName; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMetaHumanCustomizableBodyPart, ControlRigClass) == 0, "Offset mismatch for FMetaHumanCustomizableBodyPart::ControlRigClass");
static_assert(offsetof(FMetaHumanCustomizableBodyPart, ControlRigLODThreshold) == 8, "Offset mismatch for FMetaHumanCustomizableBodyPart::ControlRigLODThreshold");
static_assert(offsetof(FMetaHumanCustomizableBodyPart, PhysicsAsset) == 16, "Offset mismatch for FMetaHumanCustomizableBodyPart::PhysicsAsset");
static_assert(offsetof(FMetaHumanCustomizableBodyPart, RigidBodyLODThreshold) == 24, "Offset mismatch for FMetaHumanCustomizableBodyPart::RigidBodyLODThreshold");
static_assert(offsetof(FMetaHumanCustomizableBodyPart, ComponentName) == 32, "Offset mismatch for FMetaHumanCustomizableBodyPart::ComponentName");

// /Script/MetaHumanSDKRuntime.MetaHumanComponentBase
// Kind: Class; super: ActorComponent
class UMetaHumanComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString BodyComponentName; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t BodyType; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableBodyCorrectives; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00D2
    FString FaceComponentName; // 0x00D8 (Size: 0x10, Type: StrProperty)
    std::int32_t RigLogicLODThreshold; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableNeckCorrectives; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00ED
    std::int32_t NeckCorrectivesLODThreshold; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableNeckProcControlRig; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00F5
    std::int32_t NeckProcControlRigLODThreshold; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00FC
    std::uint8_t Torso[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    std::uint8_t Legs[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::uint8_t Feet[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaHumanComponentBase, BodyComponentName) == 192, "Offset mismatch for UMetaHumanComponentBase::BodyComponentName");
static_assert(offsetof(UMetaHumanComponentBase, BodyType) == 208, "Offset mismatch for UMetaHumanComponentBase::BodyType");
static_assert(offsetof(UMetaHumanComponentBase, bEnableBodyCorrectives) == 209, "Offset mismatch for UMetaHumanComponentBase::bEnableBodyCorrectives");
static_assert(offsetof(UMetaHumanComponentBase, FaceComponentName) == 216, "Offset mismatch for UMetaHumanComponentBase::FaceComponentName");
static_assert(offsetof(UMetaHumanComponentBase, RigLogicLODThreshold) == 232, "Offset mismatch for UMetaHumanComponentBase::RigLogicLODThreshold");
static_assert(offsetof(UMetaHumanComponentBase, bEnableNeckCorrectives) == 236, "Offset mismatch for UMetaHumanComponentBase::bEnableNeckCorrectives");
static_assert(offsetof(UMetaHumanComponentBase, NeckCorrectivesLODThreshold) == 240, "Offset mismatch for UMetaHumanComponentBase::NeckCorrectivesLODThreshold");
static_assert(offsetof(UMetaHumanComponentBase, bEnableNeckProcControlRig) == 244, "Offset mismatch for UMetaHumanComponentBase::bEnableNeckProcControlRig");
static_assert(offsetof(UMetaHumanComponentBase, NeckProcControlRigLODThreshold) == 248, "Offset mismatch for UMetaHumanComponentBase::NeckProcControlRigLODThreshold");
static_assert(offsetof(UMetaHumanComponentBase, Torso) == 256, "Offset mismatch for UMetaHumanComponentBase::Torso");
static_assert(offsetof(UMetaHumanComponentBase, Legs) == 304, "Offset mismatch for UMetaHumanComponentBase::Legs");
static_assert(offsetof(UMetaHumanComponentBase, Feet) == 352, "Offset mismatch for UMetaHumanComponentBase::Feet");

// /Script/MetaHumanSDKRuntime.MetaHumanComponentUE
// Kind: Class; super: MetaHumanComponentBase
class UMetaHumanComponentUE
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    TSoftClassPtr<void> PostProcessAnimBP; // 0x0190 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UMetaHumanComponentUE, PostProcessAnimBP) == 400, "Offset mismatch for UMetaHumanComponentUE::PostProcessAnimBP");

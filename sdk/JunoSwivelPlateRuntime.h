/**
 * decamp dumper generated SDK
 * Package: /Script/JunoSwivelPlateRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoSwivelPlateRuntime.ConstraintAttachData
// Kind: ScriptStruct; super: none
struct FConstraintAttachData
{
public:
    std::uint8_t LocalBasePos[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalBaseAxis1[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalBaseAxis2[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    FName BaseBodyName; // 0x0048 (Size: 0x8, Type: NameProperty)
    std::uint8_t LocalPlatePos[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalPlateAxis1[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalPlateAxis2[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    FName PlateBodyName; // 0x0098 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FConstraintAttachData, LocalBasePos) == 0, "Offset mismatch for FConstraintAttachData::LocalBasePos");
static_assert(offsetof(FConstraintAttachData, LocalBaseAxis1) == 24, "Offset mismatch for FConstraintAttachData::LocalBaseAxis1");
static_assert(offsetof(FConstraintAttachData, LocalBaseAxis2) == 48, "Offset mismatch for FConstraintAttachData::LocalBaseAxis2");
static_assert(offsetof(FConstraintAttachData, BaseBodyName) == 72, "Offset mismatch for FConstraintAttachData::BaseBodyName");
static_assert(offsetof(FConstraintAttachData, LocalPlatePos) == 80, "Offset mismatch for FConstraintAttachData::LocalPlatePos");
static_assert(offsetof(FConstraintAttachData, LocalPlateAxis1) == 104, "Offset mismatch for FConstraintAttachData::LocalPlateAxis1");
static_assert(offsetof(FConstraintAttachData, LocalPlateAxis2) == 128, "Offset mismatch for FConstraintAttachData::LocalPlateAxis2");
static_assert(offsetof(FConstraintAttachData, PlateBodyName) == 152, "Offset mismatch for FConstraintAttachData::PlateBodyName");

// /Script/JunoSwivelPlateRuntime.GameplayCueNotifyLoop_SwivelPlate
// Kind: Class; super: FortGameplayCueNotify_Loop
class UGameplayCueNotifyLoop_SwivelPlate
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    void* SwivelPlate; // 0x0C48 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCueNotifyLoop_SwivelPlate, SwivelPlate) == 3144, "Offset mismatch for UGameplayCueNotifyLoop_SwivelPlate::SwivelPlate");

// /Script/JunoSwivelPlateRuntime.JunoSwivelBase
// Kind: Class; super: JunoPhysicsToySpawnerActor
class UJunoSwivelBase
{
public:
    std::uint8_t Pad_0000[0xC40]; // 0x0000
    void* SwivelPlateClass; // 0x0C40 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AngularSwing1Locked; // 0x0C48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AngularSwing2Locked; // 0x0C49 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bControlledSwivel; // 0x0C4A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0C4B
    std::uint8_t TorqueDamping[0x28]; // 0x0C50 (Size: 0x28, Type: StructProperty)
    std::uint8_t TorqueLimit[0x28]; // 0x0C78 (Size: 0x28, Type: StructProperty)
    std::uint8_t AngularBreakThreshold[0x28]; // 0x0CA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinearBreakThreshold[0x28]; // 0x0CC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityTarget[0x30]; // 0x0CF0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RelativeSpawnOffset[0x60]; // 0x0D20 (Size: 0x60, Type: StructProperty)
    std::uint8_t RelativeConstraintOffset[0x60]; // 0x0D80 (Size: 0x60, Type: StructProperty)
    void* ControlChannelComponent; // 0x0DE0 (Size: 0x8, Type: ObjectProperty)
    void* Constraint; // 0x0DE8 (Size: 0x8, Type: ObjectProperty)
    void* SwivelPlateActor; // 0x0DF0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachmentData[0xA8]; // 0x0DF8 (Size: 0xA8, Type: StructProperty)
    std::uint8_t bReverseControlledRotation; // 0x0EA0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoSwivelBase, SwivelPlateClass) == 3136, "Offset mismatch for UJunoSwivelBase::SwivelPlateClass");
static_assert(offsetof(UJunoSwivelBase, AngularSwing1Locked) == 3144, "Offset mismatch for UJunoSwivelBase::AngularSwing1Locked");
static_assert(offsetof(UJunoSwivelBase, AngularSwing2Locked) == 3145, "Offset mismatch for UJunoSwivelBase::AngularSwing2Locked");
static_assert(offsetof(UJunoSwivelBase, bControlledSwivel) == 3146, "Offset mismatch for UJunoSwivelBase::bControlledSwivel");
static_assert(offsetof(UJunoSwivelBase, TorqueDamping) == 3152, "Offset mismatch for UJunoSwivelBase::TorqueDamping");
static_assert(offsetof(UJunoSwivelBase, TorqueLimit) == 3192, "Offset mismatch for UJunoSwivelBase::TorqueLimit");
static_assert(offsetof(UJunoSwivelBase, AngularBreakThreshold) == 3232, "Offset mismatch for UJunoSwivelBase::AngularBreakThreshold");
static_assert(offsetof(UJunoSwivelBase, LinearBreakThreshold) == 3272, "Offset mismatch for UJunoSwivelBase::LinearBreakThreshold");
static_assert(offsetof(UJunoSwivelBase, VelocityTarget) == 3312, "Offset mismatch for UJunoSwivelBase::VelocityTarget");
static_assert(offsetof(UJunoSwivelBase, RelativeSpawnOffset) == 3360, "Offset mismatch for UJunoSwivelBase::RelativeSpawnOffset");
static_assert(offsetof(UJunoSwivelBase, RelativeConstraintOffset) == 3456, "Offset mismatch for UJunoSwivelBase::RelativeConstraintOffset");
static_assert(offsetof(UJunoSwivelBase, ControlChannelComponent) == 3552, "Offset mismatch for UJunoSwivelBase::ControlChannelComponent");
static_assert(offsetof(UJunoSwivelBase, Constraint) == 3560, "Offset mismatch for UJunoSwivelBase::Constraint");
static_assert(offsetof(UJunoSwivelBase, SwivelPlateActor) == 3568, "Offset mismatch for UJunoSwivelBase::SwivelPlateActor");
static_assert(offsetof(UJunoSwivelBase, AttachmentData) == 3576, "Offset mismatch for UJunoSwivelBase::AttachmentData");
static_assert(offsetof(UJunoSwivelBase, bReverseControlledRotation) == 3744, "Offset mismatch for UJunoSwivelBase::bReverseControlledRotation");

// /Script/JunoSwivelPlateRuntime.JunoSwivelPlate
// Kind: Class; super: JunoBuildingActor
class UJunoSwivelPlate
{
public:
    std::uint8_t Pad_0000[0xC18]; // 0x0000
    std::uint8_t ChannelsForClockwiseRotation[0x20]; // 0x0C18 (Size: 0x20, Type: StructProperty)
    std::uint8_t ChannelsForCounterclockwiseRotation[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t SwivelCueTag[0x8]; // 0x0C60 (Size: 0x8, Type: StructProperty)
    void* ControlChannelComponent; // 0x0C68 (Size: 0x8, Type: ObjectProperty)
    void* SwivelBaseActor; // 0x0C70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCurrentlyDriving; // 0x0C78 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoSwivelPlate, ChannelsForClockwiseRotation) == 3096, "Offset mismatch for UJunoSwivelPlate::ChannelsForClockwiseRotation");
static_assert(offsetof(UJunoSwivelPlate, ChannelsForCounterclockwiseRotation) == 3128, "Offset mismatch for UJunoSwivelPlate::ChannelsForCounterclockwiseRotation");
static_assert(offsetof(UJunoSwivelPlate, SwivelCueTag) == 3168, "Offset mismatch for UJunoSwivelPlate::SwivelCueTag");
static_assert(offsetof(UJunoSwivelPlate, ControlChannelComponent) == 3176, "Offset mismatch for UJunoSwivelPlate::ControlChannelComponent");
static_assert(offsetof(UJunoSwivelPlate, SwivelBaseActor) == 3184, "Offset mismatch for UJunoSwivelPlate::SwivelBaseActor");
static_assert(offsetof(UJunoSwivelPlate, bCurrentlyDriving) == 3192, "Offset mismatch for UJunoSwivelPlate::bCurrentlyDriving");

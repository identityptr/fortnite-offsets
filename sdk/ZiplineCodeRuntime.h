/**
 * decamp dumper generated SDK
 * Package: /Script/ZiplineCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ZiplineCodeRuntime.FortMovementMode_ZiplineBaseCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_ZiplineBaseCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_ZiplineBaseCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_ZiplineBaseCreationData::LogicClass");

// /Script/ZiplineCodeRuntime.FortMovementMode_ExtLogicZipline
// Kind: Class; super: FortMovementMode_ExtLogicZiplineBase
class UFortMovementMode_ExtLogicZipline
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    TWeakObjectPtr<void> ZiplinePawnComponent; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    float GracePeriodToConnectToZipline; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x01CC
    std::uint8_t ZiplineReentryProtectionDelay[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    float DefaultIgnoreCollisionsTime; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float ZiplineUseSweepDelay; // 0x0204 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0208
    std::uint8_t ReachedEndMaxLateralSpeed[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndVertStrength[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndMinVertStrength[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndMaxZiplineSpeed[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndLateralDamping[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bReachedEndOverrideXYVelocity; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachedEndPlayFeedbackEvent; // 0x02E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x02EA
    std::uint8_t ReachedEndActivateDelay[0x40]; // 0x02F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t JumpedMaxLateralSpeed[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpedVertStrength[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpedLateralDamping[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    std::uint8_t bJumpedOverrideXYVelocity; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpedPlayFeedbackEvent; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x03AA
    std::uint8_t JumpedActivateDelay[0x3C]; // 0x03B0 (Size: 0x3C, Type: StructProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x4]; // 0x03EC (Size: 0x4, Type: StructProperty)
    std::uint8_t ZiplineEnterBlockedTags[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    void* PassiveGE; // 0x0410 (Size: 0x8, Type: ClassProperty)
    void* FallDamageImmunityGE; // 0x0418 (Size: 0x8, Type: ClassProperty)
    void* FallDamageImmunityGENoFX; // 0x0420 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagToUseNoFX[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    void* StructureDamageGE; // 0x0430 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AttachVFXCue[0x4]; // 0x0438 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnteredZiplineAnimEventName[0x4]; // 0x043C (Size: 0x4, Type: NameProperty)
    std::uint8_t ExitedZiplineAnimEventName[0x4]; // 0x0440 (Size: 0x4, Type: NameProperty)
    float RemoveFallDamageImmunityTime; // 0x0444 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TagsThatBlockRemoveFallDamageImmunity[0x20]; // 0x0448 (Size: 0x20, Type: StructProperty)
    float SurroundingsCheckTime; // 0x0468 (Size: 0x4, Type: FloatProperty)
    float SmashBoxPositionAdditionalZ; // 0x046C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SmashBoxExtent[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUsePawnCapsuleForSweepSmash; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0489
    std::uint8_t SweepSmashBoxHalfExtent[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    float SweepSmashBoxPositionAdditionalZ; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x04AC
    TArray<void*> SmashObjectTypes; // 0x04B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SmashImmuneTags[0x20]; // 0x04C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmashCue[0x4]; // 0x04E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SmashTagDestroyBuildings[0x4]; // 0x04E4 (Size: 0x4, Type: StructProperty)
    void* MotorHarnessClass; // 0x04E8 (Size: 0x8, Type: ClassProperty)
    void* MotorHarness; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x20]; // 0x04F8
    void* AscenderAscendingGE; // 0x0518 (Size: 0x8, Type: ClassProperty)
    void* AscenderDescendingGE; // 0x0520 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AscenderEnterTag[0x8]; // 0x0528 (Size: 0x8, Type: StructProperty)
    void* AscenderMaleAscendingAnim; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* AscenderMaleDescendingAnim; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* AscenderFemaleAscendingAnim; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* AscenderFemaleDescendingAnim; // 0x0548 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ZiplinePawnComponent) == 448, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ZiplinePawnComponent");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, GracePeriodToConnectToZipline) == 456, "Offset mismatch for UFortMovementMode_ExtLogicZipline::GracePeriodToConnectToZipline");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ZiplineReentryProtectionDelay) == 472, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ZiplineReentryProtectionDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, DefaultIgnoreCollisionsTime) == 512, "Offset mismatch for UFortMovementMode_ExtLogicZipline::DefaultIgnoreCollisionsTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ZiplineUseSweepDelay) == 516, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ZiplineUseSweepDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndMaxLateralSpeed) == 544, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndVertStrength) == 584, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndMinVertStrength) == 624, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndMinVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndMaxZiplineSpeed) == 664, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndMaxZiplineSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndLateralDamping) == 704, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndLateralDamping");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, bReachedEndOverrideXYVelocity) == 744, "Offset mismatch for UFortMovementMode_ExtLogicZipline::bReachedEndOverrideXYVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, bReachedEndPlayFeedbackEvent) == 745, "Offset mismatch for UFortMovementMode_ExtLogicZipline::bReachedEndPlayFeedbackEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ReachedEndActivateDelay) == 752, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ReachedEndActivateDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, JumpedMaxLateralSpeed) == 816, "Offset mismatch for UFortMovementMode_ExtLogicZipline::JumpedMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, JumpedVertStrength) == 856, "Offset mismatch for UFortMovementMode_ExtLogicZipline::JumpedVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, JumpedLateralDamping) == 896, "Offset mismatch for UFortMovementMode_ExtLogicZipline::JumpedLateralDamping");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, bJumpedOverrideXYVelocity) == 936, "Offset mismatch for UFortMovementMode_ExtLogicZipline::bJumpedOverrideXYVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, bJumpedPlayFeedbackEvent) == 937, "Offset mismatch for UFortMovementMode_ExtLogicZipline::bJumpedPlayFeedbackEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, JumpedActivateDelay) == 944, "Offset mismatch for UFortMovementMode_ExtLogicZipline::JumpedActivateDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, TagPreventHeldObjectDrop) == 1004, "Offset mismatch for UFortMovementMode_ExtLogicZipline::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ZiplineEnterBlockedTags) == 1008, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ZiplineEnterBlockedTags");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, PassiveGE) == 1040, "Offset mismatch for UFortMovementMode_ExtLogicZipline::PassiveGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, FallDamageImmunityGE) == 1048, "Offset mismatch for UFortMovementMode_ExtLogicZipline::FallDamageImmunityGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, FallDamageImmunityGENoFX) == 1056, "Offset mismatch for UFortMovementMode_ExtLogicZipline::FallDamageImmunityGENoFX");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, TagToUseNoFX) == 1064, "Offset mismatch for UFortMovementMode_ExtLogicZipline::TagToUseNoFX");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, StructureDamageGE) == 1072, "Offset mismatch for UFortMovementMode_ExtLogicZipline::StructureDamageGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AttachVFXCue) == 1080, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AttachVFXCue");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, EnteredZiplineAnimEventName) == 1084, "Offset mismatch for UFortMovementMode_ExtLogicZipline::EnteredZiplineAnimEventName");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, ExitedZiplineAnimEventName) == 1088, "Offset mismatch for UFortMovementMode_ExtLogicZipline::ExitedZiplineAnimEventName");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, RemoveFallDamageImmunityTime) == 1092, "Offset mismatch for UFortMovementMode_ExtLogicZipline::RemoveFallDamageImmunityTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, TagsThatBlockRemoveFallDamageImmunity) == 1096, "Offset mismatch for UFortMovementMode_ExtLogicZipline::TagsThatBlockRemoveFallDamageImmunity");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SurroundingsCheckTime) == 1128, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SurroundingsCheckTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashBoxPositionAdditionalZ) == 1132, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashBoxPositionAdditionalZ");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashBoxExtent) == 1136, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashBoxExtent");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, bUsePawnCapsuleForSweepSmash) == 1160, "Offset mismatch for UFortMovementMode_ExtLogicZipline::bUsePawnCapsuleForSweepSmash");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SweepSmashBoxHalfExtent) == 1168, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SweepSmashBoxHalfExtent");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SweepSmashBoxPositionAdditionalZ) == 1192, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SweepSmashBoxPositionAdditionalZ");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashObjectTypes) == 1200, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashObjectTypes");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashImmuneTags) == 1216, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashImmuneTags");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashCue) == 1248, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashCue");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, SmashTagDestroyBuildings) == 1252, "Offset mismatch for UFortMovementMode_ExtLogicZipline::SmashTagDestroyBuildings");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, MotorHarnessClass) == 1256, "Offset mismatch for UFortMovementMode_ExtLogicZipline::MotorHarnessClass");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, MotorHarness) == 1264, "Offset mismatch for UFortMovementMode_ExtLogicZipline::MotorHarness");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderAscendingGE) == 1304, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderAscendingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderDescendingGE) == 1312, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderDescendingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderEnterTag) == 1320, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderEnterTag");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderMaleAscendingAnim) == 1328, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderMaleAscendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderMaleDescendingAnim) == 1336, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderMaleDescendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderFemaleAscendingAnim) == 1344, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderFemaleAscendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZipline, AscenderFemaleDescendingAnim) == 1352, "Offset mismatch for UFortMovementMode_ExtLogicZipline::AscenderFemaleDescendingAnim");

// /Script/ZiplineCodeRuntime.FortMovementMode_ExtLogicZiplineBase
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicZiplineBase
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    TWeakObjectPtr<void> ZiplinePawnComponent; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    float GracePeriodToConnectToZipline; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x01CC
    std::uint8_t ZiplineReentryProtectionDelay[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    float DefaultIgnoreCollisionsTime; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float ZiplineUseSweepDelay; // 0x0204 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0208
    std::uint8_t ReachedEndMaxLateralSpeed[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndVertStrength[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndMinVertStrength[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndMaxZiplineSpeed[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachedEndLateralDamping[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bReachedEndOverrideXYVelocity; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachedEndPlayFeedbackEvent; // 0x02E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x02EA
    std::uint8_t ReachedEndActivateDelay[0x40]; // 0x02F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t JumpedMaxLateralSpeed[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpedVertStrength[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpedLateralDamping[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    std::uint8_t bJumpedOverrideXYVelocity; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpedPlayFeedbackEvent; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x03AA
    std::uint8_t JumpedActivateDelay[0x3C]; // 0x03B0 (Size: 0x3C, Type: StructProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x4]; // 0x03EC (Size: 0x4, Type: StructProperty)
    std::uint8_t ZiplineEnterBlockedTags[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    void* PassiveGE; // 0x0410 (Size: 0x8, Type: ClassProperty)
    void* FallDamageImmunityGE; // 0x0418 (Size: 0x8, Type: ClassProperty)
    void* FallDamageImmunityGENoFX; // 0x0420 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagToUseNoFX[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    void* StructureDamageGE; // 0x0430 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AttachVFXCue[0x4]; // 0x0438 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnteredZiplineAnimEventName[0x4]; // 0x043C (Size: 0x4, Type: NameProperty)
    std::uint8_t ExitedZiplineAnimEventName[0x4]; // 0x0440 (Size: 0x4, Type: NameProperty)
    float RemoveFallDamageImmunityTime; // 0x0444 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TagsThatBlockRemoveFallDamageImmunity[0x20]; // 0x0448 (Size: 0x20, Type: StructProperty)
    float SurroundingsCheckTime; // 0x0468 (Size: 0x4, Type: FloatProperty)
    float SmashBoxPositionAdditionalZ; // 0x046C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SmashBoxExtent[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUsePawnCapsuleForSweepSmash; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0489
    std::uint8_t SweepSmashBoxHalfExtent[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    float SweepSmashBoxPositionAdditionalZ; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x04AC
    TArray<void*> SmashObjectTypes; // 0x04B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SmashImmuneTags[0x20]; // 0x04C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmashCue[0x4]; // 0x04E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SmashTagDestroyBuildings[0x4]; // 0x04E4 (Size: 0x4, Type: StructProperty)
    void* MotorHarnessClass; // 0x04E8 (Size: 0x8, Type: ClassProperty)
    void* MotorHarness; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x20]; // 0x04F8
    void* AscenderAscendingGE; // 0x0518 (Size: 0x8, Type: ClassProperty)
    void* AscenderDescendingGE; // 0x0520 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AscenderEnterTag[0x8]; // 0x0528 (Size: 0x8, Type: StructProperty)
    void* AscenderMaleAscendingAnim; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* AscenderMaleDescendingAnim; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* AscenderFemaleAscendingAnim; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* AscenderFemaleDescendingAnim; // 0x0548 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ZiplinePawnComponent) == 448, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ZiplinePawnComponent");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, GracePeriodToConnectToZipline) == 456, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::GracePeriodToConnectToZipline");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ZiplineReentryProtectionDelay) == 472, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ZiplineReentryProtectionDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, DefaultIgnoreCollisionsTime) == 512, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::DefaultIgnoreCollisionsTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ZiplineUseSweepDelay) == 516, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ZiplineUseSweepDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndMaxLateralSpeed) == 544, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndVertStrength) == 584, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndMinVertStrength) == 624, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndMinVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndMaxZiplineSpeed) == 664, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndMaxZiplineSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndLateralDamping) == 704, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndLateralDamping");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, bReachedEndOverrideXYVelocity) == 744, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::bReachedEndOverrideXYVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, bReachedEndPlayFeedbackEvent) == 745, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::bReachedEndPlayFeedbackEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ReachedEndActivateDelay) == 752, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ReachedEndActivateDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, JumpedMaxLateralSpeed) == 816, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::JumpedMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, JumpedVertStrength) == 856, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::JumpedVertStrength");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, JumpedLateralDamping) == 896, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::JumpedLateralDamping");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, bJumpedOverrideXYVelocity) == 936, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::bJumpedOverrideXYVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, bJumpedPlayFeedbackEvent) == 937, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::bJumpedPlayFeedbackEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, JumpedActivateDelay) == 944, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::JumpedActivateDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, TagPreventHeldObjectDrop) == 1004, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ZiplineEnterBlockedTags) == 1008, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ZiplineEnterBlockedTags");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, PassiveGE) == 1040, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::PassiveGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, FallDamageImmunityGE) == 1048, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::FallDamageImmunityGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, FallDamageImmunityGENoFX) == 1056, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::FallDamageImmunityGENoFX");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, TagToUseNoFX) == 1064, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::TagToUseNoFX");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, StructureDamageGE) == 1072, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::StructureDamageGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AttachVFXCue) == 1080, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AttachVFXCue");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, EnteredZiplineAnimEventName) == 1084, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::EnteredZiplineAnimEventName");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, ExitedZiplineAnimEventName) == 1088, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::ExitedZiplineAnimEventName");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, RemoveFallDamageImmunityTime) == 1092, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::RemoveFallDamageImmunityTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, TagsThatBlockRemoveFallDamageImmunity) == 1096, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::TagsThatBlockRemoveFallDamageImmunity");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SurroundingsCheckTime) == 1128, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SurroundingsCheckTime");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashBoxPositionAdditionalZ) == 1132, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashBoxPositionAdditionalZ");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashBoxExtent) == 1136, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashBoxExtent");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, bUsePawnCapsuleForSweepSmash) == 1160, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::bUsePawnCapsuleForSweepSmash");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SweepSmashBoxHalfExtent) == 1168, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SweepSmashBoxHalfExtent");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SweepSmashBoxPositionAdditionalZ) == 1192, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SweepSmashBoxPositionAdditionalZ");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashObjectTypes) == 1200, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashObjectTypes");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashImmuneTags) == 1216, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashImmuneTags");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashCue) == 1248, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashCue");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, SmashTagDestroyBuildings) == 1252, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::SmashTagDestroyBuildings");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, MotorHarnessClass) == 1256, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::MotorHarnessClass");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, MotorHarness) == 1264, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::MotorHarness");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderAscendingGE) == 1304, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderAscendingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderDescendingGE) == 1312, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderDescendingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderEnterTag) == 1320, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderEnterTag");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderMaleAscendingAnim) == 1328, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderMaleAscendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderMaleDescendingAnim) == 1336, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderMaleDescendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderFemaleAscendingAnim) == 1344, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderFemaleAscendingAnim");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineBase, AscenderFemaleDescendingAnim) == 1352, "Offset mismatch for UFortMovementMode_ExtLogicZiplineBase::AscenderFemaleDescendingAnim");

// /Script/ZiplineCodeRuntime.FortMovementMode_ExtLogicZiplineSpline
// Kind: Class; super: FortMovementMode_ExtLogicZiplineBase
class UFortMovementMode_ExtLogicZiplineSpline
{
public:
    std::uint8_t Pad_0000[0x550]; // 0x0000
    std::uint8_t XYVelocityClampMaxValue[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    float VerticalZiplineUseSweepDelay; // 0x0578 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicZiplineSpline, XYVelocityClampMaxValue) == 1360, "Offset mismatch for UFortMovementMode_ExtLogicZiplineSpline::XYVelocityClampMaxValue");
static_assert(offsetof(UFortMovementMode_ExtLogicZiplineSpline, VerticalZiplineUseSweepDelay) == 1400, "Offset mismatch for UFortMovementMode_ExtLogicZiplineSpline::VerticalZiplineUseSweepDelay");

// /Script/ZiplineCodeRuntime.FortMovementMode_ZiplineBaseRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_ZiplineBaseRuntimeData
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    float StartElapsedTime; // 0x009C (Size: 0x4, Type: FloatProperty)
    float EndElapsedTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsStartElapsedTime; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsEndElapsedTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x5C]; // 0x00AC
    float RemoveFallDamageImmunityStartElapsedTime; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float RemoveFallDamageImmunityEndElapsedTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0110
    float SurroundingsCheckStartElapsedTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float SurroundingsCheckEndElapsedTime; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0120
    std::uint8_t bHolsterApplied; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0129
    TWeakObjectPtr<void> AscenderMontageSelected; // 0x012C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, StartElapsedTime) == 156, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::StartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, EndElapsedTime) == 160, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::EndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, IgnoreCollisionsStartElapsedTime) == 164, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::IgnoreCollisionsStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, IgnoreCollisionsEndElapsedTime) == 168, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::IgnoreCollisionsEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, RemoveFallDamageImmunityStartElapsedTime) == 264, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::RemoveFallDamageImmunityStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, RemoveFallDamageImmunityEndElapsedTime) == 268, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::RemoveFallDamageImmunityEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, SurroundingsCheckStartElapsedTime) == 280, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::SurroundingsCheckStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, SurroundingsCheckEndElapsedTime) == 284, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::SurroundingsCheckEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, bHolsterApplied) == 296, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::bHolsterApplied");
static_assert(offsetof(UFortMovementMode_ZiplineBaseRuntimeData, AscenderMontageSelected) == 300, "Offset mismatch for UFortMovementMode_ZiplineBaseRuntimeData::AscenderMontageSelected");

// /Script/ZiplineCodeRuntime.FortMovementMode_ZiplineRuntimeData
// Kind: Class; super: FortMovementMode_ZiplineBaseRuntimeData
class UFortMovementMode_ZiplineRuntimeData
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    float StartElapsedTime; // 0x009C (Size: 0x4, Type: FloatProperty)
    float EndElapsedTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsStartElapsedTime; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsEndElapsedTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x5C]; // 0x00AC
    float RemoveFallDamageImmunityStartElapsedTime; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float RemoveFallDamageImmunityEndElapsedTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0110
    float SurroundingsCheckStartElapsedTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float SurroundingsCheckEndElapsedTime; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0120
    std::uint8_t bHolsterApplied; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0129
    TWeakObjectPtr<void> AscenderMontageSelected; // 0x012C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, StartElapsedTime) == 156, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::StartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, EndElapsedTime) == 160, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::EndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, IgnoreCollisionsStartElapsedTime) == 164, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::IgnoreCollisionsStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, IgnoreCollisionsEndElapsedTime) == 168, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::IgnoreCollisionsEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, RemoveFallDamageImmunityStartElapsedTime) == 264, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::RemoveFallDamageImmunityStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, RemoveFallDamageImmunityEndElapsedTime) == 268, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::RemoveFallDamageImmunityEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, SurroundingsCheckStartElapsedTime) == 280, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::SurroundingsCheckStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, SurroundingsCheckEndElapsedTime) == 284, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::SurroundingsCheckEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, bHolsterApplied) == 296, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::bHolsterApplied");
static_assert(offsetof(UFortMovementMode_ZiplineRuntimeData, AscenderMontageSelected) == 300, "Offset mismatch for UFortMovementMode_ZiplineRuntimeData::AscenderMontageSelected");

// /Script/ZiplineCodeRuntime.FortMovementMode_ZiplineSplineRuntimeData
// Kind: Class; super: FortMovementMode_ZiplineBaseRuntimeData
class UFortMovementMode_ZiplineSplineRuntimeData
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    float StartElapsedTime; // 0x009C (Size: 0x4, Type: FloatProperty)
    float EndElapsedTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsStartElapsedTime; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float IgnoreCollisionsEndElapsedTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x5C]; // 0x00AC
    float RemoveFallDamageImmunityStartElapsedTime; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float RemoveFallDamageImmunityEndElapsedTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0110
    float SurroundingsCheckStartElapsedTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float SurroundingsCheckEndElapsedTime; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0120
    std::uint8_t bHolsterApplied; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0129
    TWeakObjectPtr<void> AscenderMontageSelected; // 0x012C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, StartElapsedTime) == 156, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::StartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, EndElapsedTime) == 160, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::EndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, IgnoreCollisionsStartElapsedTime) == 164, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::IgnoreCollisionsStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, IgnoreCollisionsEndElapsedTime) == 168, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::IgnoreCollisionsEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, RemoveFallDamageImmunityStartElapsedTime) == 264, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::RemoveFallDamageImmunityStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, RemoveFallDamageImmunityEndElapsedTime) == 268, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::RemoveFallDamageImmunityEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, SurroundingsCheckStartElapsedTime) == 280, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::SurroundingsCheckStartElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, SurroundingsCheckEndElapsedTime) == 284, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::SurroundingsCheckEndElapsedTime");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, bHolsterApplied) == 296, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::bHolsterApplied");
static_assert(offsetof(UFortMovementMode_ZiplineSplineRuntimeData, AscenderMontageSelected) == 300, "Offset mismatch for UFortMovementMode_ZiplineSplineRuntimeData::AscenderMontageSelected");

// /Script/ZiplineCodeRuntime.FortPawnComponent_Zipline
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_Zipline
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* ZiplineExtLogicClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* ZiplineSplineExtLogicClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> OwnerPawn; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    float ZiplineSocketZOffset; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x00F4
    std::uint8_t UseLegacyCode[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseLegacyGameplayAbilities[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_Zipline, ZiplineExtLogicClass) == 208, "Offset mismatch for UFortPawnComponent_Zipline::ZiplineExtLogicClass");
static_assert(offsetof(UFortPawnComponent_Zipline, ZiplineSplineExtLogicClass) == 216, "Offset mismatch for UFortPawnComponent_Zipline::ZiplineSplineExtLogicClass");
static_assert(offsetof(UFortPawnComponent_Zipline, OwnerPawn) == 224, "Offset mismatch for UFortPawnComponent_Zipline::OwnerPawn");
static_assert(offsetof(UFortPawnComponent_Zipline, OwnerMovementComponent) == 232, "Offset mismatch for UFortPawnComponent_Zipline::OwnerMovementComponent");
static_assert(offsetof(UFortPawnComponent_Zipline, ZiplineSocketZOffset) == 240, "Offset mismatch for UFortPawnComponent_Zipline::ZiplineSocketZOffset");
static_assert(offsetof(UFortPawnComponent_Zipline, UseLegacyCode) == 264, "Offset mismatch for UFortPawnComponent_Zipline::UseLegacyCode");
static_assert(offsetof(UFortPawnComponent_Zipline, UseLegacyGameplayAbilities) == 304, "Offset mismatch for UFortPawnComponent_Zipline::UseLegacyGameplayAbilities");

// /Script/ZiplineCodeRuntime.FortZiplineMotorHarness
// Kind: Class; super: Actor
class UFortZiplineMotorHarness
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TWeakObjectPtr<void> AttachedPlayer; // 0x0270 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AttachedZipline; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bHasHitAnotherPlayer; // 0x0280 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortZiplineMotorHarness, AttachedPlayer) == 624, "Offset mismatch for UFortZiplineMotorHarness::AttachedPlayer");
static_assert(offsetof(UFortZiplineMotorHarness, AttachedZipline) == 632, "Offset mismatch for UFortZiplineMotorHarness::AttachedZipline");
static_assert(offsetof(UFortZiplineMotorHarness, bHasHitAnotherPlayer) == 640, "Offset mismatch for UFortZiplineMotorHarness::bHasHitAnotherPlayer");

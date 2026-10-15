/**
 * decamp dumper generated SDK
 * Package: /Script/ChainsawGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ChainsawGameplayRuntime.FortMovementMode_ChainsawCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_ChainsawCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_ChainsawCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_ChainsawCreationData::LogicClass");

// /Script/ChainsawGameplayRuntime.ChainsawAnimInstance
// Kind: Class; super: AnimInstance
class UChainsawAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    double ChainPlayRate; // 0x0260 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSpinning; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSprinting; // 0x0269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquip; // 0x026A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNotEquip; // 0x026B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSliding; // 0x026D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x026E
    std::uint8_t SprintTagName[0x4]; // 0x0270 (Size: 0x4, Type: StructProperty)
    std::uint8_t EquippedTagName[0x4]; // 0x0274 (Size: 0x4, Type: StructProperty)
    std::uint8_t FallingTagName[0x4]; // 0x0278 (Size: 0x4, Type: StructProperty)
    std::uint8_t SlidingTagName[0x1]; // 0x027C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChainsawAnimInstance, ChainPlayRate) == 608, "Offset mismatch for UChainsawAnimInstance::ChainPlayRate");
static_assert(offsetof(UChainsawAnimInstance, bIsSpinning) == 616, "Offset mismatch for UChainsawAnimInstance::bIsSpinning");
static_assert(offsetof(UChainsawAnimInstance, bIsSprinting) == 617, "Offset mismatch for UChainsawAnimInstance::bIsSprinting");
static_assert(offsetof(UChainsawAnimInstance, bIsEquip) == 618, "Offset mismatch for UChainsawAnimInstance::bIsEquip");
static_assert(offsetof(UChainsawAnimInstance, bIsNotEquip) == 619, "Offset mismatch for UChainsawAnimInstance::bIsNotEquip");
static_assert(offsetof(UChainsawAnimInstance, bIsFalling) == 620, "Offset mismatch for UChainsawAnimInstance::bIsFalling");
static_assert(offsetof(UChainsawAnimInstance, bIsSliding) == 621, "Offset mismatch for UChainsawAnimInstance::bIsSliding");
static_assert(offsetof(UChainsawAnimInstance, SprintTagName) == 624, "Offset mismatch for UChainsawAnimInstance::SprintTagName");
static_assert(offsetof(UChainsawAnimInstance, EquippedTagName) == 628, "Offset mismatch for UChainsawAnimInstance::EquippedTagName");
static_assert(offsetof(UChainsawAnimInstance, FallingTagName) == 632, "Offset mismatch for UChainsawAnimInstance::FallingTagName");
static_assert(offsetof(UChainsawAnimInstance, SlidingTagName) == 636, "Offset mismatch for UChainsawAnimInstance::SlidingTagName");

// /Script/ChainsawGameplayRuntime.ChainsawAttributeSet
// Kind: Class; super: FortAttributeSet
class UChainsawAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Overheat[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChainsawAttributeSet, Overheat) == 72, "Offset mismatch for UChainsawAttributeSet::Overheat");

// /Script/ChainsawGameplayRuntime.ChainsawLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UChainsawLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsChainsawScooter; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    float LeanX; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float LeanY; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFallingIntoScooter; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScooterFalling; // 0x117D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNotChainsawScooter; // 0x117E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x117F
    float CustomMeleeTwist; // 0x1180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsNotEquip; // 0x1184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x1185
    float ChainsawScooterPelvisOffset; // 0x1188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsUpperBodyEquip; // 0x118C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x118D
    double ForwardSpeedInterp; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    double LateralSpeedInterp; // 0x1198 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSlidingMovementMode; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOtherMovementMode; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x11A2
    std::uint8_t StartedSharpTurnTagName[0x4]; // 0x11A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t EndedSharpTurnTagName[0x4]; // 0x11A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t FallingIntoScooterTagName[0x4]; // 0x11AC (Size: 0x4, Type: StructProperty)
    std::uint8_t HoldingScooterButtonTagName[0x4]; // 0x11B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ScooteringTagName[0x4]; // 0x11B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ZipLiningOnSplineTagName[0x4]; // 0x11B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SurfaceSwimmingTagName[0x4]; // 0x11BC (Size: 0x4, Type: StructProperty)
    std::uint8_t ParachutingTagName[0x4]; // 0x11C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkydivingTagName[0x4]; // 0x11C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t BallooningTagName[0x4]; // 0x11C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t GrindingTagName[0x4]; // 0x11CC (Size: 0x4, Type: StructProperty)
    std::uint8_t SlidingTagName[0x4]; // 0x11D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DrivingTagName[0x4]; // 0x11D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t PassengerTagName[0x4]; // 0x11D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChainsawTagName[0x1]; // 0x11DC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChainsawLayerAnimInstance, bIsChainsawScooter) == 4464, "Offset mismatch for UChainsawLayerAnimInstance::bIsChainsawScooter");
static_assert(offsetof(UChainsawLayerAnimInstance, LeanX) == 4468, "Offset mismatch for UChainsawLayerAnimInstance::LeanX");
static_assert(offsetof(UChainsawLayerAnimInstance, LeanY) == 4472, "Offset mismatch for UChainsawLayerAnimInstance::LeanY");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsFallingIntoScooter) == 4476, "Offset mismatch for UChainsawLayerAnimInstance::bIsFallingIntoScooter");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsScooterFalling) == 4477, "Offset mismatch for UChainsawLayerAnimInstance::bIsScooterFalling");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsNotChainsawScooter) == 4478, "Offset mismatch for UChainsawLayerAnimInstance::bIsNotChainsawScooter");
static_assert(offsetof(UChainsawLayerAnimInstance, CustomMeleeTwist) == 4480, "Offset mismatch for UChainsawLayerAnimInstance::CustomMeleeTwist");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsNotEquip) == 4484, "Offset mismatch for UChainsawLayerAnimInstance::bIsNotEquip");
static_assert(offsetof(UChainsawLayerAnimInstance, ChainsawScooterPelvisOffset) == 4488, "Offset mismatch for UChainsawLayerAnimInstance::ChainsawScooterPelvisOffset");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsUpperBodyEquip) == 4492, "Offset mismatch for UChainsawLayerAnimInstance::bIsUpperBodyEquip");
static_assert(offsetof(UChainsawLayerAnimInstance, ForwardSpeedInterp) == 4496, "Offset mismatch for UChainsawLayerAnimInstance::ForwardSpeedInterp");
static_assert(offsetof(UChainsawLayerAnimInstance, LateralSpeedInterp) == 4504, "Offset mismatch for UChainsawLayerAnimInstance::LateralSpeedInterp");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsSlidingMovementMode) == 4512, "Offset mismatch for UChainsawLayerAnimInstance::bIsSlidingMovementMode");
static_assert(offsetof(UChainsawLayerAnimInstance, bIsOtherMovementMode) == 4513, "Offset mismatch for UChainsawLayerAnimInstance::bIsOtherMovementMode");
static_assert(offsetof(UChainsawLayerAnimInstance, StartedSharpTurnTagName) == 4516, "Offset mismatch for UChainsawLayerAnimInstance::StartedSharpTurnTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, EndedSharpTurnTagName) == 4520, "Offset mismatch for UChainsawLayerAnimInstance::EndedSharpTurnTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, FallingIntoScooterTagName) == 4524, "Offset mismatch for UChainsawLayerAnimInstance::FallingIntoScooterTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, HoldingScooterButtonTagName) == 4528, "Offset mismatch for UChainsawLayerAnimInstance::HoldingScooterButtonTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, ScooteringTagName) == 4532, "Offset mismatch for UChainsawLayerAnimInstance::ScooteringTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, ZipLiningOnSplineTagName) == 4536, "Offset mismatch for UChainsawLayerAnimInstance::ZipLiningOnSplineTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, SurfaceSwimmingTagName) == 4540, "Offset mismatch for UChainsawLayerAnimInstance::SurfaceSwimmingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, ParachutingTagName) == 4544, "Offset mismatch for UChainsawLayerAnimInstance::ParachutingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, SkydivingTagName) == 4548, "Offset mismatch for UChainsawLayerAnimInstance::SkydivingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, BallooningTagName) == 4552, "Offset mismatch for UChainsawLayerAnimInstance::BallooningTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, GrindingTagName) == 4556, "Offset mismatch for UChainsawLayerAnimInstance::GrindingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, SlidingTagName) == 4560, "Offset mismatch for UChainsawLayerAnimInstance::SlidingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, DrivingTagName) == 4564, "Offset mismatch for UChainsawLayerAnimInstance::DrivingTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, PassengerTagName) == 4568, "Offset mismatch for UChainsawLayerAnimInstance::PassengerTagName");
static_assert(offsetof(UChainsawLayerAnimInstance, ChainsawTagName) == 4572, "Offset mismatch for UChainsawLayerAnimInstance::ChainsawTagName");

// /Script/ChainsawGameplayRuntime.FortMovementMode_ChainsawRuntimeData
// Kind: Class; super: FortMovementMode_ItemActivatedRuntimeData
class UFortMovementMode_ChainsawRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_ChainsawRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_ChainsawRuntimeData::EndReasonFlags");

// /Script/ChainsawGameplayRuntime.FortMovementMode_ExtChainsaw
// Kind: Class; super: FortMovementMode_ItemActivated
class UFortMovementMode_ExtChainsaw
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t TAG_Scootering[0x4]; // 0x01E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t TAG_BlockedByObstacle[0x4]; // 0x01E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t TAG_StopSawScooter[0x4]; // 0x01E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TAG_StopSawScooterFromLedgeFall[0x4]; // 0x01EC (Size: 0x4, Type: StructProperty)
    std::uint8_t TAG_StartedSharpTurn[0x4]; // 0x01F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t TAG_EndedSharpTurn[0x4]; // 0x01F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpeedDefault[0x30]; // 0x01F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpeedBlocked[0x30]; // 0x0228 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpeedSharpTurn[0x30]; // 0x0258 (Size: 0x30, Type: StructProperty)
    std::uint8_t InterpSpeedDefault[0x30]; // 0x0288 (Size: 0x30, Type: StructProperty)
    std::uint8_t InterpSpeedBlocked[0x30]; // 0x02B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TurnSpeedDefault[0x30]; // 0x02E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TurnSpeedSharpTurn[0x30]; // 0x0318 (Size: 0x30, Type: StructProperty)
    std::uint8_t DotProductSharpTurn[0x30]; // 0x0348 (Size: 0x30, Type: StructProperty)
    std::uint8_t DotProductStraightenedOut[0x30]; // 0x0378 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinTimeForSharpTurn[0x30]; // 0x03A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t GoalDirectionThreshold[0x30]; // 0x03D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bDeNativize; // 0x0408 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0409
    void* DenativizedRuntimeDataClass; // 0x0410 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_Scootering) == 480, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_Scootering");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_BlockedByObstacle) == 484, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_BlockedByObstacle");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_StopSawScooter) == 488, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_StopSawScooter");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_StopSawScooterFromLedgeFall) == 492, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_StopSawScooterFromLedgeFall");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_StartedSharpTurn) == 496, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_StartedSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TAG_EndedSharpTurn) == 500, "Offset mismatch for UFortMovementMode_ExtChainsaw::TAG_EndedSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, SpeedDefault) == 504, "Offset mismatch for UFortMovementMode_ExtChainsaw::SpeedDefault");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, SpeedBlocked) == 552, "Offset mismatch for UFortMovementMode_ExtChainsaw::SpeedBlocked");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, SpeedSharpTurn) == 600, "Offset mismatch for UFortMovementMode_ExtChainsaw::SpeedSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, InterpSpeedDefault) == 648, "Offset mismatch for UFortMovementMode_ExtChainsaw::InterpSpeedDefault");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, InterpSpeedBlocked) == 696, "Offset mismatch for UFortMovementMode_ExtChainsaw::InterpSpeedBlocked");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TurnSpeedDefault) == 744, "Offset mismatch for UFortMovementMode_ExtChainsaw::TurnSpeedDefault");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, TurnSpeedSharpTurn) == 792, "Offset mismatch for UFortMovementMode_ExtChainsaw::TurnSpeedSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, DotProductSharpTurn) == 840, "Offset mismatch for UFortMovementMode_ExtChainsaw::DotProductSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, DotProductStraightenedOut) == 888, "Offset mismatch for UFortMovementMode_ExtChainsaw::DotProductStraightenedOut");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, MinTimeForSharpTurn) == 936, "Offset mismatch for UFortMovementMode_ExtChainsaw::MinTimeForSharpTurn");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, GoalDirectionThreshold) == 984, "Offset mismatch for UFortMovementMode_ExtChainsaw::GoalDirectionThreshold");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, bDeNativize) == 1032, "Offset mismatch for UFortMovementMode_ExtChainsaw::bDeNativize");
static_assert(offsetof(UFortMovementMode_ExtChainsaw, DenativizedRuntimeDataClass) == 1040, "Offset mismatch for UFortMovementMode_ExtChainsaw::DenativizedRuntimeDataClass");

/**
 * decamp dumper generated SDK
 * Package: /Script/SunRoseChainWhipGameplay
 */
#pragma once
#include "Basic.h"

// /Script/SunRoseChainWhipGameplay.Chains_SunRose_Sharp_Wep_AnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UChains_SunRose_Sharp_Wep_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    float AttackRange; // 0x0630 (Size: 0x4, Type: FloatProperty)
    std::int32_t ActiveTechniqueIndex; // 0x0634 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsTechniqueActive; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasIsTargetingTag; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x063A
    float PawnVelocitySpeed; // 0x063C (Size: 0x4, Type: FloatProperty)
    float PawnVelocitySpeedCutoff; // 0x0640 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAttack_01; // 0x0644 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAttack_02; // 0x0645 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAttack_03; // 0x0646 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllowPhysics; // 0x0647 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMantisDone; // 0x0648 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpperBodyAttack_01; // 0x0649 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpperBodyAttack_02; // 0x064A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x064B
    float XMoveRight; // 0x064C (Size: 0x4, Type: FloatProperty)
    float XMoveLeft; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float YMoveFwd; // 0x0654 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIs700Distance; // 0x0658 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIs1200Distance; // 0x0659 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnOffPhysics; // 0x065A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x065B
    float AttackRange700; // 0x065C (Size: 0x4, Type: FloatProperty)
    float AttackRange1200; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float AttackRange1500; // 0x0664 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsTargetingTag[0x1]; // 0x0668 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, AttackRange) == 1584, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::AttackRange");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, ActiveTechniqueIndex) == 1588, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::ActiveTechniqueIndex");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsTechniqueActive) == 1592, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsTechniqueActive");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bHasIsTargetingTag) == 1593, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bHasIsTargetingTag");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, PawnVelocitySpeed) == 1596, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::PawnVelocitySpeed");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, PawnVelocitySpeedCutoff) == 1600, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::PawnVelocitySpeedCutoff");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsAttack_01) == 1604, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsAttack_01");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsAttack_02) == 1605, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsAttack_02");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsAttack_03) == 1606, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsAttack_03");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsAllowPhysics) == 1607, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsAllowPhysics");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsMantisDone) == 1608, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsMantisDone");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsUpperBodyAttack_01) == 1609, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsUpperBodyAttack_01");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsUpperBodyAttack_02) == 1610, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsUpperBodyAttack_02");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, XMoveRight) == 1612, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::XMoveRight");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, XMoveLeft) == 1616, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::XMoveLeft");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, YMoveFwd) == 1620, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::YMoveFwd");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIs700Distance) == 1624, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIs700Distance");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIs1200Distance) == 1625, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIs1200Distance");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, bIsTurnOffPhysics) == 1626, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::bIsTurnOffPhysics");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, AttackRange700) == 1628, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::AttackRange700");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, AttackRange1200) == 1632, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::AttackRange1200");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, AttackRange1500) == 1636, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::AttackRange1500");
static_assert(offsetof(UChains_SunRose_Sharp_Wep_AnimInstance, IsTargetingTag) == 1640, "Offset mismatch for UChains_SunRose_Sharp_Wep_AnimInstance::IsTargetingTag");

// /Script/SunRoseChainWhipGameplay.Hades_Player_LayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UHades_Player_LayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsMotorcycle; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHookshot; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTechniqueActive; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHadesAO; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpperBodyReplacement; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1175
    std::uint8_t MotorcycleTag[0x4]; // 0x1178 (Size: 0x4, Type: StructProperty)
    std::uint8_t HookshotTag[0x4]; // 0x117C (Size: 0x4, Type: StructProperty)
    std::uint8_t DisableGrindRailUpperBodyCorrectTag[0x1]; // 0x1180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHades_Player_LayerAnimInstance, bIsMotorcycle) == 4464, "Offset mismatch for UHades_Player_LayerAnimInstance::bIsMotorcycle");
static_assert(offsetof(UHades_Player_LayerAnimInstance, bIsHookshot) == 4465, "Offset mismatch for UHades_Player_LayerAnimInstance::bIsHookshot");
static_assert(offsetof(UHades_Player_LayerAnimInstance, bIsTechniqueActive) == 4466, "Offset mismatch for UHades_Player_LayerAnimInstance::bIsTechniqueActive");
static_assert(offsetof(UHades_Player_LayerAnimInstance, bIsHadesAO) == 4467, "Offset mismatch for UHades_Player_LayerAnimInstance::bIsHadesAO");
static_assert(offsetof(UHades_Player_LayerAnimInstance, bIsUpperBodyReplacement) == 4468, "Offset mismatch for UHades_Player_LayerAnimInstance::bIsUpperBodyReplacement");
static_assert(offsetof(UHades_Player_LayerAnimInstance, MotorcycleTag) == 4472, "Offset mismatch for UHades_Player_LayerAnimInstance::MotorcycleTag");
static_assert(offsetof(UHades_Player_LayerAnimInstance, HookshotTag) == 4476, "Offset mismatch for UHades_Player_LayerAnimInstance::HookshotTag");
static_assert(offsetof(UHades_Player_LayerAnimInstance, DisableGrindRailUpperBodyCorrectTag) == 4480, "Offset mismatch for UHades_Player_LayerAnimInstance::DisableGrindRailUpperBodyCorrectTag");

// /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip
// Kind: Class; super: TargetingSelectionTask_Trace
class UTargetingSelectionTask_SunRoseChainWhip
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TraceType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TraceChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRadius[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceCapsuleHalfHeight[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentX[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentY[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentZ[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultTraceLength[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExplicitTraceDirection[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bComplexTrace; // 0x0168 (Size: 0x1, Type: BoolProperty)
    // 0x0168 BoolProperty bIgnoreInstigatorActor (shared storage)
    // 0x0168 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0168 BoolProperty bMultiTrace (shared storage)
};

static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, TraceType) == 40, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::TraceType");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, TraceChannel) == 41, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::TraceChannel");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, CollisionProfileName) == 44, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::CollisionProfileName");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceRadius) == 48, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceRadius");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceCapsuleHalfHeight) == 88, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceCapsuleHalfHeight");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceBoxHalfExtentX) == 128, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceBoxHalfExtentX");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceBoxHalfExtentY) == 168, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceBoxHalfExtentY");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceBoxHalfExtentZ) == 208, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceBoxHalfExtentZ");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSweptTraceRotation) == 248, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSweptTraceRotation");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultTraceLength) == 272, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultTraceLength");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, DefaultSourceOffset) == 312, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::DefaultSourceOffset");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, ExplicitTraceDirection) == 336, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::ExplicitTraceDirection");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip, bComplexTrace) == 360, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip::bComplexTrace");

// /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip_Melee
// Kind: Class; super: TargetingSelectionTask_SunRoseChainWhip
class UTargetingSelectionTask_SunRoseChainWhip_Melee
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    float YawOffsetDegrees; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0174
    std::uint8_t SourceLocationRelativeOffset[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip_Melee, YawOffsetDegrees) == 368, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip_Melee::YawOffsetDegrees");
static_assert(offsetof(UTargetingSelectionTask_SunRoseChainWhip_Melee, SourceLocationRelativeOffset) == 376, "Offset mismatch for UTargetingSelectionTask_SunRoseChainWhip_Melee::SourceLocationRelativeOffset");

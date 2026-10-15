/**
 * decamp dumper generated SDK
 * Package: /Script/InvulnLlamaRuntime
 */
#pragma once
#include "Basic.h"

// /Script/InvulnLlamaRuntime.InvulnLlamaHitFXComponent
// Kind: Class; super: ActorComponent
class UInvulnLlamaHitFXComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t HitCueTag[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RequiredStateTag[0x1]; // 0x00C4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInvulnLlamaHitFXComponent, HitCueTag) == 192, "Offset mismatch for UInvulnLlamaHitFXComponent::HitCueTag");
static_assert(offsetof(UInvulnLlamaHitFXComponent, RequiredStateTag) == 196, "Offset mismatch for UInvulnLlamaHitFXComponent::RequiredStateTag");

// /Script/InvulnLlamaRuntime.InvulnLlamaLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UInvulnLlamaLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsHit; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMirrorAnim; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSliding_BP; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitBash; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReacting; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1175
    std::uint8_t ReactTagName[0x1]; // 0x1178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInvulnLlamaLayerAnimInstance, bIsHit) == 4464, "Offset mismatch for UInvulnLlamaLayerAnimInstance::bIsHit");
static_assert(offsetof(UInvulnLlamaLayerAnimInstance, bMirrorAnim) == 4465, "Offset mismatch for UInvulnLlamaLayerAnimInstance::bMirrorAnim");
static_assert(offsetof(UInvulnLlamaLayerAnimInstance, bIsSliding_BP) == 4466, "Offset mismatch for UInvulnLlamaLayerAnimInstance::bIsSliding_BP");
static_assert(offsetof(UInvulnLlamaLayerAnimInstance, bIsExitBash) == 4467, "Offset mismatch for UInvulnLlamaLayerAnimInstance::bIsExitBash");
static_assert(offsetof(UInvulnLlamaLayerAnimInstance, bIsReacting) == 4468, "Offset mismatch for UInvulnLlamaLayerAnimInstance::bIsReacting");
static_assert(offsetof(UInvulnLlamaLayerAnimInstance, ReactTagName) == 4472, "Offset mismatch for UInvulnLlamaLayerAnimInstance::ReactTagName");

// /Script/InvulnLlamaRuntime.InvulnLlamaPredictiveSmashComponent
// Kind: Class; super: ActorComponent
class UInvulnLlamaPredictiveSmashComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t RequiredStateTag[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SuppressSmashWhileOwnerTags[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmashTraceChannel; // 0x00E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t SweepHalfExtentX[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SweepHalfExtentY[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t SweepHalfExtentZ[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t LookAheadTime[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLookAheadDistance[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLookAheadDistance[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToSmash[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SweepVerticalOffset[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDestroyStructuresDirectly[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t StructureDeathReasonTag[0x8]; // 0x0258 (Size: 0x8, Type: StructProperty)
    std::uint8_t WalkableSurfaceMinNormalZ[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPredictClientCollisionDisable; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0289
    std::uint8_t ClientCollisionReenableTime[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t PawnLaunchStrength[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PawnLaunchVerticalScale[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchCooldownTag[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* OwnerSmashEffect; // 0x0310 (Size: 0x8, Type: ClassProperty)
    void* TargetSmashEffect; // 0x0318 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StructureImpactCueTag[0x4]; // 0x0320 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawDebug; // 0x0324 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, RequiredStateTag) == 192, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::RequiredStateTag");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SuppressSmashWhileOwnerTags) == 200, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SuppressSmashWhileOwnerTags");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SmashTraceChannel) == 232, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SmashTraceChannel");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SweepHalfExtentX) == 240, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SweepHalfExtentX");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SweepHalfExtentY) == 280, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SweepHalfExtentY");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SweepHalfExtentZ) == 320, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SweepHalfExtentZ");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, LookAheadTime) == 360, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::LookAheadTime");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, MinLookAheadDistance) == 400, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::MinLookAheadDistance");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, MaxLookAheadDistance) == 440, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::MaxLookAheadDistance");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, MinSpeedToSmash) == 480, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::MinSpeedToSmash");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, SweepVerticalOffset) == 520, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::SweepVerticalOffset");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, bDestroyStructuresDirectly) == 560, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::bDestroyStructuresDirectly");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, StructureDeathReasonTag) == 600, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::StructureDeathReasonTag");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, WalkableSurfaceMinNormalZ) == 608, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::WalkableSurfaceMinNormalZ");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, bPredictClientCollisionDisable) == 648, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::bPredictClientCollisionDisable");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, ClientCollisionReenableTime) == 656, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::ClientCollisionReenableTime");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, PawnLaunchStrength) == 696, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::PawnLaunchStrength");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, PawnLaunchVerticalScale) == 736, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::PawnLaunchVerticalScale");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, LaunchCooldownTag) == 776, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::LaunchCooldownTag");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, OwnerSmashEffect) == 784, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::OwnerSmashEffect");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, TargetSmashEffect) == 792, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::TargetSmashEffect");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, StructureImpactCueTag) == 800, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::StructureImpactCueTag");
static_assert(offsetof(UInvulnLlamaPredictiveSmashComponent, bDrawDebug) == 804, "Offset mismatch for UInvulnLlamaPredictiveSmashComponent::bDrawDebug");

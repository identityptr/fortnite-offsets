/**
 * decamp dumper generated SDK
 * Package: /Script/CableComponent
 */
#pragma once
#include "Basic.h"

// /Script/CableComponent.CableActor
// Kind: Class; super: Actor
class UCableActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CableComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCableActor, CableComponent) == 624, "Offset mismatch for UCableActor::CableComponent");

// /Script/CableComponent.CableComponent
// Kind: Class; super: MeshComponent
class UCableComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::uint8_t bAttachStart; // 0x05D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttachEnd; // 0x05D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x05D2
    std::uint8_t AttachEndTo[0x28]; // 0x05D8 (Size: 0x28, Type: StructProperty)
    FName AttachEndToSocketName; // 0x0600 (Size: 0x8, Type: NameProperty)
    std::uint8_t EndLocation[0x18]; // 0x0608 (Size: 0x18, Type: StructProperty)
    float CableLength; // 0x0620 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSegments; // 0x0624 (Size: 0x4, Type: IntProperty)
    float SubstepTime; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::int32_t SolverIterations; // 0x062C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableStiffness; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSubstepping; // 0x0631 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipCableUpdateWhenNotVisible; // 0x0632 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x0633 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCollision; // 0x0634 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0635
    float CollisionFriction; // 0x0638 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x063C
    std::uint8_t CableForce[0x18]; // 0x0640 (Size: 0x18, Type: StructProperty)
    float CableGravityScale; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float CableWidth; // 0x065C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x0660 (Size: 0x4, Type: IntProperty)
    float TileMaterial; // 0x0664 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetAfterTeleport; // 0x0668 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0669
    float TeleportDistanceThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    float TeleportRotationThreshold; // 0x0670 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportAfterReattach; // 0x0674 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCableComponent, bAttachStart) == 1488, "Offset mismatch for UCableComponent::bAttachStart");
static_assert(offsetof(UCableComponent, bAttachEnd) == 1489, "Offset mismatch for UCableComponent::bAttachEnd");
static_assert(offsetof(UCableComponent, AttachEndTo) == 1496, "Offset mismatch for UCableComponent::AttachEndTo");
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 1536, "Offset mismatch for UCableComponent::AttachEndToSocketName");
static_assert(offsetof(UCableComponent, EndLocation) == 1544, "Offset mismatch for UCableComponent::EndLocation");
static_assert(offsetof(UCableComponent, CableLength) == 1568, "Offset mismatch for UCableComponent::CableLength");
static_assert(offsetof(UCableComponent, NumSegments) == 1572, "Offset mismatch for UCableComponent::NumSegments");
static_assert(offsetof(UCableComponent, SubstepTime) == 1576, "Offset mismatch for UCableComponent::SubstepTime");
static_assert(offsetof(UCableComponent, SolverIterations) == 1580, "Offset mismatch for UCableComponent::SolverIterations");
static_assert(offsetof(UCableComponent, bEnableStiffness) == 1584, "Offset mismatch for UCableComponent::bEnableStiffness");
static_assert(offsetof(UCableComponent, bUseSubstepping) == 1585, "Offset mismatch for UCableComponent::bUseSubstepping");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotVisible) == 1586, "Offset mismatch for UCableComponent::bSkipCableUpdateWhenNotVisible");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotOwnerRecentlyRendered) == 1587, "Offset mismatch for UCableComponent::bSkipCableUpdateWhenNotOwnerRecentlyRendered");
static_assert(offsetof(UCableComponent, bEnableCollision) == 1588, "Offset mismatch for UCableComponent::bEnableCollision");
static_assert(offsetof(UCableComponent, CollisionFriction) == 1592, "Offset mismatch for UCableComponent::CollisionFriction");
static_assert(offsetof(UCableComponent, CableForce) == 1600, "Offset mismatch for UCableComponent::CableForce");
static_assert(offsetof(UCableComponent, CableGravityScale) == 1624, "Offset mismatch for UCableComponent::CableGravityScale");
static_assert(offsetof(UCableComponent, CableWidth) == 1628, "Offset mismatch for UCableComponent::CableWidth");
static_assert(offsetof(UCableComponent, NumSides) == 1632, "Offset mismatch for UCableComponent::NumSides");
static_assert(offsetof(UCableComponent, TileMaterial) == 1636, "Offset mismatch for UCableComponent::TileMaterial");
static_assert(offsetof(UCableComponent, bResetAfterTeleport) == 1640, "Offset mismatch for UCableComponent::bResetAfterTeleport");
static_assert(offsetof(UCableComponent, TeleportDistanceThreshold) == 1644, "Offset mismatch for UCableComponent::TeleportDistanceThreshold");
static_assert(offsetof(UCableComponent, TeleportRotationThreshold) == 1648, "Offset mismatch for UCableComponent::TeleportRotationThreshold");
static_assert(offsetof(UCableComponent, bTeleportAfterReattach) == 1652, "Offset mismatch for UCableComponent::bTeleportAfterReattach");

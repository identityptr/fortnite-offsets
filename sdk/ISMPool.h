/**
 * decamp dumper generated SDK
 * Package: /Script/ISMPool
 */
#pragma once
#include "Basic.h"

// /Script/ISMPool.ISMPoolActor
// Kind: Class; super: Actor
class UISMPoolActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ISMPoolComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UISMPoolActor, ISMPoolComp) == 624, "Offset mismatch for UISMPoolActor::ISMPoolComp");

// /Script/ISMPool.ISMPoolComponent
// Kind: Class; super: SceneComponent
class UISMPoolComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> PhysicsVolume; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* AttachParent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    FName AttachSocketName; // 0x00D8 (Size: 0x8, Type: NameProperty)
    TArray<void*> AttachChildren; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientAttachedChildren; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0100
    std::uint8_t RelativeLocation[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeScale3D[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentVelocity[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteLocation; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    // 0x01A0 BoolProperty bAbsoluteRotation (shared storage)
    // 0x01A0 BoolProperty bAbsoluteScale (shared storage)
    // 0x01A0 BoolProperty bComponentToWorldUpdated (shared storage)
    // 0x01A0 BoolProperty bShouldBeAttached (shared storage)
    // 0x01A0 BoolProperty bShouldSnapLocationWhenAttached (shared storage)
    // 0x01A0 BoolProperty bVisible (shared storage)
    std::uint8_t bBoundsChangeTriggersStreamingDataRebuild; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    // 0x01A1 BoolProperty bComputeBoundsOnceForGame (shared storage)
    // 0x01A1 BoolProperty bComputeFastLocalBounds (shared storage)
    // 0x01A1 BoolProperty bHiddenInGame (shared storage)
    // 0x01A1 BoolProperty bShouldSnapRotationWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldSnapScaleWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldUpdatePhysicsVolume (shared storage)
    // 0x01A1 BoolProperty bUseAttachParentBound (shared storage)
    std::uint8_t bComputedBoundsOnceForGame; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    // 0x01A2 BoolProperty bIsNotRenderAttachmentRoot (shared storage)
    std::uint8_t Mobility; // 0x01A3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DetailMode; // 0x01A4 (Size: 0x1, Type: ByteProperty)
    FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x01A5 (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UISMPoolComponent, PhysicsVolume) == 200, "Offset mismatch for UISMPoolComponent::PhysicsVolume");
static_assert(offsetof(UISMPoolComponent, AttachParent) == 208, "Offset mismatch for UISMPoolComponent::AttachParent");
static_assert(offsetof(UISMPoolComponent, AttachSocketName) == 216, "Offset mismatch for UISMPoolComponent::AttachSocketName");
static_assert(offsetof(UISMPoolComponent, AttachChildren) == 224, "Offset mismatch for UISMPoolComponent::AttachChildren");
static_assert(offsetof(UISMPoolComponent, ClientAttachedChildren) == 240, "Offset mismatch for UISMPoolComponent::ClientAttachedChildren");
static_assert(offsetof(UISMPoolComponent, RelativeLocation) == 320, "Offset mismatch for UISMPoolComponent::RelativeLocation");
static_assert(offsetof(UISMPoolComponent, RelativeRotation) == 344, "Offset mismatch for UISMPoolComponent::RelativeRotation");
static_assert(offsetof(UISMPoolComponent, RelativeScale3D) == 368, "Offset mismatch for UISMPoolComponent::RelativeScale3D");
static_assert(offsetof(UISMPoolComponent, ComponentVelocity) == 392, "Offset mismatch for UISMPoolComponent::ComponentVelocity");
static_assert(offsetof(UISMPoolComponent, bAbsoluteLocation) == 416, "Offset mismatch for UISMPoolComponent::bAbsoluteLocation");
static_assert(offsetof(UISMPoolComponent, bBoundsChangeTriggersStreamingDataRebuild) == 417, "Offset mismatch for UISMPoolComponent::bBoundsChangeTriggersStreamingDataRebuild");
static_assert(offsetof(UISMPoolComponent, bComputedBoundsOnceForGame) == 418, "Offset mismatch for UISMPoolComponent::bComputedBoundsOnceForGame");
static_assert(offsetof(UISMPoolComponent, Mobility) == 419, "Offset mismatch for UISMPoolComponent::Mobility");
static_assert(offsetof(UISMPoolComponent, DetailMode) == 420, "Offset mismatch for UISMPoolComponent::DetailMode");
static_assert(offsetof(UISMPoolComponent, PhysicsVolumeChangedDelegate) == 421, "Offset mismatch for UISMPoolComponent::PhysicsVolumeChangedDelegate");

// /Script/ISMPool.ISMPoolDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UISMPoolDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::uint8_t bShowGlobalStats; // 0x05D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStats; // 0x05D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBounds; // 0x05D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x05D3
    void* SelectedComponent; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UISMPoolDebugDrawComponent, bShowGlobalStats) == 1488, "Offset mismatch for UISMPoolDebugDrawComponent::bShowGlobalStats");
static_assert(offsetof(UISMPoolDebugDrawComponent, bShowStats) == 1489, "Offset mismatch for UISMPoolDebugDrawComponent::bShowStats");
static_assert(offsetof(UISMPoolDebugDrawComponent, bShowBounds) == 1490, "Offset mismatch for UISMPoolDebugDrawComponent::bShowBounds");
static_assert(offsetof(UISMPoolDebugDrawComponent, SelectedComponent) == 1496, "Offset mismatch for UISMPoolDebugDrawComponent::SelectedComponent");

// /Script/ISMPool.ISMPoolSubSystem
// Kind: Class; super: WorldSubsystem
class UISMPoolSubSystem
{
public:
    std::uint8_t Opaque[1];
};

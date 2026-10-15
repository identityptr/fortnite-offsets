/**
 * decamp dumper generated SDK
 * Package: /Script/PerformanceCaptureCore
 */
#pragma once
#include "Basic.h"

// /Script/PerformanceCaptureCore.RetargetAnimInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FRetargetAnimInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRetargetAnimInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FRetargetAnimInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/PerformanceCaptureCore.CaptureCharacter
// Kind: Class; super: SkeletalMeshActor
class UCaptureCharacter
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* RetargetComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCaptureCharacter, RetargetComponent) == 688, "Offset mismatch for UCaptureCharacter::RetargetComponent");

// /Script/PerformanceCaptureCore.CapturePerformer
// Kind: Class; super: SkeletalMeshActor
class UCapturePerformer
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x02B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForceAllMeshesToFollowLeader; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateAnimation; // 0x02B5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCapturePerformer, SubjectName) == 688, "Offset mismatch for UCapturePerformer::SubjectName");
static_assert(offsetof(UCapturePerformer, bForceAllMeshesToFollowLeader) == 692, "Offset mismatch for UCapturePerformer::bForceAllMeshesToFollowLeader");
static_assert(offsetof(UCapturePerformer, bEvaluateAnimation) == 693, "Offset mismatch for UCapturePerformer::bEvaluateAnimation");

// /Script/PerformanceCaptureCore.PerformerComponent
// Kind: Class; super: ActorComponent
class UPerformerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SubjectName[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ControlledSkeletalMesh[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEvaluateAnimation; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceOtherMeshesToFollowControlledMesh; // 0x00F1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPerformerComponent, SubjectName) == 192, "Offset mismatch for UPerformerComponent::SubjectName");
static_assert(offsetof(UPerformerComponent, ControlledSkeletalMesh) == 200, "Offset mismatch for UPerformerComponent::ControlledSkeletalMesh");
static_assert(offsetof(UPerformerComponent, bEvaluateAnimation) == 240, "Offset mismatch for UPerformerComponent::bEvaluateAnimation");
static_assert(offsetof(UPerformerComponent, bForceOtherMeshesToFollowControlledMesh) == 241, "Offset mismatch for UPerformerComponent::bForceOtherMeshesToFollowControlledMesh");

// /Script/PerformanceCaptureCore.RetargetAnimInstance
// Kind: Class; super: AnimInstance
class URetargetAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t RetargetNode[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URetargetAnimInstance, RetargetNode) == 608, "Offset mismatch for URetargetAnimInstance::RetargetNode");

// /Script/PerformanceCaptureCore.RetargetComponent
// Kind: Class; super: ActorComponent
class URetargetComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SourceSkeletalMeshComponent[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ControlledSkeletalMeshComponent[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bForceOtherMeshesToFollowControlledMesh; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* RetargetAsset; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomRetargetProfile[0xD8]; // 0x0120 (Size: 0xD8, Type: StructProperty)
    TSoftObjectPtr<void> SourcePerformer; // 0x01F8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(URetargetComponent, SourceSkeletalMeshComponent) == 192, "Offset mismatch for URetargetComponent::SourceSkeletalMeshComponent");
static_assert(offsetof(URetargetComponent, ControlledSkeletalMeshComponent) == 232, "Offset mismatch for URetargetComponent::ControlledSkeletalMeshComponent");
static_assert(offsetof(URetargetComponent, bForceOtherMeshesToFollowControlledMesh) == 272, "Offset mismatch for URetargetComponent::bForceOtherMeshesToFollowControlledMesh");
static_assert(offsetof(URetargetComponent, RetargetAsset) == 280, "Offset mismatch for URetargetComponent::RetargetAsset");
static_assert(offsetof(URetargetComponent, CustomRetargetProfile) == 288, "Offset mismatch for URetargetComponent::CustomRetargetProfile");
static_assert(offsetof(URetargetComponent, SourcePerformer) == 504, "Offset mismatch for URetargetComponent::SourcePerformer");

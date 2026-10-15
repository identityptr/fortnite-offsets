/**
 * decamp dumper generated SDK
 * Package: /Script/LFNContentModeration
 */
#pragma once
#include "Basic.h"

// /Script/LFNContentModeration.LFNContentModerationReport
// Kind: ScriptStruct; super: none
struct FLFNContentModerationReport
{
public:
    std::uint8_t Json[0x10]; // 0x0000 (Size: 0x10, Type: Utf8StrProperty)
    TArray<void*> Screenshot; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLFNContentModerationReport, Json) == 0, "Offset mismatch for FLFNContentModerationReport::Json");
static_assert(offsetof(FLFNContentModerationReport, Screenshot) == 16, "Offset mismatch for FLFNContentModerationReport::Screenshot");

// /Script/LFNContentModeration.LFNContentModerationSaveData
// Kind: ScriptStruct; super: none
struct FLFNContentModerationSaveData
{
public:
    TArray<void*> UGCOwners; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLFNContentModerationSaveData, UGCOwners) == 0, "Offset mismatch for FLFNContentModerationSaveData::UGCOwners");

// /Script/LFNContentModeration.LFNContentModeration_GameStateComponent
// Kind: Class; super: FortGameStateComponent
class ULFNContentModeration_GameStateComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(ULFNContentModeration_GameStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULFNContentModeration_GameStateComponent::PrimaryComponentTick");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, ComponentTags) == 104, "Offset mismatch for ULFNContentModeration_GameStateComponent::ComponentTags");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, AssetUserData) == 120, "Offset mismatch for ULFNContentModeration_GameStateComponent::AssetUserData");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULFNContentModeration_GameStateComponent::UCSSerializationIndex");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, bNetAddressable) == 152, "Offset mismatch for ULFNContentModeration_GameStateComponent::bNetAddressable");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, bAutoActivate) == 154, "Offset mismatch for ULFNContentModeration_GameStateComponent::bAutoActivate");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, bIsEditorOnly) == 155, "Offset mismatch for ULFNContentModeration_GameStateComponent::bIsEditorOnly");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, CreationMethod) == 185, "Offset mismatch for ULFNContentModeration_GameStateComponent::CreationMethod");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, OnComponentActivated) == 186, "Offset mismatch for ULFNContentModeration_GameStateComponent::OnComponentActivated");
static_assert(offsetof(ULFNContentModeration_GameStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULFNContentModeration_GameStateComponent::OnComponentDeactivated");

// /Script/LFNContentModeration.LFNControllerComponent_ContentModerationSender
// Kind: Class; super: ActorComponent
class ULFNControllerComponent_ContentModerationSender
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString SubmittedReportId; // 0x00C0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(ULFNControllerComponent_ContentModerationSender, SubmittedReportId) == 192, "Offset mismatch for ULFNControllerComponent_ContentModerationSender::SubmittedReportId");

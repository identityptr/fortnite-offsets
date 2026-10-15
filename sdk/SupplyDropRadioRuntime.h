/**
 * decamp dumper generated SDK
 * Package: /Script/SupplyDropRadioRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorSupplyDropRadio
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    float MinimumMovingSpeedThresholdSq; // 0x0920 (Size: 0x4, Type: FloatProperty)
    float BalloonClosedGroundedFallSpeed; // 0x0924 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoOpen; // 0x0928 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0929
    std::uint8_t ForceOpenActorTags[0x20]; // 0x0930 (Size: 0x20, Type: StructProperty)
    std::uint8_t IgnoreMovingCollisionWithActorTagQuery[0x48]; // 0x0950 (Size: 0x48, Type: StructProperty)
    float InterpRateToBalloonOpenedFallSpeed; // 0x0998 (Size: 0x4, Type: FloatProperty)
    float DistanceFromOriginalSpawnLocForBalloonOpen; // 0x099C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BalloonState; // 0x09A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x09A1
    std::uint8_t WaterHitResult[0xF8]; // 0x09A8 (Size: 0xF8, Type: StructProperty)
    std::uint8_t bMoving; // 0x0AA0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0AA1
    float FallSpeed; // 0x0AA4 (Size: 0x4, Type: FloatProperty)
    float BalloonOpenedFallSpeed; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float GravityMultiplier; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ServerLocation[0x18]; // 0x0AB0 (Size: 0x18, Type: StructProperty)
    float ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    float ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0x0ACC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Velocity[0x18]; // 0x0AD0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousFrameVelocity[0x18]; // 0x0AE8 (Size: 0x18, Type: StructProperty)
    std::uint8_t OriginalServerSpawnLocation[0x1]; // 0x0B00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, MinimumMovingSpeedThresholdSq) == 2336, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::MinimumMovingSpeedThresholdSq");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, BalloonClosedGroundedFallSpeed) == 2340, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::BalloonClosedGroundedFallSpeed");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, bAutoOpen) == 2344, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::bAutoOpen");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, ForceOpenActorTags) == 2352, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::ForceOpenActorTags");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, IgnoreMovingCollisionWithActorTagQuery) == 2384, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::IgnoreMovingCollisionWithActorTagQuery");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, InterpRateToBalloonOpenedFallSpeed) == 2456, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::InterpRateToBalloonOpenedFallSpeed");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, DistanceFromOriginalSpawnLocForBalloonOpen) == 2460, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::DistanceFromOriginalSpawnLocForBalloonOpen");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, BalloonState) == 2464, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::BalloonState");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, WaterHitResult) == 2472, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::WaterHitResult");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, bMoving) == 2720, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::bMoving");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, FallSpeed) == 2724, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::FallSpeed");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, BalloonOpenedFallSpeed) == 2728, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::BalloonOpenedFallSpeed");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, GravityMultiplier) == 2732, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::GravityMultiplier");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, ServerLocation) == 2736, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::ServerLocation");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, ClientLocationCorrectionMaxDistSqWhenBalloonDisabled) == 2760, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::ClientLocationCorrectionMaxDistSqWhenBalloonDisabled");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, ClientLocationCorrectionMaxDistSqWhenBalloonEnabled) == 2764, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::ClientLocationCorrectionMaxDistSqWhenBalloonEnabled");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, Velocity) == 2768, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::Velocity");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, PreviousFrameVelocity) == 2792, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::PreviousFrameVelocity");
static_assert(offsetof(UBuildingGameplayActorSupplyDropRadio, OriginalServerSpawnLocation) == 2816, "Offset mismatch for UBuildingGameplayActorSupplyDropRadio::OriginalServerSpawnLocation");

// /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
// Kind: Class; super: ActorComponent
class UFortSupplyDropRadioAttachActorComponent
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

static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::PrimaryComponentTick");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, ComponentTags) == 104, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::ComponentTags");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, AssetUserData) == 120, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::AssetUserData");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::UCSSerializationIndex");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, bNetAddressable) == 152, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::bNetAddressable");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, bAutoActivate) == 154, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::bAutoActivate");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::bIsEditorOnly");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, CreationMethod) == 185, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::CreationMethod");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, OnComponentActivated) == 186, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::OnComponentActivated");
static_assert(offsetof(UFortSupplyDropRadioAttachActorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortSupplyDropRadioAttachActorComponent::OnComponentDeactivated");

// /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortSupplyDropRadioBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};

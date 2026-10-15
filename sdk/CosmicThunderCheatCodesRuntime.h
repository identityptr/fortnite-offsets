/**
 * decamp dumper generated SDK
 * Package: /Script/CosmicThunderCheatCodesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodePlacementParams
// Kind: ScriptStruct; super: none
struct FCosmicThunderCheatCodePlacementParams
{
public:
    std::uint8_t HalfExtentX[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentY[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProjectionDepth[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceOffsetUp[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceOffsetDown[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x00C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x00C9
    std::uint8_t TraceComplex[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NormalToleranceDegrees[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CoplanarTolerance[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecalComponentRotationOffset[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t NumRadialRings[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumAngularSamples[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumOrientations[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDrawDebug; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01D9
    float DebugDrawDuration; // 0x01DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, HalfExtentX) == 0, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::HalfExtentX");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, HalfExtentY) == 40, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::HalfExtentY");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, ProjectionDepth) == 80, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::ProjectionDepth");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, TraceOffsetUp) == 120, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::TraceOffsetUp");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, TraceOffsetDown) == 160, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::TraceOffsetDown");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, TraceChannel) == 200, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::TraceChannel");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, TraceComplex) == 208, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::TraceComplex");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, NormalToleranceDegrees) == 248, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::NormalToleranceDegrees");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, CoplanarTolerance) == 288, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::CoplanarTolerance");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, DecalComponentRotationOffset) == 328, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::DecalComponentRotationOffset");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, NumRadialRings) == 352, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::NumRadialRings");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, NumAngularSamples) == 392, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::NumAngularSamples");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, NumOrientations) == 432, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::NumOrientations");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, bDrawDebug) == 472, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::bDrawDebug");
static_assert(offsetof(FCosmicThunderCheatCodePlacementParams, DebugDrawDuration) == 476, "Offset mismatch for FCosmicThunderCheatCodePlacementParams::DebugDrawDuration");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodePlacementResult
// Kind: ScriptStruct; super: none
struct FCosmicThunderCheatCodePlacementResult
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Score; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BestYawDegrees; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t SurfaceLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t SurfaceNormal[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnRotation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> CenterActor; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, bValid) == 0, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::bValid");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, Score) == 4, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::Score");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, BestYawDegrees) == 8, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::BestYawDegrees");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, SurfaceLocation) == 16, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::SurfaceLocation");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, SurfaceNormal) == 40, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::SurfaceNormal");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, SpawnRotation) == 64, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::SpawnRotation");
static_assert(offsetof(FCosmicThunderCheatCodePlacementResult, CenterActor) == 88, "Offset mismatch for FCosmicThunderCheatCodePlacementResult::CenterActor");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderExclusionPointRow
// Kind: ScriptStruct; super: TableRowBase
struct FCosmicThunderExclusionPointRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Location[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmicThunderExclusionPointRow, Location) == 8, "Offset mismatch for FCosmicThunderExclusionPointRow::Location");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderPlannedRarity
// Kind: ScriptStruct; super: none
struct FCosmicThunderPlannedRarity
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Rarity; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCosmicThunderPlannedRarity, Actor) == 0, "Offset mismatch for FCosmicThunderPlannedRarity::Actor");
static_assert(offsetof(FCosmicThunderPlannedRarity, Rarity) == 8, "Offset mismatch for FCosmicThunderPlannedRarity::Rarity");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderRarityScatterPoint
// Kind: ScriptStruct; super: none
struct FCosmicThunderRarityScatterPoint
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rarity; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCosmicThunderRarityScatterPoint, Location) == 0, "Offset mismatch for FCosmicThunderRarityScatterPoint::Location");
static_assert(offsetof(FCosmicThunderRarityScatterPoint, Rarity) == 24, "Offset mismatch for FCosmicThunderRarityScatterPoint::Rarity");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderRarityWeight
// Kind: ScriptStruct; super: none
struct FCosmicThunderRarityWeight
{
public:
    std::uint8_t Rarity; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MaxCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCosmicThunderRarityWeight, Rarity) == 0, "Offset mismatch for FCosmicThunderRarityWeight::Rarity");
static_assert(offsetof(FCosmicThunderRarityWeight, MaxCount) == 4, "Offset mismatch for FCosmicThunderRarityWeight::MaxCount");
static_assert(offsetof(FCosmicThunderRarityWeight, Weight) == 8, "Offset mismatch for FCosmicThunderRarityWeight::Weight");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodeInputLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UCosmicThunderCheatCodeInputLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double BounceStrength; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bBounceRight; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBounceLeft; // 0x1179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLowerBodyFromSource; // 0x117A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelfBlend; // 0x117B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLatestInputUp; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLatestInputDown; // 0x117D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLatestInputLeft; // 0x117E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLatestInputRight; // 0x117F (Size: 0x1, Type: BoolProperty)
    std::uint8_t PressedTagName[0x1]; // 0x1180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, BounceStrength) == 4464, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::BounceStrength");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bBounceRight) == 4472, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bBounceRight");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bBounceLeft) == 4473, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bBounceLeft");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bUseLowerBodyFromSource) == 4474, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bUseLowerBodyFromSource");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bSelfBlend) == 4475, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bSelfBlend");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bLatestInputUp) == 4476, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bLatestInputUp");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bLatestInputDown) == 4477, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bLatestInputDown");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bLatestInputLeft) == 4478, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bLatestInputLeft");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, bLatestInputRight) == 4479, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::bLatestInputRight");
static_assert(offsetof(UCosmicThunderCheatCodeInputLayerAnimInstance, PressedTagName) == 4480, "Offset mismatch for UCosmicThunderCheatCodeInputLayerAnimInstance::PressedTagName");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodesBGA
// Kind: Class; super: BuildingGameplayActor
class UCosmicThunderCheatCodesBGA
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    std::uint8_t bShouldAlwaysSpawn; // 0x0928 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0929
    std::uint8_t AlwaysSpawnTag[0x4]; // 0x092C (Size: 0x4, Type: StructProperty)
    std::uint8_t AttachmentDestructibility; // 0x0930 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCosmicThunderCheatCodesBGA, bShouldAlwaysSpawn) == 2344, "Offset mismatch for UCosmicThunderCheatCodesBGA::bShouldAlwaysSpawn");
static_assert(offsetof(UCosmicThunderCheatCodesBGA, AlwaysSpawnTag) == 2348, "Offset mismatch for UCosmicThunderCheatCodesBGA::AlwaysSpawnTag");
static_assert(offsetof(UCosmicThunderCheatCodesBGA, AttachmentDestructibility) == 2352, "Offset mismatch for UCosmicThunderCheatCodesBGA::AttachmentDestructibility");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodesBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCosmicThunderCheatCodesBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodesDynamicSpawnEQSTestingPawn
// Kind: Class; super: EQSTestingPawn
class UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::uint8_t bSpawnPreviewDecals; // 0x06D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06D1
    void* DecalActorClass; // 0x06D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PlacementParams[0x1E0]; // 0x06E0 (Size: 0x1E0, Type: StructProperty)
    std::int32_t MaxPreviewDecals; // 0x08C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnlyBestResult; // 0x08C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x08C5
    TArray<void*> SpawnedPreviewActors; // 0x08C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, bSpawnPreviewDecals) == 1744, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::bSpawnPreviewDecals");
static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, DecalActorClass) == 1752, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::DecalActorClass");
static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, PlacementParams) == 1760, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::PlacementParams");
static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, MaxPreviewDecals) == 2240, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::MaxPreviewDecals");
static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, bOnlyBestResult) == 2244, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::bOnlyBestResult");
static_assert(offsetof(UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn, SpawnedPreviewActors) == 2248, "Offset mismatch for UCosmicThunderCheatCodesDynamicSpawnEQSTestingPawn::SpawnedPreviewActors");

// /Script/CosmicThunderCheatCodesRuntime.CosmicThunderCheatCodesGameStateComponent
// Kind: Class; super: ActorComponent
class UCosmicThunderCheatCodesGameStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> RarityPlan; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DebugScatterPoints; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmicThunderCheatCodesGameStateComponent, RarityPlan) == 192, "Offset mismatch for UCosmicThunderCheatCodesGameStateComponent::RarityPlan");
static_assert(offsetof(UCosmicThunderCheatCodesGameStateComponent, DebugScatterPoints) == 208, "Offset mismatch for UCosmicThunderCheatCodesGameStateComponent::DebugScatterPoints");

// /Script/CosmicThunderCheatCodesRuntime.FortCameraModifier_CosmicThunderCheatCodes_Focus
// Kind: Class; super: FortCameraModifier_TargetRotationFrustum
class UFortCameraModifier_CosmicThunderCheatCodes_Focus
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* TargetActor; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedInitialCameraLocation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float CachedInitialLookAtYaw; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    std::uint8_t MinHorizontalDistanceForYaw[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchDeadzoneStart[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchDeadzoneWidth[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, TargetActor) == 192, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::TargetActor");
static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, CachedInitialCameraLocation) == 200, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::CachedInitialCameraLocation");
static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, CachedInitialLookAtYaw) == 224, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::CachedInitialLookAtYaw");
static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, MinHorizontalDistanceForYaw) == 232, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::MinHorizontalDistanceForYaw");
static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, PitchDeadzoneStart) == 272, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::PitchDeadzoneStart");
static_assert(offsetof(UFortCameraModifier_CosmicThunderCheatCodes_Focus, PitchDeadzoneWidth) == 312, "Offset mismatch for UFortCameraModifier_CosmicThunderCheatCodes_Focus::PitchDeadzoneWidth");

// /Script/CosmicThunderCheatCodesRuntime.FortGameplayAbility_CosmicThunderCheatCodes_Input
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_CosmicThunderCheatCodes_Input
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* MappingContext; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* InputAction_Up; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    void* InputAction_Down; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    void* InputAction_Left; // 0x0B38 (Size: 0x8, Type: ObjectProperty)
    void* InputAction_Right; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputPriority[0x1]; // 0x0B48 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, MappingContext) == 2848, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::MappingContext");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, InputAction_Up) == 2856, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::InputAction_Up");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, InputAction_Down) == 2864, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::InputAction_Down");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, InputAction_Left) == 2872, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::InputAction_Left");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, InputAction_Right) == 2880, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::InputAction_Right");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderCheatCodes_Input, InputPriority) == 2888, "Offset mismatch for UFortGameplayAbility_CosmicThunderCheatCodes_Input::InputPriority");

// /Script/CosmicThunderCheatCodesRuntime.FortQueryTest_CosmicThunderCheatCodesFlushSurface
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_CosmicThunderCheatCodesFlushSurface
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t Params[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_CosmicThunderCheatCodesFlushSurface, Params) == 504, "Offset mismatch for UFortQueryTest_CosmicThunderCheatCodesFlushSurface::Params");

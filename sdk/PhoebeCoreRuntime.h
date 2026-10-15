/**
 * decamp dumper generated SDK
 * Package: /Script/PhoebeCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PhoebeCoreRuntime.BotShockwaveTraversalDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FBotShockwaveTraversalDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float Weight; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ThrowType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0011
    std::uint8_t PawnLocationOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float GrenadeDistance; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x004C
    TSoftObjectPtr<void> ActionSequence; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FBotShockwaveTraversalDataRow, bEnabled) == 8, "Offset mismatch for FBotShockwaveTraversalDataRow::bEnabled");
static_assert(offsetof(FBotShockwaveTraversalDataRow, Weight) == 12, "Offset mismatch for FBotShockwaveTraversalDataRow::Weight");
static_assert(offsetof(FBotShockwaveTraversalDataRow, ThrowType) == 16, "Offset mismatch for FBotShockwaveTraversalDataRow::ThrowType");
static_assert(offsetof(FBotShockwaveTraversalDataRow, PawnLocationOffset) == 24, "Offset mismatch for FBotShockwaveTraversalDataRow::PawnLocationOffset");
static_assert(offsetof(FBotShockwaveTraversalDataRow, AimOffset) == 48, "Offset mismatch for FBotShockwaveTraversalDataRow::AimOffset");
static_assert(offsetof(FBotShockwaveTraversalDataRow, GrenadeDistance) == 72, "Offset mismatch for FBotShockwaveTraversalDataRow::GrenadeDistance");
static_assert(offsetof(FBotShockwaveTraversalDataRow, ActionSequence) == 80, "Offset mismatch for FBotShockwaveTraversalDataRow::ActionSequence");

// /Script/PhoebeCoreRuntime.BotShockwaveTraversalSettings
// Kind: ScriptStruct; super: none
struct FBotShockwaveTraversalSettings
{
public:
    std::uint8_t EvaluatePathTraversal[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t EvaluateTargetTraversal[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinUseDistance[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinProgressGain[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxOffPathDistance[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxFalldownToNavmesh[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavProjectExtentXY[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavProjectExtentZ[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchVelocity[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSideOffsetExtent[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchCharacterZOffset[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchVelocityZBoost[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchVelocityZFloor[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBotShockwaveTraversalSettings, EvaluatePathTraversal) == 0, "Offset mismatch for FBotShockwaveTraversalSettings::EvaluatePathTraversal");
static_assert(offsetof(FBotShockwaveTraversalSettings, EvaluateTargetTraversal) == 40, "Offset mismatch for FBotShockwaveTraversalSettings::EvaluateTargetTraversal");
static_assert(offsetof(FBotShockwaveTraversalSettings, MinUseDistance) == 80, "Offset mismatch for FBotShockwaveTraversalSettings::MinUseDistance");
static_assert(offsetof(FBotShockwaveTraversalSettings, MinProgressGain) == 120, "Offset mismatch for FBotShockwaveTraversalSettings::MinProgressGain");
static_assert(offsetof(FBotShockwaveTraversalSettings, MaxOffPathDistance) == 160, "Offset mismatch for FBotShockwaveTraversalSettings::MaxOffPathDistance");
static_assert(offsetof(FBotShockwaveTraversalSettings, MaxFalldownToNavmesh) == 200, "Offset mismatch for FBotShockwaveTraversalSettings::MaxFalldownToNavmesh");
static_assert(offsetof(FBotShockwaveTraversalSettings, NavProjectExtentXY) == 240, "Offset mismatch for FBotShockwaveTraversalSettings::NavProjectExtentXY");
static_assert(offsetof(FBotShockwaveTraversalSettings, NavProjectExtentZ) == 280, "Offset mismatch for FBotShockwaveTraversalSettings::NavProjectExtentZ");
static_assert(offsetof(FBotShockwaveTraversalSettings, LaunchVelocity) == 320, "Offset mismatch for FBotShockwaveTraversalSettings::LaunchVelocity");
static_assert(offsetof(FBotShockwaveTraversalSettings, TargetSideOffsetExtent) == 360, "Offset mismatch for FBotShockwaveTraversalSettings::TargetSideOffsetExtent");
static_assert(offsetof(FBotShockwaveTraversalSettings, LaunchCharacterZOffset) == 400, "Offset mismatch for FBotShockwaveTraversalSettings::LaunchCharacterZOffset");
static_assert(offsetof(FBotShockwaveTraversalSettings, LaunchVelocityZBoost) == 440, "Offset mismatch for FBotShockwaveTraversalSettings::LaunchVelocityZBoost");
static_assert(offsetof(FBotShockwaveTraversalSettings, LaunchVelocityZFloor) == 480, "Offset mismatch for FBotShockwaveTraversalSettings::LaunchVelocityZFloor");

// /Script/PhoebeCoreRuntime.DigestedBotShockwaveTraversalSettings
// Kind: ScriptStruct; super: none
struct FDigestedBotShockwaveTraversalSettings
{
public:
    std::uint8_t bEvaluatePathTraversal; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateTargetTraversal; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float MinUseDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinProgressGain; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxOffPathDistanceSqr; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxFalldownToNavmesh; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float NavProjectExtentXY; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float NavProjectExtentZ; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float LaunchVelocity; // 0x001C (Size: 0x4, Type: FloatProperty)
    float TargetSideOffsetExtent; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LaunchCharacterZOffset; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float LaunchVelocityZBoost; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float LaunchVelocityZFloor; // 0x002C (Size: 0x4, Type: FloatProperty)
    float CapsuleHalfHeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, bEvaluatePathTraversal) == 0, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::bEvaluatePathTraversal");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, bEvaluateTargetTraversal) == 1, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::bEvaluateTargetTraversal");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, MinUseDistance) == 4, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::MinUseDistance");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, MinProgressGain) == 8, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::MinProgressGain");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, MaxOffPathDistanceSqr) == 12, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::MaxOffPathDistanceSqr");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, MaxFalldownToNavmesh) == 16, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::MaxFalldownToNavmesh");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, NavProjectExtentXY) == 20, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::NavProjectExtentXY");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, NavProjectExtentZ) == 24, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::NavProjectExtentZ");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, LaunchVelocity) == 28, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::LaunchVelocity");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, TargetSideOffsetExtent) == 32, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::TargetSideOffsetExtent");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, LaunchCharacterZOffset) == 36, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::LaunchCharacterZOffset");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, LaunchVelocityZBoost) == 40, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::LaunchVelocityZBoost");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, LaunchVelocityZFloor) == 44, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::LaunchVelocityZFloor");
static_assert(offsetof(FDigestedBotShockwaveTraversalSettings, CapsuleHalfHeight) == 48, "Offset mismatch for FDigestedBotShockwaveTraversalSettings::CapsuleHalfHeight");

// /Script/PhoebeCoreRuntime.DigestedThrowTypeData
// Kind: ScriptStruct; super: none
struct FDigestedThrowTypeData
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ThrowType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t PawnLocationOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float GrenadeDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    void* ActionSequence; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDigestedThrowTypeData, Weight) == 0, "Offset mismatch for FDigestedThrowTypeData::Weight");
static_assert(offsetof(FDigestedThrowTypeData, ThrowType) == 4, "Offset mismatch for FDigestedThrowTypeData::ThrowType");
static_assert(offsetof(FDigestedThrowTypeData, PawnLocationOffset) == 8, "Offset mismatch for FDigestedThrowTypeData::PawnLocationOffset");
static_assert(offsetof(FDigestedThrowTypeData, AimOffset) == 32, "Offset mismatch for FDigestedThrowTypeData::AimOffset");
static_assert(offsetof(FDigestedThrowTypeData, GrenadeDistance) == 56, "Offset mismatch for FDigestedThrowTypeData::GrenadeDistance");
static_assert(offsetof(FDigestedThrowTypeData, ActionSequence) == 64, "Offset mismatch for FDigestedThrowTypeData::ActionSequence");

// /Script/PhoebeCoreRuntime.FortAthenaAIBotEvaluator_ShockwaveTraversal
// Kind: Class; super: FortAthenaAIEvaluator_BlueprintBase
class UFortAthenaAIBotEvaluator_ShockwaveTraversal
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    std::uint8_t Settings[0x208]; // 0x0618 (Size: 0x208, Type: StructProperty)
    void* ThrowDataTable; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AimLocationKeyName[0x4]; // 0x0828 (Size: 0x4, Type: NameProperty)
    std::uint8_t LaunchDirectionKeyName[0x4]; // 0x082C (Size: 0x4, Type: NameProperty)
    std::uint8_t CharacterLaunchedExecutionStatusKeyName[0x4]; // 0x0830 (Size: 0x4, Type: NameProperty)
    FName SelectedSequenceKeyName; // 0x0834 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x083C
    std::uint8_t DigestedSettings[0x38]; // 0x0840 (Size: 0x38, Type: StructProperty)
    TArray<void*> DigestedThrowTypeData; // 0x0878 (Size: 0x10, Type: ArrayProperty)
    void* CachedPathFollowingComponent; // 0x0888 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, Settings) == 1560, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::Settings");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, ThrowDataTable) == 2080, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::ThrowDataTable");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, AimLocationKeyName) == 2088, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::AimLocationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, LaunchDirectionKeyName) == 2092, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::LaunchDirectionKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, CharacterLaunchedExecutionStatusKeyName) == 2096, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::CharacterLaunchedExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, SelectedSequenceKeyName) == 2100, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::SelectedSequenceKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, DigestedSettings) == 2112, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::DigestedSettings");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, DigestedThrowTypeData) == 2168, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::DigestedThrowTypeData");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ShockwaveTraversal, CachedPathFollowingComponent) == 2184, "Offset mismatch for UFortAthenaAIBotEvaluator_ShockwaveTraversal::CachedPathFollowingComponent");

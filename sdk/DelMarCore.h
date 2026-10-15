/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarCore
 */
#pragma once
#include "Basic.h"

// /Script/DelMarCore.AudioMixModifier
// Kind: ScriptStruct; super: none
struct FAudioMixModifier
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Target; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float DefaultValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Curve[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMixModifier, ParamName) == 0, "Offset mismatch for FAudioMixModifier::ParamName");
static_assert(offsetof(FAudioMixModifier, Target) == 4, "Offset mismatch for FAudioMixModifier::Target");
static_assert(offsetof(FAudioMixModifier, DefaultValue) == 8, "Offset mismatch for FAudioMixModifier::DefaultValue");
static_assert(offsetof(FAudioMixModifier, Curve) == 16, "Offset mismatch for FAudioMixModifier::Curve");

// /Script/DelMarCore.AudioMixModifierGroup
// Kind: ScriptStruct; super: none
struct FAudioMixModifierGroup
{
public:
    FName GroupName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Modifiers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioMixModifierGroup, GroupName) == 0, "Offset mismatch for FAudioMixModifierGroup::GroupName");
static_assert(offsetof(FAudioMixModifierGroup, Modifiers) == 8, "Offset mismatch for FAudioMixModifierGroup::Modifiers");

// /Script/DelMarCore.AvoidanceInfo
// Kind: ScriptStruct; super: none
struct FAvoidanceInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.CheckpointTrackDistance
// Kind: ScriptStruct; super: none
struct FCheckpointTrackDistance
{
public:
    void* Track; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float LocalDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCheckpointTrackDistance, Track) == 0, "Offset mismatch for FCheckpointTrackDistance::Track");
static_assert(offsetof(FCheckpointTrackDistance, LocalDistance) == 8, "Offset mismatch for FCheckpointTrackDistance::LocalDistance");

// /Script/DelMarCore.DelMarAIDifficultySpawnInfo
// Kind: ScriptStruct; super: none
struct FDelMarAIDifficultySpawnInfo
{
public:
    std::int32_t SkillLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    float BotFillPercentage; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarAIDifficultySpawnInfo, SkillLevel) == 0, "Offset mismatch for FDelMarAIDifficultySpawnInfo::SkillLevel");
static_assert(offsetof(FDelMarAIDifficultySpawnInfo, BotFillPercentage) == 4, "Offset mismatch for FDelMarAIDifficultySpawnInfo::BotFillPercentage");

// /Script/DelMarCore.DelMarAIMMRSpawnDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FDelMarAIMMRSpawnDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MMRBracketLow; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MMRBracketHigh; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t FallbackSkillLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> BotSpawnInfo; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarAIMMRSpawnDataTableRow, MMRBracketLow) == 8, "Offset mismatch for FDelMarAIMMRSpawnDataTableRow::MMRBracketLow");
static_assert(offsetof(FDelMarAIMMRSpawnDataTableRow, MMRBracketHigh) == 12, "Offset mismatch for FDelMarAIMMRSpawnDataTableRow::MMRBracketHigh");
static_assert(offsetof(FDelMarAIMMRSpawnDataTableRow, FallbackSkillLevel) == 16, "Offset mismatch for FDelMarAIMMRSpawnDataTableRow::FallbackSkillLevel");
static_assert(offsetof(FDelMarAIMMRSpawnDataTableRow, BotSpawnInfo) == 24, "Offset mismatch for FDelMarAIMMRSpawnDataTableRow::BotSpawnInfo");

// /Script/DelMarCore.DelMarAITrackDecision
// Kind: ScriptStruct; super: none
struct FDelMarAITrackDecision
{
public:
    TWeakObjectPtr<void> Track; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarAITrackDecision, Track) == 0, "Offset mismatch for FDelMarAITrackDecision::Track");

// /Script/DelMarCore.DelMarAIVehicleCosmeticLoadoutSetDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FDelMarAIVehicleCosmeticLoadoutSetDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> LoadoutSlots; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarAIVehicleCosmeticLoadoutSetDataTableRow, LoadoutSlots) == 8, "Offset mismatch for FDelMarAIVehicleCosmeticLoadoutSetDataTableRow::LoadoutSlots");
static_assert(offsetof(FDelMarAIVehicleCosmeticLoadoutSetDataTableRow, Weight) == 24, "Offset mismatch for FDelMarAIVehicleCosmeticLoadoutSetDataTableRow::Weight");

// /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableInfo
// Kind: ScriptStruct; super: none
struct FDelMarAIVehicleCosmeticSlotDataTableInfo
{
public:
    std::uint8_t SlotTemplate[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> VehicleSlotCosmeticDataTable; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDelMarAIVehicleCosmeticSlotDataTableInfo, SlotTemplate) == 0, "Offset mismatch for FDelMarAIVehicleCosmeticSlotDataTableInfo::SlotTemplate");
static_assert(offsetof(FDelMarAIVehicleCosmeticSlotDataTableInfo, VehicleSlotCosmeticDataTable) == 32, "Offset mismatch for FDelMarAIVehicleCosmeticSlotDataTableInfo::VehicleSlotCosmeticDataTable");

// /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FDelMarAIVehicleCosmeticSlotDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EquippedItemDefinitionObject[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float Weight; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarAIVehicleCosmeticSlotDataTableRow, EquippedItemDefinitionObject) == 8, "Offset mismatch for FDelMarAIVehicleCosmeticSlotDataTableRow::EquippedItemDefinitionObject");
static_assert(offsetof(FDelMarAIVehicleCosmeticSlotDataTableRow, Weight) == 40, "Offset mismatch for FDelMarAIVehicleCosmeticSlotDataTableRow::Weight");

// /Script/DelMarCore.DelMarActivatedInput
// Kind: ScriptStruct; super: none
struct FDelMarActivatedInput
{
public:
    void* Action; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarActivatedInput, Action) == 0, "Offset mismatch for FDelMarActivatedInput::Action");
static_assert(offsetof(FDelMarActivatedInput, Value) == 8, "Offset mismatch for FDelMarActivatedInput::Value");

// /Script/DelMarCore.DelMarActivatedInputFrame
// Kind: ScriptStruct; super: none
struct FDelMarActivatedInputFrame
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Inputs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarActivatedInputFrame, duration) == 0, "Offset mismatch for FDelMarActivatedInputFrame::duration");
static_assert(offsetof(FDelMarActivatedInputFrame, Inputs) == 8, "Offset mismatch for FDelMarActivatedInputFrame::Inputs");

// /Script/DelMarCore.DelMarAnalyticsPlayerRaceData
// Kind: ScriptStruct; super: none
struct FDelMarAnalyticsPlayerRaceData
{
public:
    TWeakObjectPtr<void> DriverPC; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarAnalyticsPlayerRaceData, DriverPC) == 0, "Offset mismatch for FDelMarAnalyticsPlayerRaceData::DriverPC");

// /Script/DelMarCore.DelMarBotMMRPenaltyConfig
// Kind: ScriptStruct; super: none
struct FDelMarBotMMRPenaltyConfig
{
public:
    float MinMMR; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxMMR; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetSpeedPenaltyCurve[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetTurboChancesCurve[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarBotMMRPenaltyConfig, MinMMR) == 0, "Offset mismatch for FDelMarBotMMRPenaltyConfig::MinMMR");
static_assert(offsetof(FDelMarBotMMRPenaltyConfig, MaxMMR) == 4, "Offset mismatch for FDelMarBotMMRPenaltyConfig::MaxMMR");
static_assert(offsetof(FDelMarBotMMRPenaltyConfig, TargetSpeedPenaltyCurve) == 8, "Offset mismatch for FDelMarBotMMRPenaltyConfig::TargetSpeedPenaltyCurve");
static_assert(offsetof(FDelMarBotMMRPenaltyConfig, TargetTurboChancesCurve) == 24, "Offset mismatch for FDelMarBotMMRPenaltyConfig::TargetTurboChancesCurve");

// /Script/DelMarCore.DelMarBotRuntimeConfig
// Kind: ScriptStruct; super: none
struct FDelMarBotRuntimeConfig
{
public:
    std::uint8_t BotTargetSpeedPenaltyCurve[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> BotTargetSpeedMMRPenalty; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumPlayersAheadForNoBotPenalty; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarBotRuntimeConfig, BotTargetSpeedPenaltyCurve) == 0, "Offset mismatch for FDelMarBotRuntimeConfig::BotTargetSpeedPenaltyCurve");
static_assert(offsetof(FDelMarBotRuntimeConfig, BotTargetSpeedMMRPenalty) == 16, "Offset mismatch for FDelMarBotRuntimeConfig::BotTargetSpeedMMRPenalty");
static_assert(offsetof(FDelMarBotRuntimeConfig, NumPlayersAheadForNoBotPenalty) == 32, "Offset mismatch for FDelMarBotRuntimeConfig::NumPlayersAheadForNoBotPenalty");

// /Script/DelMarCore.DelMarCameraFloatBlendedProperty
// Kind: ScriptStruct; super: none
struct FDelMarCameraFloatBlendedProperty
{
public:
    std::uint8_t bEvaluateInputOnCurve; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t InputCurve[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    float ActiveValue; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRemapOutputValue; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::uint8_t RemapCurve[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    float BlendInLambda; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float BlendOutLambda; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseBlendOutCurve; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A9
    std::uint8_t BlendOutLambdaCurve[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    float Tolerance; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarCameraFloatBlendedProperty, bEvaluateInputOnCurve) == 0, "Offset mismatch for FDelMarCameraFloatBlendedProperty::bEvaluateInputOnCurve");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, InputCurve) == 8, "Offset mismatch for FDelMarCameraFloatBlendedProperty::InputCurve");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, ActiveValue) == 80, "Offset mismatch for FDelMarCameraFloatBlendedProperty::ActiveValue");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, bRemapOutputValue) == 84, "Offset mismatch for FDelMarCameraFloatBlendedProperty::bRemapOutputValue");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, RemapCurve) == 88, "Offset mismatch for FDelMarCameraFloatBlendedProperty::RemapCurve");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, BlendInLambda) == 160, "Offset mismatch for FDelMarCameraFloatBlendedProperty::BlendInLambda");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, BlendOutLambda) == 164, "Offset mismatch for FDelMarCameraFloatBlendedProperty::BlendOutLambda");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, bUseBlendOutCurve) == 168, "Offset mismatch for FDelMarCameraFloatBlendedProperty::bUseBlendOutCurve");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, BlendOutLambdaCurve) == 176, "Offset mismatch for FDelMarCameraFloatBlendedProperty::BlendOutLambdaCurve");
static_assert(offsetof(FDelMarCameraFloatBlendedProperty, Tolerance) == 248, "Offset mismatch for FDelMarCameraFloatBlendedProperty::Tolerance");

// /Script/DelMarCore.DelMarCameraFloatProperty
// Kind: ScriptStruct; super: none
struct FDelMarCameraFloatProperty
{
public:
    std::uint8_t bEvaluateInputOnCurve; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccumulateInput; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t Curve[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    float InterpLambda; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float DecayLambda; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ClampedRange[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarCameraFloatProperty, bEvaluateInputOnCurve) == 0, "Offset mismatch for FDelMarCameraFloatProperty::bEvaluateInputOnCurve");
static_assert(offsetof(FDelMarCameraFloatProperty, bAccumulateInput) == 1, "Offset mismatch for FDelMarCameraFloatProperty::bAccumulateInput");
static_assert(offsetof(FDelMarCameraFloatProperty, Curve) == 8, "Offset mismatch for FDelMarCameraFloatProperty::Curve");
static_assert(offsetof(FDelMarCameraFloatProperty, InterpLambda) == 80, "Offset mismatch for FDelMarCameraFloatProperty::InterpLambda");
static_assert(offsetof(FDelMarCameraFloatProperty, DecayLambda) == 84, "Offset mismatch for FDelMarCameraFloatProperty::DecayLambda");
static_assert(offsetof(FDelMarCameraFloatProperty, ClampedRange) == 88, "Offset mismatch for FDelMarCameraFloatProperty::ClampedRange");

// /Script/DelMarCore.DelMarCosmeticLoadoutSlotData
// Kind: ScriptStruct; super: none
struct FDelMarCosmeticLoadoutSlotData
{
public:
    std::uint8_t SlotTemplate[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> EquippedItemDefinitionObject; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDelMarCosmeticLoadoutSlotData, SlotTemplate) == 0, "Offset mismatch for FDelMarCosmeticLoadoutSlotData::SlotTemplate");
static_assert(offsetof(FDelMarCosmeticLoadoutSlotData, EquippedItemDefinitionObject) == 32, "Offset mismatch for FDelMarCosmeticLoadoutSlotData::EquippedItemDefinitionObject");

// /Script/DelMarCore.DelMarCosmeticSlotInfo
// Kind: ScriptStruct; super: none
struct FDelMarCosmeticSlotInfo
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SlotName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCanBeEmpty; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TSoftObjectPtr<void> UnassignedPreviewImage; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDelMarCosmeticSlotInfo, SlotTag) == 0, "Offset mismatch for FDelMarCosmeticSlotInfo::SlotTag");
static_assert(offsetof(FDelMarCosmeticSlotInfo, SlotName) == 8, "Offset mismatch for FDelMarCosmeticSlotInfo::SlotName");
static_assert(offsetof(FDelMarCosmeticSlotInfo, ShortDescription) == 24, "Offset mismatch for FDelMarCosmeticSlotInfo::ShortDescription");
static_assert(offsetof(FDelMarCosmeticSlotInfo, bCanBeEmpty) == 40, "Offset mismatch for FDelMarCosmeticSlotInfo::bCanBeEmpty");
static_assert(offsetof(FDelMarCosmeticSlotInfo, UnassignedPreviewImage) == 48, "Offset mismatch for FDelMarCosmeticSlotInfo::UnassignedPreviewImage");

// /Script/DelMarCore.DelMarCurveFloat
// Kind: ScriptStruct; super: none
struct FDelMarCurveFloat
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Curve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarCurveFloat, Scale) == 0, "Offset mismatch for FDelMarCurveFloat::Scale");
static_assert(offsetof(FDelMarCurveFloat, Curve) == 8, "Offset mismatch for FDelMarCurveFloat::Curve");

// /Script/DelMarCore.DelMarDeathRaceConfig
// Kind: ScriptStruct; super: none
struct FDelMarDeathRaceConfig
{
public:
    TArray<void*> PlacementPointsMap; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ScoreThresholdToEndMatch; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarDeathRaceConfig, PlacementPointsMap) == 0, "Offset mismatch for FDelMarDeathRaceConfig::PlacementPointsMap");
static_assert(offsetof(FDelMarDeathRaceConfig, ScoreThresholdToEndMatch) == 16, "Offset mismatch for FDelMarDeathRaceConfig::ScoreThresholdToEndMatch");

// /Script/DelMarCore.DelMarDefaultCameraValues
// Kind: ScriptStruct; super: none
struct FDelMarDefaultCameraValues
{
public:
    float FOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AngleToOriginDegrees; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarDefaultCameraValues, FOV) == 0, "Offset mismatch for FDelMarDefaultCameraValues::FOV");
static_assert(offsetof(FDelMarDefaultCameraValues, Distance) == 4, "Offset mismatch for FDelMarDefaultCameraValues::Distance");
static_assert(offsetof(FDelMarDefaultCameraValues, Height) == 8, "Offset mismatch for FDelMarDefaultCameraValues::Height");
static_assert(offsetof(FDelMarDefaultCameraValues, AngleToOriginDegrees) == 12, "Offset mismatch for FDelMarDefaultCameraValues::AngleToOriginDegrees");

// /Script/DelMarCore.DelMarDisabledInputData
// Kind: ScriptStruct; super: none
struct FDelMarDisabledInputData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* EffectClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FDelMarDisabledInputData, duration) == 0, "Offset mismatch for FDelMarDisabledInputData::duration");
static_assert(offsetof(FDelMarDisabledInputData, EffectClass) == 8, "Offset mismatch for FDelMarDisabledInputData::EffectClass");

// /Script/DelMarCore.DelMarDynamicCameraShakeEffect
// Kind: ScriptStruct; super: none
struct FDelMarDynamicCameraShakeEffect
{
public:
    void* CameraShakeClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> CameraShakeInstance; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ShakeIntensityCurve[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    float CurrentShakeIntensity; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarDynamicCameraShakeEffect, CameraShakeClass) == 0, "Offset mismatch for FDelMarDynamicCameraShakeEffect::CameraShakeClass");
static_assert(offsetof(FDelMarDynamicCameraShakeEffect, CameraShakeInstance) == 8, "Offset mismatch for FDelMarDynamicCameraShakeEffect::CameraShakeInstance");
static_assert(offsetof(FDelMarDynamicCameraShakeEffect, ShakeIntensityCurve) == 16, "Offset mismatch for FDelMarDynamicCameraShakeEffect::ShakeIntensityCurve");
static_assert(offsetof(FDelMarDynamicCameraShakeEffect, CurrentShakeIntensity) == 88, "Offset mismatch for FDelMarDynamicCameraShakeEffect::CurrentShakeIntensity");

// /Script/DelMarCore.DelMarDynamicForceFeedbackEffect
// Kind: ScriptStruct; super: none
struct FDelMarDynamicForceFeedbackEffect
{
public:
    std::uint8_t Effect[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    std::uint8_t IntensityAmplifierCurve[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarDynamicForceFeedbackEffect, Effect) == 0, "Offset mismatch for FDelMarDynamicForceFeedbackEffect::Effect");
static_assert(offsetof(FDelMarDynamicForceFeedbackEffect, IntensityAmplifierCurve) == 80, "Offset mismatch for FDelMarDynamicForceFeedbackEffect::IntensityAmplifierCurve");

// /Script/DelMarCore.DelMarEliminationMMRCountPair
// Kind: ScriptStruct; super: none
struct FDelMarEliminationMMRCountPair
{
public:
    std::int32_t MaxMMR; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayersToEliminate; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarEliminationMMRCountPair, MaxMMR) == 0, "Offset mismatch for FDelMarEliminationMMRCountPair::MaxMMR");
static_assert(offsetof(FDelMarEliminationMMRCountPair, PlayersToEliminate) == 4, "Offset mismatch for FDelMarEliminationMMRCountPair::PlayersToEliminate");

// /Script/DelMarCore.DelMarEnvironmentVFX
// Kind: ScriptStruct; super: none
struct FDelMarEnvironmentVFX
{
public:
    void* OnAppliedFX; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* WhileAppliedFX; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* OnRemovedFX; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarEnvironmentVFX, OnAppliedFX) == 0, "Offset mismatch for FDelMarEnvironmentVFX::OnAppliedFX");
static_assert(offsetof(FDelMarEnvironmentVFX, WhileAppliedFX) == 8, "Offset mismatch for FDelMarEnvironmentVFX::WhileAppliedFX");
static_assert(offsetof(FDelMarEnvironmentVFX, OnRemovedFX) == 16, "Offset mismatch for FDelMarEnvironmentVFX::OnRemovedFX");

// /Script/DelMarCore.DelMarEventRouterExt
// Kind: ScriptStruct; super: none
struct FDelMarEventRouterExt
{
public:
    std::uint8_t bWorldIsTearingDown; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* EventRouter; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* EventRouterContextObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarEventRouterExt, bWorldIsTearingDown) == 0, "Offset mismatch for FDelMarEventRouterExt::bWorldIsTearingDown");
static_assert(offsetof(FDelMarEventRouterExt, EventRouter) == 8, "Offset mismatch for FDelMarEventRouterExt::EventRouter");
static_assert(offsetof(FDelMarEventRouterExt, EventRouterContextObject) == 16, "Offset mismatch for FDelMarEventRouterExt::EventRouterContextObject");

// /Script/DelMarCore.DelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
// Kind: ScriptStruct; super: none
struct FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
{
public:
    TWeakObjectPtr<void> CurrentCheckpoint; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath, CurrentCheckpoint) == 0, "Offset mismatch for FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath::CurrentCheckpoint");

// /Script/DelMarCore.DelMarEvent_CheckpointPassed_ParallelPath
// Kind: ScriptStruct; super: none
struct FDelMarEvent_CheckpointPassed_ParallelPath
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentCheckpoint; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t CheckpointIndexForLap; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarEvent_CheckpointPassed_ParallelPath, PlayerState) == 0, "Offset mismatch for FDelMarEvent_CheckpointPassed_ParallelPath::PlayerState");
static_assert(offsetof(FDelMarEvent_CheckpointPassed_ParallelPath, CurrentCheckpoint) == 8, "Offset mismatch for FDelMarEvent_CheckpointPassed_ParallelPath::CurrentCheckpoint");
static_assert(offsetof(FDelMarEvent_CheckpointPassed_ParallelPath, CheckpointIndexForLap) == 16, "Offset mismatch for FDelMarEvent_CheckpointPassed_ParallelPath::CheckpointIndexForLap");

// /Script/DelMarCore.DelMarEvent_CountdownActive
// Kind: ScriptStruct; super: none
struct FDelMarEvent_CountdownActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_DialogRequest
// Kind: ScriptStruct; super: none
struct FDelMarEvent_DialogRequest
{
public:
    std::uint8_t DialogTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_DialogRequest, DialogTag) == 0, "Offset mismatch for FDelMarEvent_DialogRequest::DialogTag");

// /Script/DelMarCore.DelMarEvent_DriverInteractionAdded
// Kind: ScriptStruct; super: none
struct FDelMarEvent_DriverInteractionAdded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_FirstPlayerFinishedCountdown
// Kind: ScriptStruct; super: none
struct FDelMarEvent_FirstPlayerFinishedCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardNewPersonalBest
// Kind: ScriptStruct; super: none
struct FDelMarEvent_GlobalLeaderboardNewPersonalBest
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PersonalBest[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_GlobalLeaderboardNewPersonalBest, player) == 0, "Offset mismatch for FDelMarEvent_GlobalLeaderboardNewPersonalBest::player");
static_assert(offsetof(FDelMarEvent_GlobalLeaderboardNewPersonalBest, PersonalBest) == 8, "Offset mismatch for FDelMarEvent_GlobalLeaderboardNewPersonalBest::PersonalBest");

// /Script/DelMarCore.DelMarEvent_LapComplete
// Kind: ScriptStruct; super: none
struct FDelMarEvent_LapComplete
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t CompletedLap; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentLap; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalLaps; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    double CompletedLapTime; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarEvent_LapComplete, PlayerState) == 0, "Offset mismatch for FDelMarEvent_LapComplete::PlayerState");
static_assert(offsetof(FDelMarEvent_LapComplete, CompletedLap) == 8, "Offset mismatch for FDelMarEvent_LapComplete::CompletedLap");
static_assert(offsetof(FDelMarEvent_LapComplete, CurrentLap) == 12, "Offset mismatch for FDelMarEvent_LapComplete::CurrentLap");
static_assert(offsetof(FDelMarEvent_LapComplete, TotalLaps) == 16, "Offset mismatch for FDelMarEvent_LapComplete::TotalLaps");
static_assert(offsetof(FDelMarEvent_LapComplete, CompletedLapTime) == 24, "Offset mismatch for FDelMarEvent_LapComplete::CompletedLapTime");

// /Script/DelMarCore.DelMarEvent_LapRecorded
// Kind: ScriptStruct; super: none
struct FDelMarEvent_LapRecorded
{
public:
    std::int32_t CompletedLap; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t CurrentRunRecord[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    float BestSingleLapTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsNewLapRecord; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarEvent_LapRecorded, CompletedLap) == 0, "Offset mismatch for FDelMarEvent_LapRecorded::CompletedLap");
static_assert(offsetof(FDelMarEvent_LapRecorded, CurrentRunRecord) == 8, "Offset mismatch for FDelMarEvent_LapRecorded::CurrentRunRecord");
static_assert(offsetof(FDelMarEvent_LapRecorded, BestSingleLapTime) == 40, "Offset mismatch for FDelMarEvent_LapRecorded::BestSingleLapTime");
static_assert(offsetof(FDelMarEvent_LapRecorded, bIsNewLapRecord) == 44, "Offset mismatch for FDelMarEvent_LapRecorded::bIsNewLapRecord");

// /Script/DelMarCore.DelMarEvent_LapStarted
// Kind: ScriptStruct; super: none
struct FDelMarEvent_LapStarted
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_LapStarted, PlayerState) == 0, "Offset mismatch for FDelMarEvent_LapStarted::PlayerState");

// /Script/DelMarCore.DelMarEvent_LoadedPlayerStates
// Kind: ScriptStruct; super: none
struct FDelMarEvent_LoadedPlayerStates
{
public:
    std::int32_t NumLoadedPlayers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlayers; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarEvent_LoadedPlayerStates, NumLoadedPlayers) == 0, "Offset mismatch for FDelMarEvent_LoadedPlayerStates::NumLoadedPlayers");
static_assert(offsetof(FDelMarEvent_LoadedPlayerStates, TotalPlayers) == 4, "Offset mismatch for FDelMarEvent_LoadedPlayerStates::TotalPlayers");

// /Script/DelMarCore.DelMarEvent_LoadingScreenData
// Kind: ScriptStruct; super: none
struct FDelMarEvent_LoadingScreenData
{
public:
    TWeakObjectPtr<void> LevelData; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RaceMode[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_LoadingScreenData, LevelData) == 0, "Offset mismatch for FDelMarEvent_LoadingScreenData::LevelData");
static_assert(offsetof(FDelMarEvent_LoadingScreenData, RaceMode) == 8, "Offset mismatch for FDelMarEvent_LoadingScreenData::RaceMode");

// /Script/DelMarCore.DelMarEvent_MatchmakingReadyUp
// Kind: ScriptStruct; super: none
struct FDelMarEvent_MatchmakingReadyUp
{
public:
    TWeakObjectPtr<void> LocalPlayer; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_MatchmakingReadyUp, LocalPlayer) == 0, "Offset mismatch for FDelMarEvent_MatchmakingReadyUp::LocalPlayer");

// /Script/DelMarCore.DelMarEvent_MatchmakingStateChanged
// Kind: ScriptStruct; super: none
struct FDelMarEvent_MatchmakingStateChanged
{
public:
    std::uint8_t NewPostMatchState; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarEvent_MatchmakingStateChanged, NewPostMatchState) == 0, "Offset mismatch for FDelMarEvent_MatchmakingStateChanged::NewPostMatchState");

// /Script/DelMarCore.DelMarEvent_MidTutorialModal
// Kind: ScriptStruct; super: none
struct FDelMarEvent_MidTutorialModal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_MissedCheckpointDemoCountdown
// Kind: ScriptStruct; super: none
struct FDelMarEvent_MissedCheckpointDemoCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_MusicPlaylistUpdated
// Kind: ScriptStruct; super: none
struct FDelMarEvent_MusicPlaylistUpdated
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> PreRaceMusic; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PostRaceMusic; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_MusicPlaylistUpdated, PreRaceMusic) == 8, "Offset mismatch for FDelMarEvent_MusicPlaylistUpdated::PreRaceMusic");
static_assert(offsetof(FDelMarEvent_MusicPlaylistUpdated, PostRaceMusic) == 16, "Offset mismatch for FDelMarEvent_MusicPlaylistUpdated::PostRaceMusic");

// /Script/DelMarCore.DelMarEvent_NuxConnectedHintActionPerformed
// Kind: ScriptStruct; super: none
struct FDelMarEvent_NuxConnectedHintActionPerformed
{
public:
    std::uint8_t HintTypeTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDidPerformAction; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarEvent_NuxConnectedHintActionPerformed, HintTypeTag) == 0, "Offset mismatch for FDelMarEvent_NuxConnectedHintActionPerformed::HintTypeTag");
static_assert(offsetof(FDelMarEvent_NuxConnectedHintActionPerformed, bDidPerformAction) == 4, "Offset mismatch for FDelMarEvent_NuxConnectedHintActionPerformed::bDidPerformAction");

// /Script/DelMarCore.DelMarEvent_OvertimeActive
// Kind: ScriptStruct; super: none
struct FDelMarEvent_OvertimeActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_PlayerBecomeSpectator
// Kind: ScriptStruct; super: none
struct FDelMarEvent_PlayerBecomeSpectator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_PlayerFinishedRace
// Kind: ScriptStruct; super: none
struct FDelMarEvent_PlayerFinishedRace
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_PostRaceNextRaceSelected
// Kind: ScriptStruct; super: none
struct FDelMarEvent_PostRaceNextRaceSelected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_PostRaceReturnToLobbySelected
// Kind: ScriptStruct; super: none
struct FDelMarEvent_PostRaceReturnToLobbySelected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_QuestScreenClosed
// Kind: ScriptStruct; super: none
struct FDelMarEvent_QuestScreenClosed
{
public:
    float OpenedDuration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RaceState[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_QuestScreenClosed, OpenedDuration) == 0, "Offset mismatch for FDelMarEvent_QuestScreenClosed::OpenedDuration");
static_assert(offsetof(FDelMarEvent_QuestScreenClosed, RaceState) == 4, "Offset mismatch for FDelMarEvent_QuestScreenClosed::RaceState");

// /Script/DelMarCore.DelMarEvent_QuestScreenOpened
// Kind: ScriptStruct; super: none
struct FDelMarEvent_QuestScreenOpened
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RaceState[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_QuestScreenOpened, PlayerState) == 0, "Offset mismatch for FDelMarEvent_QuestScreenOpened::PlayerState");
static_assert(offsetof(FDelMarEvent_QuestScreenOpened, RaceState) == 8, "Offset mismatch for FDelMarEvent_QuestScreenOpened::RaceState");

// /Script/DelMarCore.DelMarEvent_RaceActive
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RaceActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_RaceFinished
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RaceFinished
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_RaceManagerInitialized
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RaceManagerInitialized
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_RaceModeSet
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RaceModeSet
{
public:
    std::uint8_t RaceModeTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_RaceModeSet, RaceModeTag) == 0, "Offset mismatch for FDelMarEvent_RaceModeSet::RaceModeTag");

// /Script/DelMarCore.DelMarEvent_RacerStateChanged
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RacerStateChanged
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PrevStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewStateId[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_RacerStateChanged, PrevStateId) == 8, "Offset mismatch for FDelMarEvent_RacerStateChanged::PrevStateId");
static_assert(offsetof(FDelMarEvent_RacerStateChanged, NewStateId) == 12, "Offset mismatch for FDelMarEvent_RacerStateChanged::NewStateId");

// /Script/DelMarCore.DelMarEvent_ResetRace
// Kind: ScriptStruct; super: none
struct FDelMarEvent_ResetRace
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_ResetRun
// Kind: ScriptStruct; super: none
struct FDelMarEvent_ResetRun
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_ReturnToTrackDemoCountdown
// Kind: ScriptStruct; super: none
struct FDelMarEvent_ReturnToTrackDemoCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_RunActive
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RunActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_RunRecorded
// Kind: ScriptStruct; super: none
struct FDelMarEvent_RunRecorded
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentRunRecord[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t BestRunRecord[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsNewBestRun; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarEvent_RunRecorded, PlayerState) == 0, "Offset mismatch for FDelMarEvent_RunRecorded::PlayerState");
static_assert(offsetof(FDelMarEvent_RunRecorded, CurrentRunRecord) == 8, "Offset mismatch for FDelMarEvent_RunRecorded::CurrentRunRecord");
static_assert(offsetof(FDelMarEvent_RunRecorded, BestRunRecord) == 40, "Offset mismatch for FDelMarEvent_RunRecorded::BestRunRecord");
static_assert(offsetof(FDelMarEvent_RunRecorded, bIsNewBestRun) == 72, "Offset mismatch for FDelMarEvent_RunRecorded::bIsNewBestRun");

// /Script/DelMarCore.DelMarEvent_SectionComplete_ParallelPath
// Kind: ScriptStruct; super: none
struct FDelMarEvent_SectionComplete_ParallelPath
{
public:
    std::int32_t ActiveLap; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> CompletedCheckpoint; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentCheckpoint; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    double CompletedSectionTime; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarEvent_SectionComplete_ParallelPath, ActiveLap) == 0, "Offset mismatch for FDelMarEvent_SectionComplete_ParallelPath::ActiveLap");
static_assert(offsetof(FDelMarEvent_SectionComplete_ParallelPath, SectionIndex) == 4, "Offset mismatch for FDelMarEvent_SectionComplete_ParallelPath::SectionIndex");
static_assert(offsetof(FDelMarEvent_SectionComplete_ParallelPath, CompletedCheckpoint) == 8, "Offset mismatch for FDelMarEvent_SectionComplete_ParallelPath::CompletedCheckpoint");
static_assert(offsetof(FDelMarEvent_SectionComplete_ParallelPath, CurrentCheckpoint) == 16, "Offset mismatch for FDelMarEvent_SectionComplete_ParallelPath::CurrentCheckpoint");
static_assert(offsetof(FDelMarEvent_SectionComplete_ParallelPath, CompletedSectionTime) == 24, "Offset mismatch for FDelMarEvent_SectionComplete_ParallelPath::CompletedSectionTime");

// /Script/DelMarCore.DelMarEvent_SectionRecorded
// Kind: ScriptStruct; super: none
struct FDelMarEvent_SectionRecorded
{
public:
    std::int32_t ActiveLap; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t BestSectionsRunRecord[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurrentRunRecord[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsNewSectionRecord; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarEvent_SectionRecorded, ActiveLap) == 0, "Offset mismatch for FDelMarEvent_SectionRecorded::ActiveLap");
static_assert(offsetof(FDelMarEvent_SectionRecorded, SectionIndex) == 4, "Offset mismatch for FDelMarEvent_SectionRecorded::SectionIndex");
static_assert(offsetof(FDelMarEvent_SectionRecorded, BestSectionsRunRecord) == 8, "Offset mismatch for FDelMarEvent_SectionRecorded::BestSectionsRunRecord");
static_assert(offsetof(FDelMarEvent_SectionRecorded, CurrentRunRecord) == 40, "Offset mismatch for FDelMarEvent_SectionRecorded::CurrentRunRecord");
static_assert(offsetof(FDelMarEvent_SectionRecorded, bIsNewSectionRecord) == 72, "Offset mismatch for FDelMarEvent_SectionRecorded::bIsNewSectionRecord");

// /Script/DelMarCore.DelMarEvent_ServerPostRaceEndTime
// Kind: ScriptStruct; super: none
struct FDelMarEvent_ServerPostRaceEndTime
{
public:
    double ServerTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarEvent_ServerPostRaceEndTime, ServerTime) == 0, "Offset mismatch for FDelMarEvent_ServerPostRaceEndTime::ServerTime");

// /Script/DelMarCore.DelMarEvent_ServerRaceStartCountdownTime
// Kind: ScriptStruct; super: none
struct FDelMarEvent_ServerRaceStartCountdownTime
{
public:
    double ServerTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarEvent_ServerRaceStartCountdownTime, ServerTime) == 0, "Offset mismatch for FDelMarEvent_ServerRaceStartCountdownTime::ServerTime");

// /Script/DelMarCore.DelMarEvent_SetControlsText
// Kind: ScriptStruct; super: none
struct FDelMarEvent_SetControlsText
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText GamepadText; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FDelMarEvent_SetControlsText, KBMText) == 0, "Offset mismatch for FDelMarEvent_SetControlsText::KBMText");
static_assert(offsetof(FDelMarEvent_SetControlsText, GamepadText) == 16, "Offset mismatch for FDelMarEvent_SetControlsText::GamepadText");

// /Script/DelMarCore.DelMarEvent_SetTutorialAnnouncement
// Kind: ScriptStruct; super: none
struct FDelMarEvent_SetTutorialAnnouncement
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TouchText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    TArray<void*> AssociatedInputActions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarEvent_SetTutorialAnnouncement, KBMText) == 0, "Offset mismatch for FDelMarEvent_SetTutorialAnnouncement::KBMText");
static_assert(offsetof(FDelMarEvent_SetTutorialAnnouncement, GamepadText) == 16, "Offset mismatch for FDelMarEvent_SetTutorialAnnouncement::GamepadText");
static_assert(offsetof(FDelMarEvent_SetTutorialAnnouncement, TouchText) == 32, "Offset mismatch for FDelMarEvent_SetTutorialAnnouncement::TouchText");
static_assert(offsetof(FDelMarEvent_SetTutorialAnnouncement, AssociatedInputActions) == 48, "Offset mismatch for FDelMarEvent_SetTutorialAnnouncement::AssociatedInputActions");

// /Script/DelMarCore.DelMarEvent_SetTutorialHint
// Kind: ScriptStruct; super: none
struct FDelMarEvent_SetTutorialHint
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TouchText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    float DisplayTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t Priority; // 0x0034 (Size: 0x4, Type: IntProperty)
    TArray<void*> AssociatedInputActions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarEvent_SetTutorialHint, KBMText) == 0, "Offset mismatch for FDelMarEvent_SetTutorialHint::KBMText");
static_assert(offsetof(FDelMarEvent_SetTutorialHint, GamepadText) == 16, "Offset mismatch for FDelMarEvent_SetTutorialHint::GamepadText");
static_assert(offsetof(FDelMarEvent_SetTutorialHint, TouchText) == 32, "Offset mismatch for FDelMarEvent_SetTutorialHint::TouchText");
static_assert(offsetof(FDelMarEvent_SetTutorialHint, DisplayTime) == 48, "Offset mismatch for FDelMarEvent_SetTutorialHint::DisplayTime");
static_assert(offsetof(FDelMarEvent_SetTutorialHint, Priority) == 52, "Offset mismatch for FDelMarEvent_SetTutorialHint::Priority");
static_assert(offsetof(FDelMarEvent_SetTutorialHint, AssociatedInputActions) == 56, "Offset mismatch for FDelMarEvent_SetTutorialHint::AssociatedInputActions");

// /Script/DelMarCore.DelMarEvent_TeleportEnteredEvent
// Kind: ScriptStruct; super: none
struct FDelMarEvent_TeleportEnteredEvent
{
public:
    TWeakObjectPtr<void> CheckpointEntered; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_TeleportEnteredEvent, CheckpointEntered) == 0, "Offset mismatch for FDelMarEvent_TeleportEnteredEvent::CheckpointEntered");

// /Script/DelMarCore.DelMarEvent_TeleportExitedEvent
// Kind: ScriptStruct; super: none
struct FDelMarEvent_TeleportExitedEvent
{
public:
    TWeakObjectPtr<void> CheckpointExited; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarEvent_TeleportExitedEvent, CheckpointExited) == 0, "Offset mismatch for FDelMarEvent_TeleportExitedEvent::CheckpointExited");

// /Script/DelMarCore.DelMarEvent_TrackedPlayerReadyStates
// Kind: ScriptStruct; super: none
struct FDelMarEvent_TrackedPlayerReadyStates
{
public:
    TArray<void*> ReadyPlayers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnreadyPlayers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarEvent_TrackedPlayerReadyStates, ReadyPlayers) == 0, "Offset mismatch for FDelMarEvent_TrackedPlayerReadyStates::ReadyPlayers");
static_assert(offsetof(FDelMarEvent_TrackedPlayerReadyStates, UnreadyPlayers) == 16, "Offset mismatch for FDelMarEvent_TrackedPlayerReadyStates::UnreadyPlayers");

// /Script/DelMarCore.DelMarEvent_TutorialSectionChanged
// Kind: ScriptStruct; super: none
struct FDelMarEvent_TutorialSectionChanged
{
public:
    std::uint8_t CurrentSection[0x98]; // 0x0000 (Size: 0x98, Type: StructProperty)
    std::int32_t CurrentSectionIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarEvent_TutorialSectionChanged, CurrentSection) == 0, "Offset mismatch for FDelMarEvent_TutorialSectionChanged::CurrentSection");
static_assert(offsetof(FDelMarEvent_TutorialSectionChanged, CurrentSectionIndex) == 152, "Offset mismatch for FDelMarEvent_TutorialSectionChanged::CurrentSectionIndex");

// /Script/DelMarCore.DelMarEvent_VehicleAssignedToPawn
// Kind: ScriptStruct; super: none
struct FDelMarEvent_VehicleAssignedToPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_VehicleDemolished
// Kind: ScriptStruct; super: none
struct FDelMarEvent_VehicleDemolished
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CausedByTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarEvent_VehicleDemolished, CausedByTag) == 8, "Offset mismatch for FDelMarEvent_VehicleDemolished::CausedByTag");

// /Script/DelMarCore.DelMarEvent_VehicleWrongwayStatus
// Kind: ScriptStruct; super: none
struct FDelMarEvent_VehicleWrongwayStatus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarFinalRacePositionEntry
// Kind: ScriptStruct; super: none
struct FDelMarFinalRacePositionEntry
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    double RunTime; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarFinalRacePositionEntry, PlayerState) == 0, "Offset mismatch for FDelMarFinalRacePositionEntry::PlayerState");
static_assert(offsetof(FDelMarFinalRacePositionEntry, RunTime) == 8, "Offset mismatch for FDelMarFinalRacePositionEntry::RunTime");

// /Script/DelMarCore.DelMarFloatAttribute
// Kind: ScriptStruct; super: none
struct FDelMarFloatAttribute
{
public:
    float BaseValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FinalValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMin; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float MinValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMax; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float MaxValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Modifiers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentHandleIdx; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarFloatAttribute, BaseValue) == 0, "Offset mismatch for FDelMarFloatAttribute::BaseValue");
static_assert(offsetof(FDelMarFloatAttribute, FinalValue) == 4, "Offset mismatch for FDelMarFloatAttribute::FinalValue");
static_assert(offsetof(FDelMarFloatAttribute, bClampMin) == 8, "Offset mismatch for FDelMarFloatAttribute::bClampMin");
static_assert(offsetof(FDelMarFloatAttribute, MinValue) == 12, "Offset mismatch for FDelMarFloatAttribute::MinValue");
static_assert(offsetof(FDelMarFloatAttribute, bClampMax) == 16, "Offset mismatch for FDelMarFloatAttribute::bClampMax");
static_assert(offsetof(FDelMarFloatAttribute, MaxValue) == 20, "Offset mismatch for FDelMarFloatAttribute::MaxValue");
static_assert(offsetof(FDelMarFloatAttribute, Modifiers) == 24, "Offset mismatch for FDelMarFloatAttribute::Modifiers");
static_assert(offsetof(FDelMarFloatAttribute, CurrentHandleIdx) == 40, "Offset mismatch for FDelMarFloatAttribute::CurrentHandleIdx");

// /Script/DelMarCore.DelMarFloatModifier
// Kind: ScriptStruct; super: none
struct FDelMarFloatModifier
{
public:
    std::uint8_t Category[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Operation; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t StackingPolicy; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarFloatModifier, Category) == 0, "Offset mismatch for FDelMarFloatModifier::Category");
static_assert(offsetof(FDelMarFloatModifier, Priority) == 4, "Offset mismatch for FDelMarFloatModifier::Priority");
static_assert(offsetof(FDelMarFloatModifier, Value) == 8, "Offset mismatch for FDelMarFloatModifier::Value");
static_assert(offsetof(FDelMarFloatModifier, Operation) == 12, "Offset mismatch for FDelMarFloatModifier::Operation");
static_assert(offsetof(FDelMarFloatModifier, StackingPolicy) == 13, "Offset mismatch for FDelMarFloatModifier::StackingPolicy");
static_assert(offsetof(FDelMarFloatModifier, Handle) == 16, "Offset mismatch for FDelMarFloatModifier::Handle");

// /Script/DelMarCore.DelMarGameplayModifierList
// Kind: ScriptStruct; super: none
struct FDelMarGameplayModifierList
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarGameplayModifierList, Modifiers) == 0, "Offset mismatch for FDelMarGameplayModifierList::Modifiers");

// /Script/DelMarCore.DelMarGameplayStateChangedEvent
// Kind: ScriptStruct; super: none
struct FDelMarGameplayStateChangedEvent
{
public:
    std::uint8_t PrevStateId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewStateId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarGameplayStateChangedEvent, PrevStateId) == 0, "Offset mismatch for FDelMarGameplayStateChangedEvent::PrevStateId");
static_assert(offsetof(FDelMarGameplayStateChangedEvent, NewStateId) == 4, "Offset mismatch for FDelMarGameplayStateChangedEvent::NewStateId");

// /Script/DelMarCore.DelMarGlobalLeaderboardEntry
// Kind: ScriptStruct; super: none
struct FDelMarGlobalLeaderboardEntry
{
public:
    FString PlayerAccountId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlayerName; // 0x0010 (Size: 0x10, Type: StrProperty)
    double RunDuration; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::int64_t Rank; // 0x0028 (Size: 0x8, Type: Int64Property)
    double Percentile; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsLocalPlayer; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarGlobalLeaderboardEntry, PlayerAccountId) == 0, "Offset mismatch for FDelMarGlobalLeaderboardEntry::PlayerAccountId");
static_assert(offsetof(FDelMarGlobalLeaderboardEntry, PlayerName) == 16, "Offset mismatch for FDelMarGlobalLeaderboardEntry::PlayerName");
static_assert(offsetof(FDelMarGlobalLeaderboardEntry, RunDuration) == 32, "Offset mismatch for FDelMarGlobalLeaderboardEntry::RunDuration");
static_assert(offsetof(FDelMarGlobalLeaderboardEntry, Rank) == 40, "Offset mismatch for FDelMarGlobalLeaderboardEntry::Rank");
static_assert(offsetof(FDelMarGlobalLeaderboardEntry, Percentile) == 48, "Offset mismatch for FDelMarGlobalLeaderboardEntry::Percentile");
static_assert(offsetof(FDelMarGlobalLeaderboardEntry, bIsLocalPlayer) == 56, "Offset mismatch for FDelMarGlobalLeaderboardEntry::bIsLocalPlayer");

// /Script/DelMarCore.DelMarHintText
// Kind: ScriptStruct; super: none
struct FDelMarHintText
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    FText TouchText; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FDelMarHintText, KBMText) == 0, "Offset mismatch for FDelMarHintText::KBMText");
static_assert(offsetof(FDelMarHintText, GamepadText) == 16, "Offset mismatch for FDelMarHintText::GamepadText");
static_assert(offsetof(FDelMarHintText, TouchText) == 32, "Offset mismatch for FDelMarHintText::TouchText");

// /Script/DelMarCore.DelMarInputAction
// Kind: ScriptStruct; super: none
struct FDelMarInputAction
{
public:
    void* Action; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisabledTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarInputAction, Action) == 0, "Offset mismatch for FDelMarInputAction::Action");
static_assert(offsetof(FDelMarInputAction, DisabledTag) == 8, "Offset mismatch for FDelMarInputAction::DisabledTag");

// /Script/DelMarCore.DelMarInputBufferData
// Kind: ScriptStruct; super: none
struct FDelMarInputBufferData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarInputMappingContextData
// Kind: ScriptStruct; super: none
struct FDelMarInputMappingContextData
{
public:
    std::int32_t Priority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MappingContext; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarInputMappingContextData, Priority) == 0, "Offset mismatch for FDelMarInputMappingContextData::Priority");
static_assert(offsetof(FDelMarInputMappingContextData, MappingContext) == 8, "Offset mismatch for FDelMarInputMappingContextData::MappingContext");

// /Script/DelMarCore.DelMarKickflipSimulationResult
// Kind: ScriptStruct; super: none
struct FDelMarKickflipSimulationResult
{
public:
    std::uint8_t Hit[0x100]; // 0x0000 (Size: 0x100, Type: StructProperty)
    std::uint8_t VehicleLandingRotation[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t bValidLandingRotation; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriveableSurfaceHit; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0122
    float SuctionVelocityUsed; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float ElapsedTime; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float DistanceTravelled; // 0x012C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarKickflipSimulationResult, Hit) == 0, "Offset mismatch for FDelMarKickflipSimulationResult::Hit");
static_assert(offsetof(FDelMarKickflipSimulationResult, VehicleLandingRotation) == 256, "Offset mismatch for FDelMarKickflipSimulationResult::VehicleLandingRotation");
static_assert(offsetof(FDelMarKickflipSimulationResult, bValidLandingRotation) == 288, "Offset mismatch for FDelMarKickflipSimulationResult::bValidLandingRotation");
static_assert(offsetof(FDelMarKickflipSimulationResult, bDriveableSurfaceHit) == 289, "Offset mismatch for FDelMarKickflipSimulationResult::bDriveableSurfaceHit");
static_assert(offsetof(FDelMarKickflipSimulationResult, SuctionVelocityUsed) == 292, "Offset mismatch for FDelMarKickflipSimulationResult::SuctionVelocityUsed");
static_assert(offsetof(FDelMarKickflipSimulationResult, ElapsedTime) == 296, "Offset mismatch for FDelMarKickflipSimulationResult::ElapsedTime");
static_assert(offsetof(FDelMarKickflipSimulationResult, DistanceTravelled) == 300, "Offset mismatch for FDelMarKickflipSimulationResult::DistanceTravelled");

// /Script/DelMarCore.DelMarLapRecord
// Kind: ScriptStruct; super: none
struct FDelMarLapRecord
{
public:
    double LapDuration; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> SectionTimes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarLapRecord, LapDuration) == 0, "Offset mismatch for FDelMarLapRecord::LapDuration");
static_assert(offsetof(FDelMarLapRecord, SectionTimes) == 8, "Offset mismatch for FDelMarLapRecord::SectionTimes");

// /Script/DelMarCore.DelMarLayeredInputMappingContextData
// Kind: ScriptStruct; super: none
struct FDelMarLayeredInputMappingContextData
{
public:
    std::int32_t Priority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> MappingContextArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarLayeredInputMappingContextData, Priority) == 0, "Offset mismatch for FDelMarLayeredInputMappingContextData::Priority");
static_assert(offsetof(FDelMarLayeredInputMappingContextData, MappingContextArray) == 8, "Offset mismatch for FDelMarLayeredInputMappingContextData::MappingContextArray");

// /Script/DelMarCore.DelMarLeaderboardConfig
// Kind: ScriptStruct; super: none
struct FDelMarLeaderboardConfig
{
public:
    FString EventId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString WindowId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDelMarLeaderboardConfig, EventId) == 0, "Offset mismatch for FDelMarLeaderboardConfig::EventId");
static_assert(offsetof(FDelMarLeaderboardConfig, WindowId) == 16, "Offset mismatch for FDelMarLeaderboardConfig::WindowId");

// /Script/DelMarCore.DelMarLeaderboardSettings
// Kind: ScriptStruct; super: none
struct FDelMarLeaderboardSettings
{
public:
    FString EventId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString WindowId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDelMarLeaderboardSettings, EventId) == 0, "Offset mismatch for FDelMarLeaderboardSettings::EventId");
static_assert(offsetof(FDelMarLeaderboardSettings, WindowId) == 16, "Offset mismatch for FDelMarLeaderboardSettings::WindowId");

// /Script/DelMarCore.DelMarLoadout
// Kind: ScriptStruct; super: none
struct FDelMarLoadout
{
public:
    TMap<void*, void*> Items; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDelMarLoadout, Items) == 0, "Offset mismatch for FDelMarLoadout::Items");

// /Script/DelMarCore.DelMarMapSet
// Kind: ScriptStruct; super: none
struct FDelMarMapSet
{
public:
    std::uint8_t bShouldConsiderValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayLevelsRandomly; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldRepeat; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    TArray<void*> Levels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarMapSet, bShouldConsiderValid) == 0, "Offset mismatch for FDelMarMapSet::bShouldConsiderValid");
static_assert(offsetof(FDelMarMapSet, bPlayLevelsRandomly) == 1, "Offset mismatch for FDelMarMapSet::bPlayLevelsRandomly");
static_assert(offsetof(FDelMarMapSet, bShouldRepeat) == 2, "Offset mismatch for FDelMarMapSet::bShouldRepeat");
static_assert(offsetof(FDelMarMapSet, Levels) == 8, "Offset mismatch for FDelMarMapSet::Levels");

// /Script/DelMarCore.DelMarMapStatus
// Kind: ScriptStruct; super: none
struct FDelMarMapStatus
{
public:
    TWeakObjectPtr<void> MapAsset; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bHasBeenPlayed; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarMapStatus, MapAsset) == 0, "Offset mismatch for FDelMarMapStatus::MapAsset");
static_assert(offsetof(FDelMarMapStatus, bHasBeenPlayed) == 8, "Offset mismatch for FDelMarMapStatus::bHasBeenPlayed");

// /Script/DelMarCore.DelMarMatchmakingConfig
// Kind: ScriptStruct; super: none
struct FDelMarMatchmakingConfig
{
public:
    float MaxLoadWaitSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LoadWaitBufferSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CODGracePeriodSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MatchStartDelaySeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMatchInProgressBackFillEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float MinSecondsRemainingForBackfill; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TimeIntervalBetweenAnalyticsSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarMatchmakingConfig, MaxLoadWaitSeconds) == 0, "Offset mismatch for FDelMarMatchmakingConfig::MaxLoadWaitSeconds");
static_assert(offsetof(FDelMarMatchmakingConfig, LoadWaitBufferSeconds) == 4, "Offset mismatch for FDelMarMatchmakingConfig::LoadWaitBufferSeconds");
static_assert(offsetof(FDelMarMatchmakingConfig, CODGracePeriodSeconds) == 8, "Offset mismatch for FDelMarMatchmakingConfig::CODGracePeriodSeconds");
static_assert(offsetof(FDelMarMatchmakingConfig, MatchStartDelaySeconds) == 12, "Offset mismatch for FDelMarMatchmakingConfig::MatchStartDelaySeconds");
static_assert(offsetof(FDelMarMatchmakingConfig, bMatchInProgressBackFillEnabled) == 16, "Offset mismatch for FDelMarMatchmakingConfig::bMatchInProgressBackFillEnabled");
static_assert(offsetof(FDelMarMatchmakingConfig, MinSecondsRemainingForBackfill) == 20, "Offset mismatch for FDelMarMatchmakingConfig::MinSecondsRemainingForBackfill");
static_assert(offsetof(FDelMarMatchmakingConfig, TimeIntervalBetweenAnalyticsSeconds) == 24, "Offset mismatch for FDelMarMatchmakingConfig::TimeIntervalBetweenAnalyticsSeconds");

// /Script/DelMarCore.DelMarMusicTrack
// Kind: ScriptStruct; super: none
struct FDelMarMusicTrack
{
public:
    void* StartLineIntro; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MainTrack; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MainTrack_LowSpec; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float Bpm; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarMusicTrack, StartLineIntro) == 0, "Offset mismatch for FDelMarMusicTrack::StartLineIntro");
static_assert(offsetof(FDelMarMusicTrack, MainTrack) == 8, "Offset mismatch for FDelMarMusicTrack::MainTrack");
static_assert(offsetof(FDelMarMusicTrack, MainTrack_LowSpec) == 16, "Offset mismatch for FDelMarMusicTrack::MainTrack_LowSpec");
static_assert(offsetof(FDelMarMusicTrack, Bpm) == 24, "Offset mismatch for FDelMarMusicTrack::Bpm");

// /Script/DelMarCore.DelMarNetworkInputPacket
// Kind: ScriptStruct; super: none
struct FDelMarNetworkInputPacket
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarObjectiveFilterBase
// Kind: ScriptStruct; super: ObjectiveFilter
struct FDelMarObjectiveFilterBase
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilterBase, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilterBase::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilterBase, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilterBase::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilterBase, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilterBase::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilterBase, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilterBase::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilterBase, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilterBase::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_BeatPlayers
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_BeatPlayers
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_BeatPlayers, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_BeatPlayers::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_BeatPlayers, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_BeatPlayers::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_BeatPlayers, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_BeatPlayers::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_BeatPlayers, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_BeatPlayers::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_BeatPlayers, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_BeatPlayers::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_BonusTurboActivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_BonusTurboActivated
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_BonusTurboActivated, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_BonusTurboActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_BonusTurboActivated, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_BonusTurboActivated::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_BonusTurboActivated, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_BonusTurboActivated::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_BonusTurboActivated, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_BonusTurboActivated::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_BonusTurboActivated, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_BonusTurboActivated::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_BoostPadBonusSpeedEnded
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_BoostPadBonusSpeedEnded
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_BoostPadBonusSpeedEnded, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_BoostPadBonusSpeedEnded::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadBonusSpeedEnded, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_BoostPadBonusSpeedEnded::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadBonusSpeedEnded, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_BoostPadBonusSpeedEnded::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadBonusSpeedEnded, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_BoostPadBonusSpeedEnded::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadBonusSpeedEnded, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_BoostPadBonusSpeedEnded::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_BoostPadHit
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_BoostPadHit
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_BoostPadHit, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_BoostPadHit::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadHit, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_BoostPadHit::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadHit, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_BoostPadHit::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadHit, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_BoostPadHit::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_BoostPadHit, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_BoostPadHit::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_Demolished
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_Demolished
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_Demolished, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_Demolished::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_Demolished, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_Demolished::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_Demolished, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_Demolished::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_Demolished, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_Demolished::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_Demolished, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_Demolished::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_DistanceTraveled
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_DistanceTraveled
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_DistanceTraveled, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_DistanceTraveled::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_DistanceTraveled, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_DistanceTraveled::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_DistanceTraveled, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_DistanceTraveled::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_DistanceTraveled, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_DistanceTraveled::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_DistanceTraveled, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_DistanceTraveled::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_DraftActivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_DraftActivated
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_DraftActivated, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_DraftActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_DraftActivated, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_DraftActivated::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_DraftActivated, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_DraftActivated::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_DraftActivated, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_DraftActivated::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_DraftActivated, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_DraftActivated::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostActivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_DriftBoostActivated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredDriftBoostPercent[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_DriftBoostActivated, RequiredDriftBoostPercent) == 400, "Offset mismatch for FDelMarObjectiveFilter_DriftBoostActivated::RequiredDriftBoostPercent");

// /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostDeactivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_DriftBoostDeactivated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredTotalDistance[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_DriftBoostDeactivated, RequiredTotalDistance) == 400, "Offset mismatch for FDelMarObjectiveFilter_DriftBoostDeactivated::RequiredTotalDistance");

// /Script/DelMarCore.DelMarObjectiveFilter_DriftComplete
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_DriftComplete
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredDriftDuration[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_DriftComplete, RequiredDriftDuration) == 400, "Offset mismatch for FDelMarObjectiveFilter_DriftComplete::RequiredDriftDuration");

// /Script/DelMarCore.DelMarObjectiveFilter_HighestSpeedUpdated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_HighestSpeedUpdated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredHighestSpeed[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_HighestSpeedUpdated, RequiredHighestSpeed) == 400, "Offset mismatch for FDelMarObjectiveFilter_HighestSpeedUpdated::RequiredHighestSpeed");

// /Script/DelMarCore.DelMarObjectiveFilter_InitialTurboActivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_InitialTurboActivated
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_InitialTurboActivated, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_InitialTurboActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_InitialTurboActivated, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_InitialTurboActivated::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_InitialTurboActivated, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_InitialTurboActivated::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_InitialTurboActivated, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_InitialTurboActivated::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_InitialTurboActivated, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_InitialTurboActivated::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_JellyHit
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_JellyHit
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_JellyHit, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_JellyHit::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_JellyHit, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_JellyHit::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_JellyHit, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_JellyHit::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_JellyHit, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_JellyHit::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_JellyHit, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_JellyHit::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_Kickflipped
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_Kickflipped
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredKickflipDirection; // 0x0190 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_Kickflipped, RequiredKickflipDirection) == 400, "Offset mismatch for FDelMarObjectiveFilter_Kickflipped::RequiredKickflipDirection");

// /Script/DelMarCore.DelMarObjectiveFilter_LapComplete
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_LapComplete
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredLapCompleteTime[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredLapCount[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredLapPlacement[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_LapComplete, RequiredLapCompleteTime) == 400, "Offset mismatch for FDelMarObjectiveFilter_LapComplete::RequiredLapCompleteTime");
static_assert(offsetof(FDelMarObjectiveFilter_LapComplete, RequiredLapCount) == 432, "Offset mismatch for FDelMarObjectiveFilter_LapComplete::RequiredLapCount");
static_assert(offsetof(FDelMarObjectiveFilter_LapComplete, RequiredLapPlacement) == 448, "Offset mismatch for FDelMarObjectiveFilter_LapComplete::RequiredLapPlacement");

// /Script/DelMarCore.DelMarObjectiveFilter_LapStarted
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_LapStarted
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_LapStarted, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_LapStarted::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_LapStarted, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_LapStarted::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_LapStarted, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_LapStarted::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_LapStarted, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_LapStarted::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_LapStarted, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_LapStarted::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_PlacementUpdated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_PlacementUpdated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredCurrentPosition[0x10]; // 0x0190 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredPositionChangeInfo; // 0x01A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_PlacementUpdated, RequiredCurrentPosition) == 400, "Offset mismatch for FDelMarObjectiveFilter_PlacementUpdated::RequiredCurrentPosition");
static_assert(offsetof(FDelMarObjectiveFilter_PlacementUpdated, RequiredPositionChangeInfo) == 416, "Offset mismatch for FDelMarObjectiveFilter_PlacementUpdated::RequiredPositionChangeInfo");

// /Script/DelMarCore.DelMarObjectiveFilter_PlayedDelMarExperience
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_PlayedDelMarExperience
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_PlayedDelMarExperience, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_PlayedDelMarExperience::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_PlayedDelMarExperience, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_PlayedDelMarExperience::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_PlayedDelMarExperience, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_PlayedDelMarExperience::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_PlayedDelMarExperience, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_PlayedDelMarExperience::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_PlayedDelMarExperience, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_PlayedDelMarExperience::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_RaceFinished
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_RaceFinished
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredFinishTime[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredFinalPlacement[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredPlayerCompetitiveRank[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredJellyHazardInfo; // 0x01D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01D1
    std::uint8_t RequiredDemolishedInfo; // 0x01D4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_RaceFinished, RequiredFinishTime) == 400, "Offset mismatch for FDelMarObjectiveFilter_RaceFinished::RequiredFinishTime");
static_assert(offsetof(FDelMarObjectiveFilter_RaceFinished, RequiredFinalPlacement) == 432, "Offset mismatch for FDelMarObjectiveFilter_RaceFinished::RequiredFinalPlacement");
static_assert(offsetof(FDelMarObjectiveFilter_RaceFinished, RequiredPlayerCompetitiveRank) == 448, "Offset mismatch for FDelMarObjectiveFilter_RaceFinished::RequiredPlayerCompetitiveRank");
static_assert(offsetof(FDelMarObjectiveFilter_RaceFinished, RequiredJellyHazardInfo) == 464, "Offset mismatch for FDelMarObjectiveFilter_RaceFinished::RequiredJellyHazardInfo");
static_assert(offsetof(FDelMarObjectiveFilter_RaceFinished, RequiredDemolishedInfo) == 468, "Offset mismatch for FDelMarObjectiveFilter_RaceFinished::RequiredDemolishedInfo");

// /Script/DelMarCore.DelMarObjectiveFilter_RankAchieved
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_RankAchieved
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredRank[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_RankAchieved, RequiredRank) == 400, "Offset mismatch for FDelMarObjectiveFilter_RankAchieved::RequiredRank");

// /Script/DelMarCore.DelMarObjectiveFilter_RunComplete
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_RunComplete
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredFinishTime[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredFinalPlacement[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredJellyHazardInfo; // 0x01C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01C1
    std::uint8_t RequiredDemolishedInfo; // 0x01C4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_RunComplete, RequiredFinishTime) == 400, "Offset mismatch for FDelMarObjectiveFilter_RunComplete::RequiredFinishTime");
static_assert(offsetof(FDelMarObjectiveFilter_RunComplete, RequiredFinalPlacement) == 432, "Offset mismatch for FDelMarObjectiveFilter_RunComplete::RequiredFinalPlacement");
static_assert(offsetof(FDelMarObjectiveFilter_RunComplete, RequiredJellyHazardInfo) == 448, "Offset mismatch for FDelMarObjectiveFilter_RunComplete::RequiredJellyHazardInfo");
static_assert(offsetof(FDelMarObjectiveFilter_RunComplete, RequiredDemolishedInfo) == 452, "Offset mismatch for FDelMarObjectiveFilter_RunComplete::RequiredDemolishedInfo");

// /Script/DelMarCore.DelMarObjectiveFilter_StartlineBoostActivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_StartlineBoostActivated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredStartlineBoostPercent[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostActivated, RequiredStartlineBoostPercent) == 400, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostActivated::RequiredStartlineBoostPercent");

// /Script/DelMarCore.DelMarObjectiveFilter_StartlineBoostPercentEarned
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_StartlineBoostPercentEarned
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostPercentEarned, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostPercentEarned::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostPercentEarned, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostPercentEarned::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostPercentEarned, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostPercentEarned::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostPercentEarned, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostPercentEarned::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_StartlineBoostPercentEarned, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_StartlineBoostPercentEarned::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustDeactivated
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_UnderthrustDeactivated
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredPercentUsed[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustDeactivated, RequiredPercentUsed) == 400, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustDeactivated::RequiredPercentUsed");

// /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustPercentUsed
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_UnderthrustPercentUsed
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustPercentUsed, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustPercentUsed::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustPercentUsed, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustPercentUsed::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustPercentUsed, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustPercentUsed::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustPercentUsed, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustPercentUsed::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_UnderthrustPercentUsed, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_UnderthrustPercentUsed::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_VehicleJumped
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_VehicleJumped
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t LevelDescriptionId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameModeId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t VehicleTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredPlaylistTypeInfo; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TArray<void*> RequiredCosmetics; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_VehicleJumped, LevelDescriptionId) == 160, "Offset mismatch for FDelMarObjectiveFilter_VehicleJumped::LevelDescriptionId");
static_assert(offsetof(FDelMarObjectiveFilter_VehicleJumped, GameModeId) == 232, "Offset mismatch for FDelMarObjectiveFilter_VehicleJumped::GameModeId");
static_assert(offsetof(FDelMarObjectiveFilter_VehicleJumped, VehicleTags) == 304, "Offset mismatch for FDelMarObjectiveFilter_VehicleJumped::VehicleTags");
static_assert(offsetof(FDelMarObjectiveFilter_VehicleJumped, RequiredPlaylistTypeInfo) == 376, "Offset mismatch for FDelMarObjectiveFilter_VehicleJumped::RequiredPlaylistTypeInfo");
static_assert(offsetof(FDelMarObjectiveFilter_VehicleJumped, RequiredCosmetics) == 384, "Offset mismatch for FDelMarObjectiveFilter_VehicleJumped::RequiredCosmetics");

// /Script/DelMarCore.DelMarObjectiveFilter_VehicleLanded
// Kind: ScriptStruct; super: DelMarObjectiveFilterBase
struct FDelMarObjectiveFilter_VehicleLanded
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequiredTimeInAir[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarObjectiveFilter_VehicleLanded, RequiredTimeInAir) == 400, "Offset mismatch for FDelMarObjectiveFilter_VehicleLanded::RequiredTimeInAir");

// /Script/DelMarCore.DelMarPositionValue
// Kind: ScriptStruct; super: none
struct FDelMarPositionValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarProxyMeshMaterialInfo
// Kind: ScriptStruct; super: none
struct FDelMarProxyMeshMaterialInfo
{
public:
    TArray<void*> MaterialArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarProxyMeshMaterialInfo, MaterialArray) == 0, "Offset mismatch for FDelMarProxyMeshMaterialInfo::MaterialArray");

// /Script/DelMarCore.DelMarRaceCVar
// Kind: ScriptStruct; super: none
struct FDelMarRaceCVar
{
public:
    FString VariableName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDelMarRaceCVar, VariableName) == 0, "Offset mismatch for FDelMarRaceCVar::VariableName");
static_assert(offsetof(FDelMarRaceCVar, Value) == 16, "Offset mismatch for FDelMarRaceCVar::Value");

// /Script/DelMarCore.DelMarRandomRange
// Kind: ScriptStruct; super: none
struct FDelMarRandomRange
{
public:
    float MinValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarRandomRange, MinValue) == 0, "Offset mismatch for FDelMarRandomRange::MinValue");
static_assert(offsetof(FDelMarRandomRange, MaxValue) == 4, "Offset mismatch for FDelMarRandomRange::MaxValue");

// /Script/DelMarCore.DelMarRankedInfo
// Kind: ScriptStruct; super: none
struct FDelMarRankedInfo
{
public:
    FString RankType; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t CurrentRank; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarRankedInfo, RankType) == 0, "Offset mismatch for FDelMarRankedInfo::RankType");
static_assert(offsetof(FDelMarRankedInfo, CurrentRank) == 16, "Offset mismatch for FDelMarRankedInfo::CurrentRank");

// /Script/DelMarCore.DelMarReplicatedLoadout
// Kind: ScriptStruct; super: none
struct FDelMarReplicatedLoadout
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarReplicatedLoadout, Items) == 0, "Offset mismatch for FDelMarReplicatedLoadout::Items");

// /Script/DelMarCore.DelMarRespawnConfig
// Kind: ScriptStruct; super: none
struct FDelMarRespawnConfig
{
public:
    std::uint8_t SpawnMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseTracesToDetermineRespawn; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRespawnInvulnerabilityEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float RespawnInvulnerabilitySeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRespawnCollisionProtectionEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float RespawnCollisionProtectionSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarRespawnConfig, SpawnMode) == 0, "Offset mismatch for FDelMarRespawnConfig::SpawnMode");
static_assert(offsetof(FDelMarRespawnConfig, bUseTracesToDetermineRespawn) == 1, "Offset mismatch for FDelMarRespawnConfig::bUseTracesToDetermineRespawn");
static_assert(offsetof(FDelMarRespawnConfig, bRespawnInvulnerabilityEnabled) == 2, "Offset mismatch for FDelMarRespawnConfig::bRespawnInvulnerabilityEnabled");
static_assert(offsetof(FDelMarRespawnConfig, RespawnInvulnerabilitySeconds) == 4, "Offset mismatch for FDelMarRespawnConfig::RespawnInvulnerabilitySeconds");
static_assert(offsetof(FDelMarRespawnConfig, bRespawnCollisionProtectionEnabled) == 8, "Offset mismatch for FDelMarRespawnConfig::bRespawnCollisionProtectionEnabled");
static_assert(offsetof(FDelMarRespawnConfig, RespawnCollisionProtectionSeconds) == 12, "Offset mismatch for FDelMarRespawnConfig::RespawnCollisionProtectionSeconds");

// /Script/DelMarCore.DelMarRubberbandingConfig
// Kind: ScriptStruct; super: none
struct FDelMarRubberbandingConfig
{
public:
    std::uint8_t bRubberbandingEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinPackDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxPackDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PackDistanceOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromPack; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceFromPack; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPlayersForPackDistance; // 0x0018 (Size: 0x4, Type: IntProperty)
    float MaxPackDistanceGainedPerSecond; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxPackDistanceLostPerSecond; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeedScalar; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarRubberbandingConfig, bRubberbandingEnabled) == 0, "Offset mismatch for FDelMarRubberbandingConfig::bRubberbandingEnabled");
static_assert(offsetof(FDelMarRubberbandingConfig, MinPackDistance) == 4, "Offset mismatch for FDelMarRubberbandingConfig::MinPackDistance");
static_assert(offsetof(FDelMarRubberbandingConfig, MaxPackDistance) == 8, "Offset mismatch for FDelMarRubberbandingConfig::MaxPackDistance");
static_assert(offsetof(FDelMarRubberbandingConfig, PackDistanceOffset) == 12, "Offset mismatch for FDelMarRubberbandingConfig::PackDistanceOffset");
static_assert(offsetof(FDelMarRubberbandingConfig, MinDistanceFromPack) == 16, "Offset mismatch for FDelMarRubberbandingConfig::MinDistanceFromPack");
static_assert(offsetof(FDelMarRubberbandingConfig, MaxDistanceFromPack) == 20, "Offset mismatch for FDelMarRubberbandingConfig::MaxDistanceFromPack");
static_assert(offsetof(FDelMarRubberbandingConfig, NumPlayersForPackDistance) == 24, "Offset mismatch for FDelMarRubberbandingConfig::NumPlayersForPackDistance");
static_assert(offsetof(FDelMarRubberbandingConfig, MaxPackDistanceGainedPerSecond) == 28, "Offset mismatch for FDelMarRubberbandingConfig::MaxPackDistanceGainedPerSecond");
static_assert(offsetof(FDelMarRubberbandingConfig, MaxPackDistanceLostPerSecond) == 32, "Offset mismatch for FDelMarRubberbandingConfig::MaxPackDistanceLostPerSecond");
static_assert(offsetof(FDelMarRubberbandingConfig, MaxBonusSpeedScalar) == 36, "Offset mismatch for FDelMarRubberbandingConfig::MaxBonusSpeedScalar");

// /Script/DelMarCore.DelMarRubberbandingMMRConfig
// Kind: ScriptStruct; super: none
struct FDelMarRubberbandingMMRConfig
{
public:
    float MinMMR; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxMMR; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RubberbandingConfig[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarRubberbandingMMRConfig, MinMMR) == 0, "Offset mismatch for FDelMarRubberbandingMMRConfig::MinMMR");
static_assert(offsetof(FDelMarRubberbandingMMRConfig, MaxMMR) == 4, "Offset mismatch for FDelMarRubberbandingMMRConfig::MaxMMR");
static_assert(offsetof(FDelMarRubberbandingMMRConfig, RubberbandingConfig) == 8, "Offset mismatch for FDelMarRubberbandingMMRConfig::RubberbandingConfig");

// /Script/DelMarCore.DelMarRunRecord
// Kind: ScriptStruct; super: none
struct FDelMarRunRecord
{
public:
    double RunDuration; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double RunStartTimestamp; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> LapRecords; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarRunRecord, RunDuration) == 0, "Offset mismatch for FDelMarRunRecord::RunDuration");
static_assert(offsetof(FDelMarRunRecord, RunStartTimestamp) == 8, "Offset mismatch for FDelMarRunRecord::RunStartTimestamp");
static_assert(offsetof(FDelMarRunRecord, LapRecords) == 16, "Offset mismatch for FDelMarRunRecord::LapRecords");

// /Script/DelMarCore.DelMarScaledCurve
// Kind: ScriptStruct; super: none
struct FDelMarScaledCurve
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Curve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarScaledCurve, Scale) == 0, "Offset mismatch for FDelMarScaledCurve::Scale");
static_assert(offsetof(FDelMarScaledCurve, Curve) == 8, "Offset mismatch for FDelMarScaledCurve::Curve");

// /Script/DelMarCore.DelMarStartlineBoostData
// Kind: ScriptStruct; super: none
struct FDelMarStartlineBoostData
{
public:
    std::uint8_t bFailed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ReactionSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RunStartTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float IntervalSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EarnedPotential; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarStartlineBoostData, bFailed) == 0, "Offset mismatch for FDelMarStartlineBoostData::bFailed");
static_assert(offsetof(FDelMarStartlineBoostData, ReactionSeconds) == 4, "Offset mismatch for FDelMarStartlineBoostData::ReactionSeconds");
static_assert(offsetof(FDelMarStartlineBoostData, RunStartTime) == 8, "Offset mismatch for FDelMarStartlineBoostData::RunStartTime");
static_assert(offsetof(FDelMarStartlineBoostData, IntervalSeconds) == 12, "Offset mismatch for FDelMarStartlineBoostData::IntervalSeconds");
static_assert(offsetof(FDelMarStartlineBoostData, EarnedPotential) == 16, "Offset mismatch for FDelMarStartlineBoostData::EarnedPotential");

// /Script/DelMarCore.DelMarStartlineConfig
// Kind: ScriptStruct; super: none
struct FDelMarStartlineConfig
{
public:
    std::uint8_t bEnableDynamicStartline; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InitialCountdownDelayTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RequestCountdownDelayTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DefaultIntervalSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    TArray<void*> IntervalRanges; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CountdownIntervalNum; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarStartlineConfig, bEnableDynamicStartline) == 0, "Offset mismatch for FDelMarStartlineConfig::bEnableDynamicStartline");
static_assert(offsetof(FDelMarStartlineConfig, InitialCountdownDelayTime) == 4, "Offset mismatch for FDelMarStartlineConfig::InitialCountdownDelayTime");
static_assert(offsetof(FDelMarStartlineConfig, RequestCountdownDelayTime) == 8, "Offset mismatch for FDelMarStartlineConfig::RequestCountdownDelayTime");
static_assert(offsetof(FDelMarStartlineConfig, DefaultIntervalSeconds) == 12, "Offset mismatch for FDelMarStartlineConfig::DefaultIntervalSeconds");
static_assert(offsetof(FDelMarStartlineConfig, IntervalRanges) == 16, "Offset mismatch for FDelMarStartlineConfig::IntervalRanges");
static_assert(offsetof(FDelMarStartlineConfig, CountdownIntervalNum) == 32, "Offset mismatch for FDelMarStartlineConfig::CountdownIntervalNum");

// /Script/DelMarCore.DelMarStateMachineConfig
// Kind: ScriptStruct; super: none
struct FDelMarStateMachineConfig
{
public:
    TArray<void*> StateOverrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarStateMachineConfig, StateOverrides) == 0, "Offset mismatch for FDelMarStateMachineConfig::StateOverrides");

// /Script/DelMarCore.DelMarStateOverride
// Kind: ScriptStruct; super: none
struct FDelMarStateOverride
{
public:
    std::uint8_t StateTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> StateClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FDelMarStateOverride, StateTag) == 0, "Offset mismatch for FDelMarStateOverride::StateTag");
static_assert(offsetof(FDelMarStateOverride, StateClass) == 8, "Offset mismatch for FDelMarStateOverride::StateClass");

// /Script/DelMarCore.DelMarTerrainData
// Kind: ScriptStruct; super: none
struct FDelMarTerrainData
{
public:
    float MaxForwardSpeedPercentage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SteerMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SlipMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetSpeedPenalty; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarTerrainData, MaxForwardSpeedPercentage) == 0, "Offset mismatch for FDelMarTerrainData::MaxForwardSpeedPercentage");
static_assert(offsetof(FDelMarTerrainData, AccelerationMultiplier) == 4, "Offset mismatch for FDelMarTerrainData::AccelerationMultiplier");
static_assert(offsetof(FDelMarTerrainData, DecelerationMultiplier) == 8, "Offset mismatch for FDelMarTerrainData::DecelerationMultiplier");
static_assert(offsetof(FDelMarTerrainData, SteerMultiplier) == 12, "Offset mismatch for FDelMarTerrainData::SteerMultiplier");
static_assert(offsetof(FDelMarTerrainData, SlipMultiplier) == 16, "Offset mismatch for FDelMarTerrainData::SlipMultiplier");
static_assert(offsetof(FDelMarTerrainData, TargetSpeedPenalty) == 20, "Offset mismatch for FDelMarTerrainData::TargetSpeedPenalty");

// /Script/DelMarCore.DelMarThrottledValue
// Kind: ScriptStruct; super: none
struct FDelMarThrottledValue
{
public:
    float RiseRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FallRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarThrottledValue, RiseRate) == 0, "Offset mismatch for FDelMarThrottledValue::RiseRate");
static_assert(offsetof(FDelMarThrottledValue, FallRate) == 4, "Offset mismatch for FDelMarThrottledValue::FallRate");

// /Script/DelMarCore.DelMarTimeDelayedState
// Kind: ScriptStruct; super: none
struct FDelMarTimeDelayedState
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarTimeDelayedState, Name) == 0, "Offset mismatch for FDelMarTimeDelayedState::Name");
static_assert(offsetof(FDelMarTimeDelayedState, duration) == 4, "Offset mismatch for FDelMarTimeDelayedState::duration");

// /Script/DelMarCore.DelMarTurboBonusZone
// Kind: ScriptStruct; super: none
struct FDelMarTurboBonusZone
{
public:
    float ZoneStartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ZoneEndTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarTurboBonusZone, ZoneStartTime) == 0, "Offset mismatch for FDelMarTurboBonusZone::ZoneStartTime");
static_assert(offsetof(FDelMarTurboBonusZone, ZoneEndTime) == 4, "Offset mismatch for FDelMarTurboBonusZone::ZoneEndTime");

// /Script/DelMarCore.DelMarTutorialSection
// Kind: ScriptStruct; super: none
struct FDelMarTutorialSection
{
public:
    float FinishTargetTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* StartLine; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* FinishLine; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DisabledActors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputDisabledTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t VehicleAbilityConfig[0x14]; // 0x0048 (Size: 0x14, Type: StructProperty)
    float StartingTurboCharges; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Title[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t ControlsText[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t DialogTag[0x4]; // 0x0090 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSkipCountdown; // 0x0094 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarTutorialSection, FinishTargetTime) == 0, "Offset mismatch for FDelMarTutorialSection::FinishTargetTime");
static_assert(offsetof(FDelMarTutorialSection, StartLine) == 8, "Offset mismatch for FDelMarTutorialSection::StartLine");
static_assert(offsetof(FDelMarTutorialSection, FinishLine) == 16, "Offset mismatch for FDelMarTutorialSection::FinishLine");
static_assert(offsetof(FDelMarTutorialSection, DisabledActors) == 24, "Offset mismatch for FDelMarTutorialSection::DisabledActors");
static_assert(offsetof(FDelMarTutorialSection, InputDisabledTags) == 40, "Offset mismatch for FDelMarTutorialSection::InputDisabledTags");
static_assert(offsetof(FDelMarTutorialSection, VehicleAbilityConfig) == 72, "Offset mismatch for FDelMarTutorialSection::VehicleAbilityConfig");
static_assert(offsetof(FDelMarTutorialSection, StartingTurboCharges) == 92, "Offset mismatch for FDelMarTutorialSection::StartingTurboCharges");
static_assert(offsetof(FDelMarTutorialSection, Title) == 96, "Offset mismatch for FDelMarTutorialSection::Title");
static_assert(offsetof(FDelMarTutorialSection, ControlsText) == 112, "Offset mismatch for FDelMarTutorialSection::ControlsText");
static_assert(offsetof(FDelMarTutorialSection, DialogTag) == 144, "Offset mismatch for FDelMarTutorialSection::DialogTag");
static_assert(offsetof(FDelMarTutorialSection, bSkipCountdown) == 148, "Offset mismatch for FDelMarTutorialSection::bSkipCountdown");

// /Script/DelMarCore.DelMarVehicleAbilityConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleAbilityConfig
{
public:
    std::uint8_t bAirControlEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirFreestyleEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirThrottleEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAerialRotationEnabled; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoUprightEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraftingEnabled; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftEnabled; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftBoostEnabled; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInfiniteUnderthrustEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpEnabled; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipEnabled; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOversteerEnabled; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReattachmentEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartlineBoostEnabled; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStrafeEnabled; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboEnabled; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleAbilityConfig, bAirControlEnabled) == 0, "Offset mismatch for FDelMarVehicleAbilityConfig::bAirControlEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bAirFreestyleEnabled) == 1, "Offset mismatch for FDelMarVehicleAbilityConfig::bAirFreestyleEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bAirThrottleEnabled) == 2, "Offset mismatch for FDelMarVehicleAbilityConfig::bAirThrottleEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bAutoAerialRotationEnabled) == 3, "Offset mismatch for FDelMarVehicleAbilityConfig::bAutoAerialRotationEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bAutoUprightEnabled) == 4, "Offset mismatch for FDelMarVehicleAbilityConfig::bAutoUprightEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bDraftingEnabled) == 5, "Offset mismatch for FDelMarVehicleAbilityConfig::bDraftingEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bDriftEnabled) == 6, "Offset mismatch for FDelMarVehicleAbilityConfig::bDriftEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bDriftBoostEnabled) == 7, "Offset mismatch for FDelMarVehicleAbilityConfig::bDriftBoostEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bInfiniteUnderthrustEnabled) == 8, "Offset mismatch for FDelMarVehicleAbilityConfig::bInfiniteUnderthrustEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bJumpEnabled) == 9, "Offset mismatch for FDelMarVehicleAbilityConfig::bJumpEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bKickflipEnabled) == 10, "Offset mismatch for FDelMarVehicleAbilityConfig::bKickflipEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bOversteerEnabled) == 11, "Offset mismatch for FDelMarVehicleAbilityConfig::bOversteerEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bReattachmentEnabled) == 12, "Offset mismatch for FDelMarVehicleAbilityConfig::bReattachmentEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bStartlineBoostEnabled) == 13, "Offset mismatch for FDelMarVehicleAbilityConfig::bStartlineBoostEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bStrafeEnabled) == 14, "Offset mismatch for FDelMarVehicleAbilityConfig::bStrafeEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bTurboEnabled) == 15, "Offset mismatch for FDelMarVehicleAbilityConfig::bTurboEnabled");
static_assert(offsetof(FDelMarVehicleAbilityConfig, bUnderthrustEnabled) == 16, "Offset mismatch for FDelMarVehicleAbilityConfig::bUnderthrustEnabled");

// /Script/DelMarCore.DelMarVehicleAxleConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleAxleConfig
{
public:
    float TranslateX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TranslateY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslateZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RestDistanceZ; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Suspension[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleAxleConfig, TranslateX) == 0, "Offset mismatch for FDelMarVehicleAxleConfig::TranslateX");
static_assert(offsetof(FDelMarVehicleAxleConfig, TranslateY) == 4, "Offset mismatch for FDelMarVehicleAxleConfig::TranslateY");
static_assert(offsetof(FDelMarVehicleAxleConfig, TranslateZ) == 8, "Offset mismatch for FDelMarVehicleAxleConfig::TranslateZ");
static_assert(offsetof(FDelMarVehicleAxleConfig, WheelRadius) == 12, "Offset mismatch for FDelMarVehicleAxleConfig::WheelRadius");
static_assert(offsetof(FDelMarVehicleAxleConfig, RestDistanceZ) == 16, "Offset mismatch for FDelMarVehicleAxleConfig::RestDistanceZ");
static_assert(offsetof(FDelMarVehicleAxleConfig, Suspension) == 20, "Offset mismatch for FDelMarVehicleAxleConfig::Suspension");

// /Script/DelMarCore.DelMarVehicleCachedContact
// Kind: ScriptStruct; super: none
struct FDelMarVehicleCachedContact
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Impulse[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeltaVelocity[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bVehicleContact; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriveableContact; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0062
    TWeakObjectPtr<void> Component; // 0x0064 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarVehicleCachedContact, Location) == 0, "Offset mismatch for FDelMarVehicleCachedContact::Location");
static_assert(offsetof(FDelMarVehicleCachedContact, Normal) == 24, "Offset mismatch for FDelMarVehicleCachedContact::Normal");
static_assert(offsetof(FDelMarVehicleCachedContact, Impulse) == 48, "Offset mismatch for FDelMarVehicleCachedContact::Impulse");
static_assert(offsetof(FDelMarVehicleCachedContact, DeltaVelocity) == 72, "Offset mismatch for FDelMarVehicleCachedContact::DeltaVelocity");
static_assert(offsetof(FDelMarVehicleCachedContact, bVehicleContact) == 96, "Offset mismatch for FDelMarVehicleCachedContact::bVehicleContact");
static_assert(offsetof(FDelMarVehicleCachedContact, bDriveableContact) == 97, "Offset mismatch for FDelMarVehicleCachedContact::bDriveableContact");
static_assert(offsetof(FDelMarVehicleCachedContact, Component) == 100, "Offset mismatch for FDelMarVehicleCachedContact::Component");

// /Script/DelMarCore.DelMarVehicleCameraSettings
// Kind: ScriptStruct; super: none
struct FDelMarVehicleCameraSettings
{
public:
    float FOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SwivelSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TransitionSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleCameraSettings, FOV) == 0, "Offset mismatch for FDelMarVehicleCameraSettings::FOV");
static_assert(offsetof(FDelMarVehicleCameraSettings, Height) == 4, "Offset mismatch for FDelMarVehicleCameraSettings::Height");
static_assert(offsetof(FDelMarVehicleCameraSettings, Pitch) == 8, "Offset mismatch for FDelMarVehicleCameraSettings::Pitch");
static_assert(offsetof(FDelMarVehicleCameraSettings, Distance) == 12, "Offset mismatch for FDelMarVehicleCameraSettings::Distance");
static_assert(offsetof(FDelMarVehicleCameraSettings, Stiffness) == 16, "Offset mismatch for FDelMarVehicleCameraSettings::Stiffness");
static_assert(offsetof(FDelMarVehicleCameraSettings, SwivelSpeed) == 20, "Offset mismatch for FDelMarVehicleCameraSettings::SwivelSpeed");
static_assert(offsetof(FDelMarVehicleCameraSettings, TransitionSpeed) == 24, "Offset mismatch for FDelMarVehicleCameraSettings::TransitionSpeed");

// /Script/DelMarCore.DelMarVehicleCollisionConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleCollisionConfig
{
public:
    float MinWallAngleDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinTimeBetweenSpeedLossHits; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForTargetSpeedReduction; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t SpeedReductionPercentageCurve[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    std::uint8_t AerialSpeedReductionPercentageCurve[0x50]; // 0x0060 (Size: 0x50, Type: StructProperty)
    std::uint8_t WallTargetRedirectAngleDegreesCurve[0x50]; // 0x00B0 (Size: 0x50, Type: StructProperty)
    float WallTargetRedirectPercent; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float WallTargetRedirectDriftPercent; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float WallDriftHeadOnThresholdDegrees; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float WallHeadOnDriftRedirectAngleDegrees; // 0x010C (Size: 0x4, Type: FloatProperty)
    float WallTargetRedirectHeadOnDriftPercent; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MinGroundedDemolitionSpeed; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float MinAerialDemolitionSpeed; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float MaxGroundedDemolitionAngleDegrees; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MaxAerialDemolitionAngleDegrees; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float ParallelCollisionThresholdDegrees; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float HeadOnCollisionThresholdDegrees; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float BumperToBumperThresholdDegrees; // 0x012C (Size: 0x4, Type: FloatProperty)
    float ContactNormalToVehicleRightThresholdDegrees; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TrackTraceChannel; // 0x0134 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVehicleCollisionConfig, MinWallAngleDegrees) == 0, "Offset mismatch for FDelMarVehicleCollisionConfig::MinWallAngleDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MinTimeBetweenSpeedLossHits) == 4, "Offset mismatch for FDelMarVehicleCollisionConfig::MinTimeBetweenSpeedLossHits");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MinSpeedForTargetSpeedReduction) == 8, "Offset mismatch for FDelMarVehicleCollisionConfig::MinSpeedForTargetSpeedReduction");
static_assert(offsetof(FDelMarVehicleCollisionConfig, SpeedReductionPercentageCurve) == 16, "Offset mismatch for FDelMarVehicleCollisionConfig::SpeedReductionPercentageCurve");
static_assert(offsetof(FDelMarVehicleCollisionConfig, AerialSpeedReductionPercentageCurve) == 96, "Offset mismatch for FDelMarVehicleCollisionConfig::AerialSpeedReductionPercentageCurve");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallTargetRedirectAngleDegreesCurve) == 176, "Offset mismatch for FDelMarVehicleCollisionConfig::WallTargetRedirectAngleDegreesCurve");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallTargetRedirectPercent) == 256, "Offset mismatch for FDelMarVehicleCollisionConfig::WallTargetRedirectPercent");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallTargetRedirectDriftPercent) == 260, "Offset mismatch for FDelMarVehicleCollisionConfig::WallTargetRedirectDriftPercent");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallDriftHeadOnThresholdDegrees) == 264, "Offset mismatch for FDelMarVehicleCollisionConfig::WallDriftHeadOnThresholdDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallHeadOnDriftRedirectAngleDegrees) == 268, "Offset mismatch for FDelMarVehicleCollisionConfig::WallHeadOnDriftRedirectAngleDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, WallTargetRedirectHeadOnDriftPercent) == 272, "Offset mismatch for FDelMarVehicleCollisionConfig::WallTargetRedirectHeadOnDriftPercent");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MinGroundedDemolitionSpeed) == 276, "Offset mismatch for FDelMarVehicleCollisionConfig::MinGroundedDemolitionSpeed");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MinAerialDemolitionSpeed) == 280, "Offset mismatch for FDelMarVehicleCollisionConfig::MinAerialDemolitionSpeed");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MaxGroundedDemolitionAngleDegrees) == 284, "Offset mismatch for FDelMarVehicleCollisionConfig::MaxGroundedDemolitionAngleDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, MaxAerialDemolitionAngleDegrees) == 288, "Offset mismatch for FDelMarVehicleCollisionConfig::MaxAerialDemolitionAngleDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, ParallelCollisionThresholdDegrees) == 292, "Offset mismatch for FDelMarVehicleCollisionConfig::ParallelCollisionThresholdDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, HeadOnCollisionThresholdDegrees) == 296, "Offset mismatch for FDelMarVehicleCollisionConfig::HeadOnCollisionThresholdDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, BumperToBumperThresholdDegrees) == 300, "Offset mismatch for FDelMarVehicleCollisionConfig::BumperToBumperThresholdDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, ContactNormalToVehicleRightThresholdDegrees) == 304, "Offset mismatch for FDelMarVehicleCollisionConfig::ContactNormalToVehicleRightThresholdDegrees");
static_assert(offsetof(FDelMarVehicleCollisionConfig, TrackTraceChannel) == 308, "Offset mismatch for FDelMarVehicleCollisionConfig::TrackTraceChannel");

// /Script/DelMarCore.DelMarVehicleConfigOverride_AutoUpright
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_AutoUpright
{
public:
    float MaxWorldContactDegreeThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_AutoUpright, MaxWorldContactDegreeThreshold) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_AutoUpright::MaxWorldContactDegreeThreshold");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Collision
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Collision
{
public:
    std::uint8_t bCollisionDemosEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWallRicochetEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNonTrackVelocityRedirectEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float DemoSpeedScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Collision, bCollisionDemosEnabled) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Collision::bCollisionDemosEnabled");
static_assert(offsetof(FDelMarVehicleConfigOverride_Collision, bWallRicochetEnabled) == 1, "Offset mismatch for FDelMarVehicleConfigOverride_Collision::bWallRicochetEnabled");
static_assert(offsetof(FDelMarVehicleConfigOverride_Collision, bNonTrackVelocityRedirectEnabled) == 2, "Offset mismatch for FDelMarVehicleConfigOverride_Collision::bNonTrackVelocityRedirectEnabled");
static_assert(offsetof(FDelMarVehicleConfigOverride_Collision, DemoSpeedScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Collision::DemoSpeedScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Drift
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Drift
{
public:
    float SpeedCapScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationRateScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationRateScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Drift, SpeedCapScalar) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Drift::SpeedCapScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drift, AccelerationRateScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Drift::AccelerationRateScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drift, DecelerationRateScalar) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_Drift::DecelerationRateScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_DriftBoost
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_DriftBoost
{
public:
    float MaxBonusSpeedScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DurationScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PotentialRateScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_DriftBoost, MaxBonusSpeedScalar) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_DriftBoost::MaxBonusSpeedScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_DriftBoost, DurationScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_DriftBoost::DurationScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_DriftBoost, PotentialRateScalar) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_DriftBoost::PotentialRateScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Drive
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Drive
{
public:
    float MaxBaseForwardSpeedScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BrakeScalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxAerialSpeedScalar; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Drive, MaxBaseForwardSpeedScalar) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Drive::MaxBaseForwardSpeedScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drive, AccelerationScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Drive::AccelerationScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drive, DecelerationScalar) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_Drive::DecelerationScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drive, BrakeScalar) == 12, "Offset mismatch for FDelMarVehicleConfigOverride_Drive::BrakeScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Drive, MaxAerialSpeedScalar) == 16, "Offset mismatch for FDelMarVehicleConfigOverride_Drive::MaxAerialSpeedScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Gravity
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Gravity
{
public:
    float CounterGravityContactDegreeThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AerialGravityScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Gravity, CounterGravityContactDegreeThreshold) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Gravity::CounterGravityContactDegreeThreshold");
static_assert(offsetof(FDelMarVehicleConfigOverride_Gravity, AerialGravityScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Gravity::AerialGravityScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Jump
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Jump
{
public:
    float JumpImpulseScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Jump, JumpImpulseScalar) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Jump::JumpImpulseScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Kickflip
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Kickflip
{
public:
    std::uint8_t bResetChargesOnLanding; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t NumActivationCharges; // 0x0004 (Size: 0x4, Type: IntProperty)
    float CooldownSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Kickflip, bResetChargesOnLanding) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Kickflip::bResetChargesOnLanding");
static_assert(offsetof(FDelMarVehicleConfigOverride_Kickflip, NumActivationCharges) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Kickflip::NumActivationCharges");
static_assert(offsetof(FDelMarVehicleConfigOverride_Kickflip, CooldownSeconds) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_Kickflip::CooldownSeconds");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Oversteer
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Oversteer
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AccumulatedSteerThresholdScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Oversteer, bEnabled) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Oversteer::bEnabled");
static_assert(offsetof(FDelMarVehicleConfigOverride_Oversteer, AccumulatedSteerThresholdScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Oversteer::AccumulatedSteerThresholdScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverride_SelfDemolish
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_SelfDemolish
{
public:
    std::uint8_t bSelfDemolishEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RequiredDemolishActionDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_SelfDemolish, bSelfDemolishEnabled) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_SelfDemolish::bSelfDemolishEnabled");
static_assert(offsetof(FDelMarVehicleConfigOverride_SelfDemolish, RequiredDemolishActionDuration) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_SelfDemolish::RequiredDemolishActionDuration");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Terrain
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Terrain
{
public:
    std::uint8_t bDemolishInWater; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float WaterDestructionDelay; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Terrain, bDemolishInWater) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Terrain::bDemolishInWater");
static_assert(offsetof(FDelMarVehicleConfigOverride_Terrain, WaterDestructionDelay) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Terrain::WaterDestructionDelay");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Turbo
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Turbo
{
public:
    float StartingVehicleCharges; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ChargeRegenRateScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DriftBoostTurboGenerationScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TurboSpeedScalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxActiveTimeSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SuccessfulBonusZoneHitSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, StartingVehicleCharges) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::StartingVehicleCharges");
static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, ChargeRegenRateScalar) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::ChargeRegenRateScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, DriftBoostTurboGenerationScalar) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::DriftBoostTurboGenerationScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, TurboSpeedScalar) == 12, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::TurboSpeedScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, MaxActiveTimeSeconds) == 16, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::MaxActiveTimeSeconds");
static_assert(offsetof(FDelMarVehicleConfigOverride_Turbo, SuccessfulBonusZoneHitSeconds) == 20, "Offset mismatch for FDelMarVehicleConfigOverride_Turbo::SuccessfulBonusZoneHitSeconds");

// /Script/DelMarCore.DelMarVehicleConfigOverride_Underthrust
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverride_Underthrust
{
public:
    float StartingTankPercentage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ConsumptionRateMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReplenishTankOnLanding; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplenishTankOverTime; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    float TankReplenishDelaySeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TankReplenishRateMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AccelScalar; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxUpwardSpeedScalar; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, StartingTankPercentage) == 0, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::StartingTankPercentage");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, ConsumptionRateMultiplier) == 4, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::ConsumptionRateMultiplier");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, bReplenishTankOnLanding) == 8, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::bReplenishTankOnLanding");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, bReplenishTankOverTime) == 9, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::bReplenishTankOverTime");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, TankReplenishDelaySeconds) == 12, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::TankReplenishDelaySeconds");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, TankReplenishRateMultiplier) == 16, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::TankReplenishRateMultiplier");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, AccelScalar) == 20, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::AccelScalar");
static_assert(offsetof(FDelMarVehicleConfigOverride_Underthrust, MaxUpwardSpeedScalar) == 24, "Offset mismatch for FDelMarVehicleConfigOverride_Underthrust::MaxUpwardSpeedScalar");

// /Script/DelMarCore.DelMarVehicleConfigOverrides
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfigOverrides
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AutoUpright[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Collision[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Drift[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DriftBoost[0xC]; // 0x001C (Size: 0xC, Type: StructProperty)
    std::uint8_t Drive[0x14]; // 0x0028 (Size: 0x14, Type: StructProperty)
    std::uint8_t Gravity[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::uint8_t Jump[0x4]; // 0x0044 (Size: 0x4, Type: StructProperty)
    std::uint8_t Kickflip[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t Oversteer[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t Terrain[0x8]; // 0x005C (Size: 0x8, Type: StructProperty)
    std::uint8_t Turbo[0x18]; // 0x0064 (Size: 0x18, Type: StructProperty)
    std::uint8_t Underthrust[0x1C]; // 0x007C (Size: 0x1C, Type: StructProperty)
    std::uint8_t SelfDemolish[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleConfigOverrides, bValid) == 0, "Offset mismatch for FDelMarVehicleConfigOverrides::bValid");
static_assert(offsetof(FDelMarVehicleConfigOverrides, AutoUpright) == 4, "Offset mismatch for FDelMarVehicleConfigOverrides::AutoUpright");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Collision) == 8, "Offset mismatch for FDelMarVehicleConfigOverrides::Collision");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Drift) == 16, "Offset mismatch for FDelMarVehicleConfigOverrides::Drift");
static_assert(offsetof(FDelMarVehicleConfigOverrides, DriftBoost) == 28, "Offset mismatch for FDelMarVehicleConfigOverrides::DriftBoost");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Drive) == 40, "Offset mismatch for FDelMarVehicleConfigOverrides::Drive");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Gravity) == 60, "Offset mismatch for FDelMarVehicleConfigOverrides::Gravity");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Jump) == 68, "Offset mismatch for FDelMarVehicleConfigOverrides::Jump");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Kickflip) == 72, "Offset mismatch for FDelMarVehicleConfigOverrides::Kickflip");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Oversteer) == 84, "Offset mismatch for FDelMarVehicleConfigOverrides::Oversteer");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Terrain) == 92, "Offset mismatch for FDelMarVehicleConfigOverrides::Terrain");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Turbo) == 100, "Offset mismatch for FDelMarVehicleConfigOverrides::Turbo");
static_assert(offsetof(FDelMarVehicleConfigOverrides, Underthrust) == 124, "Offset mismatch for FDelMarVehicleConfigOverrides::Underthrust");
static_assert(offsetof(FDelMarVehicleConfigOverrides, SelfDemolish) == 152, "Offset mismatch for FDelMarVehicleConfigOverrides::SelfDemolish");

// /Script/DelMarCore.DelMarVehicleConfig_AirControl
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_AirControl
{
public:
    float MaxPitchAdjustmentForwardSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t LateralTurnRateCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float UnderthrustTurnRate; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowRedirectDuringKickflip; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVerticalRedirectDuringVerticalKickflip; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    float LateralKickflipScalar; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float VerticalTurnRate; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float VerticalTurnRateAboveHorizon; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MinSteerInput; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MinPitchVerticalDegreesFromWorldDown; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxPitchVerticalDegreesFromWorldDown; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAerialDivingBonusEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    float MinPitchForAerialDivingBonus; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxAerialDivingBonusSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinAerialDivingBonusSpeed; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float AerialDivingBonusSpeedChangeRate; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float AerialDivingBonusSpeedDecayRate; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_AirControl, MaxPitchAdjustmentForwardSpeed) == 0, "Offset mismatch for FDelMarVehicleConfig_AirControl::MaxPitchAdjustmentForwardSpeed");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, LateralTurnRateCurve) == 8, "Offset mismatch for FDelMarVehicleConfig_AirControl::LateralTurnRateCurve");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, UnderthrustTurnRate) == 88, "Offset mismatch for FDelMarVehicleConfig_AirControl::UnderthrustTurnRate");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, bAllowRedirectDuringKickflip) == 92, "Offset mismatch for FDelMarVehicleConfig_AirControl::bAllowRedirectDuringKickflip");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, bAllowVerticalRedirectDuringVerticalKickflip) == 93, "Offset mismatch for FDelMarVehicleConfig_AirControl::bAllowVerticalRedirectDuringVerticalKickflip");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, LateralKickflipScalar) == 96, "Offset mismatch for FDelMarVehicleConfig_AirControl::LateralKickflipScalar");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, VerticalTurnRate) == 100, "Offset mismatch for FDelMarVehicleConfig_AirControl::VerticalTurnRate");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, VerticalTurnRateAboveHorizon) == 104, "Offset mismatch for FDelMarVehicleConfig_AirControl::VerticalTurnRateAboveHorizon");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MinSteerInput) == 108, "Offset mismatch for FDelMarVehicleConfig_AirControl::MinSteerInput");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MinPitchVerticalDegreesFromWorldDown) == 112, "Offset mismatch for FDelMarVehicleConfig_AirControl::MinPitchVerticalDegreesFromWorldDown");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MaxPitchVerticalDegreesFromWorldDown) == 116, "Offset mismatch for FDelMarVehicleConfig_AirControl::MaxPitchVerticalDegreesFromWorldDown");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, bAerialDivingBonusEnabled) == 120, "Offset mismatch for FDelMarVehicleConfig_AirControl::bAerialDivingBonusEnabled");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MinPitchForAerialDivingBonus) == 124, "Offset mismatch for FDelMarVehicleConfig_AirControl::MinPitchForAerialDivingBonus");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MaxAerialDivingBonusSpeed) == 128, "Offset mismatch for FDelMarVehicleConfig_AirControl::MaxAerialDivingBonusSpeed");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, MinAerialDivingBonusSpeed) == 132, "Offset mismatch for FDelMarVehicleConfig_AirControl::MinAerialDivingBonusSpeed");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, AerialDivingBonusSpeedChangeRate) == 136, "Offset mismatch for FDelMarVehicleConfig_AirControl::AerialDivingBonusSpeedChangeRate");
static_assert(offsetof(FDelMarVehicleConfig_AirControl, AerialDivingBonusSpeedDecayRate) == 140, "Offset mismatch for FDelMarVehicleConfig_AirControl::AerialDivingBonusSpeedDecayRate");

// /Script/DelMarCore.DelMarVehicleConfig_AirFreestyle
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_AirFreestyle
{
public:
    std::uint8_t TorqueAccel[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TorqueDamping[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_AirFreestyle, TorqueAccel) == 0, "Offset mismatch for FDelMarVehicleConfig_AirFreestyle::TorqueAccel");
static_assert(offsetof(FDelMarVehicleConfig_AirFreestyle, TorqueDamping) == 24, "Offset mismatch for FDelMarVehicleConfig_AirFreestyle::TorqueDamping");

// /Script/DelMarCore.DelMarVehicleConfig_AirThrottle
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_AirThrottle
{
public:
    std::uint8_t AccelerationScalarCurve[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    float AerialSpeedCap; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float OverCapSpeedLossPerSecond; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float AerialSlowdownImmunitySeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyNoThrottleSlowdown; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_AirThrottle, AccelerationScalarCurve) == 0, "Offset mismatch for FDelMarVehicleConfig_AirThrottle::AccelerationScalarCurve");
static_assert(offsetof(FDelMarVehicleConfig_AirThrottle, AerialSpeedCap) == 80, "Offset mismatch for FDelMarVehicleConfig_AirThrottle::AerialSpeedCap");
static_assert(offsetof(FDelMarVehicleConfig_AirThrottle, OverCapSpeedLossPerSecond) == 84, "Offset mismatch for FDelMarVehicleConfig_AirThrottle::OverCapSpeedLossPerSecond");
static_assert(offsetof(FDelMarVehicleConfig_AirThrottle, AerialSlowdownImmunitySeconds) == 88, "Offset mismatch for FDelMarVehicleConfig_AirThrottle::AerialSlowdownImmunitySeconds");
static_assert(offsetof(FDelMarVehicleConfig_AirThrottle, bApplyNoThrottleSlowdown) == 92, "Offset mismatch for FDelMarVehicleConfig_AirThrottle::bApplyNoThrottleSlowdown");

// /Script/DelMarCore.DelMarVehicleConfig_AutoAerialRotation
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_AutoAerialRotation
{
public:
    std::uint8_t StabilizationDampingFactor[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t StabilizationFactor[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float MaxUpsideDownDegreesForForcedRoll; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float IdleRotationThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float UpsideDownRollTorque; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UpsideDownRollDamping; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MinRollInput; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float SteerRollOffsetDegrees; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MinPitchInput; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxUserPitchOffsetDegrees; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LateralPitchOffsetDegrees; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float UnderthrustPitchDegrees; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MinThrottleInput; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxUserThrottleOffsetDegrees; // 0x005C (Size: 0x4, Type: FloatProperty)
    float YawTorque; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0064
    std::uint8_t MaxRotationSpeed[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float MinApproachTargetScalar; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedForYawRotation; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MinSteerInputForForwardStateTurning; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float ForwardStateTurnRate; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLandingAssistanceEnabled; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LandingCollisionChannel; // 0x0091 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0092
    float LandingDetectionSeconds; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MinLandingDetectionDistance; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float LandingSurfaceNormalMaxDegrees; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LandingRotationAmplifier; // 0x00A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, StabilizationDampingFactor) == 0, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::StabilizationDampingFactor");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, StabilizationFactor) == 24, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::StabilizationFactor");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MaxUpsideDownDegreesForForcedRoll) == 48, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MaxUpsideDownDegreesForForcedRoll");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, IdleRotationThreshold) == 52, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::IdleRotationThreshold");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, UpsideDownRollTorque) == 56, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::UpsideDownRollTorque");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, UpsideDownRollDamping) == 60, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::UpsideDownRollDamping");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinRollInput) == 64, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinRollInput");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, SteerRollOffsetDegrees) == 68, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::SteerRollOffsetDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinPitchInput) == 72, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinPitchInput");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MaxUserPitchOffsetDegrees) == 76, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MaxUserPitchOffsetDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, LateralPitchOffsetDegrees) == 80, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::LateralPitchOffsetDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, UnderthrustPitchDegrees) == 84, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::UnderthrustPitchDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinThrottleInput) == 88, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinThrottleInput");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MaxUserThrottleOffsetDegrees) == 92, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MaxUserThrottleOffsetDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, YawTorque) == 96, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::YawTorque");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MaxRotationSpeed) == 104, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MaxRotationSpeed");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinApproachTargetScalar) == 128, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinApproachTargetScalar");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinForwardSpeedForYawRotation) == 132, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinForwardSpeedForYawRotation");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinSteerInputForForwardStateTurning) == 136, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinSteerInputForForwardStateTurning");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, ForwardStateTurnRate) == 140, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::ForwardStateTurnRate");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, bLandingAssistanceEnabled) == 144, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::bLandingAssistanceEnabled");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, LandingCollisionChannel) == 145, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::LandingCollisionChannel");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, LandingDetectionSeconds) == 148, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::LandingDetectionSeconds");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, MinLandingDetectionDistance) == 152, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::MinLandingDetectionDistance");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, LandingSurfaceNormalMaxDegrees) == 156, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::LandingSurfaceNormalMaxDegrees");
static_assert(offsetof(FDelMarVehicleConfig_AutoAerialRotation, LandingRotationAmplifier) == 160, "Offset mismatch for FDelMarVehicleConfig_AutoAerialRotation::LandingRotationAmplifier");

// /Script/DelMarCore.DelMarVehicleConfig_AutoUpright
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_AutoUpright
{
public:
    float RotationTorque; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RotationDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinActiveSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinActiveSecondsGrounded; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WheelsOnGroundChangedDelaySeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClearAngularVelocity; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float MinDegreesFromVehicleUpThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinThrottleForWheelRotation; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowActiveStateOnGround; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, RotationTorque) == 0, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::RotationTorque");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, RotationDamping) == 4, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::RotationDamping");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, MinActiveSeconds) == 8, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::MinActiveSeconds");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, MinActiveSecondsGrounded) == 12, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::MinActiveSecondsGrounded");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, WheelsOnGroundChangedDelaySeconds) == 16, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::WheelsOnGroundChangedDelaySeconds");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, bClearAngularVelocity) == 20, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::bClearAngularVelocity");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, MinDegreesFromVehicleUpThreshold) == 24, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::MinDegreesFromVehicleUpThreshold");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, MinThrottleForWheelRotation) == 28, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::MinThrottleForWheelRotation");
static_assert(offsetof(FDelMarVehicleConfig_AutoUpright, bAllowActiveStateOnGround) == 32, "Offset mismatch for FDelMarVehicleConfig_AutoUpright::bAllowActiveStateOnGround");

// /Script/DelMarCore.DelMarVehicleConfig_Gravity
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Gravity
{
public:
    float ForceScaleCeiling; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ForceScaleWall; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ForceScaleGround; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AerialGravityForceMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CoyoteTimeDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinWheelsForCounterGravityMeasures; // 0x0014 (Size: 0x4, Type: IntProperty)
    float MaxCounterGravitySpringVarianceDegrees; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCounterGravityInKickflipSuctionDirection; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Gravity, ForceScaleCeiling) == 0, "Offset mismatch for FDelMarVehicleConfig_Gravity::ForceScaleCeiling");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, ForceScaleWall) == 4, "Offset mismatch for FDelMarVehicleConfig_Gravity::ForceScaleWall");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, ForceScaleGround) == 8, "Offset mismatch for FDelMarVehicleConfig_Gravity::ForceScaleGround");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, AerialGravityForceMultiplier) == 12, "Offset mismatch for FDelMarVehicleConfig_Gravity::AerialGravityForceMultiplier");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, CoyoteTimeDuration) == 16, "Offset mismatch for FDelMarVehicleConfig_Gravity::CoyoteTimeDuration");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, MinWheelsForCounterGravityMeasures) == 20, "Offset mismatch for FDelMarVehicleConfig_Gravity::MinWheelsForCounterGravityMeasures");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, MaxCounterGravitySpringVarianceDegrees) == 24, "Offset mismatch for FDelMarVehicleConfig_Gravity::MaxCounterGravitySpringVarianceDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Gravity, bCounterGravityInKickflipSuctionDirection) == 28, "Offset mismatch for FDelMarVehicleConfig_Gravity::bCounterGravityInKickflipSuctionDirection");

// /Script/DelMarCore.DelMarVehicleConfig_Jump
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Jump
{
public:
    float MinJumpTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxJumpTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float JumpVelocity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ForwardVelocity; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PitchTorque; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float EndThrustForce; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Jump, MinJumpTime) == 0, "Offset mismatch for FDelMarVehicleConfig_Jump::MinJumpTime");
static_assert(offsetof(FDelMarVehicleConfig_Jump, MaxJumpTime) == 4, "Offset mismatch for FDelMarVehicleConfig_Jump::MaxJumpTime");
static_assert(offsetof(FDelMarVehicleConfig_Jump, JumpVelocity) == 8, "Offset mismatch for FDelMarVehicleConfig_Jump::JumpVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Jump, ForwardVelocity) == 12, "Offset mismatch for FDelMarVehicleConfig_Jump::ForwardVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Jump, PitchTorque) == 16, "Offset mismatch for FDelMarVehicleConfig_Jump::PitchTorque");
static_assert(offsetof(FDelMarVehicleConfig_Jump, EndThrustForce) == 20, "Offset mismatch for FDelMarVehicleConfig_Jump::EndThrustForce");

// /Script/DelMarCore.DelMarVehicleConfig_Kickflip
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Kickflip
{
public:
    float DirectionalSensitivity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SecondaryDirectionalSensitivity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDiagonalKickDirection; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t NumWheelsForLanding; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NumActivationCharges; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bResetChargesOnLanding; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    float MinActiveSecondsToReactivate; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinActiveTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxActiveLateralTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxActiveUpwardTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaxActiveDownwardTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowGroundedKickflips; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float GroundedKickflipForce; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float LateralVelocity; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x003C
    std::uint8_t LateralVelocityScalarCurve[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    float MinForwardSpeedForLateralScalar; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MaxLateralVelocityCancelled; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float UpwardVerticalVelocity; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float DownwardVerticalVelocity; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LateralVerticalForce; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float RotationDamping; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float RotationTorque; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float RotationTorqueIncomingCollision; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float MinSpeedToRotateYaw; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalYawLandingDegrees; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float MaxLateralYawLandingDegrees; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalNormalLandingDegrees; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MaxLateralNormalLandingDegrees; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinLongRollTimeCheck; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MinLongRollTimeCheckDownwardKick; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float MaxLongRollDegrees; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float MinDegreesToCompleteRoll; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float FastTorqueDistanceCheck; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseStartingDirectionWhenLanding; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00D9
    std::int32_t PredictionTickInterval; // 0x00DC (Size: 0x4, Type: IntProperty)
    float MaxSimulationRedirectSeconds; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceLateral; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceUpward; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceDownward; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplySuctionToSurfaces; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00F1
    float SuctionVelocity; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float MaxSuctionPerSecond; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float SuctionDistanceCheck; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float MaxAdditionalVelocitySuctionDistance; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SuctionChannel; // 0x0104 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0105
    float MaxForwardVelocityDegreeDifference; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForPrimaryForwardRotation; // 0x010C (Size: 0x4, Type: FloatProperty)
    float MaxGroundedDirectionDegrees; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Kickflip, DirectionalSensitivity) == 0, "Offset mismatch for FDelMarVehicleConfig_Kickflip::DirectionalSensitivity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, SecondaryDirectionalSensitivity) == 4, "Offset mismatch for FDelMarVehicleConfig_Kickflip::SecondaryDirectionalSensitivity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, bAllowDiagonalKickDirection) == 8, "Offset mismatch for FDelMarVehicleConfig_Kickflip::bAllowDiagonalKickDirection");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, NumWheelsForLanding) == 12, "Offset mismatch for FDelMarVehicleConfig_Kickflip::NumWheelsForLanding");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, NumActivationCharges) == 16, "Offset mismatch for FDelMarVehicleConfig_Kickflip::NumActivationCharges");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, bResetChargesOnLanding) == 20, "Offset mismatch for FDelMarVehicleConfig_Kickflip::bResetChargesOnLanding");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinActiveSecondsToReactivate) == 24, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinActiveSecondsToReactivate");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinActiveTime) == 28, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinActiveTime");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxActiveLateralTime) == 32, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxActiveLateralTime");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxActiveUpwardTime) == 36, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxActiveUpwardTime");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxActiveDownwardTime) == 40, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxActiveDownwardTime");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, CooldownSeconds) == 44, "Offset mismatch for FDelMarVehicleConfig_Kickflip::CooldownSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, bAllowGroundedKickflips) == 48, "Offset mismatch for FDelMarVehicleConfig_Kickflip::bAllowGroundedKickflips");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, GroundedKickflipForce) == 52, "Offset mismatch for FDelMarVehicleConfig_Kickflip::GroundedKickflipForce");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, LateralVelocity) == 56, "Offset mismatch for FDelMarVehicleConfig_Kickflip::LateralVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, LateralVelocityScalarCurve) == 64, "Offset mismatch for FDelMarVehicleConfig_Kickflip::LateralVelocityScalarCurve");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinForwardSpeedForLateralScalar) == 144, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinForwardSpeedForLateralScalar");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxLateralVelocityCancelled) == 148, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxLateralVelocityCancelled");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, UpwardVerticalVelocity) == 152, "Offset mismatch for FDelMarVehicleConfig_Kickflip::UpwardVerticalVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, DownwardVerticalVelocity) == 156, "Offset mismatch for FDelMarVehicleConfig_Kickflip::DownwardVerticalVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, LateralVerticalForce) == 160, "Offset mismatch for FDelMarVehicleConfig_Kickflip::LateralVerticalForce");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, RotationDamping) == 164, "Offset mismatch for FDelMarVehicleConfig_Kickflip::RotationDamping");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, RotationTorque) == 168, "Offset mismatch for FDelMarVehicleConfig_Kickflip::RotationTorque");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, RotationTorqueIncomingCollision) == 172, "Offset mismatch for FDelMarVehicleConfig_Kickflip::RotationTorqueIncomingCollision");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinSpeedToRotateYaw) == 176, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinSpeedToRotateYaw");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxVerticalYawLandingDegrees) == 180, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxVerticalYawLandingDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxLateralYawLandingDegrees) == 184, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxLateralYawLandingDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxVerticalNormalLandingDegrees) == 188, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxVerticalNormalLandingDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxLateralNormalLandingDegrees) == 192, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxLateralNormalLandingDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinLongRollTimeCheck) == 196, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinLongRollTimeCheck");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinLongRollTimeCheckDownwardKick) == 200, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinLongRollTimeCheckDownwardKick");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxLongRollDegrees) == 204, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxLongRollDegrees");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinDegreesToCompleteRoll) == 208, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinDegreesToCompleteRoll");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, FastTorqueDistanceCheck) == 212, "Offset mismatch for FDelMarVehicleConfig_Kickflip::FastTorqueDistanceCheck");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, bUseStartingDirectionWhenLanding) == 216, "Offset mismatch for FDelMarVehicleConfig_Kickflip::bUseStartingDirectionWhenLanding");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, PredictionTickInterval) == 220, "Offset mismatch for FDelMarVehicleConfig_Kickflip::PredictionTickInterval");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxSimulationRedirectSeconds) == 224, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxSimulationRedirectSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxSimulationDistanceLateral) == 228, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxSimulationDistanceLateral");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxSimulationDistanceUpward) == 232, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxSimulationDistanceUpward");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxSimulationDistanceDownward) == 236, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxSimulationDistanceDownward");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, bApplySuctionToSurfaces) == 240, "Offset mismatch for FDelMarVehicleConfig_Kickflip::bApplySuctionToSurfaces");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, SuctionVelocity) == 244, "Offset mismatch for FDelMarVehicleConfig_Kickflip::SuctionVelocity");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxSuctionPerSecond) == 248, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxSuctionPerSecond");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, SuctionDistanceCheck) == 252, "Offset mismatch for FDelMarVehicleConfig_Kickflip::SuctionDistanceCheck");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxAdditionalVelocitySuctionDistance) == 256, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxAdditionalVelocitySuctionDistance");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, SuctionChannel) == 260, "Offset mismatch for FDelMarVehicleConfig_Kickflip::SuctionChannel");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxForwardVelocityDegreeDifference) == 264, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxForwardVelocityDegreeDifference");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MinSpeedForPrimaryForwardRotation) == 268, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MinSpeedForPrimaryForwardRotation");
static_assert(offsetof(FDelMarVehicleConfig_Kickflip, MaxGroundedDirectionDegrees) == 272, "Offset mismatch for FDelMarVehicleConfig_Kickflip::MaxGroundedDirectionDegrees");

// /Script/DelMarCore.DelMarVehicleConfig_Reattachment
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Reattachment
{
public:
    float SurfaceTraceDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReattachmentForceAmount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReattachmentForceScalarCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t ReattachmentChannel; // 0x0058 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Reattachment, SurfaceTraceDistance) == 0, "Offset mismatch for FDelMarVehicleConfig_Reattachment::SurfaceTraceDistance");
static_assert(offsetof(FDelMarVehicleConfig_Reattachment, ReattachmentForceAmount) == 4, "Offset mismatch for FDelMarVehicleConfig_Reattachment::ReattachmentForceAmount");
static_assert(offsetof(FDelMarVehicleConfig_Reattachment, ReattachmentForceScalarCurve) == 8, "Offset mismatch for FDelMarVehicleConfig_Reattachment::ReattachmentForceScalarCurve");
static_assert(offsetof(FDelMarVehicleConfig_Reattachment, ReattachmentChannel) == 88, "Offset mismatch for FDelMarVehicleConfig_Reattachment::ReattachmentChannel");

// /Script/DelMarCore.DelMarVehicleConfig_Rubberbanding
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Rubberbanding
{
public:
    float MinSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeedLostPerSecond; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxBonusSpeedGainedPerSecond[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t MaxBonusSpeed[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    std::uint8_t MaxSpeed[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Rubberbanding, MinSpeed) == 0, "Offset mismatch for FDelMarVehicleConfig_Rubberbanding::MinSpeed");
static_assert(offsetof(FDelMarVehicleConfig_Rubberbanding, MaxBonusSpeedLostPerSecond) == 4, "Offset mismatch for FDelMarVehicleConfig_Rubberbanding::MaxBonusSpeedLostPerSecond");
static_assert(offsetof(FDelMarVehicleConfig_Rubberbanding, MaxBonusSpeedGainedPerSecond) == 8, "Offset mismatch for FDelMarVehicleConfig_Rubberbanding::MaxBonusSpeedGainedPerSecond");
static_assert(offsetof(FDelMarVehicleConfig_Rubberbanding, MaxBonusSpeed) == 88, "Offset mismatch for FDelMarVehicleConfig_Rubberbanding::MaxBonusSpeed");
static_assert(offsetof(FDelMarVehicleConfig_Rubberbanding, MaxSpeed) == 168, "Offset mismatch for FDelMarVehicleConfig_Rubberbanding::MaxSpeed");

// /Script/DelMarCore.DelMarVehicleConfig_SelfDemolish
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_SelfDemolish
{
public:
    std::uint8_t bSelfDemolishEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RequiredDemolishActionDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_SelfDemolish, bSelfDemolishEnabled) == 0, "Offset mismatch for FDelMarVehicleConfig_SelfDemolish::bSelfDemolishEnabled");
static_assert(offsetof(FDelMarVehicleConfig_SelfDemolish, RequiredDemolishActionDuration) == 4, "Offset mismatch for FDelMarVehicleConfig_SelfDemolish::RequiredDemolishActionDuration");

// /Script/DelMarCore.DelMarVehicleConfig_StartlineBoost
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_StartlineBoost
{
public:
    float MaxBonusSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t PercentageMaxBonusSpeedEarned[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float BoostGainSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float BoostDurationSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceForwardThrottle; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_StartlineBoost, MaxBonusSpeed) == 0, "Offset mismatch for FDelMarVehicleConfig_StartlineBoost::MaxBonusSpeed");
static_assert(offsetof(FDelMarVehicleConfig_StartlineBoost, PercentageMaxBonusSpeedEarned) == 8, "Offset mismatch for FDelMarVehicleConfig_StartlineBoost::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FDelMarVehicleConfig_StartlineBoost, BoostGainSeconds) == 88, "Offset mismatch for FDelMarVehicleConfig_StartlineBoost::BoostGainSeconds");
static_assert(offsetof(FDelMarVehicleConfig_StartlineBoost, BoostDurationSeconds) == 92, "Offset mismatch for FDelMarVehicleConfig_StartlineBoost::BoostDurationSeconds");
static_assert(offsetof(FDelMarVehicleConfig_StartlineBoost, bEnforceForwardThrottle) == 96, "Offset mismatch for FDelMarVehicleConfig_StartlineBoost::bEnforceForwardThrottle");

// /Script/DelMarCore.DelMarVehicleConfig_Strafe
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Strafe
{
public:
    float InitialVelocityForce; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVelocityRelative; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float MinSteerInput; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float KeybindPressLandedBufferSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxActiveSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RaceStartCooldownSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Strafe, InitialVelocityForce) == 0, "Offset mismatch for FDelMarVehicleConfig_Strafe::InitialVelocityForce");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, bVelocityRelative) == 4, "Offset mismatch for FDelMarVehicleConfig_Strafe::bVelocityRelative");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, MinSteerInput) == 8, "Offset mismatch for FDelMarVehicleConfig_Strafe::MinSteerInput");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, KeybindPressLandedBufferSeconds) == 12, "Offset mismatch for FDelMarVehicleConfig_Strafe::KeybindPressLandedBufferSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, MaxActiveSeconds) == 16, "Offset mismatch for FDelMarVehicleConfig_Strafe::MaxActiveSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, RaceStartCooldownSeconds) == 20, "Offset mismatch for FDelMarVehicleConfig_Strafe::RaceStartCooldownSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Strafe, CooldownSeconds) == 24, "Offset mismatch for FDelMarVehicleConfig_Strafe::CooldownSeconds");

// /Script/DelMarCore.DelMarVehicleConfig_Terrain
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Terrain
{
public:
    float TargetSpeedPenaltyCooldownSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsTargetSpeedPenalty; // 0x0004 (Size: 0x4, Type: IntProperty)
    float NoGripBrakeFactorWithThrottle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedPercentage; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDemolishInWater; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float MaxWaterDepth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float WaterDestructionDelay; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> NonDriveableActorClasses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Terrain, TargetSpeedPenaltyCooldownSeconds) == 0, "Offset mismatch for FDelMarVehicleConfig_Terrain::TargetSpeedPenaltyCooldownSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, NumWheelsTargetSpeedPenalty) == 4, "Offset mismatch for FDelMarVehicleConfig_Terrain::NumWheelsTargetSpeedPenalty");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, NoGripBrakeFactorWithThrottle) == 8, "Offset mismatch for FDelMarVehicleConfig_Terrain::NoGripBrakeFactorWithThrottle");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, MinForwardSpeedPercentage) == 12, "Offset mismatch for FDelMarVehicleConfig_Terrain::MinForwardSpeedPercentage");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, bDemolishInWater) == 16, "Offset mismatch for FDelMarVehicleConfig_Terrain::bDemolishInWater");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, MaxWaterDepth) == 20, "Offset mismatch for FDelMarVehicleConfig_Terrain::MaxWaterDepth");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, WaterDestructionDelay) == 24, "Offset mismatch for FDelMarVehicleConfig_Terrain::WaterDestructionDelay");
static_assert(offsetof(FDelMarVehicleConfig_Terrain, NonDriveableActorClasses) == 32, "Offset mismatch for FDelMarVehicleConfig_Terrain::NonDriveableActorClasses");

// /Script/DelMarCore.DelMarVehicleConfig_Underthrust
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_Underthrust
{
public:
    float UpwardAccel; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ForwardAccel; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxUpwardSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxForwardSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EndThrustForce; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float StartingTankPercentage; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxThrustSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedCap; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedReduction; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SpeedCapSecondsBuffer; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MinJumpActiveSecondsBeforeActivating; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    std::uint8_t FallingUpsideDownThrustDampeningPercentage[0x50]; // 0x0030 (Size: 0x50, Type: StructProperty)
    std::uint8_t PitchRatioScalarCurve[0x50]; // 0x0080 (Size: 0x50, Type: StructProperty)
    std::uint8_t bVehicleRelativeWithFreestyle; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    float MinUpwardAccel; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float LateralRelativeAccel; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReplenishTankOnLanding; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplenishTankOverTime; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00DE
    float TankReplenishDelaySeconds; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float TankReplenishRatePerSecond; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_Underthrust, UpwardAccel) == 0, "Offset mismatch for FDelMarVehicleConfig_Underthrust::UpwardAccel");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, ForwardAccel) == 4, "Offset mismatch for FDelMarVehicleConfig_Underthrust::ForwardAccel");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MaxUpwardSpeed) == 8, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MaxUpwardSpeed");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MaxForwardSpeed) == 12, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MaxForwardSpeed");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, EndThrustForce) == 16, "Offset mismatch for FDelMarVehicleConfig_Underthrust::EndThrustForce");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, StartingTankPercentage) == 20, "Offset mismatch for FDelMarVehicleConfig_Underthrust::StartingTankPercentage");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MaxThrustSeconds) == 24, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MaxThrustSeconds");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, ForwardSpeedCap) == 28, "Offset mismatch for FDelMarVehicleConfig_Underthrust::ForwardSpeedCap");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MaxSpeedReduction) == 32, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MaxSpeedReduction");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, SpeedCapSecondsBuffer) == 36, "Offset mismatch for FDelMarVehicleConfig_Underthrust::SpeedCapSecondsBuffer");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MinJumpActiveSecondsBeforeActivating) == 40, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MinJumpActiveSecondsBeforeActivating");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, FallingUpsideDownThrustDampeningPercentage) == 48, "Offset mismatch for FDelMarVehicleConfig_Underthrust::FallingUpsideDownThrustDampeningPercentage");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, PitchRatioScalarCurve) == 128, "Offset mismatch for FDelMarVehicleConfig_Underthrust::PitchRatioScalarCurve");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, bVehicleRelativeWithFreestyle) == 208, "Offset mismatch for FDelMarVehicleConfig_Underthrust::bVehicleRelativeWithFreestyle");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, MinUpwardAccel) == 212, "Offset mismatch for FDelMarVehicleConfig_Underthrust::MinUpwardAccel");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, LateralRelativeAccel) == 216, "Offset mismatch for FDelMarVehicleConfig_Underthrust::LateralRelativeAccel");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, bReplenishTankOnLanding) == 220, "Offset mismatch for FDelMarVehicleConfig_Underthrust::bReplenishTankOnLanding");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, bReplenishTankOverTime) == 221, "Offset mismatch for FDelMarVehicleConfig_Underthrust::bReplenishTankOverTime");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, TankReplenishDelaySeconds) == 224, "Offset mismatch for FDelMarVehicleConfig_Underthrust::TankReplenishDelaySeconds");
static_assert(offsetof(FDelMarVehicleConfig_Underthrust, TankReplenishRatePerSecond) == 228, "Offset mismatch for FDelMarVehicleConfig_Underthrust::TankReplenishRatePerSecond");

// /Script/DelMarCore.DelMarVehicleConfig_WorldBonusSpeed
// Kind: ScriptStruct; super: none
struct FDelMarVehicleConfig_WorldBonusSpeed
{
public:
    TArray<void*> BonusSpeedSourceCaps; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float MaxBonusSpeedPerStack; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxStackDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> WorldBonusSpeedActors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVehicleConfig_WorldBonusSpeed, BonusSpeedSourceCaps) == 0, "Offset mismatch for FDelMarVehicleConfig_WorldBonusSpeed::BonusSpeedSourceCaps");
static_assert(offsetof(FDelMarVehicleConfig_WorldBonusSpeed, MaxBonusSpeedPerStack) == 16, "Offset mismatch for FDelMarVehicleConfig_WorldBonusSpeed::MaxBonusSpeedPerStack");
static_assert(offsetof(FDelMarVehicleConfig_WorldBonusSpeed, MaxStackDuration) == 20, "Offset mismatch for FDelMarVehicleConfig_WorldBonusSpeed::MaxStackDuration");
static_assert(offsetof(FDelMarVehicleConfig_WorldBonusSpeed, WorldBonusSpeedActors) == 24, "Offset mismatch for FDelMarVehicleConfig_WorldBonusSpeed::WorldBonusSpeedActors");

// /Script/DelMarCore.DelMarVehicleDraftingConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleDraftingConfig
{
public:
    float TraceDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinEligibleDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxHorizontalDegreesToDraftTarget; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalDegreesToDraftTarget; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableDynamicAngle; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t MaxBonusSpeedPercentageCurve[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    std::uint8_t LineOfSightChannel; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float MinSpeedToStartDrafting; // 0x006C (Size: 0x4, Type: FloatProperty)
    float NumSecondsToActivateDrafting; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float NumForgivenessSeconds; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float NumGracePeriodSeconds; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float NumSecondsToMaxBonusSpeed; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float NumSpeedRemovalSeconds; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleDraftingConfig, TraceDistance) == 0, "Offset mismatch for FDelMarVehicleDraftingConfig::TraceDistance");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MinEligibleDistance) == 4, "Offset mismatch for FDelMarVehicleDraftingConfig::MinEligibleDistance");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MaxHorizontalDegreesToDraftTarget) == 8, "Offset mismatch for FDelMarVehicleDraftingConfig::MaxHorizontalDegreesToDraftTarget");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MaxVerticalDegreesToDraftTarget) == 12, "Offset mismatch for FDelMarVehicleDraftingConfig::MaxVerticalDegreesToDraftTarget");
static_assert(offsetof(FDelMarVehicleDraftingConfig, bEnableDynamicAngle) == 16, "Offset mismatch for FDelMarVehicleDraftingConfig::bEnableDynamicAngle");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MaxBonusSpeedPercentageCurve) == 24, "Offset mismatch for FDelMarVehicleDraftingConfig::MaxBonusSpeedPercentageCurve");
static_assert(offsetof(FDelMarVehicleDraftingConfig, LineOfSightChannel) == 104, "Offset mismatch for FDelMarVehicleDraftingConfig::LineOfSightChannel");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MinSpeedToStartDrafting) == 108, "Offset mismatch for FDelMarVehicleDraftingConfig::MinSpeedToStartDrafting");
static_assert(offsetof(FDelMarVehicleDraftingConfig, NumSecondsToActivateDrafting) == 112, "Offset mismatch for FDelMarVehicleDraftingConfig::NumSecondsToActivateDrafting");
static_assert(offsetof(FDelMarVehicleDraftingConfig, NumForgivenessSeconds) == 116, "Offset mismatch for FDelMarVehicleDraftingConfig::NumForgivenessSeconds");
static_assert(offsetof(FDelMarVehicleDraftingConfig, NumGracePeriodSeconds) == 120, "Offset mismatch for FDelMarVehicleDraftingConfig::NumGracePeriodSeconds");
static_assert(offsetof(FDelMarVehicleDraftingConfig, NumSecondsToMaxBonusSpeed) == 124, "Offset mismatch for FDelMarVehicleDraftingConfig::NumSecondsToMaxBonusSpeed");
static_assert(offsetof(FDelMarVehicleDraftingConfig, MaxBonusSpeed) == 128, "Offset mismatch for FDelMarVehicleDraftingConfig::MaxBonusSpeed");
static_assert(offsetof(FDelMarVehicleDraftingConfig, NumSpeedRemovalSeconds) == 132, "Offset mismatch for FDelMarVehicleDraftingConfig::NumSpeedRemovalSeconds");

// /Script/DelMarCore.DelMarVehicleDriftBoostConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleDriftBoostConfig
{
public:
    float MaxDriftBoostRatio; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BonusSpeedPercentageCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float WaitingPeriodSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxDriftBoostSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PotentialDriftBoostPercentageCurve[0x50]; // 0x0060 (Size: 0x50, Type: StructProperty)
    float MaxNumActiveBonusSpeedSeconds; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00B4
    std::uint8_t DriftBoostDurationCurve[0x50]; // 0x00B8 (Size: 0x50, Type: StructProperty)
    float BonusSpeedDecaySeconds; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float PotentialRemovalRate; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceThrottleForDriftBoost; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    float QueuedBoostImpulseScalar; // 0x0114 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleDriftBoostConfig, MaxDriftBoostRatio) == 0, "Offset mismatch for FDelMarVehicleDriftBoostConfig::MaxDriftBoostRatio");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, MaxBonusSpeed) == 4, "Offset mismatch for FDelMarVehicleDriftBoostConfig::MaxBonusSpeed");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, BonusSpeedPercentageCurve) == 8, "Offset mismatch for FDelMarVehicleDriftBoostConfig::BonusSpeedPercentageCurve");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, WaitingPeriodSeconds) == 88, "Offset mismatch for FDelMarVehicleDriftBoostConfig::WaitingPeriodSeconds");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, MaxDriftBoostSeconds) == 92, "Offset mismatch for FDelMarVehicleDriftBoostConfig::MaxDriftBoostSeconds");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, PotentialDriftBoostPercentageCurve) == 96, "Offset mismatch for FDelMarVehicleDriftBoostConfig::PotentialDriftBoostPercentageCurve");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, MaxNumActiveBonusSpeedSeconds) == 176, "Offset mismatch for FDelMarVehicleDriftBoostConfig::MaxNumActiveBonusSpeedSeconds");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, DriftBoostDurationCurve) == 184, "Offset mismatch for FDelMarVehicleDriftBoostConfig::DriftBoostDurationCurve");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, BonusSpeedDecaySeconds) == 264, "Offset mismatch for FDelMarVehicleDriftBoostConfig::BonusSpeedDecaySeconds");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, PotentialRemovalRate) == 268, "Offset mismatch for FDelMarVehicleDriftBoostConfig::PotentialRemovalRate");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, bEnforceThrottleForDriftBoost) == 272, "Offset mismatch for FDelMarVehicleDriftBoostConfig::bEnforceThrottleForDriftBoost");
static_assert(offsetof(FDelMarVehicleDriftBoostConfig, QueuedBoostImpulseScalar) == 276, "Offset mismatch for FDelMarVehicleDriftBoostConfig::QueuedBoostImpulseScalar");

// /Script/DelMarCore.DelMarVehicleDriftConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleDriftConfig
{
public:
    float MinSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinDirectedDriftTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinInAirTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AerialDriftNoKeybindGracePeriod; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxForcedDriftTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinKickDriftActiveSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceSteerWhenKicking; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    float MinForcedSteerWhenKicking; // 0x001C (Size: 0x4, Type: FloatProperty)
    float KickCooldownSeconds; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bActivateDriftOnStrafeEnd; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateDriftOnLanding; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateDriftOnKickflipLanding; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0027
    float ActivateExitDriftTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinSteerInput; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MinFullThrottleInput; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinFullDriftInput; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ForcedDriftSteer; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float InitialTorqueImpulse; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxAllowedGroundedSpringVarianceDegrees; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelInDriftDir; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelNoSteer; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelNotInDriftDir; // 0x004C (Size: 0x4, Type: FloatProperty)
    float TorqueAccelChangeDir; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelDampening; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelWithKick; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelWithKickV2; // 0x005C (Size: 0x4, Type: FloatProperty)
    float TorqueAccelForcedDrift; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float TorqueAgainstExit; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedWithThrottle; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedNoThrottle; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedWithKick; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedSwapDirections; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MinDriftDegrees; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaxDriftDegrees; // 0x007C (Size: 0x4, Type: FloatProperty)
    float ExitDriftDegrees; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float ApproachDistance; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float PeakForwardSpeedDegrees; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float KickRedirectRate; // 0x008C (Size: 0x4, Type: FloatProperty)
    float KickRedirectRateV2; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float ForcedDriftRedirectRate; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MinSteerRedirectInput; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t NonKickRedirectRateCurve[0x50]; // 0x00A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveControlled[0x50]; // 0x00F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAgainstAngleCurveControlled[0x50]; // 0x0140 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveNoSteer[0x50]; // 0x0190 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveUncontrolled[0x50]; // 0x01E0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveKickback[0x50]; // 0x0230 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveKickbackV2[0x50]; // 0x0280 (Size: 0x50, Type: StructProperty)
    float PeakSpeedIncreaseDegrees; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float MaxAccelSpeed; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AccelerationScalarCurve[0x50]; // 0x02D8 (Size: 0x50, Type: StructProperty)
    std::uint8_t AdditionalSpeedLossNoThrottle[0x50]; // 0x0328 (Size: 0x50, Type: StructProperty)
    float MaxControlledDriftRatio; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x037C
    std::uint8_t ControlledSpeedCapBySlipAngle[0x50]; // 0x0380 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlledSpeedCapDecelRate[0x50]; // 0x03D0 (Size: 0x50, Type: StructProperty)
    float UncontrolledSpeedCap; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float UncontrolledSpeedLoss; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float ExitVelocityMaxDegrees; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float ExitKickEndMaxDegrees; // 0x042C (Size: 0x4, Type: FloatProperty)
    float ExitVelocityTorqueAccel; // 0x0430 (Size: 0x4, Type: FloatProperty)
    float ExitVelocityMaxRotationSpeed; // 0x0434 (Size: 0x4, Type: FloatProperty)
    float ExitForwardMaxDegrees; // 0x0438 (Size: 0x4, Type: FloatProperty)
    float ExitForwardTorqueSteer; // 0x043C (Size: 0x4, Type: FloatProperty)
    float ExitForwardMaxRotation; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float ExitForwardTargetRedirectRate; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float ExitForwardRedirectRate; // 0x0448 (Size: 0x4, Type: FloatProperty)
    float MaxExitForwardLandingSpeed; // 0x044C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceThrottleForControlledDrift; // 0x0450 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleDriftConfig, MinSpeed) == 0, "Offset mismatch for FDelMarVehicleDriftConfig::MinSpeed");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinDirectedDriftTime) == 4, "Offset mismatch for FDelMarVehicleDriftConfig::MinDirectedDriftTime");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinInAirTime) == 8, "Offset mismatch for FDelMarVehicleDriftConfig::MinInAirTime");
static_assert(offsetof(FDelMarVehicleDriftConfig, AerialDriftNoKeybindGracePeriod) == 12, "Offset mismatch for FDelMarVehicleDriftConfig::AerialDriftNoKeybindGracePeriod");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxForcedDriftTime) == 16, "Offset mismatch for FDelMarVehicleDriftConfig::MaxForcedDriftTime");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinKickDriftActiveSeconds) == 20, "Offset mismatch for FDelMarVehicleDriftConfig::MinKickDriftActiveSeconds");
static_assert(offsetof(FDelMarVehicleDriftConfig, bForceSteerWhenKicking) == 24, "Offset mismatch for FDelMarVehicleDriftConfig::bForceSteerWhenKicking");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinForcedSteerWhenKicking) == 28, "Offset mismatch for FDelMarVehicleDriftConfig::MinForcedSteerWhenKicking");
static_assert(offsetof(FDelMarVehicleDriftConfig, KickCooldownSeconds) == 32, "Offset mismatch for FDelMarVehicleDriftConfig::KickCooldownSeconds");
static_assert(offsetof(FDelMarVehicleDriftConfig, bActivateDriftOnStrafeEnd) == 36, "Offset mismatch for FDelMarVehicleDriftConfig::bActivateDriftOnStrafeEnd");
static_assert(offsetof(FDelMarVehicleDriftConfig, bActivateDriftOnLanding) == 37, "Offset mismatch for FDelMarVehicleDriftConfig::bActivateDriftOnLanding");
static_assert(offsetof(FDelMarVehicleDriftConfig, bActivateDriftOnKickflipLanding) == 38, "Offset mismatch for FDelMarVehicleDriftConfig::bActivateDriftOnKickflipLanding");
static_assert(offsetof(FDelMarVehicleDriftConfig, ActivateExitDriftTime) == 40, "Offset mismatch for FDelMarVehicleDriftConfig::ActivateExitDriftTime");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinSteerInput) == 44, "Offset mismatch for FDelMarVehicleDriftConfig::MinSteerInput");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinFullThrottleInput) == 48, "Offset mismatch for FDelMarVehicleDriftConfig::MinFullThrottleInput");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinFullDriftInput) == 52, "Offset mismatch for FDelMarVehicleDriftConfig::MinFullDriftInput");
static_assert(offsetof(FDelMarVehicleDriftConfig, ForcedDriftSteer) == 56, "Offset mismatch for FDelMarVehicleDriftConfig::ForcedDriftSteer");
static_assert(offsetof(FDelMarVehicleDriftConfig, InitialTorqueImpulse) == 60, "Offset mismatch for FDelMarVehicleDriftConfig::InitialTorqueImpulse");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxAllowedGroundedSpringVarianceDegrees) == 64, "Offset mismatch for FDelMarVehicleDriftConfig::MaxAllowedGroundedSpringVarianceDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelInDriftDir) == 68, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelInDriftDir");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelNoSteer) == 72, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelNoSteer");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelNotInDriftDir) == 76, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelNotInDriftDir");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelChangeDir) == 80, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelChangeDir");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelDampening) == 84, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelDampening");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelWithKick) == 88, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelWithKick");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelWithKickV2) == 92, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelWithKickV2");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAccelForcedDrift) == 96, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAccelForcedDrift");
static_assert(offsetof(FDelMarVehicleDriftConfig, TorqueAgainstExit) == 100, "Offset mismatch for FDelMarVehicleDriftConfig::TorqueAgainstExit");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxRotationSpeedWithThrottle) == 104, "Offset mismatch for FDelMarVehicleDriftConfig::MaxRotationSpeedWithThrottle");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxRotationSpeedNoThrottle) == 108, "Offset mismatch for FDelMarVehicleDriftConfig::MaxRotationSpeedNoThrottle");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxRotationSpeedWithKick) == 112, "Offset mismatch for FDelMarVehicleDriftConfig::MaxRotationSpeedWithKick");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxRotationSpeedSwapDirections) == 116, "Offset mismatch for FDelMarVehicleDriftConfig::MaxRotationSpeedSwapDirections");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinDriftDegrees) == 120, "Offset mismatch for FDelMarVehicleDriftConfig::MinDriftDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxDriftDegrees) == 124, "Offset mismatch for FDelMarVehicleDriftConfig::MaxDriftDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitDriftDegrees) == 128, "Offset mismatch for FDelMarVehicleDriftConfig::ExitDriftDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, ApproachDistance) == 132, "Offset mismatch for FDelMarVehicleDriftConfig::ApproachDistance");
static_assert(offsetof(FDelMarVehicleDriftConfig, PeakForwardSpeedDegrees) == 136, "Offset mismatch for FDelMarVehicleDriftConfig::PeakForwardSpeedDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, KickRedirectRate) == 140, "Offset mismatch for FDelMarVehicleDriftConfig::KickRedirectRate");
static_assert(offsetof(FDelMarVehicleDriftConfig, KickRedirectRateV2) == 144, "Offset mismatch for FDelMarVehicleDriftConfig::KickRedirectRateV2");
static_assert(offsetof(FDelMarVehicleDriftConfig, ForcedDriftRedirectRate) == 148, "Offset mismatch for FDelMarVehicleDriftConfig::ForcedDriftRedirectRate");
static_assert(offsetof(FDelMarVehicleDriftConfig, MinSteerRedirectInput) == 152, "Offset mismatch for FDelMarVehicleDriftConfig::MinSteerRedirectInput");
static_assert(offsetof(FDelMarVehicleDriftConfig, NonKickRedirectRateCurve) == 160, "Offset mismatch for FDelMarVehicleDriftConfig::NonKickRedirectRateCurve");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAngleCurveControlled) == 240, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAngleCurveControlled");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAgainstAngleCurveControlled) == 320, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAgainstAngleCurveControlled");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAngleCurveNoSteer) == 400, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAngleCurveNoSteer");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAngleCurveUncontrolled) == 480, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAngleCurveUncontrolled");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAngleCurveKickback) == 560, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAngleCurveKickback");
static_assert(offsetof(FDelMarVehicleDriftConfig, VelocityRedirectAngleCurveKickbackV2) == 640, "Offset mismatch for FDelMarVehicleDriftConfig::VelocityRedirectAngleCurveKickbackV2");
static_assert(offsetof(FDelMarVehicleDriftConfig, PeakSpeedIncreaseDegrees) == 720, "Offset mismatch for FDelMarVehicleDriftConfig::PeakSpeedIncreaseDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxAccelSpeed) == 724, "Offset mismatch for FDelMarVehicleDriftConfig::MaxAccelSpeed");
static_assert(offsetof(FDelMarVehicleDriftConfig, AccelerationScalarCurve) == 728, "Offset mismatch for FDelMarVehicleDriftConfig::AccelerationScalarCurve");
static_assert(offsetof(FDelMarVehicleDriftConfig, AdditionalSpeedLossNoThrottle) == 808, "Offset mismatch for FDelMarVehicleDriftConfig::AdditionalSpeedLossNoThrottle");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxControlledDriftRatio) == 888, "Offset mismatch for FDelMarVehicleDriftConfig::MaxControlledDriftRatio");
static_assert(offsetof(FDelMarVehicleDriftConfig, ControlledSpeedCapBySlipAngle) == 896, "Offset mismatch for FDelMarVehicleDriftConfig::ControlledSpeedCapBySlipAngle");
static_assert(offsetof(FDelMarVehicleDriftConfig, ControlledSpeedCapDecelRate) == 976, "Offset mismatch for FDelMarVehicleDriftConfig::ControlledSpeedCapDecelRate");
static_assert(offsetof(FDelMarVehicleDriftConfig, UncontrolledSpeedCap) == 1056, "Offset mismatch for FDelMarVehicleDriftConfig::UncontrolledSpeedCap");
static_assert(offsetof(FDelMarVehicleDriftConfig, UncontrolledSpeedLoss) == 1060, "Offset mismatch for FDelMarVehicleDriftConfig::UncontrolledSpeedLoss");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitVelocityMaxDegrees) == 1064, "Offset mismatch for FDelMarVehicleDriftConfig::ExitVelocityMaxDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitKickEndMaxDegrees) == 1068, "Offset mismatch for FDelMarVehicleDriftConfig::ExitKickEndMaxDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitVelocityTorqueAccel) == 1072, "Offset mismatch for FDelMarVehicleDriftConfig::ExitVelocityTorqueAccel");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitVelocityMaxRotationSpeed) == 1076, "Offset mismatch for FDelMarVehicleDriftConfig::ExitVelocityMaxRotationSpeed");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitForwardMaxDegrees) == 1080, "Offset mismatch for FDelMarVehicleDriftConfig::ExitForwardMaxDegrees");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitForwardTorqueSteer) == 1084, "Offset mismatch for FDelMarVehicleDriftConfig::ExitForwardTorqueSteer");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitForwardMaxRotation) == 1088, "Offset mismatch for FDelMarVehicleDriftConfig::ExitForwardMaxRotation");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitForwardTargetRedirectRate) == 1092, "Offset mismatch for FDelMarVehicleDriftConfig::ExitForwardTargetRedirectRate");
static_assert(offsetof(FDelMarVehicleDriftConfig, ExitForwardRedirectRate) == 1096, "Offset mismatch for FDelMarVehicleDriftConfig::ExitForwardRedirectRate");
static_assert(offsetof(FDelMarVehicleDriftConfig, MaxExitForwardLandingSpeed) == 1100, "Offset mismatch for FDelMarVehicleDriftConfig::MaxExitForwardLandingSpeed");
static_assert(offsetof(FDelMarVehicleDriftConfig, bEnforceThrottleForControlledDrift) == 1104, "Offset mismatch for FDelMarVehicleDriftConfig::bEnforceThrottleForControlledDrift");

// /Script/DelMarCore.DelMarVehicleDriveSetup
// Kind: ScriptStruct; super: none
struct FDelMarVehicleDriveSetup
{
public:
    float MaxBaseForwardSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t DriveAccel[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t TargetSpeedMaxAccelCurve[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    float TargetSpeedAerialFriction; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForPersistentTargetSpeedModifier; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowBrakingInAir; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    float BrakeAccel; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float StopSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float IdleBrakeFactor; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MaxSpeedToResetTargetSpeedDirection; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00C4
    std::uint8_t SteerAngleCurve[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    TArray<void*> SteerAngleCurveOverrides; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LatFrictionCurve[0x50]; // 0x0120 (Size: 0x50, Type: StructProperty)
    std::uint8_t WheelsGroundedFrictionCurve[0x48]; // 0x0170 (Size: 0x48, Type: StructProperty)
    float MaxForwardSpeedToIgnoreLandingSpeed; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float MaxKickflipLandingSeconds; // 0x01BC (Size: 0x4, Type: FloatProperty)
    float SkydiveVerticalVelocitySensitivity; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float SkydiveVerticalPitchSensitivity; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float MinInAirTimeStableLanding; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsForActivelyLanding; // 0x01CC (Size: 0x4, Type: IntProperty)
    float MinAerialSpeedForPrimaryDirection; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float MaxGroundNormalDiffForPrimaryDirection; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float MinPrevVelocityDotProductForPrimaryDirection; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float ForwardMaxSpeed; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float UpwardMaxLandingSpeed; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float UpwardMaxSpeed; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float MaxLandingAngularVelocity; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float MaxLinearSpeed; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeed; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float MinCeilingDegrees; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float MaxCeilingDegrees; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float AerialCeilingDegrees; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float MaxInvertedControlSteering; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float MinCeilingSecondsToInvertControls; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float WheelPushForce; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForVelocityDirection; // 0x020C (Size: 0x4, Type: FloatProperty)
    float MinZSpeedForUpwardDirection; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float VerticalOrientationSensitivity; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float MaxInactiveLandedFlipTime; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsForWheelsOnGround; // 0x021C (Size: 0x4, Type: IntProperty)
    float MaxLandingSpeedSpringVarianceDegrees; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float MinDownDegreesForForwardDirection; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float MaxNormalizedForwardSpeed; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float MaxNormalizedBonusSpeed; // 0x022C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleDriveSetup, MaxBaseForwardSpeed) == 0, "Offset mismatch for FDelMarVehicleDriveSetup::MaxBaseForwardSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, DriveAccel) == 8, "Offset mismatch for FDelMarVehicleDriveSetup::DriveAccel");
static_assert(offsetof(FDelMarVehicleDriveSetup, TargetSpeedMaxAccelCurve) == 88, "Offset mismatch for FDelMarVehicleDriveSetup::TargetSpeedMaxAccelCurve");
static_assert(offsetof(FDelMarVehicleDriveSetup, TargetSpeedAerialFriction) == 168, "Offset mismatch for FDelMarVehicleDriveSetup::TargetSpeedAerialFriction");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinSpeedForPersistentTargetSpeedModifier) == 172, "Offset mismatch for FDelMarVehicleDriveSetup::MinSpeedForPersistentTargetSpeedModifier");
static_assert(offsetof(FDelMarVehicleDriveSetup, bAllowBrakingInAir) == 176, "Offset mismatch for FDelMarVehicleDriveSetup::bAllowBrakingInAir");
static_assert(offsetof(FDelMarVehicleDriveSetup, BrakeAccel) == 180, "Offset mismatch for FDelMarVehicleDriveSetup::BrakeAccel");
static_assert(offsetof(FDelMarVehicleDriveSetup, StopSpeed) == 184, "Offset mismatch for FDelMarVehicleDriveSetup::StopSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, IdleBrakeFactor) == 188, "Offset mismatch for FDelMarVehicleDriveSetup::IdleBrakeFactor");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxSpeedToResetTargetSpeedDirection) == 192, "Offset mismatch for FDelMarVehicleDriveSetup::MaxSpeedToResetTargetSpeedDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, SteerAngleCurve) == 200, "Offset mismatch for FDelMarVehicleDriveSetup::SteerAngleCurve");
static_assert(offsetof(FDelMarVehicleDriveSetup, SteerAngleCurveOverrides) == 272, "Offset mismatch for FDelMarVehicleDriveSetup::SteerAngleCurveOverrides");
static_assert(offsetof(FDelMarVehicleDriveSetup, LatFrictionCurve) == 288, "Offset mismatch for FDelMarVehicleDriveSetup::LatFrictionCurve");
static_assert(offsetof(FDelMarVehicleDriveSetup, WheelsGroundedFrictionCurve) == 368, "Offset mismatch for FDelMarVehicleDriveSetup::WheelsGroundedFrictionCurve");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxForwardSpeedToIgnoreLandingSpeed) == 440, "Offset mismatch for FDelMarVehicleDriveSetup::MaxForwardSpeedToIgnoreLandingSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxKickflipLandingSeconds) == 444, "Offset mismatch for FDelMarVehicleDriveSetup::MaxKickflipLandingSeconds");
static_assert(offsetof(FDelMarVehicleDriveSetup, SkydiveVerticalVelocitySensitivity) == 448, "Offset mismatch for FDelMarVehicleDriveSetup::SkydiveVerticalVelocitySensitivity");
static_assert(offsetof(FDelMarVehicleDriveSetup, SkydiveVerticalPitchSensitivity) == 452, "Offset mismatch for FDelMarVehicleDriveSetup::SkydiveVerticalPitchSensitivity");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinInAirTimeStableLanding) == 456, "Offset mismatch for FDelMarVehicleDriveSetup::MinInAirTimeStableLanding");
static_assert(offsetof(FDelMarVehicleDriveSetup, NumWheelsForActivelyLanding) == 460, "Offset mismatch for FDelMarVehicleDriveSetup::NumWheelsForActivelyLanding");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinAerialSpeedForPrimaryDirection) == 464, "Offset mismatch for FDelMarVehicleDriveSetup::MinAerialSpeedForPrimaryDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxGroundNormalDiffForPrimaryDirection) == 468, "Offset mismatch for FDelMarVehicleDriveSetup::MaxGroundNormalDiffForPrimaryDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinPrevVelocityDotProductForPrimaryDirection) == 472, "Offset mismatch for FDelMarVehicleDriveSetup::MinPrevVelocityDotProductForPrimaryDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, ForwardMaxSpeed) == 476, "Offset mismatch for FDelMarVehicleDriveSetup::ForwardMaxSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, UpwardMaxLandingSpeed) == 480, "Offset mismatch for FDelMarVehicleDriveSetup::UpwardMaxLandingSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, UpwardMaxSpeed) == 484, "Offset mismatch for FDelMarVehicleDriveSetup::UpwardMaxSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxLandingAngularVelocity) == 488, "Offset mismatch for FDelMarVehicleDriveSetup::MaxLandingAngularVelocity");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxLinearSpeed) == 492, "Offset mismatch for FDelMarVehicleDriveSetup::MaxLinearSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxAngularSpeed) == 496, "Offset mismatch for FDelMarVehicleDriveSetup::MaxAngularSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinCeilingDegrees) == 500, "Offset mismatch for FDelMarVehicleDriveSetup::MinCeilingDegrees");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxCeilingDegrees) == 504, "Offset mismatch for FDelMarVehicleDriveSetup::MaxCeilingDegrees");
static_assert(offsetof(FDelMarVehicleDriveSetup, AerialCeilingDegrees) == 508, "Offset mismatch for FDelMarVehicleDriveSetup::AerialCeilingDegrees");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxInvertedControlSteering) == 512, "Offset mismatch for FDelMarVehicleDriveSetup::MaxInvertedControlSteering");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinCeilingSecondsToInvertControls) == 516, "Offset mismatch for FDelMarVehicleDriveSetup::MinCeilingSecondsToInvertControls");
static_assert(offsetof(FDelMarVehicleDriveSetup, WheelPushForce) == 520, "Offset mismatch for FDelMarVehicleDriveSetup::WheelPushForce");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinSpeedForVelocityDirection) == 524, "Offset mismatch for FDelMarVehicleDriveSetup::MinSpeedForVelocityDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinZSpeedForUpwardDirection) == 528, "Offset mismatch for FDelMarVehicleDriveSetup::MinZSpeedForUpwardDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, VerticalOrientationSensitivity) == 532, "Offset mismatch for FDelMarVehicleDriveSetup::VerticalOrientationSensitivity");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxInactiveLandedFlipTime) == 536, "Offset mismatch for FDelMarVehicleDriveSetup::MaxInactiveLandedFlipTime");
static_assert(offsetof(FDelMarVehicleDriveSetup, NumWheelsForWheelsOnGround) == 540, "Offset mismatch for FDelMarVehicleDriveSetup::NumWheelsForWheelsOnGround");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxLandingSpeedSpringVarianceDegrees) == 544, "Offset mismatch for FDelMarVehicleDriveSetup::MaxLandingSpeedSpringVarianceDegrees");
static_assert(offsetof(FDelMarVehicleDriveSetup, MinDownDegreesForForwardDirection) == 548, "Offset mismatch for FDelMarVehicleDriveSetup::MinDownDegreesForForwardDirection");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxNormalizedForwardSpeed) == 552, "Offset mismatch for FDelMarVehicleDriveSetup::MaxNormalizedForwardSpeed");
static_assert(offsetof(FDelMarVehicleDriveSetup, MaxNormalizedBonusSpeed) == 556, "Offset mismatch for FDelMarVehicleDriveSetup::MaxNormalizedBonusSpeed");

// /Script/DelMarCore.DelMarVehicleInContinuous
// Kind: ScriptStruct; super: FortAthenaVehicleInputState
struct FDelMarVehicleInContinuous
{
public:
    float ForwardAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RightAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PitchAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookUpDelta; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TurnDelta; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SteerAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float GravityOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t MovementDir[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIgnoreForwardInAir; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bIsBraking (shared storage)
    // 0x0038 BoolProperty bIsHonking (shared storage)
    // 0x0038 BoolProperty bIsJumping (shared storage)
    // 0x0038 BoolProperty bIsReversing (shared storage)
    // 0x0038 BoolProperty bIsSprinting (shared storage)
    // 0x0038 BoolProperty bMovementModifier0 (shared storage)
    // 0x0038 BoolProperty bMovementModifier1 (shared storage)
    std::uint8_t bMovementModifier2; // 0x0039 (Size: 0x1, Type: BoolProperty)
    // 0x0039 BoolProperty bUsingGamepad (shared storage)
    // 0x0039 BoolProperty bUsingTrigger (shared storage)
};

static_assert(offsetof(FDelMarVehicleInContinuous, ForwardAlpha) == 0, "Offset mismatch for FDelMarVehicleInContinuous::ForwardAlpha");
static_assert(offsetof(FDelMarVehicleInContinuous, RightAlpha) == 4, "Offset mismatch for FDelMarVehicleInContinuous::RightAlpha");
static_assert(offsetof(FDelMarVehicleInContinuous, PitchAlpha) == 8, "Offset mismatch for FDelMarVehicleInContinuous::PitchAlpha");
static_assert(offsetof(FDelMarVehicleInContinuous, LookUpDelta) == 12, "Offset mismatch for FDelMarVehicleInContinuous::LookUpDelta");
static_assert(offsetof(FDelMarVehicleInContinuous, TurnDelta) == 16, "Offset mismatch for FDelMarVehicleInContinuous::TurnDelta");
static_assert(offsetof(FDelMarVehicleInContinuous, SteerAlpha) == 20, "Offset mismatch for FDelMarVehicleInContinuous::SteerAlpha");
static_assert(offsetof(FDelMarVehicleInContinuous, GravityOffset) == 24, "Offset mismatch for FDelMarVehicleInContinuous::GravityOffset");
static_assert(offsetof(FDelMarVehicleInContinuous, MovementDir) == 32, "Offset mismatch for FDelMarVehicleInContinuous::MovementDir");
static_assert(offsetof(FDelMarVehicleInContinuous, bIgnoreForwardInAir) == 56, "Offset mismatch for FDelMarVehicleInContinuous::bIgnoreForwardInAir");
static_assert(offsetof(FDelMarVehicleInContinuous, bMovementModifier2) == 57, "Offset mismatch for FDelMarVehicleInContinuous::bMovementModifier2");

// /Script/DelMarCore.DelMarVehicleInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FDelMarVehicleInPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* FortPhysicsVehicleConfigs; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseForceHeading; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x0011
    std::uint8_t bAttemptAsyncOrientationCorrection; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bHasDriver (shared storage)
    // 0x0030 BoolProperty bHasPassengers (shared storage)
    // 0x0030 BoolProperty bIsTouchingAnything (shared storage)
    // 0x0030 BoolProperty bUseGravity (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float WaterLevel; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocalFrontFrictionPt[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRearFrictionPt[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float FrontMassRatio; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float RearMassRatio; // 0x006C (Size: 0x4, Type: FloatProperty)
    float TopSpeedCurrentMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleAttributes[0x13C]; // 0x0074 (Size: 0x13C, Type: StructProperty)
    TArray<void*> TireStates; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVehicleInPersistent, FortPhysicsVehicleConfigs) == 8, "Offset mismatch for FDelMarVehicleInPersistent::FortPhysicsVehicleConfigs");
static_assert(offsetof(FDelMarVehicleInPersistent, bUseForceHeading) == 16, "Offset mismatch for FDelMarVehicleInPersistent::bUseForceHeading");
static_assert(offsetof(FDelMarVehicleInPersistent, bAttemptAsyncOrientationCorrection) == 48, "Offset mismatch for FDelMarVehicleInPersistent::bAttemptAsyncOrientationCorrection");
static_assert(offsetof(FDelMarVehicleInPersistent, WaterLevel) == 52, "Offset mismatch for FDelMarVehicleInPersistent::WaterLevel");
static_assert(offsetof(FDelMarVehicleInPersistent, LocalFrontFrictionPt) == 56, "Offset mismatch for FDelMarVehicleInPersistent::LocalFrontFrictionPt");
static_assert(offsetof(FDelMarVehicleInPersistent, LocalRearFrictionPt) == 80, "Offset mismatch for FDelMarVehicleInPersistent::LocalRearFrictionPt");
static_assert(offsetof(FDelMarVehicleInPersistent, FrontMassRatio) == 104, "Offset mismatch for FDelMarVehicleInPersistent::FrontMassRatio");
static_assert(offsetof(FDelMarVehicleInPersistent, RearMassRatio) == 108, "Offset mismatch for FDelMarVehicleInPersistent::RearMassRatio");
static_assert(offsetof(FDelMarVehicleInPersistent, TopSpeedCurrentMultiplier) == 112, "Offset mismatch for FDelMarVehicleInPersistent::TopSpeedCurrentMultiplier");
static_assert(offsetof(FDelMarVehicleInPersistent, VehicleAttributes) == 116, "Offset mismatch for FDelMarVehicleInPersistent::VehicleAttributes");
static_assert(offsetof(FDelMarVehicleInPersistent, TireStates) == 432, "Offset mismatch for FDelMarVehicleInPersistent::TireStates");

// /Script/DelMarCore.DelMarVehicleInternalPersistent
// Kind: ScriptStruct; super: FortVehicleInternalPersistent
struct FDelMarVehicleInternalPersistent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarVehicleLandingData
// Kind: ScriptStruct; super: none
struct FDelMarVehicleLandingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarVehicleLandingLevel
// Kind: ScriptStruct; super: none
struct FDelMarVehicleLandingLevel
{
public:
    float MinForce; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SpeedChange; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleLandingLevel, MinForce) == 0, "Offset mismatch for FDelMarVehicleLandingLevel::MinForce");
static_assert(offsetof(FDelMarVehicleLandingLevel, SpeedChange) == 4, "Offset mismatch for FDelMarVehicleLandingLevel::SpeedChange");

// /Script/DelMarCore.DelMarVehicleNetworkInput
// Kind: ScriptStruct; super: none
struct FDelMarVehicleNetworkInput
{
public:
    std::int32_t FrameNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleNetworkInput, FrameNum) == 0, "Offset mismatch for FDelMarVehicleNetworkInput::FrameNum");
static_assert(offsetof(FDelMarVehicleNetworkInput, Input) == 8, "Offset mismatch for FDelMarVehicleNetworkInput::Input");

// /Script/DelMarCore.DelMarVehicleOutContinuous
// Kind: ScriptStruct; super: FortVehicleOutContinuous
struct FDelMarVehicleOutContinuous
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float SteeringAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t AverageSpringNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlatformVelocityDirection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleOutContinuous, SteeringAngle) == 8, "Offset mismatch for FDelMarVehicleOutContinuous::SteeringAngle");
static_assert(offsetof(FDelMarVehicleOutContinuous, AverageSpringNormal) == 16, "Offset mismatch for FDelMarVehicleOutContinuous::AverageSpringNormal");
static_assert(offsetof(FDelMarVehicleOutContinuous, PlatformVelocityDirection) == 40, "Offset mismatch for FDelMarVehicleOutContinuous::PlatformVelocityDirection");

// /Script/DelMarCore.DelMarVehicleOutPersistent
// Kind: ScriptStruct; super: FortVehicleOutPersistent
struct FDelMarVehicleOutPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAnyWheelsOnGround; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bCanDriveOnIncline (shared storage)
    // 0x0008 BoolProperty bIsAsyncCorrectingOrientation (shared storage)
    // 0x0008 BoolProperty bIsTouchingDrivableGround (shared storage)
    // 0x0008 BoolProperty bIsTouchingGroundWithoutWheels (shared storage)
    // 0x0008 BoolProperty bOnRoad (shared storage)
    // 0x0008 BoolProperty bPossiblyTouchingTop (shared storage)
    // 0x0008 BoolProperty bWheelsOnGround (shared storage)
    std::uint8_t bBoosting; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty bOnDirt (shared storage)
    // 0x0009 BoolProperty bOnGrass (shared storage)
    // 0x0009 BoolProperty bOnIce (shared storage)
    // 0x0009 BoolProperty bOnLandscape (shared storage)
    // 0x0009 BoolProperty bOnMud (shared storage)
    // 0x0009 BoolProperty bOnSnow (shared storage)
    // 0x0009 BoolProperty bOnVehicle (shared storage)
    std::uint8_t bStartedWithFullBoost; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x000B
    TArray<void*> TireSurfaces; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float TotalBrakingDelta; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGearIdx; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarVehicleOutPersistent, bAnyWheelsOnGround) == 8, "Offset mismatch for FDelMarVehicleOutPersistent::bAnyWheelsOnGround");
static_assert(offsetof(FDelMarVehicleOutPersistent, bBoosting) == 9, "Offset mismatch for FDelMarVehicleOutPersistent::bBoosting");
static_assert(offsetof(FDelMarVehicleOutPersistent, bStartedWithFullBoost) == 10, "Offset mismatch for FDelMarVehicleOutPersistent::bStartedWithFullBoost");
static_assert(offsetof(FDelMarVehicleOutPersistent, TireSurfaces) == 16, "Offset mismatch for FDelMarVehicleOutPersistent::TireSurfaces");
static_assert(offsetof(FDelMarVehicleOutPersistent, TotalBrakingDelta) == 32, "Offset mismatch for FDelMarVehicleOutPersistent::TotalBrakingDelta");
static_assert(offsetof(FDelMarVehicleOutPersistent, CurrentGearIdx) == 36, "Offset mismatch for FDelMarVehicleOutPersistent::CurrentGearIdx");

// /Script/DelMarCore.DelMarVehicleOversteerConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleOversteerConfig
{
public:
    float MinInput; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedSteer; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CappedAccumulatedSteerCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t AccumulatedSteerRateCurve[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    float AccumulatedSteerDecayRate; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float DriftImpulseForce; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDecayAccumulatedSteer; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearAccumulatedSteerOnDrift; // 0x00B5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleOversteerConfig, MinInput) == 0, "Offset mismatch for FDelMarVehicleOversteerConfig::MinInput");
static_assert(offsetof(FDelMarVehicleOversteerConfig, MaxAccumulatedSteer) == 4, "Offset mismatch for FDelMarVehicleOversteerConfig::MaxAccumulatedSteer");
static_assert(offsetof(FDelMarVehicleOversteerConfig, CappedAccumulatedSteerCurve) == 8, "Offset mismatch for FDelMarVehicleOversteerConfig::CappedAccumulatedSteerCurve");
static_assert(offsetof(FDelMarVehicleOversteerConfig, AccumulatedSteerRateCurve) == 88, "Offset mismatch for FDelMarVehicleOversteerConfig::AccumulatedSteerRateCurve");
static_assert(offsetof(FDelMarVehicleOversteerConfig, AccumulatedSteerDecayRate) == 168, "Offset mismatch for FDelMarVehicleOversteerConfig::AccumulatedSteerDecayRate");
static_assert(offsetof(FDelMarVehicleOversteerConfig, DriftImpulseForce) == 172, "Offset mismatch for FDelMarVehicleOversteerConfig::DriftImpulseForce");
static_assert(offsetof(FDelMarVehicleOversteerConfig, MinSpeed) == 176, "Offset mismatch for FDelMarVehicleOversteerConfig::MinSpeed");
static_assert(offsetof(FDelMarVehicleOversteerConfig, bDecayAccumulatedSteer) == 180, "Offset mismatch for FDelMarVehicleOversteerConfig::bDecayAccumulatedSteer");
static_assert(offsetof(FDelMarVehicleOversteerConfig, bClearAccumulatedSteerOnDrift) == 181, "Offset mismatch for FDelMarVehicleOversteerConfig::bClearAccumulatedSteerOnDrift");

// /Script/DelMarCore.DelMarVehicleReplay_FrameData
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplay_FrameData
{
public:
    std::int32_t FrameCaptureIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double SecondsSinceCountdownFinished; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Input[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Input_DM[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreSimRBState[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplay_FrameData, FrameCaptureIndex) == 0, "Offset mismatch for FDelMarVehicleReplay_FrameData::FrameCaptureIndex");
static_assert(offsetof(FDelMarVehicleReplay_FrameData, SecondsSinceCountdownFinished) == 8, "Offset mismatch for FDelMarVehicleReplay_FrameData::SecondsSinceCountdownFinished");
static_assert(offsetof(FDelMarVehicleReplay_FrameData, Input) == 16, "Offset mismatch for FDelMarVehicleReplay_FrameData::Input");
static_assert(offsetof(FDelMarVehicleReplay_FrameData, Input_DM) == 48, "Offset mismatch for FDelMarVehicleReplay_FrameData::Input_DM");
static_assert(offsetof(FDelMarVehicleReplay_FrameData, PreSimRBState) == 64, "Offset mismatch for FDelMarVehicleReplay_FrameData::PreSimRBState");

// /Script/DelMarCore.DelMarVehicleReplay_InputState_DM
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplay_InputState_DM
{
public:
    float AerialPitch; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDrift; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGroundedFlip; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflip; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShunt; // 0x0007 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleReplay_InputState_DM, AerialPitch) == 0, "Offset mismatch for FDelMarVehicleReplay_InputState_DM::AerialPitch");
static_assert(offsetof(FDelMarVehicleReplay_InputState_DM, bDrift) == 4, "Offset mismatch for FDelMarVehicleReplay_InputState_DM::bDrift");
static_assert(offsetof(FDelMarVehicleReplay_InputState_DM, bGroundedFlip) == 5, "Offset mismatch for FDelMarVehicleReplay_InputState_DM::bGroundedFlip");
static_assert(offsetof(FDelMarVehicleReplay_InputState_DM, bKickflip) == 6, "Offset mismatch for FDelMarVehicleReplay_InputState_DM::bKickflip");
static_assert(offsetof(FDelMarVehicleReplay_InputState_DM, bShunt) == 7, "Offset mismatch for FDelMarVehicleReplay_InputState_DM::bShunt");

// /Script/DelMarCore.DelMarVehicleReplay_InputState_RL
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplay_InputState_RL
{
public:
    float Throttle; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Steer; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Roll; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DodgeForward; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DodgeRight; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHandbrake; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJump; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoost; // 0x001E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, Throttle) == 0, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::Throttle");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, Steer) == 4, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::Steer");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, Pitch) == 8, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::Pitch");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, Yaw) == 12, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::Yaw");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, Roll) == 16, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::Roll");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, DodgeForward) == 20, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::DodgeForward");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, DodgeRight) == 24, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::DodgeRight");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, bHandbrake) == 28, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::bHandbrake");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, bJump) == 29, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::bJump");
static_assert(offsetof(FDelMarVehicleReplay_InputState_RL, bBoost) == 30, "Offset mismatch for FDelMarVehicleReplay_InputState_RL::bBoost");

// /Script/DelMarCore.DelMarVehicleReplay_RigidBodyState
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplay_RigidBodyState
{
public:
    std::uint8_t Location[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t LinearVelocity[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplay_RigidBodyState, Location) == 0, "Offset mismatch for FDelMarVehicleReplay_RigidBodyState::Location");
static_assert(offsetof(FDelMarVehicleReplay_RigidBodyState, Rotation) == 32, "Offset mismatch for FDelMarVehicleReplay_RigidBodyState::Rotation");
static_assert(offsetof(FDelMarVehicleReplay_RigidBodyState, LinearVelocity) == 64, "Offset mismatch for FDelMarVehicleReplay_RigidBodyState::LinearVelocity");
static_assert(offsetof(FDelMarVehicleReplay_RigidBodyState, AngularVelocity) == 88, "Offset mismatch for FDelMarVehicleReplay_RigidBodyState::AngularVelocity");

// /Script/DelMarCore.DelMarVehicleReplicatedState
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplicatedState
{
public:
    std::int32_t FrameNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Input[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t RBState[0x80]; // 0x0050 (Size: 0x80, Type: StructProperty)
    std::uint8_t AutoUpright[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Drafting[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Drift[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t DriftBoost[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t Drive[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t Jump[0x8]; // 0x0188 (Size: 0x8, Type: StructProperty)
    std::uint8_t Kickflip[0x60]; // 0x0190 (Size: 0x60, Type: StructProperty)
    std::uint8_t Oversteer[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Reattachment[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Rubberbanding[0x4]; // 0x0220 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartlineBoost[0x14]; // 0x0224 (Size: 0x14, Type: StructProperty)
    std::uint8_t Strafe[0x10]; // 0x0238 (Size: 0x10, Type: StructProperty)
    std::uint8_t Turbo[0x18]; // 0x0248 (Size: 0x18, Type: StructProperty)
    std::uint8_t Underthrust[0xC]; // 0x0260 (Size: 0xC, Type: StructProperty)
    std::uint8_t AirControl[0xC]; // 0x026C (Size: 0xC, Type: StructProperty)
    std::uint8_t BufferData[0x1]; // 0x0278 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState, FrameNum) == 0, "Offset mismatch for FDelMarVehicleReplicatedState::FrameNum");
static_assert(offsetof(FDelMarVehicleReplicatedState, Input) == 8, "Offset mismatch for FDelMarVehicleReplicatedState::Input");
static_assert(offsetof(FDelMarVehicleReplicatedState, RBState) == 80, "Offset mismatch for FDelMarVehicleReplicatedState::RBState");
static_assert(offsetof(FDelMarVehicleReplicatedState, AutoUpright) == 208, "Offset mismatch for FDelMarVehicleReplicatedState::AutoUpright");
static_assert(offsetof(FDelMarVehicleReplicatedState, Drafting) == 240, "Offset mismatch for FDelMarVehicleReplicatedState::Drafting");
static_assert(offsetof(FDelMarVehicleReplicatedState, Drift) == 264, "Offset mismatch for FDelMarVehicleReplicatedState::Drift");
static_assert(offsetof(FDelMarVehicleReplicatedState, DriftBoost) == 312, "Offset mismatch for FDelMarVehicleReplicatedState::DriftBoost");
static_assert(offsetof(FDelMarVehicleReplicatedState, Drive) == 344, "Offset mismatch for FDelMarVehicleReplicatedState::Drive");
static_assert(offsetof(FDelMarVehicleReplicatedState, Jump) == 392, "Offset mismatch for FDelMarVehicleReplicatedState::Jump");
static_assert(offsetof(FDelMarVehicleReplicatedState, Kickflip) == 400, "Offset mismatch for FDelMarVehicleReplicatedState::Kickflip");
static_assert(offsetof(FDelMarVehicleReplicatedState, Oversteer) == 496, "Offset mismatch for FDelMarVehicleReplicatedState::Oversteer");
static_assert(offsetof(FDelMarVehicleReplicatedState, Reattachment) == 504, "Offset mismatch for FDelMarVehicleReplicatedState::Reattachment");
static_assert(offsetof(FDelMarVehicleReplicatedState, Rubberbanding) == 544, "Offset mismatch for FDelMarVehicleReplicatedState::Rubberbanding");
static_assert(offsetof(FDelMarVehicleReplicatedState, StartlineBoost) == 548, "Offset mismatch for FDelMarVehicleReplicatedState::StartlineBoost");
static_assert(offsetof(FDelMarVehicleReplicatedState, Strafe) == 568, "Offset mismatch for FDelMarVehicleReplicatedState::Strafe");
static_assert(offsetof(FDelMarVehicleReplicatedState, Turbo) == 584, "Offset mismatch for FDelMarVehicleReplicatedState::Turbo");
static_assert(offsetof(FDelMarVehicleReplicatedState, Underthrust) == 608, "Offset mismatch for FDelMarVehicleReplicatedState::Underthrust");
static_assert(offsetof(FDelMarVehicleReplicatedState, AirControl) == 620, "Offset mismatch for FDelMarVehicleReplicatedState::AirControl");
static_assert(offsetof(FDelMarVehicleReplicatedState, BufferData) == 632, "Offset mismatch for FDelMarVehicleReplicatedState::BufferData");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Ability
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplicatedState_Ability
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Ability, bActive) == 0, "Offset mismatch for FDelMarVehicleReplicatedState_Ability::bActive");
static_assert(offsetof(FDelMarVehicleReplicatedState_Ability, duration) == 4, "Offset mismatch for FDelMarVehicleReplicatedState_Ability::duration");

// /Script/DelMarCore.DelMarVehicleReplicatedState_AirControl
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_AirControl
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float AerialDivingBonusSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_AirControl, AerialDivingBonusSpeed) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_AirControl::AerialDivingBonusSpeed");

// /Script/DelMarCore.DelMarVehicleReplicatedState_AutoUpright
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_AutoUpright
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetVehicleUp[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_AutoUpright, TargetVehicleUp) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_AutoUpright::TargetVehicleUp");

// /Script/DelMarCore.DelMarVehicleReplicatedState_BonusSpeedAbility
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_BonusSpeedAbility
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float AppliedBonusSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_BonusSpeedAbility, AppliedBonusSpeed) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_BonusSpeedAbility::AppliedBonusSpeed");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Drafting
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_BonusSpeedAbility
struct FDelMarVehicleReplicatedState_Drafting
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float AccumulatedLosingSpeedSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AccumulatedStartDraftingSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TotalEarnedBonusSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Drafting, AccumulatedLosingSpeedSeconds) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_Drafting::AccumulatedLosingSpeedSeconds");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drafting, AccumulatedStartDraftingSeconds) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_Drafting::AccumulatedStartDraftingSeconds");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drafting, TotalEarnedBonusSpeed) == 20, "Offset mismatch for FDelMarVehicleReplicatedState_Drafting::TotalEarnedBonusSpeed");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Drift
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_Drift
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float CurrentRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftState; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float TargetDriftSide; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    std::uint8_t InitialImpulseTorque[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Drift, CurrentRotationAngle) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Drift::CurrentRotationAngle");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drift, DriftState) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_Drift::DriftState");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drift, TargetDriftSide) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_Drift::TargetDriftSide");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drift, InitialImpulseTorque) == 24, "Offset mismatch for FDelMarVehicleReplicatedState_Drift::InitialImpulseTorque");

// /Script/DelMarCore.DelMarVehicleReplicatedState_DriftBoost
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_BonusSpeedAbility
struct FDelMarVehicleReplicatedState_DriftBoost
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float AccumulatedDriftBoostSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AccumulatedWaitingPeriodSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TotalEarnedBonusSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float QueuedBonusSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float QueuedBoostExtraSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_DriftBoost, AccumulatedDriftBoostSeconds) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_DriftBoost::AccumulatedDriftBoostSeconds");
static_assert(offsetof(FDelMarVehicleReplicatedState_DriftBoost, AccumulatedWaitingPeriodSeconds) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_DriftBoost::AccumulatedWaitingPeriodSeconds");
static_assert(offsetof(FDelMarVehicleReplicatedState_DriftBoost, TotalEarnedBonusSpeed) == 20, "Offset mismatch for FDelMarVehicleReplicatedState_DriftBoost::TotalEarnedBonusSpeed");
static_assert(offsetof(FDelMarVehicleReplicatedState_DriftBoost, QueuedBonusSpeed) == 24, "Offset mismatch for FDelMarVehicleReplicatedState_DriftBoost::QueuedBonusSpeed");
static_assert(offsetof(FDelMarVehicleReplicatedState_DriftBoost, QueuedBoostExtraSeconds) == 28, "Offset mismatch for FDelMarVehicleReplicatedState_DriftBoost::QueuedBoostExtraSeconds");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Drive
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplicatedState_Drive
{
public:
    float BaseTargetSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertedSteeringActive; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t bDisableDriveForces; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t bDisableWheelFriction; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t LastAverageWheelWorldContactNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float MinimumLandingSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, BaseTargetSpeed) == 0, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::BaseTargetSpeed");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, bInvertedSteeringActive) == 4, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::bInvertedSteeringActive");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, bDisableDriveForces) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::bDisableDriveForces");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, bDisableWheelFriction) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::bDisableWheelFriction");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, LastAverageWheelWorldContactNormal) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::LastAverageWheelWorldContactNormal");
static_assert(offsetof(FDelMarVehicleReplicatedState_Drive, MinimumLandingSpeed) == 40, "Offset mismatch for FDelMarVehicleReplicatedState_Drive::MinimumLandingSpeed");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Kickflip
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_Kickflip
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RelativeUpDirection[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t KickDirection[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLeftSide; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTakeLongestRoll; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotateTowardsVelocity; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanStartLongRoll; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::int32_t StartingRollSign; // 0x003C (Size: 0x4, Type: IntProperty)
    float KickflipKeybindPressTime; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t ActivationCharges; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartingPrimaryDirection[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, RelativeUpDirection) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::RelativeUpDirection");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, KickDirection) == 32, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::KickDirection");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, bLeftSide) == 56, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::bLeftSide");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, bTakeLongestRoll) == 57, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::bTakeLongestRoll");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, bRotateTowardsVelocity) == 58, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::bRotateTowardsVelocity");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, bCanStartLongRoll) == 59, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::bCanStartLongRoll");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, StartingRollSign) == 60, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::StartingRollSign");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, KickflipKeybindPressTime) == 64, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::KickflipKeybindPressTime");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, ActivationCharges) == 68, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::ActivationCharges");
static_assert(offsetof(FDelMarVehicleReplicatedState_Kickflip, StartingPrimaryDirection) == 72, "Offset mismatch for FDelMarVehicleReplicatedState_Kickflip::StartingPrimaryDirection");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Oversteer
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplicatedState_Oversteer
{
public:
    float AccumulatedSteer; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Oversteer, AccumulatedSteer) == 0, "Offset mismatch for FDelMarVehicleReplicatedState_Oversteer::AccumulatedSteer");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Reattachment
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_Reattachment
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AttachmentDirection[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanActivate; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Reattachment, AttachmentDirection) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Reattachment::AttachmentDirection");
static_assert(offsetof(FDelMarVehicleReplicatedState_Reattachment, bCanActivate) == 32, "Offset mismatch for FDelMarVehicleReplicatedState_Reattachment::bCanActivate");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Rubberbanding
// Kind: ScriptStruct; super: none
struct FDelMarVehicleReplicatedState_Rubberbanding
{
public:
    float AppliedBonusSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Rubberbanding, AppliedBonusSpeed) == 0, "Offset mismatch for FDelMarVehicleReplicatedState_Rubberbanding::AppliedBonusSpeed");

// /Script/DelMarCore.DelMarVehicleReplicatedState_StartlineBoost
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_BonusSpeedAbility
struct FDelMarVehicleReplicatedState_StartlineBoost
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float PercentageMaxBonusSpeedEarned; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFailedAttempt; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_StartlineBoost, PercentageMaxBonusSpeedEarned) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_StartlineBoost::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FDelMarVehicleReplicatedState_StartlineBoost, bFailedAttempt) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_StartlineBoost::bFailedAttempt");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Strafe
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_Strafe
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bLeftSide; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float StrafeKeybindPressTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Strafe, bLeftSide) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Strafe::bLeftSide");
static_assert(offsetof(FDelMarVehicleReplicatedState_Strafe, StrafeKeybindPressTime) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_Strafe::StrafeKeybindPressTime");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Turbo
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_BonusSpeedAbility
struct FDelMarVehicleReplicatedState_Turbo
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::int32_t LastBonusZoneInteractionIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bSuccessfulBonusZone; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float AdditionalActiveSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Turbo, LastBonusZoneInteractionIndex) == 12, "Offset mismatch for FDelMarVehicleReplicatedState_Turbo::LastBonusZoneInteractionIndex");
static_assert(offsetof(FDelMarVehicleReplicatedState_Turbo, bSuccessfulBonusZone) == 16, "Offset mismatch for FDelMarVehicleReplicatedState_Turbo::bSuccessfulBonusZone");
static_assert(offsetof(FDelMarVehicleReplicatedState_Turbo, AdditionalActiveSeconds) == 20, "Offset mismatch for FDelMarVehicleReplicatedState_Turbo::AdditionalActiveSeconds");

// /Script/DelMarCore.DelMarVehicleReplicatedState_Underthrust
// Kind: ScriptStruct; super: DelMarVehicleReplicatedState_Ability
struct FDelMarVehicleReplicatedState_Underthrust
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float RemainingThrustSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleReplicatedState_Underthrust, RemainingThrustSeconds) == 8, "Offset mismatch for FDelMarVehicleReplicatedState_Underthrust::RemainingThrustSeconds");

// /Script/DelMarCore.DelMarVehicleRigidBodyConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleRigidBodyConfig
{
public:
    std::uint8_t bApplyGlobalBodySettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LinearDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float VehicleMass; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNotifyRigidBodyCollisions; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSmoothEdgeCollisionsEnabled; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCCD; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    std::uint8_t CenterOfMassOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSuspensionIgnoresBodyCollision; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleRigidBodyConfig, bApplyGlobalBodySettings) == 0, "Offset mismatch for FDelMarVehicleRigidBodyConfig::bApplyGlobalBodySettings");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, LinearDamping) == 4, "Offset mismatch for FDelMarVehicleRigidBodyConfig::LinearDamping");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, AngularDamping) == 8, "Offset mismatch for FDelMarVehicleRigidBodyConfig::AngularDamping");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, VehicleMass) == 12, "Offset mismatch for FDelMarVehicleRigidBodyConfig::VehicleMass");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, bNotifyRigidBodyCollisions) == 16, "Offset mismatch for FDelMarVehicleRigidBodyConfig::bNotifyRigidBodyCollisions");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, bSmoothEdgeCollisionsEnabled) == 17, "Offset mismatch for FDelMarVehicleRigidBodyConfig::bSmoothEdgeCollisionsEnabled");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, bUseCCD) == 18, "Offset mismatch for FDelMarVehicleRigidBodyConfig::bUseCCD");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, CenterOfMassOffset) == 24, "Offset mismatch for FDelMarVehicleRigidBodyConfig::CenterOfMassOffset");
static_assert(offsetof(FDelMarVehicleRigidBodyConfig, bSuspensionIgnoresBodyCollision) == 48, "Offset mismatch for FDelMarVehicleRigidBodyConfig::bSuspensionIgnoresBodyCollision");

// /Script/DelMarCore.DelMarVehicleRuntimeConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleRuntimeConfig
{
public:
    std::uint8_t bCollisionDemosEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleDisablesVehicleCollision; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float SecondsToSetIdle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleCollisionsGlobalOverride; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyOverlapFilter; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleRuntimeConfig, bCollisionDemosEnabled) == 0, "Offset mismatch for FDelMarVehicleRuntimeConfig::bCollisionDemosEnabled");
static_assert(offsetof(FDelMarVehicleRuntimeConfig, bIdleDisablesVehicleCollision) == 1, "Offset mismatch for FDelMarVehicleRuntimeConfig::bIdleDisablesVehicleCollision");
static_assert(offsetof(FDelMarVehicleRuntimeConfig, SecondsToSetIdle) == 4, "Offset mismatch for FDelMarVehicleRuntimeConfig::SecondsToSetIdle");
static_assert(offsetof(FDelMarVehicleRuntimeConfig, VehicleCollisionsGlobalOverride) == 8, "Offset mismatch for FDelMarVehicleRuntimeConfig::VehicleCollisionsGlobalOverride");
static_assert(offsetof(FDelMarVehicleRuntimeConfig, bApplyOverlapFilter) == 9, "Offset mismatch for FDelMarVehicleRuntimeConfig::bApplyOverlapFilter");

// /Script/DelMarCore.DelMarVehicleSkydivingData
// Kind: ScriptStruct; super: none
struct FDelMarVehicleSkydivingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarVehicleSpawnInfo
// Kind: ScriptStruct; super: none
struct FDelMarVehicleSpawnInfo
{
public:
    std::uint8_t bFirstVehicleForPlayer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousVehicleDemolished; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    double ServerSpawnTime; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarVehicleSpawnInfo, bFirstVehicleForPlayer) == 0, "Offset mismatch for FDelMarVehicleSpawnInfo::bFirstVehicleForPlayer");
static_assert(offsetof(FDelMarVehicleSpawnInfo, bPreviousVehicleDemolished) == 1, "Offset mismatch for FDelMarVehicleSpawnInfo::bPreviousVehicleDemolished");
static_assert(offsetof(FDelMarVehicleSpawnInfo, ServerSpawnTime) == 8, "Offset mismatch for FDelMarVehicleSpawnInfo::ServerSpawnTime");

// /Script/DelMarCore.DelMarVehicleSuspensionConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleSuspensionConfig
{
public:
    float MaxRaise; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxDrop; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DampingCompression; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DampingRelaxation; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleSuspensionConfig, MaxRaise) == 0, "Offset mismatch for FDelMarVehicleSuspensionConfig::MaxRaise");
static_assert(offsetof(FDelMarVehicleSuspensionConfig, MaxDrop) == 4, "Offset mismatch for FDelMarVehicleSuspensionConfig::MaxDrop");
static_assert(offsetof(FDelMarVehicleSuspensionConfig, Stiffness) == 8, "Offset mismatch for FDelMarVehicleSuspensionConfig::Stiffness");
static_assert(offsetof(FDelMarVehicleSuspensionConfig, DampingCompression) == 12, "Offset mismatch for FDelMarVehicleSuspensionConfig::DampingCompression");
static_assert(offsetof(FDelMarVehicleSuspensionConfig, DampingRelaxation) == 16, "Offset mismatch for FDelMarVehicleSuspensionConfig::DampingRelaxation");

// /Script/DelMarCore.DelMarVehicleTurboConfig
// Kind: ScriptStruct; super: none
struct FDelMarVehicleTurboConfig
{
public:
    float MaxActiveTimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InitialImpulseForce; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinBaseTargetSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetSpeedModifier[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> BonusZones; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float BonusZoneImpulseForce; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float BonusZoneSpeedDecaySeconds; // 0x003C (Size: 0x4, Type: FloatProperty)
    float SuccessfulBonusZoneHitSeconds; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float ApproachingBonusZoneSeconds; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxMissingZoneSeconds; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxNumCharges; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ChargeRegenRateSeconds; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RaceStartCharges; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float LapCompleteCharges; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TurboGainedForDriftBoostPotential; // 0x005C (Size: 0x4, Type: FloatProperty)
    float TurboGainedPerSecondAtMaxDriftPotential; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MaxTurboChargesFromDrift; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTerrainInvulnerabilityDuringTurbo; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleTurboConfig, MaxActiveTimeSeconds) == 0, "Offset mismatch for FDelMarVehicleTurboConfig::MaxActiveTimeSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, CooldownSeconds) == 4, "Offset mismatch for FDelMarVehicleTurboConfig::CooldownSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, InitialImpulseForce) == 8, "Offset mismatch for FDelMarVehicleTurboConfig::InitialImpulseForce");
static_assert(offsetof(FDelMarVehicleTurboConfig, MinBaseTargetSpeed) == 12, "Offset mismatch for FDelMarVehicleTurboConfig::MinBaseTargetSpeed");
static_assert(offsetof(FDelMarVehicleTurboConfig, TargetSpeedModifier) == 16, "Offset mismatch for FDelMarVehicleTurboConfig::TargetSpeedModifier");
static_assert(offsetof(FDelMarVehicleTurboConfig, BonusZones) == 40, "Offset mismatch for FDelMarVehicleTurboConfig::BonusZones");
static_assert(offsetof(FDelMarVehicleTurboConfig, BonusZoneImpulseForce) == 56, "Offset mismatch for FDelMarVehicleTurboConfig::BonusZoneImpulseForce");
static_assert(offsetof(FDelMarVehicleTurboConfig, BonusZoneSpeedDecaySeconds) == 60, "Offset mismatch for FDelMarVehicleTurboConfig::BonusZoneSpeedDecaySeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, SuccessfulBonusZoneHitSeconds) == 64, "Offset mismatch for FDelMarVehicleTurboConfig::SuccessfulBonusZoneHitSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, ApproachingBonusZoneSeconds) == 68, "Offset mismatch for FDelMarVehicleTurboConfig::ApproachingBonusZoneSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, MaxMissingZoneSeconds) == 72, "Offset mismatch for FDelMarVehicleTurboConfig::MaxMissingZoneSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, MaxNumCharges) == 76, "Offset mismatch for FDelMarVehicleTurboConfig::MaxNumCharges");
static_assert(offsetof(FDelMarVehicleTurboConfig, ChargeRegenRateSeconds) == 80, "Offset mismatch for FDelMarVehicleTurboConfig::ChargeRegenRateSeconds");
static_assert(offsetof(FDelMarVehicleTurboConfig, RaceStartCharges) == 84, "Offset mismatch for FDelMarVehicleTurboConfig::RaceStartCharges");
static_assert(offsetof(FDelMarVehicleTurboConfig, LapCompleteCharges) == 88, "Offset mismatch for FDelMarVehicleTurboConfig::LapCompleteCharges");
static_assert(offsetof(FDelMarVehicleTurboConfig, TurboGainedForDriftBoostPotential) == 92, "Offset mismatch for FDelMarVehicleTurboConfig::TurboGainedForDriftBoostPotential");
static_assert(offsetof(FDelMarVehicleTurboConfig, TurboGainedPerSecondAtMaxDriftPotential) == 96, "Offset mismatch for FDelMarVehicleTurboConfig::TurboGainedPerSecondAtMaxDriftPotential");
static_assert(offsetof(FDelMarVehicleTurboConfig, MaxTurboChargesFromDrift) == 100, "Offset mismatch for FDelMarVehicleTurboConfig::MaxTurboChargesFromDrift");
static_assert(offsetof(FDelMarVehicleTurboConfig, bTerrainInvulnerabilityDuringTurbo) == 104, "Offset mismatch for FDelMarVehicleTurboConfig::bTerrainInvulnerabilityDuringTurbo");

// /Script/DelMarCore.DelMarVerbMessageBase
// Kind: ScriptStruct; super: VerbMessage
struct FDelMarVerbMessageBase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessageBase, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessageBase::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessageBase, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessageBase::GameModeId");
static_assert(offsetof(FDelMarVerbMessageBase, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessageBase::VehicleTags");
static_assert(offsetof(FDelMarVerbMessageBase, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessageBase::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessageBase, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessageBase::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_BeatPlayers
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_BeatPlayers
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t AmountOfPlayersBeat; // 0x0138 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVerbMessage_BeatPlayers, AmountOfPlayersBeat) == 312, "Offset mismatch for FDelMarVerbMessage_BeatPlayers::AmountOfPlayersBeat");

// /Script/DelMarCore.DelMarVerbMessage_BonusTurboActivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_BonusTurboActivated
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_BonusTurboActivated, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_BonusTurboActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_BonusTurboActivated, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_BonusTurboActivated::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_BonusTurboActivated, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_BonusTurboActivated::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_BonusTurboActivated, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_BonusTurboActivated::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_BonusTurboActivated, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_BonusTurboActivated::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_BoostPadBonusSpeedEnded
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_BoostPadBonusSpeedEnded
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_BoostPadBonusSpeedEnded, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_BoostPadBonusSpeedEnded::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_BoostPadBonusSpeedEnded, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_BoostPadBonusSpeedEnded::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_BoostPadBonusSpeedEnded, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_BoostPadBonusSpeedEnded::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_BoostPadBonusSpeedEnded, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_BoostPadBonusSpeedEnded::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_BoostPadBonusSpeedEnded, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_BoostPadBonusSpeedEnded::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_BoostPadHit
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_BoostPadHit
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_BoostPadHit, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_BoostPadHit::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_BoostPadHit, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_BoostPadHit::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_BoostPadHit, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_BoostPadHit::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_BoostPadHit, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_BoostPadHit::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_BoostPadHit, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_BoostPadHit::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_Demolished
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_Demolished
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_Demolished, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_Demolished::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_Demolished, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_Demolished::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_Demolished, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_Demolished::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_Demolished, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_Demolished::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_Demolished, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_Demolished::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_DistanceTraveled
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_DistanceTraveled
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float TotalDistance; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_DistanceTraveled, TotalDistance) == 312, "Offset mismatch for FDelMarVerbMessage_DistanceTraveled::TotalDistance");

// /Script/DelMarCore.DelMarVerbMessage_DraftActivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_DraftActivated
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_DraftActivated, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_DraftActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_DraftActivated, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_DraftActivated::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_DraftActivated, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_DraftActivated::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_DraftActivated, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_DraftActivated::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_DraftActivated, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_DraftActivated::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_DriftBoostActivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_DriftBoostActivated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float DriftBoostPercent; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_DriftBoostActivated, DriftBoostPercent) == 312, "Offset mismatch for FDelMarVerbMessage_DriftBoostActivated::DriftBoostPercent");

// /Script/DelMarCore.DelMarVerbMessage_DriftBoostDeactivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_DriftBoostDeactivated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float TotalDistance; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_DriftBoostDeactivated, TotalDistance) == 312, "Offset mismatch for FDelMarVerbMessage_DriftBoostDeactivated::TotalDistance");

// /Script/DelMarCore.DelMarVerbMessage_DriftComplete
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_DriftComplete
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float DriftDuration; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_DriftComplete, DriftDuration) == 312, "Offset mismatch for FDelMarVerbMessage_DriftComplete::DriftDuration");

// /Script/DelMarCore.DelMarVerbMessage_HighestSpeedUpdated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_HighestSpeedUpdated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float HighestSpeed; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_HighestSpeedUpdated, HighestSpeed) == 312, "Offset mismatch for FDelMarVerbMessage_HighestSpeedUpdated::HighestSpeed");

// /Script/DelMarCore.DelMarVerbMessage_InitialTurboActivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_InitialTurboActivated
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_InitialTurboActivated, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_InitialTurboActivated::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_InitialTurboActivated, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_InitialTurboActivated::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_InitialTurboActivated, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_InitialTurboActivated::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_InitialTurboActivated, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_InitialTurboActivated::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_InitialTurboActivated, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_InitialTurboActivated::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_JellyHit
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_JellyHit
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_JellyHit, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_JellyHit::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_JellyHit, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_JellyHit::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_JellyHit, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_JellyHit::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_JellyHit, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_JellyHit::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_JellyHit, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_JellyHit::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_Kickflipped
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_Kickflipped
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t Direction; // 0x0138 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarVerbMessage_Kickflipped, Direction) == 312, "Offset mismatch for FDelMarVerbMessage_Kickflipped::Direction");

// /Script/DelMarCore.DelMarVerbMessage_LapComplete
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_LapComplete
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    double LapCompleteTime; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LapCount; // 0x0140 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LapPlacement; // 0x0141 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVerbMessage_LapComplete, LapCompleteTime) == 312, "Offset mismatch for FDelMarVerbMessage_LapComplete::LapCompleteTime");
static_assert(offsetof(FDelMarVerbMessage_LapComplete, LapCount) == 320, "Offset mismatch for FDelMarVerbMessage_LapComplete::LapCount");
static_assert(offsetof(FDelMarVerbMessage_LapComplete, LapPlacement) == 321, "Offset mismatch for FDelMarVerbMessage_LapComplete::LapPlacement");

// /Script/DelMarCore.DelMarVerbMessage_LapStarted
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_LapStarted
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_LapStarted, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_LapStarted::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_LapStarted, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_LapStarted::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_LapStarted, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_LapStarted::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_LapStarted, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_LapStarted::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_LapStarted, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_LapStarted::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_PlacementUpdated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_PlacementUpdated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t CurrentPosition; // 0x0138 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PositionChangeInfo; // 0x0139 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarVerbMessage_PlacementUpdated, CurrentPosition) == 312, "Offset mismatch for FDelMarVerbMessage_PlacementUpdated::CurrentPosition");
static_assert(offsetof(FDelMarVerbMessage_PlacementUpdated, PositionChangeInfo) == 313, "Offset mismatch for FDelMarVerbMessage_PlacementUpdated::PositionChangeInfo");

// /Script/DelMarCore.DelMarVerbMessage_PlayedDelMarExperience
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_PlayedDelMarExperience
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_PlayedDelMarExperience, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_PlayedDelMarExperience::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_PlayedDelMarExperience, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_PlayedDelMarExperience::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_PlayedDelMarExperience, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_PlayedDelMarExperience::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_PlayedDelMarExperience, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_PlayedDelMarExperience::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_PlayedDelMarExperience, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_PlayedDelMarExperience::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_RaceFinished
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_RaceFinished
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    double FinishTime; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FinalPlacement; // 0x0140 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PlayerRank; // 0x0141 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0142
    std::uint8_t JellyHazardInfo; // 0x0144 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0145
    std::uint8_t DemolishedInfo; // 0x0148 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarVerbMessage_RaceFinished, FinishTime) == 312, "Offset mismatch for FDelMarVerbMessage_RaceFinished::FinishTime");
static_assert(offsetof(FDelMarVerbMessage_RaceFinished, FinalPlacement) == 320, "Offset mismatch for FDelMarVerbMessage_RaceFinished::FinalPlacement");
static_assert(offsetof(FDelMarVerbMessage_RaceFinished, PlayerRank) == 321, "Offset mismatch for FDelMarVerbMessage_RaceFinished::PlayerRank");
static_assert(offsetof(FDelMarVerbMessage_RaceFinished, JellyHazardInfo) == 324, "Offset mismatch for FDelMarVerbMessage_RaceFinished::JellyHazardInfo");
static_assert(offsetof(FDelMarVerbMessage_RaceFinished, DemolishedInfo) == 328, "Offset mismatch for FDelMarVerbMessage_RaceFinished::DemolishedInfo");

// /Script/DelMarCore.DelMarVerbMessage_RankAchieved
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_RankAchieved
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::int32_t RankAchieved; // 0x0138 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarVerbMessage_RankAchieved, RankAchieved) == 312, "Offset mismatch for FDelMarVerbMessage_RankAchieved::RankAchieved");

// /Script/DelMarCore.DelMarVerbMessage_RunComplete
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_RunComplete
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    double FinishTime; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FinalPlacement; // 0x0140 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0141
    std::uint8_t JellyHazardInfo; // 0x0144 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0145
    std::uint8_t DemolishedInfo; // 0x0148 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarVerbMessage_RunComplete, FinishTime) == 312, "Offset mismatch for FDelMarVerbMessage_RunComplete::FinishTime");
static_assert(offsetof(FDelMarVerbMessage_RunComplete, FinalPlacement) == 320, "Offset mismatch for FDelMarVerbMessage_RunComplete::FinalPlacement");
static_assert(offsetof(FDelMarVerbMessage_RunComplete, JellyHazardInfo) == 324, "Offset mismatch for FDelMarVerbMessage_RunComplete::JellyHazardInfo");
static_assert(offsetof(FDelMarVerbMessage_RunComplete, DemolishedInfo) == 328, "Offset mismatch for FDelMarVerbMessage_RunComplete::DemolishedInfo");

// /Script/DelMarCore.DelMarVerbMessage_StartlineBoostActivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_StartlineBoostActivated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float StartLineBoostPercent; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_StartlineBoostActivated, StartLineBoostPercent) == 312, "Offset mismatch for FDelMarVerbMessage_StartlineBoostActivated::StartLineBoostPercent");

// /Script/DelMarCore.DelMarVerbMessage_StartlineBoostPercentEarned
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_StartlineBoostPercentEarned
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float PercentEarned; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_StartlineBoostPercentEarned, PercentEarned) == 312, "Offset mismatch for FDelMarVerbMessage_StartlineBoostPercentEarned::PercentEarned");

// /Script/DelMarCore.DelMarVerbMessage_UnderthrustDeactivated
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_UnderthrustDeactivated
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float PercentUsed; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_UnderthrustDeactivated, PercentUsed) == 312, "Offset mismatch for FDelMarVerbMessage_UnderthrustDeactivated::PercentUsed");

// /Script/DelMarCore.DelMarVerbMessage_UnderthrustPercentUsed
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_UnderthrustPercentUsed
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float PercentUsed; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_UnderthrustPercentUsed, PercentUsed) == 312, "Offset mismatch for FDelMarVerbMessage_UnderthrustPercentUsed::PercentUsed");

// /Script/DelMarCore.DelMarVerbMessage_VehicleJumped
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_VehicleJumped
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t LevelDescriptionId[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t GameModeId[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t VehicleTags[0x38]; // 0x00E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t RankedPlaylistInfo; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    TArray<void*> Cosmetics; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVerbMessage_VehicleJumped, LevelDescriptionId) == 120, "Offset mismatch for FDelMarVerbMessage_VehicleJumped::LevelDescriptionId");
static_assert(offsetof(FDelMarVerbMessage_VehicleJumped, GameModeId) == 176, "Offset mismatch for FDelMarVerbMessage_VehicleJumped::GameModeId");
static_assert(offsetof(FDelMarVerbMessage_VehicleJumped, VehicleTags) == 232, "Offset mismatch for FDelMarVerbMessage_VehicleJumped::VehicleTags");
static_assert(offsetof(FDelMarVerbMessage_VehicleJumped, RankedPlaylistInfo) == 288, "Offset mismatch for FDelMarVerbMessage_VehicleJumped::RankedPlaylistInfo");
static_assert(offsetof(FDelMarVerbMessage_VehicleJumped, Cosmetics) == 296, "Offset mismatch for FDelMarVerbMessage_VehicleJumped::Cosmetics");

// /Script/DelMarCore.DelMarVerbMessage_VehicleLanded
// Kind: ScriptStruct; super: DelMarVerbMessageBase
struct FDelMarVerbMessage_VehicleLanded
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float TimeInAir; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVerbMessage_VehicleLanded, TimeInAir) == 312, "Offset mismatch for FDelMarVerbMessage_VehicleLanded::TimeInAir");

// /Script/DelMarCore.DelMarWorldBonusSpeedGroup
// Kind: ScriptStruct; super: none
struct FDelMarWorldBonusSpeedGroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarWorldBonusSpeedSourceCap
// Kind: ScriptStruct; super: none
struct FDelMarWorldBonusSpeedSourceCap
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t StackCap; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarWorldBonusSpeedSourceCap, Source) == 0, "Offset mismatch for FDelMarWorldBonusSpeedSourceCap::Source");
static_assert(offsetof(FDelMarWorldBonusSpeedSourceCap, StackCap) == 4, "Offset mismatch for FDelMarWorldBonusSpeedSourceCap::StackCap");

// /Script/DelMarCore.DelMarWorldBonusSpeedStack
// Kind: ScriptStruct; super: none
struct FDelMarWorldBonusSpeedStack
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float BonusSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyForce; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t GroupID; // 0x0010 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> ActorSource; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarWorldBonusSpeedStack, Source) == 0, "Offset mismatch for FDelMarWorldBonusSpeedStack::Source");
static_assert(offsetof(FDelMarWorldBonusSpeedStack, BonusSpeed) == 4, "Offset mismatch for FDelMarWorldBonusSpeedStack::BonusSpeed");
static_assert(offsetof(FDelMarWorldBonusSpeedStack, duration) == 8, "Offset mismatch for FDelMarWorldBonusSpeedStack::duration");
static_assert(offsetof(FDelMarWorldBonusSpeedStack, bApplyForce) == 12, "Offset mismatch for FDelMarWorldBonusSpeedStack::bApplyForce");
static_assert(offsetof(FDelMarWorldBonusSpeedStack, GroupID) == 16, "Offset mismatch for FDelMarWorldBonusSpeedStack::GroupID");
static_assert(offsetof(FDelMarWorldBonusSpeedStack, ActorSource) == 20, "Offset mismatch for FDelMarWorldBonusSpeedStack::ActorSource");

// /Script/DelMarCore.DriveHazardInfo
// Kind: ScriptStruct; super: none
struct FDriveHazardInfo
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> HazardTrackSplineComponent; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDriveHazardInfo, Actor) == 0, "Offset mismatch for FDriveHazardInfo::Actor");
static_assert(offsetof(FDriveHazardInfo, HazardTrackSplineComponent) == 8, "Offset mismatch for FDriveHazardInfo::HazardTrackSplineComponent");

// /Script/DelMarCore.GhostReplayFrame
// Kind: ScriptStruct; super: none
struct FGhostReplayFrame
{
public:
    std::uint8_t Location[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    double time; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FGhostReplayFrame, Location) == 0, "Offset mismatch for FGhostReplayFrame::Location");
static_assert(offsetof(FGhostReplayFrame, Rotation) == 32, "Offset mismatch for FGhostReplayFrame::Rotation");
static_assert(offsetof(FGhostReplayFrame, time) == 64, "Offset mismatch for FGhostReplayFrame::time");

// /Script/DelMarCore.PhysicalMaterialAttributes_X
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialAttributes_X
{
public:
    TArray<void*> Attributes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicalMaterialAttributes_X, Attributes) == 0, "Offset mismatch for FPhysicalMaterialAttributes_X::Attributes");

// /Script/DelMarCore.DelMarAIController
// Kind: Class; super: AIController
class UDelMarAIController
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    FMulticastInlineDelegate OnCosmeticLoadoutChanged; // 0x03B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t DescriptorTag[0x8]; // 0x03C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t CharacterCosmeticLoadout[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t VehicleCosmeticLoadout[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VehicleArchetype[0x4]; // 0x0418 (Size: 0x4, Type: StructProperty)
    std::uint8_t BotSteerMethod; // 0x041C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x041D
    void* BTAssetToRunOnPawnAISpawned; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SkillLevelBehaviorTrees; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MinSkillLevelForRubberbanding; // 0x0438 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x043C
    void* OobTubePositionRenderingComponentClass; // 0x0440 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> DelMarVehicle; // 0x0448 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0450
    FMulticastInlineDelegate OnPawnDownedEvent; // 0x0460 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t DelMarBotControllerUID; // 0x0470 (Size: 0x4, Type: IntProperty)
    std::int32_t DelMarBotSkillLevel; // 0x0474 (Size: 0x4, Type: IntProperty)
    FString DelMarBotPlayerName; // 0x0478 (Size: 0x10, Type: StrProperty)
    void* DelMarAIService; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    void* PlayerBotPawn; // 0x0490 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAIController, OnCosmeticLoadoutChanged) == 944, "Offset mismatch for UDelMarAIController::OnCosmeticLoadoutChanged");
static_assert(offsetof(UDelMarAIController, DescriptorTag) == 960, "Offset mismatch for UDelMarAIController::DescriptorTag");
static_assert(offsetof(UDelMarAIController, CharacterCosmeticLoadout) == 968, "Offset mismatch for UDelMarAIController::CharacterCosmeticLoadout");
static_assert(offsetof(UDelMarAIController, VehicleCosmeticLoadout) == 1008, "Offset mismatch for UDelMarAIController::VehicleCosmeticLoadout");
static_assert(offsetof(UDelMarAIController, VehicleArchetype) == 1048, "Offset mismatch for UDelMarAIController::VehicleArchetype");
static_assert(offsetof(UDelMarAIController, BotSteerMethod) == 1052, "Offset mismatch for UDelMarAIController::BotSteerMethod");
static_assert(offsetof(UDelMarAIController, BTAssetToRunOnPawnAISpawned) == 1056, "Offset mismatch for UDelMarAIController::BTAssetToRunOnPawnAISpawned");
static_assert(offsetof(UDelMarAIController, SkillLevelBehaviorTrees) == 1064, "Offset mismatch for UDelMarAIController::SkillLevelBehaviorTrees");
static_assert(offsetof(UDelMarAIController, MinSkillLevelForRubberbanding) == 1080, "Offset mismatch for UDelMarAIController::MinSkillLevelForRubberbanding");
static_assert(offsetof(UDelMarAIController, OobTubePositionRenderingComponentClass) == 1088, "Offset mismatch for UDelMarAIController::OobTubePositionRenderingComponentClass");
static_assert(offsetof(UDelMarAIController, DelMarVehicle) == 1096, "Offset mismatch for UDelMarAIController::DelMarVehicle");
static_assert(offsetof(UDelMarAIController, OnPawnDownedEvent) == 1120, "Offset mismatch for UDelMarAIController::OnPawnDownedEvent");
static_assert(offsetof(UDelMarAIController, DelMarBotControllerUID) == 1136, "Offset mismatch for UDelMarAIController::DelMarBotControllerUID");
static_assert(offsetof(UDelMarAIController, DelMarBotSkillLevel) == 1140, "Offset mismatch for UDelMarAIController::DelMarBotSkillLevel");
static_assert(offsetof(UDelMarAIController, DelMarBotPlayerName) == 1144, "Offset mismatch for UDelMarAIController::DelMarBotPlayerName");
static_assert(offsetof(UDelMarAIController, DelMarAIService) == 1160, "Offset mismatch for UDelMarAIController::DelMarAIService");
static_assert(offsetof(UDelMarAIController, PlayerBotPawn) == 1168, "Offset mismatch for UDelMarAIController::PlayerBotPawn");

// /Script/DelMarCore.DelMarAIService
// Kind: Class; super: AthenaAIService
class UDelMarAIService
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CosmeticComponentClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleCosmeticLibrary[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bBotsUniqueIDUseValidAccountID; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t BotNameLibraryData[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    void* AIControllerClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MMRSpawnTablePtr[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t MaxBotFillRandomDeviation; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00F4
    TArray<void*> DelMarAIControllers; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> RaceManager; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RespawnManagerComponent; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TrackManager; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SortedSecondaryTracksAlongPrimary; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarAIService, CosmeticComponentClass) == 120, "Offset mismatch for UDelMarAIService::CosmeticComponentClass");
static_assert(offsetof(UDelMarAIService, VehicleCosmeticLibrary) == 128, "Offset mismatch for UDelMarAIService::VehicleCosmeticLibrary");
static_assert(offsetof(UDelMarAIService, bBotsUniqueIDUseValidAccountID) == 160, "Offset mismatch for UDelMarAIService::bBotsUniqueIDUseValidAccountID");
static_assert(offsetof(UDelMarAIService, BotNameLibraryData) == 168, "Offset mismatch for UDelMarAIService::BotNameLibraryData");
static_assert(offsetof(UDelMarAIService, AIControllerClass) == 200, "Offset mismatch for UDelMarAIService::AIControllerClass");
static_assert(offsetof(UDelMarAIService, MMRSpawnTablePtr) == 208, "Offset mismatch for UDelMarAIService::MMRSpawnTablePtr");
static_assert(offsetof(UDelMarAIService, MaxBotFillRandomDeviation) == 240, "Offset mismatch for UDelMarAIService::MaxBotFillRandomDeviation");
static_assert(offsetof(UDelMarAIService, DelMarAIControllers) == 248, "Offset mismatch for UDelMarAIService::DelMarAIControllers");
static_assert(offsetof(UDelMarAIService, RaceManager) == 264, "Offset mismatch for UDelMarAIService::RaceManager");
static_assert(offsetof(UDelMarAIService, RespawnManagerComponent) == 272, "Offset mismatch for UDelMarAIService::RespawnManagerComponent");
static_assert(offsetof(UDelMarAIService, TrackManager) == 280, "Offset mismatch for UDelMarAIService::TrackManager");
static_assert(offsetof(UDelMarAIService, SortedSecondaryTracksAlongPrimary) == 288, "Offset mismatch for UDelMarAIService::SortedSecondaryTracksAlongPrimary");

// /Script/DelMarCore.DelMarAIVehicleCosmeticLibraryData
// Kind: Class; super: PrimaryDataAsset
class UDelMarAIVehicleCosmeticLibraryData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PredefineVehiclCosmeticSetsDataTable[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CachedArchetypeTag[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarAIVehicleCosmeticLibraryData, PredefineVehiclCosmeticSetsDataTable) == 40, "Offset mismatch for UDelMarAIVehicleCosmeticLibraryData::PredefineVehiclCosmeticSetsDataTable");
static_assert(offsetof(UDelMarAIVehicleCosmeticLibraryData, CachedArchetypeTag) == 72, "Offset mismatch for UDelMarAIVehicleCosmeticLibraryData::CachedArchetypeTag");

// /Script/DelMarCore.DelMarActorMover
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarActorMover
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    void* ActorClass; // 0x0B28 (Size: 0x8, Type: ClassProperty)
    void* MovementSpline; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MovementType; // 0x0B38 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B39
    void* ManagedActor; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    void* SplineMovementComponent; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0B50
    float ServerMovementStartTime; // 0x0B60 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarActorMover, ActorClass) == 2856, "Offset mismatch for UDelMarActorMover::ActorClass");
static_assert(offsetof(UDelMarActorMover, MovementSpline) == 2864, "Offset mismatch for UDelMarActorMover::MovementSpline");
static_assert(offsetof(UDelMarActorMover, MovementType) == 2872, "Offset mismatch for UDelMarActorMover::MovementType");
static_assert(offsetof(UDelMarActorMover, ManagedActor) == 2880, "Offset mismatch for UDelMarActorMover::ManagedActor");
static_assert(offsetof(UDelMarActorMover, SplineMovementComponent) == 2888, "Offset mismatch for UDelMarActorMover::SplineMovementComponent");
static_assert(offsetof(UDelMarActorMover, ServerMovementStartTime) == 2912, "Offset mismatch for UDelMarActorMover::ServerMovementStartTime");

// /Script/DelMarCore.DelMarAsyncPhysicsTickMutator
// Kind: Class; super: DelMarMutator
class UDelMarAsyncPhysicsTickMutator
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    float AsyncTickRate; // 0x02E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarAsyncPhysicsTickMutator, AsyncTickRate) == 744, "Offset mismatch for UDelMarAsyncPhysicsTickMutator::AsyncTickRate");

// /Script/DelMarCore.DelMarAudioComponentGroup
// Kind: Class; super: AudioComponentGroup
class UDelMarAudioComponentGroup
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* MixModifierExtension; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* SubmixSendExtension; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAudioComponentGroup, MixModifierExtension) == 816, "Offset mismatch for UDelMarAudioComponentGroup::MixModifierExtension");
static_assert(offsetof(UDelMarAudioComponentGroup, SubmixSendExtension) == 824, "Offset mismatch for UDelMarAudioComponentGroup::SubmixSendExtension");

// /Script/DelMarCore.DelMarAudioController
// Kind: Class; super: FortAthenaVehicleAudioController
class UDelMarAudioController
{
public:
    std::uint8_t Pad_0000[0x3D8]; // 0x0000
    FMulticastInlineDelegate OnBigAirStarted; // 0x03D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBigAirStopped; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ComponentGroup; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsLocal; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0401
    float FinishLineDistanceThreshold; // 0x0404 (Size: 0x4, Type: FloatProperty)
    float ApproachingFinishLineMinTime; // 0x0408 (Size: 0x4, Type: FloatProperty)
    float BigAirLandingDistanceThreshold; // 0x040C (Size: 0x4, Type: FloatProperty)
    float BigAirTimeThreshold; // 0x0410 (Size: 0x4, Type: FloatProperty)
    float BigAirDownSpeedThreshold; // 0x0414 (Size: 0x4, Type: FloatProperty)
    float NonLocalVelocityInterpSpeed; // 0x0418 (Size: 0x4, Type: FloatProperty)
    float MaxAcceleration; // 0x041C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInBigAir; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0421
    void* CachedVehicle; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanShift; // 0x0430 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarAudioController, OnBigAirStarted) == 984, "Offset mismatch for UDelMarAudioController::OnBigAirStarted");
static_assert(offsetof(UDelMarAudioController, OnBigAirStopped) == 1000, "Offset mismatch for UDelMarAudioController::OnBigAirStopped");
static_assert(offsetof(UDelMarAudioController, ComponentGroup) == 1016, "Offset mismatch for UDelMarAudioController::ComponentGroup");
static_assert(offsetof(UDelMarAudioController, bIsLocal) == 1024, "Offset mismatch for UDelMarAudioController::bIsLocal");
static_assert(offsetof(UDelMarAudioController, FinishLineDistanceThreshold) == 1028, "Offset mismatch for UDelMarAudioController::FinishLineDistanceThreshold");
static_assert(offsetof(UDelMarAudioController, ApproachingFinishLineMinTime) == 1032, "Offset mismatch for UDelMarAudioController::ApproachingFinishLineMinTime");
static_assert(offsetof(UDelMarAudioController, BigAirLandingDistanceThreshold) == 1036, "Offset mismatch for UDelMarAudioController::BigAirLandingDistanceThreshold");
static_assert(offsetof(UDelMarAudioController, BigAirTimeThreshold) == 1040, "Offset mismatch for UDelMarAudioController::BigAirTimeThreshold");
static_assert(offsetof(UDelMarAudioController, BigAirDownSpeedThreshold) == 1044, "Offset mismatch for UDelMarAudioController::BigAirDownSpeedThreshold");
static_assert(offsetof(UDelMarAudioController, NonLocalVelocityInterpSpeed) == 1048, "Offset mismatch for UDelMarAudioController::NonLocalVelocityInterpSpeed");
static_assert(offsetof(UDelMarAudioController, MaxAcceleration) == 1052, "Offset mismatch for UDelMarAudioController::MaxAcceleration");
static_assert(offsetof(UDelMarAudioController, bInBigAir) == 1056, "Offset mismatch for UDelMarAudioController::bInBigAir");
static_assert(offsetof(UDelMarAudioController, CachedVehicle) == 1064, "Offset mismatch for UDelMarAudioController::CachedVehicle");
static_assert(offsetof(UDelMarAudioController, bCanShift) == 1072, "Offset mismatch for UDelMarAudioController::bCanShift");

// /Script/DelMarCore.DelMarAudioMixModifierExtension
// Kind: Class; super: ActorComponent
class UDelMarAudioMixModifierExtension
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

static_assert(offsetof(UDelMarAudioMixModifierExtension, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarAudioMixModifierExtension::PrimaryComponentTick");
static_assert(offsetof(UDelMarAudioMixModifierExtension, ComponentTags) == 104, "Offset mismatch for UDelMarAudioMixModifierExtension::ComponentTags");
static_assert(offsetof(UDelMarAudioMixModifierExtension, AssetUserData) == 120, "Offset mismatch for UDelMarAudioMixModifierExtension::AssetUserData");
static_assert(offsetof(UDelMarAudioMixModifierExtension, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarAudioMixModifierExtension::UCSSerializationIndex");
static_assert(offsetof(UDelMarAudioMixModifierExtension, bNetAddressable) == 152, "Offset mismatch for UDelMarAudioMixModifierExtension::bNetAddressable");
static_assert(offsetof(UDelMarAudioMixModifierExtension, bAutoActivate) == 154, "Offset mismatch for UDelMarAudioMixModifierExtension::bAutoActivate");
static_assert(offsetof(UDelMarAudioMixModifierExtension, bIsEditorOnly) == 155, "Offset mismatch for UDelMarAudioMixModifierExtension::bIsEditorOnly");
static_assert(offsetof(UDelMarAudioMixModifierExtension, CreationMethod) == 185, "Offset mismatch for UDelMarAudioMixModifierExtension::CreationMethod");
static_assert(offsetof(UDelMarAudioMixModifierExtension, OnComponentActivated) == 186, "Offset mismatch for UDelMarAudioMixModifierExtension::OnComponentActivated");
static_assert(offsetof(UDelMarAudioMixModifierExtension, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarAudioMixModifierExtension::OnComponentDeactivated");

// /Script/DelMarCore.DelMarAudioReverbComponent
// Kind: Class; super: ActorComponent
class UDelMarAudioReverbComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ReverbSend; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* EarlyReflectionSend; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnclosureReverbBlendCurve[0x48]; // 0x00D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t WallDistanceBlendCurve[0x48]; // 0x0118 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnclosureSendLevelCurve[0x48]; // 0x0160 (Size: 0x48, Type: StructProperty)
    std::uint8_t WallDistanceSendLevelCurve[0x48]; // 0x01A8 (Size: 0x48, Type: StructProperty)
    std::int32_t NumPoints; // 0x01F0 (Size: 0x4, Type: IntProperty)
    float TraceRadius; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceOrigin[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::int32_t NumTracesPerFrame; // 0x0210 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0214
    void* CachedVehicleOwner; // 0x0218 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAudioReverbComponent, ReverbSend) == 192, "Offset mismatch for UDelMarAudioReverbComponent::ReverbSend");
static_assert(offsetof(UDelMarAudioReverbComponent, EarlyReflectionSend) == 200, "Offset mismatch for UDelMarAudioReverbComponent::EarlyReflectionSend");
static_assert(offsetof(UDelMarAudioReverbComponent, EnclosureReverbBlendCurve) == 208, "Offset mismatch for UDelMarAudioReverbComponent::EnclosureReverbBlendCurve");
static_assert(offsetof(UDelMarAudioReverbComponent, WallDistanceBlendCurve) == 280, "Offset mismatch for UDelMarAudioReverbComponent::WallDistanceBlendCurve");
static_assert(offsetof(UDelMarAudioReverbComponent, EnclosureSendLevelCurve) == 352, "Offset mismatch for UDelMarAudioReverbComponent::EnclosureSendLevelCurve");
static_assert(offsetof(UDelMarAudioReverbComponent, WallDistanceSendLevelCurve) == 424, "Offset mismatch for UDelMarAudioReverbComponent::WallDistanceSendLevelCurve");
static_assert(offsetof(UDelMarAudioReverbComponent, NumPoints) == 496, "Offset mismatch for UDelMarAudioReverbComponent::NumPoints");
static_assert(offsetof(UDelMarAudioReverbComponent, TraceRadius) == 500, "Offset mismatch for UDelMarAudioReverbComponent::TraceRadius");
static_assert(offsetof(UDelMarAudioReverbComponent, TraceOrigin) == 504, "Offset mismatch for UDelMarAudioReverbComponent::TraceOrigin");
static_assert(offsetof(UDelMarAudioReverbComponent, NumTracesPerFrame) == 528, "Offset mismatch for UDelMarAudioReverbComponent::NumTracesPerFrame");
static_assert(offsetof(UDelMarAudioReverbComponent, CachedVehicleOwner) == 536, "Offset mismatch for UDelMarAudioReverbComponent::CachedVehicleOwner");

// /Script/DelMarCore.DelMarBTService_ChooseNextTrack
// Kind: Class; super: DelMarBTService_VehicleBase
class UDelMarBTService_ChooseNextTrack
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TargetTrackDecisionKey[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsOffRoadDriveGoalKey[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsJumpDriveGoalKey[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsFullyBlockedCollisionKey[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    float TrackDecisionMaxTrackDistanceOffset; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float TrackDecisionMinTrackDistanceOffset; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float TrackEndCheckTrackDistanceOffset; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float BotReachedNewTrackDistanceOffset; // 0x014C (Size: 0x4, Type: FloatProperty)
    float SplineResetAvailableTrackIndexThreshold; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float AddKickflipWeightDegreeThreshold; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float TrackDecisionWeightMaxDistanceFromBot; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float TrackDecisionWeightMaxHeightFromBot; // 0x015C (Size: 0x4, Type: FloatProperty)
    float TrackDecisionWeightDesirableHeightFromBot; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float MinDecisionDelaySecondsAfterChangingTracks; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float MaxDecisionDelaySecondsAfterChangingTracks; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float ShortcutWeightLookAheadTrackDistance; // 0x016C (Size: 0x4, Type: FloatProperty)
    float PrimaryTrackGapMinDistanceThreshold; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float ForceNewTrackDecisionAfterSecondsIfFullyBlocked; // 0x0174 (Size: 0x4, Type: FloatProperty)
    float SwitchTrackMaxDistanceThreshold; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float SwitchTrackMinDistanceThreshold; // 0x017C (Size: 0x4, Type: FloatProperty)
    float TrackLengthRemainingPartitionAmount; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float TrackLengthRemainingCap; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float ValidRaycastDistanceThreshold; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float OffRoadSurfaceMaxNormalToTrackAngleThreshold; // 0x018C (Size: 0x4, Type: FloatProperty)
    float RaycastVehicleForwardOffset; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float RaycastEndTrackForwardOffset; // 0x0194 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RaycastCollisionChannel; // 0x0198 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0199
    float TrackLengthWeightPercentage; // 0x019C (Size: 0x4, Type: FloatProperty)
    float DistanceFromBotWeightPercentage; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float HeightFromBotWeightPercentage; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float TrackOrientationWeightPercentage; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float ShortcutWeightMultiplier; // 0x01AC (Size: 0x4, Type: FloatProperty)
    float AdditionalIndependentWeight; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float MaxRandomWeight; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float PrimaryTrackGapStaticWeightDeduction; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> BlackboardComponent; // 0x01BC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetTrackDecision; // 0x01C4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> NextTrackDecision; // 0x01CC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01D4
    TArray<void*> AvailableTrackDecisions; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> AIService; // 0x01E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TrackPositionComponent; // 0x01F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TargetTrackDecisionKey) == 160, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TargetTrackDecisionKey");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, IsOffRoadDriveGoalKey) == 200, "Offset mismatch for UDelMarBTService_ChooseNextTrack::IsOffRoadDriveGoalKey");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, IsJumpDriveGoalKey) == 240, "Offset mismatch for UDelMarBTService_ChooseNextTrack::IsJumpDriveGoalKey");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, IsFullyBlockedCollisionKey) == 280, "Offset mismatch for UDelMarBTService_ChooseNextTrack::IsFullyBlockedCollisionKey");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackDecisionMaxTrackDistanceOffset) == 320, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackDecisionMaxTrackDistanceOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackDecisionMinTrackDistanceOffset) == 324, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackDecisionMinTrackDistanceOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackEndCheckTrackDistanceOffset) == 328, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackEndCheckTrackDistanceOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, BotReachedNewTrackDistanceOffset) == 332, "Offset mismatch for UDelMarBTService_ChooseNextTrack::BotReachedNewTrackDistanceOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, SplineResetAvailableTrackIndexThreshold) == 336, "Offset mismatch for UDelMarBTService_ChooseNextTrack::SplineResetAvailableTrackIndexThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, AddKickflipWeightDegreeThreshold) == 340, "Offset mismatch for UDelMarBTService_ChooseNextTrack::AddKickflipWeightDegreeThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackDecisionWeightMaxDistanceFromBot) == 344, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackDecisionWeightMaxDistanceFromBot");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackDecisionWeightMaxHeightFromBot) == 348, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackDecisionWeightMaxHeightFromBot");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackDecisionWeightDesirableHeightFromBot) == 352, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackDecisionWeightDesirableHeightFromBot");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, MinDecisionDelaySecondsAfterChangingTracks) == 356, "Offset mismatch for UDelMarBTService_ChooseNextTrack::MinDecisionDelaySecondsAfterChangingTracks");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, MaxDecisionDelaySecondsAfterChangingTracks) == 360, "Offset mismatch for UDelMarBTService_ChooseNextTrack::MaxDecisionDelaySecondsAfterChangingTracks");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, ShortcutWeightLookAheadTrackDistance) == 364, "Offset mismatch for UDelMarBTService_ChooseNextTrack::ShortcutWeightLookAheadTrackDistance");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, PrimaryTrackGapMinDistanceThreshold) == 368, "Offset mismatch for UDelMarBTService_ChooseNextTrack::PrimaryTrackGapMinDistanceThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, ForceNewTrackDecisionAfterSecondsIfFullyBlocked) == 372, "Offset mismatch for UDelMarBTService_ChooseNextTrack::ForceNewTrackDecisionAfterSecondsIfFullyBlocked");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, SwitchTrackMaxDistanceThreshold) == 376, "Offset mismatch for UDelMarBTService_ChooseNextTrack::SwitchTrackMaxDistanceThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, SwitchTrackMinDistanceThreshold) == 380, "Offset mismatch for UDelMarBTService_ChooseNextTrack::SwitchTrackMinDistanceThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackLengthRemainingPartitionAmount) == 384, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackLengthRemainingPartitionAmount");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackLengthRemainingCap) == 388, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackLengthRemainingCap");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, ValidRaycastDistanceThreshold) == 392, "Offset mismatch for UDelMarBTService_ChooseNextTrack::ValidRaycastDistanceThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, OffRoadSurfaceMaxNormalToTrackAngleThreshold) == 396, "Offset mismatch for UDelMarBTService_ChooseNextTrack::OffRoadSurfaceMaxNormalToTrackAngleThreshold");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, RaycastVehicleForwardOffset) == 400, "Offset mismatch for UDelMarBTService_ChooseNextTrack::RaycastVehicleForwardOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, RaycastEndTrackForwardOffset) == 404, "Offset mismatch for UDelMarBTService_ChooseNextTrack::RaycastEndTrackForwardOffset");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, RaycastCollisionChannel) == 408, "Offset mismatch for UDelMarBTService_ChooseNextTrack::RaycastCollisionChannel");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackLengthWeightPercentage) == 412, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackLengthWeightPercentage");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, DistanceFromBotWeightPercentage) == 416, "Offset mismatch for UDelMarBTService_ChooseNextTrack::DistanceFromBotWeightPercentage");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, HeightFromBotWeightPercentage) == 420, "Offset mismatch for UDelMarBTService_ChooseNextTrack::HeightFromBotWeightPercentage");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackOrientationWeightPercentage) == 424, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackOrientationWeightPercentage");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, ShortcutWeightMultiplier) == 428, "Offset mismatch for UDelMarBTService_ChooseNextTrack::ShortcutWeightMultiplier");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, AdditionalIndependentWeight) == 432, "Offset mismatch for UDelMarBTService_ChooseNextTrack::AdditionalIndependentWeight");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, MaxRandomWeight) == 436, "Offset mismatch for UDelMarBTService_ChooseNextTrack::MaxRandomWeight");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, PrimaryTrackGapStaticWeightDeduction) == 440, "Offset mismatch for UDelMarBTService_ChooseNextTrack::PrimaryTrackGapStaticWeightDeduction");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, BlackboardComponent) == 444, "Offset mismatch for UDelMarBTService_ChooseNextTrack::BlackboardComponent");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TargetTrackDecision) == 452, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TargetTrackDecision");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, NextTrackDecision) == 460, "Offset mismatch for UDelMarBTService_ChooseNextTrack::NextTrackDecision");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, AvailableTrackDecisions) == 472, "Offset mismatch for UDelMarBTService_ChooseNextTrack::AvailableTrackDecisions");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, AIService) == 488, "Offset mismatch for UDelMarBTService_ChooseNextTrack::AIService");
static_assert(offsetof(UDelMarBTService_ChooseNextTrack, TrackPositionComponent) == 496, "Offset mismatch for UDelMarBTService_ChooseNextTrack::TrackPositionComponent");

// /Script/DelMarCore.DelMarBTService_FindDriveGoal
// Kind: Class; super: DelMarBTService_VehicleBase
class UDelMarBTService_FindDriveGoal
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TargetTrackDecisionKey[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DriveGoalLocationKey[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DriveGoalRotationKey[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsJumpDriveGoalKey[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsOffRoadDriveGoalKey[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsKickflipDriveGoalKey[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t KickflipDirectionKey[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t HasUpcomingCollisionKey[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsFullyBlockedCollisionKey[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    float GroundedDriveGoalVehicleForwardOffset; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float TrackGapDriveGoalVehicleForwardOffset; // 0x020C (Size: 0x4, Type: FloatProperty)
    float AirDriveGoalVehicleForwardOffset; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float PathNoiseAmplitude; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float PathNoiseFrequency; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumberOfCheckedTrackSegments; // 0x021C (Size: 0x4, Type: IntProperty)
    float GroundedOffroadRaycastDistance; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float GroundedOffRoadRaycastTrackForwardOffset; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float TrackGapCheckForwardOffset; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float ReturnToTrackRaycastForwardOffset; // 0x022C (Size: 0x4, Type: FloatProperty)
    float ReturnToTrackRaycastDepthPadding; // 0x0230 (Size: 0x4, Type: FloatProperty)
    float ReturnToTrackMaintainVehicleOffsetDegreeThreshold; // 0x0234 (Size: 0x4, Type: FloatProperty)
    float ReturnToTrackRaycastMinAngleDifference; // 0x0238 (Size: 0x4, Type: FloatProperty)
    float UnsafeLandingDesiredUnderthrustHeightFactor; // 0x023C (Size: 0x4, Type: FloatProperty)
    float UnsafeLandingJumpGoalTrackOffsetReductionFactor; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float OffRoadSurfaceMaxNormalToTrackAngleThreshold; // 0x0244 (Size: 0x4, Type: FloatProperty)
    float MaxVehicleAirRollAngleToReturnToTrackFromBelow; // 0x0248 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfSideAvoidanceRaycasts; // 0x024C (Size: 0x4, Type: IntProperty)
    float DegreesBetweenRaycasts; // 0x0250 (Size: 0x4, Type: FloatProperty)
    float TrackInclineMaxRaycastDirectionRotationDegrees; // 0x0254 (Size: 0x4, Type: FloatProperty)
    float DriftPrimaryTraceRotationFactor; // 0x0258 (Size: 0x4, Type: FloatProperty)
    float NonJumpableHazardMinHitNormalDegrees; // 0x025C (Size: 0x4, Type: FloatProperty)
    float AvoidanceTraceVerticalSpread; // 0x0260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RaycastCollisionChannel; // 0x0264 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0265
    TArray<void*> IgnoredActorClasses; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RaycastDistanceCurve[0x50]; // 0x0278 (Size: 0x50, Type: StructProperty)
    std::uint8_t RayCastDistanceContributionCurve[0x50]; // 0x02C8 (Size: 0x50, Type: StructProperty)
    std::uint8_t VehicleDistanceAvoidanceCurve[0x50]; // 0x0318 (Size: 0x50, Type: StructProperty)
    float DriveGoalOffsetCancelPadding; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float DriveHazardOffsetCancelPadding; // 0x036C (Size: 0x4, Type: FloatProperty)
    float VehicleTrackOffsetCancelPadding; // 0x0370 (Size: 0x4, Type: FloatProperty)
    float DriveGoalOffsetMinTrackDepth; // 0x0374 (Size: 0x4, Type: FloatProperty)
    float DriveHazardMaxJumpDistanceFactor; // 0x0378 (Size: 0x4, Type: FloatProperty)
    float DriveHazardMinJumpDistanceFactor; // 0x037C (Size: 0x4, Type: FloatProperty)
    float HazardJumpGoalMaxHeightOffset; // 0x0380 (Size: 0x4, Type: FloatProperty)
    float HazardJumpGoalMinHeightOffset; // 0x0384 (Size: 0x4, Type: FloatProperty)
    float BlockedJumpTracePadding; // 0x0388 (Size: 0x4, Type: FloatProperty)
    float TrackGapJumpHeightThreshold; // 0x038C (Size: 0x4, Type: FloatProperty)
    float TrackGapDriveGoalHeightOffset; // 0x0390 (Size: 0x4, Type: FloatProperty)
    float VerticalTrackTransitionVehicleExtentMultiplier; // 0x0394 (Size: 0x4, Type: FloatProperty)
    TArray<void*> JumpableActorClasses; // 0x0398 (Size: 0x10, Type: ArrayProperty)
    float SideKickflipSurfaceNormalDegreeThreshold; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    float UpwardKickflipMinNormalDegreesToWorldUp; // 0x03AC (Size: 0x4, Type: FloatProperty)
    float KickflipDriveGoalTrackHeightOffset; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    float KickflipDriveGoalForwardDistanceThreshold; // 0x03B4 (Size: 0x4, Type: FloatProperty)
    float UnderKickflipSurfaceForwardDistanceThreshold; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float KickflipTraceHeightOffset; // 0x03BC (Size: 0x4, Type: FloatProperty)
    float KickflipTraceMaximumHeightFromTrack; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    float KickflipMinimumDownwardDistanceFromTrack; // 0x03C4 (Size: 0x4, Type: FloatProperty)
    float PercentChanceToAllowDownKickflip; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03CC
    std::uint8_t PercentChanceToExecuteDownKickflipCurve[0x50]; // 0x03D0 (Size: 0x50, Type: StructProperty)
    float SwitchTrackJumpHeightThreshold; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float SwitchTrackToPipeHeightOffsetFactor; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float PercentChanceToIgnoreDriveHazard; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float PercentChanceToNotCheckForSafeLanding; // 0x042C (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> BlackboardComponent; // 0x0430 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TrackPositionComponent; // 0x0438 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetTrack; // 0x0440 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetTrackSplineComponent; // 0x0448 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ActiveTrack; // 0x0450 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ActiveTrackSplineComponent; // 0x0458 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OobTubePositionalRenderingComponent; // 0x0460 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0468
    TWeakObjectPtr<void> OffRoadDriveActor; // 0x0478 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0480
    TWeakObjectPtr<void> KickflipTrack; // 0x0490 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTService_FindDriveGoal, TargetTrackDecisionKey) == 160, "Offset mismatch for UDelMarBTService_FindDriveGoal::TargetTrackDecisionKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveGoalLocationKey) == 200, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveGoalLocationKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveGoalRotationKey) == 240, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveGoalRotationKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, IsJumpDriveGoalKey) == 280, "Offset mismatch for UDelMarBTService_FindDriveGoal::IsJumpDriveGoalKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, IsOffRoadDriveGoalKey) == 320, "Offset mismatch for UDelMarBTService_FindDriveGoal::IsOffRoadDriveGoalKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, IsKickflipDriveGoalKey) == 360, "Offset mismatch for UDelMarBTService_FindDriveGoal::IsKickflipDriveGoalKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipDirectionKey) == 400, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipDirectionKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, HasUpcomingCollisionKey) == 440, "Offset mismatch for UDelMarBTService_FindDriveGoal::HasUpcomingCollisionKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, IsFullyBlockedCollisionKey) == 480, "Offset mismatch for UDelMarBTService_FindDriveGoal::IsFullyBlockedCollisionKey");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, GroundedDriveGoalVehicleForwardOffset) == 520, "Offset mismatch for UDelMarBTService_FindDriveGoal::GroundedDriveGoalVehicleForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackGapDriveGoalVehicleForwardOffset) == 524, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackGapDriveGoalVehicleForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, AirDriveGoalVehicleForwardOffset) == 528, "Offset mismatch for UDelMarBTService_FindDriveGoal::AirDriveGoalVehicleForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PathNoiseAmplitude) == 532, "Offset mismatch for UDelMarBTService_FindDriveGoal::PathNoiseAmplitude");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PathNoiseFrequency) == 536, "Offset mismatch for UDelMarBTService_FindDriveGoal::PathNoiseFrequency");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, MaxNumberOfCheckedTrackSegments) == 540, "Offset mismatch for UDelMarBTService_FindDriveGoal::MaxNumberOfCheckedTrackSegments");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, GroundedOffroadRaycastDistance) == 544, "Offset mismatch for UDelMarBTService_FindDriveGoal::GroundedOffroadRaycastDistance");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, GroundedOffRoadRaycastTrackForwardOffset) == 548, "Offset mismatch for UDelMarBTService_FindDriveGoal::GroundedOffRoadRaycastTrackForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackGapCheckForwardOffset) == 552, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackGapCheckForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ReturnToTrackRaycastForwardOffset) == 556, "Offset mismatch for UDelMarBTService_FindDriveGoal::ReturnToTrackRaycastForwardOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ReturnToTrackRaycastDepthPadding) == 560, "Offset mismatch for UDelMarBTService_FindDriveGoal::ReturnToTrackRaycastDepthPadding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ReturnToTrackMaintainVehicleOffsetDegreeThreshold) == 564, "Offset mismatch for UDelMarBTService_FindDriveGoal::ReturnToTrackMaintainVehicleOffsetDegreeThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ReturnToTrackRaycastMinAngleDifference) == 568, "Offset mismatch for UDelMarBTService_FindDriveGoal::ReturnToTrackRaycastMinAngleDifference");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, UnsafeLandingDesiredUnderthrustHeightFactor) == 572, "Offset mismatch for UDelMarBTService_FindDriveGoal::UnsafeLandingDesiredUnderthrustHeightFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, UnsafeLandingJumpGoalTrackOffsetReductionFactor) == 576, "Offset mismatch for UDelMarBTService_FindDriveGoal::UnsafeLandingJumpGoalTrackOffsetReductionFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, OffRoadSurfaceMaxNormalToTrackAngleThreshold) == 580, "Offset mismatch for UDelMarBTService_FindDriveGoal::OffRoadSurfaceMaxNormalToTrackAngleThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, MaxVehicleAirRollAngleToReturnToTrackFromBelow) == 584, "Offset mismatch for UDelMarBTService_FindDriveGoal::MaxVehicleAirRollAngleToReturnToTrackFromBelow");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, NumberOfSideAvoidanceRaycasts) == 588, "Offset mismatch for UDelMarBTService_FindDriveGoal::NumberOfSideAvoidanceRaycasts");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DegreesBetweenRaycasts) == 592, "Offset mismatch for UDelMarBTService_FindDriveGoal::DegreesBetweenRaycasts");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackInclineMaxRaycastDirectionRotationDegrees) == 596, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackInclineMaxRaycastDirectionRotationDegrees");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriftPrimaryTraceRotationFactor) == 600, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriftPrimaryTraceRotationFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, NonJumpableHazardMinHitNormalDegrees) == 604, "Offset mismatch for UDelMarBTService_FindDriveGoal::NonJumpableHazardMinHitNormalDegrees");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, AvoidanceTraceVerticalSpread) == 608, "Offset mismatch for UDelMarBTService_FindDriveGoal::AvoidanceTraceVerticalSpread");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, RaycastCollisionChannel) == 612, "Offset mismatch for UDelMarBTService_FindDriveGoal::RaycastCollisionChannel");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, IgnoredActorClasses) == 616, "Offset mismatch for UDelMarBTService_FindDriveGoal::IgnoredActorClasses");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, RaycastDistanceCurve) == 632, "Offset mismatch for UDelMarBTService_FindDriveGoal::RaycastDistanceCurve");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, RayCastDistanceContributionCurve) == 712, "Offset mismatch for UDelMarBTService_FindDriveGoal::RayCastDistanceContributionCurve");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, VehicleDistanceAvoidanceCurve) == 792, "Offset mismatch for UDelMarBTService_FindDriveGoal::VehicleDistanceAvoidanceCurve");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveGoalOffsetCancelPadding) == 872, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveGoalOffsetCancelPadding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveHazardOffsetCancelPadding) == 876, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveHazardOffsetCancelPadding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, VehicleTrackOffsetCancelPadding) == 880, "Offset mismatch for UDelMarBTService_FindDriveGoal::VehicleTrackOffsetCancelPadding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveGoalOffsetMinTrackDepth) == 884, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveGoalOffsetMinTrackDepth");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveHazardMaxJumpDistanceFactor) == 888, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveHazardMaxJumpDistanceFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, DriveHazardMinJumpDistanceFactor) == 892, "Offset mismatch for UDelMarBTService_FindDriveGoal::DriveHazardMinJumpDistanceFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, HazardJumpGoalMaxHeightOffset) == 896, "Offset mismatch for UDelMarBTService_FindDriveGoal::HazardJumpGoalMaxHeightOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, HazardJumpGoalMinHeightOffset) == 900, "Offset mismatch for UDelMarBTService_FindDriveGoal::HazardJumpGoalMinHeightOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, BlockedJumpTracePadding) == 904, "Offset mismatch for UDelMarBTService_FindDriveGoal::BlockedJumpTracePadding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackGapJumpHeightThreshold) == 908, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackGapJumpHeightThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackGapDriveGoalHeightOffset) == 912, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackGapDriveGoalHeightOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, VerticalTrackTransitionVehicleExtentMultiplier) == 916, "Offset mismatch for UDelMarBTService_FindDriveGoal::VerticalTrackTransitionVehicleExtentMultiplier");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, JumpableActorClasses) == 920, "Offset mismatch for UDelMarBTService_FindDriveGoal::JumpableActorClasses");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, SideKickflipSurfaceNormalDegreeThreshold) == 936, "Offset mismatch for UDelMarBTService_FindDriveGoal::SideKickflipSurfaceNormalDegreeThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, UpwardKickflipMinNormalDegreesToWorldUp) == 940, "Offset mismatch for UDelMarBTService_FindDriveGoal::UpwardKickflipMinNormalDegreesToWorldUp");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipDriveGoalTrackHeightOffset) == 944, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipDriveGoalTrackHeightOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipDriveGoalForwardDistanceThreshold) == 948, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipDriveGoalForwardDistanceThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, UnderKickflipSurfaceForwardDistanceThreshold) == 952, "Offset mismatch for UDelMarBTService_FindDriveGoal::UnderKickflipSurfaceForwardDistanceThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipTraceHeightOffset) == 956, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipTraceHeightOffset");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipTraceMaximumHeightFromTrack) == 960, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipTraceMaximumHeightFromTrack");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipMinimumDownwardDistanceFromTrack) == 964, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipMinimumDownwardDistanceFromTrack");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PercentChanceToAllowDownKickflip) == 968, "Offset mismatch for UDelMarBTService_FindDriveGoal::PercentChanceToAllowDownKickflip");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PercentChanceToExecuteDownKickflipCurve) == 976, "Offset mismatch for UDelMarBTService_FindDriveGoal::PercentChanceToExecuteDownKickflipCurve");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, SwitchTrackJumpHeightThreshold) == 1056, "Offset mismatch for UDelMarBTService_FindDriveGoal::SwitchTrackJumpHeightThreshold");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, SwitchTrackToPipeHeightOffsetFactor) == 1060, "Offset mismatch for UDelMarBTService_FindDriveGoal::SwitchTrackToPipeHeightOffsetFactor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PercentChanceToIgnoreDriveHazard) == 1064, "Offset mismatch for UDelMarBTService_FindDriveGoal::PercentChanceToIgnoreDriveHazard");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, PercentChanceToNotCheckForSafeLanding) == 1068, "Offset mismatch for UDelMarBTService_FindDriveGoal::PercentChanceToNotCheckForSafeLanding");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, BlackboardComponent) == 1072, "Offset mismatch for UDelMarBTService_FindDriveGoal::BlackboardComponent");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TrackPositionComponent) == 1080, "Offset mismatch for UDelMarBTService_FindDriveGoal::TrackPositionComponent");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TargetTrack) == 1088, "Offset mismatch for UDelMarBTService_FindDriveGoal::TargetTrack");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, TargetTrackSplineComponent) == 1096, "Offset mismatch for UDelMarBTService_FindDriveGoal::TargetTrackSplineComponent");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ActiveTrack) == 1104, "Offset mismatch for UDelMarBTService_FindDriveGoal::ActiveTrack");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, ActiveTrackSplineComponent) == 1112, "Offset mismatch for UDelMarBTService_FindDriveGoal::ActiveTrackSplineComponent");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, OobTubePositionalRenderingComponent) == 1120, "Offset mismatch for UDelMarBTService_FindDriveGoal::OobTubePositionalRenderingComponent");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, OffRoadDriveActor) == 1144, "Offset mismatch for UDelMarBTService_FindDriveGoal::OffRoadDriveActor");
static_assert(offsetof(UDelMarBTService_FindDriveGoal, KickflipTrack) == 1168, "Offset mismatch for UDelMarBTService_FindDriveGoal::KickflipTrack");

// /Script/DelMarCore.DelMarBTService_ResetVehicle
// Kind: Class; super: DelMarBTService_VehicleBase
class UDelMarBTService_ResetVehicle
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float CancelResetMinRequiredDistance; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float CancelResetMaxRequiredDistance; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> PlayerRaceDataComponent; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TrackPositionComponent; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTService_ResetVehicle, CancelResetMinRequiredDistance) == 160, "Offset mismatch for UDelMarBTService_ResetVehicle::CancelResetMinRequiredDistance");
static_assert(offsetof(UDelMarBTService_ResetVehicle, CancelResetMaxRequiredDistance) == 164, "Offset mismatch for UDelMarBTService_ResetVehicle::CancelResetMaxRequiredDistance");
static_assert(offsetof(UDelMarBTService_ResetVehicle, PlayerRaceDataComponent) == 168, "Offset mismatch for UDelMarBTService_ResetVehicle::PlayerRaceDataComponent");
static_assert(offsetof(UDelMarBTService_ResetVehicle, TrackPositionComponent) == 176, "Offset mismatch for UDelMarBTService_ResetVehicle::TrackPositionComponent");

// /Script/DelMarCore.DelMarBTService_VehicleBase
// Kind: Class; super: BTService
class UDelMarBTService_VehicleBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t VehicleKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> DelMarVehicle; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTService_VehicleBase, VehicleKey) == 112, "Offset mismatch for UDelMarBTService_VehicleBase::VehicleKey");
static_assert(offsetof(UDelMarBTService_VehicleBase, DelMarVehicle) == 152, "Offset mismatch for UDelMarBTService_VehicleBase::DelMarVehicle");

// /Script/DelMarCore.DelMarBTTask_DriveTrack
// Kind: Class; super: DelMarBTTask_VehicleBase
class UDelMarBTTask_DriveTrack
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TargetTrackDecisionKey[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DriveGoalLocationKey[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DriveGoalRotationKey[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsJumpDriveGoalKey[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsOffRoadDriveGoalKey[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsKickflipDriveGoalKey[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t KickflipDirectionKey[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t HasUpcomingCollisionKey[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundedTrackHorizontalOffsetSteerCurve[0x50]; // 0x01E0 (Size: 0x50, Type: StructProperty)
    std::uint8_t AirTrackHorizontalOffsetSteerCurve[0x50]; // 0x0230 (Size: 0x50, Type: StructProperty)
    std::uint8_t CollisionAvoidanceHorizontalOffsetSteerCurve[0x50]; // 0x0280 (Size: 0x50, Type: StructProperty)
    std::uint8_t AirCollisionAvoidanceHorizontalSteerDecisionCurve[0x50]; // 0x02D0 (Size: 0x50, Type: StructProperty)
    std::uint8_t GroundedTurnDegreesSteerDecisionCurve[0x50]; // 0x0320 (Size: 0x50, Type: StructProperty)
    std::uint8_t AirTurnDegreesSteerDecisionCurve[0x50]; // 0x0370 (Size: 0x50, Type: StructProperty)
    std::uint8_t CollisionTurnDegreesSteerDecisionCurve[0x50]; // 0x03C0 (Size: 0x50, Type: StructProperty)
    float DriveThrottle; // 0x0410 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanKickDrift; // 0x0414 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0415
    std::int32_t NumberOfDriftCheckSamples; // 0x0418 (Size: 0x4, Type: IntProperty)
    float MinDriftSampleDistanceScaleFactor; // 0x041C (Size: 0x4, Type: FloatProperty)
    float MaxDriftSampleDistanceScaleFactor; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float MinExitDriftSampleDistanceFromVehicle; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float MaxExitDriftSampleDistanceFromVehicle; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float MinRequiredDriftDegrees; // 0x042C (Size: 0x4, Type: FloatProperty)
    float MaxRequiredDriftDegrees; // 0x0430 (Size: 0x4, Type: FloatProperty)
    float MinRequiredKickDriftDegrees; // 0x0434 (Size: 0x4, Type: FloatProperty)
    float MaxRequiredKickDriftDegrees; // 0x0438 (Size: 0x4, Type: FloatProperty)
    float MinSecondsToUpdateRandomDriftConfigValues; // 0x043C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PercentChanceToKickDriftCurve[0x50]; // 0x0440 (Size: 0x50, Type: StructProperty)
    float MinDriftSlipRatioForExitKickDrift; // 0x0490 (Size: 0x4, Type: FloatProperty)
    float MinDriftSpeed; // 0x0494 (Size: 0x4, Type: FloatProperty)
    float DriftKickUnderSteerDegreesThreshold; // 0x0498 (Size: 0x4, Type: FloatProperty)
    float DriftKickOverSteerDegreesThreshold; // 0x049C (Size: 0x4, Type: FloatProperty)
    float DriftTapUnderSteerDegreesThreshold; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    float DriftTapOverSteerDegreesThreshold; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    float DriftCounterSteerDegreesThreshold; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04AC
    std::uint8_t MinDriftSlipRatioCurve[0x50]; // 0x04B0 (Size: 0x50, Type: StructProperty)
    std::uint8_t DistanceBetweenDriftSamplesCurve[0x50]; // 0x0500 (Size: 0x50, Type: StructProperty)
    std::uint8_t DriftSampleDistanceFromVehicleCurve[0x50]; // 0x0550 (Size: 0x50, Type: StructProperty)
    std::uint8_t DriveGoalJumpHeightThresholdCurve[0x50]; // 0x05A0 (Size: 0x50, Type: StructProperty)
    float JumpGoalTrackAngleDistanceOffset; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float JumpMinSpeed; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float MinimumUnderthrustPitch; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x05FC
    std::uint8_t AirPitchAdjustmentCurve[0x50]; // 0x0600 (Size: 0x50, Type: StructProperty)
    float AirPitchAdjustmentMaxVerticalDegrees; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float MinNumTurboChargesNeededToTurbo; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float MaxTurboTrackCutoffAngleInDegrees; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float TurboActivationBaseChance; // 0x065C (Size: 0x4, Type: FloatProperty)
    float SecondaryTurboBoostChance; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float MinTimeBetweenTurboCheck; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float MaxTimeBetweenTurboCheck; // 0x0668 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> TrackPositionComponent; // 0x066C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetTrack; // 0x0674 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetTrackSplineComponent; // 0x067C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> BlackboardComponent; // 0x0684 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTTask_DriveTrack, TargetTrackDecisionKey) == 160, "Offset mismatch for UDelMarBTTask_DriveTrack::TargetTrackDecisionKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriveGoalLocationKey) == 200, "Offset mismatch for UDelMarBTTask_DriveTrack::DriveGoalLocationKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriveGoalRotationKey) == 240, "Offset mismatch for UDelMarBTTask_DriveTrack::DriveGoalRotationKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, IsJumpDriveGoalKey) == 280, "Offset mismatch for UDelMarBTTask_DriveTrack::IsJumpDriveGoalKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, IsOffRoadDriveGoalKey) == 320, "Offset mismatch for UDelMarBTTask_DriveTrack::IsOffRoadDriveGoalKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, IsKickflipDriveGoalKey) == 360, "Offset mismatch for UDelMarBTTask_DriveTrack::IsKickflipDriveGoalKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, KickflipDirectionKey) == 400, "Offset mismatch for UDelMarBTTask_DriveTrack::KickflipDirectionKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, HasUpcomingCollisionKey) == 440, "Offset mismatch for UDelMarBTTask_DriveTrack::HasUpcomingCollisionKey");
static_assert(offsetof(UDelMarBTTask_DriveTrack, GroundedTrackHorizontalOffsetSteerCurve) == 480, "Offset mismatch for UDelMarBTTask_DriveTrack::GroundedTrackHorizontalOffsetSteerCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, AirTrackHorizontalOffsetSteerCurve) == 560, "Offset mismatch for UDelMarBTTask_DriveTrack::AirTrackHorizontalOffsetSteerCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, CollisionAvoidanceHorizontalOffsetSteerCurve) == 640, "Offset mismatch for UDelMarBTTask_DriveTrack::CollisionAvoidanceHorizontalOffsetSteerCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, AirCollisionAvoidanceHorizontalSteerDecisionCurve) == 720, "Offset mismatch for UDelMarBTTask_DriveTrack::AirCollisionAvoidanceHorizontalSteerDecisionCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, GroundedTurnDegreesSteerDecisionCurve) == 800, "Offset mismatch for UDelMarBTTask_DriveTrack::GroundedTurnDegreesSteerDecisionCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, AirTurnDegreesSteerDecisionCurve) == 880, "Offset mismatch for UDelMarBTTask_DriveTrack::AirTurnDegreesSteerDecisionCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, CollisionTurnDegreesSteerDecisionCurve) == 960, "Offset mismatch for UDelMarBTTask_DriveTrack::CollisionTurnDegreesSteerDecisionCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriveThrottle) == 1040, "Offset mismatch for UDelMarBTTask_DriveTrack::DriveThrottle");
static_assert(offsetof(UDelMarBTTask_DriveTrack, bCanKickDrift) == 1044, "Offset mismatch for UDelMarBTTask_DriveTrack::bCanKickDrift");
static_assert(offsetof(UDelMarBTTask_DriveTrack, NumberOfDriftCheckSamples) == 1048, "Offset mismatch for UDelMarBTTask_DriveTrack::NumberOfDriftCheckSamples");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinDriftSampleDistanceScaleFactor) == 1052, "Offset mismatch for UDelMarBTTask_DriveTrack::MinDriftSampleDistanceScaleFactor");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxDriftSampleDistanceScaleFactor) == 1056, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxDriftSampleDistanceScaleFactor");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinExitDriftSampleDistanceFromVehicle) == 1060, "Offset mismatch for UDelMarBTTask_DriveTrack::MinExitDriftSampleDistanceFromVehicle");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxExitDriftSampleDistanceFromVehicle) == 1064, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxExitDriftSampleDistanceFromVehicle");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinRequiredDriftDegrees) == 1068, "Offset mismatch for UDelMarBTTask_DriveTrack::MinRequiredDriftDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxRequiredDriftDegrees) == 1072, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxRequiredDriftDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinRequiredKickDriftDegrees) == 1076, "Offset mismatch for UDelMarBTTask_DriveTrack::MinRequiredKickDriftDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxRequiredKickDriftDegrees) == 1080, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxRequiredKickDriftDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinSecondsToUpdateRandomDriftConfigValues) == 1084, "Offset mismatch for UDelMarBTTask_DriveTrack::MinSecondsToUpdateRandomDriftConfigValues");
static_assert(offsetof(UDelMarBTTask_DriveTrack, PercentChanceToKickDriftCurve) == 1088, "Offset mismatch for UDelMarBTTask_DriveTrack::PercentChanceToKickDriftCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinDriftSlipRatioForExitKickDrift) == 1168, "Offset mismatch for UDelMarBTTask_DriveTrack::MinDriftSlipRatioForExitKickDrift");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinDriftSpeed) == 1172, "Offset mismatch for UDelMarBTTask_DriveTrack::MinDriftSpeed");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftKickUnderSteerDegreesThreshold) == 1176, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftKickUnderSteerDegreesThreshold");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftKickOverSteerDegreesThreshold) == 1180, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftKickOverSteerDegreesThreshold");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftTapUnderSteerDegreesThreshold) == 1184, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftTapUnderSteerDegreesThreshold");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftTapOverSteerDegreesThreshold) == 1188, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftTapOverSteerDegreesThreshold");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftCounterSteerDegreesThreshold) == 1192, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftCounterSteerDegreesThreshold");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinDriftSlipRatioCurve) == 1200, "Offset mismatch for UDelMarBTTask_DriveTrack::MinDriftSlipRatioCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DistanceBetweenDriftSamplesCurve) == 1280, "Offset mismatch for UDelMarBTTask_DriveTrack::DistanceBetweenDriftSamplesCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriftSampleDistanceFromVehicleCurve) == 1360, "Offset mismatch for UDelMarBTTask_DriveTrack::DriftSampleDistanceFromVehicleCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, DriveGoalJumpHeightThresholdCurve) == 1440, "Offset mismatch for UDelMarBTTask_DriveTrack::DriveGoalJumpHeightThresholdCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, JumpGoalTrackAngleDistanceOffset) == 1520, "Offset mismatch for UDelMarBTTask_DriveTrack::JumpGoalTrackAngleDistanceOffset");
static_assert(offsetof(UDelMarBTTask_DriveTrack, JumpMinSpeed) == 1524, "Offset mismatch for UDelMarBTTask_DriveTrack::JumpMinSpeed");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinimumUnderthrustPitch) == 1528, "Offset mismatch for UDelMarBTTask_DriveTrack::MinimumUnderthrustPitch");
static_assert(offsetof(UDelMarBTTask_DriveTrack, AirPitchAdjustmentCurve) == 1536, "Offset mismatch for UDelMarBTTask_DriveTrack::AirPitchAdjustmentCurve");
static_assert(offsetof(UDelMarBTTask_DriveTrack, AirPitchAdjustmentMaxVerticalDegrees) == 1616, "Offset mismatch for UDelMarBTTask_DriveTrack::AirPitchAdjustmentMaxVerticalDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinNumTurboChargesNeededToTurbo) == 1620, "Offset mismatch for UDelMarBTTask_DriveTrack::MinNumTurboChargesNeededToTurbo");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxTurboTrackCutoffAngleInDegrees) == 1624, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxTurboTrackCutoffAngleInDegrees");
static_assert(offsetof(UDelMarBTTask_DriveTrack, TurboActivationBaseChance) == 1628, "Offset mismatch for UDelMarBTTask_DriveTrack::TurboActivationBaseChance");
static_assert(offsetof(UDelMarBTTask_DriveTrack, SecondaryTurboBoostChance) == 1632, "Offset mismatch for UDelMarBTTask_DriveTrack::SecondaryTurboBoostChance");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MinTimeBetweenTurboCheck) == 1636, "Offset mismatch for UDelMarBTTask_DriveTrack::MinTimeBetweenTurboCheck");
static_assert(offsetof(UDelMarBTTask_DriveTrack, MaxTimeBetweenTurboCheck) == 1640, "Offset mismatch for UDelMarBTTask_DriveTrack::MaxTimeBetweenTurboCheck");
static_assert(offsetof(UDelMarBTTask_DriveTrack, TrackPositionComponent) == 1644, "Offset mismatch for UDelMarBTTask_DriveTrack::TrackPositionComponent");
static_assert(offsetof(UDelMarBTTask_DriveTrack, TargetTrack) == 1652, "Offset mismatch for UDelMarBTTask_DriveTrack::TargetTrack");
static_assert(offsetof(UDelMarBTTask_DriveTrack, TargetTrackSplineComponent) == 1660, "Offset mismatch for UDelMarBTTask_DriveTrack::TargetTrackSplineComponent");
static_assert(offsetof(UDelMarBTTask_DriveTrack, BlackboardComponent) == 1668, "Offset mismatch for UDelMarBTTask_DriveTrack::BlackboardComponent");

// /Script/DelMarCore.DelMarBTTask_RaceCountdown
// Kind: Class; super: DelMarBTTask_VehicleBase
class UDelMarBTTask_RaceCountdown
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float MaxReactionTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float MinReactionTime; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarBTTask_RaceCountdown, MaxReactionTime) == 160, "Offset mismatch for UDelMarBTTask_RaceCountdown::MaxReactionTime");
static_assert(offsetof(UDelMarBTTask_RaceCountdown, MinReactionTime) == 164, "Offset mismatch for UDelMarBTTask_RaceCountdown::MinReactionTime");

// /Script/DelMarCore.DelMarBTTask_VehicleBase
// Kind: Class; super: BTTaskNode
class UDelMarBTTask_VehicleBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t VehicleKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> DelMarVehicle; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarBTTask_VehicleBase, VehicleKey) == 112, "Offset mismatch for UDelMarBTTask_VehicleBase::VehicleKey");
static_assert(offsetof(UDelMarBTTask_VehicleBase, DelMarVehicle) == 152, "Offset mismatch for UDelMarBTTask_VehicleBase::DelMarVehicle");

// /Script/DelMarCore.DelMarBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDelMarBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarCameraComponent
// Kind: Class; super: ControllerComponent
class UDelMarCameraComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> VehicleManager; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarCameraComponent, VehicleManager) == 192, "Offset mismatch for UDelMarCameraComponent::VehicleManager");

// /Script/DelMarCore.DelMarCameraInputControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarCameraInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TurnCameraAction[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LookUpCameraAction[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReverseCameraAction[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    void* InputManagerClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortSettings; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarCameraInputControllerComponent, TurnCameraAction) == 192, "Offset mismatch for UDelMarCameraInputControllerComponent::TurnCameraAction");
static_assert(offsetof(UDelMarCameraInputControllerComponent, LookUpCameraAction) == 208, "Offset mismatch for UDelMarCameraInputControllerComponent::LookUpCameraAction");
static_assert(offsetof(UDelMarCameraInputControllerComponent, ReverseCameraAction) == 224, "Offset mismatch for UDelMarCameraInputControllerComponent::ReverseCameraAction");
static_assert(offsetof(UDelMarCameraInputControllerComponent, InputManagerClass) == 240, "Offset mismatch for UDelMarCameraInputControllerComponent::InputManagerClass");
static_assert(offsetof(UDelMarCameraInputControllerComponent, InputComponent) == 248, "Offset mismatch for UDelMarCameraInputControllerComponent::InputComponent");
static_assert(offsetof(UDelMarCameraInputControllerComponent, FortSettings) == 256, "Offset mismatch for UDelMarCameraInputControllerComponent::FortSettings");

// /Script/DelMarCore.DelMarCameraModeOverrideComponent
// Kind: Class; super: FortCameraModeOverrideComponent
class UDelMarCameraModeOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CameraModeOverride; // 0x00C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UDelMarCameraModeOverrideComponent, CameraModeOverride) == 192, "Offset mismatch for UDelMarCameraModeOverrideComponent::CameraModeOverride");

// /Script/DelMarCore.DelMarCameraShakeComponent
// Kind: Class; super: ControllerComponent
class UDelMarCameraShakeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ShakeIntensitySettingMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    void* JumpShakeEffect; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* HazardShakeEffect; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseVehicleLandedKickflipShake; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* VehicleLandedKickflipShake; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleLandedKickflipShakeIntensityCurve[0x50]; // 0x00F0 (Size: 0x50, Type: StructProperty)
    void* VehicleLandedCameraShakeEffect; // 0x0140 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleLandedShakeIntensityCurve[0x50]; // 0x0148 (Size: 0x50, Type: StructProperty)
    float MaxSecondsToDampenVehicleHit; // 0x0198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x019C
    std::uint8_t VehicleHitShakeIntensityCurve[0x50]; // 0x01A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VehicleImpactShakeEffect[0x60]; // 0x01F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t WallImpactShakeEffect[0x60]; // 0x0250 (Size: 0x60, Type: StructProperty)
    std::uint8_t WallNoRedirectImpactShakeEffect[0x60]; // 0x02B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t BaseAccelerationShakeEffect[0x60]; // 0x0310 (Size: 0x60, Type: StructProperty)
    TScriptInterface<void> Vehicle; // 0x0370 (Size: 0x10, Type: InterfaceProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarCameraShakeComponent, ShakeIntensitySettingMap) == 192, "Offset mismatch for UDelMarCameraShakeComponent::ShakeIntensitySettingMap");
static_assert(offsetof(UDelMarCameraShakeComponent, JumpShakeEffect) == 208, "Offset mismatch for UDelMarCameraShakeComponent::JumpShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, HazardShakeEffect) == 216, "Offset mismatch for UDelMarCameraShakeComponent::HazardShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, bUseVehicleLandedKickflipShake) == 224, "Offset mismatch for UDelMarCameraShakeComponent::bUseVehicleLandedKickflipShake");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleLandedKickflipShake) == 232, "Offset mismatch for UDelMarCameraShakeComponent::VehicleLandedKickflipShake");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleLandedKickflipShakeIntensityCurve) == 240, "Offset mismatch for UDelMarCameraShakeComponent::VehicleLandedKickflipShakeIntensityCurve");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleLandedCameraShakeEffect) == 320, "Offset mismatch for UDelMarCameraShakeComponent::VehicleLandedCameraShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleLandedShakeIntensityCurve) == 328, "Offset mismatch for UDelMarCameraShakeComponent::VehicleLandedShakeIntensityCurve");
static_assert(offsetof(UDelMarCameraShakeComponent, MaxSecondsToDampenVehicleHit) == 408, "Offset mismatch for UDelMarCameraShakeComponent::MaxSecondsToDampenVehicleHit");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleHitShakeIntensityCurve) == 416, "Offset mismatch for UDelMarCameraShakeComponent::VehicleHitShakeIntensityCurve");
static_assert(offsetof(UDelMarCameraShakeComponent, VehicleImpactShakeEffect) == 496, "Offset mismatch for UDelMarCameraShakeComponent::VehicleImpactShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, WallImpactShakeEffect) == 592, "Offset mismatch for UDelMarCameraShakeComponent::WallImpactShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, WallNoRedirectImpactShakeEffect) == 688, "Offset mismatch for UDelMarCameraShakeComponent::WallNoRedirectImpactShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, BaseAccelerationShakeEffect) == 784, "Offset mismatch for UDelMarCameraShakeComponent::BaseAccelerationShakeEffect");
static_assert(offsetof(UDelMarCameraShakeComponent, Vehicle) == 880, "Offset mismatch for UDelMarCameraShakeComponent::Vehicle");
static_assert(offsetof(UDelMarCameraShakeComponent, CachedPlayerController) == 896, "Offset mismatch for UDelMarCameraShakeComponent::CachedPlayerController");

// /Script/DelMarCore.DelMarChallengeGhostSystemControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarChallengeGhostSystemControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GhostPlaybackSessionComponentClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* GhostRecordingSessionComponentClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    double BestRunTime; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    TWeakObjectPtr<void> CachedPlaybackSession; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRecordingSession; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedLocalPlayerState; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, GhostPlaybackSessionComponentClass) == 192, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::GhostPlaybackSessionComponentClass");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, GhostRecordingSessionComponentClass) == 200, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::GhostRecordingSessionComponentClass");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, BestRunTime) == 208, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::BestRunTime");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, CachedPlaybackSession) == 216, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::CachedPlaybackSession");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, CachedRecordingSession) == 224, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::CachedRecordingSession");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, CachedRaceManager) == 232, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarChallengeGhostSystemControllerComponent, CachedLocalPlayerState) == 240, "Offset mismatch for UDelMarChallengeGhostSystemControllerComponent::CachedLocalPlayerState");

// /Script/DelMarCore.DelMarChallengeRaceManager
// Kind: Class; super: DelMarRaceManager
class UDelMarChallengeRaceManager
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    std::uint8_t bIsOvertime; // 0x0428 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0429
    std::uint8_t OvertimeTimer[0x1]; // 0x0430 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarChallengeRaceManager, bIsOvertime) == 1064, "Offset mismatch for UDelMarChallengeRaceManager::bIsOvertime");
static_assert(offsetof(UDelMarChallengeRaceManager, OvertimeTimer) == 1072, "Offset mismatch for UDelMarChallengeRaceManager::OvertimeTimer");

// /Script/DelMarCore.DelMarChallengeRacerStateMachineComponent
// Kind: Class; super: DelMarRacerStateMachineComponent
class UDelMarChallengeRacerStateMachineComponent
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TWeakObjectPtr<void> RaceManager; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviousStateTag[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarChallengeRacerStateMachineComponent, RaceManager) == 392, "Offset mismatch for UDelMarChallengeRacerStateMachineComponent::RaceManager");
static_assert(offsetof(UDelMarChallengeRacerStateMachineComponent, PreviousStateTag) == 400, "Offset mismatch for UDelMarChallengeRacerStateMachineComponent::PreviousStateTag");

// /Script/DelMarCore.DelMarChallengeRacerState_RunActive
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarChallengeRacerState_RunActive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarChallengeRacerState_RunActive, StateTag) == 40, "Offset mismatch for UDelMarChallengeRacerState_RunActive::StateTag");

// /Script/DelMarCore.DelMarChallengeSpectatorControllerComponent
// Kind: Class; super: DelMarSpectatorControllerComponent
class UDelMarChallengeSpectatorControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* SpectateNextPlayerAction; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* SpectatePrevPlayerAction; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* ExitSpectateAction; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* InputManagerClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorRequestComponent; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentViewTarget; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevValidViewTarget; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorPlayerState; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorController; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsLateJoinSpectator; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, SpectateNextPlayerAction) == 192, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::SpectateNextPlayerAction");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, SpectatePrevPlayerAction) == 200, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::SpectatePrevPlayerAction");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, ExitSpectateAction) == 208, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::ExitSpectateAction");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, InputManagerClass) == 216, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::InputManagerClass");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, InputComponent) == 224, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::InputComponent");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, CachedRaceManager) == 232, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, SpectatorRequestComponent) == 240, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::SpectatorRequestComponent");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, CurrentViewTarget) == 248, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::CurrentViewTarget");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, PrevValidViewTarget) == 256, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::PrevValidViewTarget");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, SpectatorPlayerState) == 264, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::SpectatorPlayerState");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, SpectatorController) == 272, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::SpectatorController");
static_assert(offsetof(UDelMarChallengeSpectatorControllerComponent, bIsLateJoinSpectator) == 280, "Offset mismatch for UDelMarChallengeSpectatorControllerComponent::bIsLateJoinSpectator");

// /Script/DelMarCore.DelMarChallengeTimeManagerComponent
// Kind: Class; super: DelMarTimeManagerComponent
class UDelMarChallengeTimeManagerComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TSet<void*> SubsequentRunStartSet; // 0x0118 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UDelMarChallengeTimeManagerComponent, SubsequentRunStartSet) == 280, "Offset mismatch for UDelMarChallengeTimeManagerComponent::SubsequentRunStartSet");

// /Script/DelMarCore.DelMarCheatManager
// Kind: Class; super: ChildCheatManager
class UDelMarCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SafePlayerNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarCheatManager, SafePlayerNames) == 40, "Offset mismatch for UDelMarCheatManager::SafePlayerNames");

// /Script/DelMarCore.DelMarCheckpoint
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarCheckpoint
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    FMulticastInlineDelegate OnCheckpointTirggeredEvent; // 0x0B28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0B38
    std::uint8_t bIsFinishLine; // 0x0B39 (Size: 0x1, Type: BoolProperty)
    // 0x0B39 BoolProperty bIsStartingLine (shared storage)
    // 0x0B39 BoolProperty bIsTeleportEnabled (shared storage)
    // 0x0B39 BoolProperty bIsTimeTrialSectionEnd (shared storage)
    std::uint8_t Pad_0002[0x6]; // 0x0B3A
    std::uint8_t NextCheckpoints[0x10]; // 0x0B40 (Size: 0x10, Type: SetProperty)
    float DynamicSpawnOffset; // 0x0B50 (Size: 0x4, Type: FloatProperty)
    float SpawnDistanceBeforeOrAfterSplineLocation; // 0x0B54 (Size: 0x4, Type: FloatProperty)
    float BaseRadius; // 0x0B58 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0B5C
    std::uint8_t IntersectionTolerance[0x18]; // 0x0B60 (Size: 0x18, Type: StructProperty)
    std::int32_t CheckpointId; // 0x0B78 (Size: 0x4, Type: IntProperty)
    std::int32_t SplinePointIndex; // 0x0B7C (Size: 0x4, Type: IntProperty)
    void* SpawnPoint; // 0x0B80 (Size: 0x8, Type: ObjectProperty)
    void* SnapToComponent; // 0x0B88 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousCheckpoints[0x30]; // 0x0B90 (Size: 0x30, Type: SetProperty)
    std::int32_t NearestTrackIndex; // 0x0BC0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0BC4
    TArray<void*> AssociatedTracks; // 0x0BC8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ComputedCheckpointIndex; // 0x0BD8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0BDC
    void* ColliderVolume; // 0x0BE0 (Size: 0x8, Type: ObjectProperty)
    void* CheckpointTheme; // 0x0BE8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x70]; // 0x0BF0
    void* CheckpointToTeleportTo; // 0x0C60 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCheckpoint, OnCheckpointTirggeredEvent) == 2856, "Offset mismatch for UDelMarCheckpoint::OnCheckpointTirggeredEvent");
static_assert(offsetof(UDelMarCheckpoint, bIsFinishLine) == 2873, "Offset mismatch for UDelMarCheckpoint::bIsFinishLine");
static_assert(offsetof(UDelMarCheckpoint, NextCheckpoints) == 2880, "Offset mismatch for UDelMarCheckpoint::NextCheckpoints");
static_assert(offsetof(UDelMarCheckpoint, DynamicSpawnOffset) == 2896, "Offset mismatch for UDelMarCheckpoint::DynamicSpawnOffset");
static_assert(offsetof(UDelMarCheckpoint, SpawnDistanceBeforeOrAfterSplineLocation) == 2900, "Offset mismatch for UDelMarCheckpoint::SpawnDistanceBeforeOrAfterSplineLocation");
static_assert(offsetof(UDelMarCheckpoint, BaseRadius) == 2904, "Offset mismatch for UDelMarCheckpoint::BaseRadius");
static_assert(offsetof(UDelMarCheckpoint, IntersectionTolerance) == 2912, "Offset mismatch for UDelMarCheckpoint::IntersectionTolerance");
static_assert(offsetof(UDelMarCheckpoint, CheckpointId) == 2936, "Offset mismatch for UDelMarCheckpoint::CheckpointId");
static_assert(offsetof(UDelMarCheckpoint, SplinePointIndex) == 2940, "Offset mismatch for UDelMarCheckpoint::SplinePointIndex");
static_assert(offsetof(UDelMarCheckpoint, SpawnPoint) == 2944, "Offset mismatch for UDelMarCheckpoint::SpawnPoint");
static_assert(offsetof(UDelMarCheckpoint, SnapToComponent) == 2952, "Offset mismatch for UDelMarCheckpoint::SnapToComponent");
static_assert(offsetof(UDelMarCheckpoint, PreviousCheckpoints) == 2960, "Offset mismatch for UDelMarCheckpoint::PreviousCheckpoints");
static_assert(offsetof(UDelMarCheckpoint, NearestTrackIndex) == 3008, "Offset mismatch for UDelMarCheckpoint::NearestTrackIndex");
static_assert(offsetof(UDelMarCheckpoint, AssociatedTracks) == 3016, "Offset mismatch for UDelMarCheckpoint::AssociatedTracks");
static_assert(offsetof(UDelMarCheckpoint, ComputedCheckpointIndex) == 3032, "Offset mismatch for UDelMarCheckpoint::ComputedCheckpointIndex");
static_assert(offsetof(UDelMarCheckpoint, ColliderVolume) == 3040, "Offset mismatch for UDelMarCheckpoint::ColliderVolume");
static_assert(offsetof(UDelMarCheckpoint, CheckpointTheme) == 3048, "Offset mismatch for UDelMarCheckpoint::CheckpointTheme");
static_assert(offsetof(UDelMarCheckpoint, CheckpointToTeleportTo) == 3168, "Offset mismatch for UDelMarCheckpoint::CheckpointToTeleportTo");

// /Script/DelMarCore.DelMarCheckpointManagerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarCheckpointManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bPromptFirstPlaceEvent; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    TWeakObjectPtr<void> StartingLineCheckpoint; // 0x00C4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FinishLineCheckpoint; // 0x00CC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00D4
    TSet<void*> LevelCheckpoints; // 0x00D8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UDelMarCheckpointManagerComponent, bPromptFirstPlaceEvent) == 192, "Offset mismatch for UDelMarCheckpointManagerComponent::bPromptFirstPlaceEvent");
static_assert(offsetof(UDelMarCheckpointManagerComponent, StartingLineCheckpoint) == 196, "Offset mismatch for UDelMarCheckpointManagerComponent::StartingLineCheckpoint");
static_assert(offsetof(UDelMarCheckpointManagerComponent, FinishLineCheckpoint) == 204, "Offset mismatch for UDelMarCheckpointManagerComponent::FinishLineCheckpoint");
static_assert(offsetof(UDelMarCheckpointManagerComponent, LevelCheckpoints) == 216, "Offset mismatch for UDelMarCheckpointManagerComponent::LevelCheckpoints");

// /Script/DelMarCore.DelMarCheckpointTheme
// Kind: Class; super: PrimaryDataAsset
class UDelMarCheckpointTheme
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RimMesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DefaultTentMesh; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DefaultHoloMesh; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* StartLineTentMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* StartLineHoloMesh; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCheckpointTheme, RimMesh) == 40, "Offset mismatch for UDelMarCheckpointTheme::RimMesh");
static_assert(offsetof(UDelMarCheckpointTheme, DefaultTentMesh) == 48, "Offset mismatch for UDelMarCheckpointTheme::DefaultTentMesh");
static_assert(offsetof(UDelMarCheckpointTheme, DefaultHoloMesh) == 56, "Offset mismatch for UDelMarCheckpointTheme::DefaultHoloMesh");
static_assert(offsetof(UDelMarCheckpointTheme, StartLineTentMesh) == 64, "Offset mismatch for UDelMarCheckpointTheme::StartLineTentMesh");
static_assert(offsetof(UDelMarCheckpointTheme, StartLineHoloMesh) == 72, "Offset mismatch for UDelMarCheckpointTheme::StartLineHoloMesh");

// /Script/DelMarCore.DelMarClientReplayRecordingComponent
// Kind: Class; super: ControllerComponent
class UDelMarClientReplayRecordingComponent
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

static_assert(offsetof(UDelMarClientReplayRecordingComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarClientReplayRecordingComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, ComponentTags) == 104, "Offset mismatch for UDelMarClientReplayRecordingComponent::ComponentTags");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, AssetUserData) == 120, "Offset mismatch for UDelMarClientReplayRecordingComponent::AssetUserData");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarClientReplayRecordingComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarClientReplayRecordingComponent::bNetAddressable");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarClientReplayRecordingComponent::bAutoActivate");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarClientReplayRecordingComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, CreationMethod) == 185, "Offset mismatch for UDelMarClientReplayRecordingComponent::CreationMethod");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarClientReplayRecordingComponent::OnComponentActivated");
static_assert(offsetof(UDelMarClientReplayRecordingComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarClientReplayRecordingComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarCompetitiveRaceManager
// Kind: Class; super: DelMarRaceManager
class UDelMarCompetitiveRaceManager
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    float FinishRaceAfterFirstPlayerFinishedSeconds; // 0x0428 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x042C
    double FirstPlayerFinishedTimestamp; // 0x0438 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UDelMarCompetitiveRaceManager, FinishRaceAfterFirstPlayerFinishedSeconds) == 1064, "Offset mismatch for UDelMarCompetitiveRaceManager::FinishRaceAfterFirstPlayerFinishedSeconds");
static_assert(offsetof(UDelMarCompetitiveRaceManager, FirstPlayerFinishedTimestamp) == 1080, "Offset mismatch for UDelMarCompetitiveRaceManager::FirstPlayerFinishedTimestamp");

// /Script/DelMarCore.DelMarCompetitiveRacerStateMachineComponent
// Kind: Class; super: DelMarRacerStateMachineComponent
class UDelMarCompetitiveRacerStateMachineComponent
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TWeakObjectPtr<void> RaceManager; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviousStateTag[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarCompetitiveRacerStateMachineComponent, RaceManager) == 392, "Offset mismatch for UDelMarCompetitiveRacerStateMachineComponent::RaceManager");
static_assert(offsetof(UDelMarCompetitiveRacerStateMachineComponent, PreviousStateTag) == 400, "Offset mismatch for UDelMarCompetitiveRacerStateMachineComponent::PreviousStateTag");

// /Script/DelMarCore.DelMarCompetitiveRacerState_RunActive
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarCompetitiveRacerState_RunActive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarCompetitiveRacerState_RunActive, StateTag) == 40, "Offset mismatch for UDelMarCompetitiveRacerState_RunActive::StateTag");

// /Script/DelMarCore.DelMarCompetitiveRacerState_RunFinished
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarCompetitiveRacerState_RunFinished
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarCompetitiveRacerState_RunFinished, StateTag) == 40, "Offset mismatch for UDelMarCompetitiveRacerState_RunFinished::StateTag");

// /Script/DelMarCore.DelMarConnectedHintComponent
// Kind: Class; super: ActorComponent
class UDelMarConnectedHintComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bShouldShowHint; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* VehicleActionClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAcceptMultipleTags; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D1
    std::uint8_t MultipleTagContainer[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> CachedVehicle; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    void* VehicleAction; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarConnectedHintComponent, bShouldShowHint) == 192, "Offset mismatch for UDelMarConnectedHintComponent::bShouldShowHint");
static_assert(offsetof(UDelMarConnectedHintComponent, VehicleActionClass) == 200, "Offset mismatch for UDelMarConnectedHintComponent::VehicleActionClass");
static_assert(offsetof(UDelMarConnectedHintComponent, bAcceptMultipleTags) == 208, "Offset mismatch for UDelMarConnectedHintComponent::bAcceptMultipleTags");
static_assert(offsetof(UDelMarConnectedHintComponent, MultipleTagContainer) == 216, "Offset mismatch for UDelMarConnectedHintComponent::MultipleTagContainer");
static_assert(offsetof(UDelMarConnectedHintComponent, CachedVehicle) == 248, "Offset mismatch for UDelMarConnectedHintComponent::CachedVehicle");
static_assert(offsetof(UDelMarConnectedHintComponent, VehicleAction) == 256, "Offset mismatch for UDelMarConnectedHintComponent::VehicleAction");

// /Script/DelMarCore.DelMarConsoleVariableMutator
// Kind: Class; super: DelMarMutator
class UDelMarConsoleVariableMutator
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    FString VariableName; // 0x02E8 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x02F8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarConsoleVariableMutator, VariableName) == 744, "Offset mismatch for UDelMarConsoleVariableMutator::VariableName");
static_assert(offsetof(UDelMarConsoleVariableMutator, Value) == 760, "Offset mismatch for UDelMarConsoleVariableMutator::Value");

// /Script/DelMarCore.DelMarContextualHintComponent
// Kind: Class; super: ControllerComponent
class UDelMarContextualHintComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t HazardHitHint[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    TMap<void*, void*> DemolishedByHints; // 0x0108 (Size: 0x10, Type: MapProperty)
    std::uint8_t SlowerTerrainHint[0x48]; // 0x0118 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> Vehicle; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x0168 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarContextualHintComponent, HazardHitHint) == 192, "Offset mismatch for UDelMarContextualHintComponent::HazardHitHint");
static_assert(offsetof(UDelMarContextualHintComponent, DemolishedByHints) == 264, "Offset mismatch for UDelMarContextualHintComponent::DemolishedByHints");
static_assert(offsetof(UDelMarContextualHintComponent, SlowerTerrainHint) == 280, "Offset mismatch for UDelMarContextualHintComponent::SlowerTerrainHint");
static_assert(offsetof(UDelMarContextualHintComponent, Vehicle) == 352, "Offset mismatch for UDelMarContextualHintComponent::Vehicle");
static_assert(offsetof(UDelMarContextualHintComponent, CachedPlayerController) == 360, "Offset mismatch for UDelMarContextualHintComponent::CachedPlayerController");

// /Script/DelMarCore.DelMarCoreOobTubePositionalRenderingComponent
// Kind: Class; super: DelMarTrackOobTubePositionalRenderingComponent
class UDelMarCoreOobTubePositionalRenderingComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TWeakObjectPtr<void> ViewTargetPlayerState; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarCoreOobTubePositionalRenderingComponent, ViewTargetPlayerState) == 240, "Offset mismatch for UDelMarCoreOobTubePositionalRenderingComponent::ViewTargetPlayerState");

// /Script/DelMarCore.DelMarCoreSplineMeshComponent
// Kind: Class; super: SplineMeshComponent
class UDelMarCoreSplineMeshComponent
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    std::uint8_t SplineParams[0xB0]; // 0x06B8 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SplineUpDir[0x18]; // 0x0768 (Size: 0x18, Type: StructProperty)
    float SplineBoundaryMin; // 0x0780 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedMeshBodySetupGuid[0x10]; // 0x0784 (Size: 0x10, Type: StructProperty)
    float VirtualTextureMainPassMaxDrawDistance; // 0x0794 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0798
    void* BodySetup; // 0x07D0 (Size: 0x8, Type: ObjectProperty)
    float SplineBoundaryMax; // 0x07D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForwardAxis; // 0x07DC (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowSplineEditingPerInstance; // 0x07DD (Size: 0x1, Type: BoolProperty)
    // 0x07DD BoolProperty bMeshDirty (shared storage)
    // 0x07DD BoolProperty bNeverNeedsCookedCollisionData (shared storage)
    // 0x07DD BoolProperty bSmoothInterpRollScale (shared storage)
};

static_assert(offsetof(UDelMarCoreSplineMeshComponent, SplineParams) == 1720, "Offset mismatch for UDelMarCoreSplineMeshComponent::SplineParams");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, SplineUpDir) == 1896, "Offset mismatch for UDelMarCoreSplineMeshComponent::SplineUpDir");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, SplineBoundaryMin) == 1920, "Offset mismatch for UDelMarCoreSplineMeshComponent::SplineBoundaryMin");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, CachedMeshBodySetupGuid) == 1924, "Offset mismatch for UDelMarCoreSplineMeshComponent::CachedMeshBodySetupGuid");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, VirtualTextureMainPassMaxDrawDistance) == 1940, "Offset mismatch for UDelMarCoreSplineMeshComponent::VirtualTextureMainPassMaxDrawDistance");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, BodySetup) == 2000, "Offset mismatch for UDelMarCoreSplineMeshComponent::BodySetup");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, SplineBoundaryMax) == 2008, "Offset mismatch for UDelMarCoreSplineMeshComponent::SplineBoundaryMax");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, ForwardAxis) == 2012, "Offset mismatch for UDelMarCoreSplineMeshComponent::ForwardAxis");
static_assert(offsetof(UDelMarCoreSplineMeshComponent, bAllowSplineEditingPerInstance) == 2013, "Offset mismatch for UDelMarCoreSplineMeshComponent::bAllowSplineEditingPerInstance");

// /Script/DelMarCore.DelMarCosmeticActor
// Kind: Class; super: Actor
class UDelMarCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SpawnLogic; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CosmeticDependencies; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TScriptInterface<void> Vehicle; // 0x0288 (Size: 0x10, Type: InterfaceProperty)
    void* VehicleConfig; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* VehicleCosmeticComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCosmeticActor, SpawnLogic) == 624, "Offset mismatch for UDelMarCosmeticActor::SpawnLogic");
static_assert(offsetof(UDelMarCosmeticActor, CosmeticDependencies) == 632, "Offset mismatch for UDelMarCosmeticActor::CosmeticDependencies");
static_assert(offsetof(UDelMarCosmeticActor, Vehicle) == 648, "Offset mismatch for UDelMarCosmeticActor::Vehicle");
static_assert(offsetof(UDelMarCosmeticActor, VehicleConfig) == 664, "Offset mismatch for UDelMarCosmeticActor::VehicleConfig");
static_assert(offsetof(UDelMarCosmeticActor, VehicleCosmeticComponent) == 672, "Offset mismatch for UDelMarCosmeticActor::VehicleCosmeticComponent");

// /Script/DelMarCore.DelMarCosmeticActorSpawnLogic
// Kind: Class; super: Object
class UDelMarCosmeticActorSpawnLogic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachTo
// Kind: Class; super: DelMarCosmeticActorSpawnLogic
class UDelMarCosmeticActorSpawnLogic_AttachTo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName AttachSocket; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_AttachTo, AttachSocket) == 40, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_AttachTo::AttachSocket");

// /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachToEach
// Kind: Class; super: DelMarCosmeticActorSpawnLogic
class UDelMarCosmeticActorSpawnLogic_AttachToEach
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AttachSockets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_AttachToEach, AttachSockets) == 40, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_AttachToEach::AttachSockets");

// /Script/DelMarCore.DelMarCosmeticItemDefinition
// Kind: Class; super: FortAccountItemDefinition
class UDelMarCosmeticItemDefinition
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Slot[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    TArray<void*> CosmeticActorClasses; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarCosmeticItemDefinition, Slot) == 296, "Offset mismatch for UDelMarCosmeticItemDefinition::Slot");
static_assert(offsetof(UDelMarCosmeticItemDefinition, CosmeticActorClasses) == 304, "Offset mismatch for UDelMarCosmeticItemDefinition::CosmeticActorClasses");

// /Script/DelMarCore.DelMarCosmeticsDatabase
// Kind: Class; super: PrimaryDataAsset
class UDelMarCosmeticsDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotInfos; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarCosmeticsDatabase, Items) == 40, "Offset mismatch for UDelMarCosmeticsDatabase::Items");
static_assert(offsetof(UDelMarCosmeticsDatabase, SlotInfos) == 56, "Offset mismatch for UDelMarCosmeticsDatabase::SlotInfos");

// /Script/DelMarCore.DelMarDeathRaceManager
// Kind: Class; super: DelMarRaceManager
class UDelMarDeathRaceManager
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    float NextRoundSeconds; // 0x0428 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x042C
    std::uint8_t DeathRaceConfigData[0x20]; // 0x0430 (Size: 0x20, Type: StructProperty)
    std::int32_t NumPlayersFinished; // 0x0450 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarDeathRaceManager, NextRoundSeconds) == 1064, "Offset mismatch for UDelMarDeathRaceManager::NextRoundSeconds");
static_assert(offsetof(UDelMarDeathRaceManager, DeathRaceConfigData) == 1072, "Offset mismatch for UDelMarDeathRaceManager::DeathRaceConfigData");
static_assert(offsetof(UDelMarDeathRaceManager, NumPlayersFinished) == 1104, "Offset mismatch for UDelMarDeathRaceManager::NumPlayersFinished");

// /Script/DelMarCore.DelMarDeathRacerStateMachineComponent
// Kind: Class; super: DelMarRacerStateMachineComponent
class UDelMarDeathRacerStateMachineComponent
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TWeakObjectPtr<void> RaceManager; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviousStateTag[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarDeathRacerStateMachineComponent, RaceManager) == 392, "Offset mismatch for UDelMarDeathRacerStateMachineComponent::RaceManager");
static_assert(offsetof(UDelMarDeathRacerStateMachineComponent, PreviousStateTag) == 400, "Offset mismatch for UDelMarDeathRacerStateMachineComponent::PreviousStateTag");

// /Script/DelMarCore.DelMarDeathRacerState_ActiveRace
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarDeathRacerState_ActiveRace
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> DeathRaceManager; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bFinishedRound; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarDeathRacerState_ActiveRace, DeathRaceManager) == 48, "Offset mismatch for UDelMarDeathRacerState_ActiveRace::DeathRaceManager");
static_assert(offsetof(UDelMarDeathRacerState_ActiveRace, bFinishedRound) == 56, "Offset mismatch for UDelMarDeathRacerState_ActiveRace::bFinishedRound");

// /Script/DelMarCore.DelMarDeathRacerState_FinishedRace
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarDeathRacerState_FinishedRace
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarDeathRacerState_FinishedRace, StateTag) == 40, "Offset mismatch for UDelMarDeathRacerState_FinishedRace::StateTag");

// /Script/DelMarCore.DelMarDoubleTapInputTrigger
// Kind: Class; super: InputTrigger
class UDelMarDoubleTapInputTrigger
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float Delay; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDoubleTapInputTrigger, Delay) == 80, "Offset mismatch for UDelMarDoubleTapInputTrigger::Delay");

// /Script/DelMarCore.DelMarDriveParticlesPhysMatAttribute
// Kind: Class; super: DelMarPhysMatAttribute
class UDelMarDriveParticlesPhysMatAttribute
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DriveParticles; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDriveParticlesPhysMatAttribute, DriveParticles) == 40, "Offset mismatch for UDelMarDriveParticlesPhysMatAttribute::DriveParticles");

// /Script/DelMarCore.DelMarDriverInteractionComponent
// Kind: Class; super: ControllerComponent
class UDelMarDriverInteractionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ViewPlayerState; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ViewVehicle; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D0
    float PassEventSquareDistThreshold; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    void* RaceData; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDriverInteractionComponent, ViewPlayerState) == 192, "Offset mismatch for UDelMarDriverInteractionComponent::ViewPlayerState");
static_assert(offsetof(UDelMarDriverInteractionComponent, ViewVehicle) == 200, "Offset mismatch for UDelMarDriverInteractionComponent::ViewVehicle");
static_assert(offsetof(UDelMarDriverInteractionComponent, PassEventSquareDistThreshold) == 256, "Offset mismatch for UDelMarDriverInteractionComponent::PassEventSquareDistThreshold");
static_assert(offsetof(UDelMarDriverInteractionComponent, RaceData) == 264, "Offset mismatch for UDelMarDriverInteractionComponent::RaceData");

// /Script/DelMarCore.DelMarEliminationRaceManagerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarEliminationRaceManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> EliminationsConfig; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ParsedNumberOfPlayersToEliminate; // 0x00D0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarEliminationRaceManagerComponent, EliminationsConfig) == 192, "Offset mismatch for UDelMarEliminationRaceManagerComponent::EliminationsConfig");
static_assert(offsetof(UDelMarEliminationRaceManagerComponent, ParsedNumberOfPlayersToEliminate) == 208, "Offset mismatch for UDelMarEliminationRaceManagerComponent::ParsedNumberOfPlayersToEliminate");

// /Script/DelMarCore.DelMarEnvironmentEffectCueNotify_Actor
// Kind: Class; super: GameplayCueNotify_Actor
class UDelMarEnvironmentEffectCueNotify_Actor
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    std::uint8_t Effects[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowOnAllClients; // 0x02D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarEnvironmentEffectCueNotify_Actor, Effects) == 696, "Offset mismatch for UDelMarEnvironmentEffectCueNotify_Actor::Effects");
static_assert(offsetof(UDelMarEnvironmentEffectCueNotify_Actor, bShowOnAllClients) == 720, "Offset mismatch for UDelMarEnvironmentEffectCueNotify_Actor::bShowOnAllClients");

// /Script/DelMarCore.DelMarEnvironmentEffectsVolume
// Kind: Class; super: Actor
class UDelMarEnvironmentEffectsVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* AppliedEffect; // 0x0270 (Size: 0x8, Type: ClassProperty)
    void* BoxCollider; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarEnvironmentEffectsVolume, AppliedEffect) == 624, "Offset mismatch for UDelMarEnvironmentEffectsVolume::AppliedEffect");
static_assert(offsetof(UDelMarEnvironmentEffectsVolume, BoxCollider) == 632, "Offset mismatch for UDelMarEnvironmentEffectsVolume::BoxCollider");

// /Script/DelMarCore.DelMarEvent_AttachmentChanged
// Kind: Class; super: Object
class UDelMarEvent_AttachmentChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> PlayerAttachedTo; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevPlayerAttachedTo; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarEvent_AttachmentChanged, PlayerAttachedTo) == 40, "Offset mismatch for UDelMarEvent_AttachmentChanged::PlayerAttachedTo");
static_assert(offsetof(UDelMarEvent_AttachmentChanged, PrevPlayerAttachedTo) == 48, "Offset mismatch for UDelMarEvent_AttachmentChanged::PrevPlayerAttachedTo");

// /Script/DelMarCore.DelMarEvent_FinalFirstPlaceChanged
// Kind: Class; super: Object
class UDelMarEvent_FinalFirstPlaceChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> NewFirstPlace; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevFirstPlace; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarEvent_FinalFirstPlaceChanged, NewFirstPlace) == 40, "Offset mismatch for UDelMarEvent_FinalFirstPlaceChanged::NewFirstPlace");
static_assert(offsetof(UDelMarEvent_FinalFirstPlaceChanged, PrevFirstPlace) == 48, "Offset mismatch for UDelMarEvent_FinalFirstPlaceChanged::PrevFirstPlace");

// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardActive
// Kind: Class; super: Object
class UDelMarEvent_GlobalLeaderboardActive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString LeaderboardEventId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString LeaderboardWindowId; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarEvent_GlobalLeaderboardActive, LeaderboardEventId) == 40, "Offset mismatch for UDelMarEvent_GlobalLeaderboardActive::LeaderboardEventId");
static_assert(offsetof(UDelMarEvent_GlobalLeaderboardActive, LeaderboardWindowId) == 56, "Offset mismatch for UDelMarEvent_GlobalLeaderboardActive::LeaderboardWindowId");

// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardPersonalBestRetrieved
// Kind: Class; super: Object
class UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PersonalBest[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved, PersonalBest) == 40, "Offset mismatch for UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved::PersonalBest");

// /Script/DelMarCore.DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarEvent_PlayerFinishRace
// Kind: Class; super: Object
class UDelMarEvent_PlayerFinishRace
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double RunTime; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bValidRun; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarEvent_PlayerFinishRace, RunTime) == 40, "Offset mismatch for UDelMarEvent_PlayerFinishRace::RunTime");
static_assert(offsetof(UDelMarEvent_PlayerFinishRace, bValidRun) == 48, "Offset mismatch for UDelMarEvent_PlayerFinishRace::bValidRun");

// /Script/DelMarCore.DelMarEvent_PlayerInVehicle
// Kind: Class; super: Object
class UDelMarEvent_PlayerInVehicle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> DelMarVehicle; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t SeatIndex; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarEvent_PlayerInVehicle, DelMarVehicle) == 40, "Offset mismatch for UDelMarEvent_PlayerInVehicle::DelMarVehicle");
static_assert(offsetof(UDelMarEvent_PlayerInVehicle, SeatIndex) == 48, "Offset mismatch for UDelMarEvent_PlayerInVehicle::SeatIndex");

// /Script/DelMarCore.DelMarEvent_PlayerPointsChanged
// Kind: Class; super: Object
class UDelMarEvent_PlayerPointsChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t PreviousPoints; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPoints; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarEvent_PlayerPointsChanged, PreviousPoints) == 40, "Offset mismatch for UDelMarEvent_PlayerPointsChanged::PreviousPoints");
static_assert(offsetof(UDelMarEvent_PlayerPointsChanged, CurrentPoints) == 44, "Offset mismatch for UDelMarEvent_PlayerPointsChanged::CurrentPoints");

// /Script/DelMarCore.DelMarEvent_VehicleDemolish
// Kind: Class; super: Object
class UDelMarEvent_VehicleDemolish
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DemolishReason[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> Vehicle; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarEvent_VehicleDemolish, DemolishReason) == 40, "Offset mismatch for UDelMarEvent_VehicleDemolish::DemolishReason");
static_assert(offsetof(UDelMarEvent_VehicleDemolish, Vehicle) == 44, "Offset mismatch for UDelMarEvent_VehicleDemolish::Vehicle");

// /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarFlowAnalyticsControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString FlowAnalyicsEventName; // 0x00C0 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> PlayerController; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarFlowAnalyticsControllerComponent, FlowAnalyicsEventName) == 192, "Offset mismatch for UDelMarFlowAnalyticsControllerComponent::FlowAnalyicsEventName");
static_assert(offsetof(UDelMarFlowAnalyticsControllerComponent, PlayerController) == 208, "Offset mismatch for UDelMarFlowAnalyticsControllerComponent::PlayerController");

// /Script/DelMarCore.DelMarGameAnalyticsComponent
// Kind: Class; super: GameStateComponent
class UDelMarGameAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedGameState; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    TMap<void*, void*> TrackQuestUsageRaceModes; // 0x00D8 (Size: 0x10, Type: MapProperty)
    TArray<void*> CachedOpenedQuestPlayers; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarGameAnalyticsComponent, CachedGameState) == 192, "Offset mismatch for UDelMarGameAnalyticsComponent::CachedGameState");
static_assert(offsetof(UDelMarGameAnalyticsComponent, CachedRaceManager) == 200, "Offset mismatch for UDelMarGameAnalyticsComponent::CachedRaceManager");
static_assert(offsetof(UDelMarGameAnalyticsComponent, TrackQuestUsageRaceModes) == 216, "Offset mismatch for UDelMarGameAnalyticsComponent::TrackQuestUsageRaceModes");
static_assert(offsetof(UDelMarGameAnalyticsComponent, CachedOpenedQuestPlayers) == 232, "Offset mismatch for UDelMarGameAnalyticsComponent::CachedOpenedQuestPlayers");

// /Script/DelMarCore.DelMarGameStateMachine
// Kind: Class; super: DelMarStateMachine
class UDelMarGameStateMachine
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> StateOverrides; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StateMappings; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t RequestedStateTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentStateTag[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultStateTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    TArray<void*> ActiveStates; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedStates; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WaitingForStateReplicationTag[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarGameStateMachine, StateOverrides) == 192, "Offset mismatch for UDelMarGameStateMachine::StateOverrides");
static_assert(offsetof(UDelMarGameStateMachine, StateMappings) == 208, "Offset mismatch for UDelMarGameStateMachine::StateMappings");
static_assert(offsetof(UDelMarGameStateMachine, RequestedStateTag) == 224, "Offset mismatch for UDelMarGameStateMachine::RequestedStateTag");
static_assert(offsetof(UDelMarGameStateMachine, CurrentStateTag) == 228, "Offset mismatch for UDelMarGameStateMachine::CurrentStateTag");
static_assert(offsetof(UDelMarGameStateMachine, DefaultStateTag) == 232, "Offset mismatch for UDelMarGameStateMachine::DefaultStateTag");
static_assert(offsetof(UDelMarGameStateMachine, ActiveStates) == 240, "Offset mismatch for UDelMarGameStateMachine::ActiveStates");
static_assert(offsetof(UDelMarGameStateMachine, ReplicatedStates) == 256, "Offset mismatch for UDelMarGameStateMachine::ReplicatedStates");
static_assert(offsetof(UDelMarGameStateMachine, WaitingForStateReplicationTag) == 272, "Offset mismatch for UDelMarGameStateMachine::WaitingForStateReplicationTag");

// /Script/DelMarCore.DelMarGameUserSettings
// Kind: Class; super: Object
class UDelMarGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NuxLastViewedVideoVersion; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNuxHasPromptedToPlayTutorial; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPromptedToPlaySpeedRun; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNuxHasShownDefaultMode; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002F
    FString LastPlayedDelMarMnemonic; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarGameUserSettings, NuxLastViewedVideoVersion) == 40, "Offset mismatch for UDelMarGameUserSettings::NuxLastViewedVideoVersion");
static_assert(offsetof(UDelMarGameUserSettings, bNuxHasPromptedToPlayTutorial) == 44, "Offset mismatch for UDelMarGameUserSettings::bNuxHasPromptedToPlayTutorial");
static_assert(offsetof(UDelMarGameUserSettings, bHasPromptedToPlaySpeedRun) == 45, "Offset mismatch for UDelMarGameUserSettings::bHasPromptedToPlaySpeedRun");
static_assert(offsetof(UDelMarGameUserSettings, bNuxHasShownDefaultMode) == 46, "Offset mismatch for UDelMarGameUserSettings::bNuxHasShownDefaultMode");
static_assert(offsetof(UDelMarGameUserSettings, LastPlayedDelMarMnemonic) == 48, "Offset mismatch for UDelMarGameUserSettings::LastPlayedDelMarMnemonic");

// /Script/DelMarCore.DelMarGameplayModifier
// Kind: Class; super: Actor
class UDelMarGameplayModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarGameplayModifier, PrimaryActorTick) == 40, "Offset mismatch for UDelMarGameplayModifier::PrimaryActorTick");
static_assert(offsetof(UDelMarGameplayModifier, bAlwaysRelevant) == 88, "Offset mismatch for UDelMarGameplayModifier::bAlwaysRelevant");
static_assert(offsetof(UDelMarGameplayModifier, bExchangedRoles) == 89, "Offset mismatch for UDelMarGameplayModifier::bExchangedRoles");
static_assert(offsetof(UDelMarGameplayModifier, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UDelMarGameplayModifier::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UDelMarGameplayModifier, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UDelMarGameplayModifier::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UDelMarGameplayModifier, bActorEnableCollision) == 93, "Offset mismatch for UDelMarGameplayModifier::bActorEnableCollision");
static_assert(offsetof(UDelMarGameplayModifier, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UDelMarGameplayModifier::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UDelMarGameplayModifier, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UDelMarGameplayModifier::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UDelMarGameplayModifier, RemoteRole) == 96, "Offset mismatch for UDelMarGameplayModifier::RemoteRole");
static_assert(offsetof(UDelMarGameplayModifier, InitialLifeSpan) == 100, "Offset mismatch for UDelMarGameplayModifier::InitialLifeSpan");
static_assert(offsetof(UDelMarGameplayModifier, CustomTimeDilation) == 104, "Offset mismatch for UDelMarGameplayModifier::CustomTimeDilation");
static_assert(offsetof(UDelMarGameplayModifier, RayTracingGroupId) == 108, "Offset mismatch for UDelMarGameplayModifier::RayTracingGroupId");
static_assert(offsetof(UDelMarGameplayModifier, AttachmentReplication) == 112, "Offset mismatch for UDelMarGameplayModifier::AttachmentReplication");
static_assert(offsetof(UDelMarGameplayModifier, ReplicatedMovement) == 208, "Offset mismatch for UDelMarGameplayModifier::ReplicatedMovement");
static_assert(offsetof(UDelMarGameplayModifier, Owner) == 344, "Offset mismatch for UDelMarGameplayModifier::Owner");
static_assert(offsetof(UDelMarGameplayModifier, NetDriverName) == 352, "Offset mismatch for UDelMarGameplayModifier::NetDriverName");
static_assert(offsetof(UDelMarGameplayModifier, Role) == 356, "Offset mismatch for UDelMarGameplayModifier::Role");
static_assert(offsetof(UDelMarGameplayModifier, NetDormancy) == 357, "Offset mismatch for UDelMarGameplayModifier::NetDormancy");
static_assert(offsetof(UDelMarGameplayModifier, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UDelMarGameplayModifier::SpawnCollisionHandlingMethod");
static_assert(offsetof(UDelMarGameplayModifier, AutoReceiveInput) == 359, "Offset mismatch for UDelMarGameplayModifier::AutoReceiveInput");
static_assert(offsetof(UDelMarGameplayModifier, InputPriority) == 360, "Offset mismatch for UDelMarGameplayModifier::InputPriority");
static_assert(offsetof(UDelMarGameplayModifier, InputComponent) == 368, "Offset mismatch for UDelMarGameplayModifier::InputComponent");
static_assert(offsetof(UDelMarGameplayModifier, NetTag) == 376, "Offset mismatch for UDelMarGameplayModifier::NetTag");
static_assert(offsetof(UDelMarGameplayModifier, NetCullDistanceSquared) == 380, "Offset mismatch for UDelMarGameplayModifier::NetCullDistanceSquared");
static_assert(offsetof(UDelMarGameplayModifier, NetUpdateFrequency) == 384, "Offset mismatch for UDelMarGameplayModifier::NetUpdateFrequency");
static_assert(offsetof(UDelMarGameplayModifier, MinNetUpdateFrequency) == 388, "Offset mismatch for UDelMarGameplayModifier::MinNetUpdateFrequency");
static_assert(offsetof(UDelMarGameplayModifier, NetPriority) == 392, "Offset mismatch for UDelMarGameplayModifier::NetPriority");
static_assert(offsetof(UDelMarGameplayModifier, PhysicsReplicationMode) == 396, "Offset mismatch for UDelMarGameplayModifier::PhysicsReplicationMode");
static_assert(offsetof(UDelMarGameplayModifier, Instigator) == 408, "Offset mismatch for UDelMarGameplayModifier::Instigator");
static_assert(offsetof(UDelMarGameplayModifier, Children) == 416, "Offset mismatch for UDelMarGameplayModifier::Children");
static_assert(offsetof(UDelMarGameplayModifier, RootComponent) == 432, "Offset mismatch for UDelMarGameplayModifier::RootComponent");
static_assert(offsetof(UDelMarGameplayModifier, HLODLayer) == 448, "Offset mismatch for UDelMarGameplayModifier::HLODLayer");
static_assert(offsetof(UDelMarGameplayModifier, Layers) == 456, "Offset mismatch for UDelMarGameplayModifier::Layers");
static_assert(offsetof(UDelMarGameplayModifier, ParentComponent) == 472, "Offset mismatch for UDelMarGameplayModifier::ParentComponent");
static_assert(offsetof(UDelMarGameplayModifier, Tags) == 496, "Offset mismatch for UDelMarGameplayModifier::Tags");
static_assert(offsetof(UDelMarGameplayModifier, OnTakeAnyDamage) == 512, "Offset mismatch for UDelMarGameplayModifier::OnTakeAnyDamage");
static_assert(offsetof(UDelMarGameplayModifier, OnTakePointDamage) == 513, "Offset mismatch for UDelMarGameplayModifier::OnTakePointDamage");
static_assert(offsetof(UDelMarGameplayModifier, OnTakeRadialDamage) == 514, "Offset mismatch for UDelMarGameplayModifier::OnTakeRadialDamage");
static_assert(offsetof(UDelMarGameplayModifier, OnActorBeginOverlap) == 515, "Offset mismatch for UDelMarGameplayModifier::OnActorBeginOverlap");
static_assert(offsetof(UDelMarGameplayModifier, OnActorEndOverlap) == 516, "Offset mismatch for UDelMarGameplayModifier::OnActorEndOverlap");
static_assert(offsetof(UDelMarGameplayModifier, OnBeginCursorOver) == 517, "Offset mismatch for UDelMarGameplayModifier::OnBeginCursorOver");
static_assert(offsetof(UDelMarGameplayModifier, OnEndCursorOver) == 518, "Offset mismatch for UDelMarGameplayModifier::OnEndCursorOver");
static_assert(offsetof(UDelMarGameplayModifier, OnClicked) == 519, "Offset mismatch for UDelMarGameplayModifier::OnClicked");
static_assert(offsetof(UDelMarGameplayModifier, OnReleased) == 520, "Offset mismatch for UDelMarGameplayModifier::OnReleased");
static_assert(offsetof(UDelMarGameplayModifier, OnInputTouchBegin) == 521, "Offset mismatch for UDelMarGameplayModifier::OnInputTouchBegin");
static_assert(offsetof(UDelMarGameplayModifier, OnInputTouchEnd) == 522, "Offset mismatch for UDelMarGameplayModifier::OnInputTouchEnd");
static_assert(offsetof(UDelMarGameplayModifier, OnInputTouchEnter) == 523, "Offset mismatch for UDelMarGameplayModifier::OnInputTouchEnter");
static_assert(offsetof(UDelMarGameplayModifier, OnInputTouchLeave) == 524, "Offset mismatch for UDelMarGameplayModifier::OnInputTouchLeave");
static_assert(offsetof(UDelMarGameplayModifier, OnActorHit) == 525, "Offset mismatch for UDelMarGameplayModifier::OnActorHit");
static_assert(offsetof(UDelMarGameplayModifier, OnDestroyed) == 526, "Offset mismatch for UDelMarGameplayModifier::OnDestroyed");
static_assert(offsetof(UDelMarGameplayModifier, OnEndPlay) == 527, "Offset mismatch for UDelMarGameplayModifier::OnEndPlay");
static_assert(offsetof(UDelMarGameplayModifier, InstanceComponents) == 592, "Offset mismatch for UDelMarGameplayModifier::InstanceComponents");
static_assert(offsetof(UDelMarGameplayModifier, BlueprintCreatedComponents) == 608, "Offset mismatch for UDelMarGameplayModifier::BlueprintCreatedComponents");

// /Script/DelMarCore.DelMarGameplayModifierComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarGameplayModifierComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bEnabled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* ModifierModes; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    FString ModeName; // 0x00D0 (Size: 0x10, Type: StrProperty)
    TArray<void*> SpawnedModifiers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarGameplayModifierComponent, bEnabled) == 192, "Offset mismatch for UDelMarGameplayModifierComponent::bEnabled");
static_assert(offsetof(UDelMarGameplayModifierComponent, ModifierModes) == 200, "Offset mismatch for UDelMarGameplayModifierComponent::ModifierModes");
static_assert(offsetof(UDelMarGameplayModifierComponent, ModeName) == 208, "Offset mismatch for UDelMarGameplayModifierComponent::ModeName");
static_assert(offsetof(UDelMarGameplayModifierComponent, SpawnedModifiers) == 224, "Offset mismatch for UDelMarGameplayModifierComponent::SpawnedModifiers");

// /Script/DelMarCore.DelMarGameplayModifierMap
// Kind: Class; super: DataAsset
class UDelMarGameplayModifierMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ModifierMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarGameplayModifierMap, ModifierMap) == 40, "Offset mismatch for UDelMarGameplayModifierMap::ModifierMap");

// /Script/DelMarCore.DelMarGameplayModifier_AttachmentManager
// Kind: Class; super: DelMarGameplayModifier
class UDelMarGameplayModifier_AttachmentManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, PrimaryActorTick) == 40, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::PrimaryActorTick");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, bAlwaysRelevant) == 88, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::bAlwaysRelevant");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, bExchangedRoles) == 89, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::bExchangedRoles");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, bActorEnableCollision) == 93, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::bActorEnableCollision");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, RemoteRole) == 96, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::RemoteRole");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, InitialLifeSpan) == 100, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::InitialLifeSpan");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, CustomTimeDilation) == 104, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::CustomTimeDilation");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, RayTracingGroupId) == 108, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::RayTracingGroupId");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, AttachmentReplication) == 112, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::AttachmentReplication");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, ReplicatedMovement) == 208, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::ReplicatedMovement");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Owner) == 344, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Owner");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetDriverName) == 352, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetDriverName");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Role) == 356, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Role");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetDormancy) == 357, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetDormancy");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, AutoReceiveInput) == 359, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::AutoReceiveInput");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, InputPriority) == 360, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::InputPriority");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, InputComponent) == 368, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::InputComponent");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetTag) == 376, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetTag");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetCullDistanceSquared) == 380, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetCullDistanceSquared");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetUpdateFrequency) == 384, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetUpdateFrequency");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::MinNetUpdateFrequency");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, NetPriority) == 392, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::NetPriority");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, PhysicsReplicationMode) == 396, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::PhysicsReplicationMode");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Instigator) == 408, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Instigator");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Children) == 416, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Children");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, RootComponent) == 432, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::RootComponent");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, HLODLayer) == 448, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::HLODLayer");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Layers) == 456, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Layers");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, ParentComponent) == 472, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::ParentComponent");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, Tags) == 496, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::Tags");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnTakeAnyDamage) == 512, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnTakeAnyDamage");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnTakePointDamage) == 513, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnTakePointDamage");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnTakeRadialDamage) == 514, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnTakeRadialDamage");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnActorBeginOverlap) == 515, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnActorBeginOverlap");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnActorEndOverlap) == 516, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnActorEndOverlap");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnBeginCursorOver) == 517, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnBeginCursorOver");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnEndCursorOver) == 518, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnEndCursorOver");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnClicked) == 519, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnClicked");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnReleased) == 520, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnReleased");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnInputTouchBegin) == 521, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnInputTouchBegin");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnInputTouchEnd) == 522, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnInputTouchEnd");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnInputTouchEnter) == 523, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnInputTouchEnter");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnInputTouchLeave) == 524, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnInputTouchLeave");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnActorHit) == 525, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnActorHit");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnDestroyed) == 526, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnDestroyed");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, OnEndPlay) == 527, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::OnEndPlay");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, InstanceComponents) == 592, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::InstanceComponents");
static_assert(offsetof(UDelMarGameplayModifier_AttachmentManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UDelMarGameplayModifier_AttachmentManager::BlueprintCreatedComponents");

// /Script/DelMarCore.DelMarGameplayModifier_CVarOverride
// Kind: Class; super: DelMarGameplayModifier
class UDelMarGameplayModifier_CVarOverride
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString VariableName; // 0x0270 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0280 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarGameplayModifier_CVarOverride, VariableName) == 624, "Offset mismatch for UDelMarGameplayModifier_CVarOverride::VariableName");
static_assert(offsetof(UDelMarGameplayModifier_CVarOverride, Value) == 640, "Offset mismatch for UDelMarGameplayModifier_CVarOverride::Value");

// /Script/DelMarCore.DelMarGameplayModifier_FriendlyFire
// Kind: Class; super: DelMarGameplayModifier
class UDelMarGameplayModifier_FriendlyFire
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t FriendlyFireType; // 0x0270 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDelMarGameplayModifier_FriendlyFire, FriendlyFireType) == 624, "Offset mismatch for UDelMarGameplayModifier_FriendlyFire::FriendlyFireType");

// /Script/DelMarCore.DelMarGameplayModifier_PlacementSpawner
// Kind: Class; super: DelMarGameplayModifier
class UDelMarGameplayModifier_PlacementSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ActorClassToSpawn; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::int32_t MaxPlacement; // 0x0278 (Size: 0x4, Type: IntProperty)
    float SecondsBetweenSpawns; // 0x027C (Size: 0x4, Type: FloatProperty)
    float RaceStartDelaySeconds; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float ActorLifespanSeconds; // 0x0284 (Size: 0x4, Type: FloatProperty)
    float ActorDisplacementUnits; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxSpawnedActors; // 0x028C (Size: 0x4, Type: IntProperty)
    float MinSpeedForVelocityOrientation; // 0x0290 (Size: 0x4, Type: FloatProperty)
    std::int32_t SpawnPoints; // 0x0294 (Size: 0x4, Type: IntProperty)
    std::int32_t TriggerPoints; // 0x0298 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x029C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPositionComponent; // 0x02A4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, ActorClassToSpawn) == 624, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::ActorClassToSpawn");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, MaxPlacement) == 632, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::MaxPlacement");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, SecondsBetweenSpawns) == 636, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::SecondsBetweenSpawns");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, RaceStartDelaySeconds) == 640, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::RaceStartDelaySeconds");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, ActorLifespanSeconds) == 644, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::ActorLifespanSeconds");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, ActorDisplacementUnits) == 648, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::ActorDisplacementUnits");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, MaxSpawnedActors) == 652, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::MaxSpawnedActors");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, MinSpeedForVelocityOrientation) == 656, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::MinSpeedForVelocityOrientation");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, SpawnPoints) == 660, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::SpawnPoints");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, TriggerPoints) == 664, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::TriggerPoints");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, CachedRaceManager) == 668, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::CachedRaceManager");
static_assert(offsetof(UDelMarGameplayModifier_PlacementSpawner, CachedPositionComponent) == 676, "Offset mismatch for UDelMarGameplayModifier_PlacementSpawner::CachedPositionComponent");

// /Script/DelMarCore.DelMarGameplayModifier_VehicleClassOverride
// Kind: Class; super: DelMarGameplayModifier
class UDelMarGameplayModifier_VehicleClassOverride
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TSoftClassPtr<void> VehicleClassOverride; // 0x0270 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UDelMarGameplayModifier_VehicleClassOverride, VehicleClassOverride) == 624, "Offset mismatch for UDelMarGameplayModifier_VehicleClassOverride::VehicleClassOverride");

// /Script/DelMarCore.DelMarGameplayState
// Kind: Class; super: DelMarState
class UDelMarGameplayState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarGameplayState, StateTag) == 40, "Offset mismatch for UDelMarGameplayState::StateTag");

// /Script/DelMarCore.DelMarGhostPlaybackSessionComponent
// Kind: Class; super: DelMarGhostSessionComponent
class UDelMarGhostPlaybackSessionComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t TeleportSetting; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* PlaybackActorClass; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    std::int32_t CurrentFrame; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    void* PlaybackLog; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* PlaybackActor; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarGhostPlaybackSessionComponent, TeleportSetting) == 240, "Offset mismatch for UDelMarGhostPlaybackSessionComponent::TeleportSetting");
static_assert(offsetof(UDelMarGhostPlaybackSessionComponent, PlaybackActorClass) == 248, "Offset mismatch for UDelMarGhostPlaybackSessionComponent::PlaybackActorClass");
static_assert(offsetof(UDelMarGhostPlaybackSessionComponent, CurrentFrame) == 256, "Offset mismatch for UDelMarGhostPlaybackSessionComponent::CurrentFrame");
static_assert(offsetof(UDelMarGhostPlaybackSessionComponent, PlaybackLog) == 264, "Offset mismatch for UDelMarGhostPlaybackSessionComponent::PlaybackLog");
static_assert(offsetof(UDelMarGhostPlaybackSessionComponent, PlaybackActor) == 272, "Offset mismatch for UDelMarGhostPlaybackSessionComponent::PlaybackActor");

// /Script/DelMarCore.DelMarGhostPlaybackTrigger
// Kind: Class; super: Actor
class UDelMarGhostPlaybackTrigger
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t PreviewFrame; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::int32_t StartFrame; // 0x0274 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFrame; // 0x027C (Size: 0x4, Type: IntProperty)
    void* PlaybackLog; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* BoxCollider; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* PlaybackSessionClassOverride; // 0x0290 (Size: 0x8, Type: ClassProperty)
    void* PlaybackSession; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarGhostPlaybackTrigger, PreviewFrame) == 624, "Offset mismatch for UDelMarGhostPlaybackTrigger::PreviewFrame");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, StartFrame) == 628, "Offset mismatch for UDelMarGhostPlaybackTrigger::StartFrame");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, EndFrame) == 632, "Offset mismatch for UDelMarGhostPlaybackTrigger::EndFrame");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, MaxFrame) == 636, "Offset mismatch for UDelMarGhostPlaybackTrigger::MaxFrame");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, PlaybackLog) == 640, "Offset mismatch for UDelMarGhostPlaybackTrigger::PlaybackLog");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, BoxCollider) == 648, "Offset mismatch for UDelMarGhostPlaybackTrigger::BoxCollider");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, PlaybackSessionClassOverride) == 656, "Offset mismatch for UDelMarGhostPlaybackTrigger::PlaybackSessionClassOverride");
static_assert(offsetof(UDelMarGhostPlaybackTrigger, PlaybackSession) == 664, "Offset mismatch for UDelMarGhostPlaybackTrigger::PlaybackSession");

// /Script/DelMarCore.DelMarGhostRecordingSessionComponent
// Kind: Class; super: DelMarGhostSessionComponent
class UDelMarGhostRecordingSessionComponent
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* RecordLog; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRecordOffPhysicsDelegate; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x23]; // 0x00F1
    std::int32_t CurrentFrame; // 0x0114 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarGhostRecordingSessionComponent, RecordLog) == 232, "Offset mismatch for UDelMarGhostRecordingSessionComponent::RecordLog");
static_assert(offsetof(UDelMarGhostRecordingSessionComponent, bRecordOffPhysicsDelegate) == 240, "Offset mismatch for UDelMarGhostRecordingSessionComponent::bRecordOffPhysicsDelegate");
static_assert(offsetof(UDelMarGhostRecordingSessionComponent, CurrentFrame) == 276, "Offset mismatch for UDelMarGhostRecordingSessionComponent::CurrentFrame");
static_assert(offsetof(UDelMarGhostRecordingSessionComponent, CachedDelMarVehicle) == 280, "Offset mismatch for UDelMarGhostRecordingSessionComponent::CachedDelMarVehicle");

// /Script/DelMarCore.DelMarGhostReplayLog
// Kind: Class; super: Object
class UDelMarGhostReplayLog
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Frames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarGhostReplayLog, Frames) == 48, "Offset mismatch for UDelMarGhostReplayLog::Frames");

// /Script/DelMarCore.DelMarGhostSessionComponent
// Kind: Class; super: ControllerComponent
class UDelMarGhostSessionComponent
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

static_assert(offsetof(UDelMarGhostSessionComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarGhostSessionComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarGhostSessionComponent, ComponentTags) == 104, "Offset mismatch for UDelMarGhostSessionComponent::ComponentTags");
static_assert(offsetof(UDelMarGhostSessionComponent, AssetUserData) == 120, "Offset mismatch for UDelMarGhostSessionComponent::AssetUserData");
static_assert(offsetof(UDelMarGhostSessionComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarGhostSessionComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarGhostSessionComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarGhostSessionComponent::bNetAddressable");
static_assert(offsetof(UDelMarGhostSessionComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarGhostSessionComponent::bAutoActivate");
static_assert(offsetof(UDelMarGhostSessionComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarGhostSessionComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarGhostSessionComponent, CreationMethod) == 185, "Offset mismatch for UDelMarGhostSessionComponent::CreationMethod");
static_assert(offsetof(UDelMarGhostSessionComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarGhostSessionComponent::OnComponentActivated");
static_assert(offsetof(UDelMarGhostSessionComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarGhostSessionComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarGhostVehicle
// Kind: Class; super: FortAthenaVehicle
class UDelMarGhostVehicle
{
public:
    std::uint8_t Pad_0000[0x1FF8]; // 0x0000
    void* GhostMaterial; // 0x1FF8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x2000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarGhostVehicle, GhostMaterial) == 8184, "Offset mismatch for UDelMarGhostVehicle::GhostMaterial");
static_assert(offsetof(UDelMarGhostVehicle, NumAllowedVehicleCosmeticChanges) == 8192, "Offset mismatch for UDelMarGhostVehicle::NumAllowedVehicleCosmeticChanges");

// /Script/DelMarCore.DelMarGlobalInputDisabler
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarGlobalInputDisabler
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t DisabledInputTags[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarGlobalInputDisabler, DisabledInputTags) == 216, "Offset mismatch for UDelMarGlobalInputDisabler::DisabledInputTags");

// /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarGlobalLeaderboardControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bIsLeaderboardEnabled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TArray<void*> TopLeaderboardEntries; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FocusedLeaderboardEntries; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FriendLeaderboardEntries; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasRequestedLeaderboards; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPersonalBest; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00FA
    std::uint8_t PersonalBest[0x48]; // 0x0100 (Size: 0x48, Type: StructProperty)
    void* GlobalLeaderboardActiveEvent; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeaderboardSettings[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, bIsLeaderboardEnabled) == 192, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::bIsLeaderboardEnabled");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, TopLeaderboardEntries) == 200, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::TopLeaderboardEntries");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, FocusedLeaderboardEntries) == 216, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::FocusedLeaderboardEntries");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, FriendLeaderboardEntries) == 232, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::FriendLeaderboardEntries");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, bHasRequestedLeaderboards) == 248, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::bHasRequestedLeaderboards");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, bHasPersonalBest) == 249, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::bHasPersonalBest");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, PersonalBest) == 256, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::PersonalBest");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, GlobalLeaderboardActiveEvent) == 328, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::GlobalLeaderboardActiveEvent");
static_assert(offsetof(UDelMarGlobalLeaderboardControllerComponent, LeaderboardSettings) == 336, "Offset mismatch for UDelMarGlobalLeaderboardControllerComponent::LeaderboardSettings");

// /Script/DelMarCore.DelMarGlobals
// Kind: Class; super: Object
class UDelMarGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarGuidedTutorialZoneActor
// Kind: Class; super: Actor
class UDelMarGuidedTutorialZoneActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* BoxCollider; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    float FinalTimeDilation; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float TransitionSeconds; // 0x027C (Size: 0x4, Type: FloatProperty)
    float MaxTimeDilationSeconds; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDemoVehicleOnFail; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0285
    std::uint8_t ScreenMessage[0x40]; // 0x0288 (Size: 0x40, Type: StructProperty)
    std::uint8_t AlternativeScreenMessage[0x40]; // 0x02C8 (Size: 0x40, Type: StructProperty)
    float HintDelaySeconds; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float HintRemovalDelaySeconds; // 0x030C (Size: 0x4, Type: FloatProperty)
    void* ZoneRequirementClass; // 0x0310 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InputTagsToRemoveOnZoneStart[0x20]; // 0x0318 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputTagsToAddOnZoneStart[0x20]; // 0x0338 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputTagsToRemoveOnZoneEnd[0x20]; // 0x0358 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputTagsToAddOnZoneEnd[0x20]; // 0x0378 (Size: 0x20, Type: StructProperty)
    void* ZoneRequirement; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> RaceManager; // 0x03A0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ActiveVehicle; // 0x03A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ActivePlayerController; // 0x03B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarGuidedTutorialZoneActor, BoxCollider) == 624, "Offset mismatch for UDelMarGuidedTutorialZoneActor::BoxCollider");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, FinalTimeDilation) == 632, "Offset mismatch for UDelMarGuidedTutorialZoneActor::FinalTimeDilation");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, TransitionSeconds) == 636, "Offset mismatch for UDelMarGuidedTutorialZoneActor::TransitionSeconds");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, MaxTimeDilationSeconds) == 640, "Offset mismatch for UDelMarGuidedTutorialZoneActor::MaxTimeDilationSeconds");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, bDemoVehicleOnFail) == 644, "Offset mismatch for UDelMarGuidedTutorialZoneActor::bDemoVehicleOnFail");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, ScreenMessage) == 648, "Offset mismatch for UDelMarGuidedTutorialZoneActor::ScreenMessage");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, AlternativeScreenMessage) == 712, "Offset mismatch for UDelMarGuidedTutorialZoneActor::AlternativeScreenMessage");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, HintDelaySeconds) == 776, "Offset mismatch for UDelMarGuidedTutorialZoneActor::HintDelaySeconds");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, HintRemovalDelaySeconds) == 780, "Offset mismatch for UDelMarGuidedTutorialZoneActor::HintRemovalDelaySeconds");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, ZoneRequirementClass) == 784, "Offset mismatch for UDelMarGuidedTutorialZoneActor::ZoneRequirementClass");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, InputTagsToRemoveOnZoneStart) == 792, "Offset mismatch for UDelMarGuidedTutorialZoneActor::InputTagsToRemoveOnZoneStart");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, InputTagsToAddOnZoneStart) == 824, "Offset mismatch for UDelMarGuidedTutorialZoneActor::InputTagsToAddOnZoneStart");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, InputTagsToRemoveOnZoneEnd) == 856, "Offset mismatch for UDelMarGuidedTutorialZoneActor::InputTagsToRemoveOnZoneEnd");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, InputTagsToAddOnZoneEnd) == 888, "Offset mismatch for UDelMarGuidedTutorialZoneActor::InputTagsToAddOnZoneEnd");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, ZoneRequirement) == 920, "Offset mismatch for UDelMarGuidedTutorialZoneActor::ZoneRequirement");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, RaceManager) == 928, "Offset mismatch for UDelMarGuidedTutorialZoneActor::RaceManager");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, ActiveVehicle) == 936, "Offset mismatch for UDelMarGuidedTutorialZoneActor::ActiveVehicle");
static_assert(offsetof(UDelMarGuidedTutorialZoneActor, ActivePlayerController) == 944, "Offset mismatch for UDelMarGuidedTutorialZoneActor::ActivePlayerController");

// /Script/DelMarCore.DelMarInputModifierHazard
// Kind: Class; super: Actor
class UDelMarInputModifierHazard
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> ActivatedInputSequence; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisabledEffects; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    void* BoxCollider; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* LocalController; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayerInput; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    float StartOverlapTime; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float TotalActivationSequenceTime; // 0x02AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarInputModifierHazard, ActivatedInputSequence) == 624, "Offset mismatch for UDelMarInputModifierHazard::ActivatedInputSequence");
static_assert(offsetof(UDelMarInputModifierHazard, DisabledEffects) == 640, "Offset mismatch for UDelMarInputModifierHazard::DisabledEffects");
static_assert(offsetof(UDelMarInputModifierHazard, BoxCollider) == 656, "Offset mismatch for UDelMarInputModifierHazard::BoxCollider");
static_assert(offsetof(UDelMarInputModifierHazard, LocalController) == 664, "Offset mismatch for UDelMarInputModifierHazard::LocalController");
static_assert(offsetof(UDelMarInputModifierHazard, LocalPlayerInput) == 672, "Offset mismatch for UDelMarInputModifierHazard::LocalPlayerInput");
static_assert(offsetof(UDelMarInputModifierHazard, StartOverlapTime) == 680, "Offset mismatch for UDelMarInputModifierHazard::StartOverlapTime");
static_assert(offsetof(UDelMarInputModifierHazard, TotalActivationSequenceTime) == 684, "Offset mismatch for UDelMarInputModifierHazard::TotalActivationSequenceTime");

// /Script/DelMarCore.DelMarLeaderboardManager
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarLeaderboardManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString CurrentSeasonIdentifier; // 0x00C0 (Size: 0x10, Type: StrProperty)
    void* PersonalBestRetrievedEvent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D8
    std::uint8_t LeaderboardConfig[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarLeaderboardManager, CurrentSeasonIdentifier) == 192, "Offset mismatch for UDelMarLeaderboardManager::CurrentSeasonIdentifier");
static_assert(offsetof(UDelMarLeaderboardManager, PersonalBestRetrievedEvent) == 208, "Offset mismatch for UDelMarLeaderboardManager::PersonalBestRetrievedEvent");
static_assert(offsetof(UDelMarLeaderboardManager, LeaderboardConfig) == 264, "Offset mismatch for UDelMarLeaderboardManager::LeaderboardConfig");

// /Script/DelMarCore.DelMarLevelDataAsset
// Kind: Class; super: PrimaryDataAsset
class UDelMarLevelDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t LevelDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t LevelBackgroundImage[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Levels; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldPartitionDataLayers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LevelDescriptionTags[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarLevelDataAsset, DisplayName) == 40, "Offset mismatch for UDelMarLevelDataAsset::DisplayName");
static_assert(offsetof(UDelMarLevelDataAsset, LevelDescription) == 56, "Offset mismatch for UDelMarLevelDataAsset::LevelDescription");
static_assert(offsetof(UDelMarLevelDataAsset, LevelBackgroundImage) == 72, "Offset mismatch for UDelMarLevelDataAsset::LevelBackgroundImage");
static_assert(offsetof(UDelMarLevelDataAsset, Levels) == 104, "Offset mismatch for UDelMarLevelDataAsset::Levels");
static_assert(offsetof(UDelMarLevelDataAsset, WorldPartitionDataLayers) == 120, "Offset mismatch for UDelMarLevelDataAsset::WorldPartitionDataLayers");
static_assert(offsetof(UDelMarLevelDataAsset, LevelDescriptionTags) == 136, "Offset mismatch for UDelMarLevelDataAsset::LevelDescriptionTags");

// /Script/DelMarCore.DelMarLevelManagerComponent
// Kind: Class; super: PlayspaceComponent
class UDelMarLevelManagerComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* CurrentLevelData; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentLevelLinkId[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DesiredMapDescription[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t DesiredLinkId[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarLevelManagerComponent, CurrentLevelData) == 240, "Offset mismatch for UDelMarLevelManagerComponent::CurrentLevelData");
static_assert(offsetof(UDelMarLevelManagerComponent, CurrentLevelLinkId) == 248, "Offset mismatch for UDelMarLevelManagerComponent::CurrentLevelLinkId");
static_assert(offsetof(UDelMarLevelManagerComponent, DesiredMapDescription) == 272, "Offset mismatch for UDelMarLevelManagerComponent::DesiredMapDescription");
static_assert(offsetof(UDelMarLevelManagerComponent, DesiredLinkId) == 304, "Offset mismatch for UDelMarLevelManagerComponent::DesiredLinkId");

// /Script/DelMarCore.DelMarLoadingScreenMutator
// Kind: Class; super: FortAthenaMutator
class UDelMarLoadingScreenMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarLoadingScreenMutator, bMutatesGameMode) == 688, "Offset mismatch for UDelMarLoadingScreenMutator::bMutatesGameMode");
static_assert(offsetof(UDelMarLoadingScreenMutator, CachedGameMode) == 696, "Offset mismatch for UDelMarLoadingScreenMutator::CachedGameMode");
static_assert(offsetof(UDelMarLoadingScreenMutator, CachedGameState) == 704, "Offset mismatch for UDelMarLoadingScreenMutator::CachedGameState");
static_assert(offsetof(UDelMarLoadingScreenMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UDelMarLoadingScreenMutator::InitializedPlayerControllers");
static_assert(offsetof(UDelMarLoadingScreenMutator, OverridePriority) == 732, "Offset mismatch for UDelMarLoadingScreenMutator::OverridePriority");
static_assert(offsetof(UDelMarLoadingScreenMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UDelMarLoadingScreenMutator::bOnlyRunOnGameThread");

// /Script/DelMarCore.DelMarLoadoutSave
// Kind: Class; super: SaveGame
class UDelMarLoadoutSave
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> EquippedLoadout; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarLoadoutSave, EquippedLoadout) == 40, "Offset mismatch for UDelMarLoadoutSave::EquippedLoadout");

// /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarLocalCheckpointVisibilityControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedCheckpointManager; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ViewTargetPlayerState; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedLocalPlayerState; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentlyActiveCheckpoints[0x10]; // 0x00E0 (Size: 0x10, Type: SetProperty)
    std::uint8_t bVisitedStartingCheckpoint; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, CachedRaceManager) == 192, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, CachedCheckpointManager) == 200, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::CachedCheckpointManager");
static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, ViewTargetPlayerState) == 208, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::ViewTargetPlayerState");
static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, CachedLocalPlayerState) == 216, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::CachedLocalPlayerState");
static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, CurrentlyActiveCheckpoints) == 224, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::CurrentlyActiveCheckpoints");
static_assert(offsetof(UDelMarLocalCheckpointVisibilityControllerComponent, bVisitedStartingCheckpoint) == 240, "Offset mismatch for UDelMarLocalCheckpointVisibilityControllerComponent::bVisitedStartingCheckpoint");

// /Script/DelMarCore.DelMarMatchEventSystemComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarMatchEventSystemComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TSet<void*> EnabledMatchEventTags; // 0x00D8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UDelMarMatchEventSystemComponent, EnabledMatchEventTags) == 216, "Offset mismatch for UDelMarMatchEventSystemComponent::EnabledMatchEventTags");

// /Script/DelMarCore.DelMarMatchmakeRatingComponentBase
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarMatchmakeRatingComponentBase
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

static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::PrimaryComponentTick");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, ComponentTags) == 104, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::ComponentTags");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, AssetUserData) == 120, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::AssetUserData");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::UCSSerializationIndex");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, bNetAddressable) == 152, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::bNetAddressable");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, bAutoActivate) == 154, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::bAutoActivate");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, bIsEditorOnly) == 155, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::bIsEditorOnly");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, CreationMethod) == 185, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::CreationMethod");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, OnComponentActivated) == 186, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::OnComponentActivated");
static_assert(offsetof(UDelMarMatchmakeRatingComponentBase, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarMatchmakeRatingComponentBase::OnComponentDeactivated");

// /Script/DelMarCore.DelMarMutator
// Kind: Class; super: FortAthenaMutator
class UDelMarMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarMutator, bMutatesGameMode) == 688, "Offset mismatch for UDelMarMutator::bMutatesGameMode");
static_assert(offsetof(UDelMarMutator, CachedGameMode) == 696, "Offset mismatch for UDelMarMutator::CachedGameMode");
static_assert(offsetof(UDelMarMutator, CachedGameState) == 704, "Offset mismatch for UDelMarMutator::CachedGameState");
static_assert(offsetof(UDelMarMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UDelMarMutator::InitializedPlayerControllers");
static_assert(offsetof(UDelMarMutator, OverridePriority) == 732, "Offset mismatch for UDelMarMutator::OverridePriority");
static_assert(offsetof(UDelMarMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UDelMarMutator::bOnlyRunOnGameThread");

// /Script/DelMarCore.DelMarMutator_AllowSpectateOtherTeams
// Kind: Class; super: FortAthenaMutator_AllowSpectateOtherTeams
class UDelMarMutator_AllowSpectateOtherTeams
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bAllowSpectateOtherTeams; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarMutator_AllowSpectateOtherTeams, bAllowSpectateOtherTeams) == 736, "Offset mismatch for UDelMarMutator_AllowSpectateOtherTeams::bAllowSpectateOtherTeams");

// /Script/DelMarCore.DelMarNetModelSubsystem
// Kind: Class; super: WorldSubsystem
class UDelMarNetModelSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarNetworkInputComponent
// Kind: Class; super: ControllerComponent
class UDelMarNetworkInputComponent
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

static_assert(offsetof(UDelMarNetworkInputComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarNetworkInputComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarNetworkInputComponent, ComponentTags) == 104, "Offset mismatch for UDelMarNetworkInputComponent::ComponentTags");
static_assert(offsetof(UDelMarNetworkInputComponent, AssetUserData) == 120, "Offset mismatch for UDelMarNetworkInputComponent::AssetUserData");
static_assert(offsetof(UDelMarNetworkInputComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarNetworkInputComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarNetworkInputComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarNetworkInputComponent::bNetAddressable");
static_assert(offsetof(UDelMarNetworkInputComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarNetworkInputComponent::bAutoActivate");
static_assert(offsetof(UDelMarNetworkInputComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarNetworkInputComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarNetworkInputComponent, CreationMethod) == 185, "Offset mismatch for UDelMarNetworkInputComponent::CreationMethod");
static_assert(offsetof(UDelMarNetworkInputComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarNetworkInputComponent::OnComponentActivated");
static_assert(offsetof(UDelMarNetworkInputComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarNetworkInputComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarNetworkPredictionMutator
// Kind: Class; super: DelMarMutator
class UDelMarNetworkPredictionMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarNetworkPredictionMutator, bMutatesGameMode) == 688, "Offset mismatch for UDelMarNetworkPredictionMutator::bMutatesGameMode");
static_assert(offsetof(UDelMarNetworkPredictionMutator, CachedGameMode) == 696, "Offset mismatch for UDelMarNetworkPredictionMutator::CachedGameMode");
static_assert(offsetof(UDelMarNetworkPredictionMutator, CachedGameState) == 704, "Offset mismatch for UDelMarNetworkPredictionMutator::CachedGameState");
static_assert(offsetof(UDelMarNetworkPredictionMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UDelMarNetworkPredictionMutator::InitializedPlayerControllers");
static_assert(offsetof(UDelMarNetworkPredictionMutator, OverridePriority) == 732, "Offset mismatch for UDelMarNetworkPredictionMutator::OverridePriority");
static_assert(offsetof(UDelMarNetworkPredictionMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UDelMarNetworkPredictionMutator::bOnlyRunOnGameThread");

// /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDelMarNuxBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarObjectiveProcessorBase
// Kind: Class; super: FortObjectiveProcessor
class UDelMarObjectiveProcessorBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessorBase, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessorBase::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_BeatPlayers
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_BeatPlayers
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_BeatPlayers, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_BeatPlayers::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_BonusTurboActivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_BonusTurboActivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_BonusTurboActivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_BonusTurboActivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadBonusSpeedEnded
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadHit
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_BoostPadHit
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_BoostPadHit, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_BoostPadHit::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_Demolished
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_Demolished
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_Demolished, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_Demolished::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_DistanceTraveled
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_DistanceTraveled
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_DistanceTraveled, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_DistanceTraveled::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_DraftActivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_DraftActivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_DraftActivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_DraftActivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostActivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_DriftBoostActivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_DriftBoostActivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_DriftBoostActivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostDeactivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_DriftBoostDeactivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_DriftBoostDeactivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_DriftBoostDeactivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_DriftComplete
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_DriftComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_DriftComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_DriftComplete::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_HighestSpeedUpdated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_HighestSpeedUpdated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_HighestSpeedUpdated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_HighestSpeedUpdated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_InitialTurboActivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_InitialTurboActivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_InitialTurboActivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_InitialTurboActivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_JellyHit
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_JellyHit
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_JellyHit, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_JellyHit::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_Kickflipped
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_Kickflipped
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_Kickflipped, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_Kickflipped::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_LapComplete
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_LapComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_LapComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_LapComplete::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_LapStarted
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_LapStarted
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_LapStarted, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_LapStarted::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_PlacementUpdated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_PlacementUpdated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_PlacementUpdated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_PlacementUpdated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_PlayedDelMarExperience
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_PlayedDelMarExperience
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_PlayedDelMarExperience, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_PlayedDelMarExperience::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_RaceFinished
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_RaceFinished
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_RaceFinished, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_RaceFinished::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_RankAchieved
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_RankAchieved
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_RankAchieved, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_RankAchieved::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_RunComplete
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_RunComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_RunComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_RunComplete::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostActivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_StartlineBoostActivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_StartlineBoostActivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_StartlineBoostActivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostPercentEarned
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_StartlineBoostPercentEarned
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_StartlineBoostPercentEarned, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_StartlineBoostPercentEarned::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustDeactivated
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_UnderthrustDeactivated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_UnderthrustDeactivated, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_UnderthrustDeactivated::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustPercentUsed
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_UnderthrustPercentUsed
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_UnderthrustPercentUsed, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_UnderthrustPercentUsed::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_VehicleJumped
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_VehicleJumped
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_VehicleJumped, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_VehicleJumped::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarObjectiveProcessor_VehicleLanded
// Kind: Class; super: DelMarObjectiveProcessorBase
class UDelMarObjectiveProcessor_VehicleLanded
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarObjectiveProcessor_VehicleLanded, OwningProcessorSubsystem) == 56, "Offset mismatch for UDelMarObjectiveProcessor_VehicleLanded::OwningProcessorSubsystem");

// /Script/DelMarCore.DelMarPhysMatAttribute
// Kind: Class; super: Object
class UDelMarPhysMatAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarPhysMatAttributeMap
// Kind: Class; super: DataAsset
class UDelMarPhysMatAttributeMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MaterialAttributesMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarPhysMatAttributeMap, MaterialAttributesMap) == 40, "Offset mismatch for UDelMarPhysMatAttributeMap::MaterialAttributesMap");

// /Script/DelMarCore.DelMarPhysMatAttribute_SoundTag
// Kind: Class; super: DelMarPhysMatAttribute
class UDelMarPhysMatAttribute_SoundTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SoundTag[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarPhysMatAttribute_SoundTag, SoundTag) == 40, "Offset mismatch for UDelMarPhysMatAttribute_SoundTag::SoundTag");
static_assert(offsetof(UDelMarPhysMatAttribute_SoundTag, Priority) == 44, "Offset mismatch for UDelMarPhysMatAttribute_SoundTag::Priority");

// /Script/DelMarCore.DelMarPhysMatAttribute_Terrain
// Kind: Class; super: DelMarPhysMatAttribute
class UDelMarPhysMatAttribute_Terrain
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TerrainData[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDriveableSurface; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarPhysMatAttribute_Terrain, TerrainData) == 40, "Offset mismatch for UDelMarPhysMatAttribute_Terrain::TerrainData");
static_assert(offsetof(UDelMarPhysMatAttribute_Terrain, bDriveableSurface) == 64, "Offset mismatch for UDelMarPhysMatAttribute_Terrain::bDriveableSurface");

// /Script/DelMarCore.DelMarPhysicsRateDevice
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarPhysicsRateDevice
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t bSuppressPlayTimeSimpleInteractionWidgetForTouch; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerNotifyOnLongUseInteraction; // 0x0B21 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCollisionForInteractDistanceCheck; // 0x0B22 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActorsBeingDeleted; // 0x0B23 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarPhysicsRateDevice, bSuppressPlayTimeSimpleInteractionWidgetForTouch) == 2848, "Offset mismatch for UDelMarPhysicsRateDevice::bSuppressPlayTimeSimpleInteractionWidgetForTouch");
static_assert(offsetof(UDelMarPhysicsRateDevice, bServerNotifyOnLongUseInteraction) == 2849, "Offset mismatch for UDelMarPhysicsRateDevice::bServerNotifyOnLongUseInteraction");
static_assert(offsetof(UDelMarPhysicsRateDevice, bUseCollisionForInteractDistanceCheck) == 2850, "Offset mismatch for UDelMarPhysicsRateDevice::bUseCollisionForInteractDistanceCheck");
static_assert(offsetof(UDelMarPhysicsRateDevice, bActorsBeingDeleted) == 2851, "Offset mismatch for UDelMarPhysicsRateDevice::bActorsBeingDeleted");

// /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerActiveRaceManagerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* ActiveRaceManager; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarPlayerActiveRaceManagerComponent, ActiveRaceManager) == 216, "Offset mismatch for UDelMarPlayerActiveRaceManagerComponent::ActiveRaceManager");

// /Script/DelMarCore.DelMarPlayerAnalyticsComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedVehicle; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPlayerRaceData; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceInfo; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPositionalTracker; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MatchmakeRatingComponent; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentRaceData[0x3C]; // 0x00F8 (Size: 0x3C, Type: StructProperty)
    std::uint8_t CurrentRunData[0x1]; // 0x0134 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedRaceManager) == 192, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedPlayerController) == 200, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedPlayerController");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedVehicle) == 208, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedVehicle");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedPlayerRaceData) == 216, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedPlayerRaceData");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedRaceInfo) == 224, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedRaceInfo");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CachedPositionalTracker) == 232, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CachedPositionalTracker");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, MatchmakeRatingComponent) == 240, "Offset mismatch for UDelMarPlayerAnalyticsComponent::MatchmakeRatingComponent");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CurrentRaceData) == 248, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CurrentRaceData");
static_assert(offsetof(UDelMarPlayerAnalyticsComponent, CurrentRunData) == 308, "Offset mismatch for UDelMarPlayerAnalyticsComponent::CurrentRunData");

// /Script/DelMarCore.DelMarPlayerAttachmentComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerAttachmentComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> AttachedPlayer; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerAttachmentComponent, AttachedPlayer) == 192, "Offset mismatch for UDelMarPlayerAttachmentComponent::AttachedPlayer");

// /Script/DelMarCore.DelMarPlayerAutoThrottleComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerAutoThrottleComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float DelayAutoThrottle; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarPlayerAutoThrottleComponent, DelayAutoThrottle) == 192, "Offset mismatch for UDelMarPlayerAutoThrottleComponent::DelayAutoThrottle");

// /Script/DelMarCore.DelMarPlayerChallengeRaceDataComponent
// Kind: Class; super: DelMarPlayerRaceDataComponent
class UDelMarPlayerChallengeRaceDataComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t VisitedCheckpoints[0x10]; // 0x00F0 (Size: 0x10, Type: SetProperty)
    std::uint8_t VisitedCheckpoints_ParallelPath[0x10]; // 0x0100 (Size: 0x10, Type: SetProperty)
    double RunStartTime; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    double RunFinishTime; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double CheckpointStartTime; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    double LapStartTime; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    float DistanceToFinishLine; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float LapDistance; // 0x0134 (Size: 0x4, Type: FloatProperty)
    float PrimaryTrackDistance; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float IndependentTrackDistance; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::int32_t LapsCompleted; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasStartedFirstLap; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFinishedRace; // 0x0145 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0146
    std::int32_t Points; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x014C
    TArray<void*> ViewingSpectators; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> MostRecentlyVisitedCheckpoint; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedCheckpointManager; // 0x0168 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x0170 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x0178 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPositionalTracker; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedLapTracker; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CheckpointsVisitedThisLap[0x10]; // 0x0190 (Size: 0x10, Type: SetProperty)
    std::int32_t TimeTrialSectionIndex; // 0x01A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CheckpointIndex; // 0x01A4 (Size: 0x4, Type: IntProperty)
    void* PointsUpdatedEvent; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* FinishRaceEvent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CachedBotPenaltyCurveIndex; // 0x01B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, VisitedCheckpoints) == 240, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::VisitedCheckpoints");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, VisitedCheckpoints_ParallelPath) == 256, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::VisitedCheckpoints_ParallelPath");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, RunStartTime) == 272, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::RunStartTime");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, RunFinishTime) == 280, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::RunFinishTime");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CheckpointStartTime) == 288, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CheckpointStartTime");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, LapStartTime) == 296, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::LapStartTime");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, DistanceToFinishLine) == 304, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::DistanceToFinishLine");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, LapDistance) == 308, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::LapDistance");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, PrimaryTrackDistance) == 312, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::PrimaryTrackDistance");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, IndependentTrackDistance) == 316, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::IndependentTrackDistance");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, LapsCompleted) == 320, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::LapsCompleted");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, bHasStartedFirstLap) == 324, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::bHasStartedFirstLap");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, bFinishedRace) == 325, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::bFinishedRace");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, Points) == 328, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::Points");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, ViewingSpectators) == 336, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::ViewingSpectators");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, MostRecentlyVisitedCheckpoint) == 352, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::MostRecentlyVisitedCheckpoint");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedCheckpointManager) == 360, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedCheckpointManager");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedRaceManager) == 368, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedDelMarVehicle) == 376, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedDelMarVehicle");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedPositionalTracker) == 384, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedPositionalTracker");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedLapTracker) == 392, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedLapTracker");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CheckpointsVisitedThisLap) == 400, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CheckpointsVisitedThisLap");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, TimeTrialSectionIndex) == 416, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::TimeTrialSectionIndex");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CheckpointIndex) == 420, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CheckpointIndex");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, PointsUpdatedEvent) == 424, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::PointsUpdatedEvent");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, FinishRaceEvent) == 432, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::FinishRaceEvent");
static_assert(offsetof(UDelMarPlayerChallengeRaceDataComponent, CachedBotPenaltyCurveIndex) == 440, "Offset mismatch for UDelMarPlayerChallengeRaceDataComponent::CachedBotPenaltyCurveIndex");

// /Script/DelMarCore.DelMarPlayerDeathRaceDataComponent
// Kind: Class; super: DelMarPlayerRaceDataComponent
class UDelMarPlayerDeathRaceDataComponent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::int32_t Score; // 0x01C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarPlayerDeathRaceDataComponent, Score) == 448, "Offset mismatch for UDelMarPlayerDeathRaceDataComponent::Score");

// /Script/DelMarCore.DelMarPlayerIdleComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerIdleComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerIdleComponent, CachedRaceManager) == 192, "Offset mismatch for UDelMarPlayerIdleComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerIdleComponent, CachedDelMarVehicle) == 200, "Offset mismatch for UDelMarPlayerIdleComponent::CachedDelMarVehicle");

// /Script/DelMarCore.DelMarPlayerInputManagerComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerInputManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> InputMappingContextMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    void* PlatformDigitalRedirect; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedController; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedVehicle; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerInputManagerComponent, InputMappingContextMap) == 192, "Offset mismatch for UDelMarPlayerInputManagerComponent::InputMappingContextMap");
static_assert(offsetof(UDelMarPlayerInputManagerComponent, PlatformDigitalRedirect) == 208, "Offset mismatch for UDelMarPlayerInputManagerComponent::PlatformDigitalRedirect");
static_assert(offsetof(UDelMarPlayerInputManagerComponent, CachedController) == 216, "Offset mismatch for UDelMarPlayerInputManagerComponent::CachedController");
static_assert(offsetof(UDelMarPlayerInputManagerComponent, CachedVehicle) == 224, "Offset mismatch for UDelMarPlayerInputManagerComponent::CachedVehicle");
static_assert(offsetof(UDelMarPlayerInputManagerComponent, CachedRaceManager) == 232, "Offset mismatch for UDelMarPlayerInputManagerComponent::CachedRaceManager");

// /Script/DelMarCore.DelMarPlayerPreferencesComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerPreferencesComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnUseToggleOnExpandableHudWidgetChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUseIconOnlyPlayerNameplatesChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTouchControlsLayoutChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t InvertSteerMethod; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPitchInverted; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVerticalKickflipInverted; // 0x00F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAerialPitchActivationEnabled; // 0x00F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseToggleOnExpandableHudWidget; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseIconOnlyPlayerNameplates; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00F6
    std::uint8_t TouchControlsLayout[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x00FC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortSettings; // 0x0104 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerPreferencesComponent, OnUseToggleOnExpandableHudWidgetChanged) == 192, "Offset mismatch for UDelMarPlayerPreferencesComponent::OnUseToggleOnExpandableHudWidgetChanged");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, OnUseIconOnlyPlayerNameplatesChanged) == 208, "Offset mismatch for UDelMarPlayerPreferencesComponent::OnUseIconOnlyPlayerNameplatesChanged");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, OnTouchControlsLayoutChanged) == 224, "Offset mismatch for UDelMarPlayerPreferencesComponent::OnTouchControlsLayoutChanged");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, InvertSteerMethod) == 240, "Offset mismatch for UDelMarPlayerPreferencesComponent::InvertSteerMethod");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, bPitchInverted) == 241, "Offset mismatch for UDelMarPlayerPreferencesComponent::bPitchInverted");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, bVerticalKickflipInverted) == 242, "Offset mismatch for UDelMarPlayerPreferencesComponent::bVerticalKickflipInverted");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, bAerialPitchActivationEnabled) == 243, "Offset mismatch for UDelMarPlayerPreferencesComponent::bAerialPitchActivationEnabled");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, bUseToggleOnExpandableHudWidget) == 244, "Offset mismatch for UDelMarPlayerPreferencesComponent::bUseToggleOnExpandableHudWidget");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, bUseIconOnlyPlayerNameplates) == 245, "Offset mismatch for UDelMarPlayerPreferencesComponent::bUseIconOnlyPlayerNameplates");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, TouchControlsLayout) == 248, "Offset mismatch for UDelMarPlayerPreferencesComponent::TouchControlsLayout");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, CachedDelMarVehicle) == 252, "Offset mismatch for UDelMarPlayerPreferencesComponent::CachedDelMarVehicle");
static_assert(offsetof(UDelMarPlayerPreferencesComponent, FortSettings) == 260, "Offset mismatch for UDelMarPlayerPreferencesComponent::FortSettings");

// /Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerQuestDistanceTraveledComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedVehicle; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPlayerState; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DistanceTraveledTimer[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> DistanceTravelledObjectiveProcessor; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerQuestDistanceTraveledComponent, CachedVehicle) == 192, "Offset mismatch for UDelMarPlayerQuestDistanceTraveledComponent::CachedVehicle");
static_assert(offsetof(UDelMarPlayerQuestDistanceTraveledComponent, CachedPlayerState) == 200, "Offset mismatch for UDelMarPlayerQuestDistanceTraveledComponent::CachedPlayerState");
static_assert(offsetof(UDelMarPlayerQuestDistanceTraveledComponent, CachedRaceManager) == 208, "Offset mismatch for UDelMarPlayerQuestDistanceTraveledComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerQuestDistanceTraveledComponent, DistanceTraveledTimer) == 216, "Offset mismatch for UDelMarPlayerQuestDistanceTraveledComponent::DistanceTraveledTimer");
static_assert(offsetof(UDelMarPlayerQuestDistanceTraveledComponent, DistanceTravelledObjectiveProcessor) == 264, "Offset mismatch for UDelMarPlayerQuestDistanceTraveledComponent::DistanceTravelledObjectiveProcessor");

// /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerQuestMatchInfoComponent
{
public:
    std::uint8_t Pad_0000[0xC4]; // 0x0000
    TWeakObjectPtr<void> CachedVehicle; // 0x00C4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00CC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPlayerState; // 0x00D4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerQuestMatchInfoComponent, CachedVehicle) == 196, "Offset mismatch for UDelMarPlayerQuestMatchInfoComponent::CachedVehicle");
static_assert(offsetof(UDelMarPlayerQuestMatchInfoComponent, CachedRaceManager) == 204, "Offset mismatch for UDelMarPlayerQuestMatchInfoComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerQuestMatchInfoComponent, CachedPlayerState) == 212, "Offset mismatch for UDelMarPlayerQuestMatchInfoComponent::CachedPlayerState");

// /Script/DelMarCore.DelMarPlayerRaceDataComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerRaceDataComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t VisitedCheckpoints[0x10]; // 0x00F0 (Size: 0x10, Type: SetProperty)
    std::uint8_t VisitedCheckpoints_ParallelPath[0x10]; // 0x0100 (Size: 0x10, Type: SetProperty)
    double RunStartTime; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    double RunFinishTime; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double CheckpointStartTime; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    double LapStartTime; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    float DistanceToFinishLine; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float LapDistance; // 0x0134 (Size: 0x4, Type: FloatProperty)
    float PrimaryTrackDistance; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float IndependentTrackDistance; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::int32_t LapsCompleted; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasStartedFirstLap; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFinishedRace; // 0x0145 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0146
    std::int32_t Points; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x014C
    TArray<void*> ViewingSpectators; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> MostRecentlyVisitedCheckpoint; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedCheckpointManager; // 0x0168 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x0170 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x0178 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPositionalTracker; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedLapTracker; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CheckpointsVisitedThisLap[0x10]; // 0x0190 (Size: 0x10, Type: SetProperty)
    std::int32_t TimeTrialSectionIndex; // 0x01A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CheckpointIndex; // 0x01A4 (Size: 0x4, Type: IntProperty)
    void* PointsUpdatedEvent; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* FinishRaceEvent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CachedBotPenaltyCurveIndex; // 0x01B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarPlayerRaceDataComponent, VisitedCheckpoints) == 240, "Offset mismatch for UDelMarPlayerRaceDataComponent::VisitedCheckpoints");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, VisitedCheckpoints_ParallelPath) == 256, "Offset mismatch for UDelMarPlayerRaceDataComponent::VisitedCheckpoints_ParallelPath");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, RunStartTime) == 272, "Offset mismatch for UDelMarPlayerRaceDataComponent::RunStartTime");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, RunFinishTime) == 280, "Offset mismatch for UDelMarPlayerRaceDataComponent::RunFinishTime");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CheckpointStartTime) == 288, "Offset mismatch for UDelMarPlayerRaceDataComponent::CheckpointStartTime");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, LapStartTime) == 296, "Offset mismatch for UDelMarPlayerRaceDataComponent::LapStartTime");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, DistanceToFinishLine) == 304, "Offset mismatch for UDelMarPlayerRaceDataComponent::DistanceToFinishLine");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, LapDistance) == 308, "Offset mismatch for UDelMarPlayerRaceDataComponent::LapDistance");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, PrimaryTrackDistance) == 312, "Offset mismatch for UDelMarPlayerRaceDataComponent::PrimaryTrackDistance");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, IndependentTrackDistance) == 316, "Offset mismatch for UDelMarPlayerRaceDataComponent::IndependentTrackDistance");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, LapsCompleted) == 320, "Offset mismatch for UDelMarPlayerRaceDataComponent::LapsCompleted");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, bHasStartedFirstLap) == 324, "Offset mismatch for UDelMarPlayerRaceDataComponent::bHasStartedFirstLap");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, bFinishedRace) == 325, "Offset mismatch for UDelMarPlayerRaceDataComponent::bFinishedRace");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, Points) == 328, "Offset mismatch for UDelMarPlayerRaceDataComponent::Points");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, ViewingSpectators) == 336, "Offset mismatch for UDelMarPlayerRaceDataComponent::ViewingSpectators");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, MostRecentlyVisitedCheckpoint) == 352, "Offset mismatch for UDelMarPlayerRaceDataComponent::MostRecentlyVisitedCheckpoint");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedCheckpointManager) == 360, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedCheckpointManager");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedRaceManager) == 368, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedDelMarVehicle) == 376, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedDelMarVehicle");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedPositionalTracker) == 384, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedPositionalTracker");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedLapTracker) == 392, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedLapTracker");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CheckpointsVisitedThisLap) == 400, "Offset mismatch for UDelMarPlayerRaceDataComponent::CheckpointsVisitedThisLap");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, TimeTrialSectionIndex) == 416, "Offset mismatch for UDelMarPlayerRaceDataComponent::TimeTrialSectionIndex");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CheckpointIndex) == 420, "Offset mismatch for UDelMarPlayerRaceDataComponent::CheckpointIndex");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, PointsUpdatedEvent) == 424, "Offset mismatch for UDelMarPlayerRaceDataComponent::PointsUpdatedEvent");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, FinishRaceEvent) == 432, "Offset mismatch for UDelMarPlayerRaceDataComponent::FinishRaceEvent");
static_assert(offsetof(UDelMarPlayerRaceDataComponent, CachedBotPenaltyCurveIndex) == 440, "Offset mismatch for UDelMarPlayerRaceDataComponent::CachedBotPenaltyCurveIndex");

// /Script/DelMarCore.DelMarPlayerRespawnComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerRespawnComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TeleportEnterPhaseSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float RespawnBackwardsRangeDistance; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float RespawnForwardRangeDistance; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float RespawnHeightStartDistance; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float RespawnHeightPenetrationDistance; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float RespawnValidTrackRadius; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D8
    std::uint8_t bCheckForObstacles; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00DD
    float OppositeSideThreshold; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00E4
    std::uint8_t ObstacleAreaBounds[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    TArray<void*> ObstacleActorClasses; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ObstacleActorIgnoreClasses; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0120
    TWeakObjectPtr<void> RaceManager; // 0x0124 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> DelMarVehicle; // 0x012C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CheckpointManager; // 0x0134 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerRaceData; // 0x013C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RaceConfig; // 0x0144 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastActiveTrack; // 0x014C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TrackPosition; // 0x0154 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t LastValidSegmentIndex; // 0x015C (Size: 0x4, Type: IntProperty)
    float LastValidDistanceAlongSpline; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float LastValidFurthestDistance; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0168
    std::uint8_t bSpawnOnOppositeSide; // 0x016C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousVehicleDemolished; // 0x016D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFirstVehicleForPlayer; // 0x016E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x016F
    void* CachedTeleportCheckpoint; // 0x0170 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarPlayerRespawnComponent, TeleportEnterPhaseSeconds) == 192, "Offset mismatch for UDelMarPlayerRespawnComponent::TeleportEnterPhaseSeconds");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RespawnBackwardsRangeDistance) == 196, "Offset mismatch for UDelMarPlayerRespawnComponent::RespawnBackwardsRangeDistance");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RespawnForwardRangeDistance) == 200, "Offset mismatch for UDelMarPlayerRespawnComponent::RespawnForwardRangeDistance");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RespawnHeightStartDistance) == 204, "Offset mismatch for UDelMarPlayerRespawnComponent::RespawnHeightStartDistance");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RespawnHeightPenetrationDistance) == 208, "Offset mismatch for UDelMarPlayerRespawnComponent::RespawnHeightPenetrationDistance");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RespawnValidTrackRadius) == 212, "Offset mismatch for UDelMarPlayerRespawnComponent::RespawnValidTrackRadius");
static_assert(offsetof(UDelMarPlayerRespawnComponent, bCheckForObstacles) == 220, "Offset mismatch for UDelMarPlayerRespawnComponent::bCheckForObstacles");
static_assert(offsetof(UDelMarPlayerRespawnComponent, OppositeSideThreshold) == 224, "Offset mismatch for UDelMarPlayerRespawnComponent::OppositeSideThreshold");
static_assert(offsetof(UDelMarPlayerRespawnComponent, ObstacleAreaBounds) == 232, "Offset mismatch for UDelMarPlayerRespawnComponent::ObstacleAreaBounds");
static_assert(offsetof(UDelMarPlayerRespawnComponent, ObstacleActorClasses) == 256, "Offset mismatch for UDelMarPlayerRespawnComponent::ObstacleActorClasses");
static_assert(offsetof(UDelMarPlayerRespawnComponent, ObstacleActorIgnoreClasses) == 272, "Offset mismatch for UDelMarPlayerRespawnComponent::ObstacleActorIgnoreClasses");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RaceManager) == 292, "Offset mismatch for UDelMarPlayerRespawnComponent::RaceManager");
static_assert(offsetof(UDelMarPlayerRespawnComponent, DelMarVehicle) == 300, "Offset mismatch for UDelMarPlayerRespawnComponent::DelMarVehicle");
static_assert(offsetof(UDelMarPlayerRespawnComponent, CheckpointManager) == 308, "Offset mismatch for UDelMarPlayerRespawnComponent::CheckpointManager");
static_assert(offsetof(UDelMarPlayerRespawnComponent, PlayerRaceData) == 316, "Offset mismatch for UDelMarPlayerRespawnComponent::PlayerRaceData");
static_assert(offsetof(UDelMarPlayerRespawnComponent, RaceConfig) == 324, "Offset mismatch for UDelMarPlayerRespawnComponent::RaceConfig");
static_assert(offsetof(UDelMarPlayerRespawnComponent, LastActiveTrack) == 332, "Offset mismatch for UDelMarPlayerRespawnComponent::LastActiveTrack");
static_assert(offsetof(UDelMarPlayerRespawnComponent, TrackPosition) == 340, "Offset mismatch for UDelMarPlayerRespawnComponent::TrackPosition");
static_assert(offsetof(UDelMarPlayerRespawnComponent, LastValidSegmentIndex) == 348, "Offset mismatch for UDelMarPlayerRespawnComponent::LastValidSegmentIndex");
static_assert(offsetof(UDelMarPlayerRespawnComponent, LastValidDistanceAlongSpline) == 352, "Offset mismatch for UDelMarPlayerRespawnComponent::LastValidDistanceAlongSpline");
static_assert(offsetof(UDelMarPlayerRespawnComponent, LastValidFurthestDistance) == 356, "Offset mismatch for UDelMarPlayerRespawnComponent::LastValidFurthestDistance");
static_assert(offsetof(UDelMarPlayerRespawnComponent, bSpawnOnOppositeSide) == 364, "Offset mismatch for UDelMarPlayerRespawnComponent::bSpawnOnOppositeSide");
static_assert(offsetof(UDelMarPlayerRespawnComponent, bPreviousVehicleDemolished) == 365, "Offset mismatch for UDelMarPlayerRespawnComponent::bPreviousVehicleDemolished");
static_assert(offsetof(UDelMarPlayerRespawnComponent, bFirstVehicleForPlayer) == 366, "Offset mismatch for UDelMarPlayerRespawnComponent::bFirstVehicleForPlayer");
static_assert(offsetof(UDelMarPlayerRespawnComponent, CachedTeleportCheckpoint) == 368, "Offset mismatch for UDelMarPlayerRespawnComponent::CachedTeleportCheckpoint");

// /Script/DelMarCore.DelMarPlayerStart
// Kind: Class; super: FortPlayerStart
class UDelMarPlayerStart
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::int32_t StartlinePriority; // 0x02E0 (Size: 0x4, Type: IntProperty)
    float IsClaimedZDistanceCheck; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> DelMarRaceManager; // 0x02E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerStart, StartlinePriority) == 736, "Offset mismatch for UDelMarPlayerStart::StartlinePriority");
static_assert(offsetof(UDelMarPlayerStart, IsClaimedZDistanceCheck) == 740, "Offset mismatch for UDelMarPlayerStart::IsClaimedZDistanceCheck");
static_assert(offsetof(UDelMarPlayerStart, DelMarRaceManager) == 744, "Offset mismatch for UDelMarPlayerStart::DelMarRaceManager");

// /Script/DelMarCore.DelMarPlayerStartlineComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerStartlineComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float FailBufferSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x00C4
    TWeakObjectPtr<void> DelMarVehicle; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerStartlineComponent, FailBufferSeconds) == 192, "Offset mismatch for UDelMarPlayerStartlineComponent::FailBufferSeconds");
static_assert(offsetof(UDelMarPlayerStartlineComponent, DelMarVehicle) == 224, "Offset mismatch for UDelMarPlayerStartlineComponent::DelMarVehicle");

// /Script/DelMarCore.DelMarPlayerStateComponent
// Kind: Class; super: PlayerStateComponent
class UDelMarPlayerStateComponent
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

static_assert(offsetof(UDelMarPlayerStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarPlayerStateComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarPlayerStateComponent, ComponentTags) == 104, "Offset mismatch for UDelMarPlayerStateComponent::ComponentTags");
static_assert(offsetof(UDelMarPlayerStateComponent, AssetUserData) == 120, "Offset mismatch for UDelMarPlayerStateComponent::AssetUserData");
static_assert(offsetof(UDelMarPlayerStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarPlayerStateComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarPlayerStateComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarPlayerStateComponent::bNetAddressable");
static_assert(offsetof(UDelMarPlayerStateComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarPlayerStateComponent::bAutoActivate");
static_assert(offsetof(UDelMarPlayerStateComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarPlayerStateComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarPlayerStateComponent, CreationMethod) == 185, "Offset mismatch for UDelMarPlayerStateComponent::CreationMethod");
static_assert(offsetof(UDelMarPlayerStateComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarPlayerStateComponent::OnComponentActivated");
static_assert(offsetof(UDelMarPlayerStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarPlayerStateComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarPlayerTurboManagerComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerTurboManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TurboCharges; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float RechargeRateSeconds; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float AdditiveRechargeRateModifierSeconds; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float LapCompleteCharges; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float RaceStartCharges; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float MaxCharges; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerTurboManagerComponent, TurboCharges) == 192, "Offset mismatch for UDelMarPlayerTurboManagerComponent::TurboCharges");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, RechargeRateSeconds) == 196, "Offset mismatch for UDelMarPlayerTurboManagerComponent::RechargeRateSeconds");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, AdditiveRechargeRateModifierSeconds) == 200, "Offset mismatch for UDelMarPlayerTurboManagerComponent::AdditiveRechargeRateModifierSeconds");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, LapCompleteCharges) == 204, "Offset mismatch for UDelMarPlayerTurboManagerComponent::LapCompleteCharges");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, RaceStartCharges) == 208, "Offset mismatch for UDelMarPlayerTurboManagerComponent::RaceStartCharges");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, MaxCharges) == 212, "Offset mismatch for UDelMarPlayerTurboManagerComponent::MaxCharges");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, CachedDelMarVehicle) == 216, "Offset mismatch for UDelMarPlayerTurboManagerComponent::CachedDelMarVehicle");
static_assert(offsetof(UDelMarPlayerTurboManagerComponent, CachedRaceManager) == 224, "Offset mismatch for UDelMarPlayerTurboManagerComponent::CachedRaceManager");

// /Script/DelMarCore.DelMarPlayerWrongwayComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarPlayerWrongwayComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedTrackPositionComp; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceData; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedCheckpointManager; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedTrackManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedDelMarVehicle) == 192, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedDelMarVehicle");
static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedRaceManager) == 200, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedRaceManager");
static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedTrackPositionComp) == 208, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedTrackPositionComp");
static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedRaceData) == 216, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedRaceData");
static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedCheckpointManager) == 224, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedCheckpointManager");
static_assert(offsetof(UDelMarPlayerWrongwayComponent, CachedTrackManager) == 232, "Offset mismatch for UDelMarPlayerWrongwayComponent::CachedTrackManager");

// /Script/DelMarCore.DelMarPlayspace
// Kind: Class; super: FortPlayspace
class UDelMarPlayspace
{
public:
    std::uint8_t Pad_0000[0x6D8]; // 0x0000
    TWeakObjectPtr<void> MRSPlaylistData; // 0x06D8 (Size: 0x8, Type: WeakObjectProperty)
    FString MRSLinkId; // 0x06E0 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x06F0
    void* PrimaryStateMachine; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldShowLoadingScreen; // 0x0708 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0709
    TMap<void*, void*> DefaultRaceLevelConfigs; // 0x0710 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> ActiveRaceManager; // 0x0720 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlaylistData; // 0x0728 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LevelManager; // 0x0730 (Size: 0x8, Type: WeakObjectProperty)
    void* LevelStreamComponent; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* ServerExpirationComponent; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MapSet[0x18]; // 0x0748 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlaylistDefinedMapTags[0x1]; // 0x0760 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarPlayspace, MRSPlaylistData) == 1752, "Offset mismatch for UDelMarPlayspace::MRSPlaylistData");
static_assert(offsetof(UDelMarPlayspace, MRSLinkId) == 1760, "Offset mismatch for UDelMarPlayspace::MRSLinkId");
static_assert(offsetof(UDelMarPlayspace, PrimaryStateMachine) == 1792, "Offset mismatch for UDelMarPlayspace::PrimaryStateMachine");
static_assert(offsetof(UDelMarPlayspace, bShouldShowLoadingScreen) == 1800, "Offset mismatch for UDelMarPlayspace::bShouldShowLoadingScreen");
static_assert(offsetof(UDelMarPlayspace, DefaultRaceLevelConfigs) == 1808, "Offset mismatch for UDelMarPlayspace::DefaultRaceLevelConfigs");
static_assert(offsetof(UDelMarPlayspace, ActiveRaceManager) == 1824, "Offset mismatch for UDelMarPlayspace::ActiveRaceManager");
static_assert(offsetof(UDelMarPlayspace, PlaylistData) == 1832, "Offset mismatch for UDelMarPlayspace::PlaylistData");
static_assert(offsetof(UDelMarPlayspace, LevelManager) == 1840, "Offset mismatch for UDelMarPlayspace::LevelManager");
static_assert(offsetof(UDelMarPlayspace, LevelStreamComponent) == 1848, "Offset mismatch for UDelMarPlayspace::LevelStreamComponent");
static_assert(offsetof(UDelMarPlayspace, ServerExpirationComponent) == 1856, "Offset mismatch for UDelMarPlayspace::ServerExpirationComponent");
static_assert(offsetof(UDelMarPlayspace, MapSet) == 1864, "Offset mismatch for UDelMarPlayspace::MapSet");
static_assert(offsetof(UDelMarPlayspace, PlaylistDefinedMapTags) == 1888, "Offset mismatch for UDelMarPlayspace::PlaylistDefinedMapTags");

// /Script/DelMarCore.DelMarPlayspaceComponent_ServerExpiration
// Kind: Class; super: PlayspaceComponent_ServerExpiration
class UDelMarPlayspaceComponent_ServerExpiration
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::int32_t ReplicatedShutdownTimeInSeconds; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartShutdownTimerOnGracefulShutdownRequest; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillBeforeExpiration; // 0x015D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillOnGracefulShutdown; // 0x015E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x015F
    TArray<void*> AlertDataList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ServerShutdownTimeInSeconds; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t DisableBackfillBeforeExpireTimeInSeconds; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::int32_t PostShutdownForceRestartTimeInSeconds; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x017C
    TSoftObjectPtr<void> UINotificationIcon; // 0x0180 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0003[0x48]; // 0x01A8
    std::uint8_t GracefulShutdownInitiatedEventHandle[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ShutdownTimeOverrides; // 0x0210 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, ReplicatedShutdownTimeInSeconds) == 344, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::ReplicatedShutdownTimeInSeconds");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, StartShutdownTimerOnGracefulShutdownRequest) == 348, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::StartShutdownTimerOnGracefulShutdownRequest");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, bDisableBackfillBeforeExpiration) == 349, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::bDisableBackfillBeforeExpiration");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, bDisableBackfillOnGracefulShutdown) == 350, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::bDisableBackfillOnGracefulShutdown");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, AlertDataList) == 352, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::AlertDataList");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, ServerShutdownTimeInSeconds) == 368, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::ServerShutdownTimeInSeconds");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, DisableBackfillBeforeExpireTimeInSeconds) == 372, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::DisableBackfillBeforeExpireTimeInSeconds");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, PostShutdownForceRestartTimeInSeconds) == 376, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::PostShutdownForceRestartTimeInSeconds");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, UINotificationIcon) == 384, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::UINotificationIcon");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, GracefulShutdownInitiatedEventHandle) == 496, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::GracefulShutdownInitiatedEventHandle");
static_assert(offsetof(UDelMarPlayspaceComponent_ServerExpiration, ShutdownTimeOverrides) == 528, "Offset mismatch for UDelMarPlayspaceComponent_ServerExpiration::ShutdownTimeOverrides");

// /Script/DelMarCore.DelMarPositionalTrackerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarPositionalTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TargetUpdateRateInSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x34]; // 0x00C4
    TMap<void*, void*> SplinePositions; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TArray<void*> RacePositions; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FinalRacePositions; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    float TimeSinceLastUpdate; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumLapsInRace; // 0x012C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarPositionalTrackerComponent, TargetUpdateRateInSeconds) == 192, "Offset mismatch for UDelMarPositionalTrackerComponent::TargetUpdateRateInSeconds");
static_assert(offsetof(UDelMarPositionalTrackerComponent, SplinePositions) == 248, "Offset mismatch for UDelMarPositionalTrackerComponent::SplinePositions");
static_assert(offsetof(UDelMarPositionalTrackerComponent, RacePositions) == 264, "Offset mismatch for UDelMarPositionalTrackerComponent::RacePositions");
static_assert(offsetof(UDelMarPositionalTrackerComponent, FinalRacePositions) == 280, "Offset mismatch for UDelMarPositionalTrackerComponent::FinalRacePositions");
static_assert(offsetof(UDelMarPositionalTrackerComponent, TimeSinceLastUpdate) == 296, "Offset mismatch for UDelMarPositionalTrackerComponent::TimeSinceLastUpdate");
static_assert(offsetof(UDelMarPositionalTrackerComponent, NumLapsInRace) == 300, "Offset mismatch for UDelMarPositionalTrackerComponent::NumLapsInRace");

// /Script/DelMarCore.DelMarPreRaceControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarPreRaceControllerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* NavigateAction; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ReadyUpAction; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ViewTargetTransitionParams[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    float NavigateInputDeadzone; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    void* InputManagerClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputManager; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InputComponent; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PositionTracker; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentViewTarget; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
    float CellDistThreshold; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float MaxGridDim; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t NavigationTimerHandle[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarPreRaceControllerComponent, NavigateAction) == 216, "Offset mismatch for UDelMarPreRaceControllerComponent::NavigateAction");
static_assert(offsetof(UDelMarPreRaceControllerComponent, ReadyUpAction) == 224, "Offset mismatch for UDelMarPreRaceControllerComponent::ReadyUpAction");
static_assert(offsetof(UDelMarPreRaceControllerComponent, ViewTargetTransitionParams) == 232, "Offset mismatch for UDelMarPreRaceControllerComponent::ViewTargetTransitionParams");
static_assert(offsetof(UDelMarPreRaceControllerComponent, NavigateInputDeadzone) == 248, "Offset mismatch for UDelMarPreRaceControllerComponent::NavigateInputDeadzone");
static_assert(offsetof(UDelMarPreRaceControllerComponent, InputManagerClass) == 256, "Offset mismatch for UDelMarPreRaceControllerComponent::InputManagerClass");
static_assert(offsetof(UDelMarPreRaceControllerComponent, InputManager) == 264, "Offset mismatch for UDelMarPreRaceControllerComponent::InputManager");
static_assert(offsetof(UDelMarPreRaceControllerComponent, InputComponent) == 272, "Offset mismatch for UDelMarPreRaceControllerComponent::InputComponent");
static_assert(offsetof(UDelMarPreRaceControllerComponent, PositionTracker) == 280, "Offset mismatch for UDelMarPreRaceControllerComponent::PositionTracker");
static_assert(offsetof(UDelMarPreRaceControllerComponent, CurrentViewTarget) == 288, "Offset mismatch for UDelMarPreRaceControllerComponent::CurrentViewTarget");
static_assert(offsetof(UDelMarPreRaceControllerComponent, CellDistThreshold) == 296, "Offset mismatch for UDelMarPreRaceControllerComponent::CellDistThreshold");
static_assert(offsetof(UDelMarPreRaceControllerComponent, MaxGridDim) == 300, "Offset mismatch for UDelMarPreRaceControllerComponent::MaxGridDim");
static_assert(offsetof(UDelMarPreRaceControllerComponent, NavigationTimerHandle) == 304, "Offset mismatch for UDelMarPreRaceControllerComponent::NavigationTimerHandle");

// /Script/DelMarCore.DelMarProxyGhostVisualComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarProxyGhostVisualComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedVehicle; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedVCAMUC; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* ProxyGhostMaterial; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> VehicleMaterialInfoMap; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarProxyGhostVisualComponent, CachedVehicle) == 192, "Offset mismatch for UDelMarProxyGhostVisualComponent::CachedVehicle");
static_assert(offsetof(UDelMarProxyGhostVisualComponent, CachedVCAMUC) == 200, "Offset mismatch for UDelMarProxyGhostVisualComponent::CachedVCAMUC");
static_assert(offsetof(UDelMarProxyGhostVisualComponent, ProxyGhostMaterial) == 208, "Offset mismatch for UDelMarProxyGhostVisualComponent::ProxyGhostMaterial");
static_assert(offsetof(UDelMarProxyGhostVisualComponent, VehicleMaterialInfoMap) == 216, "Offset mismatch for UDelMarProxyGhostVisualComponent::VehicleMaterialInfoMap");

// /Script/DelMarCore.DelMarRaceConfigComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRaceConfigComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bGhostReplayEnabled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowExitingVehicles; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetPlayerRunOnUnregister; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00C3
    float MatchStartDelaySecondsOverride; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float SecondsBeforeWrongwayWarning; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float SecondsBeforeDemoWarningsAppear; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float SecondsBeforeMissedCheckpointDemo; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float SecondsBeforeReturnToTrackDemo; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    double DistanceFromTrackBeforeDemoWarning; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double DistanceFromVehicleBeforeReset; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DefaultVehicleClass[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ServerPlayerStateComponents; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientPlayerStateComponents; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerControllerComponents; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientControllerComponents; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* SpectatorControllerComponentClass; // 0x0148 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BotRuntimeConfig[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t MatchmakingConfig[0x20]; // 0x0178 (Size: 0x20, Type: StructProperty)
    std::uint8_t StartlineConfig[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t VehicleRuntimeConfig[0xC]; // 0x01C0 (Size: 0xC, Type: StructProperty)
    std::uint8_t VehicleAbilityConfig[0x14]; // 0x01CC (Size: 0x14, Type: StructProperty)
    std::uint8_t RespawnConfig[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultRubberbandingConfig[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    TArray<void*> RubberbandingMMRConfigs; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RubberbandingMMROverrideConfigs; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NonMMRRubberbandingConfigs; // 0x0238 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> NonMMRRubberbandingOverrideConfigs; // 0x0248 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarRaceConfigComponent, bGhostReplayEnabled) == 192, "Offset mismatch for UDelMarRaceConfigComponent::bGhostReplayEnabled");
static_assert(offsetof(UDelMarRaceConfigComponent, bAllowExitingVehicles) == 193, "Offset mismatch for UDelMarRaceConfigComponent::bAllowExitingVehicles");
static_assert(offsetof(UDelMarRaceConfigComponent, bResetPlayerRunOnUnregister) == 194, "Offset mismatch for UDelMarRaceConfigComponent::bResetPlayerRunOnUnregister");
static_assert(offsetof(UDelMarRaceConfigComponent, MatchStartDelaySecondsOverride) == 196, "Offset mismatch for UDelMarRaceConfigComponent::MatchStartDelaySecondsOverride");
static_assert(offsetof(UDelMarRaceConfigComponent, SecondsBeforeWrongwayWarning) == 200, "Offset mismatch for UDelMarRaceConfigComponent::SecondsBeforeWrongwayWarning");
static_assert(offsetof(UDelMarRaceConfigComponent, SecondsBeforeDemoWarningsAppear) == 204, "Offset mismatch for UDelMarRaceConfigComponent::SecondsBeforeDemoWarningsAppear");
static_assert(offsetof(UDelMarRaceConfigComponent, SecondsBeforeMissedCheckpointDemo) == 208, "Offset mismatch for UDelMarRaceConfigComponent::SecondsBeforeMissedCheckpointDemo");
static_assert(offsetof(UDelMarRaceConfigComponent, SecondsBeforeReturnToTrackDemo) == 212, "Offset mismatch for UDelMarRaceConfigComponent::SecondsBeforeReturnToTrackDemo");
static_assert(offsetof(UDelMarRaceConfigComponent, DistanceFromTrackBeforeDemoWarning) == 216, "Offset mismatch for UDelMarRaceConfigComponent::DistanceFromTrackBeforeDemoWarning");
static_assert(offsetof(UDelMarRaceConfigComponent, DistanceFromVehicleBeforeReset) == 224, "Offset mismatch for UDelMarRaceConfigComponent::DistanceFromVehicleBeforeReset");
static_assert(offsetof(UDelMarRaceConfigComponent, DefaultVehicleClass) == 232, "Offset mismatch for UDelMarRaceConfigComponent::DefaultVehicleClass");
static_assert(offsetof(UDelMarRaceConfigComponent, ServerPlayerStateComponents) == 264, "Offset mismatch for UDelMarRaceConfigComponent::ServerPlayerStateComponents");
static_assert(offsetof(UDelMarRaceConfigComponent, ClientPlayerStateComponents) == 280, "Offset mismatch for UDelMarRaceConfigComponent::ClientPlayerStateComponents");
static_assert(offsetof(UDelMarRaceConfigComponent, ServerControllerComponents) == 296, "Offset mismatch for UDelMarRaceConfigComponent::ServerControllerComponents");
static_assert(offsetof(UDelMarRaceConfigComponent, ClientControllerComponents) == 312, "Offset mismatch for UDelMarRaceConfigComponent::ClientControllerComponents");
static_assert(offsetof(UDelMarRaceConfigComponent, SpectatorControllerComponentClass) == 328, "Offset mismatch for UDelMarRaceConfigComponent::SpectatorControllerComponentClass");
static_assert(offsetof(UDelMarRaceConfigComponent, BotRuntimeConfig) == 336, "Offset mismatch for UDelMarRaceConfigComponent::BotRuntimeConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, MatchmakingConfig) == 376, "Offset mismatch for UDelMarRaceConfigComponent::MatchmakingConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, StartlineConfig) == 408, "Offset mismatch for UDelMarRaceConfigComponent::StartlineConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, VehicleRuntimeConfig) == 448, "Offset mismatch for UDelMarRaceConfigComponent::VehicleRuntimeConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, VehicleAbilityConfig) == 460, "Offset mismatch for UDelMarRaceConfigComponent::VehicleAbilityConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, RespawnConfig) == 480, "Offset mismatch for UDelMarRaceConfigComponent::RespawnConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, DefaultRubberbandingConfig) == 496, "Offset mismatch for UDelMarRaceConfigComponent::DefaultRubberbandingConfig");
static_assert(offsetof(UDelMarRaceConfigComponent, RubberbandingMMRConfigs) == 536, "Offset mismatch for UDelMarRaceConfigComponent::RubberbandingMMRConfigs");
static_assert(offsetof(UDelMarRaceConfigComponent, RubberbandingMMROverrideConfigs) == 552, "Offset mismatch for UDelMarRaceConfigComponent::RubberbandingMMROverrideConfigs");
static_assert(offsetof(UDelMarRaceConfigComponent, NonMMRRubberbandingConfigs) == 568, "Offset mismatch for UDelMarRaceConfigComponent::NonMMRRubberbandingConfigs");
static_assert(offsetof(UDelMarRaceConfigComponent, NonMMRRubberbandingOverrideConfigs) == 584, "Offset mismatch for UDelMarRaceConfigComponent::NonMMRRubberbandingOverrideConfigs");

// /Script/DelMarCore.DelMarRaceInfoComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRaceInfoComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString RaceGUID; // 0x00C0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarRaceInfoComponent, RaceGUID) == 192, "Offset mismatch for UDelMarRaceInfoComponent::RaceGUID");

// /Script/DelMarCore.DelMarRaceLevelConfig
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarRaceLevelConfig
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    std::uint8_t RaceMode; // 0x0B28 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0B29
    std::int32_t DefaultNumRequiredLaps; // 0x0B2C (Size: 0x4, Type: IntProperty)
    std::int32_t NumVisibleNextCheckpoints; // 0x0B30 (Size: 0x4, Type: IntProperty)
    float ZKillOffsetDistanceFromLowestSplinePoint; // 0x0B34 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRunAsADelMarExperience; // 0x0B38 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B39
    std::int32_t OvertimeSeconds; // 0x0B3C (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverrideTurboChargeRegenRateSeconds; // 0x0B40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0B41
    float TurboChargeRegenRateSeconds; // 0x0B44 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideTurboRaceStartCharges; // 0x0B48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0B49
    float TurboRaceStartCharges; // 0x0B4C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideTurboLapCompleteCharges; // 0x0B50 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0B51
    float TurboLapCompleteCharges; // 0x0B54 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNonTrackVelocityRedirectEnabled; // 0x0B58 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0B59
    std::uint8_t LevelTag[0x4]; // 0x0B5C (Size: 0x4, Type: StructProperty)
    std::uint8_t bHasMatchTimeLimit; // 0x0B60 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0B61
    std::int32_t MatchTimeLimitSeconds; // 0x0B64 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> RaceManagerClassMap; // 0x0B68 (Size: 0x10, Type: MapProperty)
    TArray<void*> RaceCVars; // 0x0B78 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarRaceLevelConfig, RaceMode) == 2856, "Offset mismatch for UDelMarRaceLevelConfig::RaceMode");
static_assert(offsetof(UDelMarRaceLevelConfig, DefaultNumRequiredLaps) == 2860, "Offset mismatch for UDelMarRaceLevelConfig::DefaultNumRequiredLaps");
static_assert(offsetof(UDelMarRaceLevelConfig, NumVisibleNextCheckpoints) == 2864, "Offset mismatch for UDelMarRaceLevelConfig::NumVisibleNextCheckpoints");
static_assert(offsetof(UDelMarRaceLevelConfig, ZKillOffsetDistanceFromLowestSplinePoint) == 2868, "Offset mismatch for UDelMarRaceLevelConfig::ZKillOffsetDistanceFromLowestSplinePoint");
static_assert(offsetof(UDelMarRaceLevelConfig, bShouldRunAsADelMarExperience) == 2872, "Offset mismatch for UDelMarRaceLevelConfig::bShouldRunAsADelMarExperience");
static_assert(offsetof(UDelMarRaceLevelConfig, OvertimeSeconds) == 2876, "Offset mismatch for UDelMarRaceLevelConfig::OvertimeSeconds");
static_assert(offsetof(UDelMarRaceLevelConfig, bOverrideTurboChargeRegenRateSeconds) == 2880, "Offset mismatch for UDelMarRaceLevelConfig::bOverrideTurboChargeRegenRateSeconds");
static_assert(offsetof(UDelMarRaceLevelConfig, TurboChargeRegenRateSeconds) == 2884, "Offset mismatch for UDelMarRaceLevelConfig::TurboChargeRegenRateSeconds");
static_assert(offsetof(UDelMarRaceLevelConfig, bOverrideTurboRaceStartCharges) == 2888, "Offset mismatch for UDelMarRaceLevelConfig::bOverrideTurboRaceStartCharges");
static_assert(offsetof(UDelMarRaceLevelConfig, TurboRaceStartCharges) == 2892, "Offset mismatch for UDelMarRaceLevelConfig::TurboRaceStartCharges");
static_assert(offsetof(UDelMarRaceLevelConfig, bOverrideTurboLapCompleteCharges) == 2896, "Offset mismatch for UDelMarRaceLevelConfig::bOverrideTurboLapCompleteCharges");
static_assert(offsetof(UDelMarRaceLevelConfig, TurboLapCompleteCharges) == 2900, "Offset mismatch for UDelMarRaceLevelConfig::TurboLapCompleteCharges");
static_assert(offsetof(UDelMarRaceLevelConfig, bNonTrackVelocityRedirectEnabled) == 2904, "Offset mismatch for UDelMarRaceLevelConfig::bNonTrackVelocityRedirectEnabled");
static_assert(offsetof(UDelMarRaceLevelConfig, LevelTag) == 2908, "Offset mismatch for UDelMarRaceLevelConfig::LevelTag");
static_assert(offsetof(UDelMarRaceLevelConfig, bHasMatchTimeLimit) == 2912, "Offset mismatch for UDelMarRaceLevelConfig::bHasMatchTimeLimit");
static_assert(offsetof(UDelMarRaceLevelConfig, MatchTimeLimitSeconds) == 2916, "Offset mismatch for UDelMarRaceLevelConfig::MatchTimeLimitSeconds");
static_assert(offsetof(UDelMarRaceLevelConfig, RaceManagerClassMap) == 2920, "Offset mismatch for UDelMarRaceLevelConfig::RaceManagerClassMap");
static_assert(offsetof(UDelMarRaceLevelConfig, RaceCVars) == 2936, "Offset mismatch for UDelMarRaceLevelConfig::RaceCVars");

// /Script/DelMarCore.DelMarRaceManager
// Kind: Class; super: Actor
class UDelMarRaceManager
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    FMulticastInlineDelegate OnRaceFinished; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRaceStarted; // 0x0328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRaceCountdownStarted; // 0x0338 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRaceReset; // 0x0348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerFinishedRace; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerLapComplete; // 0x0368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerResetRun; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bRaceStarted; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRaceFinished; // 0x0389 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x038A
    TArray<void*> SpectatorPlayerStates; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveRacerPlayerStates; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    void* RaceConfig; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ActiveRaceLevelConfig; // 0x03B8 (Size: 0x8, Type: WeakObjectProperty)
    void* TimeManager; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* RespawnManager; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* CheckpointManager; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* RubberbandingManager; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* GameplayModifierComponent; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* PositionalTracker; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* EliminationManager; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* InputDisablerComponent; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* MatchEventSystemComponent; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ManagedPlayerStates[0x10]; // 0x0408 (Size: 0x10, Type: SetProperty)
    TSet<void*> InactivePlayerStates; // 0x0418 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UDelMarRaceManager, OnRaceFinished) == 792, "Offset mismatch for UDelMarRaceManager::OnRaceFinished");
static_assert(offsetof(UDelMarRaceManager, OnRaceStarted) == 808, "Offset mismatch for UDelMarRaceManager::OnRaceStarted");
static_assert(offsetof(UDelMarRaceManager, OnRaceCountdownStarted) == 824, "Offset mismatch for UDelMarRaceManager::OnRaceCountdownStarted");
static_assert(offsetof(UDelMarRaceManager, OnRaceReset) == 840, "Offset mismatch for UDelMarRaceManager::OnRaceReset");
static_assert(offsetof(UDelMarRaceManager, OnPlayerFinishedRace) == 856, "Offset mismatch for UDelMarRaceManager::OnPlayerFinishedRace");
static_assert(offsetof(UDelMarRaceManager, OnPlayerLapComplete) == 872, "Offset mismatch for UDelMarRaceManager::OnPlayerLapComplete");
static_assert(offsetof(UDelMarRaceManager, OnPlayerResetRun) == 888, "Offset mismatch for UDelMarRaceManager::OnPlayerResetRun");
static_assert(offsetof(UDelMarRaceManager, bRaceStarted) == 904, "Offset mismatch for UDelMarRaceManager::bRaceStarted");
static_assert(offsetof(UDelMarRaceManager, bRaceFinished) == 905, "Offset mismatch for UDelMarRaceManager::bRaceFinished");
static_assert(offsetof(UDelMarRaceManager, SpectatorPlayerStates) == 912, "Offset mismatch for UDelMarRaceManager::SpectatorPlayerStates");
static_assert(offsetof(UDelMarRaceManager, ActiveRacerPlayerStates) == 928, "Offset mismatch for UDelMarRaceManager::ActiveRacerPlayerStates");
static_assert(offsetof(UDelMarRaceManager, RaceConfig) == 944, "Offset mismatch for UDelMarRaceManager::RaceConfig");
static_assert(offsetof(UDelMarRaceManager, ActiveRaceLevelConfig) == 952, "Offset mismatch for UDelMarRaceManager::ActiveRaceLevelConfig");
static_assert(offsetof(UDelMarRaceManager, TimeManager) == 960, "Offset mismatch for UDelMarRaceManager::TimeManager");
static_assert(offsetof(UDelMarRaceManager, RespawnManager) == 968, "Offset mismatch for UDelMarRaceManager::RespawnManager");
static_assert(offsetof(UDelMarRaceManager, CheckpointManager) == 976, "Offset mismatch for UDelMarRaceManager::CheckpointManager");
static_assert(offsetof(UDelMarRaceManager, RubberbandingManager) == 984, "Offset mismatch for UDelMarRaceManager::RubberbandingManager");
static_assert(offsetof(UDelMarRaceManager, GameplayModifierComponent) == 992, "Offset mismatch for UDelMarRaceManager::GameplayModifierComponent");
static_assert(offsetof(UDelMarRaceManager, PositionalTracker) == 1000, "Offset mismatch for UDelMarRaceManager::PositionalTracker");
static_assert(offsetof(UDelMarRaceManager, EliminationManager) == 1008, "Offset mismatch for UDelMarRaceManager::EliminationManager");
static_assert(offsetof(UDelMarRaceManager, InputDisablerComponent) == 1016, "Offset mismatch for UDelMarRaceManager::InputDisablerComponent");
static_assert(offsetof(UDelMarRaceManager, MatchEventSystemComponent) == 1024, "Offset mismatch for UDelMarRaceManager::MatchEventSystemComponent");
static_assert(offsetof(UDelMarRaceManager, ManagedPlayerStates) == 1032, "Offset mismatch for UDelMarRaceManager::ManagedPlayerStates");
static_assert(offsetof(UDelMarRaceManager, InactivePlayerStates) == 1048, "Offset mismatch for UDelMarRaceManager::InactivePlayerStates");

// /Script/DelMarCore.DelMarRaceManagerComponent
// Kind: Class; super: GameFrameworkComponent
class UDelMarRaceManagerComponent
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

static_assert(offsetof(UDelMarRaceManagerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarRaceManagerComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarRaceManagerComponent, ComponentTags) == 104, "Offset mismatch for UDelMarRaceManagerComponent::ComponentTags");
static_assert(offsetof(UDelMarRaceManagerComponent, AssetUserData) == 120, "Offset mismatch for UDelMarRaceManagerComponent::AssetUserData");
static_assert(offsetof(UDelMarRaceManagerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarRaceManagerComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarRaceManagerComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarRaceManagerComponent::bNetAddressable");
static_assert(offsetof(UDelMarRaceManagerComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarRaceManagerComponent::bAutoActivate");
static_assert(offsetof(UDelMarRaceManagerComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarRaceManagerComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarRaceManagerComponent, CreationMethod) == 185, "Offset mismatch for UDelMarRaceManagerComponent::CreationMethod");
static_assert(offsetof(UDelMarRaceManagerComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarRaceManagerComponent::OnComponentActivated");
static_assert(offsetof(UDelMarRaceManagerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarRaceManagerComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarRaceManagerVerbComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRaceManagerVerbComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PositionalTracker; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> PrevRacePositions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarRaceManagerVerbComponent, CachedRaceManager) == 192, "Offset mismatch for UDelMarRaceManagerVerbComponent::CachedRaceManager");
static_assert(offsetof(UDelMarRaceManagerVerbComponent, PositionalTracker) == 200, "Offset mismatch for UDelMarRaceManagerVerbComponent::PositionalTracker");
static_assert(offsetof(UDelMarRaceManagerVerbComponent, PrevRacePositions) == 208, "Offset mismatch for UDelMarRaceManagerVerbComponent::PrevRacePositions");

// /Script/DelMarCore.DelMarRaceMusicPlaylist
// Kind: Class; super: PrimaryDataAsset
class UDelMarRaceMusicPlaylist
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Tracks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarRaceMusicPlaylist, Tracks) == 40, "Offset mismatch for UDelMarRaceMusicPlaylist::Tracks");

// /Script/DelMarCore.DelMarRaceMusicPlaylistComponent
// Kind: Class; super: ActorComponent
class UDelMarRaceMusicPlaylistComponent
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

static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, ComponentTags) == 104, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::ComponentTags");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, AssetUserData) == 120, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::AssetUserData");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::bNetAddressable");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::bAutoActivate");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, CreationMethod) == 185, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::CreationMethod");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::OnComponentActivated");
static_assert(offsetof(UDelMarRaceMusicPlaylistComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarRaceMusicPlaylistComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarRacerState
// Kind: Class; super: DelMarState
class UDelMarRacerState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarRacerState, StateTag) == 40, "Offset mismatch for UDelMarRacerState::StateTag");

// /Script/DelMarCore.DelMarRacerStateMachineComponent
// Kind: Class; super: DelMarStateMachine
class UDelMarRacerStateMachineComponent
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TWeakObjectPtr<void> RaceManager; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviousStateTag[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarRacerStateMachineComponent, RaceManager) == 392, "Offset mismatch for UDelMarRacerStateMachineComponent::RaceManager");
static_assert(offsetof(UDelMarRacerStateMachineComponent, PreviousStateTag) == 400, "Offset mismatch for UDelMarRacerStateMachineComponent::PreviousStateTag");

// /Script/DelMarCore.DelMarRacerState_Countdown
// Kind: Class; super: DelMarRacerState
class UDelMarRacerState_Countdown
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> Vehicle; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarRacerState_Countdown, Vehicle) == 48, "Offset mismatch for UDelMarRacerState_Countdown::Vehicle");

// /Script/DelMarCore.DelMarRacerState_RunFinished
// Kind: Class; super: DelMarRacerState_WithSpectatorTransitionBase
class UDelMarRacerState_RunFinished
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> Vehicle; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarRacerState_RunFinished, Vehicle) == 48, "Offset mismatch for UDelMarRacerState_RunFinished::Vehicle");

// /Script/DelMarCore.DelMarRacerState_Spectator
// Kind: Class; super: DelMarRacerState
class UDelMarRacerState_Spectator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarRacerState_Spectator, StateTag) == 40, "Offset mismatch for UDelMarRacerState_Spectator::StateTag");

// /Script/DelMarCore.DelMarRacerState_WithSpectatorTransitionBase
// Kind: Class; super: DelMarRacerState
class UDelMarRacerState_WithSpectatorTransitionBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarRacerState_WithSpectatorTransitionBase, StateTag) == 40, "Offset mismatch for UDelMarRacerState_WithSpectatorTransitionBase::StateTag");

// /Script/DelMarCore.DelMarRemoveAthenaMarkerComponent
// Kind: Class; super: ControllerComponent
class UDelMarRemoveAthenaMarkerComponent
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

static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, ComponentTags) == 104, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::ComponentTags");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, AssetUserData) == 120, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::AssetUserData");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::bNetAddressable");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::bAutoActivate");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, CreationMethod) == 185, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::CreationMethod");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::OnComponentActivated");
static_assert(offsetof(UDelMarRemoveAthenaMarkerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarRemoveAthenaMarkerComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarRequestComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarRequestComponent
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t MapChoice[0x20]; // 0x0108 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsLoadingScreenActive; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReadyToStartRace; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReadyToJoinRace; // 0x012A (Size: 0x1, Type: BoolProperty)
    std::uint8_t PostRaceVote; // 0x012B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bVotedPostRace; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x012D
    TWeakObjectPtr<void> CachedRaceManager; // 0x0130 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRespawnManager; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0140 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarRequestComponent, MapChoice) == 264, "Offset mismatch for UDelMarRequestComponent::MapChoice");
static_assert(offsetof(UDelMarRequestComponent, bIsLoadingScreenActive) == 296, "Offset mismatch for UDelMarRequestComponent::bIsLoadingScreenActive");
static_assert(offsetof(UDelMarRequestComponent, bIsReadyToStartRace) == 297, "Offset mismatch for UDelMarRequestComponent::bIsReadyToStartRace");
static_assert(offsetof(UDelMarRequestComponent, bIsReadyToJoinRace) == 298, "Offset mismatch for UDelMarRequestComponent::bIsReadyToJoinRace");
static_assert(offsetof(UDelMarRequestComponent, PostRaceVote) == 299, "Offset mismatch for UDelMarRequestComponent::PostRaceVote");
static_assert(offsetof(UDelMarRequestComponent, bVotedPostRace) == 300, "Offset mismatch for UDelMarRequestComponent::bVotedPostRace");
static_assert(offsetof(UDelMarRequestComponent, CachedRaceManager) == 304, "Offset mismatch for UDelMarRequestComponent::CachedRaceManager");
static_assert(offsetof(UDelMarRequestComponent, CachedRespawnManager) == 312, "Offset mismatch for UDelMarRequestComponent::CachedRespawnManager");
static_assert(offsetof(UDelMarRequestComponent, PlayerState) == 320, "Offset mismatch for UDelMarRequestComponent::PlayerState");

// /Script/DelMarCore.DelMarRequestTrackerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRequestTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PlayerReadyStates[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarRequestTrackerComponent, PlayerReadyStates) == 192, "Offset mismatch for UDelMarRequestTrackerComponent::PlayerReadyStates");

// /Script/DelMarCore.DelMarRespawnManagerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRespawnManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float RespawnRetrySeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x00C4
    TWeakObjectPtr<void> CachedCheckpointManager; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedChallengeStartSpawnPoint; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> RespawnRetryQueue; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> LastSpawnedVehicleMap; // 0x0100 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarRespawnManagerComponent, RespawnRetrySeconds) == 192, "Offset mismatch for UDelMarRespawnManagerComponent::RespawnRetrySeconds");
static_assert(offsetof(UDelMarRespawnManagerComponent, CachedCheckpointManager) == 216, "Offset mismatch for UDelMarRespawnManagerComponent::CachedCheckpointManager");
static_assert(offsetof(UDelMarRespawnManagerComponent, CachedRaceManager) == 224, "Offset mismatch for UDelMarRespawnManagerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarRespawnManagerComponent, CachedChallengeStartSpawnPoint) == 232, "Offset mismatch for UDelMarRespawnManagerComponent::CachedChallengeStartSpawnPoint");
static_assert(offsetof(UDelMarRespawnManagerComponent, RespawnRetryQueue) == 240, "Offset mismatch for UDelMarRespawnManagerComponent::RespawnRetryQueue");
static_assert(offsetof(UDelMarRespawnManagerComponent, LastSpawnedVehicleMap) == 256, "Offset mismatch for UDelMarRespawnManagerComponent::LastSpawnedVehicleMap");

// /Script/DelMarCore.DelMarRubberbandingManagerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarRubberbandingManagerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    float PackDistance; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RubberbandingConfig[0x28]; // 0x00DC (Size: 0x28, Type: StructProperty)
    std::int32_t MMRUsed; // 0x0104 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarRubberbandingManagerComponent, PackDistance) == 216, "Offset mismatch for UDelMarRubberbandingManagerComponent::PackDistance");
static_assert(offsetof(UDelMarRubberbandingManagerComponent, RubberbandingConfig) == 220, "Offset mismatch for UDelMarRubberbandingManagerComponent::RubberbandingConfig");
static_assert(offsetof(UDelMarRubberbandingManagerComponent, MMRUsed) == 260, "Offset mismatch for UDelMarRubberbandingManagerComponent::MMRUsed");

// /Script/DelMarCore.DelMarRunRecordPlayerComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarRunRecordPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentRunRecord[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BestRunRecord[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BestSectionsRecord[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    double BestSingleLapTime; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    TWeakObjectPtr<void> RaceManager; // 0x0128 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarRunRecordPlayerComponent, CurrentRunRecord) == 192, "Offset mismatch for UDelMarRunRecordPlayerComponent::CurrentRunRecord");
static_assert(offsetof(UDelMarRunRecordPlayerComponent, BestRunRecord) == 224, "Offset mismatch for UDelMarRunRecordPlayerComponent::BestRunRecord");
static_assert(offsetof(UDelMarRunRecordPlayerComponent, BestSectionsRecord) == 256, "Offset mismatch for UDelMarRunRecordPlayerComponent::BestSectionsRecord");
static_assert(offsetof(UDelMarRunRecordPlayerComponent, BestSingleLapTime) == 288, "Offset mismatch for UDelMarRunRecordPlayerComponent::BestSingleLapTime");
static_assert(offsetof(UDelMarRunRecordPlayerComponent, RaceManager) == 296, "Offset mismatch for UDelMarRunRecordPlayerComponent::RaceManager");

// /Script/DelMarCore.DelMarSpectatorControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarSpectatorControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* SpectateNextPlayerAction; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* SpectatePrevPlayerAction; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* ExitSpectateAction; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* InputManagerClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorRequestComponent; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentViewTarget; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevValidViewTarget; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorPlayerState; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatorController; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsLateJoinSpectator; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarSpectatorControllerComponent, SpectateNextPlayerAction) == 192, "Offset mismatch for UDelMarSpectatorControllerComponent::SpectateNextPlayerAction");
static_assert(offsetof(UDelMarSpectatorControllerComponent, SpectatePrevPlayerAction) == 200, "Offset mismatch for UDelMarSpectatorControllerComponent::SpectatePrevPlayerAction");
static_assert(offsetof(UDelMarSpectatorControllerComponent, ExitSpectateAction) == 208, "Offset mismatch for UDelMarSpectatorControllerComponent::ExitSpectateAction");
static_assert(offsetof(UDelMarSpectatorControllerComponent, InputManagerClass) == 216, "Offset mismatch for UDelMarSpectatorControllerComponent::InputManagerClass");
static_assert(offsetof(UDelMarSpectatorControllerComponent, InputComponent) == 224, "Offset mismatch for UDelMarSpectatorControllerComponent::InputComponent");
static_assert(offsetof(UDelMarSpectatorControllerComponent, CachedRaceManager) == 232, "Offset mismatch for UDelMarSpectatorControllerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarSpectatorControllerComponent, SpectatorRequestComponent) == 240, "Offset mismatch for UDelMarSpectatorControllerComponent::SpectatorRequestComponent");
static_assert(offsetof(UDelMarSpectatorControllerComponent, CurrentViewTarget) == 248, "Offset mismatch for UDelMarSpectatorControllerComponent::CurrentViewTarget");
static_assert(offsetof(UDelMarSpectatorControllerComponent, PrevValidViewTarget) == 256, "Offset mismatch for UDelMarSpectatorControllerComponent::PrevValidViewTarget");
static_assert(offsetof(UDelMarSpectatorControllerComponent, SpectatorPlayerState) == 264, "Offset mismatch for UDelMarSpectatorControllerComponent::SpectatorPlayerState");
static_assert(offsetof(UDelMarSpectatorControllerComponent, SpectatorController) == 272, "Offset mismatch for UDelMarSpectatorControllerComponent::SpectatorController");
static_assert(offsetof(UDelMarSpectatorControllerComponent, bIsLateJoinSpectator) == 280, "Offset mismatch for UDelMarSpectatorControllerComponent::bIsLateJoinSpectator");

// /Script/DelMarCore.DelMarSpeedUpDevice
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarSpeedUpDevice
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    float SpeedAmount; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    float SpeedEffectDuration; // 0x0B2C (Size: 0x4, Type: FloatProperty)
    float TurboChargesGained; // 0x0B30 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0B34
    float MinDotProductAngleValue; // 0x0B50 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedSourceTag[0x4]; // 0x0B54 (Size: 0x4, Type: StructProperty)
    std::uint8_t bApplyForce; // 0x0B58 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B59
    std::int32_t GroupID; // 0x0B5C (Size: 0x4, Type: IntProperty)
    std::uint8_t PowerIntensityScalarCurve[0x50]; // 0x0B60 (Size: 0x50, Type: StructProperty)
    float MaxLifetimePowerIntensitySeconds; // 0x0BB0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0BB4
    void* Collider; // 0x0BB8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarSpeedUpDevice, SpeedAmount) == 2856, "Offset mismatch for UDelMarSpeedUpDevice::SpeedAmount");
static_assert(offsetof(UDelMarSpeedUpDevice, SpeedEffectDuration) == 2860, "Offset mismatch for UDelMarSpeedUpDevice::SpeedEffectDuration");
static_assert(offsetof(UDelMarSpeedUpDevice, TurboChargesGained) == 2864, "Offset mismatch for UDelMarSpeedUpDevice::TurboChargesGained");
static_assert(offsetof(UDelMarSpeedUpDevice, MinDotProductAngleValue) == 2896, "Offset mismatch for UDelMarSpeedUpDevice::MinDotProductAngleValue");
static_assert(offsetof(UDelMarSpeedUpDevice, SpeedSourceTag) == 2900, "Offset mismatch for UDelMarSpeedUpDevice::SpeedSourceTag");
static_assert(offsetof(UDelMarSpeedUpDevice, bApplyForce) == 2904, "Offset mismatch for UDelMarSpeedUpDevice::bApplyForce");
static_assert(offsetof(UDelMarSpeedUpDevice, GroupID) == 2908, "Offset mismatch for UDelMarSpeedUpDevice::GroupID");
static_assert(offsetof(UDelMarSpeedUpDevice, PowerIntensityScalarCurve) == 2912, "Offset mismatch for UDelMarSpeedUpDevice::PowerIntensityScalarCurve");
static_assert(offsetof(UDelMarSpeedUpDevice, MaxLifetimePowerIntensitySeconds) == 2992, "Offset mismatch for UDelMarSpeedUpDevice::MaxLifetimePowerIntensitySeconds");
static_assert(offsetof(UDelMarSpeedUpDevice, Collider) == 3000, "Offset mismatch for UDelMarSpeedUpDevice::Collider");

// /Script/DelMarCore.DelMarSplineActorMovementComponent
// Kind: Class; super: ActorComponent
class UDelMarSplineActorMovementComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> MovementSpline; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    float MovementSpeed; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarSplineActorMovementComponent, MovementSpline) == 192, "Offset mismatch for UDelMarSplineActorMovementComponent::MovementSpline");
static_assert(offsetof(UDelMarSplineActorMovementComponent, MovementSpeed) == 200, "Offset mismatch for UDelMarSplineActorMovementComponent::MovementSpeed");

// /Script/DelMarCore.DelMarStartLineActor
// Kind: Class; super: Actor
class UDelMarStartLineActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Checkpoint; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarStartLineActor, Checkpoint) == 624, "Offset mismatch for UDelMarStartLineActor::Checkpoint");

// /Script/DelMarCore.DelMarState
// Kind: Class; super: Object
class UDelMarState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarState, StateTag) == 40, "Offset mismatch for UDelMarState::StateTag");

// /Script/DelMarCore.DelMarStateMachine
// Kind: Class; super: ActorComponent
class UDelMarStateMachine
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> StateOverrides; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StateMappings; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t RequestedStateTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentStateTag[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultStateTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    TArray<void*> ActiveStates; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedStates; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WaitingForStateReplicationTag[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarStateMachine, StateOverrides) == 192, "Offset mismatch for UDelMarStateMachine::StateOverrides");
static_assert(offsetof(UDelMarStateMachine, StateMappings) == 208, "Offset mismatch for UDelMarStateMachine::StateMappings");
static_assert(offsetof(UDelMarStateMachine, RequestedStateTag) == 224, "Offset mismatch for UDelMarStateMachine::RequestedStateTag");
static_assert(offsetof(UDelMarStateMachine, CurrentStateTag) == 228, "Offset mismatch for UDelMarStateMachine::CurrentStateTag");
static_assert(offsetof(UDelMarStateMachine, DefaultStateTag) == 232, "Offset mismatch for UDelMarStateMachine::DefaultStateTag");
static_assert(offsetof(UDelMarStateMachine, ActiveStates) == 240, "Offset mismatch for UDelMarStateMachine::ActiveStates");
static_assert(offsetof(UDelMarStateMachine, ReplicatedStates) == 256, "Offset mismatch for UDelMarStateMachine::ReplicatedStates");
static_assert(offsetof(UDelMarStateMachine, WaitingForStateReplicationTag) == 272, "Offset mismatch for UDelMarStateMachine::WaitingForStateReplicationTag");

// /Script/DelMarCore.DelMarStateSequencerFXComponent
// Kind: Class; super: ActorComponent
class UDelMarStateSequencerFXComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float FXSizeScalar; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TMap<void*, void*> ParticleClassMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00D8
    std::uint8_t SpawnParams[0x70]; // 0x00E0 (Size: 0x70, Type: StructProperty)
    void* ParentRef; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ParticleComponentMap; // 0x0158 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarStateSequencerFXComponent, FXSizeScalar) == 192, "Offset mismatch for UDelMarStateSequencerFXComponent::FXSizeScalar");
static_assert(offsetof(UDelMarStateSequencerFXComponent, ParticleClassMap) == 200, "Offset mismatch for UDelMarStateSequencerFXComponent::ParticleClassMap");
static_assert(offsetof(UDelMarStateSequencerFXComponent, SpawnParams) == 224, "Offset mismatch for UDelMarStateSequencerFXComponent::SpawnParams");
static_assert(offsetof(UDelMarStateSequencerFXComponent, ParentRef) == 336, "Offset mismatch for UDelMarStateSequencerFXComponent::ParentRef");
static_assert(offsetof(UDelMarStateSequencerFXComponent, ParticleComponentMap) == 344, "Offset mismatch for UDelMarStateSequencerFXComponent::ParticleComponentMap");

// /Script/DelMarCore.DelMarState_Gameplay
// Kind: Class; super: DelMarState
class UDelMarState_Gameplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarState_Gameplay, StateTag) == 40, "Offset mismatch for UDelMarState_Gameplay::StateTag");

// /Script/DelMarCore.DelMarState_Gameplay_ActiveRace
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Gameplay_ActiveRace
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarState_Gameplay_ActiveRace, StateTag) == 40, "Offset mismatch for UDelMarState_Gameplay_ActiveRace::StateTag");

// /Script/DelMarCore.DelMarState_Gameplay_Postrace
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Gameplay_Postrace
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float PostRaceDuration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    double PostRaceEndServerTime; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ReadyPlayers[0x10]; // 0x0040 (Size: 0x10, Type: SetProperty)
    TWeakObjectPtr<void> CachedPlayspace; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0060
    FString EliminationList; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarState_Gameplay_Postrace, PostRaceDuration) == 48, "Offset mismatch for UDelMarState_Gameplay_Postrace::PostRaceDuration");
static_assert(offsetof(UDelMarState_Gameplay_Postrace, PostRaceEndServerTime) == 56, "Offset mismatch for UDelMarState_Gameplay_Postrace::PostRaceEndServerTime");
static_assert(offsetof(UDelMarState_Gameplay_Postrace, ReadyPlayers) == 64, "Offset mismatch for UDelMarState_Gameplay_Postrace::ReadyPlayers");
static_assert(offsetof(UDelMarState_Gameplay_Postrace, CachedPlayspace) == 80, "Offset mismatch for UDelMarState_Gameplay_Postrace::CachedPlayspace");
static_assert(offsetof(UDelMarState_Gameplay_Postrace, CachedRaceManager) == 88, "Offset mismatch for UDelMarState_Gameplay_Postrace::CachedRaceManager");
static_assert(offsetof(UDelMarState_Gameplay_Postrace, EliminationList) == 168, "Offset mismatch for UDelMarState_Gameplay_Postrace::EliminationList");

// /Script/DelMarCore.DelMarState_Gameplay_Prerace
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Gameplay_Prerace
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> RaceManager; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    double PreRaceCountdownFinishServerTime; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UDelMarState_Gameplay_Prerace, RaceManager) == 48, "Offset mismatch for UDelMarState_Gameplay_Prerace::RaceManager");
static_assert(offsetof(UDelMarState_Gameplay_Prerace, PreRaceCountdownFinishServerTime) == 64, "Offset mismatch for UDelMarState_Gameplay_Prerace::PreRaceCountdownFinishServerTime");

// /Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Gameplay_WaitingForPlayers
{
public:
    std::uint8_t Pad_0000[0x34]; // 0x0000
    std::int32_t MinPlayers; // 0x0034 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> RaceManager; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MatchmakeRatingComponent; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LoadedPlayerStates[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    TWeakObjectPtr<void> FortPartyBeacon; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ContentBeacon; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, MinPlayers) == 52, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::MinPlayers");
static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, RaceManager) == 56, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::RaceManager");
static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, MatchmakeRatingComponent) == 64, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::MatchmakeRatingComponent");
static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, LoadedPlayerStates) == 72, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::LoadedPlayerStates");
static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, FortPartyBeacon) == 80, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::FortPartyBeacon");
static_assert(offsetof(UDelMarState_Gameplay_WaitingForPlayers, ContentBeacon) == 88, "Offset mismatch for UDelMarState_Gameplay_WaitingForPlayers::ContentBeacon");

// /Script/DelMarCore.DelMarState_LevelSetup
// Kind: Class; super: DelMarGameplayState
class UDelMarState_LevelSetup
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bVehiclesReady; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVehiclesSpawned; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarState_LevelSetup, bVehiclesReady) == 48, "Offset mismatch for UDelMarState_LevelSetup::bVehiclesReady");
static_assert(offsetof(UDelMarState_LevelSetup, bVehiclesSpawned) == 49, "Offset mismatch for UDelMarState_LevelSetup::bVehiclesSpawned");

// /Script/DelMarCore.DelMarState_Loading
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Loading
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DelayBeforeLoadingActuallyStarts; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t DesiredMap[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarState_Loading, DelayBeforeLoadingActuallyStarts) == 48, "Offset mismatch for UDelMarState_Loading::DelayBeforeLoadingActuallyStarts");
static_assert(offsetof(UDelMarState_Loading, DesiredMap) == 56, "Offset mismatch for UDelMarState_Loading::DesiredMap");

// /Script/DelMarCore.DelMarState_Lobby
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Lobby
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bLevelLoadRequested; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarState_Lobby, bLevelLoadRequested) == 48, "Offset mismatch for UDelMarState_Lobby::bLevelLoadRequested");

// /Script/DelMarCore.DelMarState_Setup
// Kind: Class; super: DelMarGameplayState
class UDelMarState_Setup
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bHasRequestedLink; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasRecievedMatchAssignment; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresMatchAssignmentToProceed; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCalledMapRotationService; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t DebugMapToLoad[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t DebugIslandCodeToLoad[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarState_Setup, bHasRequestedLink) == 48, "Offset mismatch for UDelMarState_Setup::bHasRequestedLink");
static_assert(offsetof(UDelMarState_Setup, bHasRecievedMatchAssignment) == 49, "Offset mismatch for UDelMarState_Setup::bHasRecievedMatchAssignment");
static_assert(offsetof(UDelMarState_Setup, bRequiresMatchAssignmentToProceed) == 50, "Offset mismatch for UDelMarState_Setup::bRequiresMatchAssignmentToProceed");
static_assert(offsetof(UDelMarState_Setup, bCalledMapRotationService) == 51, "Offset mismatch for UDelMarState_Setup::bCalledMapRotationService");
static_assert(offsetof(UDelMarState_Setup, DebugMapToLoad) == 56, "Offset mismatch for UDelMarState_Setup::DebugMapToLoad");
static_assert(offsetof(UDelMarState_Setup, DebugIslandCodeToLoad) == 88, "Offset mismatch for UDelMarState_Setup::DebugIslandCodeToLoad");

// /Script/DelMarCore.DelMarSubmixSendExtension
// Kind: Class; super: ActorComponent
class UDelMarSubmixSendExtension
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float SendInterpTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarSubmixSendExtension, SendInterpTime) == 200, "Offset mismatch for UDelMarSubmixSendExtension::SendInterpTime");

// /Script/DelMarCore.DelMarTimeDelayedStateSequencer
// Kind: Class; super: Actor
class UDelMarTimeDelayedStateSequencer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnCurrentStateChanged; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnabledChanged; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableOnSpawn; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoopSpecificAmount; // 0x0291 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0292
    std::int32_t TotalLoopCount; // 0x0294 (Size: 0x4, Type: IntProperty)
    TArray<void*> StateArray; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0xC]; // 0x02A8
    std::uint8_t bIsEnabled; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x02B5
    std::int32_t CurrentStateIndex; // 0x02B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarTimeDelayedStateSequencer, OnCurrentStateChanged) == 624, "Offset mismatch for UDelMarTimeDelayedStateSequencer::OnCurrentStateChanged");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, OnEnabledChanged) == 640, "Offset mismatch for UDelMarTimeDelayedStateSequencer::OnEnabledChanged");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, bEnableOnSpawn) == 656, "Offset mismatch for UDelMarTimeDelayedStateSequencer::bEnableOnSpawn");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, bLoopSpecificAmount) == 657, "Offset mismatch for UDelMarTimeDelayedStateSequencer::bLoopSpecificAmount");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, TotalLoopCount) == 660, "Offset mismatch for UDelMarTimeDelayedStateSequencer::TotalLoopCount");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, StateArray) == 664, "Offset mismatch for UDelMarTimeDelayedStateSequencer::StateArray");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, bIsEnabled) == 692, "Offset mismatch for UDelMarTimeDelayedStateSequencer::bIsEnabled");
static_assert(offsetof(UDelMarTimeDelayedStateSequencer, CurrentStateIndex) == 696, "Offset mismatch for UDelMarTimeDelayedStateSequencer::CurrentStateIndex");

// /Script/DelMarCore.DelMarTimeManagerComponent
// Kind: Class; super: DelMarRaceManagerComponent
class UDelMarTimeManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerCountdownStarted; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    double ServerCountdownStartTime; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    double ServerRaceStartTime; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double ServerRaceFinishTime; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double ServerCountdownIntervalTime; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    TWeakObjectPtr<void> RaceConfig; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RaceLevelConfig; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> ActiveCountdownRunStartTimeMap; // 0x0108 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarTimeManagerComponent, OnPlayerCountdownStarted) == 192, "Offset mismatch for UDelMarTimeManagerComponent::OnPlayerCountdownStarted");
static_assert(offsetof(UDelMarTimeManagerComponent, ServerCountdownStartTime) == 208, "Offset mismatch for UDelMarTimeManagerComponent::ServerCountdownStartTime");
static_assert(offsetof(UDelMarTimeManagerComponent, ServerRaceStartTime) == 216, "Offset mismatch for UDelMarTimeManagerComponent::ServerRaceStartTime");
static_assert(offsetof(UDelMarTimeManagerComponent, ServerRaceFinishTime) == 224, "Offset mismatch for UDelMarTimeManagerComponent::ServerRaceFinishTime");
static_assert(offsetof(UDelMarTimeManagerComponent, ServerCountdownIntervalTime) == 232, "Offset mismatch for UDelMarTimeManagerComponent::ServerCountdownIntervalTime");
static_assert(offsetof(UDelMarTimeManagerComponent, RaceConfig) == 240, "Offset mismatch for UDelMarTimeManagerComponent::RaceConfig");
static_assert(offsetof(UDelMarTimeManagerComponent, RaceLevelConfig) == 248, "Offset mismatch for UDelMarTimeManagerComponent::RaceLevelConfig");
static_assert(offsetof(UDelMarTimeManagerComponent, CachedRaceManager) == 256, "Offset mismatch for UDelMarTimeManagerComponent::CachedRaceManager");
static_assert(offsetof(UDelMarTimeManagerComponent, ActiveCountdownRunStartTimeMap) == 264, "Offset mismatch for UDelMarTimeManagerComponent::ActiveCountdownRunStartTimeMap");

// /Script/DelMarCore.DelMarTutorialConfigComponent
// Kind: Class; super: ActorComponent
class UDelMarTutorialConfigComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> Sections; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTutorialConfigComponent, Sections) == 192, "Offset mismatch for UDelMarTutorialConfigComponent::Sections");

// /Script/DelMarCore.DelMarTutorialInteractableSpline
// Kind: Class; super: Actor
class UDelMarTutorialInteractableSpline
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bMustTriggerInOrder; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0271
    std::uint8_t ChildActorScaleMultiplier[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t SplineGenerationMode; // 0x0290 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0291
    std::int32_t ChildActorCount; // 0x0294 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseSplineRotationForActors; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugNumbers; // 0x0299 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x029A
    float DebugTextZOffset; // 0x029C (Size: 0x4, Type: FloatProperty)
    float DebugTextSize; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x02A4
    void* DebugTextMaterial; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* SplineComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* ChildActorClass; // 0x02B8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ChildActorComponents; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTutorialInteractableSpline, bMustTriggerInOrder) == 624, "Offset mismatch for UDelMarTutorialInteractableSpline::bMustTriggerInOrder");
static_assert(offsetof(UDelMarTutorialInteractableSpline, ChildActorScaleMultiplier) == 632, "Offset mismatch for UDelMarTutorialInteractableSpline::ChildActorScaleMultiplier");
static_assert(offsetof(UDelMarTutorialInteractableSpline, SplineGenerationMode) == 656, "Offset mismatch for UDelMarTutorialInteractableSpline::SplineGenerationMode");
static_assert(offsetof(UDelMarTutorialInteractableSpline, ChildActorCount) == 660, "Offset mismatch for UDelMarTutorialInteractableSpline::ChildActorCount");
static_assert(offsetof(UDelMarTutorialInteractableSpline, bUseSplineRotationForActors) == 664, "Offset mismatch for UDelMarTutorialInteractableSpline::bUseSplineRotationForActors");
static_assert(offsetof(UDelMarTutorialInteractableSpline, bShowDebugNumbers) == 665, "Offset mismatch for UDelMarTutorialInteractableSpline::bShowDebugNumbers");
static_assert(offsetof(UDelMarTutorialInteractableSpline, DebugTextZOffset) == 668, "Offset mismatch for UDelMarTutorialInteractableSpline::DebugTextZOffset");
static_assert(offsetof(UDelMarTutorialInteractableSpline, DebugTextSize) == 672, "Offset mismatch for UDelMarTutorialInteractableSpline::DebugTextSize");
static_assert(offsetof(UDelMarTutorialInteractableSpline, DebugTextMaterial) == 680, "Offset mismatch for UDelMarTutorialInteractableSpline::DebugTextMaterial");
static_assert(offsetof(UDelMarTutorialInteractableSpline, SplineComponent) == 688, "Offset mismatch for UDelMarTutorialInteractableSpline::SplineComponent");
static_assert(offsetof(UDelMarTutorialInteractableSpline, ChildActorClass) == 696, "Offset mismatch for UDelMarTutorialInteractableSpline::ChildActorClass");
static_assert(offsetof(UDelMarTutorialInteractableSpline, ChildActorComponents) == 704, "Offset mismatch for UDelMarTutorialInteractableSpline::ChildActorComponents");

// /Script/DelMarCore.DelMarTutorialRaceManager
// Kind: Class; super: DelMarRaceManager
class UDelMarTutorialRaceManager
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    std::uint8_t InitialVehicleAbilityConfig[0x1]; // 0x0428 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarTutorialRaceManager, InitialVehicleAbilityConfig) == 1064, "Offset mismatch for UDelMarTutorialRaceManager::InitialVehicleAbilityConfig");

// /Script/DelMarCore.DelMarTutorialRequestComponent
// Kind: Class; super: DelMarPlayerStateComponent
class UDelMarTutorialRequestComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> PlayerState; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TutorialRaceManager; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarTutorialRequestComponent, PlayerState) == 192, "Offset mismatch for UDelMarTutorialRequestComponent::PlayerState");
static_assert(offsetof(UDelMarTutorialRequestComponent, TutorialRaceManager) == 200, "Offset mismatch for UDelMarTutorialRequestComponent::TutorialRaceManager");

// /Script/DelMarCore.DelMarTutorialTriggerActor
// Kind: Class; super: Actor
class UDelMarTutorialTriggerActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* BoxCollider; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTutorialTriggerActor, BoxCollider) == 632, "Offset mismatch for UDelMarTutorialTriggerActor::BoxCollider");

// /Script/DelMarCore.DelMarUIInputControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarUIInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* HudWidgetExpandAction; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* ToggleQuestListAction; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* InputManagerClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x0140 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0148 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0150 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerPreferences; // 0x0158 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarUIInputControllerComponent, HudWidgetExpandAction) == 296, "Offset mismatch for UDelMarUIInputControllerComponent::HudWidgetExpandAction");
static_assert(offsetof(UDelMarUIInputControllerComponent, ToggleQuestListAction) == 304, "Offset mismatch for UDelMarUIInputControllerComponent::ToggleQuestListAction");
static_assert(offsetof(UDelMarUIInputControllerComponent, InputManagerClass) == 312, "Offset mismatch for UDelMarUIInputControllerComponent::InputManagerClass");
static_assert(offsetof(UDelMarUIInputControllerComponent, InputComponent) == 320, "Offset mismatch for UDelMarUIInputControllerComponent::InputComponent");
static_assert(offsetof(UDelMarUIInputControllerComponent, PlayerState) == 328, "Offset mismatch for UDelMarUIInputControllerComponent::PlayerState");
static_assert(offsetof(UDelMarUIInputControllerComponent, PlayerController) == 336, "Offset mismatch for UDelMarUIInputControllerComponent::PlayerController");
static_assert(offsetof(UDelMarUIInputControllerComponent, PlayerPreferences) == 344, "Offset mismatch for UDelMarUIInputControllerComponent::PlayerPreferences");

// /Script/DelMarCore.DelMarVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UDelMarVehicle
{
public:
    std::uint8_t Pad_0000[0x2070]; // 0x0000
    void* DefaultCameraMode; // 0x2070 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SeatIndexCameraModes; // 0x2078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLocalDriverHasReplicatedVehicle; // 0x2088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x17]; // 0x2089
    std::uint8_t PendingDriverInputState[0x40]; // 0x20A0 (Size: 0x40, Type: StructProperty)
    std::uint8_t CurrentInputType; // 0x20E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x20E1
    float DistanceToPack; // 0x2100 (Size: 0x4, Type: FloatProperty)
    float DistanceFromTrackFinish; // 0x2104 (Size: 0x4, Type: FloatProperty)
    float RaceStatusSpeedModifier; // 0x2108 (Size: 0x4, Type: FloatProperty)
    float TurboBoostChanceCache; // 0x210C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ATTR_bVehicleThrottleDisabled; // 0x2110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2111
    std::uint8_t ThrottleAction[0x10]; // 0x2118 (Size: 0x10, Type: StructProperty)
    std::uint8_t BrakeAction[0x10]; // 0x2128 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerAction[0x10]; // 0x2138 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerLeftAction[0x10]; // 0x2148 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerRightAction[0x10]; // 0x2158 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchAction[0x10]; // 0x2168 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchUpAction[0x10]; // 0x2178 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchDownAction[0x10]; // 0x2188 (Size: 0x10, Type: StructProperty)
    std::uint8_t RollAction[0x10]; // 0x2198 (Size: 0x10, Type: StructProperty)
    std::uint8_t YawAction[0x10]; // 0x21A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DriftAction[0x10]; // 0x21B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t JumpAction[0x10]; // 0x21C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t KickFlipAction[0x10]; // 0x21D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnderthrustAction[0x10]; // 0x21E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TurboAction[0x10]; // 0x21F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DelMarExitAction[0x10]; // 0x2208 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResetRunAction[0x10]; // 0x2218 (Size: 0x10, Type: StructProperty)
    std::uint8_t AirFreestyleAction[0x10]; // 0x2228 (Size: 0x10, Type: StructProperty)
    std::uint8_t StrafeAction[0x10]; // 0x2238 (Size: 0x10, Type: StructProperty)
    std::uint8_t AerialPitchAction[0x10]; // 0x2248 (Size: 0x10, Type: StructProperty)
    std::uint8_t DemolishAction[0x10]; // 0x2258 (Size: 0x10, Type: StructProperty)
    void* InputManagerClass; // 0x2268 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0004[0x18]; // 0x2270
    float IdleVelocityLengthThreshold; // 0x2288 (Size: 0x4, Type: FloatProperty)
    float IdleInputSecondsThreshold; // 0x228C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleFromNoInput; // 0x2290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4F]; // 0x2291
    TWeakObjectPtr<void> RaceManager; // 0x22E0 (Size: 0x8, Type: WeakObjectProperty)
    void* NetworkPhysicsComponent; // 0x22E8 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticComponent; // 0x22F0 (Size: 0x8, Type: ObjectProperty)
    void* DelMarVehicleMovementSet; // 0x22F8 (Size: 0x8, Type: ObjectProperty)
    void* FortSettings; // 0x2300 (Size: 0x8, Type: ObjectProperty)
    void* TrackPositionComponentClass; // 0x2308 (Size: 0x8, Type: ClassProperty)
    void* TrackPositionComponent; // 0x2310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x2318
    TArray<void*> WheelSkeletalMeshComps; // 0x2320 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerInVehicleEvents; // 0x2330 (Size: 0x10, Type: MapProperty)
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x2340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x2344
    TArray<void*> CachedContacts; // 0x2348 (Size: 0x10, Type: ArrayProperty)
    float NearbyTrackDistanceThreshold; // 0x2358 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x14]; // 0x235C
    float MaxStableSpeedToUpdateWheels; // 0x2370 (Size: 0x4, Type: FloatProperty)
    float SecondsUntilVehicleHitVelocityClears; // 0x2374 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideDamageFromInstigator; // 0x2378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x5F]; // 0x2379
    std::uint8_t ConfigOverrides[0xC68]; // 0x23D8 (Size: 0xC68, Type: StructProperty)
    float VisualSteerAngleInterpRate; // 0x3040 (Size: 0x4, Type: FloatProperty)
    float DriftVisualSteerAngleInterpRate; // 0x3044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideVisualSteeringAngle; // 0x3048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x3049
    float DrivingVisualSteeringDegrees; // 0x304C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftSteeringDegreesCurve[0x50]; // 0x3050 (Size: 0x50, Type: StructProperty)
    std::uint8_t bShowVisualSteerAngleInAir; // 0x30A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x30A1
    void* BodySetup; // 0x30A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x18]; // 0x30B0
    TWeakObjectPtr<void> ActiveRaceConfig; // 0x30C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RaceTimeManager; // 0x30D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> GlobalInputDisabler; // 0x30D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000D[0x10]; // 0x30E0
    FMulticastInlineDelegate OnVehicleWheelsLeftGround; // 0x30F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpeedometerSpeedChanged; // 0x3100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float MinNoThrottleSpeed; // 0x3110 (Size: 0x4, Type: FloatProperty)
    float SpeedSlowdownSpeedometerSeconds; // 0x3114 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SpeedSlowdownTags; // 0x3118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InvertSteerMethod; // 0x3128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPitchInverted; // 0x3129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVerticalKickflipInverted; // 0x312A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAerialPitchActivationEnabled; // 0x312B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x34]; // 0x312C
    FMulticastInlineDelegate OnBonusSpeedActivated; // 0x3160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBonusSpeedDeactivated; // 0x3170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBonusSpeedChanged; // 0x3180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnyWheelsOnGroundChanged; // 0x3190 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWheelsOnGroundChanged; // 0x31A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x31B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000F[0xD8]; // 0x31C0
    FMulticastInlineDelegate OnDelMarVehicleHitWall; // 0x3298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDelMarVehicleHitVehicle; // 0x32A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDelMarVehicleHitByVehicle; // 0x32B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleLanded; // 0x32C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0010[0x40]; // 0x32D8
    FMulticastInlineDelegate OnWorldBonusSpeedStackGained; // 0x3318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorldBonusSpeedStackLost; // 0x3328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0011[0x30]; // 0x3338
    FMulticastInlineDelegate OnVehicleStartedSkydiving; // 0x3368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleStoppedSkydiving; // 0x3378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0012[0x10]; // 0x3388
    FMulticastInlineDelegate OnDriftActivated; // 0x3398 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftDeactivated; // 0x33A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftSlipAngleRatioChanged; // 0x33B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftKickActivated; // 0x33C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftKickDeactivated; // 0x33D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftControlChanged; // 0x33E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftDurationChanged; // 0x33F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0013[0x50]; // 0x3408
    FMulticastInlineDelegate OnEnteredDriftBoostRange; // 0x3458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExitedDriftBoostRange; // 0x3468 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedLosingAppliedDriftBoost; // 0x3478 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftBoostActivated; // 0x3488 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftBoostDeactivated; // 0x3498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMaxPotentialReached; // 0x34A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMaxPotentialLost; // 0x34B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllPotentialLost; // 0x34C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEarnedDriftBoost; // 0x34D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPotentialDriftBoostChanged; // 0x34E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0014[0x38]; // 0x34F8
    FMulticastInlineDelegate OnDraftActivated; // 0x3530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDraftDeactivated; // 0x3540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDraftStateChanged; // 0x3550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReachedMaxBonusSpeed; // 0x3560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0015[0x34]; // 0x3570
    std::uint8_t RubberbandingConfig[0x5C]; // 0x35A4 (Size: 0x5C, Type: StructProperty)
    FMulticastInlineDelegate OnStartlineBoostActivated; // 0x3600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartlineBoostDeactivated; // 0x3610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartlineBoostFailed; // 0x3620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartlineBoostData[0x30]; // 0x3630 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnStrafeActivated; // 0x3660 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeDeactivated; // 0x3670 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeCooldownChanged; // 0x3680 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeUsabilityChanged; // 0x3690 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeDisabledChanged; // 0x36A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0016[0x20]; // 0x36B0
    FMulticastInlineDelegate OnTurboActivated; // 0x36D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboDeactivated; // 0x36E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboChargesUpdated; // 0x36F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboBonusZoneStateChanged; // 0x3700 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboChargeUsed; // 0x3710 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float TurboCharges; // 0x3720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0017[0x44]; // 0x3724
    FMulticastInlineDelegate OnKickflipActivated; // 0x3768 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDeactivated; // 0x3778 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipSuctionActivated; // 0x3788 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipSuctionDeactivated; // 0x3798 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDistanceToSuctionSurfaceChanged; // 0x37A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDurationChanged; // 0x37B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipActivationChargesChanged; // 0x37C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0018[0x88]; // 0x37D8
    FMulticastInlineDelegate OnReattachmentActivated; // 0x3860 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReattachmentDeactivated; // 0x3870 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ForcedReattachmentDirection[0x40]; // 0x3880 (Size: 0x40, Type: StructProperty)
    FMulticastInlineDelegate OnUnderthrustActivated; // 0x38C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustDeactivated; // 0x38D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustPercentChanged; // 0x38E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustExhausted; // 0x38F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0019[0x18]; // 0x3900
    FMulticastInlineDelegate OnJumpActivated; // 0x3918 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJumpDeactivated; // 0x3928 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001A[0x8]; // 0x3938
    float DemolitionRespawnSeconds; // 0x3940 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001B[0x4]; // 0x3944
    FMulticastInlineDelegate OnVehicleDemolished; // 0x3948 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDemolishPressDurationUpdated; // 0x3958 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float HealthOverride; // 0x3968 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001C[0x1C]; // 0x396C
    FMulticastInlineDelegate OnHazardHit; // 0x3988 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInvulnerabilityActivated; // 0x3998 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInvulnerabilityDeactivated; // 0x39A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001D[0x4]; // 0x39B8
    float MaxSpawnBroadcastSeconds; // 0x39BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnInfo[0x10]; // 0x39C0 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnDelMarVehicleSpawned; // 0x39D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllowExitingVehicle; // 0x39E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001E[0x7]; // 0x39E1
    FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x39E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleTeleportExit; // 0x39F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x3A08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAppliedTeleportLocation; // 0x3A18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x3A28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x3A38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAirFreestyleActivated; // 0x3A48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAirFreestyleDeactivated; // 0x3A58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001F[0x8]; // 0x3A68
    void* CachedVehicleAudioController; // 0x3A70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bVehicleCollisionsEnabled; // 0x3A78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnCollisionsEnabled; // 0x3A79 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0020[0xE]; // 0x3A7A
    std::uint8_t bUsePredictiveInterpolation; // 0x3A88 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0021[0x7]; // 0x3A89
    void* PostProcessComp; // 0x3A90 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0022[0x8]; // 0x3A98
    FMulticastInlineDelegate OnVehicleCustomizationCompletedDelegate; // 0x3AA0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehiclePartParamsUpdatedDelegate; // 0x3AB0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicle, DefaultCameraMode) == 8304, "Offset mismatch for UDelMarVehicle::DefaultCameraMode");
static_assert(offsetof(UDelMarVehicle, SeatIndexCameraModes) == 8312, "Offset mismatch for UDelMarVehicle::SeatIndexCameraModes");
static_assert(offsetof(UDelMarVehicle, bLocalDriverHasReplicatedVehicle) == 8328, "Offset mismatch for UDelMarVehicle::bLocalDriverHasReplicatedVehicle");
static_assert(offsetof(UDelMarVehicle, PendingDriverInputState) == 8352, "Offset mismatch for UDelMarVehicle::PendingDriverInputState");
static_assert(offsetof(UDelMarVehicle, CurrentInputType) == 8416, "Offset mismatch for UDelMarVehicle::CurrentInputType");
static_assert(offsetof(UDelMarVehicle, DistanceToPack) == 8448, "Offset mismatch for UDelMarVehicle::DistanceToPack");
static_assert(offsetof(UDelMarVehicle, DistanceFromTrackFinish) == 8452, "Offset mismatch for UDelMarVehicle::DistanceFromTrackFinish");
static_assert(offsetof(UDelMarVehicle, RaceStatusSpeedModifier) == 8456, "Offset mismatch for UDelMarVehicle::RaceStatusSpeedModifier");
static_assert(offsetof(UDelMarVehicle, TurboBoostChanceCache) == 8460, "Offset mismatch for UDelMarVehicle::TurboBoostChanceCache");
static_assert(offsetof(UDelMarVehicle, ATTR_bVehicleThrottleDisabled) == 8464, "Offset mismatch for UDelMarVehicle::ATTR_bVehicleThrottleDisabled");
static_assert(offsetof(UDelMarVehicle, ThrottleAction) == 8472, "Offset mismatch for UDelMarVehicle::ThrottleAction");
static_assert(offsetof(UDelMarVehicle, BrakeAction) == 8488, "Offset mismatch for UDelMarVehicle::BrakeAction");
static_assert(offsetof(UDelMarVehicle, SteerAction) == 8504, "Offset mismatch for UDelMarVehicle::SteerAction");
static_assert(offsetof(UDelMarVehicle, SteerLeftAction) == 8520, "Offset mismatch for UDelMarVehicle::SteerLeftAction");
static_assert(offsetof(UDelMarVehicle, SteerRightAction) == 8536, "Offset mismatch for UDelMarVehicle::SteerRightAction");
static_assert(offsetof(UDelMarVehicle, PitchAction) == 8552, "Offset mismatch for UDelMarVehicle::PitchAction");
static_assert(offsetof(UDelMarVehicle, PitchUpAction) == 8568, "Offset mismatch for UDelMarVehicle::PitchUpAction");
static_assert(offsetof(UDelMarVehicle, PitchDownAction) == 8584, "Offset mismatch for UDelMarVehicle::PitchDownAction");
static_assert(offsetof(UDelMarVehicle, RollAction) == 8600, "Offset mismatch for UDelMarVehicle::RollAction");
static_assert(offsetof(UDelMarVehicle, YawAction) == 8616, "Offset mismatch for UDelMarVehicle::YawAction");
static_assert(offsetof(UDelMarVehicle, DriftAction) == 8632, "Offset mismatch for UDelMarVehicle::DriftAction");
static_assert(offsetof(UDelMarVehicle, JumpAction) == 8648, "Offset mismatch for UDelMarVehicle::JumpAction");
static_assert(offsetof(UDelMarVehicle, KickFlipAction) == 8664, "Offset mismatch for UDelMarVehicle::KickFlipAction");
static_assert(offsetof(UDelMarVehicle, UnderthrustAction) == 8680, "Offset mismatch for UDelMarVehicle::UnderthrustAction");
static_assert(offsetof(UDelMarVehicle, TurboAction) == 8696, "Offset mismatch for UDelMarVehicle::TurboAction");
static_assert(offsetof(UDelMarVehicle, DelMarExitAction) == 8712, "Offset mismatch for UDelMarVehicle::DelMarExitAction");
static_assert(offsetof(UDelMarVehicle, ResetRunAction) == 8728, "Offset mismatch for UDelMarVehicle::ResetRunAction");
static_assert(offsetof(UDelMarVehicle, AirFreestyleAction) == 8744, "Offset mismatch for UDelMarVehicle::AirFreestyleAction");
static_assert(offsetof(UDelMarVehicle, StrafeAction) == 8760, "Offset mismatch for UDelMarVehicle::StrafeAction");
static_assert(offsetof(UDelMarVehicle, AerialPitchAction) == 8776, "Offset mismatch for UDelMarVehicle::AerialPitchAction");
static_assert(offsetof(UDelMarVehicle, DemolishAction) == 8792, "Offset mismatch for UDelMarVehicle::DemolishAction");
static_assert(offsetof(UDelMarVehicle, InputManagerClass) == 8808, "Offset mismatch for UDelMarVehicle::InputManagerClass");
static_assert(offsetof(UDelMarVehicle, IdleVelocityLengthThreshold) == 8840, "Offset mismatch for UDelMarVehicle::IdleVelocityLengthThreshold");
static_assert(offsetof(UDelMarVehicle, IdleInputSecondsThreshold) == 8844, "Offset mismatch for UDelMarVehicle::IdleInputSecondsThreshold");
static_assert(offsetof(UDelMarVehicle, bIdleFromNoInput) == 8848, "Offset mismatch for UDelMarVehicle::bIdleFromNoInput");
static_assert(offsetof(UDelMarVehicle, RaceManager) == 8928, "Offset mismatch for UDelMarVehicle::RaceManager");
static_assert(offsetof(UDelMarVehicle, NetworkPhysicsComponent) == 8936, "Offset mismatch for UDelMarVehicle::NetworkPhysicsComponent");
static_assert(offsetof(UDelMarVehicle, CosmeticComponent) == 8944, "Offset mismatch for UDelMarVehicle::CosmeticComponent");
static_assert(offsetof(UDelMarVehicle, DelMarVehicleMovementSet) == 8952, "Offset mismatch for UDelMarVehicle::DelMarVehicleMovementSet");
static_assert(offsetof(UDelMarVehicle, FortSettings) == 8960, "Offset mismatch for UDelMarVehicle::FortSettings");
static_assert(offsetof(UDelMarVehicle, TrackPositionComponentClass) == 8968, "Offset mismatch for UDelMarVehicle::TrackPositionComponentClass");
static_assert(offsetof(UDelMarVehicle, TrackPositionComponent) == 8976, "Offset mismatch for UDelMarVehicle::TrackPositionComponent");
static_assert(offsetof(UDelMarVehicle, WheelSkeletalMeshComps) == 8992, "Offset mismatch for UDelMarVehicle::WheelSkeletalMeshComps");
static_assert(offsetof(UDelMarVehicle, PlayerInVehicleEvents) == 9008, "Offset mismatch for UDelMarVehicle::PlayerInVehicleEvents");
static_assert(offsetof(UDelMarVehicle, NumAllowedVehicleCosmeticChanges) == 9024, "Offset mismatch for UDelMarVehicle::NumAllowedVehicleCosmeticChanges");
static_assert(offsetof(UDelMarVehicle, CachedContacts) == 9032, "Offset mismatch for UDelMarVehicle::CachedContacts");
static_assert(offsetof(UDelMarVehicle, NearbyTrackDistanceThreshold) == 9048, "Offset mismatch for UDelMarVehicle::NearbyTrackDistanceThreshold");
static_assert(offsetof(UDelMarVehicle, MaxStableSpeedToUpdateWheels) == 9072, "Offset mismatch for UDelMarVehicle::MaxStableSpeedToUpdateWheels");
static_assert(offsetof(UDelMarVehicle, SecondsUntilVehicleHitVelocityClears) == 9076, "Offset mismatch for UDelMarVehicle::SecondsUntilVehicleHitVelocityClears");
static_assert(offsetof(UDelMarVehicle, bOverrideDamageFromInstigator) == 9080, "Offset mismatch for UDelMarVehicle::bOverrideDamageFromInstigator");
static_assert(offsetof(UDelMarVehicle, ConfigOverrides) == 9176, "Offset mismatch for UDelMarVehicle::ConfigOverrides");
static_assert(offsetof(UDelMarVehicle, VisualSteerAngleInterpRate) == 12352, "Offset mismatch for UDelMarVehicle::VisualSteerAngleInterpRate");
static_assert(offsetof(UDelMarVehicle, DriftVisualSteerAngleInterpRate) == 12356, "Offset mismatch for UDelMarVehicle::DriftVisualSteerAngleInterpRate");
static_assert(offsetof(UDelMarVehicle, bOverrideVisualSteeringAngle) == 12360, "Offset mismatch for UDelMarVehicle::bOverrideVisualSteeringAngle");
static_assert(offsetof(UDelMarVehicle, DrivingVisualSteeringDegrees) == 12364, "Offset mismatch for UDelMarVehicle::DrivingVisualSteeringDegrees");
static_assert(offsetof(UDelMarVehicle, DriftSteeringDegreesCurve) == 12368, "Offset mismatch for UDelMarVehicle::DriftSteeringDegreesCurve");
static_assert(offsetof(UDelMarVehicle, bShowVisualSteerAngleInAir) == 12448, "Offset mismatch for UDelMarVehicle::bShowVisualSteerAngleInAir");
static_assert(offsetof(UDelMarVehicle, BodySetup) == 12456, "Offset mismatch for UDelMarVehicle::BodySetup");
static_assert(offsetof(UDelMarVehicle, ActiveRaceConfig) == 12488, "Offset mismatch for UDelMarVehicle::ActiveRaceConfig");
static_assert(offsetof(UDelMarVehicle, RaceTimeManager) == 12496, "Offset mismatch for UDelMarVehicle::RaceTimeManager");
static_assert(offsetof(UDelMarVehicle, GlobalInputDisabler) == 12504, "Offset mismatch for UDelMarVehicle::GlobalInputDisabler");
static_assert(offsetof(UDelMarVehicle, OnVehicleWheelsLeftGround) == 12528, "Offset mismatch for UDelMarVehicle::OnVehicleWheelsLeftGround");
static_assert(offsetof(UDelMarVehicle, OnSpeedometerSpeedChanged) == 12544, "Offset mismatch for UDelMarVehicle::OnSpeedometerSpeedChanged");
static_assert(offsetof(UDelMarVehicle, MinNoThrottleSpeed) == 12560, "Offset mismatch for UDelMarVehicle::MinNoThrottleSpeed");
static_assert(offsetof(UDelMarVehicle, SpeedSlowdownSpeedometerSeconds) == 12564, "Offset mismatch for UDelMarVehicle::SpeedSlowdownSpeedometerSeconds");
static_assert(offsetof(UDelMarVehicle, SpeedSlowdownTags) == 12568, "Offset mismatch for UDelMarVehicle::SpeedSlowdownTags");
static_assert(offsetof(UDelMarVehicle, InvertSteerMethod) == 12584, "Offset mismatch for UDelMarVehicle::InvertSteerMethod");
static_assert(offsetof(UDelMarVehicle, bPitchInverted) == 12585, "Offset mismatch for UDelMarVehicle::bPitchInverted");
static_assert(offsetof(UDelMarVehicle, bVerticalKickflipInverted) == 12586, "Offset mismatch for UDelMarVehicle::bVerticalKickflipInverted");
static_assert(offsetof(UDelMarVehicle, bAerialPitchActivationEnabled) == 12587, "Offset mismatch for UDelMarVehicle::bAerialPitchActivationEnabled");
static_assert(offsetof(UDelMarVehicle, OnBonusSpeedActivated) == 12640, "Offset mismatch for UDelMarVehicle::OnBonusSpeedActivated");
static_assert(offsetof(UDelMarVehicle, OnBonusSpeedDeactivated) == 12656, "Offset mismatch for UDelMarVehicle::OnBonusSpeedDeactivated");
static_assert(offsetof(UDelMarVehicle, OnBonusSpeedChanged) == 12672, "Offset mismatch for UDelMarVehicle::OnBonusSpeedChanged");
static_assert(offsetof(UDelMarVehicle, OnAnyWheelsOnGroundChanged) == 12688, "Offset mismatch for UDelMarVehicle::OnAnyWheelsOnGroundChanged");
static_assert(offsetof(UDelMarVehicle, OnWheelsOnGroundChanged) == 12704, "Offset mismatch for UDelMarVehicle::OnWheelsOnGroundChanged");
static_assert(offsetof(UDelMarVehicle, OnVehicleForwardStateChanged) == 12720, "Offset mismatch for UDelMarVehicle::OnVehicleForwardStateChanged");
static_assert(offsetof(UDelMarVehicle, OnDelMarVehicleHitWall) == 12952, "Offset mismatch for UDelMarVehicle::OnDelMarVehicleHitWall");
static_assert(offsetof(UDelMarVehicle, OnDelMarVehicleHitVehicle) == 12968, "Offset mismatch for UDelMarVehicle::OnDelMarVehicleHitVehicle");
static_assert(offsetof(UDelMarVehicle, OnDelMarVehicleHitByVehicle) == 12984, "Offset mismatch for UDelMarVehicle::OnDelMarVehicleHitByVehicle");
static_assert(offsetof(UDelMarVehicle, OnVehicleLanded) == 13000, "Offset mismatch for UDelMarVehicle::OnVehicleLanded");
static_assert(offsetof(UDelMarVehicle, OnWorldBonusSpeedStackGained) == 13080, "Offset mismatch for UDelMarVehicle::OnWorldBonusSpeedStackGained");
static_assert(offsetof(UDelMarVehicle, OnWorldBonusSpeedStackLost) == 13096, "Offset mismatch for UDelMarVehicle::OnWorldBonusSpeedStackLost");
static_assert(offsetof(UDelMarVehicle, OnVehicleStartedSkydiving) == 13160, "Offset mismatch for UDelMarVehicle::OnVehicleStartedSkydiving");
static_assert(offsetof(UDelMarVehicle, OnVehicleStoppedSkydiving) == 13176, "Offset mismatch for UDelMarVehicle::OnVehicleStoppedSkydiving");
static_assert(offsetof(UDelMarVehicle, OnDriftActivated) == 13208, "Offset mismatch for UDelMarVehicle::OnDriftActivated");
static_assert(offsetof(UDelMarVehicle, OnDriftDeactivated) == 13224, "Offset mismatch for UDelMarVehicle::OnDriftDeactivated");
static_assert(offsetof(UDelMarVehicle, OnDriftSlipAngleRatioChanged) == 13240, "Offset mismatch for UDelMarVehicle::OnDriftSlipAngleRatioChanged");
static_assert(offsetof(UDelMarVehicle, OnDriftKickActivated) == 13256, "Offset mismatch for UDelMarVehicle::OnDriftKickActivated");
static_assert(offsetof(UDelMarVehicle, OnDriftKickDeactivated) == 13272, "Offset mismatch for UDelMarVehicle::OnDriftKickDeactivated");
static_assert(offsetof(UDelMarVehicle, OnDriftControlChanged) == 13288, "Offset mismatch for UDelMarVehicle::OnDriftControlChanged");
static_assert(offsetof(UDelMarVehicle, OnDriftDurationChanged) == 13304, "Offset mismatch for UDelMarVehicle::OnDriftDurationChanged");
static_assert(offsetof(UDelMarVehicle, OnEnteredDriftBoostRange) == 13400, "Offset mismatch for UDelMarVehicle::OnEnteredDriftBoostRange");
static_assert(offsetof(UDelMarVehicle, OnExitedDriftBoostRange) == 13416, "Offset mismatch for UDelMarVehicle::OnExitedDriftBoostRange");
static_assert(offsetof(UDelMarVehicle, OnStartedLosingAppliedDriftBoost) == 13432, "Offset mismatch for UDelMarVehicle::OnStartedLosingAppliedDriftBoost");
static_assert(offsetof(UDelMarVehicle, OnDriftBoostActivated) == 13448, "Offset mismatch for UDelMarVehicle::OnDriftBoostActivated");
static_assert(offsetof(UDelMarVehicle, OnDriftBoostDeactivated) == 13464, "Offset mismatch for UDelMarVehicle::OnDriftBoostDeactivated");
static_assert(offsetof(UDelMarVehicle, OnMaxPotentialReached) == 13480, "Offset mismatch for UDelMarVehicle::OnMaxPotentialReached");
static_assert(offsetof(UDelMarVehicle, OnMaxPotentialLost) == 13496, "Offset mismatch for UDelMarVehicle::OnMaxPotentialLost");
static_assert(offsetof(UDelMarVehicle, OnAllPotentialLost) == 13512, "Offset mismatch for UDelMarVehicle::OnAllPotentialLost");
static_assert(offsetof(UDelMarVehicle, OnEarnedDriftBoost) == 13528, "Offset mismatch for UDelMarVehicle::OnEarnedDriftBoost");
static_assert(offsetof(UDelMarVehicle, OnPotentialDriftBoostChanged) == 13544, "Offset mismatch for UDelMarVehicle::OnPotentialDriftBoostChanged");
static_assert(offsetof(UDelMarVehicle, OnDraftActivated) == 13616, "Offset mismatch for UDelMarVehicle::OnDraftActivated");
static_assert(offsetof(UDelMarVehicle, OnDraftDeactivated) == 13632, "Offset mismatch for UDelMarVehicle::OnDraftDeactivated");
static_assert(offsetof(UDelMarVehicle, OnDraftStateChanged) == 13648, "Offset mismatch for UDelMarVehicle::OnDraftStateChanged");
static_assert(offsetof(UDelMarVehicle, OnReachedMaxBonusSpeed) == 13664, "Offset mismatch for UDelMarVehicle::OnReachedMaxBonusSpeed");
static_assert(offsetof(UDelMarVehicle, RubberbandingConfig) == 13732, "Offset mismatch for UDelMarVehicle::RubberbandingConfig");
static_assert(offsetof(UDelMarVehicle, OnStartlineBoostActivated) == 13824, "Offset mismatch for UDelMarVehicle::OnStartlineBoostActivated");
static_assert(offsetof(UDelMarVehicle, OnStartlineBoostDeactivated) == 13840, "Offset mismatch for UDelMarVehicle::OnStartlineBoostDeactivated");
static_assert(offsetof(UDelMarVehicle, OnStartlineBoostFailed) == 13856, "Offset mismatch for UDelMarVehicle::OnStartlineBoostFailed");
static_assert(offsetof(UDelMarVehicle, StartlineBoostData) == 13872, "Offset mismatch for UDelMarVehicle::StartlineBoostData");
static_assert(offsetof(UDelMarVehicle, OnStrafeActivated) == 13920, "Offset mismatch for UDelMarVehicle::OnStrafeActivated");
static_assert(offsetof(UDelMarVehicle, OnStrafeDeactivated) == 13936, "Offset mismatch for UDelMarVehicle::OnStrafeDeactivated");
static_assert(offsetof(UDelMarVehicle, OnStrafeCooldownChanged) == 13952, "Offset mismatch for UDelMarVehicle::OnStrafeCooldownChanged");
static_assert(offsetof(UDelMarVehicle, OnStrafeUsabilityChanged) == 13968, "Offset mismatch for UDelMarVehicle::OnStrafeUsabilityChanged");
static_assert(offsetof(UDelMarVehicle, OnStrafeDisabledChanged) == 13984, "Offset mismatch for UDelMarVehicle::OnStrafeDisabledChanged");
static_assert(offsetof(UDelMarVehicle, OnTurboActivated) == 14032, "Offset mismatch for UDelMarVehicle::OnTurboActivated");
static_assert(offsetof(UDelMarVehicle, OnTurboDeactivated) == 14048, "Offset mismatch for UDelMarVehicle::OnTurboDeactivated");
static_assert(offsetof(UDelMarVehicle, OnTurboChargesUpdated) == 14064, "Offset mismatch for UDelMarVehicle::OnTurboChargesUpdated");
static_assert(offsetof(UDelMarVehicle, OnTurboBonusZoneStateChanged) == 14080, "Offset mismatch for UDelMarVehicle::OnTurboBonusZoneStateChanged");
static_assert(offsetof(UDelMarVehicle, OnTurboChargeUsed) == 14096, "Offset mismatch for UDelMarVehicle::OnTurboChargeUsed");
static_assert(offsetof(UDelMarVehicle, TurboCharges) == 14112, "Offset mismatch for UDelMarVehicle::TurboCharges");
static_assert(offsetof(UDelMarVehicle, OnKickflipActivated) == 14184, "Offset mismatch for UDelMarVehicle::OnKickflipActivated");
static_assert(offsetof(UDelMarVehicle, OnKickflipDeactivated) == 14200, "Offset mismatch for UDelMarVehicle::OnKickflipDeactivated");
static_assert(offsetof(UDelMarVehicle, OnKickflipSuctionActivated) == 14216, "Offset mismatch for UDelMarVehicle::OnKickflipSuctionActivated");
static_assert(offsetof(UDelMarVehicle, OnKickflipSuctionDeactivated) == 14232, "Offset mismatch for UDelMarVehicle::OnKickflipSuctionDeactivated");
static_assert(offsetof(UDelMarVehicle, OnKickflipDistanceToSuctionSurfaceChanged) == 14248, "Offset mismatch for UDelMarVehicle::OnKickflipDistanceToSuctionSurfaceChanged");
static_assert(offsetof(UDelMarVehicle, OnKickflipDurationChanged) == 14264, "Offset mismatch for UDelMarVehicle::OnKickflipDurationChanged");
static_assert(offsetof(UDelMarVehicle, OnKickflipActivationChargesChanged) == 14280, "Offset mismatch for UDelMarVehicle::OnKickflipActivationChargesChanged");
static_assert(offsetof(UDelMarVehicle, OnReattachmentActivated) == 14432, "Offset mismatch for UDelMarVehicle::OnReattachmentActivated");
static_assert(offsetof(UDelMarVehicle, OnReattachmentDeactivated) == 14448, "Offset mismatch for UDelMarVehicle::OnReattachmentDeactivated");
static_assert(offsetof(UDelMarVehicle, ForcedReattachmentDirection) == 14464, "Offset mismatch for UDelMarVehicle::ForcedReattachmentDirection");
static_assert(offsetof(UDelMarVehicle, OnUnderthrustActivated) == 14528, "Offset mismatch for UDelMarVehicle::OnUnderthrustActivated");
static_assert(offsetof(UDelMarVehicle, OnUnderthrustDeactivated) == 14544, "Offset mismatch for UDelMarVehicle::OnUnderthrustDeactivated");
static_assert(offsetof(UDelMarVehicle, OnUnderthrustPercentChanged) == 14560, "Offset mismatch for UDelMarVehicle::OnUnderthrustPercentChanged");
static_assert(offsetof(UDelMarVehicle, OnUnderthrustExhausted) == 14576, "Offset mismatch for UDelMarVehicle::OnUnderthrustExhausted");
static_assert(offsetof(UDelMarVehicle, OnJumpActivated) == 14616, "Offset mismatch for UDelMarVehicle::OnJumpActivated");
static_assert(offsetof(UDelMarVehicle, OnJumpDeactivated) == 14632, "Offset mismatch for UDelMarVehicle::OnJumpDeactivated");
static_assert(offsetof(UDelMarVehicle, DemolitionRespawnSeconds) == 14656, "Offset mismatch for UDelMarVehicle::DemolitionRespawnSeconds");
static_assert(offsetof(UDelMarVehicle, OnVehicleDemolished) == 14664, "Offset mismatch for UDelMarVehicle::OnVehicleDemolished");
static_assert(offsetof(UDelMarVehicle, OnDemolishPressDurationUpdated) == 14680, "Offset mismatch for UDelMarVehicle::OnDemolishPressDurationUpdated");
static_assert(offsetof(UDelMarVehicle, HealthOverride) == 14696, "Offset mismatch for UDelMarVehicle::HealthOverride");
static_assert(offsetof(UDelMarVehicle, OnHazardHit) == 14728, "Offset mismatch for UDelMarVehicle::OnHazardHit");
static_assert(offsetof(UDelMarVehicle, OnInvulnerabilityActivated) == 14744, "Offset mismatch for UDelMarVehicle::OnInvulnerabilityActivated");
static_assert(offsetof(UDelMarVehicle, OnInvulnerabilityDeactivated) == 14760, "Offset mismatch for UDelMarVehicle::OnInvulnerabilityDeactivated");
static_assert(offsetof(UDelMarVehicle, MaxSpawnBroadcastSeconds) == 14780, "Offset mismatch for UDelMarVehicle::MaxSpawnBroadcastSeconds");
static_assert(offsetof(UDelMarVehicle, SpawnInfo) == 14784, "Offset mismatch for UDelMarVehicle::SpawnInfo");
static_assert(offsetof(UDelMarVehicle, OnDelMarVehicleSpawned) == 14800, "Offset mismatch for UDelMarVehicle::OnDelMarVehicleSpawned");
static_assert(offsetof(UDelMarVehicle, bAllowExitingVehicle) == 14816, "Offset mismatch for UDelMarVehicle::bAllowExitingVehicle");
static_assert(offsetof(UDelMarVehicle, OnVehicleTeleportEntered) == 14824, "Offset mismatch for UDelMarVehicle::OnVehicleTeleportEntered");
static_assert(offsetof(UDelMarVehicle, OnVehicleTeleportExit) == 14840, "Offset mismatch for UDelMarVehicle::OnVehicleTeleportExit");
static_assert(offsetof(UDelMarVehicle, OnVehicleAppliedTeleportRotation) == 14856, "Offset mismatch for UDelMarVehicle::OnVehicleAppliedTeleportRotation");
static_assert(offsetof(UDelMarVehicle, OnVehicleAppliedTeleportLocation) == 14872, "Offset mismatch for UDelMarVehicle::OnVehicleAppliedTeleportLocation");
static_assert(offsetof(UDelMarVehicle, OnEnvironmentEffectCueActivated) == 14888, "Offset mismatch for UDelMarVehicle::OnEnvironmentEffectCueActivated");
static_assert(offsetof(UDelMarVehicle, OnEnvironmentEffectCueRemoved) == 14904, "Offset mismatch for UDelMarVehicle::OnEnvironmentEffectCueRemoved");
static_assert(offsetof(UDelMarVehicle, OnAirFreestyleActivated) == 14920, "Offset mismatch for UDelMarVehicle::OnAirFreestyleActivated");
static_assert(offsetof(UDelMarVehicle, OnAirFreestyleDeactivated) == 14936, "Offset mismatch for UDelMarVehicle::OnAirFreestyleDeactivated");
static_assert(offsetof(UDelMarVehicle, CachedVehicleAudioController) == 14960, "Offset mismatch for UDelMarVehicle::CachedVehicleAudioController");
static_assert(offsetof(UDelMarVehicle, bVehicleCollisionsEnabled) == 14968, "Offset mismatch for UDelMarVehicle::bVehicleCollisionsEnabled");
static_assert(offsetof(UDelMarVehicle, bPawnCollisionsEnabled) == 14969, "Offset mismatch for UDelMarVehicle::bPawnCollisionsEnabled");
static_assert(offsetof(UDelMarVehicle, bUsePredictiveInterpolation) == 14984, "Offset mismatch for UDelMarVehicle::bUsePredictiveInterpolation");
static_assert(offsetof(UDelMarVehicle, PostProcessComp) == 14992, "Offset mismatch for UDelMarVehicle::PostProcessComp");
static_assert(offsetof(UDelMarVehicle, OnVehicleCustomizationCompletedDelegate) == 15008, "Offset mismatch for UDelMarVehicle::OnVehicleCustomizationCompletedDelegate");
static_assert(offsetof(UDelMarVehicle, OnVehiclePartParamsUpdatedDelegate) == 15024, "Offset mismatch for UDelMarVehicle::OnVehiclePartParamsUpdatedDelegate");

// /Script/DelMarCore.DelMarVehicleAction
// Kind: Class; super: Object
class UDelMarVehicleAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_Drift
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_Drift
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_Drift, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_Drift::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_HazardHit
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_HazardHit
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_HazardHit, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_HazardHit::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_Jump
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_Jump
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_Jump, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_Jump::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_KickFlip
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_KickFlip
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_KickFlip, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_KickFlip::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_Turbo
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_Turbo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_Turbo, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_Turbo::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAction_Underthrust
// Kind: Class; super: DelMarVehicleAction
class UDelMarVehicleAction_Underthrust
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarVehicleAction_Underthrust, OnActionPerformed) == 40, "Offset mismatch for UDelMarVehicleAction_Underthrust::OnActionPerformed");

// /Script/DelMarCore.DelMarVehicleAutoInputComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleAutoInputComponent
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

static_assert(offsetof(UDelMarVehicleAutoInputComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarVehicleAutoInputComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, ComponentTags) == 104, "Offset mismatch for UDelMarVehicleAutoInputComponent::ComponentTags");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, AssetUserData) == 120, "Offset mismatch for UDelMarVehicleAutoInputComponent::AssetUserData");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarVehicleAutoInputComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarVehicleAutoInputComponent::bNetAddressable");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarVehicleAutoInputComponent::bAutoActivate");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarVehicleAutoInputComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, CreationMethod) == 185, "Offset mismatch for UDelMarVehicleAutoInputComponent::CreationMethod");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarVehicleAutoInputComponent::OnComponentActivated");
static_assert(offsetof(UDelMarVehicleAutoInputComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarVehicleAutoInputComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelMarVehicleBodyItemDefinition
// Kind: Class; super: DelMarCosmeticItemDefinition
class UDelMarVehicleBodyItemDefinition
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Slot[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    TArray<void*> CosmeticActorClasses; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarVehicleBodyItemDefinition, Slot) == 296, "Offset mismatch for UDelMarVehicleBodyItemDefinition::Slot");
static_assert(offsetof(UDelMarVehicleBodyItemDefinition, CosmeticActorClasses) == 304, "Offset mismatch for UDelMarVehicleBodyItemDefinition::CosmeticActorClasses");

// /Script/DelMarCore.DelMarVehicleBodySetup
// Kind: Class; super: DataAsset
class UDelMarVehicleBodySetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FrontAxle[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t BackAxle[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleBodySetup, FrontAxle) == 40, "Offset mismatch for UDelMarVehicleBodySetup::FrontAxle");
static_assert(offsetof(UDelMarVehicleBodySetup, BackAxle) == 80, "Offset mismatch for UDelMarVehicleBodySetup::BackAxle");

// /Script/DelMarCore.DelMarVehicleBodySetupMap
// Kind: Class; super: DataAsset
class UDelMarVehicleBodySetupMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BodySetupNameMap; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BodySetupArchetypeMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarVehicleBodySetupMap, BodySetupNameMap) == 40, "Offset mismatch for UDelMarVehicleBodySetupMap::BodySetupNameMap");
static_assert(offsetof(UDelMarVehicleBodySetupMap, BodySetupArchetypeMap) == 56, "Offset mismatch for UDelMarVehicleBodySetupMap::BodySetupArchetypeMap");

// /Script/DelMarCore.DelMarVehicleCameraMode
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UDelMarVehicleCameraMode
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    std::uint8_t CameraSettings[0x20]; // 0x20A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t VelocityViewDistance[0x48]; // 0x20C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityFOV[0x48]; // 0x2108 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialViewDistance[0x48]; // 0x2150 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialFocusOffset[0x48]; // 0x2198 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialPitch[0x48]; // 0x21E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t AccelViewDistance[0x48]; // 0x2228 (Size: 0x48, Type: StructProperty)
    std::uint8_t AccelPitch[0x48]; // 0x2270 (Size: 0x48, Type: StructProperty)
    std::uint8_t AirRotationInterpRate[0x48]; // 0x22B8 (Size: 0x48, Type: StructProperty)
    float DriftSwivelSpeed; // 0x2300 (Size: 0x4, Type: FloatProperty)
    float ViewDistanceInterpSpeed; // 0x2304 (Size: 0x4, Type: FloatProperty)
    float FOVInterpSpeed; // 0x2308 (Size: 0x4, Type: FloatProperty)
    float AccelerationViewDistanceDecayRate; // 0x230C (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedAccelViewDistance; // 0x2310 (Size: 0x4, Type: FloatProperty)
    float MinAccumulatedAccelViewDistance; // 0x2314 (Size: 0x4, Type: FloatProperty)
    float AerialOffsetInterpSpeed; // 0x2318 (Size: 0x4, Type: FloatProperty)
    float MaximumDownwardAerialPitch; // 0x231C (Size: 0x4, Type: FloatProperty)
    float MaximumUpwardAerialPitch; // 0x2320 (Size: 0x4, Type: FloatProperty)
    float AccelerationPitchDecayRate; // 0x2324 (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedAccelPitch; // 0x2328 (Size: 0x4, Type: FloatProperty)
    float MinAccumulatedAccelPitch; // 0x232C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventSpeedIncreaseInAir; // 0x2330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x2331
    float SpeedInputScalar; // 0x2334 (Size: 0x4, Type: FloatProperty)
    float SwivelPitchMax; // 0x2338 (Size: 0x4, Type: FloatProperty)
    float SwivelYawMax; // 0x233C (Size: 0x4, Type: FloatProperty)
    float GroundPitchInterpRate; // 0x2340 (Size: 0x4, Type: FloatProperty)
    float GroundMaxPitchForNormalBlend; // 0x2344 (Size: 0x4, Type: FloatProperty)
    float GroundNormalInterpRate; // 0x2348 (Size: 0x4, Type: FloatProperty)
    float GroundNormalAirInterpRate; // 0x234C (Size: 0x4, Type: FloatProperty)
    float GroundYawRateMin; // 0x2350 (Size: 0x4, Type: FloatProperty)
    float GroundYawRateMax; // 0x2354 (Size: 0x4, Type: FloatProperty)
    float WallYawRateMin; // 0x2358 (Size: 0x4, Type: FloatProperty)
    float WallYawRateMax; // 0x235C (Size: 0x4, Type: FloatProperty)
    float InterpToGroundTime; // 0x2360 (Size: 0x4, Type: FloatProperty)
    float InterpToAirTime; // 0x2364 (Size: 0x4, Type: FloatProperty)
    float AverageVelocityInterpRate; // 0x2368 (Size: 0x4, Type: FloatProperty)
    float FocusOffsetInterpRate; // 0x236C (Size: 0x4, Type: FloatProperty)
    float DistanceSpeedScale; // 0x2370 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMin; // 0x2374 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMax; // 0x2378 (Size: 0x4, Type: FloatProperty)
    float DistanceInterpRate; // 0x237C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedFOVOffset; // 0x2380 (Size: 0x4, Type: FloatProperty)
    float SupersonicFOVOffset; // 0x2384 (Size: 0x4, Type: FloatProperty)
    float FOVInterpRate; // 0x2388 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x238C
    void* VehicleTarget; // 0x2390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarVehicleCameraMode, CameraSettings) == 8352, "Offset mismatch for UDelMarVehicleCameraMode::CameraSettings");
static_assert(offsetof(UDelMarVehicleCameraMode, VelocityViewDistance) == 8384, "Offset mismatch for UDelMarVehicleCameraMode::VelocityViewDistance");
static_assert(offsetof(UDelMarVehicleCameraMode, VelocityFOV) == 8456, "Offset mismatch for UDelMarVehicleCameraMode::VelocityFOV");
static_assert(offsetof(UDelMarVehicleCameraMode, AerialViewDistance) == 8528, "Offset mismatch for UDelMarVehicleCameraMode::AerialViewDistance");
static_assert(offsetof(UDelMarVehicleCameraMode, AerialFocusOffset) == 8600, "Offset mismatch for UDelMarVehicleCameraMode::AerialFocusOffset");
static_assert(offsetof(UDelMarVehicleCameraMode, AerialPitch) == 8672, "Offset mismatch for UDelMarVehicleCameraMode::AerialPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, AccelViewDistance) == 8744, "Offset mismatch for UDelMarVehicleCameraMode::AccelViewDistance");
static_assert(offsetof(UDelMarVehicleCameraMode, AccelPitch) == 8816, "Offset mismatch for UDelMarVehicleCameraMode::AccelPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, AirRotationInterpRate) == 8888, "Offset mismatch for UDelMarVehicleCameraMode::AirRotationInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, DriftSwivelSpeed) == 8960, "Offset mismatch for UDelMarVehicleCameraMode::DriftSwivelSpeed");
static_assert(offsetof(UDelMarVehicleCameraMode, ViewDistanceInterpSpeed) == 8964, "Offset mismatch for UDelMarVehicleCameraMode::ViewDistanceInterpSpeed");
static_assert(offsetof(UDelMarVehicleCameraMode, FOVInterpSpeed) == 8968, "Offset mismatch for UDelMarVehicleCameraMode::FOVInterpSpeed");
static_assert(offsetof(UDelMarVehicleCameraMode, AccelerationViewDistanceDecayRate) == 8972, "Offset mismatch for UDelMarVehicleCameraMode::AccelerationViewDistanceDecayRate");
static_assert(offsetof(UDelMarVehicleCameraMode, MaxAccumulatedAccelViewDistance) == 8976, "Offset mismatch for UDelMarVehicleCameraMode::MaxAccumulatedAccelViewDistance");
static_assert(offsetof(UDelMarVehicleCameraMode, MinAccumulatedAccelViewDistance) == 8980, "Offset mismatch for UDelMarVehicleCameraMode::MinAccumulatedAccelViewDistance");
static_assert(offsetof(UDelMarVehicleCameraMode, AerialOffsetInterpSpeed) == 8984, "Offset mismatch for UDelMarVehicleCameraMode::AerialOffsetInterpSpeed");
static_assert(offsetof(UDelMarVehicleCameraMode, MaximumDownwardAerialPitch) == 8988, "Offset mismatch for UDelMarVehicleCameraMode::MaximumDownwardAerialPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, MaximumUpwardAerialPitch) == 8992, "Offset mismatch for UDelMarVehicleCameraMode::MaximumUpwardAerialPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, AccelerationPitchDecayRate) == 8996, "Offset mismatch for UDelMarVehicleCameraMode::AccelerationPitchDecayRate");
static_assert(offsetof(UDelMarVehicleCameraMode, MaxAccumulatedAccelPitch) == 9000, "Offset mismatch for UDelMarVehicleCameraMode::MaxAccumulatedAccelPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, MinAccumulatedAccelPitch) == 9004, "Offset mismatch for UDelMarVehicleCameraMode::MinAccumulatedAccelPitch");
static_assert(offsetof(UDelMarVehicleCameraMode, bPreventSpeedIncreaseInAir) == 9008, "Offset mismatch for UDelMarVehicleCameraMode::bPreventSpeedIncreaseInAir");
static_assert(offsetof(UDelMarVehicleCameraMode, SpeedInputScalar) == 9012, "Offset mismatch for UDelMarVehicleCameraMode::SpeedInputScalar");
static_assert(offsetof(UDelMarVehicleCameraMode, SwivelPitchMax) == 9016, "Offset mismatch for UDelMarVehicleCameraMode::SwivelPitchMax");
static_assert(offsetof(UDelMarVehicleCameraMode, SwivelYawMax) == 9020, "Offset mismatch for UDelMarVehicleCameraMode::SwivelYawMax");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundPitchInterpRate) == 9024, "Offset mismatch for UDelMarVehicleCameraMode::GroundPitchInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundMaxPitchForNormalBlend) == 9028, "Offset mismatch for UDelMarVehicleCameraMode::GroundMaxPitchForNormalBlend");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundNormalInterpRate) == 9032, "Offset mismatch for UDelMarVehicleCameraMode::GroundNormalInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundNormalAirInterpRate) == 9036, "Offset mismatch for UDelMarVehicleCameraMode::GroundNormalAirInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundYawRateMin) == 9040, "Offset mismatch for UDelMarVehicleCameraMode::GroundYawRateMin");
static_assert(offsetof(UDelMarVehicleCameraMode, GroundYawRateMax) == 9044, "Offset mismatch for UDelMarVehicleCameraMode::GroundYawRateMax");
static_assert(offsetof(UDelMarVehicleCameraMode, WallYawRateMin) == 9048, "Offset mismatch for UDelMarVehicleCameraMode::WallYawRateMin");
static_assert(offsetof(UDelMarVehicleCameraMode, WallYawRateMax) == 9052, "Offset mismatch for UDelMarVehicleCameraMode::WallYawRateMax");
static_assert(offsetof(UDelMarVehicleCameraMode, InterpToGroundTime) == 9056, "Offset mismatch for UDelMarVehicleCameraMode::InterpToGroundTime");
static_assert(offsetof(UDelMarVehicleCameraMode, InterpToAirTime) == 9060, "Offset mismatch for UDelMarVehicleCameraMode::InterpToAirTime");
static_assert(offsetof(UDelMarVehicleCameraMode, AverageVelocityInterpRate) == 9064, "Offset mismatch for UDelMarVehicleCameraMode::AverageVelocityInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, FocusOffsetInterpRate) == 9068, "Offset mismatch for UDelMarVehicleCameraMode::FocusOffsetInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, DistanceSpeedScale) == 9072, "Offset mismatch for UDelMarVehicleCameraMode::DistanceSpeedScale");
static_assert(offsetof(UDelMarVehicleCameraMode, DistanceOffsetMin) == 9076, "Offset mismatch for UDelMarVehicleCameraMode::DistanceOffsetMin");
static_assert(offsetof(UDelMarVehicleCameraMode, DistanceOffsetMax) == 9080, "Offset mismatch for UDelMarVehicleCameraMode::DistanceOffsetMax");
static_assert(offsetof(UDelMarVehicleCameraMode, DistanceInterpRate) == 9084, "Offset mismatch for UDelMarVehicleCameraMode::DistanceInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, MaxSpeedFOVOffset) == 9088, "Offset mismatch for UDelMarVehicleCameraMode::MaxSpeedFOVOffset");
static_assert(offsetof(UDelMarVehicleCameraMode, SupersonicFOVOffset) == 9092, "Offset mismatch for UDelMarVehicleCameraMode::SupersonicFOVOffset");
static_assert(offsetof(UDelMarVehicleCameraMode, FOVInterpRate) == 9096, "Offset mismatch for UDelMarVehicleCameraMode::FOVInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode, VehicleTarget) == 9104, "Offset mismatch for UDelMarVehicleCameraMode::VehicleTarget");

// /Script/DelMarCore.DelMarVehicleCameraMode_V2
// Kind: Class; super: FortCameraMode
class UDelMarVehicleCameraMode_V2
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CameraInputControllerComponentClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> VehicleArchetypeDefaults; // 0x0080 (Size: 0x10, Type: MapProperty)
    float DefaultInterpLambda; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float FOV; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float TotalFOVInterpLambda; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalFOVClamp[0x10]; // 0x009C (Size: 0x10, Type: StructProperty)
    float Distance; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float TotalDistanceInterpLambda; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalDistanceClamp[0x10]; // 0x00B4 (Size: 0x10, Type: StructProperty)
    float Height; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float TotalHeightInterpLambda; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float HeightOffsetInterpLambda; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalHeightClamp[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    float AngleToOriginDegrees; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float AngleToOriginInterpLambda; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalAngleToOriginClamp[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    float SwivelInterpLambda; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float SwivelPitchMax; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float SwivelYawMax; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float GroundNormalInterpLambda; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float ForwardInterpLambda; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float CarPitchInterpLambda; // 0x010C (Size: 0x4, Type: FloatProperty)
    float AerialCarPitchInterpLambda; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MaxAerialCarPitch; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PitchRotationAxisInterpLambda; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float VerticalDriftDegreeThreshold; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MinDegreesVehicleWorldUpThreshold; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    std::uint8_t MaxUpRotationPerSecondCurve[0x50]; // 0x0128 (Size: 0x50, Type: StructProperty)
    float MaxUpRotationPerSecondStatic; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float WorldUpInterpRate; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventPenetration; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPredictiveAvoidance; // 0x0181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0182
    float CollisionPushOutDistance; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendOutTime; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendInTime; // 0x018C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PenetrationTraceChannel; // 0x0190 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0191
    TArray<void*> PenetrationAvoidanceFeelers; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ForwardAirInterpLambdaCurve[0x50]; // 0x01A8 (Size: 0x50, Type: StructProperty)
    std::uint8_t ForwardAirBlendCurve[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    float MinForwardSpeedForAerialBlend; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float MinTimeInAirBeforeUsingVehicleUp; // 0x0244 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroundNormalAirInterpLambdaCurve[0x50]; // 0x0248 (Size: 0x50, Type: StructProperty)
    float AirFreestyleDeactivationExtendedSeconds; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationLambdaSeconds; // 0x029C (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationForwardLambda; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationNormalLambda; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftForwardBlendCurve[0x48]; // 0x02A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialDriftForwardBlendCurve[0x48]; // 0x02F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftForwardInterpLambdaCurve[0x48]; // 0x0338 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftOriginOffsetCurve[0x48]; // 0x0380 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftOriginOffsetInterpLambdaCurve[0x50]; // 0x03C8 (Size: 0x50, Type: StructProperty)
    float DriftOriginOffsetInactiveLambda; // 0x0418 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x041C
    std::uint8_t DriftKickOffsetDistance[0x110]; // 0x0420 (Size: 0x110, Type: StructProperty)
    float DriftKickOffsetLambda; // 0x0530 (Size: 0x4, Type: FloatProperty)
    float DriftKickOffsetInactiveLambda; // 0x0534 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDeactivateKickOffsetOnKickEnd; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0539
    std::uint8_t DriftRollDegreesCurve[0x48]; // 0x0540 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftRollDegreesInterpLambdaCurve[0x50]; // 0x0588 (Size: 0x50, Type: StructProperty)
    std::uint8_t DriftScalarCurveCurve[0x50]; // 0x05D8 (Size: 0x50, Type: StructProperty)
    float GroundMaxPitchForNormalBlend; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float GroundExtraPitchForNormalBlend; // 0x062C (Size: 0x4, Type: FloatProperty)
    std::uint8_t StableSpeedDistance[0x70]; // 0x0630 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedFOV[0x70]; // 0x06A0 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedHeight[0x70]; // 0x0710 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedAngleToOrigin[0x70]; // 0x0780 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationDistance[0x70]; // 0x07F0 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationFOV[0x70]; // 0x0860 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationHeight[0x70]; // 0x08D0 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationAngleToOrigin[0x70]; // 0x0940 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedDistance[0x70]; // 0x09B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedFOV[0x70]; // 0x0A20 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedHeight[0x70]; // 0x0A90 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedAngleToOrigin[0x70]; // 0x0B00 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationDistance[0x70]; // 0x0B70 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationFOV[0x70]; // 0x0BE0 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationHeight[0x70]; // 0x0C50 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationAngleToOrigin[0x70]; // 0x0CC0 (Size: 0x70, Type: StructProperty)
    std::uint8_t TurboDistance[0x110]; // 0x0D30 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboFOV[0x110]; // 0x0E40 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboBonusZoneSuccessDistance[0x110]; // 0x0F50 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboBonusZoneSuccessFOV[0x110]; // 0x1060 (Size: 0x110, Type: StructProperty)
    std::uint8_t DriftBonusDistance[0x110]; // 0x1170 (Size: 0x110, Type: StructProperty)
    std::uint8_t DriftBonusFOV[0x110]; // 0x1280 (Size: 0x110, Type: StructProperty)
    std::uint8_t StartlineDistance[0x110]; // 0x1390 (Size: 0x110, Type: StructProperty)
    std::uint8_t StartlineFOV[0x110]; // 0x14A0 (Size: 0x110, Type: StructProperty)
    std::uint8_t DraftDistance[0x70]; // 0x15B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t DraftFOV[0x70]; // 0x1620 (Size: 0x70, Type: StructProperty)
    std::uint8_t WorldBonusSpeedDistance[0x110]; // 0x1690 (Size: 0x110, Type: StructProperty)
    std::uint8_t WorldBonusSpeedFOV[0x110]; // 0x17A0 (Size: 0x110, Type: StructProperty)
    std::uint8_t AerialDivingBonusSpeedDistance[0x70]; // 0x18B0 (Size: 0x70, Type: StructProperty)
    float NonSkydivingDistanceScalar; // 0x1920 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x1924
    std::uint8_t AerialDivingBonusSpeedFOV[0x70]; // 0x1928 (Size: 0x70, Type: StructProperty)
    float NonSkydivingFOVScalar; // 0x1998 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> VehicleTarget; // 0x199C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CameraInputControllerComponent; // 0x19A4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarVehicleCameraMode_V2, CameraInputControllerComponentClass) == 120, "Offset mismatch for UDelMarVehicleCameraMode_V2::CameraInputControllerComponentClass");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, VehicleArchetypeDefaults) == 128, "Offset mismatch for UDelMarVehicleCameraMode_V2::VehicleArchetypeDefaults");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DefaultInterpLambda) == 144, "Offset mismatch for UDelMarVehicleCameraMode_V2::DefaultInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, FOV) == 148, "Offset mismatch for UDelMarVehicleCameraMode_V2::FOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalFOVInterpLambda) == 152, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalFOVInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalFOVClamp) == 156, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalFOVClamp");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, Distance) == 172, "Offset mismatch for UDelMarVehicleCameraMode_V2::Distance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalDistanceInterpLambda) == 176, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalDistanceInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalDistanceClamp) == 180, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalDistanceClamp");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, Height) == 196, "Offset mismatch for UDelMarVehicleCameraMode_V2::Height");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalHeightInterpLambda) == 200, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalHeightInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, HeightOffsetInterpLambda) == 204, "Offset mismatch for UDelMarVehicleCameraMode_V2::HeightOffsetInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalHeightClamp) == 208, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalHeightClamp");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AngleToOriginDegrees) == 224, "Offset mismatch for UDelMarVehicleCameraMode_V2::AngleToOriginDegrees");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AngleToOriginInterpLambda) == 228, "Offset mismatch for UDelMarVehicleCameraMode_V2::AngleToOriginInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TotalAngleToOriginClamp) == 232, "Offset mismatch for UDelMarVehicleCameraMode_V2::TotalAngleToOriginClamp");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, SwivelInterpLambda) == 248, "Offset mismatch for UDelMarVehicleCameraMode_V2::SwivelInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, SwivelPitchMax) == 252, "Offset mismatch for UDelMarVehicleCameraMode_V2::SwivelPitchMax");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, SwivelYawMax) == 256, "Offset mismatch for UDelMarVehicleCameraMode_V2::SwivelYawMax");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, GroundNormalInterpLambda) == 260, "Offset mismatch for UDelMarVehicleCameraMode_V2::GroundNormalInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, ForwardInterpLambda) == 264, "Offset mismatch for UDelMarVehicleCameraMode_V2::ForwardInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, CarPitchInterpLambda) == 268, "Offset mismatch for UDelMarVehicleCameraMode_V2::CarPitchInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AerialCarPitchInterpLambda) == 272, "Offset mismatch for UDelMarVehicleCameraMode_V2::AerialCarPitchInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MaxAerialCarPitch) == 276, "Offset mismatch for UDelMarVehicleCameraMode_V2::MaxAerialCarPitch");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, PitchRotationAxisInterpLambda) == 280, "Offset mismatch for UDelMarVehicleCameraMode_V2::PitchRotationAxisInterpLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, VerticalDriftDegreeThreshold) == 284, "Offset mismatch for UDelMarVehicleCameraMode_V2::VerticalDriftDegreeThreshold");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MinDegreesVehicleWorldUpThreshold) == 288, "Offset mismatch for UDelMarVehicleCameraMode_V2::MinDegreesVehicleWorldUpThreshold");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MaxUpRotationPerSecondCurve) == 296, "Offset mismatch for UDelMarVehicleCameraMode_V2::MaxUpRotationPerSecondCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MaxUpRotationPerSecondStatic) == 376, "Offset mismatch for UDelMarVehicleCameraMode_V2::MaxUpRotationPerSecondStatic");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, WorldUpInterpRate) == 380, "Offset mismatch for UDelMarVehicleCameraMode_V2::WorldUpInterpRate");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, bPreventPenetration) == 384, "Offset mismatch for UDelMarVehicleCameraMode_V2::bPreventPenetration");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, bDoPredictiveAvoidance) == 385, "Offset mismatch for UDelMarVehicleCameraMode_V2::bDoPredictiveAvoidance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, CollisionPushOutDistance) == 388, "Offset mismatch for UDelMarVehicleCameraMode_V2::CollisionPushOutDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, PenetrationBlendOutTime) == 392, "Offset mismatch for UDelMarVehicleCameraMode_V2::PenetrationBlendOutTime");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, PenetrationBlendInTime) == 396, "Offset mismatch for UDelMarVehicleCameraMode_V2::PenetrationBlendInTime");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, PenetrationTraceChannel) == 400, "Offset mismatch for UDelMarVehicleCameraMode_V2::PenetrationTraceChannel");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, PenetrationAvoidanceFeelers) == 408, "Offset mismatch for UDelMarVehicleCameraMode_V2::PenetrationAvoidanceFeelers");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, ForwardAirInterpLambdaCurve) == 424, "Offset mismatch for UDelMarVehicleCameraMode_V2::ForwardAirInterpLambdaCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, ForwardAirBlendCurve) == 504, "Offset mismatch for UDelMarVehicleCameraMode_V2::ForwardAirBlendCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MinForwardSpeedForAerialBlend) == 576, "Offset mismatch for UDelMarVehicleCameraMode_V2::MinForwardSpeedForAerialBlend");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, MinTimeInAirBeforeUsingVehicleUp) == 580, "Offset mismatch for UDelMarVehicleCameraMode_V2::MinTimeInAirBeforeUsingVehicleUp");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, GroundNormalAirInterpLambdaCurve) == 584, "Offset mismatch for UDelMarVehicleCameraMode_V2::GroundNormalAirInterpLambdaCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AirFreestyleDeactivationExtendedSeconds) == 664, "Offset mismatch for UDelMarVehicleCameraMode_V2::AirFreestyleDeactivationExtendedSeconds");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AirFreestyleDeactivationLambdaSeconds) == 668, "Offset mismatch for UDelMarVehicleCameraMode_V2::AirFreestyleDeactivationLambdaSeconds");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AirFreestyleDeactivationForwardLambda) == 672, "Offset mismatch for UDelMarVehicleCameraMode_V2::AirFreestyleDeactivationForwardLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AirFreestyleDeactivationNormalLambda) == 676, "Offset mismatch for UDelMarVehicleCameraMode_V2::AirFreestyleDeactivationNormalLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftForwardBlendCurve) == 680, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftForwardBlendCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AerialDriftForwardBlendCurve) == 752, "Offset mismatch for UDelMarVehicleCameraMode_V2::AerialDriftForwardBlendCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftForwardInterpLambdaCurve) == 824, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftForwardInterpLambdaCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftOriginOffsetCurve) == 896, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftOriginOffsetCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftOriginOffsetInterpLambdaCurve) == 968, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftOriginOffsetInterpLambdaCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftOriginOffsetInactiveLambda) == 1048, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftOriginOffsetInactiveLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftKickOffsetDistance) == 1056, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftKickOffsetDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftKickOffsetLambda) == 1328, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftKickOffsetLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftKickOffsetInactiveLambda) == 1332, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftKickOffsetInactiveLambda");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, bDeactivateKickOffsetOnKickEnd) == 1336, "Offset mismatch for UDelMarVehicleCameraMode_V2::bDeactivateKickOffsetOnKickEnd");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftRollDegreesCurve) == 1344, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftRollDegreesCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftRollDegreesInterpLambdaCurve) == 1416, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftRollDegreesInterpLambdaCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftScalarCurveCurve) == 1496, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftScalarCurveCurve");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, GroundMaxPitchForNormalBlend) == 1576, "Offset mismatch for UDelMarVehicleCameraMode_V2::GroundMaxPitchForNormalBlend");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, GroundExtraPitchForNormalBlend) == 1580, "Offset mismatch for UDelMarVehicleCameraMode_V2::GroundExtraPitchForNormalBlend");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StableSpeedDistance) == 1584, "Offset mismatch for UDelMarVehicleCameraMode_V2::StableSpeedDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StableSpeedFOV) == 1696, "Offset mismatch for UDelMarVehicleCameraMode_V2::StableSpeedFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StableSpeedHeight) == 1808, "Offset mismatch for UDelMarVehicleCameraMode_V2::StableSpeedHeight");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StableSpeedAngleToOrigin) == 1920, "Offset mismatch for UDelMarVehicleCameraMode_V2::StableSpeedAngleToOrigin");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AccelerationDistance) == 2032, "Offset mismatch for UDelMarVehicleCameraMode_V2::AccelerationDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AccelerationFOV) == 2144, "Offset mismatch for UDelMarVehicleCameraMode_V2::AccelerationFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AccelerationHeight) == 2256, "Offset mismatch for UDelMarVehicleCameraMode_V2::AccelerationHeight");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AccelerationAngleToOrigin) == 2368, "Offset mismatch for UDelMarVehicleCameraMode_V2::AccelerationAngleToOrigin");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseSpeedDistance) == 2480, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseSpeedDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseSpeedFOV) == 2592, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseSpeedFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseSpeedHeight) == 2704, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseSpeedHeight");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseSpeedAngleToOrigin) == 2816, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseSpeedAngleToOrigin");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseAccelerationDistance) == 2928, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseAccelerationDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseAccelerationFOV) == 3040, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseAccelerationFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseAccelerationHeight) == 3152, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseAccelerationHeight");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, BaseAccelerationAngleToOrigin) == 3264, "Offset mismatch for UDelMarVehicleCameraMode_V2::BaseAccelerationAngleToOrigin");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TurboDistance) == 3376, "Offset mismatch for UDelMarVehicleCameraMode_V2::TurboDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TurboFOV) == 3648, "Offset mismatch for UDelMarVehicleCameraMode_V2::TurboFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TurboBonusZoneSuccessDistance) == 3920, "Offset mismatch for UDelMarVehicleCameraMode_V2::TurboBonusZoneSuccessDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, TurboBonusZoneSuccessFOV) == 4192, "Offset mismatch for UDelMarVehicleCameraMode_V2::TurboBonusZoneSuccessFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftBonusDistance) == 4464, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftBonusDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DriftBonusFOV) == 4736, "Offset mismatch for UDelMarVehicleCameraMode_V2::DriftBonusFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StartlineDistance) == 5008, "Offset mismatch for UDelMarVehicleCameraMode_V2::StartlineDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, StartlineFOV) == 5280, "Offset mismatch for UDelMarVehicleCameraMode_V2::StartlineFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DraftDistance) == 5552, "Offset mismatch for UDelMarVehicleCameraMode_V2::DraftDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, DraftFOV) == 5664, "Offset mismatch for UDelMarVehicleCameraMode_V2::DraftFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, WorldBonusSpeedDistance) == 5776, "Offset mismatch for UDelMarVehicleCameraMode_V2::WorldBonusSpeedDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, WorldBonusSpeedFOV) == 6048, "Offset mismatch for UDelMarVehicleCameraMode_V2::WorldBonusSpeedFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AerialDivingBonusSpeedDistance) == 6320, "Offset mismatch for UDelMarVehicleCameraMode_V2::AerialDivingBonusSpeedDistance");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, NonSkydivingDistanceScalar) == 6432, "Offset mismatch for UDelMarVehicleCameraMode_V2::NonSkydivingDistanceScalar");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, AerialDivingBonusSpeedFOV) == 6440, "Offset mismatch for UDelMarVehicleCameraMode_V2::AerialDivingBonusSpeedFOV");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, NonSkydivingFOVScalar) == 6552, "Offset mismatch for UDelMarVehicleCameraMode_V2::NonSkydivingFOVScalar");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, VehicleTarget) == 6556, "Offset mismatch for UDelMarVehicleCameraMode_V2::VehicleTarget");
static_assert(offsetof(UDelMarVehicleCameraMode_V2, CameraInputControllerComponent) == 6564, "Offset mismatch for UDelMarVehicleCameraMode_V2::CameraInputControllerComponent");

// /Script/DelMarCore.DelMarVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UDelMarVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    std::uint8_t Collision[0x138]; // 0x0990 (Size: 0x138, Type: StructProperty)
    void* DefaultBodySetup; // 0x0AC8 (Size: 0x8, Type: ObjectProperty)
    void* BodySetupMap; // 0x0AD0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DriveSetup[0x230]; // 0x0AD8 (Size: 0x230, Type: StructProperty)
    void* PhysMatAttributeMap; // 0x0D08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RigidBody[0x38]; // 0x0D10 (Size: 0x38, Type: StructProperty)
    std::uint8_t Terrain[0x30]; // 0x0D48 (Size: 0x30, Type: StructProperty)
    std::uint8_t WorldBonusSpeed[0x28]; // 0x0D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t AerialRotation[0xA8]; // 0x0DA0 (Size: 0xA8, Type: StructProperty)
    std::uint8_t AirControl[0x90]; // 0x0E48 (Size: 0x90, Type: StructProperty)
    std::uint8_t AirFreestyle[0x30]; // 0x0ED8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AirThrottle[0x60]; // 0x0F08 (Size: 0x60, Type: StructProperty)
    std::uint8_t AutoUpright[0x28]; // 0x0F68 (Size: 0x28, Type: StructProperty)
    std::uint8_t Drafting[0x88]; // 0x0F90 (Size: 0x88, Type: StructProperty)
    std::uint8_t Drift[0x458]; // 0x1018 (Size: 0x458, Type: StructProperty)
    std::uint8_t DriftBoost[0x118]; // 0x1470 (Size: 0x118, Type: StructProperty)
    std::uint8_t Gravity[0x20]; // 0x1588 (Size: 0x20, Type: StructProperty)
    std::uint8_t Jump[0x18]; // 0x15A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Kickflip[0x118]; // 0x15C0 (Size: 0x118, Type: StructProperty)
    std::uint8_t Oversteer[0xB8]; // 0x16D8 (Size: 0xB8, Type: StructProperty)
    std::uint8_t Reattachment[0x60]; // 0x1790 (Size: 0x60, Type: StructProperty)
    std::uint8_t Rubberbanding[0xF8]; // 0x17F0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t StartlineBoost[0x68]; // 0x18E8 (Size: 0x68, Type: StructProperty)
    std::uint8_t Strafe[0x20]; // 0x1950 (Size: 0x20, Type: StructProperty)
    std::uint8_t Turbo[0x70]; // 0x1970 (Size: 0x70, Type: StructProperty)
    std::uint8_t Underthrust[0xE8]; // 0x19E0 (Size: 0xE8, Type: StructProperty)
    std::uint8_t SelfDemolish[0x1]; // 0x1AC8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleConfigs, Collision) == 2448, "Offset mismatch for UDelMarVehicleConfigs::Collision");
static_assert(offsetof(UDelMarVehicleConfigs, DefaultBodySetup) == 2760, "Offset mismatch for UDelMarVehicleConfigs::DefaultBodySetup");
static_assert(offsetof(UDelMarVehicleConfigs, BodySetupMap) == 2768, "Offset mismatch for UDelMarVehicleConfigs::BodySetupMap");
static_assert(offsetof(UDelMarVehicleConfigs, DriveSetup) == 2776, "Offset mismatch for UDelMarVehicleConfigs::DriveSetup");
static_assert(offsetof(UDelMarVehicleConfigs, PhysMatAttributeMap) == 3336, "Offset mismatch for UDelMarVehicleConfigs::PhysMatAttributeMap");
static_assert(offsetof(UDelMarVehicleConfigs, RigidBody) == 3344, "Offset mismatch for UDelMarVehicleConfigs::RigidBody");
static_assert(offsetof(UDelMarVehicleConfigs, Terrain) == 3400, "Offset mismatch for UDelMarVehicleConfigs::Terrain");
static_assert(offsetof(UDelMarVehicleConfigs, WorldBonusSpeed) == 3448, "Offset mismatch for UDelMarVehicleConfigs::WorldBonusSpeed");
static_assert(offsetof(UDelMarVehicleConfigs, AerialRotation) == 3488, "Offset mismatch for UDelMarVehicleConfigs::AerialRotation");
static_assert(offsetof(UDelMarVehicleConfigs, AirControl) == 3656, "Offset mismatch for UDelMarVehicleConfigs::AirControl");
static_assert(offsetof(UDelMarVehicleConfigs, AirFreestyle) == 3800, "Offset mismatch for UDelMarVehicleConfigs::AirFreestyle");
static_assert(offsetof(UDelMarVehicleConfigs, AirThrottle) == 3848, "Offset mismatch for UDelMarVehicleConfigs::AirThrottle");
static_assert(offsetof(UDelMarVehicleConfigs, AutoUpright) == 3944, "Offset mismatch for UDelMarVehicleConfigs::AutoUpright");
static_assert(offsetof(UDelMarVehicleConfigs, Drafting) == 3984, "Offset mismatch for UDelMarVehicleConfigs::Drafting");
static_assert(offsetof(UDelMarVehicleConfigs, Drift) == 4120, "Offset mismatch for UDelMarVehicleConfigs::Drift");
static_assert(offsetof(UDelMarVehicleConfigs, DriftBoost) == 5232, "Offset mismatch for UDelMarVehicleConfigs::DriftBoost");
static_assert(offsetof(UDelMarVehicleConfigs, Gravity) == 5512, "Offset mismatch for UDelMarVehicleConfigs::Gravity");
static_assert(offsetof(UDelMarVehicleConfigs, Jump) == 5544, "Offset mismatch for UDelMarVehicleConfigs::Jump");
static_assert(offsetof(UDelMarVehicleConfigs, Kickflip) == 5568, "Offset mismatch for UDelMarVehicleConfigs::Kickflip");
static_assert(offsetof(UDelMarVehicleConfigs, Oversteer) == 5848, "Offset mismatch for UDelMarVehicleConfigs::Oversteer");
static_assert(offsetof(UDelMarVehicleConfigs, Reattachment) == 6032, "Offset mismatch for UDelMarVehicleConfigs::Reattachment");
static_assert(offsetof(UDelMarVehicleConfigs, Rubberbanding) == 6128, "Offset mismatch for UDelMarVehicleConfigs::Rubberbanding");
static_assert(offsetof(UDelMarVehicleConfigs, StartlineBoost) == 6376, "Offset mismatch for UDelMarVehicleConfigs::StartlineBoost");
static_assert(offsetof(UDelMarVehicleConfigs, Strafe) == 6480, "Offset mismatch for UDelMarVehicleConfigs::Strafe");
static_assert(offsetof(UDelMarVehicleConfigs, Turbo) == 6512, "Offset mismatch for UDelMarVehicleConfigs::Turbo");
static_assert(offsetof(UDelMarVehicleConfigs, Underthrust) == 6624, "Offset mismatch for UDelMarVehicleConfigs::Underthrust");
static_assert(offsetof(UDelMarVehicleConfigs, SelfDemolish) == 6856, "Offset mismatch for UDelMarVehicleConfigs::SelfDemolish");

// /Script/DelMarCore.DelMarVehicleCosmeticComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleCosmeticComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnCosmeticActorSpawned; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllCosmeticActorsSpawned; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> StaticCosmeticActorClasses; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedServerCosmeticActorClasses; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedCosmeticActors; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarVehicleCosmeticComponent, OnCosmeticActorSpawned) == 192, "Offset mismatch for UDelMarVehicleCosmeticComponent::OnCosmeticActorSpawned");
static_assert(offsetof(UDelMarVehicleCosmeticComponent, OnAllCosmeticActorsSpawned) == 208, "Offset mismatch for UDelMarVehicleCosmeticComponent::OnAllCosmeticActorsSpawned");
static_assert(offsetof(UDelMarVehicleCosmeticComponent, StaticCosmeticActorClasses) == 224, "Offset mismatch for UDelMarVehicleCosmeticComponent::StaticCosmeticActorClasses");
static_assert(offsetof(UDelMarVehicleCosmeticComponent, AllowedServerCosmeticActorClasses) == 240, "Offset mismatch for UDelMarVehicleCosmeticComponent::AllowedServerCosmeticActorClasses");
static_assert(offsetof(UDelMarVehicleCosmeticComponent, SpawnedCosmeticActors) == 256, "Offset mismatch for UDelMarVehicleCosmeticComponent::SpawnedCosmeticActors");

// /Script/DelMarCore.DelMarVehicleForceFeedbackComponent
// Kind: Class; super: ControllerComponent
class UDelMarVehicleForceFeedbackComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DrivingForceFeedback[0xA8]; // 0x00C0 (Size: 0xA8, Type: StructProperty)
    void* JumpForceFeedbackEffect; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* OversteerLeftForceFeedbackEffect; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* OversteerRightForceFeedbackEffect; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LandingForceFeedbackEffects; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LandingForceLevelLookupCurve[0x48]; // 0x0190 (Size: 0x48, Type: StructProperty)
    void* TurboForceFeedbackEffect; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DriftForceFeedback[0xA8]; // 0x01E0 (Size: 0xA8, Type: StructProperty)
    void* DriftUncontrolledForceFeedbackEffect; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* DriftBoostForceFeedbackEffect; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* DriftTractionForceFeedback; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    float MaxTractionDriftShakeAngle; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02A4
    void* HazardHitForceFeedback; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> Vehicle; // 0x02B0 (Size: 0x10, Type: InterfaceProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x02C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentOversteerForceFeedbackEffect; // 0x02C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, DrivingForceFeedback) == 192, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::DrivingForceFeedback");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, JumpForceFeedbackEffect) == 360, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::JumpForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, OversteerLeftForceFeedbackEffect) == 368, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::OversteerLeftForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, OversteerRightForceFeedbackEffect) == 376, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::OversteerRightForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, LandingForceFeedbackEffects) == 384, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::LandingForceFeedbackEffects");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, LandingForceLevelLookupCurve) == 400, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::LandingForceLevelLookupCurve");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, TurboForceFeedbackEffect) == 472, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::TurboForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, DriftForceFeedback) == 480, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::DriftForceFeedback");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, DriftUncontrolledForceFeedbackEffect) == 648, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::DriftUncontrolledForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, DriftBoostForceFeedbackEffect) == 656, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::DriftBoostForceFeedbackEffect");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, DriftTractionForceFeedback) == 664, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::DriftTractionForceFeedback");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, MaxTractionDriftShakeAngle) == 672, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::MaxTractionDriftShakeAngle");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, HazardHitForceFeedback) == 680, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::HazardHitForceFeedback");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, Vehicle) == 688, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::Vehicle");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, CachedPlayerController) == 704, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::CachedPlayerController");
static_assert(offsetof(UDelMarVehicleForceFeedbackComponent, CurrentOversteerForceFeedbackEffect) == 712, "Offset mismatch for UDelMarVehicleForceFeedbackComponent::CurrentOversteerForceFeedbackEffect");

// /Script/DelMarCore.DelMarVehicleInterface
// Kind: Class; super: VehicleCosmeticsInterface
class UDelMarVehicleInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarVehicleLoadoutSetup
// Kind: Class; super: PrimaryDataAsset
class UDelMarVehicleLoadoutSetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Loadout[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleLoadoutSetup, Loadout) == 40, "Offset mismatch for UDelMarVehicleLoadoutSetup::Loadout");

// /Script/DelMarCore.DelMarVehicleManager
// Kind: Class; super: WorldSubsystem
class UDelMarVehicleManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.DelMarVehicleMovementSet
// Kind: Class; super: FortAttributeSet
class UDelMarVehicleMovementSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t AccelMultiplier[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t bVehicleThrottleDisabled[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BonusSpeed[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleMovementSet, AccelMultiplier) == 72, "Offset mismatch for UDelMarVehicleMovementSet::AccelMultiplier");
static_assert(offsetof(UDelMarVehicleMovementSet, bVehicleThrottleDisabled) == 112, "Offset mismatch for UDelMarVehicleMovementSet::bVehicleThrottleDisabled");
static_assert(offsetof(UDelMarVehicleMovementSet, BonusSpeed) == 152, "Offset mismatch for UDelMarVehicleMovementSet::BonusSpeed");

// /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleNetworkPhysicsComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ReplicatedState[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleNetworkPhysicsComponent, ReplicatedState) == 208, "Offset mismatch for UDelMarVehicleNetworkPhysicsComponent::ReplicatedState");

// /Script/DelMarCore.DelMarVehicleStateTagManagerComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleStateTagManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CachedVehicle; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedASC; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarVehicleStateTagManagerComponent, CachedVehicle) == 192, "Offset mismatch for UDelMarVehicleStateTagManagerComponent::CachedVehicle");
static_assert(offsetof(UDelMarVehicleStateTagManagerComponent, CachedASC) == 200, "Offset mismatch for UDelMarVehicleStateTagManagerComponent::CachedASC");

// /Script/DelMarCore.DelMarVehicleTurboManagerComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleTurboManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TurboCharges; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float RechargeRateSeconds; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxCharges; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* OwnerVehicle; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarVehicleTurboManagerComponent, TurboCharges) == 192, "Offset mismatch for UDelMarVehicleTurboManagerComponent::TurboCharges");
static_assert(offsetof(UDelMarVehicleTurboManagerComponent, RechargeRateSeconds) == 196, "Offset mismatch for UDelMarVehicleTurboManagerComponent::RechargeRateSeconds");
static_assert(offsetof(UDelMarVehicleTurboManagerComponent, MaxCharges) == 200, "Offset mismatch for UDelMarVehicleTurboManagerComponent::MaxCharges");
static_assert(offsetof(UDelMarVehicleTurboManagerComponent, OwnerVehicle) == 208, "Offset mismatch for UDelMarVehicleTurboManagerComponent::OwnerVehicle");

// /Script/DelMarCore.DelMarVehicleVerbComponent
// Kind: Class; super: ActorComponent
class UDelMarVehicleVerbComponent
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

static_assert(offsetof(UDelMarVehicleVerbComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDelMarVehicleVerbComponent::PrimaryComponentTick");
static_assert(offsetof(UDelMarVehicleVerbComponent, ComponentTags) == 104, "Offset mismatch for UDelMarVehicleVerbComponent::ComponentTags");
static_assert(offsetof(UDelMarVehicleVerbComponent, AssetUserData) == 120, "Offset mismatch for UDelMarVehicleVerbComponent::AssetUserData");
static_assert(offsetof(UDelMarVehicleVerbComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDelMarVehicleVerbComponent::UCSSerializationIndex");
static_assert(offsetof(UDelMarVehicleVerbComponent, bNetAddressable) == 152, "Offset mismatch for UDelMarVehicleVerbComponent::bNetAddressable");
static_assert(offsetof(UDelMarVehicleVerbComponent, bAutoActivate) == 154, "Offset mismatch for UDelMarVehicleVerbComponent::bAutoActivate");
static_assert(offsetof(UDelMarVehicleVerbComponent, bIsEditorOnly) == 155, "Offset mismatch for UDelMarVehicleVerbComponent::bIsEditorOnly");
static_assert(offsetof(UDelMarVehicleVerbComponent, CreationMethod) == 185, "Offset mismatch for UDelMarVehicleVerbComponent::CreationMethod");
static_assert(offsetof(UDelMarVehicleVerbComponent, OnComponentActivated) == 186, "Offset mismatch for UDelMarVehicleVerbComponent::OnComponentActivated");
static_assert(offsetof(UDelMarVehicleVerbComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDelMarVehicleVerbComponent::OnComponentDeactivated");

// /Script/DelMarCore.DelmarCompetitiveMatchmakeRatingComponent
// Kind: Class; super: DelMarMatchmakeRatingComponentBase
class UDelmarCompetitiveMatchmakeRatingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> CachedPlayerRankMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t PlayerUniqueIdsGivenMMR[0x10]; // 0x00D0 (Size: 0x10, Type: SetProperty)
    TSet<void*> PlayerUniqueIds; // 0x00E0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UDelmarCompetitiveMatchmakeRatingComponent, CachedPlayerRankMap) == 192, "Offset mismatch for UDelmarCompetitiveMatchmakeRatingComponent::CachedPlayerRankMap");
static_assert(offsetof(UDelmarCompetitiveMatchmakeRatingComponent, PlayerUniqueIdsGivenMMR) == 208, "Offset mismatch for UDelmarCompetitiveMatchmakeRatingComponent::PlayerUniqueIdsGivenMMR");
static_assert(offsetof(UDelmarCompetitiveMatchmakeRatingComponent, PlayerUniqueIds) == 224, "Offset mismatch for UDelmarCompetitiveMatchmakeRatingComponent::PlayerUniqueIds");

// /Script/DelMarCore.FortAutomationRpcManager_DelMar
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_DelMar
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GameFeatureAction_MergeRankedDisplayData
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_MergeRankedDisplayData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MergeSource[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> MergeDestination; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_MergeRankedDisplayData, MergeSource) == 40, "Offset mismatch for UGameFeatureAction_MergeRankedDisplayData::MergeSource");
static_assert(offsetof(UGameFeatureAction_MergeRankedDisplayData, MergeDestination) == 72, "Offset mismatch for UGameFeatureAction_MergeRankedDisplayData::MergeDestination");

// /Script/DelMarCore.GuidedZoneRequirement
// Kind: Class; super: Object
class UGuidedZoneRequirement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_Drift
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_Drift
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_DriftActive
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_DriftActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_DriftBoostActive
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_DriftBoostActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_DriftKick
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_DriftKick
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_Jump
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_Jump
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_JumpOrUnderthrust
// Kind: Class; super: GuidedZoneRequirement_Jump
class UGuidedZoneRequirement_JumpOrUnderthrust
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_Kickflip
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_Kickflip
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_MidTutorial
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_MidTutorial
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_Turbo
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_Turbo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_TurboBonusZone
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_TurboBonusZone
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_Underthrust
// Kind: Class; super: GuidedZoneRequirement
class UGuidedZoneRequirement_Underthrust
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.GuidedZoneRequirement_VerticalKickflip
// Kind: Class; super: GuidedZoneRequirement_Kickflip
class UGuidedZoneRequirement_VerticalKickflip
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCore.UDelMarPlayerSuspendComponent
// Kind: Class; super: ControllerComponent
class UUDelMarPlayerSuspendComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> CachedRaceManager; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UUDelMarPlayerSuspendComponent, CachedRaceManager) == 200, "Offset mismatch for UUDelMarPlayerSuspendComponent::CachedRaceManager");

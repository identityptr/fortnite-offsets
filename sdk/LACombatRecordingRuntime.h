/**
 * decamp dumper generated SDK
 * Package: /Script/LACombatRecordingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LACombatRecordingRuntime.LACombatFightLoadout
// Kind: ScriptStruct; super: none
struct FLACombatFightLoadout
{
public:
    FString LoadoutName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> WeaponTemplateIds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLACombatFightLoadout, LoadoutName) == 0, "Offset mismatch for FLACombatFightLoadout::LoadoutName");
static_assert(offsetof(FLACombatFightLoadout, WeaponTemplateIds) == 16, "Offset mismatch for FLACombatFightLoadout::WeaponTemplateIds");

// /Script/LACombatRecordingRuntime.LAReplayColumn
// Kind: ScriptStruct; super: none
struct FLAReplayColumn
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> FloatData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoolData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RotatorData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StringData; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EnumTypeNames; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatArrayData; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLAReplayColumn, Type) == 0, "Offset mismatch for FLAReplayColumn::Type");
static_assert(offsetof(FLAReplayColumn, FloatData) == 8, "Offset mismatch for FLAReplayColumn::FloatData");
static_assert(offsetof(FLAReplayColumn, IntData) == 24, "Offset mismatch for FLAReplayColumn::IntData");
static_assert(offsetof(FLAReplayColumn, BoolData) == 40, "Offset mismatch for FLAReplayColumn::BoolData");
static_assert(offsetof(FLAReplayColumn, VectorData) == 56, "Offset mismatch for FLAReplayColumn::VectorData");
static_assert(offsetof(FLAReplayColumn, RotatorData) == 72, "Offset mismatch for FLAReplayColumn::RotatorData");
static_assert(offsetof(FLAReplayColumn, TransformData) == 88, "Offset mismatch for FLAReplayColumn::TransformData");
static_assert(offsetof(FLAReplayColumn, StringData) == 104, "Offset mismatch for FLAReplayColumn::StringData");
static_assert(offsetof(FLAReplayColumn, EnumTypeNames) == 120, "Offset mismatch for FLAReplayColumn::EnumTypeNames");
static_assert(offsetof(FLAReplayColumn, FloatArrayData) == 136, "Offset mismatch for FLAReplayColumn::FloatArrayData");

// /Script/LACombatRecordingRuntime.LAReplayEpisode
// Kind: ScriptStruct; super: none
struct FLAReplayEpisode
{
public:
    TMap<void*, void*> Columns; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::int32_t NumSteps; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLAReplayEpisode, Columns) == 0, "Offset mismatch for FLAReplayEpisode::Columns");
static_assert(offsetof(FLAReplayEpisode, NumSteps) == 16, "Offset mismatch for FLAReplayEpisode::NumSteps");

// /Script/LACombatRecordingRuntime.LAReplayFloatArray
// Kind: ScriptStruct; super: none
struct FLAReplayFloatArray
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLAReplayFloatArray, Values) == 0, "Offset mismatch for FLAReplayFloatArray::Values");

// /Script/LACombatRecordingRuntime.LACombatActionsRecorder
// Kind: Class; super: ActorComponent
class ULACombatActionsRecorder
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

static_assert(offsetof(ULACombatActionsRecorder, PrimaryComponentTick) == 56, "Offset mismatch for ULACombatActionsRecorder::PrimaryComponentTick");
static_assert(offsetof(ULACombatActionsRecorder, ComponentTags) == 104, "Offset mismatch for ULACombatActionsRecorder::ComponentTags");
static_assert(offsetof(ULACombatActionsRecorder, AssetUserData) == 120, "Offset mismatch for ULACombatActionsRecorder::AssetUserData");
static_assert(offsetof(ULACombatActionsRecorder, UCSSerializationIndex) == 144, "Offset mismatch for ULACombatActionsRecorder::UCSSerializationIndex");
static_assert(offsetof(ULACombatActionsRecorder, bNetAddressable) == 152, "Offset mismatch for ULACombatActionsRecorder::bNetAddressable");
static_assert(offsetof(ULACombatActionsRecorder, bAutoActivate) == 154, "Offset mismatch for ULACombatActionsRecorder::bAutoActivate");
static_assert(offsetof(ULACombatActionsRecorder, bIsEditorOnly) == 155, "Offset mismatch for ULACombatActionsRecorder::bIsEditorOnly");
static_assert(offsetof(ULACombatActionsRecorder, CreationMethod) == 185, "Offset mismatch for ULACombatActionsRecorder::CreationMethod");
static_assert(offsetof(ULACombatActionsRecorder, OnComponentActivated) == 186, "Offset mismatch for ULACombatActionsRecorder::OnComponentActivated");
static_assert(offsetof(ULACombatActionsRecorder, OnComponentDeactivated) == 187, "Offset mismatch for ULACombatActionsRecorder::OnComponentDeactivated");

// /Script/LACombatRecordingRuntime.LACombatDistanceWidget
// Kind: Class; super: UserWidget
class ULACombatDistanceWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* DistanceText; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULACombatDistanceWidget, DistanceText) == 776, "Offset mismatch for ULACombatDistanceWidget::DistanceText");

// /Script/LACombatRecordingRuntime.LACombatRecordingBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULACombatRecordingBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LACombatRecordingRuntime.LACombatRecordingCheatManager
// Kind: Class; super: ChildCheatManager
class ULACombatRecordingCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MonitoredControllers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingFightSetupControllers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatRecordingCheatManager, MonitoredControllers) == 40, "Offset mismatch for ULACombatRecordingCheatManager::MonitoredControllers");
static_assert(offsetof(ULACombatRecordingCheatManager, PendingFightSetupControllers) == 56, "Offset mismatch for ULACombatRecordingCheatManager::PendingFightSetupControllers");

// /Script/LACombatRecordingRuntime.LACombatRecordingController
// Kind: Class; super: LearningAgentsController
class ULACombatRecordingController
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t LastMovementInput[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float LastRotationInputPitch; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float LastRotationInputYaw; // 0x006C (Size: 0x4, Type: FloatProperty)
    float CumulativeAimInputPitch; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float CumulativeAimInputYaw; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float AimDeltaRotationPitch; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float AimDeltaRotationYaw; // 0x007C (Size: 0x4, Type: FloatProperty)
    float AngularVelocityInputPitch; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float AngularVelocityInputYaw; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WasCrouched; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WasSliding; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WasReloading; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x008B
    float PreviousPitch; // 0x008C (Size: 0x4, Type: FloatProperty)
    float PreviousYaw; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::int32_t XIndex; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t YIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
    float Speed; // 0x009C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULACombatRecordingController, LastMovementInput) == 80, "Offset mismatch for ULACombatRecordingController::LastMovementInput");
static_assert(offsetof(ULACombatRecordingController, LastRotationInputPitch) == 104, "Offset mismatch for ULACombatRecordingController::LastRotationInputPitch");
static_assert(offsetof(ULACombatRecordingController, LastRotationInputYaw) == 108, "Offset mismatch for ULACombatRecordingController::LastRotationInputYaw");
static_assert(offsetof(ULACombatRecordingController, CumulativeAimInputPitch) == 112, "Offset mismatch for ULACombatRecordingController::CumulativeAimInputPitch");
static_assert(offsetof(ULACombatRecordingController, CumulativeAimInputYaw) == 116, "Offset mismatch for ULACombatRecordingController::CumulativeAimInputYaw");
static_assert(offsetof(ULACombatRecordingController, AimDeltaRotationPitch) == 120, "Offset mismatch for ULACombatRecordingController::AimDeltaRotationPitch");
static_assert(offsetof(ULACombatRecordingController, AimDeltaRotationYaw) == 124, "Offset mismatch for ULACombatRecordingController::AimDeltaRotationYaw");
static_assert(offsetof(ULACombatRecordingController, AngularVelocityInputPitch) == 128, "Offset mismatch for ULACombatRecordingController::AngularVelocityInputPitch");
static_assert(offsetof(ULACombatRecordingController, AngularVelocityInputYaw) == 132, "Offset mismatch for ULACombatRecordingController::AngularVelocityInputYaw");
static_assert(offsetof(ULACombatRecordingController, WasCrouched) == 136, "Offset mismatch for ULACombatRecordingController::WasCrouched");
static_assert(offsetof(ULACombatRecordingController, WasSliding) == 137, "Offset mismatch for ULACombatRecordingController::WasSliding");
static_assert(offsetof(ULACombatRecordingController, WasReloading) == 138, "Offset mismatch for ULACombatRecordingController::WasReloading");
static_assert(offsetof(ULACombatRecordingController, PreviousPitch) == 140, "Offset mismatch for ULACombatRecordingController::PreviousPitch");
static_assert(offsetof(ULACombatRecordingController, PreviousYaw) == 144, "Offset mismatch for ULACombatRecordingController::PreviousYaw");
static_assert(offsetof(ULACombatRecordingController, XIndex) == 148, "Offset mismatch for ULACombatRecordingController::XIndex");
static_assert(offsetof(ULACombatRecordingController, YIndex) == 152, "Offset mismatch for ULACombatRecordingController::YIndex");
static_assert(offsetof(ULACombatRecordingController, Speed) == 156, "Offset mismatch for ULACombatRecordingController::Speed");

// /Script/LACombatRecordingRuntime.LACombatRecordingData
// Kind: Class; super: LearningAgentsRecording
class ULACombatRecordingData
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::int32_t RecordsCount; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t RecordsWithPersonalityCount; // 0x0084 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> MetaReference; // 0x0088 (Size: 0x10, Type: MapProperty)
    std::int32_t PersonalityInsertionIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    TArray<void*> PersonalityMetaDataPerRecord; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersonalityIsAddedPerRecord; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatRecordingData, RecordsCount) == 128, "Offset mismatch for ULACombatRecordingData::RecordsCount");
static_assert(offsetof(ULACombatRecordingData, RecordsWithPersonalityCount) == 132, "Offset mismatch for ULACombatRecordingData::RecordsWithPersonalityCount");
static_assert(offsetof(ULACombatRecordingData, MetaReference) == 136, "Offset mismatch for ULACombatRecordingData::MetaReference");
static_assert(offsetof(ULACombatRecordingData, PersonalityInsertionIndex) == 152, "Offset mismatch for ULACombatRecordingData::PersonalityInsertionIndex");
static_assert(offsetof(ULACombatRecordingData, PersonalityMetaDataPerRecord) == 160, "Offset mismatch for ULACombatRecordingData::PersonalityMetaDataPerRecord");
static_assert(offsetof(ULACombatRecordingData, PersonalityIsAddedPerRecord) == 176, "Offset mismatch for ULACombatRecordingData::PersonalityIsAddedPerRecord");

// /Script/LACombatRecordingRuntime.LACombatRecordingManager
// Kind: Class; super: LearningAgentsManager
class ULACombatRecordingManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t MaxAgentNum; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TArray<void*> Agents; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Listeners; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatRecordingManager, MaxAgentNum) == 192, "Offset mismatch for ULACombatRecordingManager::MaxAgentNum");
static_assert(offsetof(ULACombatRecordingManager, Agents) == 200, "Offset mismatch for ULACombatRecordingManager::Agents");
static_assert(offsetof(ULACombatRecordingManager, Listeners) == 216, "Offset mismatch for ULACombatRecordingManager::Listeners");

// /Script/LACombatRecordingRuntime.LACombatRecordingSettings
// Kind: Class; super: DeveloperSettings
class ULACombatRecordingSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> FightLoadouts; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRandomLoadoutSelection; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULACombatRecordingSettings, FightLoadouts) == 48, "Offset mismatch for ULACombatRecordingSettings::FightLoadouts");
static_assert(offsetof(ULACombatRecordingSettings, bRandomLoadoutSelection) == 64, "Offset mismatch for ULACombatRecordingSettings::bRandomLoadoutSelection");

// /Script/LACombatRecordingRuntime.LACombatReplayRecorder
// Kind: Class; super: LAReplayRecorder
class ULACombatReplayRecorder
{
public:
    std::uint8_t Pad_0000[0x398]; // 0x0000
    std::int32_t SelfRaycastsNum; // 0x0398 (Size: 0x4, Type: IntProperty)
    float SelfRaycastHalfFOV; // 0x039C (Size: 0x4, Type: FloatProperty)
    float SelfRaycastsDistance; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SelfRaycastCollisionChannel; // 0x03A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LOSCollisionChannel; // 0x03A5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x03A6
    float LOSFOVHalf; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxTargets; // 0x03AC (Size: 0x4, Type: IntProperty)
    std::int32_t MaxContainers; // 0x03B0 (Size: 0x4, Type: IntProperty)
    std::int32_t MajorVersion; // 0x03B4 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorVersion; // 0x03B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULACombatReplayRecorder, SelfRaycastsNum) == 920, "Offset mismatch for ULACombatReplayRecorder::SelfRaycastsNum");
static_assert(offsetof(ULACombatReplayRecorder, SelfRaycastHalfFOV) == 924, "Offset mismatch for ULACombatReplayRecorder::SelfRaycastHalfFOV");
static_assert(offsetof(ULACombatReplayRecorder, SelfRaycastsDistance) == 928, "Offset mismatch for ULACombatReplayRecorder::SelfRaycastsDistance");
static_assert(offsetof(ULACombatReplayRecorder, SelfRaycastCollisionChannel) == 932, "Offset mismatch for ULACombatReplayRecorder::SelfRaycastCollisionChannel");
static_assert(offsetof(ULACombatReplayRecorder, LOSCollisionChannel) == 933, "Offset mismatch for ULACombatReplayRecorder::LOSCollisionChannel");
static_assert(offsetof(ULACombatReplayRecorder, LOSFOVHalf) == 936, "Offset mismatch for ULACombatReplayRecorder::LOSFOVHalf");
static_assert(offsetof(ULACombatReplayRecorder, MaxTargets) == 940, "Offset mismatch for ULACombatReplayRecorder::MaxTargets");
static_assert(offsetof(ULACombatReplayRecorder, MaxContainers) == 944, "Offset mismatch for ULACombatReplayRecorder::MaxContainers");
static_assert(offsetof(ULACombatReplayRecorder, MajorVersion) == 948, "Offset mismatch for ULACombatReplayRecorder::MajorVersion");
static_assert(offsetof(ULACombatReplayRecorder, MinorVersion) == 952, "Offset mismatch for ULACombatReplayRecorder::MinorVersion");

// /Script/LACombatRecordingRuntime.LACombatTimerWidget
// Kind: Class; super: UserWidget
class ULACombatTimerWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* TimerText; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULACombatTimerWidget, TimerText) == 776, "Offset mismatch for ULACombatTimerWidget::TimerText");

// /Script/LACombatRecordingRuntime.LAReplay
// Kind: Class; super: DataAsset
class ULAReplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Episodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULAReplay, Episodes) == 40, "Offset mismatch for ULAReplay::Episodes");

// /Script/LACombatRecordingRuntime.LAReplayRecorder
// Kind: Class; super: LearningAgentsManagerListener
class ULAReplayRecorder
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FMulticastInlineDelegate OnRecordingBegin; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRecordingEnd; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Recording; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsRecording; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULAReplayRecorder, OnRecordingBegin) == 72, "Offset mismatch for ULAReplayRecorder::OnRecordingBegin");
static_assert(offsetof(ULAReplayRecorder, OnRecordingEnd) == 88, "Offset mismatch for ULAReplayRecorder::OnRecordingEnd");
static_assert(offsetof(ULAReplayRecorder, Recording) == 104, "Offset mismatch for ULAReplayRecorder::Recording");
static_assert(offsetof(ULAReplayRecorder, bIsRecording) == 112, "Offset mismatch for ULAReplayRecorder::bIsRecording");

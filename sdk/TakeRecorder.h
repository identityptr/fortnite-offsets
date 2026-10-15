/**
 * decamp dumper generated SDK
 * Package: /Script/TakeRecorder
 */
#pragma once
#include "Basic.h"

// /Script/TakeRecorder.TakeRecorderHitchProtectionParameters
// Kind: ScriptStruct; super: none
struct FTakeRecorderHitchProtectionParameters
{
public:
    std::uint8_t bEnableHitchProtection; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RegressionBufferSizeInSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CustomTimestep[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    double MaxCatchupSeconds; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FTakeRecorderHitchProtectionParameters, bEnableHitchProtection) == 0, "Offset mismatch for FTakeRecorderHitchProtectionParameters::bEnableHitchProtection");
static_assert(offsetof(FTakeRecorderHitchProtectionParameters, RegressionBufferSizeInSeconds) == 4, "Offset mismatch for FTakeRecorderHitchProtectionParameters::RegressionBufferSizeInSeconds");
static_assert(offsetof(FTakeRecorderHitchProtectionParameters, CustomTimestep) == 8, "Offset mismatch for FTakeRecorderHitchProtectionParameters::CustomTimestep");
static_assert(offsetof(FTakeRecorderHitchProtectionParameters, MaxCatchupSeconds) == 40, "Offset mismatch for FTakeRecorderHitchProtectionParameters::MaxCatchupSeconds");

// /Script/TakeRecorder.TakeRecorderNamingTokensFieldMapping
// Kind: ScriptStruct; super: none
struct FTakeRecorderNamingTokensFieldMapping
{
public:
    FString FieldName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> UndefinedKeys; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTakeRecorderNamingTokensFieldMapping, FieldName) == 0, "Offset mismatch for FTakeRecorderNamingTokensFieldMapping::FieldName");
static_assert(offsetof(FTakeRecorderNamingTokensFieldMapping, UndefinedKeys) == 16, "Offset mismatch for FTakeRecorderNamingTokensFieldMapping::UndefinedKeys");

// /Script/TakeRecorder.TakeRecorderParameters
// Kind: ScriptStruct; super: none
struct FTakeRecorderParameters
{
public:
    std::uint8_t User[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Project[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    std::uint8_t HitchProtection[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    std::uint8_t TakeRecorderMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00A9
    std::uint8_t StartFrame[0x4]; // 0x00AC (Size: 0x4, Type: StructProperty)
    std::uint8_t bDisableRecordingAndSave; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOpenSequencer; // 0x00B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTakeRecorderParameters, User) == 0, "Offset mismatch for FTakeRecorderParameters::User");
static_assert(offsetof(FTakeRecorderParameters, Project) == 24, "Offset mismatch for FTakeRecorderParameters::Project");
static_assert(offsetof(FTakeRecorderParameters, HitchProtection) == 120, "Offset mismatch for FTakeRecorderParameters::HitchProtection");
static_assert(offsetof(FTakeRecorderParameters, TakeRecorderMode) == 168, "Offset mismatch for FTakeRecorderParameters::TakeRecorderMode");
static_assert(offsetof(FTakeRecorderParameters, StartFrame) == 172, "Offset mismatch for FTakeRecorderParameters::StartFrame");
static_assert(offsetof(FTakeRecorderParameters, bDisableRecordingAndSave) == 176, "Offset mismatch for FTakeRecorderParameters::bDisableRecordingAndSave");
static_assert(offsetof(FTakeRecorderParameters, bOpenSequencer) == 177, "Offset mismatch for FTakeRecorderParameters::bOpenSequencer");

// /Script/TakeRecorder.TakeRecorderProjectParameters
// Kind: ScriptStruct; super: none
struct FTakeRecorderProjectParameters
{
public:
    std::uint8_t RootTakeSaveDir[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString TakeSaveDir; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString SubSequenceDirectory; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString DefaultSlate; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t RecordingClockSource; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bStartAtCurrentTimecode; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecordTimecode; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecordSourcesIntoSubSequences; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecordToPossessable; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SpawnableOverwriteBehavior; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachRecordBehaviour; // 0x0046 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0047
    TArray<void*> DefaultTracks; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowNotifications; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecordWithSimpleSequencerView; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTakeRecorderProjectParameters, RootTakeSaveDir) == 0, "Offset mismatch for FTakeRecorderProjectParameters::RootTakeSaveDir");
static_assert(offsetof(FTakeRecorderProjectParameters, TakeSaveDir) == 16, "Offset mismatch for FTakeRecorderProjectParameters::TakeSaveDir");
static_assert(offsetof(FTakeRecorderProjectParameters, SubSequenceDirectory) == 32, "Offset mismatch for FTakeRecorderProjectParameters::SubSequenceDirectory");
static_assert(offsetof(FTakeRecorderProjectParameters, DefaultSlate) == 48, "Offset mismatch for FTakeRecorderProjectParameters::DefaultSlate");
static_assert(offsetof(FTakeRecorderProjectParameters, RecordingClockSource) == 64, "Offset mismatch for FTakeRecorderProjectParameters::RecordingClockSource");
static_assert(offsetof(FTakeRecorderProjectParameters, bStartAtCurrentTimecode) == 65, "Offset mismatch for FTakeRecorderProjectParameters::bStartAtCurrentTimecode");
static_assert(offsetof(FTakeRecorderProjectParameters, bRecordTimecode) == 66, "Offset mismatch for FTakeRecorderProjectParameters::bRecordTimecode");
static_assert(offsetof(FTakeRecorderProjectParameters, bRecordSourcesIntoSubSequences) == 67, "Offset mismatch for FTakeRecorderProjectParameters::bRecordSourcesIntoSubSequences");
static_assert(offsetof(FTakeRecorderProjectParameters, bRecordToPossessable) == 68, "Offset mismatch for FTakeRecorderProjectParameters::bRecordToPossessable");
static_assert(offsetof(FTakeRecorderProjectParameters, SpawnableOverwriteBehavior) == 69, "Offset mismatch for FTakeRecorderProjectParameters::SpawnableOverwriteBehavior");
static_assert(offsetof(FTakeRecorderProjectParameters, AttachRecordBehaviour) == 70, "Offset mismatch for FTakeRecorderProjectParameters::AttachRecordBehaviour");
static_assert(offsetof(FTakeRecorderProjectParameters, DefaultTracks) == 72, "Offset mismatch for FTakeRecorderProjectParameters::DefaultTracks");
static_assert(offsetof(FTakeRecorderProjectParameters, bShowNotifications) == 88, "Offset mismatch for FTakeRecorderProjectParameters::bShowNotifications");
static_assert(offsetof(FTakeRecorderProjectParameters, bRecordWithSimpleSequencerView) == 89, "Offset mismatch for FTakeRecorderProjectParameters::bRecordWithSimpleSequencerView");

// /Script/TakeRecorder.TakeRecorderSequenceParameters
// Kind: ScriptStruct; super: none
struct FTakeRecorderSequenceParameters
{
public:
    void* BasePreset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BaseSequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* RecordIntoSequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* SequenceToView; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTakeRecorderSequenceParameters, BasePreset) == 0, "Offset mismatch for FTakeRecorderSequenceParameters::BasePreset");
static_assert(offsetof(FTakeRecorderSequenceParameters, BaseSequence) == 8, "Offset mismatch for FTakeRecorderSequenceParameters::BaseSequence");
static_assert(offsetof(FTakeRecorderSequenceParameters, RecordIntoSequence) == 16, "Offset mismatch for FTakeRecorderSequenceParameters::RecordIntoSequence");
static_assert(offsetof(FTakeRecorderSequenceParameters, SequenceToView) == 24, "Offset mismatch for FTakeRecorderSequenceParameters::SequenceToView");

// /Script/TakeRecorder.TakeRecorderUserParameters
// Kind: ScriptStruct; super: none
struct FTakeRecorderUserParameters
{
public:
    std::uint8_t bMaximizeViewport; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float CountdownSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EngineTimeDilation; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetPlayhead; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopAtPlaybackEnd; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopOnRollover; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveRedundantTracks; // 0x000F (Size: 0x1, Type: BoolProperty)
    float ReduceKeysTolerance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSaveRecordedAssets; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoLock; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoSerialize; // 0x0016 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTakeRecorderUserParameters, bMaximizeViewport) == 0, "Offset mismatch for FTakeRecorderUserParameters::bMaximizeViewport");
static_assert(offsetof(FTakeRecorderUserParameters, CountdownSeconds) == 4, "Offset mismatch for FTakeRecorderUserParameters::CountdownSeconds");
static_assert(offsetof(FTakeRecorderUserParameters, EngineTimeDilation) == 8, "Offset mismatch for FTakeRecorderUserParameters::EngineTimeDilation");
static_assert(offsetof(FTakeRecorderUserParameters, bResetPlayhead) == 12, "Offset mismatch for FTakeRecorderUserParameters::bResetPlayhead");
static_assert(offsetof(FTakeRecorderUserParameters, bStopAtPlaybackEnd) == 13, "Offset mismatch for FTakeRecorderUserParameters::bStopAtPlaybackEnd");
static_assert(offsetof(FTakeRecorderUserParameters, bStopOnRollover) == 14, "Offset mismatch for FTakeRecorderUserParameters::bStopOnRollover");
static_assert(offsetof(FTakeRecorderUserParameters, bRemoveRedundantTracks) == 15, "Offset mismatch for FTakeRecorderUserParameters::bRemoveRedundantTracks");
static_assert(offsetof(FTakeRecorderUserParameters, ReduceKeysTolerance) == 16, "Offset mismatch for FTakeRecorderUserParameters::ReduceKeysTolerance");
static_assert(offsetof(FTakeRecorderUserParameters, bSaveRecordedAssets) == 20, "Offset mismatch for FTakeRecorderUserParameters::bSaveRecordedAssets");
static_assert(offsetof(FTakeRecorderUserParameters, bAutoLock) == 21, "Offset mismatch for FTakeRecorderUserParameters::bAutoLock");
static_assert(offsetof(FTakeRecorderUserParameters, bAutoSerialize) == 22, "Offset mismatch for FTakeRecorderUserParameters::bAutoSerialize");

// /Script/TakeRecorder.TakeRecorder
// Kind: Class; super: Object
class UTakeRecorder
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* SequenceAsset; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* OverlayWidget; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakWorld; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Parameters[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakeRecorder, SequenceAsset) == 88, "Offset mismatch for UTakeRecorder::SequenceAsset");
static_assert(offsetof(UTakeRecorder, OverlayWidget) == 96, "Offset mismatch for UTakeRecorder::OverlayWidget");
static_assert(offsetof(UTakeRecorder, WeakWorld) == 104, "Offset mismatch for UTakeRecorder::WeakWorld");
static_assert(offsetof(UTakeRecorder, Parameters) == 112, "Offset mismatch for UTakeRecorder::Parameters");

// /Script/TakeRecorder.TakeRecorderBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTakeRecorderBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeRecorder.TakeRecorderNamingTokensData
// Kind: Class; super: Object
class UTakeRecorderNamingTokensData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> UserDefinedTokens; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0048
    TArray<void*> FieldToUndefinedKeys; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    FText EvaluatedTextValue; // 0x0068 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UTakeRecorderNamingTokensData, UserDefinedTokens) == 56, "Offset mismatch for UTakeRecorderNamingTokensData::UserDefinedTokens");
static_assert(offsetof(UTakeRecorderNamingTokensData, FieldToUndefinedKeys) == 88, "Offset mismatch for UTakeRecorderNamingTokensData::FieldToUndefinedKeys");
static_assert(offsetof(UTakeRecorderNamingTokensData, EvaluatedTextValue) == 104, "Offset mismatch for UTakeRecorderNamingTokensData::EvaluatedTextValue");

// /Script/TakeRecorder.TakeRecorderOverlayWidget
// Kind: Class; super: UserWidget
class UTakeRecorderOverlayWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Recorder; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTakeRecorderOverlayWidget, Recorder) == 776, "Offset mismatch for UTakeRecorderOverlayWidget::Recorder");

// /Script/TakeRecorder.TakeRecorderPanel
// Kind: Class; super: Object
class UTakeRecorderPanel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeRecorder.TakeRecorderProjectSettings
// Kind: Class; super: Object
class UTakeRecorderProjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x60]; // 0x0028 (Size: 0x60, Type: StructProperty)
    std::uint8_t HitchProtectionSettings[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTakeRecorderProjectSettings, Settings) == 40, "Offset mismatch for UTakeRecorderProjectSettings::Settings");
static_assert(offsetof(UTakeRecorderProjectSettings, HitchProtectionSettings) == 136, "Offset mismatch for UTakeRecorderProjectSettings::HitchProtectionSettings");

// /Script/TakeRecorder.TakeRecorderSubsystem
// Kind: Class; super: EngineSubsystem
class UTakeRecorderSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TScriptInterface<void> Implementation; // 0x0038 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0001[0xF0]; // 0x0048
    FMulticastInlineDelegate TakeRecorderPreInitialize; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderInitialized; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderStarted; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderStopped; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderFinished; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderCancelled; // 0x0188 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderMarkedFrameAdded; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderSlateChanged; // 0x01A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderTakeNumberChanged; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderSourceAdded; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderSourceRemoved; // 0x01D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate TakeRecorderSourceModified; // 0x01E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate PendingTakeCleared; // 0x01F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTakeRecorderSubsystem, Implementation) == 56, "Offset mismatch for UTakeRecorderSubsystem::Implementation");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderPreInitialize) == 312, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderPreInitialize");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderInitialized) == 328, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderInitialized");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderStarted) == 344, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderStarted");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderStopped) == 360, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderStopped");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderFinished) == 376, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderFinished");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderCancelled) == 392, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderCancelled");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderMarkedFrameAdded) == 408, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderMarkedFrameAdded");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderSlateChanged) == 424, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderSlateChanged");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderTakeNumberChanged) == 440, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderTakeNumberChanged");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderSourceAdded) == 456, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderSourceAdded");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderSourceRemoved) == 472, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderSourceRemoved");
static_assert(offsetof(UTakeRecorderSubsystem, TakeRecorderSourceModified) == 488, "Offset mismatch for UTakeRecorderSubsystem::TakeRecorderSourceModified");
static_assert(offsetof(UTakeRecorderSubsystem, PendingTakeCleared) == 504, "Offset mismatch for UTakeRecorderSubsystem::PendingTakeCleared");

// /Script/TakeRecorder.TakeRecorderSubsystemImplementation
// Kind: Class; super: Object
class UTakeRecorderSubsystemImplementation
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* TransientPreset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* SuppliedLevelSequence; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* RecordIntoLevelSequence; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* RecordingLevelSequence; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LastRecordedLevelSequence; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    void* TakeMetaData; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* TransientTakeMetaData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* NamingTokensData; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTakeRecorderSubsystemImplementation, TransientPreset) == 96, "Offset mismatch for UTakeRecorderSubsystemImplementation::TransientPreset");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, SuppliedLevelSequence) == 104, "Offset mismatch for UTakeRecorderSubsystemImplementation::SuppliedLevelSequence");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, RecordIntoLevelSequence) == 112, "Offset mismatch for UTakeRecorderSubsystemImplementation::RecordIntoLevelSequence");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, RecordingLevelSequence) == 120, "Offset mismatch for UTakeRecorderSubsystemImplementation::RecordingLevelSequence");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, LastRecordedLevelSequence) == 128, "Offset mismatch for UTakeRecorderSubsystemImplementation::LastRecordedLevelSequence");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, TakeMetaData) == 136, "Offset mismatch for UTakeRecorderSubsystemImplementation::TakeMetaData");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, TransientTakeMetaData) == 144, "Offset mismatch for UTakeRecorderSubsystemImplementation::TransientTakeMetaData");
static_assert(offsetof(UTakeRecorderSubsystemImplementation, NamingTokensData) == 152, "Offset mismatch for UTakeRecorderSubsystemImplementation::NamingTokensData");

// /Script/TakeRecorder.TakeRecorderSubsystemInterface
// Kind: Class; super: Interface
class UTakeRecorderSubsystemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeRecorder.TakeRecorderUserSettings
// Kind: Class; super: Object
class UTakeRecorderUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t PresetSaveDir[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastOpenedPreset[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsSequenceOpen; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUserSettingsOnUI; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTakeRecorderUserSettings, Settings) == 40, "Offset mismatch for UTakeRecorderUserSettings::Settings");
static_assert(offsetof(UTakeRecorderUserSettings, PresetSaveDir) == 64, "Offset mismatch for UTakeRecorderUserSettings::PresetSaveDir");
static_assert(offsetof(UTakeRecorderUserSettings, LastOpenedPreset) == 80, "Offset mismatch for UTakeRecorderUserSettings::LastOpenedPreset");
static_assert(offsetof(UTakeRecorderUserSettings, bIsSequenceOpen) == 112, "Offset mismatch for UTakeRecorderUserSettings::bIsSequenceOpen");
static_assert(offsetof(UTakeRecorderUserSettings, bShowUserSettingsOnUI) == 113, "Offset mismatch for UTakeRecorderUserSettings::bShowUserSettingsOnUI");

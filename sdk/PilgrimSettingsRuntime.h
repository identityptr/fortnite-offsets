/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimSettingsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_AlwaysShowProInstrumentTrackSelection
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_AlwaysShowProInstrumentTrackSelection
{
public:
    std::uint8_t bAlwaysShowProInstrumentTrackSelection; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_AlwaysShowProInstrumentTrackSelection, bAlwaysShowProInstrumentTrackSelection) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_AlwaysShowProInstrumentTrackSelection::bAlwaysShowProInstrumentTrackSelection");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged
{
public:
    std::uint8_t bEnableAutoCalibration; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged, bEnableAutoCalibration) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged::bEnableAutoCalibration");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_EnableMobileExpandedTrackChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_EnableMobileExpandedTrackChanged
{
public:
    std::uint8_t bNewEnableMobileExpandedTrack; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_EnableMobileExpandedTrackChanged, bNewEnableMobileExpandedTrack) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_EnableMobileExpandedTrackChanged::bNewEnableMobileExpandedTrack");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_EnableVibrationForHittingNotes
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_EnableVibrationForHittingNotes
{
public:
    std::uint8_t EnableVibrationForHittingNotes; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_EnableVibrationForHittingNotes, EnableVibrationForHittingNotes) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_EnableVibrationForHittingNotes::EnableVibrationForHittingNotes");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_GameInProgressStatusChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_GameInProgressStatusChanged
{
public:
    std::uint8_t bGameInProgressStatus; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_GameInProgressStatusChanged, bGameInProgressStatus) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_GameInProgressStatusChanged::bGameInProgressStatus");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_GuitarModeChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_GuitarModeChanged
{
public:
    std::uint8_t bGuitarModeEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_GuitarModeChanged, bGuitarModeEnabled) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_GuitarModeChanged::bGuitarModeEnabled");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_MobilePortraitOrientationChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_MobilePortraitOrientationChanged
{
public:
    std::uint8_t IsUsingMobilePortrait; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_MobilePortraitOrientationChanged, IsUsingMobilePortrait) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_MobilePortraitOrientationChanged::IsUsingMobilePortrait");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_MobilePortraitTrackLayoutChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_MobilePortraitTrackLayoutChanged
{
public:
    std::uint8_t bNewMobilePortraitTrackLayout; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_MobilePortraitTrackLayoutChanged, bNewMobilePortraitTrackLayout) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_MobilePortraitTrackLayoutChanged::bNewMobilePortraitTrackLayout");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged
{
public:
    std::uint8_t bNonProTrackInputButtonVisibility; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged, bNonProTrackInputButtonVisibility) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged::bNonProTrackInputButtonVisibility");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled
{
public:
    std::uint8_t bProDrumsCymbalsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CymbalColorEnabled; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled, bProDrumsCymbalsEnabled) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled::bProDrumsCymbalsEnabled");
static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled, CymbalColorEnabled) == 1, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsCymbalsEnabled::CymbalColorEnabled");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsEnableBlueCymbals
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsEnableBlueCymbals
{
public:
    std::uint8_t bProDrumsEnableBlueCymbals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsEnableBlueCymbals, bProDrumsEnableBlueCymbals) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsEnableBlueCymbals::bProDrumsEnableBlueCymbals");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsEnableDoubleKick
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsEnableDoubleKick
{
public:
    std::uint8_t bProDrumsEnableDoubleKick; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsEnableDoubleKick, bProDrumsEnableDoubleKick) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsEnableDoubleKick::bProDrumsEnableDoubleKick");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsEnableGreenCymbals
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsEnableGreenCymbals
{
public:
    std::uint8_t bProDrumsEnableGreenCymbals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsEnableGreenCymbals, bProDrumsEnableGreenCymbals) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsEnableGreenCymbals::bProDrumsEnableGreenCymbals");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsEnableRedCymbals
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsEnableRedCymbals
{
public:
    std::uint8_t bProDrumsEnableRedCymbals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsEnableRedCymbals, bProDrumsEnableRedCymbals) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsEnableRedCymbals::bProDrumsEnableRedCymbals");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProDrumsEnableYellowCymbals
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProDrumsEnableYellowCymbals
{
public:
    std::uint8_t bProDrumsEnableYellowCymbals; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProDrumsEnableYellowCymbals, bProDrumsEnableYellowCymbals) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProDrumsEnableYellowCymbals::bProDrumsEnableYellowCymbals");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged
{
public:
    std::uint8_t bProTrackInputButtonVisibility; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged, bProTrackInputButtonVisibility) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged::bProTrackInputButtonVisibility");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocalsInputDeviceAvailabilityChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceAvailabilityChanged
{
public:
    std::uint8_t bHasAvailableDevices; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceAvailabilityChanged, bHasAvailableDevices) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceAvailabilityChanged::bHasAvailableDevices");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocalsInputDeviceChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceChanged
{
public:
    FString ProVocalsInputDevice; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceChanged, ProVocalsInputDevice) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocalsInputDeviceChanged::ProVocalsInputDevice");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocalsLyricsDisplayModeChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocalsLyricsDisplayModeChanged
{
public:
    std::uint8_t LyricsDisplayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocalsLyricsDisplayModeChanged, LyricsDisplayMode) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocalsLyricsDisplayModeChanged::LyricsDisplayMode");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocalsMicOffsetMsChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocalsMicOffsetMsChanged
{
public:
    float ProVocalsMicOffsetMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocalsMicOffsetMsChanged, ProVocalsMicOffsetMs) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocalsMicOffsetMsChanged::ProVocalsMicOffsetMs");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocalsMicSensitivityChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocalsMicSensitivityChanged
{
public:
    float ProVocalsMicSensitivity; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocalsMicSensitivityChanged, ProVocalsMicSensitivity) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocalsMicSensitivityChanged::ProVocalsMicSensitivity");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged
{
public:
    std::uint8_t VolumeLevel; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* PlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged, VolumeLevel) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged::VolumeLevel");
static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged, PlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocals_LowerVocalTrackVolumeChanged::PlayerState");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ProVocals_VoiceActivatedOverdriveChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ProVocals_VoiceActivatedOverdriveChanged
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ProVocals_VoiceActivatedOverdriveChanged, bEnabled) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ProVocals_VoiceActivatedOverdriveChanged::bEnabled");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ShowDetailedHitFeedbackChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ShowDetailedHitFeedbackChanged
{
public:
    std::uint8_t bShowDetailedHitFeedback; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ShowDetailedHitFeedbackChanged, bShowDetailedHitFeedback) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ShowDetailedHitFeedbackChanged::bShowDetailedHitFeedback");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_ShowStreakCounterChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_ShowStreakCounterChanged
{
public:
    std::uint8_t bShowStreakCounter; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_ShowStreakCounterChanged, bShowStreakCounter) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_ShowStreakCounterChanged::bShowStreakCounter");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_SplitscreenSettingsOpened
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_SplitscreenSettingsOpened
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_SplitscreenSettingsOpened, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_SplitscreenSettingsOpened::PlayerState");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
{
public:
    std::uint8_t bUseAlternative5LaneTouchLayout; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged, bUseAlternative5LaneTouchLayout) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged::bUseAlternative5LaneTouchLayout");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged
{
public:
    std::uint8_t bUseGuitarLeftyFlip; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged, bUseGuitarLeftyFlip) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged::bUseGuitarLeftyFlip");

// /Script/PilgrimSettingsRuntime.PilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged
{
public:
    std::uint8_t bUseProColorsForAllParts; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged, bUseProColorsForAllParts) == 0, "Offset mismatch for FPilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged::bUseProColorsForAllParts");

// /Script/PilgrimSettingsRuntime.PilgrimLaneInputMappingConfig
// Kind: ScriptStruct; super: none
struct FPilgrimLaneInputMappingConfig
{
public:
    void* DefaultPCBeatmatchInputMappingContext; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DefaultConsoleBeatmatchInputMappingContext; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PCBeatmatchInputMappingContexts; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConsoleBeatmatchInputMappingContexts; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimLaneInputMappingConfig, DefaultPCBeatmatchInputMappingContext) == 0, "Offset mismatch for FPilgrimLaneInputMappingConfig::DefaultPCBeatmatchInputMappingContext");
static_assert(offsetof(FPilgrimLaneInputMappingConfig, DefaultConsoleBeatmatchInputMappingContext) == 8, "Offset mismatch for FPilgrimLaneInputMappingConfig::DefaultConsoleBeatmatchInputMappingContext");
static_assert(offsetof(FPilgrimLaneInputMappingConfig, PCBeatmatchInputMappingContexts) == 16, "Offset mismatch for FPilgrimLaneInputMappingConfig::PCBeatmatchInputMappingContexts");
static_assert(offsetof(FPilgrimLaneInputMappingConfig, ConsoleBeatmatchInputMappingContexts) == 32, "Offset mismatch for FPilgrimLaneInputMappingConfig::ConsoleBeatmatchInputMappingContexts");

// /Script/PilgrimSettingsRuntime.PilgrimMIDIInputConfig
// Kind: ScriptStruct; super: none
struct FPilgrimMIDIInputConfig
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Mappings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimMIDIInputConfig, Name) == 0, "Offset mismatch for FPilgrimMIDIInputConfig::Name");
static_assert(offsetof(FPilgrimMIDIInputConfig, Mappings) == 8, "Offset mismatch for FPilgrimMIDIInputConfig::Mappings");

// /Script/PilgrimSettingsRuntime.PilgrimClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UPilgrimClientSettingRecordPartition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float TrackSpeedMultiplier; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float TrackBackgroundOpacity; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseAlternative5LaneTouchLayout; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseMobileExpandedTrack; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MobileGameplayOrientationMode; // 0x004A (Size: 0x1, Type: EnumProperty)
    std::uint8_t MobilePortraitTrackLayout; // 0x004B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseGuitarLeftyFlip; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableGuitarMode; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseProColorsForAllParts; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDetailedHitFeedback; // 0x004F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysShowProInstrumentTrackSelection; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNonProTrackInputButtonVisibility; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProTrackInputButtonVisibility; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutoCalibration; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableVibrationForHittingNotes; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowLiftNoteConnectors; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStreakCounter; // 0x0056 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutoEmoteDuringResults; // 0x0057 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bProDrumsEnableRedCymbals; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableGreenCymbals; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableYellowCymbals; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableBlueCymbals; // 0x005B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableDoubleKick; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableProDrumsSettings; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    FString ProVocalsInputDevice; // 0x0060 (Size: 0x10, Type: StrProperty)
    float ProVocalsMicOffsetMs; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float ProVocalsMicSensitivity; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasExplicitlySetMicSensitivity; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableVoiceActivatedOverdrive; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ProVocalsVocalTrackVolume; // 0x007A (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultProVocalsVocalTrackVolume; // 0x007B (Size: 0x1, Type: EnumProperty)
    std::uint8_t ProVocalsLyricsDisplayMode; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasAvailableAudioInputDevices; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x007E
    FString SelectedMidiDeviceName; // 0x0080 (Size: 0x10, Type: StrProperty)
    TArray<void*> MidiInputConfig; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::int32_t KeyboardAndMouseGeneralPresetIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t KeyboardAndMouseExpertPresetIndex; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t ControllerGeneralPresetIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t ControllerExpertPresetIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
    void* PilgrimPresetConfiguration; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    FString SelectedGeneralControllerPreset; // 0x00B8 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> SelectedControllerPresetIndices; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SelectedKeyboardAndMousePresetIndices; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimClientSettingRecordPartition, TrackSpeedMultiplier) == 64, "Offset mismatch for UPilgrimClientSettingRecordPartition::TrackSpeedMultiplier");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, TrackBackgroundOpacity) == 68, "Offset mismatch for UPilgrimClientSettingRecordPartition::TrackBackgroundOpacity");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, UseAlternative5LaneTouchLayout) == 72, "Offset mismatch for UPilgrimClientSettingRecordPartition::UseAlternative5LaneTouchLayout");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, UseMobileExpandedTrack) == 73, "Offset mismatch for UPilgrimClientSettingRecordPartition::UseMobileExpandedTrack");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, MobileGameplayOrientationMode) == 74, "Offset mismatch for UPilgrimClientSettingRecordPartition::MobileGameplayOrientationMode");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, MobilePortraitTrackLayout) == 75, "Offset mismatch for UPilgrimClientSettingRecordPartition::MobilePortraitTrackLayout");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bUseGuitarLeftyFlip) == 76, "Offset mismatch for UPilgrimClientSettingRecordPartition::bUseGuitarLeftyFlip");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bEnableGuitarMode) == 77, "Offset mismatch for UPilgrimClientSettingRecordPartition::bEnableGuitarMode");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bUseProColorsForAllParts) == 78, "Offset mismatch for UPilgrimClientSettingRecordPartition::bUseProColorsForAllParts");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bShowDetailedHitFeedback) == 79, "Offset mismatch for UPilgrimClientSettingRecordPartition::bShowDetailedHitFeedback");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bAlwaysShowProInstrumentTrackSelection) == 80, "Offset mismatch for UPilgrimClientSettingRecordPartition::bAlwaysShowProInstrumentTrackSelection");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bNonProTrackInputButtonVisibility) == 81, "Offset mismatch for UPilgrimClientSettingRecordPartition::bNonProTrackInputButtonVisibility");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProTrackInputButtonVisibility) == 82, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProTrackInputButtonVisibility");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bEnableAutoCalibration) == 83, "Offset mismatch for UPilgrimClientSettingRecordPartition::bEnableAutoCalibration");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bEnableVibrationForHittingNotes) == 84, "Offset mismatch for UPilgrimClientSettingRecordPartition::bEnableVibrationForHittingNotes");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bShowLiftNoteConnectors) == 85, "Offset mismatch for UPilgrimClientSettingRecordPartition::bShowLiftNoteConnectors");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bShowStreakCounter) == 86, "Offset mismatch for UPilgrimClientSettingRecordPartition::bShowStreakCounter");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, AutoEmoteDuringResults) == 87, "Offset mismatch for UPilgrimClientSettingRecordPartition::AutoEmoteDuringResults");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProDrumsEnableRedCymbals) == 88, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProDrumsEnableRedCymbals");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProDrumsEnableGreenCymbals) == 89, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProDrumsEnableGreenCymbals");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProDrumsEnableYellowCymbals) == 90, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProDrumsEnableYellowCymbals");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProDrumsEnableBlueCymbals) == 91, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProDrumsEnableBlueCymbals");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bProDrumsEnableDoubleKick) == 92, "Offset mismatch for UPilgrimClientSettingRecordPartition::bProDrumsEnableDoubleKick");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bDisableProDrumsSettings) == 93, "Offset mismatch for UPilgrimClientSettingRecordPartition::bDisableProDrumsSettings");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ProVocalsInputDevice) == 96, "Offset mismatch for UPilgrimClientSettingRecordPartition::ProVocalsInputDevice");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ProVocalsMicOffsetMs) == 112, "Offset mismatch for UPilgrimClientSettingRecordPartition::ProVocalsMicOffsetMs");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ProVocalsMicSensitivity) == 116, "Offset mismatch for UPilgrimClientSettingRecordPartition::ProVocalsMicSensitivity");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bHasExplicitlySetMicSensitivity) == 120, "Offset mismatch for UPilgrimClientSettingRecordPartition::bHasExplicitlySetMicSensitivity");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bEnableVoiceActivatedOverdrive) == 121, "Offset mismatch for UPilgrimClientSettingRecordPartition::bEnableVoiceActivatedOverdrive");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ProVocalsVocalTrackVolume) == 122, "Offset mismatch for UPilgrimClientSettingRecordPartition::ProVocalsVocalTrackVolume");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, DefaultProVocalsVocalTrackVolume) == 123, "Offset mismatch for UPilgrimClientSettingRecordPartition::DefaultProVocalsVocalTrackVolume");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ProVocalsLyricsDisplayMode) == 124, "Offset mismatch for UPilgrimClientSettingRecordPartition::ProVocalsLyricsDisplayMode");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, bHasAvailableAudioInputDevices) == 125, "Offset mismatch for UPilgrimClientSettingRecordPartition::bHasAvailableAudioInputDevices");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, SelectedMidiDeviceName) == 128, "Offset mismatch for UPilgrimClientSettingRecordPartition::SelectedMidiDeviceName");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, MidiInputConfig) == 144, "Offset mismatch for UPilgrimClientSettingRecordPartition::MidiInputConfig");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, KeyboardAndMouseGeneralPresetIndex) == 160, "Offset mismatch for UPilgrimClientSettingRecordPartition::KeyboardAndMouseGeneralPresetIndex");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, KeyboardAndMouseExpertPresetIndex) == 164, "Offset mismatch for UPilgrimClientSettingRecordPartition::KeyboardAndMouseExpertPresetIndex");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ControllerGeneralPresetIndex) == 168, "Offset mismatch for UPilgrimClientSettingRecordPartition::ControllerGeneralPresetIndex");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, ControllerExpertPresetIndex) == 172, "Offset mismatch for UPilgrimClientSettingRecordPartition::ControllerExpertPresetIndex");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, PilgrimPresetConfiguration) == 176, "Offset mismatch for UPilgrimClientSettingRecordPartition::PilgrimPresetConfiguration");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, SelectedGeneralControllerPreset) == 184, "Offset mismatch for UPilgrimClientSettingRecordPartition::SelectedGeneralControllerPreset");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, SelectedControllerPresetIndices) == 200, "Offset mismatch for UPilgrimClientSettingRecordPartition::SelectedControllerPresetIndices");
static_assert(offsetof(UPilgrimClientSettingRecordPartition, SelectedKeyboardAndMousePresetIndices) == 216, "Offset mismatch for UPilgrimClientSettingRecordPartition::SelectedKeyboardAndMousePresetIndices");

// /Script/PilgrimSettingsRuntime.PilgrimPartitionInitializer
// Kind: Class; super: FortClientSettingRecordPartitionInitializer
class UPilgrimPartitionInitializer
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t PilgrimPresetSelectorClass[0x20]; // 0x0090 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> PilgrimPresetConfiguration; // 0x00B0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPilgrimPartitionInitializer, PilgrimPresetSelectorClass) == 144, "Offset mismatch for UPilgrimPartitionInitializer::PilgrimPresetSelectorClass");
static_assert(offsetof(UPilgrimPartitionInitializer, PilgrimPresetConfiguration) == 176, "Offset mismatch for UPilgrimPartitionInitializer::PilgrimPresetConfiguration");

// /Script/PilgrimSettingsRuntime.PilgrimPresetConfiguration
// Kind: Class; super: DataAsset
class UPilgrimPresetConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GlobalInputMappingContext; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* CheatInputMappingContext; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* GreenRoomInputMappingContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* GreenRoomAltInputMappingContext; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> LaneInputMappingConfigs; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimPresetConfiguration, GlobalInputMappingContext) == 40, "Offset mismatch for UPilgrimPresetConfiguration::GlobalInputMappingContext");
static_assert(offsetof(UPilgrimPresetConfiguration, CheatInputMappingContext) == 48, "Offset mismatch for UPilgrimPresetConfiguration::CheatInputMappingContext");
static_assert(offsetof(UPilgrimPresetConfiguration, GreenRoomInputMappingContext) == 56, "Offset mismatch for UPilgrimPresetConfiguration::GreenRoomInputMappingContext");
static_assert(offsetof(UPilgrimPresetConfiguration, GreenRoomAltInputMappingContext) == 64, "Offset mismatch for UPilgrimPresetConfiguration::GreenRoomAltInputMappingContext");
static_assert(offsetof(UPilgrimPresetConfiguration, LaneInputMappingConfigs) == 72, "Offset mismatch for UPilgrimPresetConfiguration::LaneInputMappingConfigs");

// /Script/PilgrimSettingsRuntime.PilgrimPresetSelectorBase
// Kind: Class; super: Object
class UPilgrimPresetSelectorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimSettingsRuntime.PilgrimSettingsControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimSettingsControllerComponent
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

static_assert(offsetof(UPilgrimSettingsControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimSettingsControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimSettingsControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimSettingsControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimSettingsControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimSettingsControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimSettingsControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimSettingsControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimSettingsControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimSettingsControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimSettingsControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimSettingsControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimSettingsControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimSettingsControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimSettingsControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimSettingsControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimSettingsControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimSettingsControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimSettingsControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimSettingsControllerComponent::OnComponentDeactivated");

// /Script/PilgrimSettingsRuntime.PilgrimSettingsDataAsset
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UPilgrimSettingsDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InstrumentNamesTable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> InstrumentNames; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimSettingsDataAsset, InstrumentNamesTable) == 40, "Offset mismatch for UPilgrimSettingsDataAsset::InstrumentNamesTable");
static_assert(offsetof(UPilgrimSettingsDataAsset, InstrumentNames) == 48, "Offset mismatch for UPilgrimSettingsDataAsset::InstrumentNames");

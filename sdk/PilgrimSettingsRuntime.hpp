#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimSettingsRuntime
{
    struct PilgrimClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "PilgrimClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackSpeedMultiplier = 0x40;
            static constexpr std::uintptr_t TrackBackgroundOpacity = 0x44;
            static constexpr std::uintptr_t UseAlternative5LaneTouchLayout = 0x48;
            static constexpr std::uintptr_t UseMobileExpandedTrack = 0x49;
            static constexpr std::uintptr_t MobileGameplayOrientationMode = 0x4A;
            static constexpr std::uintptr_t MobilePortraitTrackLayout = 0x4B;
            static constexpr std::uintptr_t bUseGuitarLeftyFlip = 0x4C;
            static constexpr std::uintptr_t bEnableGuitarMode = 0x4D;
            static constexpr std::uintptr_t bUseProColorsForAllParts = 0x4E;
            static constexpr std::uintptr_t bShowDetailedHitFeedback = 0x4F;
            static constexpr std::uintptr_t bAlwaysShowProInstrumentTrackSelection = 0x50;
            static constexpr std::uintptr_t bNonProTrackInputButtonVisibility = 0x51;
            static constexpr std::uintptr_t bProTrackInputButtonVisibility = 0x52;
            static constexpr std::uintptr_t bEnableAutoCalibration = 0x53;
            static constexpr std::uintptr_t bEnableVibrationForHittingNotes = 0x54;
            static constexpr std::uintptr_t bShowLiftNoteConnectors = 0x55;
            static constexpr std::uintptr_t bShowStreakCounter = 0x56;
            static constexpr std::uintptr_t AutoEmoteDuringResults = 0x57;
            static constexpr std::uintptr_t bProDrumsEnableRedCymbals = 0x58;
            static constexpr std::uintptr_t bProDrumsEnableGreenCymbals = 0x59;
            static constexpr std::uintptr_t bProDrumsEnableYellowCymbals = 0x5A;
            static constexpr std::uintptr_t bProDrumsEnableBlueCymbals = 0x5B;
            static constexpr std::uintptr_t bProDrumsEnableDoubleKick = 0x5C;
            static constexpr std::uintptr_t bDisableProDrumsSettings = 0x5D;
            static constexpr std::uintptr_t ProVocalsInputDevice = 0x60;
            static constexpr std::uintptr_t ProVocalsMicOffsetMs = 0x70;
            static constexpr std::uintptr_t ProVocalsMicSensitivity = 0x74;
            static constexpr std::uintptr_t bHasExplicitlySetMicSensitivity = 0x78;
            static constexpr std::uintptr_t bEnableVoiceActivatedOverdrive = 0x79;
            static constexpr std::uintptr_t ProVocalsVocalTrackVolume = 0x7A;
            static constexpr std::uintptr_t DefaultProVocalsVocalTrackVolume = 0x7B;
            static constexpr std::uintptr_t ProVocalsLyricsDisplayMode = 0x7C;
            static constexpr std::uintptr_t bHasAvailableAudioInputDevices = 0x7D;
            static constexpr std::uintptr_t SelectedMidiDeviceName = 0x80;
            static constexpr std::uintptr_t MidiInputConfig = 0x90;
            static constexpr std::uintptr_t KeyboardAndMouseGeneralPresetIndex = 0xA0;
            static constexpr std::uintptr_t KeyboardAndMouseExpertPresetIndex = 0xA4;
            static constexpr std::uintptr_t ControllerGeneralPresetIndex = 0xA8;
            static constexpr std::uintptr_t ControllerExpertPresetIndex = 0xAC;
            static constexpr std::uintptr_t PilgrimPresetConfiguration = 0xB0;
            static constexpr std::uintptr_t SelectedGeneralControllerPreset = 0xB8;
            static constexpr std::uintptr_t SelectedControllerPresetIndices = 0xC8;
            static constexpr std::uintptr_t SelectedKeyboardAndMousePresetIndices = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"TrackSpeedMultiplier", 0x40, "FloatProperty"},
            {"TrackBackgroundOpacity", 0x44, "FloatProperty"},
            {"UseAlternative5LaneTouchLayout", 0x48, "BoolProperty"},
            {"UseMobileExpandedTrack", 0x49, "BoolProperty"},
            {"MobileGameplayOrientationMode", 0x4A, "EnumProperty"},
            {"MobilePortraitTrackLayout", 0x4B, "EnumProperty"},
            {"bUseGuitarLeftyFlip", 0x4C, "BoolProperty"},
            {"bEnableGuitarMode", 0x4D, "BoolProperty"},
            {"bUseProColorsForAllParts", 0x4E, "BoolProperty"},
            {"bShowDetailedHitFeedback", 0x4F, "BoolProperty"},
            {"bAlwaysShowProInstrumentTrackSelection", 0x50, "BoolProperty"},
            {"bNonProTrackInputButtonVisibility", 0x51, "BoolProperty"},
            {"bProTrackInputButtonVisibility", 0x52, "BoolProperty"},
            {"bEnableAutoCalibration", 0x53, "BoolProperty"},
            {"bEnableVibrationForHittingNotes", 0x54, "BoolProperty"},
            {"bShowLiftNoteConnectors", 0x55, "BoolProperty"},
            {"bShowStreakCounter", 0x56, "BoolProperty"},
            {"AutoEmoteDuringResults", 0x57, "EnumProperty"},
            {"bProDrumsEnableRedCymbals", 0x58, "BoolProperty"},
            {"bProDrumsEnableGreenCymbals", 0x59, "BoolProperty"},
            {"bProDrumsEnableYellowCymbals", 0x5A, "BoolProperty"},
            {"bProDrumsEnableBlueCymbals", 0x5B, "BoolProperty"},
            {"bProDrumsEnableDoubleKick", 0x5C, "BoolProperty"},
            {"bDisableProDrumsSettings", 0x5D, "BoolProperty"},
            {"ProVocalsInputDevice", 0x60, "StrProperty"},
            {"ProVocalsMicOffsetMs", 0x70, "FloatProperty"},
            {"ProVocalsMicSensitivity", 0x74, "FloatProperty"},
            {"bHasExplicitlySetMicSensitivity", 0x78, "BoolProperty"},
            {"bEnableVoiceActivatedOverdrive", 0x79, "BoolProperty"},
            {"ProVocalsVocalTrackVolume", 0x7A, "EnumProperty"},
            {"DefaultProVocalsVocalTrackVolume", 0x7B, "EnumProperty"},
            {"ProVocalsLyricsDisplayMode", 0x7C, "EnumProperty"},
            {"bHasAvailableAudioInputDevices", 0x7D, "BoolProperty"},
            {"SelectedMidiDeviceName", 0x80, "StrProperty"},
            {"MidiInputConfig", 0x90, "ArrayProperty"},
            {"KeyboardAndMouseGeneralPresetIndex", 0xA0, "IntProperty"},
            {"KeyboardAndMouseExpertPresetIndex", 0xA4, "IntProperty"},
            {"ControllerGeneralPresetIndex", 0xA8, "IntProperty"},
            {"ControllerExpertPresetIndex", 0xAC, "IntProperty"},
            {"PilgrimPresetConfiguration", 0xB0, "ObjectProperty"},
            {"SelectedGeneralControllerPreset", 0xB8, "StrProperty"},
            {"SelectedControllerPresetIndices", 0xC8, "MapProperty"},
            {"SelectedKeyboardAndMousePresetIndices", 0xD8, "MapProperty"},
        }};
    };

    struct PilgrimPartitionInitializer
    {
        static constexpr std::string_view Name = "PilgrimPartitionInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartitionInitializer";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimPresetSelectorClass = 0x90;
            static constexpr std::uintptr_t PilgrimPresetConfiguration = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PilgrimPresetSelectorClass", 0x90, "SoftClassProperty"},
            {"PilgrimPresetConfiguration", 0xB0, "SoftObjectProperty"},
        }};
    };

    struct PilgrimPresetConfiguration
    {
        static constexpr std::string_view Name = "PilgrimPresetConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalInputMappingContext = 0x28;
            static constexpr std::uintptr_t CheatInputMappingContext = 0x30;
            static constexpr std::uintptr_t GreenRoomInputMappingContext = 0x38;
            static constexpr std::uintptr_t GreenRoomAltInputMappingContext = 0x40;
            static constexpr std::uintptr_t LaneInputMappingConfigs = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GlobalInputMappingContext", 0x28, "ObjectProperty"},
            {"CheatInputMappingContext", 0x30, "ObjectProperty"},
            {"GreenRoomInputMappingContext", 0x38, "ObjectProperty"},
            {"GreenRoomAltInputMappingContext", 0x40, "ObjectProperty"},
            {"LaneInputMappingConfigs", 0x48, "MapProperty"},
        }};
    };

    struct PilgrimPresetSelectorBase
    {
        static constexpr std::string_view Name = "PilgrimPresetSelectorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSettingsControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimSettingsControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PilgrimSettingsDataAsset
    {
        static constexpr std::string_view Name = "PilgrimSettingsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentNamesTable = 0x28;
            static constexpr std::uintptr_t InstrumentNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstrumentNamesTable", 0x28, "ObjectProperty"},
            {"InstrumentNames", 0x30, "MapProperty"},
        }};
    };

}

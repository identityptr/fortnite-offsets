/**
 * decamp dumper generated SDK
 * Package: /Script/FMCalibrationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMCalibrationRuntime.FMCalibrationProfileData
// Kind: ScriptStruct; super: none
struct FFMCalibrationProfileData
{
public:
    float InputLatencyMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InputLatencySource; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float AudioVideoOffsetMs; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AudioVideoOffsetSource; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFMCalibrationProfileData, InputLatencyMs) == 0, "Offset mismatch for FFMCalibrationProfileData::InputLatencyMs");
static_assert(offsetof(FFMCalibrationProfileData, InputLatencySource) == 4, "Offset mismatch for FFMCalibrationProfileData::InputLatencySource");
static_assert(offsetof(FFMCalibrationProfileData, AudioVideoOffsetMs) == 8, "Offset mismatch for FFMCalibrationProfileData::AudioVideoOffsetMs");
static_assert(offsetof(FFMCalibrationProfileData, AudioVideoOffsetSource) == 12, "Offset mismatch for FFMCalibrationProfileData::AudioVideoOffsetSource");

// /Script/FMCalibrationRuntime.FMEvent_Calibration_ForceClose
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ForceClose
{
public:
    std::uint8_t isClosed; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFMEvent_Calibration_ForceClose, isClosed) == 0, "Offset mismatch for FFMEvent_Calibration_ForceClose::isClosed");

// /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalCloseToQuest
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ModalCloseToQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalClosed
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ModalClosed
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalOpened
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ModalOpened
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCalibrationRuntime.FMEvent_Calibration_ModalSkipped
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ModalSkipped
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCalibrationRuntime.FMEvent_Calibration_ToggleModal
// Kind: ScriptStruct; super: none
struct FFMEvent_Calibration_ToggleModal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMCalibrationRuntime.FMCalibrationControllerComponent
// Kind: Class; super: ControllerComponent
class UFMCalibrationControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnCalibrationDataLoaded; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCalibrationDataSaved; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnIsCalibrationDebugEnabled; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCalibrometerEnabledChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCalibrationRequestOpenModal; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCalibrationRegisterPreamble; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0120
    void* CalibrationSaveData; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMCalibrationControllerComponent, OnCalibrationDataLoaded) == 192, "Offset mismatch for UFMCalibrationControllerComponent::OnCalibrationDataLoaded");
static_assert(offsetof(UFMCalibrationControllerComponent, OnCalibrationDataSaved) == 208, "Offset mismatch for UFMCalibrationControllerComponent::OnCalibrationDataSaved");
static_assert(offsetof(UFMCalibrationControllerComponent, OnIsCalibrationDebugEnabled) == 224, "Offset mismatch for UFMCalibrationControllerComponent::OnIsCalibrationDebugEnabled");
static_assert(offsetof(UFMCalibrationControllerComponent, OnCalibrometerEnabledChanged) == 240, "Offset mismatch for UFMCalibrationControllerComponent::OnCalibrometerEnabledChanged");
static_assert(offsetof(UFMCalibrationControllerComponent, OnCalibrationRequestOpenModal) == 256, "Offset mismatch for UFMCalibrationControllerComponent::OnCalibrationRequestOpenModal");
static_assert(offsetof(UFMCalibrationControllerComponent, OnCalibrationRegisterPreamble) == 272, "Offset mismatch for UFMCalibrationControllerComponent::OnCalibrationRegisterPreamble");
static_assert(offsetof(UFMCalibrationControllerComponent, CalibrationSaveData) == 336, "Offset mismatch for UFMCalibrationControllerComponent::CalibrationSaveData");

// /Script/FMCalibrationRuntime.FMCalibrationSaveData
// Kind: Class; super: Object
class UFMCalibrationSaveData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CalibrationProfileIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    float AudioLatencyMs; // 0x002C (Size: 0x4, Type: FloatProperty)
    float VideoLatencyMs; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsCalibrated; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::int32_t SaveVersion; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t FormatVersion; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasBeenOfferedCalibration; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    TArray<void*> CalibrationProfiles; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMCalibrationSaveData, CalibrationProfileIndex) == 40, "Offset mismatch for UFMCalibrationSaveData::CalibrationProfileIndex");
static_assert(offsetof(UFMCalibrationSaveData, AudioLatencyMs) == 44, "Offset mismatch for UFMCalibrationSaveData::AudioLatencyMs");
static_assert(offsetof(UFMCalibrationSaveData, VideoLatencyMs) == 48, "Offset mismatch for UFMCalibrationSaveData::VideoLatencyMs");
static_assert(offsetof(UFMCalibrationSaveData, IsCalibrated) == 52, "Offset mismatch for UFMCalibrationSaveData::IsCalibrated");
static_assert(offsetof(UFMCalibrationSaveData, SaveVersion) == 56, "Offset mismatch for UFMCalibrationSaveData::SaveVersion");
static_assert(offsetof(UFMCalibrationSaveData, FormatVersion) == 60, "Offset mismatch for UFMCalibrationSaveData::FormatVersion");
static_assert(offsetof(UFMCalibrationSaveData, bHasBeenOfferedCalibration) == 64, "Offset mismatch for UFMCalibrationSaveData::bHasBeenOfferedCalibration");
static_assert(offsetof(UFMCalibrationSaveData, CalibrationProfiles) == 72, "Offset mismatch for UFMCalibrationSaveData::CalibrationProfiles");

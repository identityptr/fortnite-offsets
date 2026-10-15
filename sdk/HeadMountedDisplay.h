/**
 * decamp dumper generated SDK
 * Package: /Script/HeadMountedDisplay
 */
#pragma once
#include "Basic.h"

// /Script/HeadMountedDisplay.XRDeviceId
// Kind: ScriptStruct; super: none
struct FXRDeviceId
{
public:
    std::uint8_t SystemName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t DeviceID; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FXRDeviceId, SystemName) == 0, "Offset mismatch for FXRDeviceId::SystemName");
static_assert(offsetof(FXRDeviceId, DeviceID) == 4, "Offset mismatch for FXRDeviceId::DeviceID");

// /Script/HeadMountedDisplay.XRHMDData
// Kind: ScriptStruct; super: none
struct FXRHMDData
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t DeviceName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ApplicationInstanceID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t TrackingStatus; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t Position[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FXRHMDData, bValid) == 0, "Offset mismatch for FXRHMDData::bValid");
static_assert(offsetof(FXRHMDData, DeviceName) == 4, "Offset mismatch for FXRHMDData::DeviceName");
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 8, "Offset mismatch for FXRHMDData::ApplicationInstanceID");
static_assert(offsetof(FXRHMDData, TrackingStatus) == 24, "Offset mismatch for FXRHMDData::TrackingStatus");
static_assert(offsetof(FXRHMDData, Position) == 32, "Offset mismatch for FXRHMDData::Position");
static_assert(offsetof(FXRHMDData, Rotation) == 64, "Offset mismatch for FXRHMDData::Rotation");

// /Script/HeadMountedDisplay.XRHandTrackingState
// Kind: ScriptStruct; super: none
struct FXRHandTrackingState
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t DeviceName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ApplicationInstanceID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t XRSpaceType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Hand; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackingStatus; // 0x001A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x001B
    TArray<void*> HandKeyLocations; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandKeyRotations; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandKeyRadii; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FXRHandTrackingState, bValid) == 0, "Offset mismatch for FXRHandTrackingState::bValid");
static_assert(offsetof(FXRHandTrackingState, DeviceName) == 4, "Offset mismatch for FXRHandTrackingState::DeviceName");
static_assert(offsetof(FXRHandTrackingState, ApplicationInstanceID) == 8, "Offset mismatch for FXRHandTrackingState::ApplicationInstanceID");
static_assert(offsetof(FXRHandTrackingState, XRSpaceType) == 24, "Offset mismatch for FXRHandTrackingState::XRSpaceType");
static_assert(offsetof(FXRHandTrackingState, Hand) == 25, "Offset mismatch for FXRHandTrackingState::Hand");
static_assert(offsetof(FXRHandTrackingState, TrackingStatus) == 26, "Offset mismatch for FXRHandTrackingState::TrackingStatus");
static_assert(offsetof(FXRHandTrackingState, HandKeyLocations) == 32, "Offset mismatch for FXRHandTrackingState::HandKeyLocations");
static_assert(offsetof(FXRHandTrackingState, HandKeyRotations) == 48, "Offset mismatch for FXRHandTrackingState::HandKeyRotations");
static_assert(offsetof(FXRHandTrackingState, HandKeyRadii) == 64, "Offset mismatch for FXRHandTrackingState::HandKeyRadii");

// /Script/HeadMountedDisplay.XRMotionControllerState
// Kind: ScriptStruct; super: none
struct FXRMotionControllerState
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t DeviceName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ApplicationInstanceID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t XRSpaceType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Hand; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackingStatus; // 0x001A (Size: 0x1, Type: EnumProperty)
    std::uint8_t XRControllerPoseType; // 0x001B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t ControllerLocation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ControllerRotation[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t GripUnrealSpaceLocation[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t GripUnrealSpaceRotation[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FXRMotionControllerState, bValid) == 0, "Offset mismatch for FXRMotionControllerState::bValid");
static_assert(offsetof(FXRMotionControllerState, DeviceName) == 4, "Offset mismatch for FXRMotionControllerState::DeviceName");
static_assert(offsetof(FXRMotionControllerState, ApplicationInstanceID) == 8, "Offset mismatch for FXRMotionControllerState::ApplicationInstanceID");
static_assert(offsetof(FXRMotionControllerState, XRSpaceType) == 24, "Offset mismatch for FXRMotionControllerState::XRSpaceType");
static_assert(offsetof(FXRMotionControllerState, Hand) == 25, "Offset mismatch for FXRMotionControllerState::Hand");
static_assert(offsetof(FXRMotionControllerState, TrackingStatus) == 26, "Offset mismatch for FXRMotionControllerState::TrackingStatus");
static_assert(offsetof(FXRMotionControllerState, XRControllerPoseType) == 27, "Offset mismatch for FXRMotionControllerState::XRControllerPoseType");
static_assert(offsetof(FXRMotionControllerState, ControllerLocation) == 32, "Offset mismatch for FXRMotionControllerState::ControllerLocation");
static_assert(offsetof(FXRMotionControllerState, ControllerRotation) == 64, "Offset mismatch for FXRMotionControllerState::ControllerRotation");
static_assert(offsetof(FXRMotionControllerState, GripUnrealSpaceLocation) == 96, "Offset mismatch for FXRMotionControllerState::GripUnrealSpaceLocation");
static_assert(offsetof(FXRMotionControllerState, GripUnrealSpaceRotation) == 128, "Offset mismatch for FXRMotionControllerState::GripUnrealSpaceRotation");

// /Script/HeadMountedDisplay.HandKeypointConversion
// Kind: Class; super: BlueprintFunctionLibrary
class UHandKeypointConversion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HeadMountedDisplay.MotionControllerComponent
// Kind: Class; super: PrimitiveComponent
class UMotionControllerComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::int32_t PlayerIndex; // 0x0570 (Size: 0x4, Type: IntProperty)
    std::uint8_t MotionSource[0x4]; // 0x0574 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDisableLowLatencyUpdate; // 0x0578 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0579
    std::uint8_t CurrentTrackingStatus; // 0x057C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMotionControllerComponent, PlayerIndex) == 1392, "Offset mismatch for UMotionControllerComponent::PlayerIndex");
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 1396, "Offset mismatch for UMotionControllerComponent::MotionSource");
static_assert(offsetof(UMotionControllerComponent, bDisableLowLatencyUpdate) == 1400, "Offset mismatch for UMotionControllerComponent::bDisableLowLatencyUpdate");
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 1404, "Offset mismatch for UMotionControllerComponent::CurrentTrackingStatus");

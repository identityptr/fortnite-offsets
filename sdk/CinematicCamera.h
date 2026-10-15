/**
 * decamp dumper generated SDK
 * Package: /Script/CinematicCamera
 */
#pragma once
#include "Basic.h"

// /Script/CinematicCamera.CameraFilmbackSettings
// Kind: ScriptStruct; super: none
struct FCameraFilmbackSettings
{
public:
    float SensorWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SensorHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SensorHorizontalOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SensorVerticalOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SensorAspectRatio; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraFilmbackSettings, SensorWidth) == 0, "Offset mismatch for FCameraFilmbackSettings::SensorWidth");
static_assert(offsetof(FCameraFilmbackSettings, SensorHeight) == 4, "Offset mismatch for FCameraFilmbackSettings::SensorHeight");
static_assert(offsetof(FCameraFilmbackSettings, SensorHorizontalOffset) == 8, "Offset mismatch for FCameraFilmbackSettings::SensorHorizontalOffset");
static_assert(offsetof(FCameraFilmbackSettings, SensorVerticalOffset) == 12, "Offset mismatch for FCameraFilmbackSettings::SensorVerticalOffset");
static_assert(offsetof(FCameraFilmbackSettings, SensorAspectRatio) == 16, "Offset mismatch for FCameraFilmbackSettings::SensorAspectRatio");

// /Script/CinematicCamera.CameraFocusSettings
// Kind: ScriptStruct; super: none
struct FCameraFocusSettings
{
public:
    std::uint8_t FocusMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ManualFocusDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TrackingFocusSettings[0x40]; // 0x0008 (Size: 0x40, Type: StructProperty)
    std::uint8_t bSmoothFocusChanges; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    float FocusSmoothingInterpSpeed; // 0x004C (Size: 0x4, Type: FloatProperty)
    float FocusOffset; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0, "Offset mismatch for FCameraFocusSettings::FocusMethod");
static_assert(offsetof(FCameraFocusSettings, ManualFocusDistance) == 4, "Offset mismatch for FCameraFocusSettings::ManualFocusDistance");
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 8, "Offset mismatch for FCameraFocusSettings::TrackingFocusSettings");
static_assert(offsetof(FCameraFocusSettings, bSmoothFocusChanges) == 72, "Offset mismatch for FCameraFocusSettings::bSmoothFocusChanges");
static_assert(offsetof(FCameraFocusSettings, FocusSmoothingInterpSpeed) == 76, "Offset mismatch for FCameraFocusSettings::FocusSmoothingInterpSpeed");
static_assert(offsetof(FCameraFocusSettings, FocusOffset) == 80, "Offset mismatch for FCameraFocusSettings::FocusOffset");

// /Script/CinematicCamera.CameraLensSettings
// Kind: ScriptStruct; super: none
struct FCameraLensSettings
{
public:
    float MinFocalLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxFocalLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinFStop; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxFStop; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinimumFocusDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SqueezeFactor; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t DiaphragmBladeCount; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCameraLensSettings, MinFocalLength) == 0, "Offset mismatch for FCameraLensSettings::MinFocalLength");
static_assert(offsetof(FCameraLensSettings, MaxFocalLength) == 4, "Offset mismatch for FCameraLensSettings::MaxFocalLength");
static_assert(offsetof(FCameraLensSettings, MinFStop) == 8, "Offset mismatch for FCameraLensSettings::MinFStop");
static_assert(offsetof(FCameraLensSettings, MaxFStop) == 12, "Offset mismatch for FCameraLensSettings::MaxFStop");
static_assert(offsetof(FCameraLensSettings, MinimumFocusDistance) == 16, "Offset mismatch for FCameraLensSettings::MinimumFocusDistance");
static_assert(offsetof(FCameraLensSettings, SqueezeFactor) == 20, "Offset mismatch for FCameraLensSettings::SqueezeFactor");
static_assert(offsetof(FCameraLensSettings, DiaphragmBladeCount) == 24, "Offset mismatch for FCameraLensSettings::DiaphragmBladeCount");

// /Script/CinematicCamera.CameraLookatTrackingSettings
// Kind: ScriptStruct; super: none
struct FCameraLookatTrackingSettings
{
public:
    std::uint8_t bDrawDebugLookAtTrackingPosition; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bEnableLookAtTracking (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LookAtTrackingInterpSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0008
    std::uint8_t ActorToTrack[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RelativeOffset[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowRoll; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraLookatTrackingSettings, bDrawDebugLookAtTrackingPosition) == 0, "Offset mismatch for FCameraLookatTrackingSettings::bDrawDebugLookAtTrackingPosition");
static_assert(offsetof(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed) == 4, "Offset mismatch for FCameraLookatTrackingSettings::LookAtTrackingInterpSpeed");
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 40, "Offset mismatch for FCameraLookatTrackingSettings::ActorToTrack");
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 72, "Offset mismatch for FCameraLookatTrackingSettings::RelativeOffset");
static_assert(offsetof(FCameraLookatTrackingSettings, bAllowRoll) == 96, "Offset mismatch for FCameraLookatTrackingSettings::bAllowRoll");

// /Script/CinematicCamera.CameraTrackingFocusSettings
// Kind: ScriptStruct; super: none
struct FCameraTrackingFocusSettings
{
public:
    std::uint8_t ActorToTrack[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RelativeOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawDebugTrackingFocusPoint; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0, "Offset mismatch for FCameraTrackingFocusSettings::ActorToTrack");
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 32, "Offset mismatch for FCameraTrackingFocusSettings::RelativeOffset");
static_assert(offsetof(FCameraTrackingFocusSettings, bDrawDebugTrackingFocusPoint) == 56, "Offset mismatch for FCameraTrackingFocusSettings::bDrawDebugTrackingFocusPoint");

// /Script/CinematicCamera.NamedFilmbackPreset
// Kind: ScriptStruct; super: none
struct FNamedFilmbackPreset
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t FilmbackSettings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNamedFilmbackPreset, Name) == 0, "Offset mismatch for FNamedFilmbackPreset::Name");
static_assert(offsetof(FNamedFilmbackPreset, DisplayName) == 16, "Offset mismatch for FNamedFilmbackPreset::DisplayName");
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 32, "Offset mismatch for FNamedFilmbackPreset::FilmbackSettings");

// /Script/CinematicCamera.NamedLensPreset
// Kind: ScriptStruct; super: none
struct FNamedLensPreset
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t LensSettings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNamedLensPreset, Name) == 0, "Offset mismatch for FNamedLensPreset::Name");
static_assert(offsetof(FNamedLensPreset, LensSettings) == 16, "Offset mismatch for FNamedLensPreset::LensSettings");

// /Script/CinematicCamera.NamedPlateCropPreset
// Kind: ScriptStruct; super: none
struct FNamedPlateCropPreset
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t CropSettings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNamedPlateCropPreset, Name) == 0, "Offset mismatch for FNamedPlateCropPreset::Name");
static_assert(offsetof(FNamedPlateCropPreset, CropSettings) == 16, "Offset mismatch for FNamedPlateCropPreset::CropSettings");

// /Script/CinematicCamera.PlateCropSettings
// Kind: ScriptStruct; super: none
struct FPlateCropSettings
{
public:
    float AspectRatio; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlateCropSettings, AspectRatio) == 0, "Offset mismatch for FPlateCropSettings::AspectRatio");

// /Script/CinematicCamera.CameraRig_Crane
// Kind: Class; super: Actor
class UCameraRig_Crane
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float CranePitch; // 0x0270 (Size: 0x4, Type: FloatProperty)
    float CraneYaw; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float CraneArmLength; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLockMountPitch; // 0x027C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockMountYaw; // 0x027D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x027E
    void* TransformComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* CraneYawControl; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* CranePitchControl; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* CraneCameraMount; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraRig_Crane, CranePitch) == 624, "Offset mismatch for UCameraRig_Crane::CranePitch");
static_assert(offsetof(UCameraRig_Crane, CraneYaw) == 628, "Offset mismatch for UCameraRig_Crane::CraneYaw");
static_assert(offsetof(UCameraRig_Crane, CraneArmLength) == 632, "Offset mismatch for UCameraRig_Crane::CraneArmLength");
static_assert(offsetof(UCameraRig_Crane, bLockMountPitch) == 636, "Offset mismatch for UCameraRig_Crane::bLockMountPitch");
static_assert(offsetof(UCameraRig_Crane, bLockMountYaw) == 637, "Offset mismatch for UCameraRig_Crane::bLockMountYaw");
static_assert(offsetof(UCameraRig_Crane, TransformComponent) == 640, "Offset mismatch for UCameraRig_Crane::TransformComponent");
static_assert(offsetof(UCameraRig_Crane, CraneYawControl) == 648, "Offset mismatch for UCameraRig_Crane::CraneYawControl");
static_assert(offsetof(UCameraRig_Crane, CranePitchControl) == 656, "Offset mismatch for UCameraRig_Crane::CranePitchControl");
static_assert(offsetof(UCameraRig_Crane, CraneCameraMount) == 664, "Offset mismatch for UCameraRig_Crane::CraneCameraMount");

// /Script/CinematicCamera.CameraRig_Rail
// Kind: Class; super: Actor
class UCameraRig_Rail
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float CurrentPositionOnRail; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLockOrientationToRail; // 0x0274 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0275
    void* TransformComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* RailSplineComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* RailCameraMount; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraRig_Rail, CurrentPositionOnRail) == 624, "Offset mismatch for UCameraRig_Rail::CurrentPositionOnRail");
static_assert(offsetof(UCameraRig_Rail, bLockOrientationToRail) == 628, "Offset mismatch for UCameraRig_Rail::bLockOrientationToRail");
static_assert(offsetof(UCameraRig_Rail, TransformComponent) == 632, "Offset mismatch for UCameraRig_Rail::TransformComponent");
static_assert(offsetof(UCameraRig_Rail, RailSplineComponent) == 640, "Offset mismatch for UCameraRig_Rail::RailSplineComponent");
static_assert(offsetof(UCameraRig_Rail, RailCameraMount) == 648, "Offset mismatch for UCameraRig_Rail::RailCameraMount");

// /Script/CinematicCamera.CineCameraActor
// Kind: Class; super: CameraActor
class UCineCameraActor
{
public:
    std::uint8_t Pad_0000[0xA50]; // 0x0000
    std::uint8_t LookatTrackingSettings[0x1]; // 0x0A50 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCineCameraActor, LookatTrackingSettings) == 2640, "Offset mismatch for UCineCameraActor::LookatTrackingSettings");

// /Script/CinematicCamera.CineCameraComponent
// Kind: Class; super: CameraComponent
class UCineCameraComponent
{
public:
    std::uint8_t Pad_0000[0xAD0]; // 0x0000
    std::uint8_t FilmbackSettings[0x14]; // 0x0AD0 (Size: 0x14, Type: StructProperty)
    std::uint8_t Filmback[0x14]; // 0x0AE4 (Size: 0x14, Type: StructProperty)
    std::uint8_t LensSettings[0x20]; // 0x0AF8 (Size: 0x20, Type: StructProperty)
    std::uint8_t FocusSettings[0x58]; // 0x0B18 (Size: 0x58, Type: StructProperty)
    std::uint8_t CropSettings[0x4]; // 0x0B70 (Size: 0x4, Type: StructProperty)
    float CurrentFocalLength; // 0x0B74 (Size: 0x4, Type: FloatProperty)
    float CurrentAperture; // 0x0B78 (Size: 0x4, Type: FloatProperty)
    float CurrentFocusDistance; // 0x0B7C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExposureMethod; // 0x0B80 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0B81
    std::uint8_t bOverride_CustomNearClippingPlane; // 0x0B84 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B85
    float CustomNearClippingPlane; // 0x0B88 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0B8C
    TArray<void*> FilmbackPresets; // 0x0B98 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LensPresets; // 0x0BA8 (Size: 0x10, Type: ArrayProperty)
    FString DefaultFilmbackPresetName; // 0x0BB8 (Size: 0x10, Type: StrProperty)
    FString DefaultFilmbackPreset; // 0x0BC8 (Size: 0x10, Type: StrProperty)
    FString DefaultLensPresetName; // 0x0BD8 (Size: 0x10, Type: StrProperty)
    float DefaultLensFocalLength; // 0x0BE8 (Size: 0x4, Type: FloatProperty)
    float DefaultLensFStop; // 0x0BEC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 2768, "Offset mismatch for UCineCameraComponent::FilmbackSettings");
static_assert(offsetof(UCineCameraComponent, Filmback) == 2788, "Offset mismatch for UCineCameraComponent::Filmback");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 2808, "Offset mismatch for UCineCameraComponent::LensSettings");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 2840, "Offset mismatch for UCineCameraComponent::FocusSettings");
static_assert(offsetof(UCineCameraComponent, CropSettings) == 2928, "Offset mismatch for UCineCameraComponent::CropSettings");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 2932, "Offset mismatch for UCineCameraComponent::CurrentFocalLength");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 2936, "Offset mismatch for UCineCameraComponent::CurrentAperture");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 2940, "Offset mismatch for UCineCameraComponent::CurrentFocusDistance");
static_assert(offsetof(UCineCameraComponent, ExposureMethod) == 2944, "Offset mismatch for UCineCameraComponent::ExposureMethod");
static_assert(offsetof(UCineCameraComponent, bOverride_CustomNearClippingPlane) == 2948, "Offset mismatch for UCineCameraComponent::bOverride_CustomNearClippingPlane");
static_assert(offsetof(UCineCameraComponent, CustomNearClippingPlane) == 2952, "Offset mismatch for UCineCameraComponent::CustomNearClippingPlane");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 2968, "Offset mismatch for UCineCameraComponent::FilmbackPresets");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 2984, "Offset mismatch for UCineCameraComponent::LensPresets");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 3000, "Offset mismatch for UCineCameraComponent::DefaultFilmbackPresetName");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 3016, "Offset mismatch for UCineCameraComponent::DefaultFilmbackPreset");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 3032, "Offset mismatch for UCineCameraComponent::DefaultLensPresetName");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 3048, "Offset mismatch for UCineCameraComponent::DefaultLensFocalLength");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 3052, "Offset mismatch for UCineCameraComponent::DefaultLensFStop");

// /Script/CinematicCamera.CineCameraSettings
// Kind: Class; super: DeveloperSettings
class UCineCameraSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString DefaultLensPresetName; // 0x0030 (Size: 0x10, Type: StrProperty)
    float DefaultLensFocalLength; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float DefaultLensFStop; // 0x0044 (Size: 0x4, Type: FloatProperty)
    TArray<void*> LensPresets; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    FString DefaultFilmbackPreset; // 0x0058 (Size: 0x10, Type: StrProperty)
    TArray<void*> FilmbackPresets; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    FString DefaultCropPresetName; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> CropPresets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCineCameraSettings, DefaultLensPresetName) == 48, "Offset mismatch for UCineCameraSettings::DefaultLensPresetName");
static_assert(offsetof(UCineCameraSettings, DefaultLensFocalLength) == 64, "Offset mismatch for UCineCameraSettings::DefaultLensFocalLength");
static_assert(offsetof(UCineCameraSettings, DefaultLensFStop) == 68, "Offset mismatch for UCineCameraSettings::DefaultLensFStop");
static_assert(offsetof(UCineCameraSettings, LensPresets) == 72, "Offset mismatch for UCineCameraSettings::LensPresets");
static_assert(offsetof(UCineCameraSettings, DefaultFilmbackPreset) == 88, "Offset mismatch for UCineCameraSettings::DefaultFilmbackPreset");
static_assert(offsetof(UCineCameraSettings, FilmbackPresets) == 104, "Offset mismatch for UCineCameraSettings::FilmbackPresets");
static_assert(offsetof(UCineCameraSettings, DefaultCropPresetName) == 120, "Offset mismatch for UCineCameraSettings::DefaultCropPresetName");
static_assert(offsetof(UCineCameraSettings, CropPresets) == 136, "Offset mismatch for UCineCameraSettings::CropPresets");

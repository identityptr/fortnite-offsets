/**
 * decamp dumper generated SDK
 * Package: /Script/PhotoModeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PhotoModeRuntime.Photo2DElement
// Kind: ScriptStruct; super: none
struct FPhoto2DElement
{
public:
    std::uint8_t ElementTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Position[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    float Scale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Rotation; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPhoto2DElement, ElementTag) == 0, "Offset mismatch for FPhoto2DElement::ElementTag");
static_assert(offsetof(FPhoto2DElement, Position) == 8, "Offset mismatch for FPhoto2DElement::Position");
static_assert(offsetof(FPhoto2DElement, Scale) == 24, "Offset mismatch for FPhoto2DElement::Scale");
static_assert(offsetof(FPhoto2DElement, Rotation) == 28, "Offset mismatch for FPhoto2DElement::Rotation");

// /Script/PhotoModeRuntime.PhotoCameraAimData
// Kind: ScriptStruct; super: none
struct FPhotoCameraAimData
{
public:
    std::uint8_t BackData[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t SelfieData[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhotoCameraAimData, BackData) == 0, "Offset mismatch for FPhotoCameraAimData::BackData");
static_assert(offsetof(FPhotoCameraAimData, SelfieData) == 64, "Offset mismatch for FPhotoCameraAimData::SelfieData");

// /Script/PhotoModeRuntime.PhotoCameraFacingData
// Kind: ScriptStruct; super: none
struct FPhotoCameraFacingData
{
public:
    float ForwardOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RightOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float UpOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float YawOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PitchOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinPitch; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxPitch; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DefaultFOV; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinMaxFOV[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    void* Montage; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName MontageSection; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPhotoCameraFacingData, ForwardOffset) == 0, "Offset mismatch for FPhotoCameraFacingData::ForwardOffset");
static_assert(offsetof(FPhotoCameraFacingData, RightOffset) == 4, "Offset mismatch for FPhotoCameraFacingData::RightOffset");
static_assert(offsetof(FPhotoCameraFacingData, UpOffset) == 8, "Offset mismatch for FPhotoCameraFacingData::UpOffset");
static_assert(offsetof(FPhotoCameraFacingData, YawOffset) == 12, "Offset mismatch for FPhotoCameraFacingData::YawOffset");
static_assert(offsetof(FPhotoCameraFacingData, PitchOffset) == 16, "Offset mismatch for FPhotoCameraFacingData::PitchOffset");
static_assert(offsetof(FPhotoCameraFacingData, MinPitch) == 20, "Offset mismatch for FPhotoCameraFacingData::MinPitch");
static_assert(offsetof(FPhotoCameraFacingData, MaxPitch) == 24, "Offset mismatch for FPhotoCameraFacingData::MaxPitch");
static_assert(offsetof(FPhotoCameraFacingData, DefaultFOV) == 28, "Offset mismatch for FPhotoCameraFacingData::DefaultFOV");
static_assert(offsetof(FPhotoCameraFacingData, MinMaxFOV) == 32, "Offset mismatch for FPhotoCameraFacingData::MinMaxFOV");
static_assert(offsetof(FPhotoCameraFacingData, Montage) == 48, "Offset mismatch for FPhotoCameraFacingData::Montage");
static_assert(offsetof(FPhotoCameraFacingData, MontageSection) == 56, "Offset mismatch for FPhotoCameraFacingData::MontageSection");

// /Script/PhotoModeRuntime.PhotoMetadata
// Kind: ScriptStruct; super: none
struct FPhotoMetadata
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t orientation; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t GameplayTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    TArray<void*> AdditionalElements; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhotoMetadata, Guid) == 0, "Offset mismatch for FPhotoMetadata::Guid");
static_assert(offsetof(FPhotoMetadata, orientation) == 16, "Offset mismatch for FPhotoMetadata::orientation");
static_assert(offsetof(FPhotoMetadata, GameplayTags) == 24, "Offset mismatch for FPhotoMetadata::GameplayTags");
static_assert(offsetof(FPhotoMetadata, AdditionalElements) == 56, "Offset mismatch for FPhotoMetadata::AdditionalElements");

// /Script/PhotoModeRuntime.ControllerComp_PhotoCamera
// Kind: Class; super: ControllerComponent
class UControllerComp_PhotoCamera
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* DrawCameraInputAction; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* CloseCameraInputAction; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* CameraItem; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDisableEquipAnimation; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t DrawBlockingTags[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t EnhancedInputDataCamera[0x50]; // 0x0100 (Size: 0x50, Type: StructProperty)
    void* CachedWeapon; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* CameraWeapon; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* PhotoConfig; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    void* EnhancedInputComponent; // 0x0168 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControllerComp_PhotoCamera, DrawCameraInputAction) == 192, "Offset mismatch for UControllerComp_PhotoCamera::DrawCameraInputAction");
static_assert(offsetof(UControllerComp_PhotoCamera, CloseCameraInputAction) == 200, "Offset mismatch for UControllerComp_PhotoCamera::CloseCameraInputAction");
static_assert(offsetof(UControllerComp_PhotoCamera, CameraItem) == 208, "Offset mismatch for UControllerComp_PhotoCamera::CameraItem");
static_assert(offsetof(UControllerComp_PhotoCamera, bDisableEquipAnimation) == 216, "Offset mismatch for UControllerComp_PhotoCamera::bDisableEquipAnimation");
static_assert(offsetof(UControllerComp_PhotoCamera, DrawBlockingTags) == 224, "Offset mismatch for UControllerComp_PhotoCamera::DrawBlockingTags");
static_assert(offsetof(UControllerComp_PhotoCamera, EnhancedInputDataCamera) == 256, "Offset mismatch for UControllerComp_PhotoCamera::EnhancedInputDataCamera");
static_assert(offsetof(UControllerComp_PhotoCamera, CachedWeapon) == 336, "Offset mismatch for UControllerComp_PhotoCamera::CachedWeapon");
static_assert(offsetof(UControllerComp_PhotoCamera, CameraWeapon) == 344, "Offset mismatch for UControllerComp_PhotoCamera::CameraWeapon");
static_assert(offsetof(UControllerComp_PhotoCamera, PhotoConfig) == 352, "Offset mismatch for UControllerComp_PhotoCamera::PhotoConfig");
static_assert(offsetof(UControllerComp_PhotoCamera, EnhancedInputComponent) == 360, "Offset mismatch for UControllerComp_PhotoCamera::EnhancedInputComponent");

// /Script/PhotoModeRuntime.PhotoBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPhotoBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PhotoModeRuntime.PhotoConfig
// Kind: Class; super: Object
class UPhotoConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t orientation; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Tags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPhotoConfig, orientation) == 40, "Offset mismatch for UPhotoConfig::orientation");
static_assert(offsetof(UPhotoConfig, Tags) == 48, "Offset mismatch for UPhotoConfig::Tags");

// /Script/PhotoModeRuntime.PhotoFacingDataAsset
// Kind: Class; super: DataAsset
class UPhotoFacingDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> FacingData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPhotoFacingDataAsset, FacingData) == 40, "Offset mismatch for UPhotoFacingDataAsset::FacingData");

// /Script/PhotoModeRuntime.PhotoFilterAsset
// Kind: Class; super: DataAsset
class UPhotoFilterAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t PPFXMaterial[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PhotoMaterial; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPhotoFilterAsset, Tag) == 40, "Offset mismatch for UPhotoFilterAsset::Tag");
static_assert(offsetof(UPhotoFilterAsset, PPFXMaterial) == 48, "Offset mismatch for UPhotoFilterAsset::PPFXMaterial");
static_assert(offsetof(UPhotoFilterAsset, PhotoMaterial) == 80, "Offset mismatch for UPhotoFilterAsset::PhotoMaterial");

// /Script/PhotoModeRuntime.PhotoFrameAsset
// Kind: Class; super: DataAsset
class UPhotoFrameAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* FrameWidget; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* Thumbnail; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPhotoFrameAsset, Tag) == 40, "Offset mismatch for UPhotoFrameAsset::Tag");
static_assert(offsetof(UPhotoFrameAsset, FrameWidget) == 48, "Offset mismatch for UPhotoFrameAsset::FrameWidget");
static_assert(offsetof(UPhotoFrameAsset, Thumbnail) == 56, "Offset mismatch for UPhotoFrameAsset::Thumbnail");

// /Script/PhotoModeRuntime.PhotoHandlerComponent
// Kind: Class; super: ActorComponent
class UPhotoHandlerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnScreenshotReady; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPhotoHandlerComponent, OnScreenshotReady) == 192, "Offset mismatch for UPhotoHandlerComponent::OnScreenshotReady");

// /Script/PhotoModeRuntime.PhotoPortrayableComponent
// Kind: Class; super: ActorComponent
class UPhotoPortrayableComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnEnterInOtherCameraFrustumDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExitOtherCameraFrustumDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    void* AlertIconWidgetClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    void* AlertIconWidget; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPhotoPortrayableComponent, OnEnterInOtherCameraFrustumDelegate) == 192, "Offset mismatch for UPhotoPortrayableComponent::OnEnterInOtherCameraFrustumDelegate");
static_assert(offsetof(UPhotoPortrayableComponent, OnExitOtherCameraFrustumDelegate) == 208, "Offset mismatch for UPhotoPortrayableComponent::OnExitOtherCameraFrustumDelegate");
static_assert(offsetof(UPhotoPortrayableComponent, AlertIconWidgetClass) == 232, "Offset mismatch for UPhotoPortrayableComponent::AlertIconWidgetClass");
static_assert(offsetof(UPhotoPortrayableComponent, AlertIconWidget) == 240, "Offset mismatch for UPhotoPortrayableComponent::AlertIconWidget");

// /Script/PhotoModeRuntime.PhotoStoragePlayerStateComponent
// Kind: Class; super: PlayerStateComponent
class UPhotoStoragePlayerStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPhotoDatabaseUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> Photos; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::int32_t MaxNumPhotos; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPhotoStoragePlayerStateComponent, OnPhotoDatabaseUpdated) == 192, "Offset mismatch for UPhotoStoragePlayerStateComponent::OnPhotoDatabaseUpdated");
static_assert(offsetof(UPhotoStoragePlayerStateComponent, Photos) == 208, "Offset mismatch for UPhotoStoragePlayerStateComponent::Photos");
static_assert(offsetof(UPhotoStoragePlayerStateComponent, MaxNumPhotos) == 224, "Offset mismatch for UPhotoStoragePlayerStateComponent::MaxNumPhotos");

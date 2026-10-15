/**
 * decamp dumper generated SDK
 * Package: /Script/RazerChromaDevices
 */
#pragma once
#include "Basic.h"

// /Script/RazerChromaDevices.RazerChromaAppInfo
// Kind: ScriptStruct; super: none
struct FRazerChromaAppInfo
{
public:
    FString ApplicationTitle; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ApplicationDescription; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString AuthorName; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString AuthorContact; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::int32_t SupportedDeviceTypes; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t Category; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRazerChromaAppInfo, ApplicationTitle) == 0, "Offset mismatch for FRazerChromaAppInfo::ApplicationTitle");
static_assert(offsetof(FRazerChromaAppInfo, ApplicationDescription) == 16, "Offset mismatch for FRazerChromaAppInfo::ApplicationDescription");
static_assert(offsetof(FRazerChromaAppInfo, AuthorName) == 32, "Offset mismatch for FRazerChromaAppInfo::AuthorName");
static_assert(offsetof(FRazerChromaAppInfo, AuthorContact) == 48, "Offset mismatch for FRazerChromaAppInfo::AuthorContact");
static_assert(offsetof(FRazerChromaAppInfo, SupportedDeviceTypes) == 64, "Offset mismatch for FRazerChromaAppInfo::SupportedDeviceTypes");
static_assert(offsetof(FRazerChromaAppInfo, Category) == 68, "Offset mismatch for FRazerChromaAppInfo::Category");

// /Script/RazerChromaDevices.RazerChromaAnimationAsset
// Kind: Class; super: Object
class URazerChromaAnimationAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString AnimationName; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> RawData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URazerChromaAnimationAsset, AnimationName) == 40, "Offset mismatch for URazerChromaAnimationAsset::AnimationName");
static_assert(offsetof(URazerChromaAnimationAsset, RawData) == 56, "Offset mismatch for URazerChromaAnimationAsset::RawData");

// /Script/RazerChromaDevices.RazerChromaDevicesDeveloperSettings
// Kind: Class; super: DeveloperSettings
class URazerChromaDevicesDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsRazerChromaEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateRazerChromaInputDevice; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    void* IdleAnimationAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseChromaAppInfoForInit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t AppInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URazerChromaDevicesDeveloperSettings, bIsRazerChromaEnabled) == 48, "Offset mismatch for URazerChromaDevicesDeveloperSettings::bIsRazerChromaEnabled");
static_assert(offsetof(URazerChromaDevicesDeveloperSettings, bCreateRazerChromaInputDevice) == 49, "Offset mismatch for URazerChromaDevicesDeveloperSettings::bCreateRazerChromaInputDevice");
static_assert(offsetof(URazerChromaDevicesDeveloperSettings, IdleAnimationAsset) == 56, "Offset mismatch for URazerChromaDevicesDeveloperSettings::IdleAnimationAsset");
static_assert(offsetof(URazerChromaDevicesDeveloperSettings, bUseChromaAppInfoForInit) == 64, "Offset mismatch for URazerChromaDevicesDeveloperSettings::bUseChromaAppInfoForInit");
static_assert(offsetof(URazerChromaDevicesDeveloperSettings, AppInfo) == 72, "Offset mismatch for URazerChromaDevicesDeveloperSettings::AppInfo");

// /Script/RazerChromaDevices.RazerChromaFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class URazerChromaFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RazerChromaDevices.RazerChromaPlayAnimationFile
// Kind: Class; super: InputDeviceProperty
class URazerChromaPlayAnimationFile
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* AnimAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLooping; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URazerChromaPlayAnimationFile, AnimAsset) == 48, "Offset mismatch for URazerChromaPlayAnimationFile::AnimAsset");
static_assert(offsetof(URazerChromaPlayAnimationFile, bLooping) == 56, "Offset mismatch for URazerChromaPlayAnimationFile::bLooping");

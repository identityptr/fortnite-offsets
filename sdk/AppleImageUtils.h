/**
 * decamp dumper generated SDK
 * Package: /Script/AppleImageUtils
 */
#pragma once
#include "Basic.h"

// /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
// Kind: ScriptStruct; super: none
struct FAppleImageUtilsImageConversionResult
{
public:
    FString Error; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> ImageData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0, "Offset mismatch for FAppleImageUtilsImageConversionResult::Error");
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 16, "Offset mismatch for FAppleImageUtilsImageConversionResult::ImageData");

// /Script/AppleImageUtils.AppleImageInterface
// Kind: Class; super: Interface
class UAppleImageInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Kind: Class; super: Object
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0050
    std::uint8_t ConversionResult[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnSuccess) == 48, "Offset mismatch for UAppleImageUtilsBaseAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, OnFailure) == 64, "Offset mismatch for UAppleImageUtilsBaseAsyncTaskBlueprintProxy::OnFailure");
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 96, "Offset mismatch for UAppleImageUtilsBaseAsyncTaskBlueprintProxy::ConversionResult");

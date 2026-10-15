/**
 * decamp dumper generated SDK
 * Package: /Script/VerseScreenshotTest
 */
#pragma once
#include "Basic.h"

// /Script/VerseScreenshotTest.ProcessedScreenshotTestDetails
// Kind: ScriptStruct; super: none
struct FProcessedScreenshotTestDetails
{
public:
    std::uint8_t WasTestSuccess; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AverageExposure; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AverageLuminance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    FString ScreenshotTestName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Result; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FProcessedScreenshotTestDetails, WasTestSuccess) == 0, "Offset mismatch for FProcessedScreenshotTestDetails::WasTestSuccess");
static_assert(offsetof(FProcessedScreenshotTestDetails, AverageExposure) == 4, "Offset mismatch for FProcessedScreenshotTestDetails::AverageExposure");
static_assert(offsetof(FProcessedScreenshotTestDetails, AverageLuminance) == 8, "Offset mismatch for FProcessedScreenshotTestDetails::AverageLuminance");
static_assert(offsetof(FProcessedScreenshotTestDetails, ScreenshotTestName) == 16, "Offset mismatch for FProcessedScreenshotTestDetails::ScreenshotTestName");
static_assert(offsetof(FProcessedScreenshotTestDetails, Result) == 32, "Offset mismatch for FProcessedScreenshotTestDetails::Result");

// /Script/VerseScreenshotTest.ScreenshotTestRequestDetails
// Kind: ScriptStruct; super: none
struct FScreenshotTestRequestDetails
{
public:
    std::uint8_t bShowUI; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHdrScreenshot; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float Delay; // 0x0004 (Size: 0x4, Type: FloatProperty)
    FString ScreenshotTestName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FScreenshotTestRequestDetails, bShowUI) == 0, "Offset mismatch for FScreenshotTestRequestDetails::bShowUI");
static_assert(offsetof(FScreenshotTestRequestDetails, bHdrScreenshot) == 1, "Offset mismatch for FScreenshotTestRequestDetails::bHdrScreenshot");
static_assert(offsetof(FScreenshotTestRequestDetails, Delay) == 4, "Offset mismatch for FScreenshotTestRequestDetails::Delay");
static_assert(offsetof(FScreenshotTestRequestDetails, ScreenshotTestName) == 8, "Offset mismatch for FScreenshotTestRequestDetails::ScreenshotTestName");

// /Script/VerseScreenshotTest.VerseScreenshotTestRequestComponent
// Kind: Class; super: ActorComponent
class UVerseScreenshotTestRequestComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ScreenshotTestRequestDetails[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseScreenshotTestRequestComponent, ScreenshotTestRequestDetails) == 192, "Offset mismatch for UVerseScreenshotTestRequestComponent::ScreenshotTestRequestDetails");

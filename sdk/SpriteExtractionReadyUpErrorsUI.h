/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionReadyUpErrorsUI
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionReadyUpErrorsUI.FortEvent_Extraction_NavigationDestinationSet
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_NavigationDestinationSet
{
public:
    std::uint8_t Destination; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortEvent_Extraction_NavigationDestinationSet, Destination) == 0, "Offset mismatch for FFortEvent_Extraction_NavigationDestinationSet::Destination");

// /Script/SpriteExtractionReadyUpErrorsUI.ExtractionReadyUpErrorUI
// Kind: Class; super: ReadyUpErrorUI
class UExtractionReadyUpErrorUI
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t FeatureToRedirectTo; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Destination; // 0x00E9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UExtractionReadyUpErrorUI, FeatureToRedirectTo) == 232, "Offset mismatch for UExtractionReadyUpErrorUI::FeatureToRedirectTo");
static_assert(offsetof(UExtractionReadyUpErrorUI, Destination) == 233, "Offset mismatch for UExtractionReadyUpErrorUI::Destination");

// /Script/SpriteExtractionReadyUpErrorsUI.ExtractionReadyUpLoadingErrorUI
// Kind: Class; super: ReadyUpErrorUI
class UExtractionReadyUpLoadingErrorUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ErrorMessage[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    void* Icon; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayButtonTextOverride[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t PlayButtonSubtitle[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryButtonTextOverride[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t bImpliesReadyUp; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, ErrorMessage) == 40, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::ErrorMessage");
static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, Icon) == 64, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::Icon");
static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, PlayButtonTextOverride) == 72, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::PlayButtonTextOverride");
static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, PlayButtonSubtitle) == 88, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::PlayButtonSubtitle");
static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, SecondaryButtonTextOverride) == 104, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::SecondaryButtonTextOverride");
static_assert(offsetof(UExtractionReadyUpLoadingErrorUI, bImpliesReadyUp) == 120, "Offset mismatch for UExtractionReadyUpLoadingErrorUI::bImpliesReadyUp");

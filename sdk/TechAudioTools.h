/**
 * decamp dumper generated SDK
 * Package: /Script/TechAudioTools
 */
#pragma once
#include "Basic.h"

// /Script/TechAudioTools.AudioComponentViewModel
// Kind: Class; super: MVVMViewModelBase
class UAudioComponentViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PlayState; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsPlaying; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStopped; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFadingIn; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFadingOut; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVirtualized; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006E
    TWeakObjectPtr<void> AudioComponent; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAudioComponentViewModel, PlayState) == 104, "Offset mismatch for UAudioComponentViewModel::PlayState");
static_assert(offsetof(UAudioComponentViewModel, bIsPlaying) == 105, "Offset mismatch for UAudioComponentViewModel::bIsPlaying");
static_assert(offsetof(UAudioComponentViewModel, bIsStopped) == 106, "Offset mismatch for UAudioComponentViewModel::bIsStopped");
static_assert(offsetof(UAudioComponentViewModel, bIsFadingIn) == 107, "Offset mismatch for UAudioComponentViewModel::bIsFadingIn");
static_assert(offsetof(UAudioComponentViewModel, bIsFadingOut) == 108, "Offset mismatch for UAudioComponentViewModel::bIsFadingOut");
static_assert(offsetof(UAudioComponentViewModel, bIsVirtualized) == 109, "Offset mismatch for UAudioComponentViewModel::bIsVirtualized");
static_assert(offsetof(UAudioComponentViewModel, AudioComponent) == 112, "Offset mismatch for UAudioComponentViewModel::AudioComponent");

// /Script/TechAudioTools.TechAudioToolsConversionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UTechAudioToolsConversionFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TechAudioTools.TechAudioToolsFloatMapping
// Kind: Class; super: Object
class UTechAudioToolsFloatMapping
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MappingType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t Range[0x8]; // 0x002C (Size: 0x8, Type: StructProperty)
    std::uint8_t SourceRange[0x8]; // 0x0034 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayRange[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayUnits; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SourceVolumeUnits; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DisplayVolumeUnits; // 0x0046 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0047
    std::uint8_t DisplayRange_Decibels[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayRange_LinearGain[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t SourcePitchUnits; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DisplayPitchUnits; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x005A
    std::uint8_t DisplayRange_Semitones[0x8]; // 0x005C (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayRange_FrequencyMultiplier[0x1]; // 0x0064 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTechAudioToolsFloatMapping, MappingType) == 40, "Offset mismatch for UTechAudioToolsFloatMapping::MappingType");
static_assert(offsetof(UTechAudioToolsFloatMapping, Range) == 44, "Offset mismatch for UTechAudioToolsFloatMapping::Range");
static_assert(offsetof(UTechAudioToolsFloatMapping, SourceRange) == 52, "Offset mismatch for UTechAudioToolsFloatMapping::SourceRange");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayRange) == 60, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayRange");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayUnits) == 68, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayUnits");
static_assert(offsetof(UTechAudioToolsFloatMapping, SourceVolumeUnits) == 69, "Offset mismatch for UTechAudioToolsFloatMapping::SourceVolumeUnits");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayVolumeUnits) == 70, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayVolumeUnits");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayRange_Decibels) == 72, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayRange_Decibels");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayRange_LinearGain) == 80, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayRange_LinearGain");
static_assert(offsetof(UTechAudioToolsFloatMapping, SourcePitchUnits) == 88, "Offset mismatch for UTechAudioToolsFloatMapping::SourcePitchUnits");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayPitchUnits) == 89, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayPitchUnits");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayRange_Semitones) == 92, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayRange_Semitones");
static_assert(offsetof(UTechAudioToolsFloatMapping, DisplayRange_FrequencyMultiplier) == 100, "Offset mismatch for UTechAudioToolsFloatMapping::DisplayRange_FrequencyMultiplier");

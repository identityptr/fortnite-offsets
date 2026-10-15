/**
 * decamp dumper generated SDK
 * Package: /Script/SproutFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/SproutFrontendUI.SproutFrontendUIExperienceFlow
// Kind: Class; super: Object
class USproutFrontendUIExperienceFlow
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t VideoPlayerClass[0x20]; // 0x0060 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> FlowStepArray; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableTrailer; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    FString CinematicTrailerVUID; // 0x0098 (Size: 0x10, Type: StrProperty)
    FName CinematicTrailerString; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CinematicTrailerRating; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USproutFrontendUIExperienceFlow, VideoPlayerClass) == 96, "Offset mismatch for USproutFrontendUIExperienceFlow::VideoPlayerClass");
static_assert(offsetof(USproutFrontendUIExperienceFlow, FlowStepArray) == 128, "Offset mismatch for USproutFrontendUIExperienceFlow::FlowStepArray");
static_assert(offsetof(USproutFrontendUIExperienceFlow, bEnableTrailer) == 144, "Offset mismatch for USproutFrontendUIExperienceFlow::bEnableTrailer");
static_assert(offsetof(USproutFrontendUIExperienceFlow, CinematicTrailerVUID) == 152, "Offset mismatch for USproutFrontendUIExperienceFlow::CinematicTrailerVUID");
static_assert(offsetof(USproutFrontendUIExperienceFlow, CinematicTrailerString) == 168, "Offset mismatch for USproutFrontendUIExperienceFlow::CinematicTrailerString");
static_assert(offsetof(USproutFrontendUIExperienceFlow, CinematicTrailerRating) == 176, "Offset mismatch for USproutFrontendUIExperienceFlow::CinematicTrailerRating");

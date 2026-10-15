/**
 * decamp dumper generated SDK
 * Package: /Script/FigmentFrontendRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FigmentFrontendRuntime.FigmentFrontendExperienceFlow
// Kind: Class; super: Object
class UFigmentFrontendExperienceFlow
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
    std::uint8_t Pad_0002[0x8]; // 0x00C0
    void* SimpleBuildAndEditModalHelper; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFigmentFrontendExperienceFlow, VideoPlayerClass) == 96, "Offset mismatch for UFigmentFrontendExperienceFlow::VideoPlayerClass");
static_assert(offsetof(UFigmentFrontendExperienceFlow, FlowStepArray) == 128, "Offset mismatch for UFigmentFrontendExperienceFlow::FlowStepArray");
static_assert(offsetof(UFigmentFrontendExperienceFlow, bEnableTrailer) == 144, "Offset mismatch for UFigmentFrontendExperienceFlow::bEnableTrailer");
static_assert(offsetof(UFigmentFrontendExperienceFlow, CinematicTrailerVUID) == 152, "Offset mismatch for UFigmentFrontendExperienceFlow::CinematicTrailerVUID");
static_assert(offsetof(UFigmentFrontendExperienceFlow, CinematicTrailerString) == 168, "Offset mismatch for UFigmentFrontendExperienceFlow::CinematicTrailerString");
static_assert(offsetof(UFigmentFrontendExperienceFlow, CinematicTrailerRating) == 176, "Offset mismatch for UFigmentFrontendExperienceFlow::CinematicTrailerRating");
static_assert(offsetof(UFigmentFrontendExperienceFlow, SimpleBuildAndEditModalHelper) == 200, "Offset mismatch for UFigmentFrontendExperienceFlow::SimpleBuildAndEditModalHelper");

/**
 * decamp dumper generated SDK
 * Package: /Script/ForbiddenFruitFrontEndUI
 */
#pragma once
#include "Basic.h"

// /Script/ForbiddenFruitFrontEndUI.ForbiddenFruitFrontendExperienceFlow
// Kind: Class; super: Object
class UForbiddenFruitFrontendExperienceFlow
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> FlowStepArray; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0058
    void* SimpleBuildAndEditModalHelper; // 0x0060 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UForbiddenFruitFrontendExperienceFlow, FlowStepArray) == 72, "Offset mismatch for UForbiddenFruitFrontendExperienceFlow::FlowStepArray");
static_assert(offsetof(UForbiddenFruitFrontendExperienceFlow, SimpleBuildAndEditModalHelper) == 96, "Offset mismatch for UForbiddenFruitFrontendExperienceFlow::SimpleBuildAndEditModalHelper");

// /Script/ForbiddenFruitFrontEndUI.ForbiddenFruitLobbyWidgetVM
// Kind: Class; super: MVVMViewModelBase
class UForbiddenFruitLobbyWidgetVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsForbiddenFruitIsland; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UForbiddenFruitLobbyWidgetVM, bIsForbiddenFruitIsland) == 104, "Offset mismatch for UForbiddenFruitLobbyWidgetVM::bIsForbiddenFruitIsland");

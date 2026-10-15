/**
 * decamp dumper generated SDK
 * Package: /Script/ElectraProtronFactory
 */
#pragma once
#include "Basic.h"

// /Script/ElectraProtronFactory.ElectraProtronFactorySettings
// Kind: Class; super: Object
class UElectraProtronFactorySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bPreferProtronInEditor; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferProtronInGame; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UElectraProtronFactorySettings, bPreferProtronInEditor) == 40, "Offset mismatch for UElectraProtronFactorySettings::bPreferProtronInEditor");
static_assert(offsetof(UElectraProtronFactorySettings, bPreferProtronInGame) == 41, "Offset mismatch for UElectraProtronFactorySettings::bPreferProtronInGame");

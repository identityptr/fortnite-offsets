/**
 * decamp dumper generated SDK
 * Package: /Script/CharacterDynamicsControlRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCharacterDynamicsControlBPLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
// Kind: Class; super: FortGameFeatureData
class UCharacterDynamicsControlGameFeatureData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    void* DefaultStateLogic; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* DefaultParameters; // 0x0450 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCharacterDynamicsControlGameFeatureData, DefaultStateLogic) == 1096, "Offset mismatch for UCharacterDynamicsControlGameFeatureData::DefaultStateLogic");
static_assert(offsetof(UCharacterDynamicsControlGameFeatureData, DefaultParameters) == 1104, "Offset mismatch for UCharacterDynamicsControlGameFeatureData::DefaultParameters");

// /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
// Kind: Class; super: FortCharacterDynamicsComponentInterface
class UFortCharacterDynamicsComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* DefaultStateLogic; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultParameters; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCharacterDynamicsComponent, DefaultStateLogic) == 208, "Offset mismatch for UFortCharacterDynamicsComponent::DefaultStateLogic");
static_assert(offsetof(UFortCharacterDynamicsComponent, DefaultParameters) == 216, "Offset mismatch for UFortCharacterDynamicsComponent::DefaultParameters");

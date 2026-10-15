/**
 * decamp dumper generated SDK
 * Package: /Script/FortSoundModulatorGroup
 */
#pragma once
#include "Basic.h"

// /Script/FortSoundModulatorGroup.FortSoundModulatorGroup
// Kind: ScriptStruct; super: none
struct FFortSoundModulatorGroup
{
public:
    void* Group; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Modulators; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* Mutator; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortSoundModulatorGroup, Group) == 0, "Offset mismatch for FFortSoundModulatorGroup::Group");
static_assert(offsetof(FFortSoundModulatorGroup, Modulators) == 8, "Offset mismatch for FFortSoundModulatorGroup::Modulators");
static_assert(offsetof(FFortSoundModulatorGroup, Mutator) == 24, "Offset mismatch for FFortSoundModulatorGroup::Mutator");

// /Script/FortSoundModulatorGroup.FortSoundModulatorMixStage
// Kind: ScriptStruct; super: none
struct FFortSoundModulatorMixStage
{
public:
    void* Group; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Destination; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t Value[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSoundModulatorMixStage, Group) == 0, "Offset mismatch for FFortSoundModulatorMixStage::Group");
static_assert(offsetof(FFortSoundModulatorMixStage, Destination) == 8, "Offset mismatch for FFortSoundModulatorMixStage::Destination");
static_assert(offsetof(FFortSoundModulatorMixStage, Value) == 12, "Offset mismatch for FFortSoundModulatorMixStage::Value");

// /Script/FortSoundModulatorGroup.FortSoundModulatorGroupSubsystem
// Kind: Class; super: WorldSubsystem
class UFortSoundModulatorGroupSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> ModulationParameters; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> RegisteredGroups; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSoundModulatorGroupSubsystem, ModulationParameters) == 56, "Offset mismatch for UFortSoundModulatorGroupSubsystem::ModulationParameters");
static_assert(offsetof(UFortSoundModulatorGroupSubsystem, RegisteredGroups) == 72, "Offset mismatch for UFortSoundModulatorGroupSubsystem::RegisteredGroups");

// /Script/FortSoundModulatorGroup.GameFeatureAction_ActivateSoundModulatorGroupMix
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ActivateSoundModulatorGroupMix
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Mixes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedMixes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveMixes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_ActivateSoundModulatorGroupMix, Mixes) == 40, "Offset mismatch for UGameFeatureAction_ActivateSoundModulatorGroupMix::Mixes");
static_assert(offsetof(UGameFeatureAction_ActivateSoundModulatorGroupMix, LoadedMixes) == 56, "Offset mismatch for UGameFeatureAction_ActivateSoundModulatorGroupMix::LoadedMixes");
static_assert(offsetof(UGameFeatureAction_ActivateSoundModulatorGroupMix, ActiveMixes) == 72, "Offset mismatch for UGameFeatureAction_ActivateSoundModulatorGroupMix::ActiveMixes");

// /Script/FortSoundModulatorGroup.GameFeatureAction_RegisterSoundModulatorGroup
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterSoundModulatorGroup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Groups; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedGroups; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterSoundModulatorGroup, Groups) == 40, "Offset mismatch for UGameFeatureAction_RegisterSoundModulatorGroup::Groups");
static_assert(offsetof(UGameFeatureAction_RegisterSoundModulatorGroup, LoadedGroups) == 56, "Offset mismatch for UGameFeatureAction_RegisterSoundModulatorGroup::LoadedGroups");

// /Script/FortSoundModulatorGroup.SoundModulatorGroupMix
// Kind: Class; super: DataAsset
class USoundModulatorGroupMix
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Stages; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USoundModulatorGroupMix, Stages) == 40, "Offset mismatch for USoundModulatorGroupMix::Stages");

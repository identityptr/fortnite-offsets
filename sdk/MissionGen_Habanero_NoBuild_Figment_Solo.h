/**
 * decamp dumper generated SDK
 * Package: /FigmentPlaylists/Playlists/MissionGen/Habanero/NoBuild/MissionGen_Habanero_NoBuild_Figment_Solo
 */
#pragma once
#include "Basic.h"

// /FigmentPlaylists/Playlists/MissionGen/Habanero/NoBuild/MissionGen_Habanero_NoBuild_Figment_Solo.MissionGen_Habanero_NoBuild_Figment_Solo_C
// Kind: BlueprintGeneratedClass; super: FortMissionGenerator
class UMissionGen_Habanero_NoBuild_Figment_Solo_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MissionName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    FText MissionDescription; // 0x0038 (Size: 0x18, Type: TextProperty)
    std::uint8_t MissionIcon[0xB0]; // 0x0050 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MissionIcons[0x420]; // 0x0100 (Size: 0x420, Type: StructProperty)
    std::uint8_t LoadingScreenConfig[0xD8]; // 0x0520 (Size: 0xD8, Type: StructProperty)
    std::uint8_t AthenaLTMConfig[0x40]; // 0x05F8 (Size: 0x40, Type: StructProperty)
    std::uint8_t PrimaryMissionInfo[0x20]; // 0x0638 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PrimaryScenarioSpawningVolumeClass[0x20]; // 0x0658 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bUseNewMissionGeneration; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0679
    std::uint8_t OptionalRequirementsForAllOtherMissions[0x48]; // 0x0680 (Size: 0x48, Type: StructProperty)
    std::uint8_t MissionGenerationList[0x20]; // 0x06C8 (Size: 0x20, Type: SoftObjectProperty)
    float MissionGenerationChance; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x06EC
    TArray<void*> SecondaryMissionList; // 0x06F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TertiaryMissionList; // 0x0708 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SurvivorMissionList; // 0x0718 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseOverridePlayerSpawnPadPlacementData; // 0x0728 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0729
    std::uint8_t OverridePlayerSpawnPadPlacementData[0x50]; // 0x0730 (Size: 0x50, Type: StructProperty)
    std::uint8_t Enabled[0x1]; // 0x0780 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionName) == 40, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionName");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionDescription) == 56, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionDescription");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionIcon) == 80, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionIcon");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionIcons) == 256, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionIcons");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, LoadingScreenConfig) == 1312, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::LoadingScreenConfig");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, AthenaLTMConfig) == 1528, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::AthenaLTMConfig");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, PrimaryMissionInfo) == 1592, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::PrimaryMissionInfo");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, PrimaryScenarioSpawningVolumeClass) == 1624, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::PrimaryScenarioSpawningVolumeClass");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, bUseNewMissionGeneration) == 1656, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::bUseNewMissionGeneration");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, OptionalRequirementsForAllOtherMissions) == 1664, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::OptionalRequirementsForAllOtherMissions");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionGenerationList) == 1736, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionGenerationList");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, MissionGenerationChance) == 1768, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::MissionGenerationChance");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, SecondaryMissionList) == 1784, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::SecondaryMissionList");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, TertiaryMissionList) == 1800, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::TertiaryMissionList");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, SurvivorMissionList) == 1816, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::SurvivorMissionList");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, bUseOverridePlayerSpawnPadPlacementData) == 1832, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::bUseOverridePlayerSpawnPadPlacementData");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, OverridePlayerSpawnPadPlacementData) == 1840, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::OverridePlayerSpawnPadPlacementData");
static_assert(offsetof(UMissionGen_Habanero_NoBuild_Figment_Solo_C, Enabled) == 1920, "Offset mismatch for UMissionGen_Habanero_NoBuild_Figment_Solo_C::Enabled");

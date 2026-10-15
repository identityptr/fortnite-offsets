/**
 * decamp dumper generated SDK
 * Package: /Script/BattleRoyaleFrontend
 */
#pragma once
#include "Basic.h"

// /Script/BattleRoyaleFrontend.BattleRoyaleFrontendProductVideoOverride
// Kind: ScriptStruct; super: none
struct FBattleRoyaleFrontendProductVideoOverride
{
public:
    std::uint8_t ProductTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString MediaID; // 0x0008 (Size: 0x10, Type: StrProperty)
    FName MediaName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBattleRoyaleFrontendProductVideoOverride, ProductTag) == 0, "Offset mismatch for FBattleRoyaleFrontendProductVideoOverride::ProductTag");
static_assert(offsetof(FBattleRoyaleFrontendProductVideoOverride, MediaID) == 8, "Offset mismatch for FBattleRoyaleFrontendProductVideoOverride::MediaID");
static_assert(offsetof(FBattleRoyaleFrontendProductVideoOverride, MediaName) == 24, "Offset mismatch for FBattleRoyaleFrontendProductVideoOverride::MediaName");

// /Script/BattleRoyaleFrontend.BattleRoyaleFrontendDynamicUIDirector
// Kind: Class; super: FortDynamicUIDirector
class UBattleRoyaleFrontendDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t TaggedSceneRegistryType[0x1]; // 0x02A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBattleRoyaleFrontendDynamicUIDirector, TaggedSceneRegistryType) == 680, "Offset mismatch for UBattleRoyaleFrontendDynamicUIDirector::TaggedSceneRegistryType");

// /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
// Kind: Class; super: Object
class UBattleRoyaleFrontendExperienceFlow
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> DefaultFlowStepArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FirstTimeSeasonFlowStepArray; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BRVideoRating; // 0x0070 (Size: 0x10, Type: MapProperty)
    TArray<void*> ProductVideoOverrides; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0090
    TSoftClassPtr<void> VideoPlayerClass; // 0x00A8 (Size: 0x28, Type: SoftClassProperty)
    void* HabaneroIntroModalClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FireModeSelectionReminderModalClass[0x20]; // 0x00D8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t FireModeSelectionScreenClass[0x20]; // 0x00F8 (Size: 0x20, Type: SoftClassProperty)
    void* SimpleBuildAndEditModalHelper; // 0x0118 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, DefaultFlowStepArray) == 80, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::DefaultFlowStepArray");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, FirstTimeSeasonFlowStepArray) == 96, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::FirstTimeSeasonFlowStepArray");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, BRVideoRating) == 112, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::BRVideoRating");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, ProductVideoOverrides) == 128, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::ProductVideoOverrides");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, VideoPlayerClass) == 168, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::VideoPlayerClass");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, HabaneroIntroModalClass) == 208, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::HabaneroIntroModalClass");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, FireModeSelectionReminderModalClass) == 216, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::FireModeSelectionReminderModalClass");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, FireModeSelectionScreenClass) == 248, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::FireModeSelectionScreenClass");
static_assert(offsetof(UBattleRoyaleFrontendExperienceFlow, SimpleBuildAndEditModalHelper) == 280, "Offset mismatch for UBattleRoyaleFrontendExperienceFlow::SimpleBuildAndEditModalHelper");

/**
 * decamp dumper generated SDK
 * Package: /Script/MotherGameplayUI
 */
#pragma once
#include "Basic.h"

// /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget
// Kind: Class; super: FortHUDElementWidget
class UAvocadoEaterHealthBarWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t AttachedMessageTag[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* AttachedMessageType; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DetachedMessageTag[0x8]; // 0x0380 (Size: 0x8, Type: StructProperty)
    void* DetachedMessageType; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SetMarkerPositionMessageTag[0x8]; // 0x0390 (Size: 0x8, Type: StructProperty)
    void* SetMarkerPositionMessageType; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SetMarkerPositionMessagePropertyName[0x4]; // 0x03A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetDamagedMessageTag[0x4]; // 0x03A4 (Size: 0x4, Type: StructProperty)
    void* TargetDamagedMessageType; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAvocadoEaterHealthBarWidget, AttachedMessageTag) == 880, "Offset mismatch for UAvocadoEaterHealthBarWidget::AttachedMessageTag");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, AttachedMessageType) == 888, "Offset mismatch for UAvocadoEaterHealthBarWidget::AttachedMessageType");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, DetachedMessageTag) == 896, "Offset mismatch for UAvocadoEaterHealthBarWidget::DetachedMessageTag");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, DetachedMessageType) == 904, "Offset mismatch for UAvocadoEaterHealthBarWidget::DetachedMessageType");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, SetMarkerPositionMessageTag) == 912, "Offset mismatch for UAvocadoEaterHealthBarWidget::SetMarkerPositionMessageTag");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, SetMarkerPositionMessageType) == 920, "Offset mismatch for UAvocadoEaterHealthBarWidget::SetMarkerPositionMessageType");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, SetMarkerPositionMessagePropertyName) == 928, "Offset mismatch for UAvocadoEaterHealthBarWidget::SetMarkerPositionMessagePropertyName");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, TargetDamagedMessageTag) == 932, "Offset mismatch for UAvocadoEaterHealthBarWidget::TargetDamagedMessageTag");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, TargetDamagedMessageType) == 936, "Offset mismatch for UAvocadoEaterHealthBarWidget::TargetDamagedMessageType");

// /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// Kind: Class; super: FortWeaponReticleExtensionWidgetBase
class UFortGravyGoblinReticleExtensionWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* CachedAssociatedWeapon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReticleExtensionsToHide[0x1]; // 0x0378 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGravyGoblinReticleExtensionWidget, CachedAssociatedWeapon) == 880, "Offset mismatch for UFortGravyGoblinReticleExtensionWidget::CachedAssociatedWeapon");
static_assert(offsetof(UFortGravyGoblinReticleExtensionWidget, ReticleExtensionsToHide) == 888, "Offset mismatch for UFortGravyGoblinReticleExtensionWidget::ReticleExtensionsToHide");

// /Script/MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// Kind: Class; super: FortWeaponReticleExtensionWidgetBase
class UFortLlamaRoasterReticleExtensionWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* CachedAssociatedWeapon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReticleExtensionsToHide[0x1]; // 0x0378 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLlamaRoasterReticleExtensionWidget, CachedAssociatedWeapon) == 880, "Offset mismatch for UFortLlamaRoasterReticleExtensionWidget::CachedAssociatedWeapon");
static_assert(offsetof(UFortLlamaRoasterReticleExtensionWidget, ReticleExtensionsToHide) == 888, "Offset mismatch for UFortLlamaRoasterReticleExtensionWidget::ReticleExtensionsToHide");

// /Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UFortMobileActionBBE_GravyGoblinRotate
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t GravyGoblinTag[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMobileActionBBE_GravyGoblinRotate, GravyGoblinTag) == 144, "Offset mismatch for UFortMobileActionBBE_GravyGoblinRotate::GravyGoblinTag");

// /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// Kind: Class; super: FortWeaponReticleExtensionWidgetBase
class UFortPaddleGingerReticleExtensionWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* Keybind_ActivateAction; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_CycleCategoryAction; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_CyclePropAction; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_ActivateAction) == 936, "Offset mismatch for UFortPaddleGingerReticleExtensionWidget::Keybind_ActivateAction");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CycleCategoryAction) == 944, "Offset mismatch for UFortPaddleGingerReticleExtensionWidget::Keybind_CycleCategoryAction");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CyclePropAction) == 952, "Offset mismatch for UFortPaddleGingerReticleExtensionWidget::Keybind_CyclePropAction");

// /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// Kind: Class; super: FortWeaponReticleExtensionWidgetBase
class UFortReactorGradeReticleExtensionWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* CachedAssociatedWeapon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReticleExtensionsToHide[0x1]; // 0x0378 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortReactorGradeReticleExtensionWidget, CachedAssociatedWeapon) == 880, "Offset mismatch for UFortReactorGradeReticleExtensionWidget::CachedAssociatedWeapon");
static_assert(offsetof(UFortReactorGradeReticleExtensionWidget, ReticleExtensionsToHide) == 888, "Offset mismatch for UFortReactorGradeReticleExtensionWidget::ReticleExtensionsToHide");

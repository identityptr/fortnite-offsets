/**
 * decamp dumper generated SDK
 * Package: /Script/BattleRoyaleGameplayAlerts
 */
#pragma once
#include "Basic.h"

// /Script/BattleRoyaleGameplayAlerts.FortEvent_AddGameplayAlertRequested
// Kind: ScriptStruct; super: none
struct FFortEvent_AddGameplayAlertRequested
{
public:
    std::uint8_t GameplayAlertTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEvent_AddGameplayAlertRequested, GameplayAlertTag) == 0, "Offset mismatch for FFortEvent_AddGameplayAlertRequested::GameplayAlertTag");

// /Script/BattleRoyaleGameplayAlerts.FortEvent_CurrentGameplayAlertChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_CurrentGameplayAlertChanged
{
public:
    std::uint8_t GameplayAlertTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEvent_CurrentGameplayAlertChanged, GameplayAlertTag) == 0, "Offset mismatch for FFortEvent_CurrentGameplayAlertChanged::GameplayAlertTag");

// /Script/BattleRoyaleGameplayAlerts.FortEvent_RemoveGameplayAlertRequested
// Kind: ScriptStruct; super: none
struct FFortEvent_RemoveGameplayAlertRequested
{
public:
    std::uint8_t GameplayAlertTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEvent_RemoveGameplayAlertRequested, GameplayAlertTag) == 0, "Offset mismatch for FFortEvent_RemoveGameplayAlertRequested::GameplayAlertTag");

// /Script/BattleRoyaleGameplayAlerts.GameplayAlertsControllerComponent
// Kind: Class; super: FortControllerComponent
class UGameplayAlertsControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UGameplayAlertsControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGameplayAlertsControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UGameplayAlertsControllerComponent, ComponentTags) == 104, "Offset mismatch for UGameplayAlertsControllerComponent::ComponentTags");
static_assert(offsetof(UGameplayAlertsControllerComponent, AssetUserData) == 120, "Offset mismatch for UGameplayAlertsControllerComponent::AssetUserData");
static_assert(offsetof(UGameplayAlertsControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGameplayAlertsControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UGameplayAlertsControllerComponent, bNetAddressable) == 152, "Offset mismatch for UGameplayAlertsControllerComponent::bNetAddressable");
static_assert(offsetof(UGameplayAlertsControllerComponent, bAutoActivate) == 154, "Offset mismatch for UGameplayAlertsControllerComponent::bAutoActivate");
static_assert(offsetof(UGameplayAlertsControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UGameplayAlertsControllerComponent::bIsEditorOnly");
static_assert(offsetof(UGameplayAlertsControllerComponent, CreationMethod) == 185, "Offset mismatch for UGameplayAlertsControllerComponent::CreationMethod");
static_assert(offsetof(UGameplayAlertsControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UGameplayAlertsControllerComponent::OnComponentActivated");
static_assert(offsetof(UGameplayAlertsControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGameplayAlertsControllerComponent::OnComponentDeactivated");

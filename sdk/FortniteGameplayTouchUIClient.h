/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteGameplayTouchUIClient
 */
#pragma once
#include "Basic.h"

// /Script/FortniteGameplayTouchUIClient.DynamicUIScenesForHUDContextFilter
// Kind: ScriptStruct; super: none
struct FDynamicUIScenesForHUDContextFilter
{
public:
    std::uint8_t ContextFilter[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    TArray<void*> DynamicUIScenes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDynamicUIScenesForHUDContextFilter, ContextFilter) == 0, "Offset mismatch for FDynamicUIScenesForHUDContextFilter::ContextFilter");
static_assert(offsetof(FDynamicUIScenesForHUDContextFilter, DynamicUIScenes) == 64, "Offset mismatch for FDynamicUIScenesForHUDContextFilter::DynamicUIScenes");

// /Script/FortniteGameplayTouchUIClient.HUDContextToUIScenesMapperDirectorComponent
// Kind: Class; super: FortDynamicUIDirectorComponent
class UHUDContextToUIScenesMapperDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CompiledHLTv2MigrationDatabase; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousHUDContexts[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    TArray<void*> ContextFilterToDynamicUIScenes; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHUDContextToUIScenesMapperDirectorComponent, CompiledHLTv2MigrationDatabase) == 192, "Offset mismatch for UHUDContextToUIScenesMapperDirectorComponent::CompiledHLTv2MigrationDatabase");
static_assert(offsetof(UHUDContextToUIScenesMapperDirectorComponent, PreviousHUDContexts) == 200, "Offset mismatch for UHUDContextToUIScenesMapperDirectorComponent::PreviousHUDContexts");
static_assert(offsetof(UHUDContextToUIScenesMapperDirectorComponent, ContextFilterToDynamicUIScenes) == 232, "Offset mismatch for UHUDContextToUIScenesMapperDirectorComponent::ContextFilterToDynamicUIScenes");

// /Script/FortniteGameplayTouchUIClient.UnallowRedirectDirectorComponent
// Kind: Class; super: ActorComponent
class UUnallowRedirectDirectorComponent
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

static_assert(offsetof(UUnallowRedirectDirectorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UUnallowRedirectDirectorComponent::PrimaryComponentTick");
static_assert(offsetof(UUnallowRedirectDirectorComponent, ComponentTags) == 104, "Offset mismatch for UUnallowRedirectDirectorComponent::ComponentTags");
static_assert(offsetof(UUnallowRedirectDirectorComponent, AssetUserData) == 120, "Offset mismatch for UUnallowRedirectDirectorComponent::AssetUserData");
static_assert(offsetof(UUnallowRedirectDirectorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UUnallowRedirectDirectorComponent::UCSSerializationIndex");
static_assert(offsetof(UUnallowRedirectDirectorComponent, bNetAddressable) == 152, "Offset mismatch for UUnallowRedirectDirectorComponent::bNetAddressable");
static_assert(offsetof(UUnallowRedirectDirectorComponent, bAutoActivate) == 154, "Offset mismatch for UUnallowRedirectDirectorComponent::bAutoActivate");
static_assert(offsetof(UUnallowRedirectDirectorComponent, bIsEditorOnly) == 155, "Offset mismatch for UUnallowRedirectDirectorComponent::bIsEditorOnly");
static_assert(offsetof(UUnallowRedirectDirectorComponent, CreationMethod) == 185, "Offset mismatch for UUnallowRedirectDirectorComponent::CreationMethod");
static_assert(offsetof(UUnallowRedirectDirectorComponent, OnComponentActivated) == 186, "Offset mismatch for UUnallowRedirectDirectorComponent::OnComponentActivated");
static_assert(offsetof(UUnallowRedirectDirectorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UUnallowRedirectDirectorComponent::OnComponentDeactivated");

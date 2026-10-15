/**
 * decamp dumper generated SDK
 * Package: /Script/ShowmanZap_GumboGrooveRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ShowmanZap_GumboGrooveRuntime.GumboGrooveStaggeredCueHandle
// Kind: ScriptStruct; super: none
struct FGumboGrooveStaggeredCueHandle
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FGumboGrooveStaggeredCueHandle, ID) == 0, "Offset mismatch for FGumboGrooveStaggeredCueHandle::ID");

// /Script/ShowmanZap_GumboGrooveRuntime.GumboGrooveStaggeredCueOp
// Kind: ScriptStruct; super: none
struct FGumboGrooveStaggeredCueOp
{
public:
    std::uint8_t Op; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> Target; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t GameplayCueTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t CueParameters[0xD0]; // 0x0010 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bOnlyNotifies; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGumboGrooveStaggeredCueOp, Op) == 0, "Offset mismatch for FGumboGrooveStaggeredCueOp::Op");
static_assert(offsetof(FGumboGrooveStaggeredCueOp, Target) == 4, "Offset mismatch for FGumboGrooveStaggeredCueOp::Target");
static_assert(offsetof(FGumboGrooveStaggeredCueOp, GameplayCueTag) == 12, "Offset mismatch for FGumboGrooveStaggeredCueOp::GameplayCueTag");
static_assert(offsetof(FGumboGrooveStaggeredCueOp, CueParameters) == 16, "Offset mismatch for FGumboGrooveStaggeredCueOp::CueParameters");
static_assert(offsetof(FGumboGrooveStaggeredCueOp, bOnlyNotifies) == 224, "Offset mismatch for FGumboGrooveStaggeredCueOp::bOnlyNotifies");

// /Script/ShowmanZap_GumboGrooveRuntime.GumboGrooveGameplayCueStaggerComponent
// Kind: Class; super: FortGameStateComponent
class UGumboGrooveGameplayCueStaggerComponent
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

static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::PrimaryComponentTick");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, ComponentTags) == 104, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::ComponentTags");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, AssetUserData) == 120, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::AssetUserData");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::UCSSerializationIndex");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, bNetAddressable) == 152, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::bNetAddressable");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, bAutoActivate) == 154, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::bAutoActivate");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, bIsEditorOnly) == 155, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::bIsEditorOnly");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, CreationMethod) == 185, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::CreationMethod");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, OnComponentActivated) == 186, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::OnComponentActivated");
static_assert(offsetof(UGumboGrooveGameplayCueStaggerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGumboGrooveGameplayCueStaggerComponent::OnComponentDeactivated");

// /Script/ShowmanZap_GumboGrooveRuntime.GumboGrooveGameplayCueStaggerLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGumboGrooveGameplayCueStaggerLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ShowmanZap_GumboGrooveRuntime.ShowmanZapGumboGrooveLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UShowmanZapGumboGrooveLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float IdleAddAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayingSecondaryMontages; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1175
    std::uint8_t TacticalSprintTagName[0x8]; // 0x1178 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShowmanZapGumboGrooveSecondaryIntroMontageObject[0x20]; // 0x1180 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ShowmanZapGumboGrooveTeleportEnterObject; // 0x11A0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UShowmanZapGumboGrooveLayerAnimInstance, IdleAddAlpha) == 4464, "Offset mismatch for UShowmanZapGumboGrooveLayerAnimInstance::IdleAddAlpha");
static_assert(offsetof(UShowmanZapGumboGrooveLayerAnimInstance, bIsPlayingSecondaryMontages) == 4468, "Offset mismatch for UShowmanZapGumboGrooveLayerAnimInstance::bIsPlayingSecondaryMontages");
static_assert(offsetof(UShowmanZapGumboGrooveLayerAnimInstance, TacticalSprintTagName) == 4472, "Offset mismatch for UShowmanZapGumboGrooveLayerAnimInstance::TacticalSprintTagName");
static_assert(offsetof(UShowmanZapGumboGrooveLayerAnimInstance, ShowmanZapGumboGrooveSecondaryIntroMontageObject) == 4480, "Offset mismatch for UShowmanZapGumboGrooveLayerAnimInstance::ShowmanZapGumboGrooveSecondaryIntroMontageObject");
static_assert(offsetof(UShowmanZapGumboGrooveLayerAnimInstance, ShowmanZapGumboGrooveTeleportEnterObject) == 4512, "Offset mismatch for UShowmanZapGumboGrooveLayerAnimInstance::ShowmanZapGumboGrooveTeleportEnterObject");

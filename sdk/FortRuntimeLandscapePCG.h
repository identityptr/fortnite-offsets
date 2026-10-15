/**
 * decamp dumper generated SDK
 * Package: /Script/FortRuntimeLandscapePCG
 */
#pragma once
#include "Basic.h"

// /Script/FortRuntimeLandscapePCG.FortRuntimeLandscapePCGGrassComponent
// Kind: Class; super: ActorComponent
class UFortRuntimeLandscapePCGGrassComponent
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

static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::PrimaryComponentTick");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, ComponentTags) == 104, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::ComponentTags");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, AssetUserData) == 120, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::AssetUserData");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::UCSSerializationIndex");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, bNetAddressable) == 152, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::bNetAddressable");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, bAutoActivate) == 154, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::bAutoActivate");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::bIsEditorOnly");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, CreationMethod) == 185, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::CreationMethod");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, OnComponentActivated) == 186, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::OnComponentActivated");
static_assert(offsetof(UFortRuntimeLandscapePCGGrassComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortRuntimeLandscapePCGGrassComponent::OnComponentDeactivated");

// /Script/FortRuntimeLandscapePCG.PCGFortRuntimeLandscapeGenerateTexturesSettings
// Kind: Class; super: PCGSettings
class UPCGFortRuntimeLandscapeGenerateTexturesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SelectedGrassTypes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideFromInput; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t GrassTypesAttribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExcludeSelectedGrassTypes; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFortRuntimeLandscapeGenerateTexturesSettings, SelectedGrassTypes) == 168, "Offset mismatch for UPCGFortRuntimeLandscapeGenerateTexturesSettings::SelectedGrassTypes");
static_assert(offsetof(UPCGFortRuntimeLandscapeGenerateTexturesSettings, bOverrideFromInput) == 184, "Offset mismatch for UPCGFortRuntimeLandscapeGenerateTexturesSettings::bOverrideFromInput");
static_assert(offsetof(UPCGFortRuntimeLandscapeGenerateTexturesSettings, GrassTypesAttribute) == 192, "Offset mismatch for UPCGFortRuntimeLandscapeGenerateTexturesSettings::GrassTypesAttribute");
static_assert(offsetof(UPCGFortRuntimeLandscapeGenerateTexturesSettings, bExcludeSelectedGrassTypes) == 240, "Offset mismatch for UPCGFortRuntimeLandscapeGenerateTexturesSettings::bExcludeSelectedGrassTypes");

// /Script/FortRuntimeLandscapePCG.PCGFortRuntimeLandscapeGetGrassTypesSettings
// Kind: Class; super: PCGSettings
class UPCGFortRuntimeLandscapeGetGrassTypesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t GrassNameAttributeName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t GrassTypeAttributeName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t bExcludeSelectedGrassTypes; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    TArray<void*> SelectedGrassTypes; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGFortRuntimeLandscapeGetGrassTypesSettings, GrassNameAttributeName) == 168, "Offset mismatch for UPCGFortRuntimeLandscapeGetGrassTypesSettings::GrassNameAttributeName");
static_assert(offsetof(UPCGFortRuntimeLandscapeGetGrassTypesSettings, GrassTypeAttributeName) == 172, "Offset mismatch for UPCGFortRuntimeLandscapeGetGrassTypesSettings::GrassTypeAttributeName");
static_assert(offsetof(UPCGFortRuntimeLandscapeGetGrassTypesSettings, bExcludeSelectedGrassTypes) == 176, "Offset mismatch for UPCGFortRuntimeLandscapeGetGrassTypesSettings::bExcludeSelectedGrassTypes");
static_assert(offsetof(UPCGFortRuntimeLandscapeGetGrassTypesSettings, SelectedGrassTypes) == 184, "Offset mismatch for UPCGFortRuntimeLandscapeGetGrassTypesSettings::SelectedGrassTypes");

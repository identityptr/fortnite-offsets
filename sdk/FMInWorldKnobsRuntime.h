/**
 * decamp dumper generated SDK
 * Package: /Script/FMInWorldKnobsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMInWorldKnobsRuntime.FMCableAdditionalConnection
// Kind: ScriptStruct; super: none
struct FFMCableAdditionalConnection
{
public:
    FName OutputPortName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> Device; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFMCableAdditionalConnection, OutputPortName) == 0, "Offset mismatch for FFMCableAdditionalConnection::OutputPortName");
static_assert(offsetof(FFMCableAdditionalConnection, Device) == 8, "Offset mismatch for FFMCableAdditionalConnection::Device");

// /Script/FMInWorldKnobsRuntime.FMCableConnection
// Kind: ScriptStruct; super: none
struct FFMCableConnection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName OutputPortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Device[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    FName ComponentName; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> InputConnections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PortDirectionType; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFMCableConnection, OutputPortName) == 8, "Offset mismatch for FFMCableConnection::OutputPortName");
static_assert(offsetof(FFMCableConnection, Device) == 16, "Offset mismatch for FFMCableConnection::Device");
static_assert(offsetof(FFMCableConnection, ComponentName) == 48, "Offset mismatch for FFMCableConnection::ComponentName");
static_assert(offsetof(FFMCableConnection, InputConnections) == 56, "Offset mismatch for FFMCableConnection::InputConnections");
static_assert(offsetof(FFMCableConnection, PortDirectionType) == 72, "Offset mismatch for FFMCableConnection::PortDirectionType");

// /Script/FMInWorldKnobsRuntime.FMIncomingCableConnection
// Kind: ScriptStruct; super: FMCableConnection
struct FFMIncomingCableConnection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName OutputPortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Device[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    FName ComponentName; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> InputConnections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PortDirectionType; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFMIncomingCableConnection, OutputPortName) == 8, "Offset mismatch for FFMIncomingCableConnection::OutputPortName");
static_assert(offsetof(FFMIncomingCableConnection, Device) == 16, "Offset mismatch for FFMIncomingCableConnection::Device");
static_assert(offsetof(FFMIncomingCableConnection, ComponentName) == 48, "Offset mismatch for FFMIncomingCableConnection::ComponentName");
static_assert(offsetof(FFMIncomingCableConnection, InputConnections) == 56, "Offset mismatch for FFMIncomingCableConnection::InputConnections");
static_assert(offsetof(FFMIncomingCableConnection, PortDirectionType) == 72, "Offset mismatch for FFMIncomingCableConnection::PortDirectionType");

// /Script/FMInWorldKnobsRuntime.FMLinkPreset
// Kind: ScriptStruct; super: none
struct FFMLinkPreset
{
public:
    std::uint8_t bIsLinked; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t SelectionSampleIndexName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t UnlinkedSelectionSampleIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t UnlinkedKitIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MainKitIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFMLinkPreset, bIsLinked) == 0, "Offset mismatch for FFMLinkPreset::bIsLinked");
static_assert(offsetof(FFMLinkPreset, SelectionSampleIndexName) == 4, "Offset mismatch for FFMLinkPreset::SelectionSampleIndexName");
static_assert(offsetof(FFMLinkPreset, UnlinkedSelectionSampleIndex) == 8, "Offset mismatch for FFMLinkPreset::UnlinkedSelectionSampleIndex");
static_assert(offsetof(FFMLinkPreset, UnlinkedKitIndex) == 12, "Offset mismatch for FFMLinkPreset::UnlinkedKitIndex");
static_assert(offsetof(FFMLinkPreset, MainKitIndex) == 16, "Offset mismatch for FFMLinkPreset::MainKitIndex");

// /Script/FMInWorldKnobsRuntime.FMOutgoingCableConnection
// Kind: ScriptStruct; super: FMCableConnection
struct FFMOutgoingCableConnection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName OutputPortName; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Device[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    FName ComponentName; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> InputConnections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PortDirectionType; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFMOutgoingCableConnection, OutputPortName) == 8, "Offset mismatch for FFMOutgoingCableConnection::OutputPortName");
static_assert(offsetof(FFMOutgoingCableConnection, Device) == 16, "Offset mismatch for FFMOutgoingCableConnection::Device");
static_assert(offsetof(FFMOutgoingCableConnection, ComponentName) == 48, "Offset mismatch for FFMOutgoingCableConnection::ComponentName");
static_assert(offsetof(FFMOutgoingCableConnection, InputConnections) == 56, "Offset mismatch for FFMOutgoingCableConnection::InputConnections");
static_assert(offsetof(FFMOutgoingCableConnection, PortDirectionType) == 72, "Offset mismatch for FFMOutgoingCableConnection::PortDirectionType");

// /Script/FMInWorldKnobsRuntime.FabricScreenLayout
// Kind: ScriptStruct; super: FabricWidgetLayout
struct FFabricScreenLayout
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName UserOptionName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFabricScreenLayout, UserOptionName) == 24, "Offset mismatch for FFabricScreenLayout::UserOptionName");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionPreset
// Kind: ScriptStruct; super: none
struct FFabricUserOptionPreset
{
public:
    FString UserOption; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t UserOptionValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricUserOptionPreset, UserOption) == 0, "Offset mismatch for FFabricUserOptionPreset::UserOption");
static_assert(offsetof(FFabricUserOptionPreset, UserOptionValue) == 16, "Offset mismatch for FFabricUserOptionPreset::UserOptionValue");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetCollection
// Kind: ScriptStruct; super: none
struct FFabricUserOptionPresetCollection
{
public:
    TArray<void*> UserOptionPresets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricUserOptionPresetCollection, UserOptionPresets) == 0, "Offset mismatch for FFabricUserOptionPresetCollection::UserOptionPresets");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveData
// Kind: ScriptStruct; super: none
struct FFabricUserOptionSaveData
{
public:
    TArray<void*> SavedUserOptions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricUserOptionSaveData, SavedUserOptions) == 0, "Offset mismatch for FFabricUserOptionSaveData::SavedUserOptions");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionSavedValue
// Kind: ScriptStruct; super: none
struct FFabricUserOptionSavedValue
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFabricUserOptionSavedValue, Key) == 0, "Offset mismatch for FFabricUserOptionSavedValue::Key");
static_assert(offsetof(FFabricUserOptionSavedValue, Value) == 16, "Offset mismatch for FFabricUserOptionSavedValue::Value");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionValue
// Kind: ScriptStruct; super: none
struct FFabricUserOptionValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMInWorldKnobsRuntime.FabricUserOptionValueBool
// Kind: ScriptStruct; super: FabricUserOptionValue
struct FFabricUserOptionValueBool
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFabricUserOptionValueBool, Value) == 8, "Offset mismatch for FFabricUserOptionValueBool::Value");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionValueEnum
// Kind: ScriptStruct; super: FabricUserOptionValue
struct FFabricUserOptionValueEnum
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFabricUserOptionValueEnum, Value) == 8, "Offset mismatch for FFabricUserOptionValueEnum::Value");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionValueFloat
// Kind: ScriptStruct; super: FabricUserOptionValue
struct FFabricUserOptionValueFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFabricUserOptionValueFloat, Value) == 8, "Offset mismatch for FFabricUserOptionValueFloat::Value");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionValueInt
// Kind: ScriptStruct; super: FabricUserOptionValue
struct FFabricUserOptionValueInt
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Value; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricUserOptionValueInt, Value) == 8, "Offset mismatch for FFabricUserOptionValueInt::Value");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionValueString
// Kind: ScriptStruct; super: FabricUserOptionValue
struct FFabricUserOptionValueString
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFabricUserOptionValueString, Value) == 8, "Offset mismatch for FFabricUserOptionValueString::Value");

// /Script/FMInWorldKnobsRuntime.FabricWidgetLayout
// Kind: ScriptStruct; super: none
struct FFabricWidgetLayout
{
public:
    std::uint8_t GridPosition[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* FabricWidgetClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFabricWidgetLayout, GridPosition) == 0, "Offset mismatch for FFabricWidgetLayout::GridPosition");
static_assert(offsetof(FFabricWidgetLayout, FabricWidgetClass) == 16, "Offset mismatch for FFabricWidgetLayout::FabricWidgetClass");

// /Script/FMInWorldKnobsRuntime.FloatProviderState
// Kind: ScriptStruct; super: none
struct FFloatProviderState
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Weight; // 0x0004 (Size: 0x4, Type: IntProperty)
    float LastValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatProviderState, bEnabled) == 0, "Offset mismatch for FFloatProviderState::bEnabled");
static_assert(offsetof(FFloatProviderState, Weight) == 4, "Offset mismatch for FFloatProviderState::Weight");
static_assert(offsetof(FFloatProviderState, LastValue) == 8, "Offset mismatch for FFloatProviderState::LastValue");

// /Script/FMInWorldKnobsRuntime.ScreenMeshArray
// Kind: ScriptStruct; super: none
struct FScreenMeshArray
{
public:
    TArray<void*> ScreenMeshArrayByHeight; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FScreenMeshArray, ScreenMeshArrayByHeight) == 0, "Offset mismatch for FScreenMeshArray::ScreenMeshArrayByHeight");

// /Script/FMInWorldKnobsRuntime.ScreenWidgetLayoutInfo
// Kind: ScriptStruct; super: none
struct FScreenWidgetLayoutInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMIncomingConnectionMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionFMIncomingConnectionMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionFMIncomingConnectionMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionFMIncomingConnectionMetaData::DefaultValue");

// /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMLinkPresetMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionFMLinkPresetMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionFMLinkPresetMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionFMLinkPresetMetaData::DefaultValue");

// /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMOutgoingConnectionMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionFMOutgoingConnectionMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionFMOutgoingConnectionMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionFMOutgoingConnectionMetaData::DefaultValue");

// /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
// Kind: Class; super: ActorComponent
class UFMInWorldCableOptionsComponent
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

static_assert(offsetof(UFMInWorldCableOptionsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFMInWorldCableOptionsComponent::PrimaryComponentTick");
static_assert(offsetof(UFMInWorldCableOptionsComponent, ComponentTags) == 104, "Offset mismatch for UFMInWorldCableOptionsComponent::ComponentTags");
static_assert(offsetof(UFMInWorldCableOptionsComponent, AssetUserData) == 120, "Offset mismatch for UFMInWorldCableOptionsComponent::AssetUserData");
static_assert(offsetof(UFMInWorldCableOptionsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFMInWorldCableOptionsComponent::UCSSerializationIndex");
static_assert(offsetof(UFMInWorldCableOptionsComponent, bNetAddressable) == 152, "Offset mismatch for UFMInWorldCableOptionsComponent::bNetAddressable");
static_assert(offsetof(UFMInWorldCableOptionsComponent, bAutoActivate) == 154, "Offset mismatch for UFMInWorldCableOptionsComponent::bAutoActivate");
static_assert(offsetof(UFMInWorldCableOptionsComponent, bIsEditorOnly) == 155, "Offset mismatch for UFMInWorldCableOptionsComponent::bIsEditorOnly");
static_assert(offsetof(UFMInWorldCableOptionsComponent, CreationMethod) == 185, "Offset mismatch for UFMInWorldCableOptionsComponent::CreationMethod");
static_assert(offsetof(UFMInWorldCableOptionsComponent, OnComponentActivated) == 186, "Offset mismatch for UFMInWorldCableOptionsComponent::OnComponentActivated");
static_assert(offsetof(UFMInWorldCableOptionsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFMInWorldCableOptionsComponent::OnComponentDeactivated");

// /Script/FMInWorldKnobsRuntime.FMInWorldDrumPlayerOptionsComponent
// Kind: Class; super: FMInWorldKnobOptionsBaseComponent
class UFMInWorldDrumPlayerOptionsComponent
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    TMap<void*, void*> SlotPropertyNameToParam; // 0x0198 (Size: 0x10, Type: MapProperty)
    TArray<void*> LinkButtonComponents; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectionSampleCarouselComponents; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ParamNameToLinkedCheckBoxWidgetText; // 0x01C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ParamNameToSamplePropertyBoxWidgetText; // 0x01D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t LinkedCheckBoxToolTipText[0x10]; // 0x01E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SampleNamePropertyBoxToolTipText[0x10]; // 0x01F8 (Size: 0x10, Type: TextProperty)
    TArray<void*> SlotUserOptions; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotLinkUserOptions; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotSampleUserOptions; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    FString MainKitParamUseroption; // 0x0238 (Size: 0x10, Type: StrProperty)
    void* DrumPlayerBank; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    void* MainKitIndexComponent; // 0x0250 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SlotPropertyNameToParam) == 408, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SlotPropertyNameToParam");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, LinkButtonComponents) == 424, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::LinkButtonComponents");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SelectionSampleCarouselComponents) == 440, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SelectionSampleCarouselComponents");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, ParamNameToLinkedCheckBoxWidgetText) == 456, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::ParamNameToLinkedCheckBoxWidgetText");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, ParamNameToSamplePropertyBoxWidgetText) == 472, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::ParamNameToSamplePropertyBoxWidgetText");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, LinkedCheckBoxToolTipText) == 488, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::LinkedCheckBoxToolTipText");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SampleNamePropertyBoxToolTipText) == 504, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SampleNamePropertyBoxToolTipText");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SlotUserOptions) == 520, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SlotUserOptions");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SlotLinkUserOptions) == 536, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SlotLinkUserOptions");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, SlotSampleUserOptions) == 552, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::SlotSampleUserOptions");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, MainKitParamUseroption) == 568, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::MainKitParamUseroption");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, DrumPlayerBank) == 584, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::DrumPlayerBank");
static_assert(offsetof(UFMInWorldDrumPlayerOptionsComponent, MainKitIndexComponent) == 592, "Offset mismatch for UFMInWorldDrumPlayerOptionsComponent::MainKitIndexComponent");

// /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase
// Kind: Class; super: Actor
class UFMInWorldKnobActorBase
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    FMulticastInlineDelegate OnModulatedPropertyValueChanged; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKnobRuntimeValueChanged; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKnobSerializedValueChanged; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFloatProviderConnectionChanged; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString OptionKey; // 0x02D0 (Size: 0x10, Type: StrProperty)
    std::uint8_t OverriddenTitle[0x10]; // 0x02E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t OverriddenDescription[0x10]; // 0x02F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCanBeModulated; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKnobEnabled; // 0x0301 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKnobDisplayOnly; // 0x0302 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestrictSettingNumericValues; // 0x0303 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0304
    void* ModulatorPortParent; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ModulatorPort; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0318
    std::uint8_t GameplayTags[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    void* MyUserOption; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x40]; // 0x0350
    TArray<void*> CurrentFloatProviders; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x18]; // 0x03A0
    void* HitComponent; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> InteractingController; // 0x03C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InteractableType; // 0x03C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x03C9
    TWeakObjectPtr<void> WidgetViewModel; // 0x03CC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x4]; // 0x03D4
    TArray<void*> AttachedButtons; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideLabels; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OptionLabels; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OptionValues; // 0x0408 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SerializedOptionIndex; // 0x0418 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentOptionIndex; // 0x041C (Size: 0x4, Type: IntProperty)
    FString SerializedUnrestrictedOptionValue; // 0x0420 (Size: 0x10, Type: StrProperty)
    FString CurrentUnrestrictedOptionValue; // 0x0430 (Size: 0x10, Type: StrProperty)
    float CurrentAlpha; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float AlphaAtStartOfTransition; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float ClampedKnobValue; // 0x0448 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTrackingInput; // 0x044C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisibilityBound; // 0x044D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMInWorldKnobActorBase, OnModulatedPropertyValueChanged) == 656, "Offset mismatch for UFMInWorldKnobActorBase::OnModulatedPropertyValueChanged");
static_assert(offsetof(UFMInWorldKnobActorBase, OnKnobRuntimeValueChanged) == 672, "Offset mismatch for UFMInWorldKnobActorBase::OnKnobRuntimeValueChanged");
static_assert(offsetof(UFMInWorldKnobActorBase, OnKnobSerializedValueChanged) == 688, "Offset mismatch for UFMInWorldKnobActorBase::OnKnobSerializedValueChanged");
static_assert(offsetof(UFMInWorldKnobActorBase, OnFloatProviderConnectionChanged) == 704, "Offset mismatch for UFMInWorldKnobActorBase::OnFloatProviderConnectionChanged");
static_assert(offsetof(UFMInWorldKnobActorBase, OptionKey) == 720, "Offset mismatch for UFMInWorldKnobActorBase::OptionKey");
static_assert(offsetof(UFMInWorldKnobActorBase, OverriddenTitle) == 736, "Offset mismatch for UFMInWorldKnobActorBase::OverriddenTitle");
static_assert(offsetof(UFMInWorldKnobActorBase, OverriddenDescription) == 752, "Offset mismatch for UFMInWorldKnobActorBase::OverriddenDescription");
static_assert(offsetof(UFMInWorldKnobActorBase, bCanBeModulated) == 768, "Offset mismatch for UFMInWorldKnobActorBase::bCanBeModulated");
static_assert(offsetof(UFMInWorldKnobActorBase, bKnobEnabled) == 769, "Offset mismatch for UFMInWorldKnobActorBase::bKnobEnabled");
static_assert(offsetof(UFMInWorldKnobActorBase, bKnobDisplayOnly) == 770, "Offset mismatch for UFMInWorldKnobActorBase::bKnobDisplayOnly");
static_assert(offsetof(UFMInWorldKnobActorBase, bRestrictSettingNumericValues) == 771, "Offset mismatch for UFMInWorldKnobActorBase::bRestrictSettingNumericValues");
static_assert(offsetof(UFMInWorldKnobActorBase, ModulatorPortParent) == 776, "Offset mismatch for UFMInWorldKnobActorBase::ModulatorPortParent");
static_assert(offsetof(UFMInWorldKnobActorBase, ModulatorPort) == 784, "Offset mismatch for UFMInWorldKnobActorBase::ModulatorPort");
static_assert(offsetof(UFMInWorldKnobActorBase, GameplayTags) == 800, "Offset mismatch for UFMInWorldKnobActorBase::GameplayTags");
static_assert(offsetof(UFMInWorldKnobActorBase, MyUserOption) == 840, "Offset mismatch for UFMInWorldKnobActorBase::MyUserOption");
static_assert(offsetof(UFMInWorldKnobActorBase, CurrentFloatProviders) == 912, "Offset mismatch for UFMInWorldKnobActorBase::CurrentFloatProviders");
static_assert(offsetof(UFMInWorldKnobActorBase, HitComponent) == 952, "Offset mismatch for UFMInWorldKnobActorBase::HitComponent");
static_assert(offsetof(UFMInWorldKnobActorBase, InteractingController) == 960, "Offset mismatch for UFMInWorldKnobActorBase::InteractingController");
static_assert(offsetof(UFMInWorldKnobActorBase, InteractableType) == 968, "Offset mismatch for UFMInWorldKnobActorBase::InteractableType");
static_assert(offsetof(UFMInWorldKnobActorBase, WidgetViewModel) == 972, "Offset mismatch for UFMInWorldKnobActorBase::WidgetViewModel");
static_assert(offsetof(UFMInWorldKnobActorBase, AttachedButtons) == 984, "Offset mismatch for UFMInWorldKnobActorBase::AttachedButtons");
static_assert(offsetof(UFMInWorldKnobActorBase, OverrideLabels) == 1000, "Offset mismatch for UFMInWorldKnobActorBase::OverrideLabels");
static_assert(offsetof(UFMInWorldKnobActorBase, OptionLabels) == 1016, "Offset mismatch for UFMInWorldKnobActorBase::OptionLabels");
static_assert(offsetof(UFMInWorldKnobActorBase, OptionValues) == 1032, "Offset mismatch for UFMInWorldKnobActorBase::OptionValues");
static_assert(offsetof(UFMInWorldKnobActorBase, SerializedOptionIndex) == 1048, "Offset mismatch for UFMInWorldKnobActorBase::SerializedOptionIndex");
static_assert(offsetof(UFMInWorldKnobActorBase, CurrentOptionIndex) == 1052, "Offset mismatch for UFMInWorldKnobActorBase::CurrentOptionIndex");
static_assert(offsetof(UFMInWorldKnobActorBase, SerializedUnrestrictedOptionValue) == 1056, "Offset mismatch for UFMInWorldKnobActorBase::SerializedUnrestrictedOptionValue");
static_assert(offsetof(UFMInWorldKnobActorBase, CurrentUnrestrictedOptionValue) == 1072, "Offset mismatch for UFMInWorldKnobActorBase::CurrentUnrestrictedOptionValue");
static_assert(offsetof(UFMInWorldKnobActorBase, CurrentAlpha) == 1088, "Offset mismatch for UFMInWorldKnobActorBase::CurrentAlpha");
static_assert(offsetof(UFMInWorldKnobActorBase, AlphaAtStartOfTransition) == 1092, "Offset mismatch for UFMInWorldKnobActorBase::AlphaAtStartOfTransition");
static_assert(offsetof(UFMInWorldKnobActorBase, ClampedKnobValue) == 1096, "Offset mismatch for UFMInWorldKnobActorBase::ClampedKnobValue");
static_assert(offsetof(UFMInWorldKnobActorBase, bTrackingInput) == 1100, "Offset mismatch for UFMInWorldKnobActorBase::bTrackingInput");
static_assert(offsetof(UFMInWorldKnobActorBase, bIsVisibilityBound) == 1101, "Offset mismatch for UFMInWorldKnobActorBase::bIsVisibilityBound");

// /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
// Kind: Class; super: FabricChildActorComponent
class UFMInWorldKnobActorCopyComponent
{
public:
    std::uint8_t Pad_0000[0x328]; // 0x0000
    FMulticastInlineDelegate OnModulatedPropertyValueChanged; // 0x0328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKnobRuntimeValueChanged; // 0x0338 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKnobSerializedValueChanged; // 0x0348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFloatProviderConnectionChanged; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKnobActorSet; // 0x0368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* DefaultKnobActorClass; // 0x0378 (Size: 0x8, Type: ClassProperty)
    void* InWorldKnobActor; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    FString OptionKey; // 0x0388 (Size: 0x10, Type: StrProperty)
    std::uint8_t OverriddenTitle[0x10]; // 0x0398 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCanBeModulated; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKnobEnabled; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x03AA
    void* OuterUserOption; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OuterFabricUserOption[0x68]; // 0x03B8 (Size: 0x68, Type: StructProperty)
    void* CopiedUserOption; // 0x0420 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OnModulatedPropertyValueChanged) == 808, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OnModulatedPropertyValueChanged");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OnKnobRuntimeValueChanged) == 824, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OnKnobRuntimeValueChanged");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OnKnobSerializedValueChanged) == 840, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OnKnobSerializedValueChanged");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OnFloatProviderConnectionChanged) == 856, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OnFloatProviderConnectionChanged");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OnKnobActorSet) == 872, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OnKnobActorSet");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, DefaultKnobActorClass) == 888, "Offset mismatch for UFMInWorldKnobActorCopyComponent::DefaultKnobActorClass");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, InWorldKnobActor) == 896, "Offset mismatch for UFMInWorldKnobActorCopyComponent::InWorldKnobActor");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OptionKey) == 904, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OptionKey");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OverriddenTitle) == 920, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OverriddenTitle");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, bCanBeModulated) == 936, "Offset mismatch for UFMInWorldKnobActorCopyComponent::bCanBeModulated");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, bKnobEnabled) == 937, "Offset mismatch for UFMInWorldKnobActorCopyComponent::bKnobEnabled");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OuterUserOption) == 944, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OuterUserOption");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, OuterFabricUserOption) == 952, "Offset mismatch for UFMInWorldKnobActorCopyComponent::OuterFabricUserOption");
static_assert(offsetof(UFMInWorldKnobActorCopyComponent, CopiedUserOption) == 1056, "Offset mismatch for UFMInWorldKnobActorCopyComponent::CopiedUserOption");

// /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsBaseComponent
// Kind: Class; super: ActorComponent
class UFMInWorldKnobOptionsBaseComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnInitialKnobValuesLoaded; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllKnobsLoaded; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnyKnobRuntimeValueChanged; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnyKnobSerializedValueChanged; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t InWorldKnobInterfaceObjects[0x10]; // 0x0108 (Size: 0x10, Type: SetProperty)
    void* BuildingActorOwner; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* OwnerClass; // 0x0120 (Size: 0x8, Type: ClassProperty)
    void* SaveComponent; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PropertiesEditedByUserOptions; // 0x0130 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OptionKeyToInWorldKnobObject; // 0x0140 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OptionKeyToModulatorPort; // 0x0150 (Size: 0x10, Type: MapProperty)
    TArray<void*> PendingFabricModulatables; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActorSaveRequestTimer[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OnInitialKnobValuesLoaded) == 200, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OnInitialKnobValuesLoaded");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OnAllKnobsLoaded) == 216, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OnAllKnobsLoaded");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OnAnyKnobRuntimeValueChanged) == 232, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OnAnyKnobRuntimeValueChanged");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OnAnyKnobSerializedValueChanged) == 248, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OnAnyKnobSerializedValueChanged");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, InWorldKnobInterfaceObjects) == 264, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::InWorldKnobInterfaceObjects");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, BuildingActorOwner) == 280, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::BuildingActorOwner");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OwnerClass) == 288, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OwnerClass");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, SaveComponent) == 296, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::SaveComponent");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, PropertiesEditedByUserOptions) == 304, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::PropertiesEditedByUserOptions");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OptionKeyToInWorldKnobObject) == 320, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OptionKeyToInWorldKnobObject");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, OptionKeyToModulatorPort) == 336, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::OptionKeyToModulatorPort");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, PendingFabricModulatables) == 352, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::PendingFabricModulatables");
static_assert(offsetof(UFMInWorldKnobOptionsBaseComponent, ActorSaveRequestTimer) == 368, "Offset mismatch for UFMInWorldKnobOptionsBaseComponent::ActorSaveRequestTimer");

// /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent
// Kind: Class; super: FMInWorldKnobOptionsBaseComponent
class UFMInWorldKnobOptionsComponent
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    TArray<void*> ReplicatedInWorldKnobInterfaceObjects; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedFabricInteractableObjects; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedModulatorPorts; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMInWorldKnobOptionsComponent, ReplicatedInWorldKnobInterfaceObjects) == 408, "Offset mismatch for UFMInWorldKnobOptionsComponent::ReplicatedInWorldKnobInterfaceObjects");
static_assert(offsetof(UFMInWorldKnobOptionsComponent, ReplicatedFabricInteractableObjects) == 424, "Offset mismatch for UFMInWorldKnobOptionsComponent::ReplicatedFabricInteractableObjects");
static_assert(offsetof(UFMInWorldKnobOptionsComponent, ReplicatedModulatorPorts) == 440, "Offset mismatch for UFMInWorldKnobOptionsComponent::ReplicatedModulatorPorts");

// /Script/FMInWorldKnobsRuntime.FabricChildActorComponent
// Kind: Class; super: ChildActorComponent
class UFabricChildActorComponent
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* InWorldKnobModulatorPort; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseScreenGrid; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02A9
    std::uint8_t ScreenGridPosition[0x10]; // 0x02B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModulatorPortSaveData[0x40]; // 0x02C0 (Size: 0x40, Type: StructProperty)
    void* CableManagerClassForModulatorPorts; // 0x0300 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricChildActorComponent, InWorldKnobModulatorPort) == 672, "Offset mismatch for UFabricChildActorComponent::InWorldKnobModulatorPort");
static_assert(offsetof(UFabricChildActorComponent, bUseScreenGrid) == 680, "Offset mismatch for UFabricChildActorComponent::bUseScreenGrid");
static_assert(offsetof(UFabricChildActorComponent, ScreenGridPosition) == 688, "Offset mismatch for UFabricChildActorComponent::ScreenGridPosition");
static_assert(offsetof(UFabricChildActorComponent, ModulatorPortSaveData) == 704, "Offset mismatch for UFabricChildActorComponent::ModulatorPortSaveData");
static_assert(offsetof(UFabricChildActorComponent, CableManagerClassForModulatorPorts) == 768, "Offset mismatch for UFabricChildActorComponent::CableManagerClassForModulatorPorts");

// /Script/FMInWorldKnobsRuntime.FabricChildActorTickSubsystem
// Kind: Class; super: FortManagedTickSubsystem
class UFabricChildActorTickSubsystem
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> ChildActorComponentsPendingSpawn; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricChildActorTickSubsystem, ChildActorComponentsPendingSpawn) == 160, "Offset mismatch for UFabricChildActorTickSubsystem::ChildActorComponentsPendingSpawn");

// /Script/FMInWorldKnobsRuntime.FabricScreenComponent
// Kind: Class; super: SceneComponent
class UFabricScreenComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    FMulticastInlineDelegate OnWidgetCreated; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWidgetAdded; // 0x0250 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0260
    TWeakObjectPtr<void> ScreenWidget; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ScreenWidgetComponent; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> CopyComponentsToWidget; // 0x0288 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFabricScreenComponent, OnWidgetCreated) == 576, "Offset mismatch for UFabricScreenComponent::OnWidgetCreated");
static_assert(offsetof(UFabricScreenComponent, OnWidgetAdded) == 592, "Offset mismatch for UFabricScreenComponent::OnWidgetAdded");
static_assert(offsetof(UFabricScreenComponent, ScreenWidget) == 632, "Offset mismatch for UFabricScreenComponent::ScreenWidget");
static_assert(offsetof(UFabricScreenComponent, ScreenWidgetComponent) == 640, "Offset mismatch for UFabricScreenComponent::ScreenWidgetComponent");
static_assert(offsetof(UFabricScreenComponent, CopyComponentsToWidget) == 648, "Offset mismatch for UFabricScreenComponent::CopyComponentsToWidget");

// /Script/FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
// Kind: Class; super: DataAsset
class UFabricScreenLayoutDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Layout; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalWidgetLayout; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* FabricScreenWidgetClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricScreenLayoutDataAsset, Layout) == 40, "Offset mismatch for UFabricScreenLayoutDataAsset::Layout");
static_assert(offsetof(UFabricScreenLayoutDataAsset, AdditionalWidgetLayout) == 56, "Offset mismatch for UFabricScreenLayoutDataAsset::AdditionalWidgetLayout");
static_assert(offsetof(UFabricScreenLayoutDataAsset, FabricScreenWidgetClass) == 72, "Offset mismatch for UFabricScreenLayoutDataAsset::FabricScreenWidgetClass");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetAsset
// Kind: Class; super: DataAsset
class UFabricUserOptionPresetAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UserOptionPreset[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricUserOptionPresetAsset, UserOptionPreset) == 40, "Offset mismatch for UFabricUserOptionPresetAsset::UserOptionPreset");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent
// Kind: Class; super: ActorComponent
class UFabricUserOptionSaveComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> UserOptionsToSave; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSaveSlots; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    FString SaveIndexParam; // 0x00E0 (Size: 0x10, Type: StrProperty)
    TArray<void*> PresetAssets; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    FString PresetIndexParam; // 0x0100 (Size: 0x10, Type: StrProperty)
    FString ApplyIndexImmediatelyToggleParam; // 0x0110 (Size: 0x10, Type: StrProperty)
    FMulticastInlineDelegate OnActiveOverridesChanged; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Owner; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* UserOptionSaveModulatable; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0140
    TArray<void*> Presets; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Saves; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FloatUserOptions[0x10]; // 0x0168 (Size: 0x10, Type: SetProperty)
    std::int32_t ActiveSaveIndex; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::int32_t ActivePresetIndex; // 0x017C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFabricUserOptionSaveComponent, UserOptionsToSave) == 200, "Offset mismatch for UFabricUserOptionSaveComponent::UserOptionsToSave");
static_assert(offsetof(UFabricUserOptionSaveComponent, MaxSaveSlots) == 216, "Offset mismatch for UFabricUserOptionSaveComponent::MaxSaveSlots");
static_assert(offsetof(UFabricUserOptionSaveComponent, SaveIndexParam) == 224, "Offset mismatch for UFabricUserOptionSaveComponent::SaveIndexParam");
static_assert(offsetof(UFabricUserOptionSaveComponent, PresetAssets) == 240, "Offset mismatch for UFabricUserOptionSaveComponent::PresetAssets");
static_assert(offsetof(UFabricUserOptionSaveComponent, PresetIndexParam) == 256, "Offset mismatch for UFabricUserOptionSaveComponent::PresetIndexParam");
static_assert(offsetof(UFabricUserOptionSaveComponent, ApplyIndexImmediatelyToggleParam) == 272, "Offset mismatch for UFabricUserOptionSaveComponent::ApplyIndexImmediatelyToggleParam");
static_assert(offsetof(UFabricUserOptionSaveComponent, OnActiveOverridesChanged) == 288, "Offset mismatch for UFabricUserOptionSaveComponent::OnActiveOverridesChanged");
static_assert(offsetof(UFabricUserOptionSaveComponent, Owner) == 304, "Offset mismatch for UFabricUserOptionSaveComponent::Owner");
static_assert(offsetof(UFabricUserOptionSaveComponent, UserOptionSaveModulatable) == 312, "Offset mismatch for UFabricUserOptionSaveComponent::UserOptionSaveModulatable");
static_assert(offsetof(UFabricUserOptionSaveComponent, Presets) == 328, "Offset mismatch for UFabricUserOptionSaveComponent::Presets");
static_assert(offsetof(UFabricUserOptionSaveComponent, Saves) == 344, "Offset mismatch for UFabricUserOptionSaveComponent::Saves");
static_assert(offsetof(UFabricUserOptionSaveComponent, FloatUserOptions) == 360, "Offset mismatch for UFabricUserOptionSaveComponent::FloatUserOptions");
static_assert(offsetof(UFabricUserOptionSaveComponent, ActiveSaveIndex) == 376, "Offset mismatch for UFabricUserOptionSaveComponent::ActiveSaveIndex");
static_assert(offsetof(UFabricUserOptionSaveComponent, ActivePresetIndex) == 380, "Offset mismatch for UFabricUserOptionSaveComponent::ActivePresetIndex");

// /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable
// Kind: Class; super: FabricModulatable
class UFabricUserOptionSaveModulatable
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    TWeakObjectPtr<void> ModulatedActor; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> ModulatorParams; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NonModulatedParamsWithCallbacks[0x10]; // 0x0048 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> Modulators; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LastBroadcastedValues; // 0x0068 (Size: 0x10, Type: MapProperty)
    TArray<void*> ModulatorSources; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricUserOptionSaveModulatable, ModulatedActor) == 44, "Offset mismatch for UFabricUserOptionSaveModulatable::ModulatedActor");
static_assert(offsetof(UFabricUserOptionSaveModulatable, ModulatorParams) == 56, "Offset mismatch for UFabricUserOptionSaveModulatable::ModulatorParams");
static_assert(offsetof(UFabricUserOptionSaveModulatable, NonModulatedParamsWithCallbacks) == 72, "Offset mismatch for UFabricUserOptionSaveModulatable::NonModulatedParamsWithCallbacks");
static_assert(offsetof(UFabricUserOptionSaveModulatable, Modulators) == 88, "Offset mismatch for UFabricUserOptionSaveModulatable::Modulators");
static_assert(offsetof(UFabricUserOptionSaveModulatable, LastBroadcastedValues) == 104, "Offset mismatch for UFabricUserOptionSaveModulatable::LastBroadcastedValues");
static_assert(offsetof(UFabricUserOptionSaveModulatable, ModulatorSources) == 120, "Offset mismatch for UFabricUserOptionSaveModulatable::ModulatorSources");

// /Script/FMInWorldKnobsRuntime.InWorldKnobInterface
// Kind: Class; super: Interface
class UInWorldKnobInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMIncomingCableConnection
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionFMIncomingCableConnection
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionFMIncomingCableConnection, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionFMIncomingCableConnection::DefaultValue");

// /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMLinkPreset
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionFMLinkPreset
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionFMLinkPreset, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionFMLinkPreset::DefaultValue");

// /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionFMOutgoingCableConnection
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionFMOutgoingCableConnection, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionFMOutgoingCableConnection::DefaultValue");

/**
 * decamp dumper generated SDK
 * Package: /Script/VerseDevices
 */
#pragma once
#include "Basic.h"

// /Script/VerseDevices.PlaylistOptionSafeFloatEntry
// Kind: ScriptStruct; super: none
struct FPlaylistOptionSafeFloatEntry
{
public:
    std::uint8_t Value[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t GrantedContextTags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlaylistOptionSafeFloatEntry, Value) == 0, "Offset mismatch for FPlaylistOptionSafeFloatEntry::Value");
static_assert(offsetof(FPlaylistOptionSafeFloatEntry, DisplayName) == 8, "Offset mismatch for FPlaylistOptionSafeFloatEntry::DisplayName");
static_assert(offsetof(FPlaylistOptionSafeFloatEntry, GrantedContextTags) == 24, "Offset mismatch for FPlaylistOptionSafeFloatEntry::GrantedContextTags");

// /Script/VerseDevices.PlaylistOptionSafeFloatValue
// Kind: ScriptStruct; super: PlaylistOptionValue
struct FPlaylistOptionSafeFloatValue
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlaylistOptionSafeFloatValue, Value) == 144, "Offset mismatch for FPlaylistOptionSafeFloatValue::Value");

// /Script/VerseDevices.PlaylistOptionScriptValue
// Kind: ScriptStruct; super: PlaylistOptionValue
struct FPlaylistOptionScriptValue
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* Value; // 0x0090 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPlaylistOptionScriptValue, Value) == 144, "Offset mismatch for FPlaylistOptionScriptValue::Value");

// /Script/VerseDevices.SafeFloat
// Kind: ScriptStruct; super: none
struct FSafeFloat
{
public:
    std::uint8_t ValueType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSafeFloat, ValueType) == 0, "Offset mismatch for FSafeFloat::ValueType");
static_assert(offsetof(FSafeFloat, Value) == 4, "Offset mismatch for FSafeFloat::Value");

// /Script/VerseDevices.UserOptionDefinitionSafeFloatMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionSafeFloatMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bShowNaN; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInf; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMinusInf; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0013
    float MinValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinSliderValue; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxSliderValue; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DeltaValue; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinFractionalDigits; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MaxFractionalDigits; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUsePredefinedUnits; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Units[0x5]; // 0x002B (Size: 0x5, Type: OptionalProperty)
    std::uint8_t DisplayPattern[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t bRestrictSliderValues; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNumericInput; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0042
    TArray<void*> ValueEntries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::DefaultValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bShowNaN) == 16, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bShowNaN");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bShowInf) == 17, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bShowInf");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bShowMinusInf) == 18, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bShowMinusInf");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MinValue) == 20, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MinValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MaxValue) == 24, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MaxValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MinSliderValue) == 28, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MinSliderValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MaxSliderValue) == 32, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MaxSliderValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, DeltaValue) == 36, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::DeltaValue");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MinFractionalDigits) == 40, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MinFractionalDigits");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, MaxFractionalDigits) == 41, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::MaxFractionalDigits");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bUsePredefinedUnits) == 42, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bUsePredefinedUnits");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, Units) == 43, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::Units");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, DisplayPattern) == 48, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::DisplayPattern");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bRestrictSliderValues) == 64, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bRestrictSliderValues");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, bUseNumericInput) == 65, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::bUseNumericInput");
static_assert(offsetof(FUserOptionDefinitionSafeFloatMetaData, ValueEntries) == 72, "Offset mismatch for FUserOptionDefinitionSafeFloatMetaData::ValueEntries");

// /Script/VerseDevices.VerseDeviceFunctionPayload
// Kind: ScriptStruct; super: none
struct FVerseDeviceFunctionPayload
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseDeviceFunctionPayload, Instigator) == 0, "Offset mismatch for FVerseDeviceFunctionPayload::Instigator");

// /Script/VerseDevices.PlaylistUserOptionSafeFloatRange
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionSafeFloatRange
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    float min; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float max; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float SliderMin; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float SliderMax; // 0x01BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultValue[0x8]; // 0x01C0 (Size: 0x8, Type: StructProperty)
    float IncrementValue; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideSliderRange; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestrictSliderValues; // 0x01CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNumericInput; // 0x01CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t MinFractionalDigits; // 0x01CF (Size: 0x1, Type: ByteProperty)
    std::uint8_t MaxFractionalDigits; // 0x01D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01D1
    std::uint8_t UnitName[0x10]; // 0x01D8 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> OverrideValueStrings; // 0x01E8 (Size: 0x10, Type: MapProperty)
    TArray<void*> SliderOptionValues; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SliderOptionValues_DefaultIndex; // 0x0208 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowNaN; // 0x020C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInf; // 0x020D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMinusInf; // 0x020E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, min) == 432, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::min");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, max) == 436, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::max");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, SliderMin) == 440, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::SliderMin");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, SliderMax) == 444, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::SliderMax");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, DefaultValue) == 448, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::DefaultValue");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, IncrementValue) == 456, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::IncrementValue");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bOverrideSliderRange) == 460, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bOverrideSliderRange");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bRestrictSliderValues) == 461, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bRestrictSliderValues");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bUseNumericInput) == 462, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bUseNumericInput");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, MinFractionalDigits) == 463, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::MinFractionalDigits");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, MaxFractionalDigits) == 464, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::MaxFractionalDigits");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, UnitName) == 472, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::UnitName");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, OverrideValueStrings) == 488, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::OverrideValueStrings");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, SliderOptionValues) == 504, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::SliderOptionValues");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, SliderOptionValues_DefaultIndex) == 520, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::SliderOptionValues_DefaultIndex");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bShowNaN) == 524, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bShowNaN");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bShowInf) == 525, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bShowInf");
static_assert(offsetof(UPlaylistUserOptionSafeFloatRange, bShowMinusInf) == 526, "Offset mismatch for UPlaylistUserOptionSafeFloatRange::bShowMinusInf");

// /Script/VerseDevices.PlaylistUserOptionScript
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionScript
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    TArray<void*> OptionValues; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DefaultValueIndex; // 0x01C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPlaylistUserOptionScript, OptionValues) == 432, "Offset mismatch for UPlaylistUserOptionScript::OptionValues");
static_assert(offsetof(UPlaylistUserOptionScript, DefaultValueIndex) == 448, "Offset mismatch for UPlaylistUserOptionScript::DefaultValueIndex");

// /Script/VerseDevices.ScriptDevice
// Kind: Class; super: BuildingProp
class UScriptDevice
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* Script; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* ScriptInstance; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UScriptDevice, Script) == 2848, "Offset mismatch for UScriptDevice::Script");
static_assert(offsetof(UScriptDevice, ScriptInstance) == 2856, "Offset mismatch for UScriptDevice::ScriptInstance");

// /Script/VerseDevices.VerseCreativeDevice
// Kind: Class; super: VerseMovableObjectBase
class UVerseCreativeDevice
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseDevices.VerseCreativeObject
// Kind: Class; super: VerseMovableObjectBase
class UVerseCreativeObject
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* SavedActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseCreativeObject, SavedActor) == 160, "Offset mismatch for UVerseCreativeObject::SavedActor");

// /Script/VerseDevices.VerseCreativeObjectQuotaHelperComponent
// Kind: Class; super: ActorComponent
class UVerseCreativeObjectQuotaHelperComponent
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

static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, PrimaryComponentTick) == 56, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::PrimaryComponentTick");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, ComponentTags) == 104, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::ComponentTags");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, AssetUserData) == 120, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::AssetUserData");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, UCSSerializationIndex) == 144, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::UCSSerializationIndex");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, bNetAddressable) == 152, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::bNetAddressable");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, bAutoActivate) == 154, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::bAutoActivate");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, bIsEditorOnly) == 155, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::bIsEditorOnly");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, CreationMethod) == 185, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::CreationMethod");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, OnComponentActivated) == 186, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::OnComponentActivated");
static_assert(offsetof(UVerseCreativeObjectQuotaHelperComponent, OnComponentDeactivated) == 187, "Offset mismatch for UVerseCreativeObjectQuotaHelperComponent::OnComponentDeactivated");

// /Script/VerseDevices.VerseCreativePropAsset
// Kind: Class; super: Object
class UVerseCreativePropAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName AssetPathName; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* LevelSaveRecord; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> ActorClass; // 0x0038 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UVerseCreativePropAsset, AssetPathName) == 40, "Offset mismatch for UVerseCreativePropAsset::AssetPathName");
static_assert(offsetof(UVerseCreativePropAsset, LevelSaveRecord) == 48, "Offset mismatch for UVerseCreativePropAsset::LevelSaveRecord");
static_assert(offsetof(UVerseCreativePropAsset, ActorClass) == 56, "Offset mismatch for UVerseCreativePropAsset::ActorClass");

// /Script/VerseDevices.VerseDeviceHealth
// Kind: Class; super: Object
class UVerseDeviceHealth
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseDevices.VerseDeviceSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseDeviceSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> DeviceClassToVerseClassMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseDeviceSubsystem, DeviceClassToVerseClassMap) == 56, "Offset mismatch for UVerseDeviceSubsystem::DeviceClassToVerseClassMap");

// /Script/VerseDevices.VerseDeviceWrapperClassMap
// Kind: Class; super: DataAsset
class UVerseDeviceWrapperClassMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DeviceClassMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseDeviceWrapperClassMap, DeviceClassMap) == 40, "Offset mismatch for UVerseDeviceWrapperClassMap::DeviceClassMap");

// /Script/VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
// Kind: Class; super: GameFeatureAction
class UVerseDevicesFeatureAction_RegisterWrapperClasses
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> DeviceToWrapperClassMapAsset; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVerseDevicesFeatureAction_RegisterWrapperClasses, DeviceToWrapperClassMapAsset) == 40, "Offset mismatch for UVerseDevicesFeatureAction_RegisterWrapperClasses::DeviceToWrapperClassMapAsset");

// /Script/VerseDevices.VerseMovableObjectBase
// Kind: Class; super: Object
class UVerseMovableObjectBase
{
public:
    std::uint8_t Opaque[1];
};

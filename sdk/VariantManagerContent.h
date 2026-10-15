/**
 * decamp dumper generated SDK
 * Package: /Script/VariantManagerContent
 */
#pragma once
#include "Basic.h"

// /Script/VariantManagerContent.CapturedPropSegment
// Kind: ScriptStruct; super: none
struct FCapturedPropSegment
{
public:
    FString PropertyName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t PropertyIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString ComponentName; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0, "Offset mismatch for FCapturedPropSegment::PropertyName");
static_assert(offsetof(FCapturedPropSegment, PropertyIndex) == 16, "Offset mismatch for FCapturedPropSegment::PropertyIndex");
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 24, "Offset mismatch for FCapturedPropSegment::ComponentName");

// /Script/VariantManagerContent.FunctionCaller
// Kind: ScriptStruct; super: none
struct FFunctionCaller
{
public:
    FName FunctionName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> FunctionArguments; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFunctionCaller, FunctionName) == 0, "Offset mismatch for FFunctionCaller::FunctionName");
static_assert(offsetof(FFunctionCaller, FunctionArguments) == 8, "Offset mismatch for FFunctionCaller::FunctionArguments");

// /Script/VariantManagerContent.VariantDependency
// Kind: ScriptStruct; super: none
struct FVariantDependency
{
public:
    std::uint8_t VariantSet[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Variant[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnabled; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVariantDependency, VariantSet) == 0, "Offset mismatch for FVariantDependency::VariantSet");
static_assert(offsetof(FVariantDependency, Variant) == 32, "Offset mismatch for FVariantDependency::Variant");
static_assert(offsetof(FVariantDependency, bEnabled) == 64, "Offset mismatch for FVariantDependency::bEnabled");

// /Script/VariantManagerContent.LevelVariantSets
// Kind: Class; super: Object
class ULevelVariantSets
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DirectorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    TArray<void*> VariantSets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULevelVariantSets, DirectorClass) == 40, "Offset mismatch for ULevelVariantSets::DirectorClass");
static_assert(offsetof(ULevelVariantSets, VariantSets) == 48, "Offset mismatch for ULevelVariantSets::VariantSets");

// /Script/VariantManagerContent.LevelVariantSetsActor
// Kind: Class; super: Actor
class ULevelVariantSetsActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t LevelVariantSets[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> DirectorInstances; // 0x0288 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULevelVariantSetsActor, LevelVariantSets) == 624, "Offset mismatch for ULevelVariantSetsActor::LevelVariantSets");
static_assert(offsetof(ULevelVariantSetsActor, DirectorInstances) == 648, "Offset mismatch for ULevelVariantSetsActor::DirectorInstances");

// /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
// Kind: Class; super: Object
class ULevelVariantSetsFunctionDirector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VariantManagerContent.PropertyValue
// Kind: Class; super: Object
class UPropertyValue
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValue, Properties) == 136, "Offset mismatch for UPropertyValue::Properties");
static_assert(offsetof(UPropertyValue, PropertyIndices) == 152, "Offset mismatch for UPropertyValue::PropertyIndices");
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValue::CapturedPropSegments");
static_assert(offsetof(UPropertyValue, FullDisplayString) == 184, "Offset mismatch for UPropertyValue::FullDisplayString");
static_assert(offsetof(UPropertyValue, PropertySetterName) == 200, "Offset mismatch for UPropertyValue::PropertySetterName");
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValue::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValue, bHasRecordedData) == 224, "Offset mismatch for UPropertyValue::bHasRecordedData");
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValue::LeafPropertyClass");
static_assert(offsetof(UPropertyValue, ValueBytes) == 248, "Offset mismatch for UPropertyValue::ValueBytes");
static_assert(offsetof(UPropertyValue, PropCategory) == 264, "Offset mismatch for UPropertyValue::PropCategory");

// /Script/VariantManagerContent.PropertyValueColor
// Kind: Class; super: PropertyValue
class UPropertyValueColor
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueColor, Properties) == 136, "Offset mismatch for UPropertyValueColor::Properties");
static_assert(offsetof(UPropertyValueColor, PropertyIndices) == 152, "Offset mismatch for UPropertyValueColor::PropertyIndices");
static_assert(offsetof(UPropertyValueColor, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueColor::CapturedPropSegments");
static_assert(offsetof(UPropertyValueColor, FullDisplayString) == 184, "Offset mismatch for UPropertyValueColor::FullDisplayString");
static_assert(offsetof(UPropertyValueColor, PropertySetterName) == 200, "Offset mismatch for UPropertyValueColor::PropertySetterName");
static_assert(offsetof(UPropertyValueColor, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueColor::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueColor, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueColor::bHasRecordedData");
static_assert(offsetof(UPropertyValueColor, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueColor::LeafPropertyClass");
static_assert(offsetof(UPropertyValueColor, ValueBytes) == 248, "Offset mismatch for UPropertyValueColor::ValueBytes");
static_assert(offsetof(UPropertyValueColor, PropCategory) == 264, "Offset mismatch for UPropertyValueColor::PropCategory");

// /Script/VariantManagerContent.PropertyValueMaterial
// Kind: Class; super: PropertyValue
class UPropertyValueMaterial
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueMaterial, Properties) == 136, "Offset mismatch for UPropertyValueMaterial::Properties");
static_assert(offsetof(UPropertyValueMaterial, PropertyIndices) == 152, "Offset mismatch for UPropertyValueMaterial::PropertyIndices");
static_assert(offsetof(UPropertyValueMaterial, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueMaterial::CapturedPropSegments");
static_assert(offsetof(UPropertyValueMaterial, FullDisplayString) == 184, "Offset mismatch for UPropertyValueMaterial::FullDisplayString");
static_assert(offsetof(UPropertyValueMaterial, PropertySetterName) == 200, "Offset mismatch for UPropertyValueMaterial::PropertySetterName");
static_assert(offsetof(UPropertyValueMaterial, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueMaterial::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueMaterial, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueMaterial::bHasRecordedData");
static_assert(offsetof(UPropertyValueMaterial, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueMaterial::LeafPropertyClass");
static_assert(offsetof(UPropertyValueMaterial, ValueBytes) == 248, "Offset mismatch for UPropertyValueMaterial::ValueBytes");
static_assert(offsetof(UPropertyValueMaterial, PropCategory) == 264, "Offset mismatch for UPropertyValueMaterial::PropCategory");

// /Script/VariantManagerContent.PropertyValueOption
// Kind: Class; super: PropertyValue
class UPropertyValueOption
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueOption, Properties) == 136, "Offset mismatch for UPropertyValueOption::Properties");
static_assert(offsetof(UPropertyValueOption, PropertyIndices) == 152, "Offset mismatch for UPropertyValueOption::PropertyIndices");
static_assert(offsetof(UPropertyValueOption, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueOption::CapturedPropSegments");
static_assert(offsetof(UPropertyValueOption, FullDisplayString) == 184, "Offset mismatch for UPropertyValueOption::FullDisplayString");
static_assert(offsetof(UPropertyValueOption, PropertySetterName) == 200, "Offset mismatch for UPropertyValueOption::PropertySetterName");
static_assert(offsetof(UPropertyValueOption, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueOption::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueOption, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueOption::bHasRecordedData");
static_assert(offsetof(UPropertyValueOption, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueOption::LeafPropertyClass");
static_assert(offsetof(UPropertyValueOption, ValueBytes) == 248, "Offset mismatch for UPropertyValueOption::ValueBytes");
static_assert(offsetof(UPropertyValueOption, PropCategory) == 264, "Offset mismatch for UPropertyValueOption::PropCategory");

// /Script/VariantManagerContent.PropertyValueSoftObject
// Kind: Class; super: PropertyValue
class UPropertyValueSoftObject
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueSoftObject, Properties) == 136, "Offset mismatch for UPropertyValueSoftObject::Properties");
static_assert(offsetof(UPropertyValueSoftObject, PropertyIndices) == 152, "Offset mismatch for UPropertyValueSoftObject::PropertyIndices");
static_assert(offsetof(UPropertyValueSoftObject, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueSoftObject::CapturedPropSegments");
static_assert(offsetof(UPropertyValueSoftObject, FullDisplayString) == 184, "Offset mismatch for UPropertyValueSoftObject::FullDisplayString");
static_assert(offsetof(UPropertyValueSoftObject, PropertySetterName) == 200, "Offset mismatch for UPropertyValueSoftObject::PropertySetterName");
static_assert(offsetof(UPropertyValueSoftObject, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueSoftObject::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueSoftObject, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueSoftObject::bHasRecordedData");
static_assert(offsetof(UPropertyValueSoftObject, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueSoftObject::LeafPropertyClass");
static_assert(offsetof(UPropertyValueSoftObject, ValueBytes) == 248, "Offset mismatch for UPropertyValueSoftObject::ValueBytes");
static_assert(offsetof(UPropertyValueSoftObject, PropCategory) == 264, "Offset mismatch for UPropertyValueSoftObject::PropCategory");

// /Script/VariantManagerContent.PropertyValueTransform
// Kind: Class; super: PropertyValue
class UPropertyValueTransform
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueTransform, Properties) == 136, "Offset mismatch for UPropertyValueTransform::Properties");
static_assert(offsetof(UPropertyValueTransform, PropertyIndices) == 152, "Offset mismatch for UPropertyValueTransform::PropertyIndices");
static_assert(offsetof(UPropertyValueTransform, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueTransform::CapturedPropSegments");
static_assert(offsetof(UPropertyValueTransform, FullDisplayString) == 184, "Offset mismatch for UPropertyValueTransform::FullDisplayString");
static_assert(offsetof(UPropertyValueTransform, PropertySetterName) == 200, "Offset mismatch for UPropertyValueTransform::PropertySetterName");
static_assert(offsetof(UPropertyValueTransform, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueTransform::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueTransform, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueTransform::bHasRecordedData");
static_assert(offsetof(UPropertyValueTransform, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueTransform::LeafPropertyClass");
static_assert(offsetof(UPropertyValueTransform, ValueBytes) == 248, "Offset mismatch for UPropertyValueTransform::ValueBytes");
static_assert(offsetof(UPropertyValueTransform, PropCategory) == 264, "Offset mismatch for UPropertyValueTransform::PropCategory");

// /Script/VariantManagerContent.PropertyValueVisibility
// Kind: Class; super: PropertyValue
class UPropertyValueVisibility
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> Properties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CapturedPropSegments; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString FullDisplayString; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FName PropertySetterName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasRecordedData; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* LeafPropertyClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F0
    TArray<void*> ValueBytes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropCategory; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPropertyValueVisibility, Properties) == 136, "Offset mismatch for UPropertyValueVisibility::Properties");
static_assert(offsetof(UPropertyValueVisibility, PropertyIndices) == 152, "Offset mismatch for UPropertyValueVisibility::PropertyIndices");
static_assert(offsetof(UPropertyValueVisibility, CapturedPropSegments) == 168, "Offset mismatch for UPropertyValueVisibility::CapturedPropSegments");
static_assert(offsetof(UPropertyValueVisibility, FullDisplayString) == 184, "Offset mismatch for UPropertyValueVisibility::FullDisplayString");
static_assert(offsetof(UPropertyValueVisibility, PropertySetterName) == 200, "Offset mismatch for UPropertyValueVisibility::PropertySetterName");
static_assert(offsetof(UPropertyValueVisibility, PropertySetterParameterDefaults) == 208, "Offset mismatch for UPropertyValueVisibility::PropertySetterParameterDefaults");
static_assert(offsetof(UPropertyValueVisibility, bHasRecordedData) == 224, "Offset mismatch for UPropertyValueVisibility::bHasRecordedData");
static_assert(offsetof(UPropertyValueVisibility, LeafPropertyClass) == 232, "Offset mismatch for UPropertyValueVisibility::LeafPropertyClass");
static_assert(offsetof(UPropertyValueVisibility, ValueBytes) == 248, "Offset mismatch for UPropertyValueVisibility::ValueBytes");
static_assert(offsetof(UPropertyValueVisibility, PropCategory) == 264, "Offset mismatch for UPropertyValueVisibility::PropCategory");

// /Script/VariantManagerContent.SwitchActor
// Kind: Class; super: Actor
class USwitchActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    void* SceneComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LastSelectedOption; // 0x0290 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USwitchActor, SceneComponent) == 648, "Offset mismatch for USwitchActor::SceneComponent");
static_assert(offsetof(USwitchActor, LastSelectedOption) == 656, "Offset mismatch for USwitchActor::LastSelectedOption");

// /Script/VariantManagerContent.Variant
// Kind: Class; super: Object
class UVariant
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Dependencies; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FText DisplayText; // 0x0038 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    TArray<void*> ObjectBindings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* Thumbnail; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVariant, Dependencies) == 40, "Offset mismatch for UVariant::Dependencies");
static_assert(offsetof(UVariant, DisplayText) == 56, "Offset mismatch for UVariant::DisplayText");
static_assert(offsetof(UVariant, ObjectBindings) == 88, "Offset mismatch for UVariant::ObjectBindings");
static_assert(offsetof(UVariant, Thumbnail) == 104, "Offset mismatch for UVariant::Thumbnail");

// /Script/VariantManagerContent.VariantObjectBinding
// Kind: Class; super: Object
class UVariantObjectBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CachedActorLabel; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t ObjectPtr[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t LazyObjectPtr[0x18]; // 0x0050 (Size: 0x18, Type: LazyObjectProperty)
    TArray<void*> CapturedProperties; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FunctionCallers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 40, "Offset mismatch for UVariantObjectBinding::CachedActorLabel");
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 56, "Offset mismatch for UVariantObjectBinding::ObjectPtr");
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 80, "Offset mismatch for UVariantObjectBinding::LazyObjectPtr");
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 104, "Offset mismatch for UVariantObjectBinding::CapturedProperties");
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 120, "Offset mismatch for UVariantObjectBinding::FunctionCallers");

// /Script/VariantManagerContent.VariantSet
// Kind: Class; super: Object
class UVariantSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText DisplayText; // 0x0028 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0040
    std::uint8_t bExpanded; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0049
    TArray<void*> Variants; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    void* Thumbnail; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVariantSet, DisplayText) == 40, "Offset mismatch for UVariantSet::DisplayText");
static_assert(offsetof(UVariantSet, bExpanded) == 72, "Offset mismatch for UVariantSet::bExpanded");
static_assert(offsetof(UVariantSet, Variants) == 80, "Offset mismatch for UVariantSet::Variants");
static_assert(offsetof(UVariantSet, Thumbnail) == 96, "Offset mismatch for UVariantSet::Thumbnail");

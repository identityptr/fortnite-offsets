/**
 * decamp dumper generated SDK
 * Package: /Script/VerseTypeEditorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VerseTypeEditorRuntime.BoolPayload
// Kind: ScriptStruct; super: none
struct FBoolPayload
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBoolPayload, Value) == 0, "Offset mismatch for FBoolPayload::Value");

// /Script/VerseTypeEditorRuntime.FloatPayload
// Kind: ScriptStruct; super: none
struct FFloatPayload
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFloatPayload, Value) == 0, "Offset mismatch for FFloatPayload::Value");

// /Script/VerseTypeEditorRuntime.IntPayload
// Kind: ScriptStruct; super: none
struct FIntPayload
{
public:
    std::int64_t Value; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FIntPayload, Value) == 0, "Offset mismatch for FIntPayload::Value");

// /Script/VerseTypeEditorRuntime.VerseClassSettingsInterface
// Kind: ScriptStruct; super: none
struct FVerseClassSettingsInterface
{
public:
    std::uint8_t Data[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Interface[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseClassSettingsInterface, Data) == 0, "Offset mismatch for FVerseClassSettingsInterface::Data");
static_assert(offsetof(FVerseClassSettingsInterface, Interface) == 48, "Offset mismatch for FVerseClassSettingsInterface::Interface");

// /Script/VerseTypeEditorRuntime.VerseFieldTypeData
// Kind: ScriptStruct; super: none
struct FVerseFieldTypeData
{
public:
    std::uint8_t FieldType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FieldSubtype; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t FieldTypePath[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseFieldTypeData, FieldType) == 0, "Offset mismatch for FVerseFieldTypeData::FieldType");
static_assert(offsetof(FVerseFieldTypeData, FieldSubtype) == 1, "Offset mismatch for FVerseFieldTypeData::FieldSubtype");
static_assert(offsetof(FVerseFieldTypeData, FieldTypePath) == 4, "Offset mismatch for FVerseFieldTypeData::FieldTypePath");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBinding
// Kind: ScriptStruct; super: none
struct FVerseInternalFieldBinding
{
public:
    std::uint8_t InternalFieldId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseInternalFieldBinding, InternalFieldId) == 0, "Offset mismatch for FVerseInternalFieldBinding::InternalFieldId");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingColor
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingColor
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bEnableAlpha; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float Alpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingColor, bEnableAlpha) == 16, "Offset mismatch for FVerseInternalFieldBindingColor::bEnableAlpha");
static_assert(offsetof(FVerseInternalFieldBindingColor, Alpha) == 20, "Offset mismatch for FVerseInternalFieldBindingColor::Alpha");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingColorAlpha
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingColorAlpha
{
public:
    std::uint8_t InternalFieldId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingColorAlpha, InternalFieldId) == 0, "Offset mismatch for FVerseInternalFieldBindingColorAlpha::InternalFieldId");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingPassthrough
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingPassthrough
{
public:
    std::uint8_t InternalFieldId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingPassthrough, InternalFieldId) == 0, "Offset mismatch for FVerseInternalFieldBindingPassthrough::InternalFieldId");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingTruncate
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingTruncate
{
public:
    std::uint8_t InternalFieldId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingTruncate, InternalFieldId) == 0, "Offset mismatch for FVerseInternalFieldBindingTruncate::InternalFieldId");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingVector3
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingVector3
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t VectorUsage; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingVector3, VectorUsage) == 16, "Offset mismatch for FVerseInternalFieldBindingVector3::VectorUsage");

// /Script/VerseTypeEditorRuntime.VerseInternalFieldBindingVector3Truncate
// Kind: ScriptStruct; super: VerseInternalFieldBinding
struct FVerseInternalFieldBindingVector3Truncate
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t VectorUsage; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVerseInternalFieldBindingVector3Truncate, VectorUsage) == 16, "Offset mismatch for FVerseInternalFieldBindingVector3Truncate::VectorUsage");

// /Script/VerseTypeEditorRuntime.VerseTypeEditorSerializableClassSettings
// Kind: ScriptStruct; super: none
struct FVerseTypeEditorSerializableClassSettings
{
public:
    FString VisibilityAccess; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ConstructorAccess; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> ClassSpecifiers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EffectSpecifiers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Interfaces; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseTypeEditorSerializableClassSettings, VisibilityAccess) == 0, "Offset mismatch for FVerseTypeEditorSerializableClassSettings::VisibilityAccess");
static_assert(offsetof(FVerseTypeEditorSerializableClassSettings, ConstructorAccess) == 16, "Offset mismatch for FVerseTypeEditorSerializableClassSettings::ConstructorAccess");
static_assert(offsetof(FVerseTypeEditorSerializableClassSettings, ClassSpecifiers) == 32, "Offset mismatch for FVerseTypeEditorSerializableClassSettings::ClassSpecifiers");
static_assert(offsetof(FVerseTypeEditorSerializableClassSettings, EffectSpecifiers) == 48, "Offset mismatch for FVerseTypeEditorSerializableClassSettings::EffectSpecifiers");
static_assert(offsetof(FVerseTypeEditorSerializableClassSettings, Interfaces) == 64, "Offset mismatch for FVerseTypeEditorSerializableClassSettings::Interfaces");

// /Script/VerseTypeEditorRuntime.VerseTypeEditorSerializableInterfaceData
// Kind: ScriptStruct; super: none
struct FVerseTypeEditorSerializableInterfaceData
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString VersePath; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString DependencyPackage; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVerseTypeEditorSerializableInterfaceData, Name) == 0, "Offset mismatch for FVerseTypeEditorSerializableInterfaceData::Name");
static_assert(offsetof(FVerseTypeEditorSerializableInterfaceData, VersePath) == 16, "Offset mismatch for FVerseTypeEditorSerializableInterfaceData::VersePath");
static_assert(offsetof(FVerseTypeEditorSerializableInterfaceData, DependencyPackage) == 32, "Offset mismatch for FVerseTypeEditorSerializableInterfaceData::DependencyPackage");

// /Script/VerseTypeEditorRuntime.VerseEvent
// Kind: Class; super: Object
class UVerseEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTypeEditorRuntime.VerseTypeEditorClassSettings
// Kind: Class; super: Object
class UVerseTypeEditorClassSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Access; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConstructorAccess; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    TArray<void*> ClassSpecifiers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EffectSpecifiers; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    void* Parent; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0058
    TArray<void*> Interfaces; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseTypeEditorClassSettings, Access) == 40, "Offset mismatch for UVerseTypeEditorClassSettings::Access");
static_assert(offsetof(UVerseTypeEditorClassSettings, ConstructorAccess) == 41, "Offset mismatch for UVerseTypeEditorClassSettings::ConstructorAccess");
static_assert(offsetof(UVerseTypeEditorClassSettings, ClassSpecifiers) == 48, "Offset mismatch for UVerseTypeEditorClassSettings::ClassSpecifiers");
static_assert(offsetof(UVerseTypeEditorClassSettings, EffectSpecifiers) == 64, "Offset mismatch for UVerseTypeEditorClassSettings::EffectSpecifiers");
static_assert(offsetof(UVerseTypeEditorClassSettings, Parent) == 80, "Offset mismatch for UVerseTypeEditorClassSettings::Parent");
static_assert(offsetof(UVerseTypeEditorClassSettings, Interfaces) == 104, "Offset mismatch for UVerseTypeEditorClassSettings::Interfaces");

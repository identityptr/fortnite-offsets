/**
 * decamp dumper generated SDK
 * Package: /Script/TechAudioToolsMetaSound
 */
#pragma once
#include "Basic.h"

// /Script/TechAudioToolsMetaSound.MetaSoundInputViewModel
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundInputViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t InputName[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::uint8_t DataType[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsArray; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsConstructorPin; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0076
    std::uint8_t Literal[0x58]; // 0x0078 (Size: 0x58, Type: StructProperty)
    std::uint8_t LiteralType; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverridesDefault; // 0x00D1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMetaSoundInputViewModel, bIsInitialized) == 104, "Offset mismatch for UMetaSoundInputViewModel::bIsInitialized");
static_assert(offsetof(UMetaSoundInputViewModel, InputName) == 108, "Offset mismatch for UMetaSoundInputViewModel::InputName");
static_assert(offsetof(UMetaSoundInputViewModel, DataType) == 112, "Offset mismatch for UMetaSoundInputViewModel::DataType");
static_assert(offsetof(UMetaSoundInputViewModel, bIsArray) == 116, "Offset mismatch for UMetaSoundInputViewModel::bIsArray");
static_assert(offsetof(UMetaSoundInputViewModel, bIsConstructorPin) == 117, "Offset mismatch for UMetaSoundInputViewModel::bIsConstructorPin");
static_assert(offsetof(UMetaSoundInputViewModel, Literal) == 120, "Offset mismatch for UMetaSoundInputViewModel::Literal");
static_assert(offsetof(UMetaSoundInputViewModel, LiteralType) == 208, "Offset mismatch for UMetaSoundInputViewModel::LiteralType");
static_assert(offsetof(UMetaSoundInputViewModel, bOverridesDefault) == 209, "Offset mismatch for UMetaSoundInputViewModel::bOverridesDefault");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_Boolean
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_Boolean
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    std::uint8_t SourceValue; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_Boolean, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_Boolean::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_Boolean, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_Boolean::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_BooleanArray
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_BooleanArray
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    TArray<void*> SourceValue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_BooleanArray, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_BooleanArray::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_BooleanArray, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_BooleanArray::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_Float
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_Float
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowDisplayValues; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Literal[0x58]; // 0x0070 (Size: 0x58, Type: StructProperty)
    float SourceValue; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float NormalizedValue; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float DisplayValue; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00D4
    void* RangeValues; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_Float, bShowDisplayValues) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_Float::bShowDisplayValues");
static_assert(offsetof(UMetaSoundLiteralViewModel_Float, Literal) == 112, "Offset mismatch for UMetaSoundLiteralViewModel_Float::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_Float, SourceValue) == 200, "Offset mismatch for UMetaSoundLiteralViewModel_Float::SourceValue");
static_assert(offsetof(UMetaSoundLiteralViewModel_Float, NormalizedValue) == 204, "Offset mismatch for UMetaSoundLiteralViewModel_Float::NormalizedValue");
static_assert(offsetof(UMetaSoundLiteralViewModel_Float, DisplayValue) == 208, "Offset mismatch for UMetaSoundLiteralViewModel_Float::DisplayValue");
static_assert(offsetof(UMetaSoundLiteralViewModel_Float, RangeValues) == 216, "Offset mismatch for UMetaSoundLiteralViewModel_Float::RangeValues");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_FloatArray
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_FloatArray
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    TArray<void*> SourceValue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_FloatArray, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_FloatArray::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_FloatArray, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_FloatArray::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_Integer
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_Integer
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    std::int32_t SourceValue; // 0x00C0 (Size: 0x4, Type: IntProperty)
    float NormalizedValue; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Range[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_Integer, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_Integer::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_Integer, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_Integer::SourceValue");
static_assert(offsetof(UMetaSoundLiteralViewModel_Integer, NormalizedValue) == 196, "Offset mismatch for UMetaSoundLiteralViewModel_Integer::NormalizedValue");
static_assert(offsetof(UMetaSoundLiteralViewModel_Integer, Range) == 200, "Offset mismatch for UMetaSoundLiteralViewModel_Integer::Range");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_IntegerArray
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_IntegerArray
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    TArray<void*> SourceValue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_IntegerArray, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_IntegerArray::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_IntegerArray, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_IntegerArray::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_Object
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_Object
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    void* SourceValue; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_Object, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_Object::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_Object, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_Object::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_ObjectArray
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_ObjectArray
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    TArray<void*> SourceValue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_ObjectArray, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_ObjectArray::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_ObjectArray, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_ObjectArray::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_String
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_String
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    FString SourceValue; // 0x00C0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_String, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_String::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_String, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_String::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralViewModel_StringArray
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundLiteralViewModel_StringArray
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Literal[0x58]; // 0x0068 (Size: 0x58, Type: StructProperty)
    TArray<void*> SourceValue; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundLiteralViewModel_StringArray, Literal) == 104, "Offset mismatch for UMetaSoundLiteralViewModel_StringArray::Literal");
static_assert(offsetof(UMetaSoundLiteralViewModel_StringArray, SourceValue) == 192, "Offset mismatch for UMetaSoundLiteralViewModel_StringArray::SourceValue");

// /Script/TechAudioToolsMetaSound.MetaSoundLiteralWidgetInterface
// Kind: Class; super: Interface
class UMetaSoundLiteralWidgetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TechAudioToolsMetaSound.MetaSoundOutputViewModel
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundOutputViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t OutputName[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::uint8_t DataType[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsArray; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsConstructorPin; // 0x0075 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMetaSoundOutputViewModel, bIsInitialized) == 104, "Offset mismatch for UMetaSoundOutputViewModel::bIsInitialized");
static_assert(offsetof(UMetaSoundOutputViewModel, OutputName) == 108, "Offset mismatch for UMetaSoundOutputViewModel::OutputName");
static_assert(offsetof(UMetaSoundOutputViewModel, DataType) == 112, "Offset mismatch for UMetaSoundOutputViewModel::DataType");
static_assert(offsetof(UMetaSoundOutputViewModel, bIsArray) == 116, "Offset mismatch for UMetaSoundOutputViewModel::bIsArray");
static_assert(offsetof(UMetaSoundOutputViewModel, bIsConstructorPin) == 117, "Offset mismatch for UMetaSoundOutputViewModel::bIsConstructorPin");

// /Script/TechAudioToolsMetaSound.MetaSoundViewModel
// Kind: Class; super: MVVMViewModelBase
class UMetaSoundViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreset; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    void* Builder; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> InputViewModels; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OutputViewModels; // 0x0088 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMetaSoundViewModel, bIsInitialized) == 104, "Offset mismatch for UMetaSoundViewModel::bIsInitialized");
static_assert(offsetof(UMetaSoundViewModel, bIsPreset) == 105, "Offset mismatch for UMetaSoundViewModel::bIsPreset");
static_assert(offsetof(UMetaSoundViewModel, Builder) == 112, "Offset mismatch for UMetaSoundViewModel::Builder");
static_assert(offsetof(UMetaSoundViewModel, InputViewModels) == 120, "Offset mismatch for UMetaSoundViewModel::InputViewModels");
static_assert(offsetof(UMetaSoundViewModel, OutputViewModels) == 136, "Offset mismatch for UMetaSoundViewModel::OutputViewModels");

// /Script/TechAudioToolsMetaSound.MetaSoundViewModelConversionFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UMetaSoundViewModelConversionFunctions
{
public:
    std::uint8_t Opaque[1];
};

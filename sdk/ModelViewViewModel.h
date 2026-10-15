/**
 * decamp dumper generated SDK
 * Package: /Script/ModelViewViewModel
 */
#pragma once
#include "Basic.h"

// /Script/ModelViewViewModel.MVVMAvailableBinding
// Kind: ScriptStruct; super: none
struct FMVVMAvailableBinding
{
public:
    std::uint8_t BindingName[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsReadable; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWritable; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasNotify; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMVVMAvailableBinding, BindingName) == 0, "Offset mismatch for FMVVMAvailableBinding::BindingName");
static_assert(offsetof(FMVVMAvailableBinding, bIsReadable) == 4, "Offset mismatch for FMVVMAvailableBinding::bIsReadable");
static_assert(offsetof(FMVVMAvailableBinding, bIsWritable) == 5, "Offset mismatch for FMVVMAvailableBinding::bIsWritable");
static_assert(offsetof(FMVVMAvailableBinding, bHasNotify) == 6, "Offset mismatch for FMVVMAvailableBinding::bHasNotify");

// /Script/ModelViewViewModel.MVVMBindingName
// Kind: ScriptStruct; super: none
struct FMVVMBindingName
{
public:
    FName BindingName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMVVMBindingName, BindingName) == 0, "Offset mismatch for FMVVMBindingName::BindingName");

// /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
// Kind: ScriptStruct; super: none
struct FMVVMCompiledBindingLibrary
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> FieldPaths; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CompiledFields; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CompiledFieldNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMVVMCompiledBindingLibrary, FieldPaths) == 32, "Offset mismatch for FMVVMCompiledBindingLibrary::FieldPaths");
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFields) == 48, "Offset mismatch for FMVVMCompiledBindingLibrary::CompiledFields");
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFieldNames) == 64, "Offset mismatch for FMVVMCompiledBindingLibrary::CompiledFieldNames");

// /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
// Kind: ScriptStruct; super: none
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{
public:
    std::int16_t Index; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::uint8_t bIsObjectProperty; // 0x0002 (Size: 0x1, Type: BoolProperty)
    // 0x0002 BoolProperty bIsProperty (shared storage)
    // 0x0002 BoolProperty bIsScriptStructProperty (shared storage)
};

static_assert(offsetof(FMVVMCompiledLoadedPropertyOrFunctionIndex, Index) == 0, "Offset mismatch for FMVVMCompiledLoadedPropertyOrFunctionIndex::Index");
static_assert(offsetof(FMVVMCompiledLoadedPropertyOrFunctionIndex, bIsObjectProperty) == 2, "Offset mismatch for FMVVMCompiledLoadedPropertyOrFunctionIndex::bIsObjectProperty");

// /Script/ModelViewViewModel.MVVMEventField
// Kind: ScriptStruct; super: none
struct FMVVMEventField
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMVCompiledBinding
// Kind: ScriptStruct; super: none
struct FMVVMVCompiledBinding
{
public:
    std::uint8_t SourceFieldPath[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t DestinationFieldPath[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t ConversionFunctionFieldPath[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMVVMVCompiledBinding, SourceFieldPath) == 0, "Offset mismatch for FMVVMVCompiledBinding::SourceFieldPath");
static_assert(offsetof(FMVVMVCompiledBinding, DestinationFieldPath) == 4, "Offset mismatch for FMVVMVCompiledBinding::DestinationFieldPath");
static_assert(offsetof(FMVVMVCompiledBinding, ConversionFunctionFieldPath) == 8, "Offset mismatch for FMVVMVCompiledBinding::ConversionFunctionFieldPath");
static_assert(offsetof(FMVVMVCompiledBinding, Type) == 12, "Offset mismatch for FMVVMVCompiledBinding::Type");

// /Script/ModelViewViewModel.MVVMVCompiledFieldId
// Kind: ScriptStruct; super: none
struct FMVVMVCompiledFieldId
{
public:
    std::int16_t FieldIdIndex; // 0x0000 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMVVMVCompiledFieldId, FieldIdIndex) == 0, "Offset mismatch for FMVVMVCompiledFieldId::FieldIdIndex");

// /Script/ModelViewViewModel.MVVMVCompiledFieldPath
// Kind: ScriptStruct; super: none
struct FMVVMVCompiledFieldPath
{
public:
    std::int16_t StartIndex; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t Num; // 0x0002 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMVVMVCompiledFieldPath, StartIndex) == 0, "Offset mismatch for FMVVMVCompiledFieldPath::StartIndex");
static_assert(offsetof(FMVVMVCompiledFieldPath, Num) == 2, "Offset mismatch for FMVVMVCompiledFieldPath::Num");

// /Script/ModelViewViewModel.MVVMVCompiledFields
// Kind: ScriptStruct; super: none
struct FMVVMVCompiledFields
{
public:
    void* ClassOrScriptStruct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int16_t LibraryStartIndex; // 0x0008 (Size: 0x2, Type: Int16Property)
    std::int16_t NumberOfProperties; // 0x000A (Size: 0x2, Type: Int16Property)
    std::int16_t NumberOfFunctions; // 0x000C (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMVVMVCompiledFields, ClassOrScriptStruct) == 0, "Offset mismatch for FMVVMVCompiledFields::ClassOrScriptStruct");
static_assert(offsetof(FMVVMVCompiledFields, LibraryStartIndex) == 8, "Offset mismatch for FMVVMVCompiledFields::LibraryStartIndex");
static_assert(offsetof(FMVVMVCompiledFields, NumberOfProperties) == 10, "Offset mismatch for FMVVMVCompiledFields::NumberOfProperties");
static_assert(offsetof(FMVVMVCompiledFields, NumberOfFunctions) == 12, "Offset mismatch for FMVVMVCompiledFields::NumberOfFunctions");

// /Script/ModelViewViewModel.MVVMViewClass_Binding
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_Binding
{
public:
    std::uint8_t Binding[0xE]; // 0x0000 (Size: 0xE, Type: StructProperty)
    std::uint8_t Flags; // 0x000E (Size: 0x1, Type: ByteProperty)
    std::uint8_t ExecutionMode; // 0x000F (Size: 0x1, Type: EnumProperty)
    std::uint64_t SourceBitField; // 0x0010 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMVVMViewClass_Binding, Binding) == 0, "Offset mismatch for FMVVMViewClass_Binding::Binding");
static_assert(offsetof(FMVVMViewClass_Binding, Flags) == 14, "Offset mismatch for FMVVMViewClass_Binding::Flags");
static_assert(offsetof(FMVVMViewClass_Binding, ExecutionMode) == 15, "Offset mismatch for FMVVMViewClass_Binding::ExecutionMode");
static_assert(offsetof(FMVVMViewClass_Binding, SourceBitField) == 16, "Offset mismatch for FMVVMViewClass_Binding::SourceBitField");

// /Script/ModelViewViewModel.MVVMViewClass_BindingKey
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_BindingKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMViewClass_BindingKey, Index) == 0, "Offset mismatch for FMVVMViewClass_BindingKey::Index");

// /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_CompiledBinding
{
public:
    std::uint8_t FieldId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t SourcePropertyName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t Binding[0xE]; // 0x0008 (Size: 0xE, Type: StructProperty)
    std::uint8_t ExecutionMode; // 0x0016 (Size: 0x1, Type: EnumProperty)
    std::int8_t EvaluateSourceCreatorIndex; // 0x0017 (Size: 0x1, Type: Int8Property)
    std::uint8_t Flags; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMVVMViewClass_CompiledBinding, FieldId) == 0, "Offset mismatch for FMVVMViewClass_CompiledBinding::FieldId");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, SourcePropertyName) == 4, "Offset mismatch for FMVVMViewClass_CompiledBinding::SourcePropertyName");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Binding) == 8, "Offset mismatch for FMVVMViewClass_CompiledBinding::Binding");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, ExecutionMode) == 22, "Offset mismatch for FMVVMViewClass_CompiledBinding::ExecutionMode");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, EvaluateSourceCreatorIndex) == 23, "Offset mismatch for FMVVMViewClass_CompiledBinding::EvaluateSourceCreatorIndex");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Flags) == 24, "Offset mismatch for FMVVMViewClass_CompiledBinding::Flags");

// /Script/ModelViewViewModel.MVVMViewClass_CompiledEvent
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_CompiledEvent
{
public:
    std::uint8_t FieldPath[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t FunctionName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName SourceName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMVVMViewClass_CompiledEvent, FieldPath) == 0, "Offset mismatch for FMVVMViewClass_CompiledEvent::FieldPath");
static_assert(offsetof(FMVVMViewClass_CompiledEvent, FunctionName) == 4, "Offset mismatch for FMVVMViewClass_CompiledEvent::FunctionName");
static_assert(offsetof(FMVVMViewClass_CompiledEvent, SourceName) == 8, "Offset mismatch for FMVVMViewClass_CompiledEvent::SourceName");

// /Script/ModelViewViewModel.MVVMViewClass_Condition
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_Condition
{
public:
    std::uint8_t UserWidgetFunctionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceToReevaluate[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint64_t SourceBitField; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMVVMViewClass_Condition, UserWidgetFunctionName) == 0, "Offset mismatch for FMVVMViewClass_Condition::UserWidgetFunctionName");
static_assert(offsetof(FMVVMViewClass_Condition, SourceToReevaluate) == 4, "Offset mismatch for FMVVMViewClass_Condition::SourceToReevaluate");
static_assert(offsetof(FMVVMViewClass_Condition, SourceBitField) == 8, "Offset mismatch for FMVVMViewClass_Condition::SourceBitField");

// /Script/ModelViewViewModel.MVVMViewClass_ConditionKey
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_ConditionKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMViewClass_ConditionKey, Index) == 0, "Offset mismatch for FMVVMViewClass_ConditionKey::Index");

// /Script/ModelViewViewModel.MVVMViewClass_EvaluateBindingKey
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_EvaluateBindingKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMViewClass_EvaluateBindingKey, Index) == 0, "Offset mismatch for FMVVMViewClass_EvaluateBindingKey::Index");

// /Script/ModelViewViewModel.MVVMViewClass_EvaluateSource
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_EvaluateSource
{
public:
    std::uint8_t ParentFieldId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentSource[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t ToEvaluate[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMVVMViewClass_EvaluateSource, ParentFieldId) == 0, "Offset mismatch for FMVVMViewClass_EvaluateSource::ParentFieldId");
static_assert(offsetof(FMVVMViewClass_EvaluateSource, ParentSource) == 4, "Offset mismatch for FMVVMViewClass_EvaluateSource::ParentSource");
static_assert(offsetof(FMVVMViewClass_EvaluateSource, ToEvaluate) == 8, "Offset mismatch for FMVVMViewClass_EvaluateSource::ToEvaluate");

// /Script/ModelViewViewModel.MVVMViewClass_Event
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_Event
{
public:
    std::uint8_t FieldPath[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t UserWidgetFunctionName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceToReevaluate[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint64_t SourceBitField; // 0x0010 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMVVMViewClass_Event, FieldPath) == 0, "Offset mismatch for FMVVMViewClass_Event::FieldPath");
static_assert(offsetof(FMVVMViewClass_Event, UserWidgetFunctionName) == 4, "Offset mismatch for FMVVMViewClass_Event::UserWidgetFunctionName");
static_assert(offsetof(FMVVMViewClass_Event, SourceToReevaluate) == 8, "Offset mismatch for FMVVMViewClass_Event::SourceToReevaluate");
static_assert(offsetof(FMVVMViewClass_Event, SourceBitField) == 16, "Offset mismatch for FMVVMViewClass_Event::SourceBitField");

// /Script/ModelViewViewModel.MVVMViewClass_EventKey
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_EventKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMViewClass_EventKey, Index) == 0, "Offset mismatch for FMVVMViewClass_EventKey::Index");

// /Script/ModelViewViewModel.MVVMViewClass_FieldId
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_FieldId
{
public:
    FName FieldName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMVVMViewClass_FieldId, FieldName) == 0, "Offset mismatch for FMVVMViewClass_FieldId::FieldName");

// /Script/ModelViewViewModel.MVVMViewClass_Source
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_Source
{
public:
    void* ExpectedSourceType; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* Resolver; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GlobalViewModelInstance[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t FieldPath[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t PropertyName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    TArray<void*> FieldToRegisterTo; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bindings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Conditions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t Flags; // 0x0058 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FMVVMViewClass_Source, ExpectedSourceType) == 0, "Offset mismatch for FMVVMViewClass_Source::ExpectedSourceType");
static_assert(offsetof(FMVVMViewClass_Source, Resolver) == 8, "Offset mismatch for FMVVMViewClass_Source::Resolver");
static_assert(offsetof(FMVVMViewClass_Source, GlobalViewModelInstance) == 16, "Offset mismatch for FMVVMViewClass_Source::GlobalViewModelInstance");
static_assert(offsetof(FMVVMViewClass_Source, FieldPath) == 32, "Offset mismatch for FMVVMViewClass_Source::FieldPath");
static_assert(offsetof(FMVVMViewClass_Source, PropertyName) == 36, "Offset mismatch for FMVVMViewClass_Source::PropertyName");
static_assert(offsetof(FMVVMViewClass_Source, FieldToRegisterTo) == 40, "Offset mismatch for FMVVMViewClass_Source::FieldToRegisterTo");
static_assert(offsetof(FMVVMViewClass_Source, Bindings) == 56, "Offset mismatch for FMVVMViewClass_Source::Bindings");
static_assert(offsetof(FMVVMViewClass_Source, Conditions) == 72, "Offset mismatch for FMVVMViewClass_Source::Conditions");
static_assert(offsetof(FMVVMViewClass_Source, Flags) == 88, "Offset mismatch for FMVVMViewClass_Source::Flags");

// /Script/ModelViewViewModel.MVVMViewClass_SourceBinding
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_SourceBinding
{
public:
    std::uint8_t FieldId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t BindingKey[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flags; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMVVMViewClass_SourceBinding, FieldId) == 0, "Offset mismatch for FMVVMViewClass_SourceBinding::FieldId");
static_assert(offsetof(FMVVMViewClass_SourceBinding, BindingKey) == 4, "Offset mismatch for FMVVMViewClass_SourceBinding::BindingKey");
static_assert(offsetof(FMVVMViewClass_SourceBinding, Flags) == 8, "Offset mismatch for FMVVMViewClass_SourceBinding::Flags");

// /Script/ModelViewViewModel.MVVMViewClass_SourceCondition
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_SourceCondition
{
public:
    std::uint8_t FieldId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ConditionKey[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMVVMViewClass_SourceCondition, FieldId) == 0, "Offset mismatch for FMVVMViewClass_SourceCondition::FieldId");
static_assert(offsetof(FMVVMViewClass_SourceCondition, ConditionKey) == 4, "Offset mismatch for FMVVMViewClass_SourceCondition::ConditionKey");

// /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_SourceCreator
{
public:
    void* ExpectedSourceType; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* Resolver; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GlobalViewModelInstance[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t FieldPath[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t PropertyName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentSourceName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t Flags; // 0x002C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMVVMViewClass_SourceCreator, ExpectedSourceType) == 0, "Offset mismatch for FMVVMViewClass_SourceCreator::ExpectedSourceType");
static_assert(offsetof(FMVVMViewClass_SourceCreator, Resolver) == 8, "Offset mismatch for FMVVMViewClass_SourceCreator::Resolver");
static_assert(offsetof(FMVVMViewClass_SourceCreator, GlobalViewModelInstance) == 16, "Offset mismatch for FMVVMViewClass_SourceCreator::GlobalViewModelInstance");
static_assert(offsetof(FMVVMViewClass_SourceCreator, FieldPath) == 32, "Offset mismatch for FMVVMViewClass_SourceCreator::FieldPath");
static_assert(offsetof(FMVVMViewClass_SourceCreator, PropertyName) == 36, "Offset mismatch for FMVVMViewClass_SourceCreator::PropertyName");
static_assert(offsetof(FMVVMViewClass_SourceCreator, ParentSourceName) == 40, "Offset mismatch for FMVVMViewClass_SourceCreator::ParentSourceName");
static_assert(offsetof(FMVVMViewClass_SourceCreator, Flags) == 44, "Offset mismatch for FMVVMViewClass_SourceCreator::Flags");

// /Script/ModelViewViewModel.MVVMViewClass_SourceKey
// Kind: ScriptStruct; super: none
struct FMVVMViewClass_SourceKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMViewClass_SourceKey, Index) == 0, "Offset mismatch for FMVVMViewClass_SourceKey::Index");

// /Script/ModelViewViewModel.MVVMViewModelCollection
// Kind: ScriptStruct; super: none
struct FMVVMViewModelCollection
{
public:
    TArray<void*> ViewModelInstances; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMVVMViewModelCollection, ViewModelInstances) == 0, "Offset mismatch for FMVVMViewModelCollection::ViewModelInstances");

// /Script/ModelViewViewModel.MVVMViewModelContext
// Kind: ScriptStruct; super: none
struct FMVVMViewModelContext
{
public:
    void* ContextClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    FName ContextName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMVVMViewModelContext, ContextClass) == 0, "Offset mismatch for FMVVMViewModelContext::ContextClass");
static_assert(offsetof(FMVVMViewModelContext, ContextName) == 8, "Offset mismatch for FMVVMViewModelContext::ContextName");

// /Script/ModelViewViewModel.MVVMViewModelContextInstance
// Kind: ScriptStruct; super: none
struct FMVVMViewModelContextInstance
{
public:
    std::uint8_t Context[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Instance; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMVVMViewModelContextInstance, Context) == 0, "Offset mismatch for FMVVMViewModelContextInstance::Context");
static_assert(offsetof(FMVVMViewModelContextInstance, Instance) == 16, "Offset mismatch for FMVVMViewModelContextInstance::Instance");

// /Script/ModelViewViewModel.MVVMViewSource
// Kind: ScriptStruct; super: none
struct FMVVMViewSource
{
public:
    void* Source; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t RegisteredCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bCreatedSource; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBindingsInitialized; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetManually; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignedToUserWidgetProperty; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMVVMViewSource, Source) == 0, "Offset mismatch for FMVVMViewSource::Source");
static_assert(offsetof(FMVVMViewSource, SourceName) == 8, "Offset mismatch for FMVVMViewSource::SourceName");
static_assert(offsetof(FMVVMViewSource, RegisteredCount) == 12, "Offset mismatch for FMVVMViewSource::RegisteredCount");
static_assert(offsetof(FMVVMViewSource, bCreatedSource) == 16, "Offset mismatch for FMVVMViewSource::bCreatedSource");
static_assert(offsetof(FMVVMViewSource, bBindingsInitialized) == 17, "Offset mismatch for FMVVMViewSource::bBindingsInitialized");
static_assert(offsetof(FMVVMViewSource, bSetManually) == 18, "Offset mismatch for FMVVMViewSource::bSetManually");
static_assert(offsetof(FMVVMViewSource, bAssignedToUserWidgetProperty) == 19, "Offset mismatch for FMVVMViewSource::bAssignedToUserWidgetProperty");

// /Script/ModelViewViewModel.MVVMView_Source
// Kind: ScriptStruct; super: none
struct FMVVMView_Source
{
public:
    void* Source; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClassKey[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t RegisteredCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bSourceInitialized; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBindingsInitialized; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetManually; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignedToUserWidgetProperty; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMVVMView_Source, Source) == 0, "Offset mismatch for FMVVMView_Source::Source");
static_assert(offsetof(FMVVMView_Source, ClassKey) == 8, "Offset mismatch for FMVVMView_Source::ClassKey");
static_assert(offsetof(FMVVMView_Source, RegisteredCount) == 12, "Offset mismatch for FMVVMView_Source::RegisteredCount");
static_assert(offsetof(FMVVMView_Source, bSourceInitialized) == 16, "Offset mismatch for FMVVMView_Source::bSourceInitialized");
static_assert(offsetof(FMVVMView_Source, bBindingsInitialized) == 17, "Offset mismatch for FMVVMView_Source::bBindingsInitialized");
static_assert(offsetof(FMVVMView_Source, bSetManually) == 18, "Offset mismatch for FMVVMView_Source::bSetManually");
static_assert(offsetof(FMVVMView_Source, bAssignedToUserWidgetProperty) == 19, "Offset mismatch for FMVVMView_Source::bAssignedToUserWidgetProperty");

// /Script/ModelViewViewModel.MVVMView_SourceKey
// Kind: ScriptStruct; super: none
struct FMVVMView_SourceKey
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMVVMView_SourceKey, Index) == 0, "Offset mismatch for FMVVMView_SourceKey::Index");

// /Script/ModelViewViewModel.Default__MVVMViewClass
// Kind: MVVMViewClass; super: none
class UDefault_MVVMViewClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.Default__MVVMViewModelBlueprintGeneratedClass
// Kind: MVVMViewModelBlueprintGeneratedClass; super: none
class UDefault_MVVMViewModelBlueprintGeneratedClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMBindingSubsystem
// Kind: Class; super: EngineSubsystem
class UMVVMBindingSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMVVMBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMConversionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMVVMConversionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMFontConversionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMVVMFontConversionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMGameSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UMVVMGameSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ViewModelCollection; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMVVMGameSubsystem, ViewModelCollection) == 48, "Offset mismatch for UMVVMGameSubsystem::ViewModelCollection");

// /Script/ModelViewViewModel.MVVMInstancedViewModelGeneratedClass
// Kind: Class; super: BlueprintGeneratedClass
class UMVVMInstancedViewModelGeneratedClass
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> OnRepFunctionToLink; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMVVMInstancedViewModelGeneratedClass, OnRepFunctionToLink) == 640, "Offset mismatch for UMVVMInstancedViewModelGeneratedClass::OnRepFunctionToLink");

// /Script/ModelViewViewModel.MVVMPanelWidgetViewExtension
// Kind: Class; super: MVVMViewExtension
class UMVVMPanelWidgetViewExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnItemsChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PanelWidget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ClassExtension; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMVVMPanelWidgetViewExtension, OnItemsChanged) == 40, "Offset mismatch for UMVVMPanelWidgetViewExtension::OnItemsChanged");
static_assert(offsetof(UMVVMPanelWidgetViewExtension, PanelWidget) == 56, "Offset mismatch for UMVVMPanelWidgetViewExtension::PanelWidget");
static_assert(offsetof(UMVVMPanelWidgetViewExtension, ClassExtension) == 64, "Offset mismatch for UMVVMPanelWidgetViewExtension::ClassExtension");

// /Script/ModelViewViewModel.MVVMSlateBrushConversionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMVVMSlateBrushConversionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMSubsystem
// Kind: Class; super: EngineSubsystem
class UMVVMSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMView
// Kind: Class; super: UserWidgetExtension
class UMVVMView
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GeneratedViewClass; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Sources; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0040
    TArray<void*> Extensions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint64_t ValidSources; // 0x0070 (Size: 0x8, Type: UInt64Property)
    std::uint8_t NumberOfSourceWithTickBinding; // 0x0078 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bLogBinding; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstructed; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSourcesInitialized; // 0x007B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBindingsInitialized; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEventsInitialized; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultTickBinding; // 0x007E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMVVMView, GeneratedViewClass) == 40, "Offset mismatch for UMVVMView::GeneratedViewClass");
static_assert(offsetof(UMVVMView, Sources) == 48, "Offset mismatch for UMVVMView::Sources");
static_assert(offsetof(UMVVMView, Extensions) == 96, "Offset mismatch for UMVVMView::Extensions");
static_assert(offsetof(UMVVMView, ValidSources) == 112, "Offset mismatch for UMVVMView::ValidSources");
static_assert(offsetof(UMVVMView, NumberOfSourceWithTickBinding) == 120, "Offset mismatch for UMVVMView::NumberOfSourceWithTickBinding");
static_assert(offsetof(UMVVMView, bLogBinding) == 121, "Offset mismatch for UMVVMView::bLogBinding");
static_assert(offsetof(UMVVMView, bConstructed) == 122, "Offset mismatch for UMVVMView::bConstructed");
static_assert(offsetof(UMVVMView, bSourcesInitialized) == 123, "Offset mismatch for UMVVMView::bSourcesInitialized");
static_assert(offsetof(UMVVMView, bBindingsInitialized) == 124, "Offset mismatch for UMVVMView::bBindingsInitialized");
static_assert(offsetof(UMVVMView, bEventsInitialized) == 125, "Offset mismatch for UMVVMView::bEventsInitialized");
static_assert(offsetof(UMVVMView, bHasDefaultTickBinding) == 126, "Offset mismatch for UMVVMView::bHasDefaultTickBinding");

// /Script/ModelViewViewModel.MVVMViewClass
// Kind: Class; super: WidgetBlueprintGeneratedClassExtension
class UMVVMViewClass
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Sources; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bindings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EvaluateSources; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Events; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Conditions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ViewClassExtensions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BindingLibrary[0x50]; // 0x0088 (Size: 0x50, Type: StructProperty)
    std::uint64_t OptionalSources; // 0x00D8 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Pad_0001[0x4]; // 0x00E0
    std::uint8_t bInitializeSourcesOnConstruct; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitializeBindingsOnConstruct; // 0x00E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitializeEventsOnConstruct; // 0x00E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bListenToViewModelCollectionChanged; // 0x00E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateViewWithoutBindings; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMVVMViewClass, Sources) == 40, "Offset mismatch for UMVVMViewClass::Sources");
static_assert(offsetof(UMVVMViewClass, Bindings) == 56, "Offset mismatch for UMVVMViewClass::Bindings");
static_assert(offsetof(UMVVMViewClass, EvaluateSources) == 72, "Offset mismatch for UMVVMViewClass::EvaluateSources");
static_assert(offsetof(UMVVMViewClass, Events) == 88, "Offset mismatch for UMVVMViewClass::Events");
static_assert(offsetof(UMVVMViewClass, Conditions) == 104, "Offset mismatch for UMVVMViewClass::Conditions");
static_assert(offsetof(UMVVMViewClass, ViewClassExtensions) == 120, "Offset mismatch for UMVVMViewClass::ViewClassExtensions");
static_assert(offsetof(UMVVMViewClass, BindingLibrary) == 136, "Offset mismatch for UMVVMViewClass::BindingLibrary");
static_assert(offsetof(UMVVMViewClass, OptionalSources) == 216, "Offset mismatch for UMVVMViewClass::OptionalSources");
static_assert(offsetof(UMVVMViewClass, bInitializeSourcesOnConstruct) == 228, "Offset mismatch for UMVVMViewClass::bInitializeSourcesOnConstruct");
static_assert(offsetof(UMVVMViewClass, bInitializeBindingsOnConstruct) == 229, "Offset mismatch for UMVVMViewClass::bInitializeBindingsOnConstruct");
static_assert(offsetof(UMVVMViewClass, bInitializeEventsOnConstruct) == 230, "Offset mismatch for UMVVMViewClass::bInitializeEventsOnConstruct");
static_assert(offsetof(UMVVMViewClass, bListenToViewModelCollectionChanged) == 231, "Offset mismatch for UMVVMViewClass::bListenToViewModelCollectionChanged");
static_assert(offsetof(UMVVMViewClass, bCreateViewWithoutBindings) == 232, "Offset mismatch for UMVVMViewClass::bCreateViewWithoutBindings");

// /Script/ModelViewViewModel.MVVMViewClassExtension
// Kind: Class; super: Object
class UMVVMViewClassExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMViewExtension
// Kind: Class; super: Object
class UMVVMViewExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMViewListViewBaseClassExtension
// Kind: Class; super: MVVMViewClassExtension
class UMVVMViewListViewBaseClassExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WidgetName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t EntryViewModelName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetPath[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMVVMViewListViewBaseClassExtension, WidgetName) == 40, "Offset mismatch for UMVVMViewListViewBaseClassExtension::WidgetName");
static_assert(offsetof(UMVVMViewListViewBaseClassExtension, EntryViewModelName) == 44, "Offset mismatch for UMVVMViewListViewBaseClassExtension::EntryViewModelName");
static_assert(offsetof(UMVVMViewListViewBaseClassExtension, WidgetPath) == 48, "Offset mismatch for UMVVMViewListViewBaseClassExtension::WidgetPath");

// /Script/ModelViewViewModel.MVVMViewModelBase
// Kind: Class; super: Object
class UMVVMViewModelBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
// Kind: Class; super: BlueprintGeneratedClass
class UMVVMViewModelBlueprintGeneratedClass
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    std::int32_t NumReplicatedProperties; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasCookedComponentInstancingData; // 0x01AC (Size: 0x1, Type: BoolProperty)
    // 0x01AC BoolProperty bIsNativePropertyInitFastPathDisabled (shared storage)
    // 0x01AC BoolProperty bSupportsDynamicInstancedReference (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x01AD
    TArray<void*> DynamicBindingObjects; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentTemplates; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldNotifies; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0200
    void* SimpleConstructionScript; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* InheritableComponentHandler; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0218
    void* UberGraphFunction; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CookedPropertyGuids; // 0x0228 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CookedComponentInstancingData; // 0x0238 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, NumReplicatedProperties) == 424, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::NumReplicatedProperties");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, bHasCookedComponentInstancingData) == 428, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::bHasCookedComponentInstancingData");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, DynamicBindingObjects) == 432, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::DynamicBindingObjects");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, ComponentTemplates) == 448, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::ComponentTemplates");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, Timelines) == 464, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::Timelines");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, ComponentClassOverrides) == 480, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::ComponentClassOverrides");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, FieldNotifies) == 496, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::FieldNotifies");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, SimpleConstructionScript) == 520, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::SimpleConstructionScript");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, InheritableComponentHandler) == 528, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::InheritableComponentHandler");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, UberGraphFunction) == 544, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::UberGraphFunction");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, CookedPropertyGuids) == 552, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::CookedPropertyGuids");
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, CookedComponentInstancingData) == 568, "Offset mismatch for UMVVMViewModelBlueprintGeneratedClass::CookedComponentInstancingData");

// /Script/ModelViewViewModel.MVVMViewModelCollectionObject
// Kind: Class; super: Object
class UMVVMViewModelCollectionObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ViewModelCollection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMVVMViewModelCollectionObject, ViewModelCollection) == 40, "Offset mismatch for UMVVMViewModelCollectionObject::ViewModelCollection");

// /Script/ModelViewViewModel.MVVMViewModelContextResolver
// Kind: Class; super: Object
class UMVVMViewModelContextResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelViewViewModel.MVVMViewPanelWidgetClassExtension
// Kind: Class; super: MVVMViewClassExtension
class UMVVMViewPanelWidgetClassExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WidgetName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t EntryViewModelName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    void* EntryWidgetClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* SlotTemplate; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    FName PanelPropertyName; // 0x0040 (Size: 0x8, Type: NameProperty)
    void* EntryViewModelClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
    std::uint8_t WidgetPath[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, WidgetName) == 40, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::WidgetName");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, EntryViewModelName) == 44, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::EntryViewModelName");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, EntryWidgetClass) == 48, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::EntryWidgetClass");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, SlotTemplate) == 56, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::SlotTemplate");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, PanelPropertyName) == 64, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::PanelPropertyName");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, EntryViewModelClass) == 72, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::EntryViewModelClass");
static_assert(offsetof(UMVVMViewPanelWidgetClassExtension, WidgetPath) == 80, "Offset mismatch for UMVVMViewPanelWidgetClassExtension::WidgetPath");

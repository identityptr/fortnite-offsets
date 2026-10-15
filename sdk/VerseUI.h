/**
 * decamp dumper generated SDK
 * Package: /Script/VerseUI
 */
#pragma once
#include "Basic.h"

// /Script/VerseUI.UserWidgetProperty
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FUserWidgetProperty
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::int64_t IntegerValue; // 0x0018 (Size: 0x8, Type: Int64Property)
    double DoubleValue; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LogicValue; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    std::uint8_t Message[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    FString String; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t Object[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Struct[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserWidgetProperty, Type) == 12, "Offset mismatch for FUserWidgetProperty::Type");
static_assert(offsetof(FUserWidgetProperty, Name) == 16, "Offset mismatch for FUserWidgetProperty::Name");
static_assert(offsetof(FUserWidgetProperty, IntegerValue) == 24, "Offset mismatch for FUserWidgetProperty::IntegerValue");
static_assert(offsetof(FUserWidgetProperty, DoubleValue) == 32, "Offset mismatch for FUserWidgetProperty::DoubleValue");
static_assert(offsetof(FUserWidgetProperty, LogicValue) == 40, "Offset mismatch for FUserWidgetProperty::LogicValue");
static_assert(offsetof(FUserWidgetProperty, Message) == 48, "Offset mismatch for FUserWidgetProperty::Message");
static_assert(offsetof(FUserWidgetProperty, String) == 96, "Offset mismatch for FUserWidgetProperty::String");
static_assert(offsetof(FUserWidgetProperty, Object) == 112, "Offset mismatch for FUserWidgetProperty::Object");
static_assert(offsetof(FUserWidgetProperty, Struct) == 144, "Offset mismatch for FUserWidgetProperty::Struct");

// /Script/VerseUI.VerseUIUserWidgetPropertyList
// Kind: ScriptStruct; super: FastArraySerializer
struct FVerseUIUserWidgetPropertyList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Properties; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseUIUserWidgetPropertyList, Properties) == 72, "Offset mismatch for FVerseUIUserWidgetPropertyList::Properties");
static_assert(offsetof(FVerseUIUserWidgetPropertyList, Owner) == 88, "Offset mismatch for FVerseUIUserWidgetPropertyList::Owner");

// /Script/VerseUI.VerseUIUserWidgetViewmodel
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVerseUIUserWidgetViewmodel
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t Name[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    void* Instance; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* AuthorityInstance; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseUIUserWidgetViewmodel, Name) == 12, "Offset mismatch for FVerseUIUserWidgetViewmodel::Name");
static_assert(offsetof(FVerseUIUserWidgetViewmodel, Instance) == 16, "Offset mismatch for FVerseUIUserWidgetViewmodel::Instance");
static_assert(offsetof(FVerseUIUserWidgetViewmodel, AuthorityInstance) == 24, "Offset mismatch for FVerseUIUserWidgetViewmodel::AuthorityInstance");

// /Script/VerseUI.VerseUIUserWidgetViewmodelList
// Kind: ScriptStruct; super: FastArraySerializer
struct FVerseUIUserWidgetViewmodelList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> ViewModels; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseUIUserWidgetViewmodelList, ViewModels) == 72, "Offset mismatch for FVerseUIUserWidgetViewmodelList::ViewModels");
static_assert(offsetof(FVerseUIUserWidgetViewmodelList, Owner) == 88, "Offset mismatch for FVerseUIUserWidgetViewmodelList::Owner");

// /Script/VerseUI.VerseUIViewmodelRegistryTag
// Kind: ScriptStruct; super: none
struct FVerseUIViewmodelRegistryTag
{
public:
    FString ViewModelName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ClassName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ClassPackageName; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t bGeneratedClass; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptional; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAsInterface; // 0x0032 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVerseUIViewmodelRegistryTag, ViewModelName) == 0, "Offset mismatch for FVerseUIViewmodelRegistryTag::ViewModelName");
static_assert(offsetof(FVerseUIViewmodelRegistryTag, ClassName) == 16, "Offset mismatch for FVerseUIViewmodelRegistryTag::ClassName");
static_assert(offsetof(FVerseUIViewmodelRegistryTag, ClassPackageName) == 32, "Offset mismatch for FVerseUIViewmodelRegistryTag::ClassPackageName");
static_assert(offsetof(FVerseUIViewmodelRegistryTag, bGeneratedClass) == 48, "Offset mismatch for FVerseUIViewmodelRegistryTag::bGeneratedClass");
static_assert(offsetof(FVerseUIViewmodelRegistryTag, bOptional) == 49, "Offset mismatch for FVerseUIViewmodelRegistryTag::bOptional");
static_assert(offsetof(FVerseUIViewmodelRegistryTag, bUseAsInterface) == 50, "Offset mismatch for FVerseUIViewmodelRegistryTag::bUseAsInterface");

// /Script/VerseUI.VerseUIImageBlock
// Kind: Class; super: UIFrameworkImageBlock
class UVerseUIImageBlock
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Data[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    std::uint8_t bWaitForResourceToBeLoaded; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseUIImageBlock, Data) == 224, "Offset mismatch for UVerseUIImageBlock::Data");
static_assert(offsetof(UVerseUIImageBlock, bWaitForResourceToBeLoaded) == 288, "Offset mismatch for UVerseUIImageBlock::bWaitForResourceToBeLoaded");

// /Script/VerseUI.VerseUIPlayerComponent
// Kind: Class; super: UIFrameworkPlayerComponent
class UVerseUIPlayerComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* PlayerUI; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseUIPlayerComponent, PlayerUI) == 632, "Offset mismatch for UVerseUIPlayerComponent::PlayerUI");

// /Script/VerseUI.VerseUIUserWidget
// Kind: Class; super: UIFrameworkUserWidget
class UVerseUIUserWidget
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t ReplicatedViewmodelList[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedPropertyList[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseUIUserWidget, ReplicatedViewmodelList) == 368, "Offset mismatch for UVerseUIUserWidget::ReplicatedViewmodelList");
static_assert(offsetof(UVerseUIUserWidget, ReplicatedPropertyList) == 464, "Offset mismatch for UVerseUIUserWidget::ReplicatedPropertyList");

// /Script/VerseUI.VerseUIWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseUIWorldSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseUI.VerseWidgetNativeBase
// Kind: Class; super: Object
class UVerseWidgetNativeBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* UIFWidgetInstance; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseWidgetNativeBase, UIFWidgetInstance) == 48, "Offset mismatch for UVerseWidgetNativeBase::UIFWidgetInstance");

// /Script/VerseUI.WidgetAssetReflectionConfig
// Kind: Class; super: Object
class UWidgetAssetReflectionConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ExcludedPackageRoots; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWidgetAssetReflectionConfig, ExcludedPackageRoots) == 40, "Offset mismatch for UWidgetAssetReflectionConfig::ExcludedPackageRoots");

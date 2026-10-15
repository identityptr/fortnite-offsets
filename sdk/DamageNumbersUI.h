/**
 * decamp dumper generated SDK
 * Package: /Script/DamageNumbersUI
 */
#pragma once
#include "Basic.h"

// /Script/DamageNumbersUI.FortEvent_RegisterDamageNumbersWidgetClass
// Kind: ScriptStruct; super: none
struct FFortEvent_RegisterDamageNumbersWidgetClass
{
public:
    void* WidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PoolSize; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortEvent_RegisterDamageNumbersWidgetClass, WidgetClass) == 0, "Offset mismatch for FFortEvent_RegisterDamageNumbersWidgetClass::WidgetClass");
static_assert(offsetof(FFortEvent_RegisterDamageNumbersWidgetClass, PoolSize) == 8, "Offset mismatch for FFortEvent_RegisterDamageNumbersWidgetClass::PoolSize");

// /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers
// Kind: Class; super: CommonUserWidget
class UCommonUserWidget_DamageNumbers
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t WorldSpacePos[0x18]; // 0x0340 (Size: 0x18, Type: StructProperty)
    std::uint8_t CheckAnimalTag[0x4]; // 0x0358 (Size: 0x4, Type: StructProperty)
    float Damage; // 0x035C (Size: 0x4, Type: FloatProperty)
    float AdditionalVerticalScreenOffset; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0364
    double SpawnTime; // 0x0368 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DamageNumberScaleVector[0x10]; // 0x0370 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScreenSpaceOffsetFromHitActor[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    std::uint8_t InverseHUDScaleVector[0x10]; // 0x0390 (Size: 0x10, Type: StructProperty)
    void* HitActor; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHitAnimal; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitVehicle; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingCritAnimation; // 0x03AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateZeroDamagePosition; // 0x03AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03AC
    std::uint8_t HitColor[0x10]; // 0x03B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t VehicleColor[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor[0x10]; // 0x03D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t HealthColor[0x10]; // 0x03E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor[0x10]; // 0x03F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_Text[0x10]; // 0x0400 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_Text[0x10]; // 0x0410 (Size: 0x10, Type: StructProperty)
    std::uint8_t HealthColor_InnerStroke[0x10]; // 0x0420 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_InnerStroke[0x10]; // 0x0430 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_InnerStroke[0x10]; // 0x0440 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconVehicleColor[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconShieldColor[0x10]; // 0x0460 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconShieldOutline1Color[0x10]; // 0x0470 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconShieldOutline2Color[0x10]; // 0x0480 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconVehicleOutline1Color[0x10]; // 0x0490 (Size: 0x10, Type: StructProperty)
    std::uint8_t DamageIconVehicleOutline2Color[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    void* OnDamage; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* OnDamage_Crit; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Text_Number; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Number_Stroke; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* DamageTypeCrit; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* DamageTypeIcon; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* DamageTypeIcon_EMP; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUserWidget_DamageNumbers, WorldSpacePos) == 832, "Offset mismatch for UCommonUserWidget_DamageNumbers::WorldSpacePos");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, CheckAnimalTag) == 856, "Offset mismatch for UCommonUserWidget_DamageNumbers::CheckAnimalTag");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, Damage) == 860, "Offset mismatch for UCommonUserWidget_DamageNumbers::Damage");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, AdditionalVerticalScreenOffset) == 864, "Offset mismatch for UCommonUserWidget_DamageNumbers::AdditionalVerticalScreenOffset");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, SpawnTime) == 872, "Offset mismatch for UCommonUserWidget_DamageNumbers::SpawnTime");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageNumberScaleVector) == 880, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageNumberScaleVector");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, ScreenSpaceOffsetFromHitActor) == 896, "Offset mismatch for UCommonUserWidget_DamageNumbers::ScreenSpaceOffsetFromHitActor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, InverseHUDScaleVector) == 912, "Offset mismatch for UCommonUserWidget_DamageNumbers::InverseHUDScaleVector");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, HitActor) == 928, "Offset mismatch for UCommonUserWidget_DamageNumbers::HitActor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, bHitAnimal) == 936, "Offset mismatch for UCommonUserWidget_DamageNumbers::bHitAnimal");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, bHitVehicle) == 937, "Offset mismatch for UCommonUserWidget_DamageNumbers::bHitVehicle");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, bIsPlayingCritAnimation) == 938, "Offset mismatch for UCommonUserWidget_DamageNumbers::bIsPlayingCritAnimation");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, bUpdateZeroDamagePosition) == 939, "Offset mismatch for UCommonUserWidget_DamageNumbers::bUpdateZeroDamagePosition");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, HitColor) == 944, "Offset mismatch for UCommonUserWidget_DamageNumbers::HitColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, VehicleColor) == 960, "Offset mismatch for UCommonUserWidget_DamageNumbers::VehicleColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, CritColor) == 976, "Offset mismatch for UCommonUserWidget_DamageNumbers::CritColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, HealthColor) == 992, "Offset mismatch for UCommonUserWidget_DamageNumbers::HealthColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, ShieldColor) == 1008, "Offset mismatch for UCommonUserWidget_DamageNumbers::ShieldColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, CritColor_Text) == 1024, "Offset mismatch for UCommonUserWidget_DamageNumbers::CritColor_Text");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, ShieldColor_Text) == 1040, "Offset mismatch for UCommonUserWidget_DamageNumbers::ShieldColor_Text");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, HealthColor_InnerStroke) == 1056, "Offset mismatch for UCommonUserWidget_DamageNumbers::HealthColor_InnerStroke");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, ShieldColor_InnerStroke) == 1072, "Offset mismatch for UCommonUserWidget_DamageNumbers::ShieldColor_InnerStroke");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, CritColor_InnerStroke) == 1088, "Offset mismatch for UCommonUserWidget_DamageNumbers::CritColor_InnerStroke");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconVehicleColor) == 1104, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconVehicleColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconShieldColor) == 1120, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconShieldColor");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconShieldOutline1Color) == 1136, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconShieldOutline1Color");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconShieldOutline2Color) == 1152, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconShieldOutline2Color");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconVehicleOutline1Color) == 1168, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconVehicleOutline1Color");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageIconVehicleOutline2Color) == 1184, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageIconVehicleOutline2Color");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, OnDamage) == 1200, "Offset mismatch for UCommonUserWidget_DamageNumbers::OnDamage");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, OnDamage_Crit) == 1208, "Offset mismatch for UCommonUserWidget_DamageNumbers::OnDamage_Crit");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, Text_Number) == 1216, "Offset mismatch for UCommonUserWidget_DamageNumbers::Text_Number");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, Text_Number_Stroke) == 1224, "Offset mismatch for UCommonUserWidget_DamageNumbers::Text_Number_Stroke");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageTypeCrit) == 1232, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageTypeCrit");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageTypeIcon) == 1240, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageTypeIcon");
static_assert(offsetof(UCommonUserWidget_DamageNumbers, DamageTypeIcon_EMP) == 1248, "Offset mismatch for UCommonUserWidget_DamageNumbers::DamageTypeIcon_EMP");

// /Script/DamageNumbersUI.CustomDamageNumbersDataComponent
// Kind: Class; super: ActorComponent
class UCustomDamageNumbersDataComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnDamageDealt; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t Priority; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t PoolSize; // 0x00D4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    void* DamageNumbersClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSpecifiedAsInstigator; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomDamageNumbersDataComponent, OnDamageDealt) == 192, "Offset mismatch for UCustomDamageNumbersDataComponent::OnDamageDealt");
static_assert(offsetof(UCustomDamageNumbersDataComponent, Priority) == 208, "Offset mismatch for UCustomDamageNumbersDataComponent::Priority");
static_assert(offsetof(UCustomDamageNumbersDataComponent, PoolSize) == 212, "Offset mismatch for UCustomDamageNumbersDataComponent::PoolSize");
static_assert(offsetof(UCustomDamageNumbersDataComponent, DamageNumbersClass) == 216, "Offset mismatch for UCustomDamageNumbersDataComponent::DamageNumbersClass");
static_assert(offsetof(UCustomDamageNumbersDataComponent, bSpecifiedAsInstigator) == 224, "Offset mismatch for UCustomDamageNumbersDataComponent::bSpecifiedAsInstigator");

// /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_DamageNumbers
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_DamageNumbers, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_DamageNumbers::MarkupBase");

// /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
// Kind: Class; super: FortUserWidget
class UFortUserWidget_DamageNumbers
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    void* DefaultDamageNumberClass; // 0x0318 (Size: 0x8, Type: ClassProperty)
    double VerticalShiftForNewDamage; // 0x0320 (Size: 0x8, Type: DoubleProperty)
    double AccumulationTime; // 0x0328 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MaxNumberCount; // 0x0330 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0331
    std::uint8_t OffsetFromPawnLocationDBNO[0x18]; // 0x0338 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetFromPawnLocation[0x18]; // 0x0350 (Size: 0x18, Type: StructProperty)
    void* BoundPawn; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HideDamageNumbersTag[0x4]; // 0x0370 (Size: 0x4, Type: StructProperty)
    std::uint8_t DamageAtLocTag[0x4]; // 0x0374 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagsToNotDisplayDmgNumbersOnSpecificActors[0x20]; // 0x0378 (Size: 0x20, Type: StructProperty)
    void* DynamicEntryBox_Numbers; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PoolByClassController; // 0x03A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t DamageCueEMPTag[0x4]; // 0x03B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bPrecreateDamageNumberEntries; // 0x03B4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortUserWidget_DamageNumbers, DefaultDamageNumberClass) == 792, "Offset mismatch for UFortUserWidget_DamageNumbers::DefaultDamageNumberClass");
static_assert(offsetof(UFortUserWidget_DamageNumbers, VerticalShiftForNewDamage) == 800, "Offset mismatch for UFortUserWidget_DamageNumbers::VerticalShiftForNewDamage");
static_assert(offsetof(UFortUserWidget_DamageNumbers, AccumulationTime) == 808, "Offset mismatch for UFortUserWidget_DamageNumbers::AccumulationTime");
static_assert(offsetof(UFortUserWidget_DamageNumbers, MaxNumberCount) == 816, "Offset mismatch for UFortUserWidget_DamageNumbers::MaxNumberCount");
static_assert(offsetof(UFortUserWidget_DamageNumbers, OffsetFromPawnLocationDBNO) == 824, "Offset mismatch for UFortUserWidget_DamageNumbers::OffsetFromPawnLocationDBNO");
static_assert(offsetof(UFortUserWidget_DamageNumbers, OffsetFromPawnLocation) == 848, "Offset mismatch for UFortUserWidget_DamageNumbers::OffsetFromPawnLocation");
static_assert(offsetof(UFortUserWidget_DamageNumbers, BoundPawn) == 872, "Offset mismatch for UFortUserWidget_DamageNumbers::BoundPawn");
static_assert(offsetof(UFortUserWidget_DamageNumbers, HideDamageNumbersTag) == 880, "Offset mismatch for UFortUserWidget_DamageNumbers::HideDamageNumbersTag");
static_assert(offsetof(UFortUserWidget_DamageNumbers, DamageAtLocTag) == 884, "Offset mismatch for UFortUserWidget_DamageNumbers::DamageAtLocTag");
static_assert(offsetof(UFortUserWidget_DamageNumbers, TagsToNotDisplayDmgNumbersOnSpecificActors) == 888, "Offset mismatch for UFortUserWidget_DamageNumbers::TagsToNotDisplayDmgNumbersOnSpecificActors");
static_assert(offsetof(UFortUserWidget_DamageNumbers, DynamicEntryBox_Numbers) == 920, "Offset mismatch for UFortUserWidget_DamageNumbers::DynamicEntryBox_Numbers");
static_assert(offsetof(UFortUserWidget_DamageNumbers, PoolByClassController) == 928, "Offset mismatch for UFortUserWidget_DamageNumbers::PoolByClassController");
static_assert(offsetof(UFortUserWidget_DamageNumbers, DamageCueEMPTag) == 944, "Offset mismatch for UFortUserWidget_DamageNumbers::DamageCueEMPTag");
static_assert(offsetof(UFortUserWidget_DamageNumbers, bPrecreateDamageNumberEntries) == 948, "Offset mismatch for UFortUserWidget_DamageNumbers::bPrecreateDamageNumberEntries");

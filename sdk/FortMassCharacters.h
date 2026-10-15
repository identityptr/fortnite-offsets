/**
 * decamp dumper generated SDK
 * Package: /Script/FortMassCharacters
 */
#pragma once
#include "Basic.h"

// /Script/FortMassCharacters.FortMassCharacterVisualizationChooserInput
// Kind: ScriptStruct; super: none
struct FFortMassCharacterVisualizationChooserInput
{
public:
    void* CID; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortMassCharacterVisualizationChooserInput, CID) == 0, "Offset mismatch for FFortMassCharacterVisualizationChooserInput::CID");

// /Script/FortMassCharacters.FortMassWeaponHandlerTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FFortMassWeaponHandlerTickFunction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Target; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortMassWeaponHandlerTickFunction, Target) == 40, "Offset mismatch for FFortMassWeaponHandlerTickFunction::Target");

// /Script/FortMassCharacters.MulticastProjectileRequestParams
// Kind: ScriptStruct; super: none
struct FMulticastProjectileRequestParams
{
public:
    std::uint8_t RequestNet[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TWeakObjectPtr<void> Weapon; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* ProjectileConfigClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* WeaponClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
    float TimeBetweenShots; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t AmmoType; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t RequestType; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GameplayCueType; // 0x0059 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsSuppressed; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFiredWhileTargeting; // 0x005B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMulticastProjectileRequestParams, RequestNet) == 0, "Offset mismatch for FMulticastProjectileRequestParams::RequestNet");
static_assert(offsetof(FMulticastProjectileRequestParams, Weapon) == 56, "Offset mismatch for FMulticastProjectileRequestParams::Weapon");
static_assert(offsetof(FMulticastProjectileRequestParams, ProjectileConfigClass) == 64, "Offset mismatch for FMulticastProjectileRequestParams::ProjectileConfigClass");
static_assert(offsetof(FMulticastProjectileRequestParams, WeaponClass) == 72, "Offset mismatch for FMulticastProjectileRequestParams::WeaponClass");
static_assert(offsetof(FMulticastProjectileRequestParams, TimeBetweenShots) == 80, "Offset mismatch for FMulticastProjectileRequestParams::TimeBetweenShots");
static_assert(offsetof(FMulticastProjectileRequestParams, AmmoType) == 84, "Offset mismatch for FMulticastProjectileRequestParams::AmmoType");
static_assert(offsetof(FMulticastProjectileRequestParams, RequestType) == 88, "Offset mismatch for FMulticastProjectileRequestParams::RequestType");
static_assert(offsetof(FMulticastProjectileRequestParams, GameplayCueType) == 89, "Offset mismatch for FMulticastProjectileRequestParams::GameplayCueType");
static_assert(offsetof(FMulticastProjectileRequestParams, bIsSuppressed) == 90, "Offset mismatch for FMulticastProjectileRequestParams::bIsSuppressed");
static_assert(offsetof(FMulticastProjectileRequestParams, bFiredWhileTargeting) == 91, "Offset mismatch for FMulticastProjectileRequestParams::bFiredWhileTargeting");

// /Script/FortMassCharacters.MulticastProjectileRequestParamsNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FMulticastProjectileRequestParamsNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMassCharacters.FortMassCharacterComponent
// Kind: Class; super: MassCharacterComponent
class UFortMassCharacterComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* EntityConfigAsset; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x00C8
    std::uint8_t NetID[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMassCharacterComponent, EntityConfigAsset) == 192, "Offset mismatch for UFortMassCharacterComponent::EntityConfigAsset");
static_assert(offsetof(UFortMassCharacterComponent, NetID) == 256, "Offset mismatch for UFortMassCharacterComponent::NetID");

// /Script/FortMassCharacters.FortMassCharacterVisualizationHandler_ISKM
// Kind: Class; super: MassCharacterVisualizationHandler_ISKM
class UFortMassCharacterVisualizationHandler_ISKM
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VisualizationLookupChooser; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMassCharacterVisualizationHandler_ISKM, VisualizationLookupChooser) == 40, "Offset mismatch for UFortMassCharacterVisualizationHandler_ISKM::VisualizationLookupChooser");

// /Script/FortMassCharacters.FortMassCharacterVisualizationHandler_VAT
// Kind: Class; super: MassCharacterVisualizationHandler_VAT
class UFortMassCharacterVisualizationHandler_VAT
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VisualizationLookupChooser; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMassCharacterVisualizationHandler_VAT, VisualizationLookupChooser) == 40, "Offset mismatch for UFortMassCharacterVisualizationHandler_VAT::VisualizationLookupChooser");

// /Script/FortMassCharacters.FortMassWeaponHandler
// Kind: Class; super: FortWeaponHandlerBase
class UFortMassWeaponHandler
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> InitializedWorld; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMassWeaponHandler, InitializedWorld) == 64, "Offset mismatch for UFortMassWeaponHandler::InitializedWorld");

// /Script/FortMassCharacters.FortMassWeaponHandlerCellProxy
// Kind: Class; super: Info
class UFortMassWeaponHandlerCellProxy
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    TArray<void*> SendBatch; // 0x0288 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMassWeaponHandlerCellProxy, SendBatch) == 648, "Offset mismatch for UFortMassWeaponHandlerCellProxy::SendBatch");

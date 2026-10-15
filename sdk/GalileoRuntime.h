/**
 * decamp dumper generated SDK
 * Package: /Script/GalileoRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GalileoRuntime.GalileoLobsterLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance_Lobster
class UGalileoLobsterLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x660]; // 0x0000
    float PelvisTwistAlpha; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float CustomPelvisTwist; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float ResultingPitch; // 0x0668 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x066C
    double BlendLowerBodyFloat; // 0x0670 (Size: 0x8, Type: DoubleProperty)
    double IsMeleeGuardingFloat; // 0x0678 (Size: 0x8, Type: DoubleProperty)
    double ResultingYaw; // 0x0680 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsUsingPowerAO; // 0x0688 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDoubleJumpFall; // 0x0689 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAO_BlendIn; // 0x068A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x068B
    std::uint8_t InMeleeTags[0x20]; // 0x0690 (Size: 0x20, Type: StructProperty)
    std::uint8_t PassengerTagName[0x4]; // 0x06B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t InMotorcycleTagName[0x4]; // 0x06B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t HoverActiveTagName[0x8]; // 0x06B8 (Size: 0x8, Type: StructProperty)
    void* GalileoLobsterEquipMAnimMontage; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGalileoLobsterLayerAnimInstance, PelvisTwistAlpha) == 1632, "Offset mismatch for UGalileoLobsterLayerAnimInstance::PelvisTwistAlpha");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, CustomPelvisTwist) == 1636, "Offset mismatch for UGalileoLobsterLayerAnimInstance::CustomPelvisTwist");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, ResultingPitch) == 1640, "Offset mismatch for UGalileoLobsterLayerAnimInstance::ResultingPitch");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, BlendLowerBodyFloat) == 1648, "Offset mismatch for UGalileoLobsterLayerAnimInstance::BlendLowerBodyFloat");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, IsMeleeGuardingFloat) == 1656, "Offset mismatch for UGalileoLobsterLayerAnimInstance::IsMeleeGuardingFloat");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, ResultingYaw) == 1664, "Offset mismatch for UGalileoLobsterLayerAnimInstance::ResultingYaw");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, bIsUsingPowerAO) == 1672, "Offset mismatch for UGalileoLobsterLayerAnimInstance::bIsUsingPowerAO");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, bIsDoubleJumpFall) == 1673, "Offset mismatch for UGalileoLobsterLayerAnimInstance::bIsDoubleJumpFall");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, bAO_BlendIn) == 1674, "Offset mismatch for UGalileoLobsterLayerAnimInstance::bAO_BlendIn");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, InMeleeTags) == 1680, "Offset mismatch for UGalileoLobsterLayerAnimInstance::InMeleeTags");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, PassengerTagName) == 1712, "Offset mismatch for UGalileoLobsterLayerAnimInstance::PassengerTagName");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, InMotorcycleTagName) == 1716, "Offset mismatch for UGalileoLobsterLayerAnimInstance::InMotorcycleTagName");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, HoverActiveTagName) == 1720, "Offset mismatch for UGalileoLobsterLayerAnimInstance::HoverActiveTagName");
static_assert(offsetof(UGalileoLobsterLayerAnimInstance, GalileoLobsterEquipMAnimMontage) == 1728, "Offset mismatch for UGalileoLobsterLayerAnimInstance::GalileoLobsterEquipMAnimMontage");

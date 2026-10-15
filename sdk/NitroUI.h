/**
 * decamp dumper generated SDK
 * Package: /Script/NitroUI
 */
#pragma once
#include "Basic.h"

// /Script/NitroUI.NitroPlayerInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UNitroPlayerInfoWidget
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    std::uint8_t NitroStateTag[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNitroPlayerInfoWidget, NitroStateTag) == 896, "Offset mismatch for UNitroPlayerInfoWidget::NitroStateTag");

// /Script/NitroUI.NitroVehicleFuelGaugeWidget
// Kind: Class; super: UserWidget
class UNitroVehicleFuelGaugeWidget
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t NitroActiveTag[0x4]; // 0x0350 (Size: 0x4, Type: StructProperty)
    std::uint8_t NitroEffectTag[0x4]; // 0x0354 (Size: 0x4, Type: StructProperty)
    void* TargetFuelGauge; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNitroVehicleFuelGaugeWidget, NitroActiveTag) == 848, "Offset mismatch for UNitroVehicleFuelGaugeWidget::NitroActiveTag");
static_assert(offsetof(UNitroVehicleFuelGaugeWidget, NitroEffectTag) == 852, "Offset mismatch for UNitroVehicleFuelGaugeWidget::NitroEffectTag");
static_assert(offsetof(UNitroVehicleFuelGaugeWidget, TargetFuelGauge) == 856, "Offset mismatch for UNitroVehicleFuelGaugeWidget::TargetFuelGauge");

/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineFrameworkAnalytics
 */
#pragma once
#include "Basic.h"

// /Script/OnlineFrameworkAnalytics.OnlineAnalyticsOperationSetting
// Kind: ScriptStruct; super: none
struct FOnlineAnalyticsOperationSetting
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    float Rate; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FOnlineAnalyticsOperationSetting, Name) == 0, "Offset mismatch for FOnlineAnalyticsOperationSetting::Name");
static_assert(offsetof(FOnlineAnalyticsOperationSetting, Rate) == 16, "Offset mismatch for FOnlineAnalyticsOperationSetting::Rate");

// /Script/OnlineFrameworkAnalytics.OnlineAnalyticsGameInstanceSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UOnlineAnalyticsGameInstanceSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> OperationSettings; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineAnalyticsGameInstanceSubsystem, OperationSettings) == 80, "Offset mismatch for UOnlineAnalyticsGameInstanceSubsystem::OperationSettings");

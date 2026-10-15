/**
 * decamp dumper generated SDK
 * Package: /Script/AnalyticsBlueprintLibrary
 */
#pragma once
#include "Basic.h"

// /Script/AnalyticsBlueprintLibrary.AnalyticsEventAttr
// Kind: ScriptStruct; super: none
struct FAnalyticsEventAttr
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAnalyticsEventAttr, Name) == 0, "Offset mismatch for FAnalyticsEventAttr::Name");
static_assert(offsetof(FAnalyticsEventAttr, Value) == 16, "Offset mismatch for FAnalyticsEventAttr::Value");

// /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnalyticsBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};

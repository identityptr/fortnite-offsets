/**
 * decamp dumper generated SDK
 * Package: /Script/NamingTokens
 */
#pragma once
#include "Basic.h"

// /Script/NamingTokens.NamingTokenData
// Kind: ScriptStruct; super: none
struct FNamingTokenData
{
public:
    FString TokenKey; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    FName FunctionName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNamingTokenData, TokenKey) == 0, "Offset mismatch for FNamingTokenData::TokenKey");
static_assert(offsetof(FNamingTokenData, DisplayName) == 16, "Offset mismatch for FNamingTokenData::DisplayName");
static_assert(offsetof(FNamingTokenData, Description) == 32, "Offset mismatch for FNamingTokenData::Description");
static_assert(offsetof(FNamingTokenData, FunctionName) == 48, "Offset mismatch for FNamingTokenData::FunctionName");

// /Script/NamingTokens.NamingTokenFilterArgs
// Kind: ScriptStruct; super: none
struct FNamingTokenFilterArgs
{
public:
    TArray<void*> AdditionalNamespacesToInclude; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeGlobal; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceCaseSensitive; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeOnly; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalizeInput; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNamingTokenFilterArgs, AdditionalNamespacesToInclude) == 0, "Offset mismatch for FNamingTokenFilterArgs::AdditionalNamespacesToInclude");
static_assert(offsetof(FNamingTokenFilterArgs, bIncludeGlobal) == 16, "Offset mismatch for FNamingTokenFilterArgs::bIncludeGlobal");
static_assert(offsetof(FNamingTokenFilterArgs, bForceCaseSensitive) == 17, "Offset mismatch for FNamingTokenFilterArgs::bForceCaseSensitive");
static_assert(offsetof(FNamingTokenFilterArgs, bNativeOnly) == 18, "Offset mismatch for FNamingTokenFilterArgs::bNativeOnly");
static_assert(offsetof(FNamingTokenFilterArgs, bNormalizeInput) == 19, "Offset mismatch for FNamingTokenFilterArgs::bNormalizeInput");

// /Script/NamingTokens.NamingTokenResultData
// Kind: ScriptStruct; super: none
struct FNamingTokenResultData
{
public:
    std::uint8_t OriginalText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t EvaluatedText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TArray<void*> TokenValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNamingTokenResultData, OriginalText) == 0, "Offset mismatch for FNamingTokenResultData::OriginalText");
static_assert(offsetof(FNamingTokenResultData, EvaluatedText) == 16, "Offset mismatch for FNamingTokenResultData::EvaluatedText");
static_assert(offsetof(FNamingTokenResultData, TokenValues) == 32, "Offset mismatch for FNamingTokenResultData::TokenValues");

// /Script/NamingTokens.NamingTokenValueData
// Kind: ScriptStruct; super: none
struct FNamingTokenValueData
{
public:
    FString TokenKey; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TokenNamespace; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t TokenValue[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t bWasEvaluated; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNamingTokenValueData, TokenKey) == 0, "Offset mismatch for FNamingTokenValueData::TokenKey");
static_assert(offsetof(FNamingTokenValueData, TokenNamespace) == 16, "Offset mismatch for FNamingTokenValueData::TokenNamespace");
static_assert(offsetof(FNamingTokenValueData, TokenValue) == 32, "Offset mismatch for FNamingTokenValueData::TokenValue");
static_assert(offsetof(FNamingTokenValueData, bWasEvaluated) == 48, "Offset mismatch for FNamingTokenValueData::bWasEvaluated");

// /Script/NamingTokens.NamingTokensEvaluationData
// Kind: ScriptStruct; super: none
struct FNamingTokensEvaluationData
{
public:
    std::uint8_t CurrentDateTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Contexts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNamingTokensEvaluationData, CurrentDateTime) == 0, "Offset mismatch for FNamingTokensEvaluationData::CurrentDateTime");
static_assert(offsetof(FNamingTokensEvaluationData, Contexts) == 8, "Offset mismatch for FNamingTokensEvaluationData::Contexts");

// /Script/NamingTokens.GlobalNamingTokens
// Kind: Class; super: NamingTokens
class UGlobalNamingTokens
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> CustomTokens; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentEvaluationData[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    FString Namespace; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t NamespaceDisplayName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsPrivateNamespace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGlobalNamingTokens, CustomTokens) == 120, "Offset mismatch for UGlobalNamingTokens::CustomTokens");
static_assert(offsetof(UGlobalNamingTokens, CurrentEvaluationData) == 136, "Offset mismatch for UGlobalNamingTokens::CurrentEvaluationData");
static_assert(offsetof(UGlobalNamingTokens, Namespace) == 168, "Offset mismatch for UGlobalNamingTokens::Namespace");
static_assert(offsetof(UGlobalNamingTokens, NamespaceDisplayName) == 184, "Offset mismatch for UGlobalNamingTokens::NamespaceDisplayName");
static_assert(offsetof(UGlobalNamingTokens, bIsPrivateNamespace) == 200, "Offset mismatch for UGlobalNamingTokens::bIsPrivateNamespace");

// /Script/NamingTokens.NamingTokens
// Kind: Class; super: Object
class UNamingTokens
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> CustomTokens; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentEvaluationData[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    FString Namespace; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t NamespaceDisplayName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsPrivateNamespace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNamingTokens, CustomTokens) == 120, "Offset mismatch for UNamingTokens::CustomTokens");
static_assert(offsetof(UNamingTokens, CurrentEvaluationData) == 136, "Offset mismatch for UNamingTokens::CurrentEvaluationData");
static_assert(offsetof(UNamingTokens, Namespace) == 168, "Offset mismatch for UNamingTokens::Namespace");
static_assert(offsetof(UNamingTokens, NamespaceDisplayName) == 184, "Offset mismatch for UNamingTokens::NamespaceDisplayName");
static_assert(offsetof(UNamingTokens, bIsPrivateNamespace) == 200, "Offset mismatch for UNamingTokens::bIsPrivateNamespace");

// /Script/NamingTokens.NamingTokensEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UNamingTokensEngineSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> CachedNamingTokens; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNamingTokensEngineSubsystem, CachedNamingTokens) == 48, "Offset mismatch for UNamingTokensEngineSubsystem::CachedNamingTokens");

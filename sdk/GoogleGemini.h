/**
 * decamp dumper generated SDK
 * Package: /Script/GoogleGemini
 */
#pragma once
#include "Basic.h"

// /Script/GoogleGemini.GoogleCloudPlatformOidcAuthenticationProvider
// Kind: Class; super: OidcAuthenticationProvider
class UGoogleCloudPlatformOidcAuthenticationProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ProviderIdentifier; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UGoogleCloudPlatformOidcAuthenticationProvider, ProviderIdentifier) == 40, "Offset mismatch for UGoogleCloudPlatformOidcAuthenticationProvider::ProviderIdentifier");

// /Script/GoogleGemini.GoogleGeminiChatCompleter
// Kind: Class; super: ChatCompleter
class UGoogleGeminiChatCompleter
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    FString Project; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString Location; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString Model; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString EndpointURL; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString FullyQualifiedModel; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultSafetySettings[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SafetySettingOverrides[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGoogleGeminiChatCompleter, Project) == 136, "Offset mismatch for UGoogleGeminiChatCompleter::Project");
static_assert(offsetof(UGoogleGeminiChatCompleter, Location) == 152, "Offset mismatch for UGoogleGeminiChatCompleter::Location");
static_assert(offsetof(UGoogleGeminiChatCompleter, Model) == 168, "Offset mismatch for UGoogleGeminiChatCompleter::Model");
static_assert(offsetof(UGoogleGeminiChatCompleter, EndpointURL) == 184, "Offset mismatch for UGoogleGeminiChatCompleter::EndpointURL");
static_assert(offsetof(UGoogleGeminiChatCompleter, FullyQualifiedModel) == 200, "Offset mismatch for UGoogleGeminiChatCompleter::FullyQualifiedModel");
static_assert(offsetof(UGoogleGeminiChatCompleter, DefaultSafetySettings) == 216, "Offset mismatch for UGoogleGeminiChatCompleter::DefaultSafetySettings");
static_assert(offsetof(UGoogleGeminiChatCompleter, SafetySettingOverrides) == 232, "Offset mismatch for UGoogleGeminiChatCompleter::SafetySettingOverrides");

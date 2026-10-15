/**
 * decamp dumper generated SDK
 * Package: /Script/OidcAuthentication
 */
#pragma once
#include "Basic.h"

// /Script/OidcAuthentication.OidcAccessTokenData
// Kind: ScriptStruct; super: none
struct FOidcAccessTokenData
{
public:
    FString OidcAccessToken; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t OidcAccessTokenExpireAt[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOidcAccessTokenData, OidcAccessToken) == 0, "Offset mismatch for FOidcAccessTokenData::OidcAccessToken");
static_assert(offsetof(FOidcAccessTokenData, OidcAccessTokenExpireAt) == 16, "Offset mismatch for FOidcAccessTokenData::OidcAccessTokenExpireAt");

// /Script/OidcAuthentication.GameFeatureAction_OidcAuthentication
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_OidcAuthentication
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AuthenticationProvider; // 0x0028 (Size: 0x8, Type: ClassProperty)
    FString AuthenticationProviderIdentifier; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Retries; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t RequiredCVar[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEditorOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAuthenticateOnLoading; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAuthenticateOnRegistering; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAuthenticateOnActivating; // 0x004B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameFeatureAction_OidcAuthentication, AuthenticationProvider) == 40, "Offset mismatch for UGameFeatureAction_OidcAuthentication::AuthenticationProvider");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, AuthenticationProviderIdentifier) == 48, "Offset mismatch for UGameFeatureAction_OidcAuthentication::AuthenticationProviderIdentifier");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, Retries) == 64, "Offset mismatch for UGameFeatureAction_OidcAuthentication::Retries");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, RequiredCVar) == 68, "Offset mismatch for UGameFeatureAction_OidcAuthentication::RequiredCVar");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, bEditorOnly) == 72, "Offset mismatch for UGameFeatureAction_OidcAuthentication::bEditorOnly");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, bAuthenticateOnLoading) == 73, "Offset mismatch for UGameFeatureAction_OidcAuthentication::bAuthenticateOnLoading");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, bAuthenticateOnRegistering) == 74, "Offset mismatch for UGameFeatureAction_OidcAuthentication::bAuthenticateOnRegistering");
static_assert(offsetof(UGameFeatureAction_OidcAuthentication, bAuthenticateOnActivating) == 75, "Offset mismatch for UGameFeatureAction_OidcAuthentication::bAuthenticateOnActivating");

// /Script/OidcAuthentication.OidcAuthenticationProvider
// Kind: Class; super: Object
class UOidcAuthenticationProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ProviderIdentifier; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOidcAuthenticationProvider, ProviderIdentifier) == 40, "Offset mismatch for UOidcAuthenticationProvider::ProviderIdentifier");

// /Script/OidcAuthentication.OidcAuthenticationProviderAsyncAction
// Kind: Class; super: BlueprintAsyncActionBase
class UOidcAuthenticationProviderAsyncAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnAuthenticationCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* OidcAuthenticationProvider; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOidcAuthenticationProviderAsyncAction, OnAuthenticationCompleted) == 48, "Offset mismatch for UOidcAuthenticationProviderAsyncAction::OnAuthenticationCompleted");
static_assert(offsetof(UOidcAuthenticationProviderAsyncAction, OidcAuthenticationProvider) == 64, "Offset mismatch for UOidcAuthenticationProviderAsyncAction::OidcAuthenticationProvider");

// /Script/OidcAuthentication.OidcAuthenticationSubsystem
// Kind: Class; super: EngineSubsystem
class UOidcAuthenticationSubsystem
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineSubsystemEOS
 */
#pragma once
#include "Basic.h"

// /Script/OnlineSubsystemEOS.ArtifactSettings
// Kind: ScriptStruct; super: none
struct FArtifactSettings
{
public:
    FString ArtifactName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ClientID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ClientSecret; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString ProductId; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString SandboxId; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString DeploymentId; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString ClientEncryptionKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FArtifactSettings, ArtifactName) == 0, "Offset mismatch for FArtifactSettings::ArtifactName");
static_assert(offsetof(FArtifactSettings, ClientID) == 16, "Offset mismatch for FArtifactSettings::ClientID");
static_assert(offsetof(FArtifactSettings, ClientSecret) == 32, "Offset mismatch for FArtifactSettings::ClientSecret");
static_assert(offsetof(FArtifactSettings, ProductId) == 48, "Offset mismatch for FArtifactSettings::ProductId");
static_assert(offsetof(FArtifactSettings, SandboxId) == 64, "Offset mismatch for FArtifactSettings::SandboxId");
static_assert(offsetof(FArtifactSettings, DeploymentId) == 80, "Offset mismatch for FArtifactSettings::DeploymentId");
static_assert(offsetof(FArtifactSettings, ClientEncryptionKey) == 96, "Offset mismatch for FArtifactSettings::ClientEncryptionKey");

// /Script/OnlineSubsystemEOS.EOSArtifactSettings
// Kind: Class; super: DataAsset
class UEOSArtifactSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemEOS.EOSSettings
// Kind: Class; super: RuntimeOptionsBase
class UEOSSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString CacheDir; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString DefaultArtifactName; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString PlatformConfigName; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString RTCBackgroundMode; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::int32_t TickBudgetInMilliseconds; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableOverlay; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSocialOverlay; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEditorOverlay; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferPersistentAuth; // 0x007F (Size: 0x1, Type: BoolProperty)
    TArray<void*> TitleStorageTags; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TitleStorageReadChunkLength; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    TArray<void*> Artifacts; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AuthScopeFlags; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseEAS; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseEOSConnect; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseEOSRTC; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNamedPlatformConfig; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNewEcomFlow; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNewLoginFlow; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00BE
    FString SteamTokenType; // 0x00C0 (Size: 0x10, Type: StrProperty)
    FString NintendoTokenType; // 0x00D0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UEOSSettings, CacheDir) == 56, "Offset mismatch for UEOSSettings::CacheDir");
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 72, "Offset mismatch for UEOSSettings::DefaultArtifactName");
static_assert(offsetof(UEOSSettings, PlatformConfigName) == 88, "Offset mismatch for UEOSSettings::PlatformConfigName");
static_assert(offsetof(UEOSSettings, RTCBackgroundMode) == 104, "Offset mismatch for UEOSSettings::RTCBackgroundMode");
static_assert(offsetof(UEOSSettings, TickBudgetInMilliseconds) == 120, "Offset mismatch for UEOSSettings::TickBudgetInMilliseconds");
static_assert(offsetof(UEOSSettings, bEnableOverlay) == 124, "Offset mismatch for UEOSSettings::bEnableOverlay");
static_assert(offsetof(UEOSSettings, bEnableSocialOverlay) == 125, "Offset mismatch for UEOSSettings::bEnableSocialOverlay");
static_assert(offsetof(UEOSSettings, bEnableEditorOverlay) == 126, "Offset mismatch for UEOSSettings::bEnableEditorOverlay");
static_assert(offsetof(UEOSSettings, bPreferPersistentAuth) == 127, "Offset mismatch for UEOSSettings::bPreferPersistentAuth");
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 128, "Offset mismatch for UEOSSettings::TitleStorageTags");
static_assert(offsetof(UEOSSettings, TitleStorageReadChunkLength) == 144, "Offset mismatch for UEOSSettings::TitleStorageReadChunkLength");
static_assert(offsetof(UEOSSettings, Artifacts) == 152, "Offset mismatch for UEOSSettings::Artifacts");
static_assert(offsetof(UEOSSettings, AuthScopeFlags) == 168, "Offset mismatch for UEOSSettings::AuthScopeFlags");
static_assert(offsetof(UEOSSettings, bUseEAS) == 184, "Offset mismatch for UEOSSettings::bUseEAS");
static_assert(offsetof(UEOSSettings, bUseEOSConnect) == 185, "Offset mismatch for UEOSSettings::bUseEOSConnect");
static_assert(offsetof(UEOSSettings, bUseEOSRTC) == 186, "Offset mismatch for UEOSSettings::bUseEOSRTC");
static_assert(offsetof(UEOSSettings, bUseNamedPlatformConfig) == 187, "Offset mismatch for UEOSSettings::bUseNamedPlatformConfig");
static_assert(offsetof(UEOSSettings, bUseNewEcomFlow) == 188, "Offset mismatch for UEOSSettings::bUseNewEcomFlow");
static_assert(offsetof(UEOSSettings, bUseNewLoginFlow) == 189, "Offset mismatch for UEOSSettings::bUseNewLoginFlow");
static_assert(offsetof(UEOSSettings, SteamTokenType) == 192, "Offset mismatch for UEOSSettings::SteamTokenType");
static_assert(offsetof(UEOSSettings, NintendoTokenType) == 208, "Offset mismatch for UEOSSettings::NintendoTokenType");

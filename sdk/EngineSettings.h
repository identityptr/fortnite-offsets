/**
 * decamp dumper generated SDK
 * Package: /Script/EngineSettings
 */
#pragma once
#include "Basic.h"

// /Script/EngineSettings.AutoCompleteCommand
// Kind: ScriptStruct; super: none
struct FAutoCompleteCommand
{
public:
    FString Command; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Desc; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAutoCompleteCommand, Command) == 0, "Offset mismatch for FAutoCompleteCommand::Command");
static_assert(offsetof(FAutoCompleteCommand, Desc) == 16, "Offset mismatch for FAutoCompleteCommand::Desc");

// /Script/EngineSettings.GameModeName
// Kind: ScriptStruct; super: none
struct FGameModeName
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t GameMode[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameModeName, Name) == 0, "Offset mismatch for FGameModeName::Name");
static_assert(offsetof(FGameModeName, GameMode) == 16, "Offset mismatch for FGameModeName::GameMode");

// /Script/EngineSettings.TemplateMapInfoOverride
// Kind: ScriptStruct; super: none
struct FTemplateMapInfoOverride
{
public:
    std::uint8_t Thumbnail[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Map[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    FText DisplayName; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FTemplateMapInfoOverride, Thumbnail) == 0, "Offset mismatch for FTemplateMapInfoOverride::Thumbnail");
static_assert(offsetof(FTemplateMapInfoOverride, Map) == 24, "Offset mismatch for FTemplateMapInfoOverride::Map");
static_assert(offsetof(FTemplateMapInfoOverride, DisplayName) == 48, "Offset mismatch for FTemplateMapInfoOverride::DisplayName");

// /Script/EngineSettings.ConsoleSettings
// Kind: Class; super: Object
class UConsoleSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaxScrollbackSize; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> ManualAutoCompleteList; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AutoCompleteMapPaths; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    float BackgroundOpacityPercentage; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOrderTopToBottom; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayHelpInAutoComplete; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0056
    std::uint8_t InputColor[0x4]; // 0x0058 (Size: 0x4, Type: StructProperty)
    std::uint8_t HistoryColor[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    std::uint8_t AutoCompleteCommandColor[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t AutoCompleteCVarColor[0x4]; // 0x0064 (Size: 0x4, Type: StructProperty)
    std::uint8_t AutoCompleteFadedColor[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConsoleSettings, MaxScrollbackSize) == 40, "Offset mismatch for UConsoleSettings::MaxScrollbackSize");
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 48, "Offset mismatch for UConsoleSettings::ManualAutoCompleteList");
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 64, "Offset mismatch for UConsoleSettings::AutoCompleteMapPaths");
static_assert(offsetof(UConsoleSettings, BackgroundOpacityPercentage) == 80, "Offset mismatch for UConsoleSettings::BackgroundOpacityPercentage");
static_assert(offsetof(UConsoleSettings, bOrderTopToBottom) == 84, "Offset mismatch for UConsoleSettings::bOrderTopToBottom");
static_assert(offsetof(UConsoleSettings, bDisplayHelpInAutoComplete) == 85, "Offset mismatch for UConsoleSettings::bDisplayHelpInAutoComplete");
static_assert(offsetof(UConsoleSettings, InputColor) == 88, "Offset mismatch for UConsoleSettings::InputColor");
static_assert(offsetof(UConsoleSettings, HistoryColor) == 92, "Offset mismatch for UConsoleSettings::HistoryColor");
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 96, "Offset mismatch for UConsoleSettings::AutoCompleteCommandColor");
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 100, "Offset mismatch for UConsoleSettings::AutoCompleteCVarColor");
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 104, "Offset mismatch for UConsoleSettings::AutoCompleteFadedColor");

// /Script/EngineSettings.GameMapsSettings
// Kind: Class; super: Object
class UGameMapsSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString LocalMapOptions; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t TransitionMap[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseSplitscreen; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TwoPlayerSplitscreenLayout; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ThreePlayerSplitscreenLayout; // 0x0052 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FourPlayerSplitscreenLayout; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowAllPlayerWidgetsWhenSplitscreenDisabled; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOffsetPlayerGamepadIds; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0056
    std::uint8_t GameInstanceClass[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameDefaultMap[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ServerDefaultMap[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalDefaultGameMode[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalDefaultServerGameMode[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    TArray<void*> GameModeMapPrefixes; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameModeClassAliases; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 40, "Offset mismatch for UGameMapsSettings::LocalMapOptions");
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 56, "Offset mismatch for UGameMapsSettings::TransitionMap");
static_assert(offsetof(UGameMapsSettings, bUseSplitscreen) == 80, "Offset mismatch for UGameMapsSettings::bUseSplitscreen");
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 81, "Offset mismatch for UGameMapsSettings::TwoPlayerSplitscreenLayout");
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 82, "Offset mismatch for UGameMapsSettings::ThreePlayerSplitscreenLayout");
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 83, "Offset mismatch for UGameMapsSettings::FourPlayerSplitscreenLayout");
static_assert(offsetof(UGameMapsSettings, bShowAllPlayerWidgetsWhenSplitscreenDisabled) == 84, "Offset mismatch for UGameMapsSettings::bShowAllPlayerWidgetsWhenSplitscreenDisabled");
static_assert(offsetof(UGameMapsSettings, bOffsetPlayerGamepadIds) == 85, "Offset mismatch for UGameMapsSettings::bOffsetPlayerGamepadIds");
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 88, "Offset mismatch for UGameMapsSettings::GameInstanceClass");
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 112, "Offset mismatch for UGameMapsSettings::GameDefaultMap");
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 136, "Offset mismatch for UGameMapsSettings::ServerDefaultMap");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 160, "Offset mismatch for UGameMapsSettings::GlobalDefaultGameMode");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 184, "Offset mismatch for UGameMapsSettings::GlobalDefaultServerGameMode");
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 208, "Offset mismatch for UGameMapsSettings::GameModeMapPrefixes");
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 224, "Offset mismatch for UGameMapsSettings::GameModeClassAliases");

// /Script/EngineSettings.GameNetworkManagerSettings
// Kind: Class; super: Object
class UGameNetworkManagerSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MinDynamicBandwidth; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxDynamicBandwidth; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNetBandwidth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t BadPingThreshold; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsStandbyCheckingEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float StandbyRxCheatTime; // 0x003C (Size: 0x4, Type: FloatProperty)
    float StandbyTxCheatTime; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PercentMissingForRxStandby; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float PercentMissingForTxStandby; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float PercentForBadPing; // 0x004C (Size: 0x4, Type: FloatProperty)
    float JoinInProgressStandbyWaitTime; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGameNetworkManagerSettings, MinDynamicBandwidth) == 40, "Offset mismatch for UGameNetworkManagerSettings::MinDynamicBandwidth");
static_assert(offsetof(UGameNetworkManagerSettings, MaxDynamicBandwidth) == 44, "Offset mismatch for UGameNetworkManagerSettings::MaxDynamicBandwidth");
static_assert(offsetof(UGameNetworkManagerSettings, TotalNetBandwidth) == 48, "Offset mismatch for UGameNetworkManagerSettings::TotalNetBandwidth");
static_assert(offsetof(UGameNetworkManagerSettings, BadPingThreshold) == 52, "Offset mismatch for UGameNetworkManagerSettings::BadPingThreshold");
static_assert(offsetof(UGameNetworkManagerSettings, bIsStandbyCheckingEnabled) == 56, "Offset mismatch for UGameNetworkManagerSettings::bIsStandbyCheckingEnabled");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyRxCheatTime) == 60, "Offset mismatch for UGameNetworkManagerSettings::StandbyRxCheatTime");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyTxCheatTime) == 64, "Offset mismatch for UGameNetworkManagerSettings::StandbyTxCheatTime");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForRxStandby) == 68, "Offset mismatch for UGameNetworkManagerSettings::PercentMissingForRxStandby");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForTxStandby) == 72, "Offset mismatch for UGameNetworkManagerSettings::PercentMissingForTxStandby");
static_assert(offsetof(UGameNetworkManagerSettings, PercentForBadPing) == 76, "Offset mismatch for UGameNetworkManagerSettings::PercentForBadPing");
static_assert(offsetof(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime) == 80, "Offset mismatch for UGameNetworkManagerSettings::JoinInProgressStandbyWaitTime");

// /Script/EngineSettings.GameSessionSettings
// Kind: Class; super: Object
class UGameSessionSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaxSpectators; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPlayers; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t bRequiresPushToTalk; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameSessionSettings, MaxSpectators) == 40, "Offset mismatch for UGameSessionSettings::MaxSpectators");
static_assert(offsetof(UGameSessionSettings, MaxPlayers) == 44, "Offset mismatch for UGameSessionSettings::MaxPlayers");
static_assert(offsetof(UGameSessionSettings, bRequiresPushToTalk) == 48, "Offset mismatch for UGameSessionSettings::bRequiresPushToTalk");

// /Script/EngineSettings.GeneralEngineSettings
// Kind: Class; super: Object
class UGeneralEngineSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineSettings.GeneralProjectSettings
// Kind: Class; super: Object
class UGeneralProjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CompanyName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString CompanyDistinguishedName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString CopyrightNotice; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString Homepage; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString LicensingTerms; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString PrivacyPolicy; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProjectID[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    FString ProjectName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString ProjectVersion; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString SupportContact; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProjectDisplayedTitle[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ProjectDebugTitleInfo[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bShouldWindowPreserveAspectRatio; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBorderlessWindow; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartInVR; // 0x00FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowWindowResize; // 0x00FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowClose; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMaximize; // 0x00FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMinimize; // 0x00FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00FF
    float EyeOffsetForFakeStereoRenderingDevice; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float FOVForFakeStereoRenderingDevice; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float TopFOVRatioForFakeStereoRenderingDevice; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float DifferenceBetweenEyesForFakeStereoRenderingDevice; // 0x010C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 40, "Offset mismatch for UGeneralProjectSettings::CompanyName");
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 56, "Offset mismatch for UGeneralProjectSettings::CompanyDistinguishedName");
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 72, "Offset mismatch for UGeneralProjectSettings::CopyrightNotice");
static_assert(offsetof(UGeneralProjectSettings, Description) == 88, "Offset mismatch for UGeneralProjectSettings::Description");
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 104, "Offset mismatch for UGeneralProjectSettings::Homepage");
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 120, "Offset mismatch for UGeneralProjectSettings::LicensingTerms");
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 136, "Offset mismatch for UGeneralProjectSettings::PrivacyPolicy");
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 152, "Offset mismatch for UGeneralProjectSettings::ProjectID");
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 168, "Offset mismatch for UGeneralProjectSettings::ProjectName");
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 184, "Offset mismatch for UGeneralProjectSettings::ProjectVersion");
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 200, "Offset mismatch for UGeneralProjectSettings::SupportContact");
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 216, "Offset mismatch for UGeneralProjectSettings::ProjectDisplayedTitle");
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 232, "Offset mismatch for UGeneralProjectSettings::ProjectDebugTitleInfo");
static_assert(offsetof(UGeneralProjectSettings, bShouldWindowPreserveAspectRatio) == 248, "Offset mismatch for UGeneralProjectSettings::bShouldWindowPreserveAspectRatio");
static_assert(offsetof(UGeneralProjectSettings, bUseBorderlessWindow) == 249, "Offset mismatch for UGeneralProjectSettings::bUseBorderlessWindow");
static_assert(offsetof(UGeneralProjectSettings, bStartInVR) == 250, "Offset mismatch for UGeneralProjectSettings::bStartInVR");
static_assert(offsetof(UGeneralProjectSettings, bAllowWindowResize) == 251, "Offset mismatch for UGeneralProjectSettings::bAllowWindowResize");
static_assert(offsetof(UGeneralProjectSettings, bAllowClose) == 252, "Offset mismatch for UGeneralProjectSettings::bAllowClose");
static_assert(offsetof(UGeneralProjectSettings, bAllowMaximize) == 253, "Offset mismatch for UGeneralProjectSettings::bAllowMaximize");
static_assert(offsetof(UGeneralProjectSettings, bAllowMinimize) == 254, "Offset mismatch for UGeneralProjectSettings::bAllowMinimize");
static_assert(offsetof(UGeneralProjectSettings, EyeOffsetForFakeStereoRenderingDevice) == 256, "Offset mismatch for UGeneralProjectSettings::EyeOffsetForFakeStereoRenderingDevice");
static_assert(offsetof(UGeneralProjectSettings, FOVForFakeStereoRenderingDevice) == 260, "Offset mismatch for UGeneralProjectSettings::FOVForFakeStereoRenderingDevice");
static_assert(offsetof(UGeneralProjectSettings, TopFOVRatioForFakeStereoRenderingDevice) == 264, "Offset mismatch for UGeneralProjectSettings::TopFOVRatioForFakeStereoRenderingDevice");
static_assert(offsetof(UGeneralProjectSettings, DifferenceBetweenEyesForFakeStereoRenderingDevice) == 268, "Offset mismatch for UGeneralProjectSettings::DifferenceBetweenEyesForFakeStereoRenderingDevice");

// /Script/EngineSettings.HUDSettings
// Kind: Class; super: Object
class UHUDSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bShowHUD; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> DebugDisplay; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHUDSettings, bShowHUD) == 40, "Offset mismatch for UHUDSettings::bShowHUD");
static_assert(offsetof(UHUDSettings, DebugDisplay) == 48, "Offset mismatch for UHUDSettings::DebugDisplay");

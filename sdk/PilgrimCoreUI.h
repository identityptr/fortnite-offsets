/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimCoreUI.PilgrimEvent_FTUE_Advance
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_FTUE_Advance
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreUI.PilgrimEvent_FTUE_Complete
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_FTUE_Complete
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreUI.PilgrimTrackCurveFloatOverrides
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCurveFloatOverrides
{
public:
    std::uint8_t Scale[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Translation[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bOverrideCurveFloats; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimTrackCurveFloatOverrides, Scale) == 0, "Offset mismatch for FPilgrimTrackCurveFloatOverrides::Scale");
static_assert(offsetof(FPilgrimTrackCurveFloatOverrides, Translation) == 16, "Offset mismatch for FPilgrimTrackCurveFloatOverrides::Translation");
static_assert(offsetof(FPilgrimTrackCurveFloatOverrides, bOverrideCurveFloats) == 32, "Offset mismatch for FPilgrimTrackCurveFloatOverrides::bOverrideCurveFloats");

// /Script/PilgrimCoreUI.PilgrimTrackSizeAndScale
// Kind: ScriptStruct; super: none
struct FPilgrimTrackSizeAndScale
{
public:
    std::uint8_t Size[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Scale; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimTrackSizeAndScale, Size) == 0, "Offset mismatch for FPilgrimTrackSizeAndScale::Size");
static_assert(offsetof(FPilgrimTrackSizeAndScale, Scale) == 8, "Offset mismatch for FPilgrimTrackSizeAndScale::Scale");

// /Script/PilgrimCoreUI.PilgrimBandScoreVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimBandScoreVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float BandScore; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimBandScoreVM, BandScore) == 120, "Offset mismatch for UPilgrimBandScoreVM::BandScore");

// /Script/PilgrimCoreUI.PilgrimCoreCVarsVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimCoreCVarsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHideHUDForScreenCapture; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAreSongChallengesEnabled; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimCoreCVarsVM, bHideHUDForScreenCapture) == 120, "Offset mismatch for UPilgrimCoreCVarsVM::bHideHUDForScreenCapture");
static_assert(offsetof(UPilgrimCoreCVarsVM, bAreSongChallengesEnabled) == 121, "Offset mismatch for UPilgrimCoreCVarsVM::bAreSongChallengesEnabled");

// /Script/PilgrimCoreUI.PilgrimCoreUIGlobals
// Kind: Class; super: Object
class UPilgrimCoreUIGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreUI.PilgrimCurrentlyPlayingSongVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimCurrentlyPlayingSongVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* SongMetadata; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SongTimeSeconds; // 0x0098 (Size: 0x4, Type: IntProperty)
    float SongTimeMs; // 0x009C (Size: 0x4, Type: FloatProperty)
    float SongUnitProgress; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float SectionStartMs; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float SectionLengthMs; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentBeatNumber; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentBeatInBar; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t SongPlaying; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B5
    void* MusicBattleInstance; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* MusicClockComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SongMetadata) == 144, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SongMetadata");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SongTimeSeconds) == 152, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SongTimeSeconds");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SongTimeMs) == 156, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SongTimeMs");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SongUnitProgress) == 160, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SongUnitProgress");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SectionStartMs) == 164, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SectionStartMs");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SectionLengthMs) == 168, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SectionLengthMs");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, CurrentBeatNumber) == 172, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::CurrentBeatNumber");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, CurrentBeatInBar) == 176, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::CurrentBeatInBar");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, SongPlaying) == 180, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::SongPlaying");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, MusicBattleInstance) == 184, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::MusicBattleInstance");
static_assert(offsetof(UPilgrimCurrentlyPlayingSongVM, MusicClockComponent) == 192, "Offset mismatch for UPilgrimCurrentlyPlayingSongVM::MusicClockComponent");

// /Script/PilgrimCoreUI.PilgrimDifficultyVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimDifficultyVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t NewSongDifficulty; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimDifficultyVM, NewSongDifficulty) == 144, "Offset mismatch for UPilgrimDifficultyVM::NewSongDifficulty");

// /Script/PilgrimCoreUI.PilgrimEventDrivenVM
// Kind: Class; super: SparksEventDrivenVM
class UPilgrimEventDrivenVM
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* WaitForEventRouterAction; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimEventDrivenVM, WaitForEventRouterAction) == 136, "Offset mismatch for UPilgrimEventDrivenVM::WaitForEventRouterAction");

// /Script/PilgrimCoreUI.PilgrimFTUEControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimFTUEControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* PilgrimUserSettings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimFTUEControllerComponent, PilgrimUserSettings) == 192, "Offset mismatch for UPilgrimFTUEControllerComponent::PilgrimUserSettings");

// /Script/PilgrimCoreUI.PilgrimFTUEWidgetBase
// Kind: Class; super: CommonActivatableWidget
class UPilgrimFTUEWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t ApprovedPlaylistTags[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimFTUEWidgetBase, ApprovedPlaylistTags) == 1184, "Offset mismatch for UPilgrimFTUEWidgetBase::ApprovedPlaylistTags");

// /Script/PilgrimCoreUI.PilgrimFixedOwnerWidget
// Kind: Class; super: UserWidget
class UPilgrimFixedOwnerWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* FixedOwner; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimFixedOwnerWidget, FixedOwner) == 776, "Offset mismatch for UPilgrimFixedOwnerWidget::FixedOwner");

// /Script/PilgrimCoreUI.PilgrimGameFeatureAction_SplitscreenConfig
// Kind: Class; super: GameFeatureAction
class UPilgrimGameFeatureAction_SplitscreenConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PreferredLetoDisplayMode[0x1]; // 0x0028 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UPilgrimGameFeatureAction_SplitscreenConfig, PreferredLetoDisplayMode) == 40, "Offset mismatch for UPilgrimGameFeatureAction_SplitscreenConfig::PreferredLetoDisplayMode");

// /Script/PilgrimCoreUI.PilgrimGameWidgetBase
// Kind: Class; super: UserWidget
class UPilgrimGameWidgetBase
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bReceiveScoreEventsWhenHidden; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    TArray<void*> GameplayEventHandles; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    void* MusicBattleInstance; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGameWidgetBase, bReceiveScoreEventsWhenHidden) == 776, "Offset mismatch for UPilgrimGameWidgetBase::bReceiveScoreEventsWhenHidden");
static_assert(offsetof(UPilgrimGameWidgetBase, GameplayEventHandles) == 784, "Offset mismatch for UPilgrimGameWidgetBase::GameplayEventHandles");
static_assert(offsetof(UPilgrimGameWidgetBase, MusicBattleInstance) == 800, "Offset mismatch for UPilgrimGameWidgetBase::MusicBattleInstance");

// /Script/PilgrimCoreUI.PilgrimGemBreakVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimGemBreakVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsInGemBreak; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInStartingGemBreak; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInEndingGemBreak; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGemBreakPending; // 0x0093 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGemBreakEndPending; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCountingDown; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0096
    std::int32_t BarsRemaining; // 0x0098 (Size: 0x4, Type: IntProperty)
    float Tempo; // 0x009C (Size: 0x4, Type: FloatProperty)
    float FadeOutSpeed; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentBreakEndingBar; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t BarsToEndEarly; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00AC
    TWeakObjectPtr<void> MusicClock; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicBattleInstance; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimGemBreakVM, bIsInGemBreak) == 144, "Offset mismatch for UPilgrimGemBreakVM::bIsInGemBreak");
static_assert(offsetof(UPilgrimGemBreakVM, bIsInStartingGemBreak) == 145, "Offset mismatch for UPilgrimGemBreakVM::bIsInStartingGemBreak");
static_assert(offsetof(UPilgrimGemBreakVM, bIsInEndingGemBreak) == 146, "Offset mismatch for UPilgrimGemBreakVM::bIsInEndingGemBreak");
static_assert(offsetof(UPilgrimGemBreakVM, bIsGemBreakPending) == 147, "Offset mismatch for UPilgrimGemBreakVM::bIsGemBreakPending");
static_assert(offsetof(UPilgrimGemBreakVM, bIsGemBreakEndPending) == 148, "Offset mismatch for UPilgrimGemBreakVM::bIsGemBreakEndPending");
static_assert(offsetof(UPilgrimGemBreakVM, bIsCountingDown) == 149, "Offset mismatch for UPilgrimGemBreakVM::bIsCountingDown");
static_assert(offsetof(UPilgrimGemBreakVM, BarsRemaining) == 152, "Offset mismatch for UPilgrimGemBreakVM::BarsRemaining");
static_assert(offsetof(UPilgrimGemBreakVM, Tempo) == 156, "Offset mismatch for UPilgrimGemBreakVM::Tempo");
static_assert(offsetof(UPilgrimGemBreakVM, FadeOutSpeed) == 160, "Offset mismatch for UPilgrimGemBreakVM::FadeOutSpeed");
static_assert(offsetof(UPilgrimGemBreakVM, CurrentBreakEndingBar) == 164, "Offset mismatch for UPilgrimGemBreakVM::CurrentBreakEndingBar");
static_assert(offsetof(UPilgrimGemBreakVM, BarsToEndEarly) == 168, "Offset mismatch for UPilgrimGemBreakVM::BarsToEndEarly");
static_assert(offsetof(UPilgrimGemBreakVM, MusicClock) == 176, "Offset mismatch for UPilgrimGemBreakVM::MusicClock");
static_assert(offsetof(UPilgrimGemBreakVM, MusicBattleInstance) == 184, "Offset mismatch for UPilgrimGemBreakVM::MusicBattleInstance");

// /Script/PilgrimCoreUI.PilgrimHamSandwichVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimHamSandwichVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t IsHamSandwichView; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> LocalPlayers; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemotePlayers; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllPlayers; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MultiplayerState; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    void* RootPilgrimPlayerManager; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimHamSandwichVM, IsHamSandwichView) == 144, "Offset mismatch for UPilgrimHamSandwichVM::IsHamSandwichView");
static_assert(offsetof(UPilgrimHamSandwichVM, LocalPlayers) == 152, "Offset mismatch for UPilgrimHamSandwichVM::LocalPlayers");
static_assert(offsetof(UPilgrimHamSandwichVM, RemotePlayers) == 168, "Offset mismatch for UPilgrimHamSandwichVM::RemotePlayers");
static_assert(offsetof(UPilgrimHamSandwichVM, AllPlayers) == 184, "Offset mismatch for UPilgrimHamSandwichVM::AllPlayers");
static_assert(offsetof(UPilgrimHamSandwichVM, MultiplayerState) == 200, "Offset mismatch for UPilgrimHamSandwichVM::MultiplayerState");
static_assert(offsetof(UPilgrimHamSandwichVM, RootPilgrimPlayerManager) == 208, "Offset mismatch for UPilgrimHamSandwichVM::RootPilgrimPlayerManager");

// /Script/PilgrimCoreUI.PilgrimInstrumentVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimInstrumentVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t InstrumentForNextSong; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimInstrumentVM, InstrumentForNextSong) == 144, "Offset mismatch for UPilgrimInstrumentVM::InstrumentForNextSong");

// /Script/PilgrimCoreUI.PilgrimLocalSocialUserVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimLocalSocialUserVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsBandLeader; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* AvatarInfo; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* BannerInfo; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* NameInfo; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimLocalSocialUserVM, bIsBandLeader) == 120, "Offset mismatch for UPilgrimLocalSocialUserVM::bIsBandLeader");
static_assert(offsetof(UPilgrimLocalSocialUserVM, AvatarInfo) == 128, "Offset mismatch for UPilgrimLocalSocialUserVM::AvatarInfo");
static_assert(offsetof(UPilgrimLocalSocialUserVM, BannerInfo) == 136, "Offset mismatch for UPilgrimLocalSocialUserVM::BannerInfo");
static_assert(offsetof(UPilgrimLocalSocialUserVM, NameInfo) == 144, "Offset mismatch for UPilgrimLocalSocialUserVM::NameInfo");

// /Script/PilgrimCoreUI.PilgrimPerUserForBlueprintVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimPerUserForBlueprintVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreUI.PilgrimPlayerInfoVM
// Kind: Class; super: MVVMViewModelBase
class UPilgrimPlayerInfoVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PlayerInfo[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimPlayerInfoVM, PlayerInfo) == 104, "Offset mismatch for UPilgrimPlayerInfoVM::PlayerInfo");

// /Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase
// Kind: Class; super: PilgrimFixedOwnerWidget
class UPilgrimPlayerInfoWidgetBase
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* FixedOwner; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPlayerInfoWidgetBase, FixedOwner) == 776, "Offset mismatch for UPilgrimPlayerInfoWidgetBase::FixedOwner");

// /Script/PilgrimCoreUI.PilgrimPlayerInputDeviceVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimPlayerInputDeviceVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHasConnectedInputDevice; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPeripheralDeviceConnected_AnyUser; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPeripheralDeviceConnected_OwningUser; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimPlayerInputDeviceVM, bHasConnectedInputDevice) == 120, "Offset mismatch for UPilgrimPlayerInputDeviceVM::bHasConnectedInputDevice");
static_assert(offsetof(UPilgrimPlayerInputDeviceVM, bIsPeripheralDeviceConnected_AnyUser) == 121, "Offset mismatch for UPilgrimPlayerInputDeviceVM::bIsPeripheralDeviceConnected_AnyUser");
static_assert(offsetof(UPilgrimPlayerInputDeviceVM, bIsPeripheralDeviceConnected_OwningUser) == 122, "Offset mismatch for UPilgrimPlayerInputDeviceVM::bIsPeripheralDeviceConnected_OwningUser");

// /Script/PilgrimCoreUI.PilgrimPlayerScoreVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimPlayerScoreVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float PlayerScore; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::int32_t StreakScoreMultiplier; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t StreakScoreMaxMultiplier; // 0x0080 (Size: 0x4, Type: IntProperty)
    float StreakMeterFillProgress; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float CurrentOverdrive; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverdriveActive; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t TrackType; // 0x008D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasFullCombo; // 0x008E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPerfectCombo; // 0x008F (Size: 0x1, Type: BoolProperty)
    std::int32_t NotesPastLastMultiplier; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t NotesToNextMultiplier; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAtMaxStreak; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    std::int32_t CurrentStar; // 0x009C (Size: 0x4, Type: IntProperty)
    std::int32_t NoteStreak; // 0x00A0 (Size: 0x4, Type: IntProperty)
    float CurrentSectionCompletionPercentage; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00A8
    void* MusicBattleInstance; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x58]; // 0x00C0
    void* OwningPlayerState; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimPlayerScoreVM, PlayerScore) == 120, "Offset mismatch for UPilgrimPlayerScoreVM::PlayerScore");
static_assert(offsetof(UPilgrimPlayerScoreVM, StreakScoreMultiplier) == 124, "Offset mismatch for UPilgrimPlayerScoreVM::StreakScoreMultiplier");
static_assert(offsetof(UPilgrimPlayerScoreVM, StreakScoreMaxMultiplier) == 128, "Offset mismatch for UPilgrimPlayerScoreVM::StreakScoreMaxMultiplier");
static_assert(offsetof(UPilgrimPlayerScoreVM, StreakMeterFillProgress) == 132, "Offset mismatch for UPilgrimPlayerScoreVM::StreakMeterFillProgress");
static_assert(offsetof(UPilgrimPlayerScoreVM, CurrentOverdrive) == 136, "Offset mismatch for UPilgrimPlayerScoreVM::CurrentOverdrive");
static_assert(offsetof(UPilgrimPlayerScoreVM, bOverdriveActive) == 140, "Offset mismatch for UPilgrimPlayerScoreVM::bOverdriveActive");
static_assert(offsetof(UPilgrimPlayerScoreVM, TrackType) == 141, "Offset mismatch for UPilgrimPlayerScoreVM::TrackType");
static_assert(offsetof(UPilgrimPlayerScoreVM, bHasFullCombo) == 142, "Offset mismatch for UPilgrimPlayerScoreVM::bHasFullCombo");
static_assert(offsetof(UPilgrimPlayerScoreVM, bHasPerfectCombo) == 143, "Offset mismatch for UPilgrimPlayerScoreVM::bHasPerfectCombo");
static_assert(offsetof(UPilgrimPlayerScoreVM, NotesPastLastMultiplier) == 144, "Offset mismatch for UPilgrimPlayerScoreVM::NotesPastLastMultiplier");
static_assert(offsetof(UPilgrimPlayerScoreVM, NotesToNextMultiplier) == 148, "Offset mismatch for UPilgrimPlayerScoreVM::NotesToNextMultiplier");
static_assert(offsetof(UPilgrimPlayerScoreVM, bIsAtMaxStreak) == 152, "Offset mismatch for UPilgrimPlayerScoreVM::bIsAtMaxStreak");
static_assert(offsetof(UPilgrimPlayerScoreVM, CurrentStar) == 156, "Offset mismatch for UPilgrimPlayerScoreVM::CurrentStar");
static_assert(offsetof(UPilgrimPlayerScoreVM, NoteStreak) == 160, "Offset mismatch for UPilgrimPlayerScoreVM::NoteStreak");
static_assert(offsetof(UPilgrimPlayerScoreVM, CurrentSectionCompletionPercentage) == 164, "Offset mismatch for UPilgrimPlayerScoreVM::CurrentSectionCompletionPercentage");
static_assert(offsetof(UPilgrimPlayerScoreVM, MusicBattleInstance) == 184, "Offset mismatch for UPilgrimPlayerScoreVM::MusicBattleInstance");
static_assert(offsetof(UPilgrimPlayerScoreVM, OwningPlayerState) == 280, "Offset mismatch for UPilgrimPlayerScoreVM::OwningPlayerState");
static_assert(offsetof(UPilgrimPlayerScoreVM, PilgrimGame) == 288, "Offset mismatch for UPilgrimPlayerScoreVM::PilgrimGame");

// /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget
// Kind: Class; super: FortSeasonDataWidget
class UPilgrimPostGameProgressWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    float CurrentProgress; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentXP; // 0x04A4 (Size: 0x4, Type: IntProperty)
    std::int32_t XpToNextLevel; // 0x04A8 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentLevel; // 0x04AC (Size: 0x4, Type: IntProperty)
    void* LevelRewards; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* SocialAvatarIcon; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPostGameProgressWidget, CurrentProgress) == 1184, "Offset mismatch for UPilgrimPostGameProgressWidget::CurrentProgress");
static_assert(offsetof(UPilgrimPostGameProgressWidget, CurrentXP) == 1188, "Offset mismatch for UPilgrimPostGameProgressWidget::CurrentXP");
static_assert(offsetof(UPilgrimPostGameProgressWidget, XpToNextLevel) == 1192, "Offset mismatch for UPilgrimPostGameProgressWidget::XpToNextLevel");
static_assert(offsetof(UPilgrimPostGameProgressWidget, CurrentLevel) == 1196, "Offset mismatch for UPilgrimPostGameProgressWidget::CurrentLevel");
static_assert(offsetof(UPilgrimPostGameProgressWidget, LevelRewards) == 1200, "Offset mismatch for UPilgrimPostGameProgressWidget::LevelRewards");
static_assert(offsetof(UPilgrimPostGameProgressWidget, SocialAvatarIcon) == 1208, "Offset mismatch for UPilgrimPostGameProgressWidget::SocialAvatarIcon");

// /Script/PilgrimCoreUI.PilgrimRankedVM
// Kind: Class; super: MVVMViewModelBase
class UPilgrimRankedVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsPlayerRanked; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t CurrentRank; // 0x006C (Size: 0x4, Type: IntProperty)
    float CurrentProgress; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimRankedVM, bIsPlayerRanked) == 104, "Offset mismatch for UPilgrimRankedVM::bIsPlayerRanked");
static_assert(offsetof(UPilgrimRankedVM, CurrentRank) == 108, "Offset mismatch for UPilgrimRankedVM::CurrentRank");
static_assert(offsetof(UPilgrimRankedVM, CurrentProgress) == 112, "Offset mismatch for UPilgrimRankedVM::CurrentProgress");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemArtistSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemArtistSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemArtistSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemArtistSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemArtistSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemArtistSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemArtistSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemArtistSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemChainedSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemChainedSortVM
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t bSetChainedCalled; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* FirstSort; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* SecondSort; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemChainedSortVM, bSetChainedCalled) == 272, "Offset mismatch for UPilgrimSongCatalogItemChainedSortVM::bSetChainedCalled");
static_assert(offsetof(UPilgrimSongCatalogItemChainedSortVM, FirstSort) == 280, "Offset mismatch for UPilgrimSongCatalogItemChainedSortVM::FirstSort");
static_assert(offsetof(UPilgrimSongCatalogItemChainedSortVM, SecondSort) == 288, "Offset mismatch for UPilgrimSongCatalogItemChainedSortVM::SecondSort");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemDetailsVM
// Kind: Class; super: SparksSongItemDetailsVM
class UPilgrimSongCatalogItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    std::uint8_t bIsAddedToSetlist; // 0x0250 (Size: 0x1, Type: BoolProperty)
    // 0x0250 BoolProperty bIsSongAvailable (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0251
    FString SanitizedTitle; // 0x0258 (Size: 0x10, Type: StrProperty)
    FString SanitizedArtist; // 0x0268 (Size: 0x10, Type: StrProperty)
    std::int32_t SongLengthInSec; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::int32_t SongIntensity; // 0x027C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemDetailsVM, bIsAddedToSetlist) == 592, "Offset mismatch for UPilgrimSongCatalogItemDetailsVM::bIsAddedToSetlist");
static_assert(offsetof(UPilgrimSongCatalogItemDetailsVM, SanitizedTitle) == 600, "Offset mismatch for UPilgrimSongCatalogItemDetailsVM::SanitizedTitle");
static_assert(offsetof(UPilgrimSongCatalogItemDetailsVM, SanitizedArtist) == 616, "Offset mismatch for UPilgrimSongCatalogItemDetailsVM::SanitizedArtist");
static_assert(offsetof(UPilgrimSongCatalogItemDetailsVM, SongLengthInSec) == 632, "Offset mismatch for UPilgrimSongCatalogItemDetailsVM::SongLengthInSec");
static_assert(offsetof(UPilgrimSongCatalogItemDetailsVM, SongIntensity) == 636, "Offset mismatch for UPilgrimSongCatalogItemDetailsVM::SongIntensity");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemFeaturedSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemFeaturedSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemFeaturedSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemFeaturedSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemFeaturedSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemFeaturedSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemFeaturedSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemFeaturedSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemFilterAvailableOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemFilterVM
class UPilgrimSongCatalogItemFilterAvailableOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemFilterAvailableOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemFilterAvailableOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemFilterVM
// Kind: Class; super: FortFilterItemVM
class UPilgrimSongCatalogItemFilterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemFilterVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemFilterVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemNewSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemNewSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemNewSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemNewSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemNewSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemNewSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemNewSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemNewSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemOwnedSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemOwnedSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemOwnedSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemOwnedSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemOwnedSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemOwnedSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemOwnedSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemOwnedSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemReverseAlternateSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemReverseAlternateSortVM
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t bSetReverseAlternateCalled; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* FirstSort; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* SecondSort; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemReverseAlternateSortVM, bSetReverseAlternateCalled) == 272, "Offset mismatch for UPilgrimSongCatalogItemReverseAlternateSortVM::bSetReverseAlternateCalled");
static_assert(offsetof(UPilgrimSongCatalogItemReverseAlternateSortVM, FirstSort) == 280, "Offset mismatch for UPilgrimSongCatalogItemReverseAlternateSortVM::FirstSort");
static_assert(offsetof(UPilgrimSongCatalogItemReverseAlternateSortVM, SecondSort) == 288, "Offset mismatch for UPilgrimSongCatalogItemReverseAlternateSortVM::SecondSort");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemRotationSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemRotationSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemRotationSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemRotationSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemRotationSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemRotationSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemRotationSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemRotationSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSearchTextVM
// Kind: Class; super: FortSortFilterSearchTextVM
class UPilgrimSongCatalogItemSearchTextVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SearchText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    TArray<void*> StringSuggestions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSearchTextVM, SearchText) == 104, "Offset mismatch for UPilgrimSongCatalogItemSearchTextVM::SearchText");
static_assert(offsetof(UPilgrimSongCatalogItemSearchTextVM, StringSuggestions) == 120, "Offset mismatch for UPilgrimSongCatalogItemSearchTextVM::StringSuggestions");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterNewOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterNewOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterSharedOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSharedOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t IsAllTimeHighscore; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM, IsAllTimeHighscore) == 192, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM::IsAllTimeHighscore");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterSortOrderItemVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterSortOrderItemVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t IsDefaultSortOrder; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TMap<void*, void*> SortOrderTextByFilterMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSortOrderItemVM, IsDefaultSortOrder) == 192, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSortOrderItemVM::IsDefaultSortOrder");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSortOrderItemVM, SortOrderTextByFilterMap) == 200, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSortOrderItemVM::SortOrderTextByFilterMap");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM
// Kind: Class; super: PilgrimSongCatalogItemSecondaryFilterVM
class UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSecondaryFilterVM
// Kind: Class; super: SparksSongFilterOptionVM
class UPilgrimSongCatalogItemSecondaryFilterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, Label) == 104, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::Label");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, Count) == 120, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::Count");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, bIsSeparator) == 124, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::bIsSeparator");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, bAutoHide) == 125, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::bAutoHide");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, bIsActive) == 126, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::bIsActive");
static_assert(offsetof(UPilgrimSongCatalogItemSecondaryFilterVM, bIsVisible) == 127, "Offset mismatch for UPilgrimSongCatalogItemSecondaryFilterVM::bIsVisible");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSongIntensitySortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemSongIntensitySortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSongIntensitySortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemSongIntensitySortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemSongIntensitySortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemSongIntensitySortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemSongIntensitySortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemSongIntensitySortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSongLengthSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemSongLengthSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSongLengthSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemSongLengthSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemSongLengthSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemSongLengthSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemSongLengthSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemSongLengthSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSortVM
// Kind: Class; super: FortSortItemVM
class UPilgrimSongCatalogItemSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemSpotlightSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemSpotlightSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemSpotlightSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemSpotlightSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemSpotlightSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemSpotlightSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemSpotlightSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemSpotlightSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemTitleSortVM
// Kind: Class; super: PilgrimSongCatalogItemSortVM
class UPilgrimSongCatalogItemTitleSortVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString DEBUG_ItemSortName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSortForwards; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> CategoryGroupCollections; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemTitleSortVM, DEBUG_ItemSortName) == 128, "Offset mismatch for UPilgrimSongCatalogItemTitleSortVM::DEBUG_ItemSortName");
static_assert(offsetof(UPilgrimSongCatalogItemTitleSortVM, bSortForwards) == 144, "Offset mismatch for UPilgrimSongCatalogItemTitleSortVM::bSortForwards");
static_assert(offsetof(UPilgrimSongCatalogItemTitleSortVM, CategoryGroupCollections) == 152, "Offset mismatch for UPilgrimSongCatalogItemTitleSortVM::CategoryGroupCollections");

// /Script/PilgrimCoreUI.PilgrimSongCatalogItemVM
// Kind: Class; super: SparksSongItemVM
class UPilgrimSongCatalogItemVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* ItemDetailsAsPilgrimSongCatalogItemDetailsVM; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* CategoryGroupVM; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongCatalogItemVM, ItemDetailsAsPilgrimSongCatalogItemDetailsVM) == 232, "Offset mismatch for UPilgrimSongCatalogItemVM::ItemDetailsAsPilgrimSongCatalogItemDetailsVM");
static_assert(offsetof(UPilgrimSongCatalogItemVM, CategoryGroupVM) == 240, "Offset mismatch for UPilgrimSongCatalogItemVM::CategoryGroupVM");

// /Script/PilgrimCoreUI.PilgrimSongCatalogVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimSongCatalogVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SortFilter; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SecondaryFilters; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredItems; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredCategoryItems; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HighlightedItems; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PooledItems; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PooledItemsByShortName; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    TArray<void*> SetupSorts; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SetupCollections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CategoryGroupCollections; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShowScoreByItems; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    void* ActiveShowScoreByItem; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SortOrderItems; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSortOrderItem; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* HighlightedItemSort; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongCatalogVM, SortFilter) == 120, "Offset mismatch for UPilgrimSongCatalogVM::SortFilter");
static_assert(offsetof(UPilgrimSongCatalogVM, SecondaryFilters) == 128, "Offset mismatch for UPilgrimSongCatalogVM::SecondaryFilters");
static_assert(offsetof(UPilgrimSongCatalogVM, FilteredItems) == 144, "Offset mismatch for UPilgrimSongCatalogVM::FilteredItems");
static_assert(offsetof(UPilgrimSongCatalogVM, FilteredCategoryItems) == 160, "Offset mismatch for UPilgrimSongCatalogVM::FilteredCategoryItems");
static_assert(offsetof(UPilgrimSongCatalogVM, HighlightedItems) == 176, "Offset mismatch for UPilgrimSongCatalogVM::HighlightedItems");
static_assert(offsetof(UPilgrimSongCatalogVM, PooledItems) == 192, "Offset mismatch for UPilgrimSongCatalogVM::PooledItems");
static_assert(offsetof(UPilgrimSongCatalogVM, PooledItemsByShortName) == 208, "Offset mismatch for UPilgrimSongCatalogVM::PooledItemsByShortName");
static_assert(offsetof(UPilgrimSongCatalogVM, SetupSorts) == 232, "Offset mismatch for UPilgrimSongCatalogVM::SetupSorts");
static_assert(offsetof(UPilgrimSongCatalogVM, SetupCollections) == 248, "Offset mismatch for UPilgrimSongCatalogVM::SetupCollections");
static_assert(offsetof(UPilgrimSongCatalogVM, CategoryGroupCollections) == 264, "Offset mismatch for UPilgrimSongCatalogVM::CategoryGroupCollections");
static_assert(offsetof(UPilgrimSongCatalogVM, ShowScoreByItems) == 280, "Offset mismatch for UPilgrimSongCatalogVM::ShowScoreByItems");
static_assert(offsetof(UPilgrimSongCatalogVM, ActiveShowScoreByItem) == 296, "Offset mismatch for UPilgrimSongCatalogVM::ActiveShowScoreByItem");
static_assert(offsetof(UPilgrimSongCatalogVM, SortOrderItems) == 304, "Offset mismatch for UPilgrimSongCatalogVM::SortOrderItems");
static_assert(offsetof(UPilgrimSongCatalogVM, ActiveSortOrderItem) == 320, "Offset mismatch for UPilgrimSongCatalogVM::ActiveSortOrderItem");
static_assert(offsetof(UPilgrimSongCatalogVM, HighlightedItemSort) == 328, "Offset mismatch for UPilgrimSongCatalogVM::HighlightedItemSort");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollectionVM
// Kind: Class; super: SparksSongLockerCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollectionVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollectionVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollectionVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollectionVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollectionVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollectionVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollectionVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollectionVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollectionVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_FeaturedVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_FeaturedVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_FeaturedVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_FeaturedVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_FeaturedVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_FeaturedVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_FeaturedVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_FeaturedVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_FeaturedVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_FeaturedVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_HighlightedVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_HighlightedVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_HighlightedVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_HighlightedVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_HighlightedVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_HighlightedVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_HighlightedVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_HighlightedVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_HighlightedVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_HighlightedVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_LettersVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_LettersVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_LettersVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_LettersVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_LettersVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_LettersVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_LettersVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_LettersVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_LettersVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_LettersVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_NewVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_NewVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_NewVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_NewVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_NewVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_NewVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_NewVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_NewVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_NewVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_NewVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_OwnedVM
// Kind: Class; super: PilgrimSongCategoryGroupCollection_LettersVM
class UPilgrimSongCategoryGroupCollection_OwnedVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_OwnedVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_OwnedVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_OwnedVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_OwnedVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_OwnedVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_OwnedVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_OwnedVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_OwnedVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_SongIntensityVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_SongIntensityVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongIntensityVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongIntensityVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongIntensityVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongIntensityVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongIntensityVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongIntensityVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongIntensityVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongIntensityVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_SongLengthVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_SongLengthVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongLengthVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongLengthVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongLengthVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongLengthVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongLengthVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongLengthVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SongLengthVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SongLengthVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupCollection_SpotlightVM
// Kind: Class; super: PilgrimSongCategoryGroupCollectionVM
class UPilgrimSongCategoryGroupCollection_SpotlightVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bIsTitle; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t CollectionText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    // 0x00C8 BoolProperty bIsReverse (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    TArray<void*> ReverseCategoryGroups; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SpotlightVM, bIsTitle) == 176, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SpotlightVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SpotlightVM, CollectionText) == 184, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SpotlightVM::CollectionText");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SpotlightVM, bIsRefreshing) == 200, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SpotlightVM::bIsRefreshing");
static_assert(offsetof(UPilgrimSongCategoryGroupCollection_SpotlightVM, ReverseCategoryGroups) == 208, "Offset mismatch for UPilgrimSongCategoryGroupCollection_SpotlightVM::ReverseCategoryGroups");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroupVM
// Kind: Class; super: FortLockerCategoryGroupVM
class UPilgrimSongCategoryGroupVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bIsTitle; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CategoryText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroupVM, bIsTitle) == 232, "Offset mismatch for UPilgrimSongCategoryGroupVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroupVM, CategoryText) == 240, "Offset mismatch for UPilgrimSongCategoryGroupVM::CategoryText");
static_assert(offsetof(UPilgrimSongCategoryGroupVM, bIsRefreshing) == 256, "Offset mismatch for UPilgrimSongCategoryGroupVM::bIsRefreshing");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_FeaturedVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_FeaturedVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bIsTitle; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CategoryText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_FeaturedVM, bIsTitle) == 232, "Offset mismatch for UPilgrimSongCategoryGroup_FeaturedVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroup_FeaturedVM, CategoryText) == 240, "Offset mismatch for UPilgrimSongCategoryGroup_FeaturedVM::CategoryText");
static_assert(offsetof(UPilgrimSongCategoryGroup_FeaturedVM, bIsRefreshing) == 256, "Offset mismatch for UPilgrimSongCategoryGroup_FeaturedVM::bIsRefreshing");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_HighlightedVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_HighlightedVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bIsTitle; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CategoryText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_HighlightedVM, bIsTitle) == 232, "Offset mismatch for UPilgrimSongCategoryGroup_HighlightedVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroup_HighlightedVM, CategoryText) == 240, "Offset mismatch for UPilgrimSongCategoryGroup_HighlightedVM::CategoryText");
static_assert(offsetof(UPilgrimSongCategoryGroup_HighlightedVM, bIsRefreshing) == 256, "Offset mismatch for UPilgrimSongCategoryGroup_HighlightedVM::bIsRefreshing");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_LettersVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_LettersVM
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    FString CategoryLetters; // 0x0108 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_LettersVM, CategoryLetters) == 264, "Offset mismatch for UPilgrimSongCategoryGroup_LettersVM::CategoryLetters");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_NewVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_NewVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bIsTitle; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CategoryText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_NewVM, bIsTitle) == 232, "Offset mismatch for UPilgrimSongCategoryGroup_NewVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroup_NewVM, CategoryText) == 240, "Offset mismatch for UPilgrimSongCategoryGroup_NewVM::CategoryText");
static_assert(offsetof(UPilgrimSongCategoryGroup_NewVM, bIsRefreshing) == 256, "Offset mismatch for UPilgrimSongCategoryGroup_NewVM::bIsRefreshing");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_OwnedVM
// Kind: Class; super: PilgrimSongCategoryGroup_LettersVM
class UPilgrimSongCategoryGroup_OwnedVM
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    FString CategoryLetters; // 0x0108 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_OwnedVM, CategoryLetters) == 264, "Offset mismatch for UPilgrimSongCategoryGroup_OwnedVM::CategoryLetters");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_SongIntensityVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_SongIntensityVM
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::int32_t BarIntensity; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_SongIntensityVM, BarIntensity) == 264, "Offset mismatch for UPilgrimSongCategoryGroup_SongIntensityVM::BarIntensity");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_SongLengthVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_SongLengthVM
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t MinMaxLengthInSec[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_SongLengthVM, MinMaxLengthInSec) == 264, "Offset mismatch for UPilgrimSongCategoryGroup_SongLengthVM::MinMaxLengthInSec");

// /Script/PilgrimCoreUI.PilgrimSongCategoryGroup_SpotlightVM
// Kind: Class; super: PilgrimSongCategoryGroupVM
class UPilgrimSongCategoryGroup_SpotlightVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bIsTitle; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CategoryText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsRefreshing; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSongCategoryGroup_SpotlightVM, bIsTitle) == 232, "Offset mismatch for UPilgrimSongCategoryGroup_SpotlightVM::bIsTitle");
static_assert(offsetof(UPilgrimSongCategoryGroup_SpotlightVM, CategoryText) == 240, "Offset mismatch for UPilgrimSongCategoryGroup_SpotlightVM::CategoryText");
static_assert(offsetof(UPilgrimSongCategoryGroup_SpotlightVM, bIsRefreshing) == 256, "Offset mismatch for UPilgrimSongCategoryGroup_SpotlightVM::bIsRefreshing");

// /Script/PilgrimCoreUI.PilgrimSongChallengeDataBaseVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimSongChallengeDataBaseVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreUI.PilgrimSongChallengeHighScoreDataVM
// Kind: Class; super: PilgrimSongChallengeDataBaseVM
class UPilgrimSongChallengeHighScoreDataVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t PlayerHighScore; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerRank; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimSongChallengeHighScoreDataVM, PlayerHighScore) == 120, "Offset mismatch for UPilgrimSongChallengeHighScoreDataVM::PlayerHighScore");
static_assert(offsetof(UPilgrimSongChallengeHighScoreDataVM, PlayerRank) == 124, "Offset mismatch for UPilgrimSongChallengeHighScoreDataVM::PlayerRank");

// /Script/PilgrimCoreUI.PilgrimSongChallengeItemVM
// Kind: Class; super: MVVMViewModelBase
class UPilgrimSongChallengeItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t LookupState; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ProgressionState; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FoundChallengeType; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x006B
    void* ChallengeData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongShortName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t Instrument; // 0x007C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimSongChallengeItemVM, LookupState) == 104, "Offset mismatch for UPilgrimSongChallengeItemVM::LookupState");
static_assert(offsetof(UPilgrimSongChallengeItemVM, ProgressionState) == 105, "Offset mismatch for UPilgrimSongChallengeItemVM::ProgressionState");
static_assert(offsetof(UPilgrimSongChallengeItemVM, FoundChallengeType) == 106, "Offset mismatch for UPilgrimSongChallengeItemVM::FoundChallengeType");
static_assert(offsetof(UPilgrimSongChallengeItemVM, ChallengeData) == 112, "Offset mismatch for UPilgrimSongChallengeItemVM::ChallengeData");
static_assert(offsetof(UPilgrimSongChallengeItemVM, SongShortName) == 120, "Offset mismatch for UPilgrimSongChallengeItemVM::SongShortName");
static_assert(offsetof(UPilgrimSongChallengeItemVM, Instrument) == 124, "Offset mismatch for UPilgrimSongChallengeItemVM::Instrument");

// /Script/PilgrimCoreUI.PilgrimSongChallengeQuestDataVM
// Kind: Class; super: PilgrimSongChallengeDataBaseVM
class UPilgrimSongChallengeQuestDataVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* QuestVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongChallengeQuestDataVM, QuestVM) == 120, "Offset mismatch for UPilgrimSongChallengeQuestDataVM::QuestVM");

// /Script/PilgrimCoreUI.PilgrimSongChallengeRivalDataVM
// Kind: Class; super: PilgrimSongChallengeDataBaseVM
class UPilgrimSongChallengeRivalDataVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString RivalDisplayName; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::int32_t RivalScore; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t RivalRank; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t RivalFriendRank; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimSongChallengeRivalDataVM, RivalDisplayName) == 120, "Offset mismatch for UPilgrimSongChallengeRivalDataVM::RivalDisplayName");
static_assert(offsetof(UPilgrimSongChallengeRivalDataVM, RivalScore) == 136, "Offset mismatch for UPilgrimSongChallengeRivalDataVM::RivalScore");
static_assert(offsetof(UPilgrimSongChallengeRivalDataVM, RivalRank) == 140, "Offset mismatch for UPilgrimSongChallengeRivalDataVM::RivalRank");
static_assert(offsetof(UPilgrimSongChallengeRivalDataVM, RivalFriendRank) == 144, "Offset mismatch for UPilgrimSongChallengeRivalDataVM::RivalFriendRank");

// /Script/PilgrimCoreUI.PilgrimSuggestedSongVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimSuggestedSongVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AllSongs; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* NewSongSelectionVM; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSuggestedSongVM, AllSongs) == 120, "Offset mismatch for UPilgrimSuggestedSongVM::AllSongs");
static_assert(offsetof(UPilgrimSuggestedSongVM, NewSongSelectionVM) == 136, "Offset mismatch for UPilgrimSuggestedSongVM::NewSongSelectionVM");

// /Script/PilgrimCoreUI.PilgrimTrackUI
// Kind: Class; super: Overlay
class UPilgrimTrackUI
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    TArray<void*> WidgetClassesToTransform; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InheritedWidgetClassesToTransform; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x28]; // 0x01C8
    void* PilgrimTrackCapture; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    void* TrackAndGameManager; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TrackIndex; // 0x0200 (Size: 0x4, Type: IntProperty)
    float TrackPlaneOffset; // 0x0204 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0208
    std::uint8_t SlateTransformMode; // 0x020C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x020D
    std::uint8_t bInheritWidgetClassesToTransform; // 0x020E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInheritTrackPlaneOffset; // 0x020F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimTrackUI, WidgetClassesToTransform) == 424, "Offset mismatch for UPilgrimTrackUI::WidgetClassesToTransform");
static_assert(offsetof(UPilgrimTrackUI, InheritedWidgetClassesToTransform) == 440, "Offset mismatch for UPilgrimTrackUI::InheritedWidgetClassesToTransform");
static_assert(offsetof(UPilgrimTrackUI, PilgrimTrackCapture) == 496, "Offset mismatch for UPilgrimTrackUI::PilgrimTrackCapture");
static_assert(offsetof(UPilgrimTrackUI, TrackAndGameManager) == 504, "Offset mismatch for UPilgrimTrackUI::TrackAndGameManager");
static_assert(offsetof(UPilgrimTrackUI, TrackIndex) == 512, "Offset mismatch for UPilgrimTrackUI::TrackIndex");
static_assert(offsetof(UPilgrimTrackUI, TrackPlaneOffset) == 516, "Offset mismatch for UPilgrimTrackUI::TrackPlaneOffset");
static_assert(offsetof(UPilgrimTrackUI, SlateTransformMode) == 524, "Offset mismatch for UPilgrimTrackUI::SlateTransformMode");
static_assert(offsetof(UPilgrimTrackUI, bInheritWidgetClassesToTransform) == 526, "Offset mismatch for UPilgrimTrackUI::bInheritWidgetClassesToTransform");
static_assert(offsetof(UPilgrimTrackUI, bInheritTrackPlaneOffset) == 527, "Offset mismatch for UPilgrimTrackUI::bInheritTrackPlaneOffset");

// /Script/PilgrimCoreUI.PilgrimTrackWidgetBase
// Kind: Class; super: PilgrimGameWidgetBase
class UPilgrimTrackWidgetBase
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bReceiveScoreEventsWhenHidden; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    TArray<void*> GameplayEventHandles; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    void* MusicBattleInstance; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimTrackWidgetBase, bReceiveScoreEventsWhenHidden) == 776, "Offset mismatch for UPilgrimTrackWidgetBase::bReceiveScoreEventsWhenHidden");
static_assert(offsetof(UPilgrimTrackWidgetBase, GameplayEventHandles) == 784, "Offset mismatch for UPilgrimTrackWidgetBase::GameplayEventHandles");
static_assert(offsetof(UPilgrimTrackWidgetBase, MusicBattleInstance) == 800, "Offset mismatch for UPilgrimTrackWidgetBase::MusicBattleInstance");

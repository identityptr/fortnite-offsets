/**
 * decamp dumper generated SDK
 * Package: /Script/ArcadeMinigamesUI
 */
#pragma once
#include "Basic.h"

// /Script/ArcadeMinigamesUI.ArcadeMinigame2DWidget
// Kind: Class; super: ArcadeMinigameWidget
class UArcadeMinigame2DWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t GamePhase; // 0x04A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04A1
    std::int32_t Score; // 0x04A4 (Size: 0x4, Type: IntProperty)
    std::int32_t Highscore; // 0x04A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04AC
    void* MovementAction; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryAction; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryOnPressAction; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryAction; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GamePadding[0x28]; // 0x04D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ScoreFont[0x1]; // 0x04F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UArcadeMinigame2DWidget, GamePhase) == 1184, "Offset mismatch for UArcadeMinigame2DWidget::GamePhase");
static_assert(offsetof(UArcadeMinigame2DWidget, Score) == 1188, "Offset mismatch for UArcadeMinigame2DWidget::Score");
static_assert(offsetof(UArcadeMinigame2DWidget, Highscore) == 1192, "Offset mismatch for UArcadeMinigame2DWidget::Highscore");
static_assert(offsetof(UArcadeMinigame2DWidget, MovementAction) == 1200, "Offset mismatch for UArcadeMinigame2DWidget::MovementAction");
static_assert(offsetof(UArcadeMinigame2DWidget, PrimaryAction) == 1208, "Offset mismatch for UArcadeMinigame2DWidget::PrimaryAction");
static_assert(offsetof(UArcadeMinigame2DWidget, PrimaryOnPressAction) == 1216, "Offset mismatch for UArcadeMinigame2DWidget::PrimaryOnPressAction");
static_assert(offsetof(UArcadeMinigame2DWidget, SecondaryAction) == 1224, "Offset mismatch for UArcadeMinigame2DWidget::SecondaryAction");
static_assert(offsetof(UArcadeMinigame2DWidget, GamePadding) == 1232, "Offset mismatch for UArcadeMinigame2DWidget::GamePadding");
static_assert(offsetof(UArcadeMinigame2DWidget, ScoreFont) == 1272, "Offset mismatch for UArcadeMinigame2DWidget::ScoreFont");

// /Script/ArcadeMinigamesUI.ArcadeMinigameWidget
// Kind: Class; super: CommonActivatableWidget
class UArcadeMinigameWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UArcadeMinigameWidget, bIsBackHandler) == 816, "Offset mismatch for UArcadeMinigameWidget::bIsBackHandler");
static_assert(offsetof(UArcadeMinigameWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UArcadeMinigameWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UArcadeMinigameWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UArcadeMinigameWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UArcadeMinigameWidget, bAutoActivate) == 840, "Offset mismatch for UArcadeMinigameWidget::bAutoActivate");
static_assert(offsetof(UArcadeMinigameWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UArcadeMinigameWidget::bSupportsActivationFocus");
static_assert(offsetof(UArcadeMinigameWidget, bIsModal) == 842, "Offset mismatch for UArcadeMinigameWidget::bIsModal");
static_assert(offsetof(UArcadeMinigameWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UArcadeMinigameWidget::bAutoRestoreFocus");
static_assert(offsetof(UArcadeMinigameWidget, bOverrideActionDomain) == 844, "Offset mismatch for UArcadeMinigameWidget::bOverrideActionDomain");
static_assert(offsetof(UArcadeMinigameWidget, InputMapping) == 848, "Offset mismatch for UArcadeMinigameWidget::InputMapping");
static_assert(offsetof(UArcadeMinigameWidget, InputMappingPriority) == 856, "Offset mismatch for UArcadeMinigameWidget::InputMappingPriority");
static_assert(offsetof(UArcadeMinigameWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UArcadeMinigameWidget::InputModeTagsToAdd");
static_assert(offsetof(UArcadeMinigameWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UArcadeMinigameWidget::InputModeTagsToRemove");
static_assert(offsetof(UArcadeMinigameWidget, ActionDomainOverride) == 928, "Offset mismatch for UArcadeMinigameWidget::ActionDomainOverride");
static_assert(offsetof(UArcadeMinigameWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UArcadeMinigameWidget::BP_OnWidgetActivated");
static_assert(offsetof(UArcadeMinigameWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UArcadeMinigameWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UArcadeMinigameWidget, bIsActive) == 992, "Offset mismatch for UArcadeMinigameWidget::bIsActive");
static_assert(offsetof(UArcadeMinigameWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UArcadeMinigameWidget::VisibilityBoundWidgets");
static_assert(offsetof(UArcadeMinigameWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UArcadeMinigameWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UArcadeMinigameWidget, ActivatedVisibility) == 1177, "Offset mismatch for UArcadeMinigameWidget::ActivatedVisibility");
static_assert(offsetof(UArcadeMinigameWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UArcadeMinigameWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UArcadeMinigameWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UArcadeMinigameWidget::DeactivatedVisibility");

// /Script/ArcadeMinigamesUI.ArcadeMobileControlOverlayWidget
// Kind: Class; super: CommonActivatableWidget
class UArcadeMobileControlOverlayWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ExitAction; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UArcadeMobileControlOverlayWidget, ExitAction) == 1184, "Offset mismatch for UArcadeMobileControlOverlayWidget::ExitAction");

// /Script/ArcadeMinigamesUI.ArcadeMobileJoystickWidget
// Kind: Class; super: UserWidget
class UArcadeMobileJoystickWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnValueChanged; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ThumbImage; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* StickVisual; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    float MaxThumbOffsetPixels; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float OriginFollowDistancePixels; // 0x032C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultStickMargin[0x1]; // 0x0330 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UArcadeMobileJoystickWidget, OnValueChanged) == 776, "Offset mismatch for UArcadeMobileJoystickWidget::OnValueChanged");
static_assert(offsetof(UArcadeMobileJoystickWidget, ThumbImage) == 792, "Offset mismatch for UArcadeMobileJoystickWidget::ThumbImage");
static_assert(offsetof(UArcadeMobileJoystickWidget, StickVisual) == 800, "Offset mismatch for UArcadeMobileJoystickWidget::StickVisual");
static_assert(offsetof(UArcadeMobileJoystickWidget, MaxThumbOffsetPixels) == 808, "Offset mismatch for UArcadeMobileJoystickWidget::MaxThumbOffsetPixels");
static_assert(offsetof(UArcadeMobileJoystickWidget, OriginFollowDistancePixels) == 812, "Offset mismatch for UArcadeMobileJoystickWidget::OriginFollowDistancePixels");
static_assert(offsetof(UArcadeMobileJoystickWidget, DefaultStickMargin) == 816, "Offset mismatch for UArcadeMobileJoystickWidget::DefaultStickMargin");

// /Script/ArcadeMinigamesUI.ArcadeVolleyWidget
// Kind: Class; super: ArcadeMinigame2DWidget
class UArcadeVolleyWidget
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    std::int32_t WinningScore; // 0x0578 (Size: 0x4, Type: IntProperty)
    float BallInitialSpeed; // 0x057C (Size: 0x4, Type: FloatProperty)
    float BallSpeedIncrement; // 0x0580 (Size: 0x4, Type: FloatProperty)
    float PaddleSpeed; // 0x0584 (Size: 0x4, Type: FloatProperty)
    float PaddleWidth; // 0x0588 (Size: 0x4, Type: FloatProperty)
    float PaddleHeight; // 0x058C (Size: 0x4, Type: FloatProperty)
    float AISpeed; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PaddleColor[0x10]; // 0x0594 (Size: 0x10, Type: StructProperty)
    std::uint8_t BallColor[0x10]; // 0x05A4 (Size: 0x10, Type: StructProperty)
    std::uint8_t CenterDashColor[0x10]; // 0x05B4 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScoreColor[0x14]; // 0x05C4 (Size: 0x14, Type: StructProperty)
    void* WallBounceSound; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* PaddleHitSound; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* ServeSound; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerScoredSound; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* MatchEndedSound; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* GameStartedSound; // 0x0600 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UArcadeVolleyWidget, WinningScore) == 1400, "Offset mismatch for UArcadeVolleyWidget::WinningScore");
static_assert(offsetof(UArcadeVolleyWidget, BallInitialSpeed) == 1404, "Offset mismatch for UArcadeVolleyWidget::BallInitialSpeed");
static_assert(offsetof(UArcadeVolleyWidget, BallSpeedIncrement) == 1408, "Offset mismatch for UArcadeVolleyWidget::BallSpeedIncrement");
static_assert(offsetof(UArcadeVolleyWidget, PaddleSpeed) == 1412, "Offset mismatch for UArcadeVolleyWidget::PaddleSpeed");
static_assert(offsetof(UArcadeVolleyWidget, PaddleWidth) == 1416, "Offset mismatch for UArcadeVolleyWidget::PaddleWidth");
static_assert(offsetof(UArcadeVolleyWidget, PaddleHeight) == 1420, "Offset mismatch for UArcadeVolleyWidget::PaddleHeight");
static_assert(offsetof(UArcadeVolleyWidget, AISpeed) == 1424, "Offset mismatch for UArcadeVolleyWidget::AISpeed");
static_assert(offsetof(UArcadeVolleyWidget, PaddleColor) == 1428, "Offset mismatch for UArcadeVolleyWidget::PaddleColor");
static_assert(offsetof(UArcadeVolleyWidget, BallColor) == 1444, "Offset mismatch for UArcadeVolleyWidget::BallColor");
static_assert(offsetof(UArcadeVolleyWidget, CenterDashColor) == 1460, "Offset mismatch for UArcadeVolleyWidget::CenterDashColor");
static_assert(offsetof(UArcadeVolleyWidget, ScoreColor) == 1476, "Offset mismatch for UArcadeVolleyWidget::ScoreColor");
static_assert(offsetof(UArcadeVolleyWidget, WallBounceSound) == 1496, "Offset mismatch for UArcadeVolleyWidget::WallBounceSound");
static_assert(offsetof(UArcadeVolleyWidget, PaddleHitSound) == 1504, "Offset mismatch for UArcadeVolleyWidget::PaddleHitSound");
static_assert(offsetof(UArcadeVolleyWidget, ServeSound) == 1512, "Offset mismatch for UArcadeVolleyWidget::ServeSound");
static_assert(offsetof(UArcadeVolleyWidget, PlayerScoredSound) == 1520, "Offset mismatch for UArcadeVolleyWidget::PlayerScoredSound");
static_assert(offsetof(UArcadeVolleyWidget, MatchEndedSound) == 1528, "Offset mismatch for UArcadeVolleyWidget::MatchEndedSound");
static_assert(offsetof(UArcadeVolleyWidget, GameStartedSound) == 1536, "Offset mismatch for UArcadeVolleyWidget::GameStartedSound");

// /Script/ArcadeMinigamesUI.BoostBallGameStage
// Kind: Class; super: UserWidget
class UBoostBallGameStage
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bRequestEndGame; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0309
    float CarMaxTurnRate; // 0x030C (Size: 0x4, Type: FloatProperty)
    float CarAccel; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float CarCruiseSpeed; // 0x0314 (Size: 0x4, Type: FloatProperty)
    float CarCoastDamping; // 0x0318 (Size: 0x4, Type: FloatProperty)
    float BoostCruiseSpeed; // 0x031C (Size: 0x4, Type: FloatProperty)
    float BoostAccelBonus; // 0x0320 (Size: 0x4, Type: FloatProperty)
    float BoostMax; // 0x0324 (Size: 0x4, Type: FloatProperty)
    float BoostDrainRate; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float BoostRefillRate; // 0x032C (Size: 0x4, Type: FloatProperty)
    float HandbrakeDampingMul; // 0x0330 (Size: 0x4, Type: FloatProperty)
    float HandbrakeTurnMul; // 0x0334 (Size: 0x4, Type: FloatProperty)
    float BallDamping; // 0x0338 (Size: 0x4, Type: FloatProperty)
    float BallWallRestitution; // 0x033C (Size: 0x4, Type: FloatProperty)
    float CarWallRestitution; // 0x0340 (Size: 0x4, Type: FloatProperty)
    float HitRestitution; // 0x0344 (Size: 0x4, Type: FloatProperty)
    float HitSpeedCap; // 0x0348 (Size: 0x4, Type: FloatProperty)
    float AISpeedFactor; // 0x034C (Size: 0x4, Type: FloatProperty)
    float AIReactionDelay; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float MatchSeconds; // 0x0354 (Size: 0x4, Type: FloatProperty)
    std::int32_t KickoffCountdown; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x035C
    void* CarBallHitSound; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* BallWallBounceSound; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* CarWallBounceSound; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* CarCarBumpSound; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* PlayerScoredSound; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* AiScoredSound; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* MatchStartSound; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* MatchEndSound; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* GameCanvas; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Img_PlayerCar; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Img_AICar; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Img_Ball; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* BoostBar; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* ScoreText; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* TimeText; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* CountdownText; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0xA0]; // 0x03E0
    void* PlayerExhaustImg; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* AIExhaustImg; // 0x0488 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBoostBallGameStage, bRequestEndGame) == 776, "Offset mismatch for UBoostBallGameStage::bRequestEndGame");
static_assert(offsetof(UBoostBallGameStage, CarMaxTurnRate) == 780, "Offset mismatch for UBoostBallGameStage::CarMaxTurnRate");
static_assert(offsetof(UBoostBallGameStage, CarAccel) == 784, "Offset mismatch for UBoostBallGameStage::CarAccel");
static_assert(offsetof(UBoostBallGameStage, CarCruiseSpeed) == 788, "Offset mismatch for UBoostBallGameStage::CarCruiseSpeed");
static_assert(offsetof(UBoostBallGameStage, CarCoastDamping) == 792, "Offset mismatch for UBoostBallGameStage::CarCoastDamping");
static_assert(offsetof(UBoostBallGameStage, BoostCruiseSpeed) == 796, "Offset mismatch for UBoostBallGameStage::BoostCruiseSpeed");
static_assert(offsetof(UBoostBallGameStage, BoostAccelBonus) == 800, "Offset mismatch for UBoostBallGameStage::BoostAccelBonus");
static_assert(offsetof(UBoostBallGameStage, BoostMax) == 804, "Offset mismatch for UBoostBallGameStage::BoostMax");
static_assert(offsetof(UBoostBallGameStage, BoostDrainRate) == 808, "Offset mismatch for UBoostBallGameStage::BoostDrainRate");
static_assert(offsetof(UBoostBallGameStage, BoostRefillRate) == 812, "Offset mismatch for UBoostBallGameStage::BoostRefillRate");
static_assert(offsetof(UBoostBallGameStage, HandbrakeDampingMul) == 816, "Offset mismatch for UBoostBallGameStage::HandbrakeDampingMul");
static_assert(offsetof(UBoostBallGameStage, HandbrakeTurnMul) == 820, "Offset mismatch for UBoostBallGameStage::HandbrakeTurnMul");
static_assert(offsetof(UBoostBallGameStage, BallDamping) == 824, "Offset mismatch for UBoostBallGameStage::BallDamping");
static_assert(offsetof(UBoostBallGameStage, BallWallRestitution) == 828, "Offset mismatch for UBoostBallGameStage::BallWallRestitution");
static_assert(offsetof(UBoostBallGameStage, CarWallRestitution) == 832, "Offset mismatch for UBoostBallGameStage::CarWallRestitution");
static_assert(offsetof(UBoostBallGameStage, HitRestitution) == 836, "Offset mismatch for UBoostBallGameStage::HitRestitution");
static_assert(offsetof(UBoostBallGameStage, HitSpeedCap) == 840, "Offset mismatch for UBoostBallGameStage::HitSpeedCap");
static_assert(offsetof(UBoostBallGameStage, AISpeedFactor) == 844, "Offset mismatch for UBoostBallGameStage::AISpeedFactor");
static_assert(offsetof(UBoostBallGameStage, AIReactionDelay) == 848, "Offset mismatch for UBoostBallGameStage::AIReactionDelay");
static_assert(offsetof(UBoostBallGameStage, MatchSeconds) == 852, "Offset mismatch for UBoostBallGameStage::MatchSeconds");
static_assert(offsetof(UBoostBallGameStage, KickoffCountdown) == 856, "Offset mismatch for UBoostBallGameStage::KickoffCountdown");
static_assert(offsetof(UBoostBallGameStage, CarBallHitSound) == 864, "Offset mismatch for UBoostBallGameStage::CarBallHitSound");
static_assert(offsetof(UBoostBallGameStage, BallWallBounceSound) == 872, "Offset mismatch for UBoostBallGameStage::BallWallBounceSound");
static_assert(offsetof(UBoostBallGameStage, CarWallBounceSound) == 880, "Offset mismatch for UBoostBallGameStage::CarWallBounceSound");
static_assert(offsetof(UBoostBallGameStage, CarCarBumpSound) == 888, "Offset mismatch for UBoostBallGameStage::CarCarBumpSound");
static_assert(offsetof(UBoostBallGameStage, PlayerScoredSound) == 896, "Offset mismatch for UBoostBallGameStage::PlayerScoredSound");
static_assert(offsetof(UBoostBallGameStage, AiScoredSound) == 904, "Offset mismatch for UBoostBallGameStage::AiScoredSound");
static_assert(offsetof(UBoostBallGameStage, MatchStartSound) == 912, "Offset mismatch for UBoostBallGameStage::MatchStartSound");
static_assert(offsetof(UBoostBallGameStage, MatchEndSound) == 920, "Offset mismatch for UBoostBallGameStage::MatchEndSound");
static_assert(offsetof(UBoostBallGameStage, GameCanvas) == 928, "Offset mismatch for UBoostBallGameStage::GameCanvas");
static_assert(offsetof(UBoostBallGameStage, Img_PlayerCar) == 936, "Offset mismatch for UBoostBallGameStage::Img_PlayerCar");
static_assert(offsetof(UBoostBallGameStage, Img_AICar) == 944, "Offset mismatch for UBoostBallGameStage::Img_AICar");
static_assert(offsetof(UBoostBallGameStage, Img_Ball) == 952, "Offset mismatch for UBoostBallGameStage::Img_Ball");
static_assert(offsetof(UBoostBallGameStage, BoostBar) == 960, "Offset mismatch for UBoostBallGameStage::BoostBar");
static_assert(offsetof(UBoostBallGameStage, ScoreText) == 968, "Offset mismatch for UBoostBallGameStage::ScoreText");
static_assert(offsetof(UBoostBallGameStage, TimeText) == 976, "Offset mismatch for UBoostBallGameStage::TimeText");
static_assert(offsetof(UBoostBallGameStage, CountdownText) == 984, "Offset mismatch for UBoostBallGameStage::CountdownText");
static_assert(offsetof(UBoostBallGameStage, PlayerExhaustImg) == 1152, "Offset mismatch for UBoostBallGameStage::PlayerExhaustImg");
static_assert(offsetof(UBoostBallGameStage, AIExhaustImg) == 1160, "Offset mismatch for UBoostBallGameStage::AIExhaustImg");

// /Script/ArcadeMinigamesUI.BoostBallScreen
// Kind: Class; super: ArcadeMinigameWidget
class UBoostBallScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* StateSwitcher; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* GameStage; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* HighScoreText; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* ResultText; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBoostBallScreen, StateSwitcher) == 1184, "Offset mismatch for UBoostBallScreen::StateSwitcher");
static_assert(offsetof(UBoostBallScreen, GameStage) == 1192, "Offset mismatch for UBoostBallScreen::GameStage");
static_assert(offsetof(UBoostBallScreen, HighScoreText) == 1200, "Offset mismatch for UBoostBallScreen::HighScoreText");
static_assert(offsetof(UBoostBallScreen, ResultText) == 1208, "Offset mismatch for UBoostBallScreen::ResultText");

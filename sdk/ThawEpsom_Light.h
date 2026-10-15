/**
 * decamp dumper generated SDK
 * Package: /Script/ThawEpsom_Light
 */
#pragma once
#include "Basic.h"

// /Script/ThawEpsom_Light.ArcadeThawEpsomWidget
// Kind: Class; super: ArcadeMinigame2DWidget
class UArcadeThawEpsomWidget
{
public:
    std::uint8_t Pad_0000[0xE00]; // 0x0000
    float SpriteScale; // 0x0E00 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0E04
    void* CharacterFlipbookMaterial; // 0x0E08 (Size: 0x8, Type: ObjectProperty)
    void* PickupFlipbookMaterial; // 0x0E10 (Size: 0x8, Type: ObjectProperty)
    void* PacManMID; // 0x0E18 (Size: 0x8, Type: ObjectProperty)
    void* GhostMIDs; // 0x0E20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0E28
    void* BigDotMID; // 0x0E40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1C]; // 0x0E48
    std::int32_t StartLives; // 0x0E64 (Size: 0x4, Type: IntProperty)
    float PacManSpeed; // 0x0E68 (Size: 0x4, Type: FloatProperty)
    float GhostSpeed; // 0x0E6C (Size: 0x4, Type: FloatProperty)
    float FrightenedSpeed; // 0x0E70 (Size: 0x4, Type: FloatProperty)
    float EyesSpeed; // 0x0E74 (Size: 0x4, Type: FloatProperty)
    float PowerDuration; // 0x0E78 (Size: 0x4, Type: FloatProperty)
    float FruitInterval; // 0x0E7C (Size: 0x4, Type: FloatProperty)
    void* EatGhostSound; // 0x0E80 (Size: 0x8, Type: ObjectProperty)
    void* GameOverSound; // 0x0E88 (Size: 0x8, Type: ObjectProperty)
    void* HighScoreSound; // 0x0E90 (Size: 0x8, Type: ObjectProperty)
    void* StartUpMusic; // 0x0E98 (Size: 0x8, Type: ObjectProperty)
    float StartUpMusicDelay; // 0x0EA0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0xC]; // 0x0EA4
    void* EatingLoopSound; // 0x0EB0 (Size: 0x8, Type: ObjectProperty)
    void* GhostIdleLoopSound; // 0x0EB8 (Size: 0x8, Type: ObjectProperty)
    void* GhostAlertLoopSound; // 0x0EC0 (Size: 0x8, Type: ObjectProperty)
    void* GhostFrightenedLoopSound; // 0x0EC8 (Size: 0x8, Type: ObjectProperty)
    void* GhostEyesLoopSound; // 0x0ED0 (Size: 0x8, Type: ObjectProperty)
    float AlertDotsRemainingFraction; // 0x0ED8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0EDC
    void* EatingLoopComponent; // 0x0EE0 (Size: 0x8, Type: ObjectProperty)
    void* GhostSirenComponent; // 0x0EE8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x0EF0
    float MazeWallLineThickness; // 0x0EF8 (Size: 0x4, Type: FloatProperty)
    float MazeWallInset; // 0x0EFC (Size: 0x4, Type: FloatProperty)
    float MazeWallCornerRadius; // 0x0F00 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MazeWallColor[0x10]; // 0x0F04 (Size: 0x10, Type: StructProperty)
    std::uint8_t MazeDotColor[0x10]; // 0x0F14 (Size: 0x10, Type: StructProperty)
    float CharacterRadius; // 0x0F24 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UArcadeThawEpsomWidget, SpriteScale) == 3584, "Offset mismatch for UArcadeThawEpsomWidget::SpriteScale");
static_assert(offsetof(UArcadeThawEpsomWidget, CharacterFlipbookMaterial) == 3592, "Offset mismatch for UArcadeThawEpsomWidget::CharacterFlipbookMaterial");
static_assert(offsetof(UArcadeThawEpsomWidget, PickupFlipbookMaterial) == 3600, "Offset mismatch for UArcadeThawEpsomWidget::PickupFlipbookMaterial");
static_assert(offsetof(UArcadeThawEpsomWidget, PacManMID) == 3608, "Offset mismatch for UArcadeThawEpsomWidget::PacManMID");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostMIDs) == 3616, "Offset mismatch for UArcadeThawEpsomWidget::GhostMIDs");
static_assert(offsetof(UArcadeThawEpsomWidget, BigDotMID) == 3648, "Offset mismatch for UArcadeThawEpsomWidget::BigDotMID");
static_assert(offsetof(UArcadeThawEpsomWidget, StartLives) == 3684, "Offset mismatch for UArcadeThawEpsomWidget::StartLives");
static_assert(offsetof(UArcadeThawEpsomWidget, PacManSpeed) == 3688, "Offset mismatch for UArcadeThawEpsomWidget::PacManSpeed");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostSpeed) == 3692, "Offset mismatch for UArcadeThawEpsomWidget::GhostSpeed");
static_assert(offsetof(UArcadeThawEpsomWidget, FrightenedSpeed) == 3696, "Offset mismatch for UArcadeThawEpsomWidget::FrightenedSpeed");
static_assert(offsetof(UArcadeThawEpsomWidget, EyesSpeed) == 3700, "Offset mismatch for UArcadeThawEpsomWidget::EyesSpeed");
static_assert(offsetof(UArcadeThawEpsomWidget, PowerDuration) == 3704, "Offset mismatch for UArcadeThawEpsomWidget::PowerDuration");
static_assert(offsetof(UArcadeThawEpsomWidget, FruitInterval) == 3708, "Offset mismatch for UArcadeThawEpsomWidget::FruitInterval");
static_assert(offsetof(UArcadeThawEpsomWidget, EatGhostSound) == 3712, "Offset mismatch for UArcadeThawEpsomWidget::EatGhostSound");
static_assert(offsetof(UArcadeThawEpsomWidget, GameOverSound) == 3720, "Offset mismatch for UArcadeThawEpsomWidget::GameOverSound");
static_assert(offsetof(UArcadeThawEpsomWidget, HighScoreSound) == 3728, "Offset mismatch for UArcadeThawEpsomWidget::HighScoreSound");
static_assert(offsetof(UArcadeThawEpsomWidget, StartUpMusic) == 3736, "Offset mismatch for UArcadeThawEpsomWidget::StartUpMusic");
static_assert(offsetof(UArcadeThawEpsomWidget, StartUpMusicDelay) == 3744, "Offset mismatch for UArcadeThawEpsomWidget::StartUpMusicDelay");
static_assert(offsetof(UArcadeThawEpsomWidget, EatingLoopSound) == 3760, "Offset mismatch for UArcadeThawEpsomWidget::EatingLoopSound");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostIdleLoopSound) == 3768, "Offset mismatch for UArcadeThawEpsomWidget::GhostIdleLoopSound");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostAlertLoopSound) == 3776, "Offset mismatch for UArcadeThawEpsomWidget::GhostAlertLoopSound");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostFrightenedLoopSound) == 3784, "Offset mismatch for UArcadeThawEpsomWidget::GhostFrightenedLoopSound");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostEyesLoopSound) == 3792, "Offset mismatch for UArcadeThawEpsomWidget::GhostEyesLoopSound");
static_assert(offsetof(UArcadeThawEpsomWidget, AlertDotsRemainingFraction) == 3800, "Offset mismatch for UArcadeThawEpsomWidget::AlertDotsRemainingFraction");
static_assert(offsetof(UArcadeThawEpsomWidget, EatingLoopComponent) == 3808, "Offset mismatch for UArcadeThawEpsomWidget::EatingLoopComponent");
static_assert(offsetof(UArcadeThawEpsomWidget, GhostSirenComponent) == 3816, "Offset mismatch for UArcadeThawEpsomWidget::GhostSirenComponent");
static_assert(offsetof(UArcadeThawEpsomWidget, MazeWallLineThickness) == 3832, "Offset mismatch for UArcadeThawEpsomWidget::MazeWallLineThickness");
static_assert(offsetof(UArcadeThawEpsomWidget, MazeWallInset) == 3836, "Offset mismatch for UArcadeThawEpsomWidget::MazeWallInset");
static_assert(offsetof(UArcadeThawEpsomWidget, MazeWallCornerRadius) == 3840, "Offset mismatch for UArcadeThawEpsomWidget::MazeWallCornerRadius");
static_assert(offsetof(UArcadeThawEpsomWidget, MazeWallColor) == 3844, "Offset mismatch for UArcadeThawEpsomWidget::MazeWallColor");
static_assert(offsetof(UArcadeThawEpsomWidget, MazeDotColor) == 3860, "Offset mismatch for UArcadeThawEpsomWidget::MazeDotColor");
static_assert(offsetof(UArcadeThawEpsomWidget, CharacterRadius) == 3876, "Offset mismatch for UArcadeThawEpsomWidget::CharacterRadius");

/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/Events/Generic/CountdownTimer/BP_Generic_Lobby_Countdown
 */
#pragma once
#include "Basic.h"

// /Game/Athena/Events/Generic/CountdownTimer/BP_Generic_Lobby_Countdown.BP_Generic_Lobby_Countdown_C
// Kind: BlueprintGeneratedClass; super: none
class UBP_Generic_Lobby_Countdown_C
{
public:
    std::uint8_t Pad_0000[0x3D8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x03D8 (Size: 0x8, Type: StructProperty)
    void* HologramIndicatorBeam; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* DHMSWidget; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Widget_LiveInText; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    float OpacityMult_NewTrack_0_574D5AAC4F8BC058612D7ABE24687B94; // 0x03F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OpacityMult_Direction_574D5AAC4F8BC058612D7ABE24687B94; // 0x03FC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0xB]; // 0x03FD
    float Timeline_0_Fade_D82BDD724EC8D63339008CAE75C6E3B4; // 0x0408 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Timeline_0_Direction_D82BDD724EC8D63339008CAE75C6E3B4; // 0x040C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x040D
    void* Timeline; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FrontendTimerEnabled; // 0x0418 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsLobbyTimer; // 0x0419 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowLogo; // 0x041A (Size: 0x1, Type: BoolProperty)
    std::uint8_t HideTimerOnFinish; // 0x041B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x041C
    FString CountdownEvent; // 0x0420 (Size: 0x10, Type: StrProperty)
    FString BeginningSoonCalendarEvent; // 0x0430 (Size: 0x10, Type: StrProperty)
    std::uint8_t BeginningSoonText[0x10]; // 0x0440 (Size: 0x10, Type: TextProperty)
    std::int32_t Stage; // 0x0450 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0454
    double SecondsRemaining; // 0x0458 (Size: 0x8, Type: DoubleProperty)
    std::int32_t RepAudio; // 0x0460 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0464
    void* CountdownMusic; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* Music; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlinkHandle[0x8]; // 0x0478 (Size: 0x8, Type: StructProperty)
    std::uint8_t Has2MinWarningFired; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PlaylistReady; // 0x0481 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x0482
    void* MID_CountdownLogo; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllCalendarNames; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActiveCalendarFound; // 0x04A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, UberGraphFrame) == 984, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::UberGraphFrame");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, HologramIndicatorBeam) == 992, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::HologramIndicatorBeam");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, DHMSWidget) == 1000, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::DHMSWidget");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Widget_LiveInText) == 1008, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Widget_LiveInText");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, OpacityMult_NewTrack_0_574D5AAC4F8BC058612D7ABE24687B94) == 1016, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::OpacityMult_NewTrack_0_574D5AAC4F8BC058612D7ABE24687B94");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, OpacityMult_Direction_574D5AAC4F8BC058612D7ABE24687B94) == 1020, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::OpacityMult_Direction_574D5AAC4F8BC058612D7ABE24687B94");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Timeline_0_Fade_D82BDD724EC8D63339008CAE75C6E3B4) == 1032, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Timeline_0_Fade_D82BDD724EC8D63339008CAE75C6E3B4");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Timeline_0_Direction_D82BDD724EC8D63339008CAE75C6E3B4) == 1036, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Timeline_0_Direction_D82BDD724EC8D63339008CAE75C6E3B4");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Timeline) == 1040, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Timeline");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, FrontendTimerEnabled) == 1048, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::FrontendTimerEnabled");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, IsLobbyTimer) == 1049, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::IsLobbyTimer");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, ShowLogo) == 1050, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::ShowLogo");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, HideTimerOnFinish) == 1051, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::HideTimerOnFinish");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, CountdownEvent) == 1056, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::CountdownEvent");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, BeginningSoonCalendarEvent) == 1072, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::BeginningSoonCalendarEvent");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, BeginningSoonText) == 1088, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::BeginningSoonText");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Stage) == 1104, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Stage");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, SecondsRemaining) == 1112, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::SecondsRemaining");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, RepAudio) == 1120, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::RepAudio");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, CountdownMusic) == 1128, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::CountdownMusic");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Music) == 1136, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Music");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, BlinkHandle) == 1144, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::BlinkHandle");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, Has2MinWarningFired) == 1152, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::Has2MinWarningFired");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, PlaylistReady) == 1153, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::PlaylistReady");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, MID_CountdownLogo) == 1160, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::MID_CountdownLogo");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, AllCalendarNames) == 1168, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::AllCalendarNames");
static_assert(offsetof(UBP_Generic_Lobby_Countdown_C, ActiveCalendarFound) == 1184, "Offset mismatch for UBP_Generic_Lobby_Countdown_C::ActiveCalendarFound");

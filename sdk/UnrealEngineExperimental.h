/**
 * decamp dumper generated SDK
 * Package: /Script/UnrealEngineExperimental
 */
#pragma once
#include "Basic.h"

// /Script/UnrealEngineExperimental.DebugDrawText
// Kind: ScriptStruct; super: none
struct FDebugDrawText
{
public:
    std::uint8_t DebugTextPosition[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString DebugText; // 0x0018 (Size: 0x10, Type: StrProperty)
    float TimeRemaining; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TextColor[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawShadow; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float FontScale; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDebugDrawText, DebugTextPosition) == 0, "Offset mismatch for FDebugDrawText::DebugTextPosition");
static_assert(offsetof(FDebugDrawText, DebugText) == 24, "Offset mismatch for FDebugDrawText::DebugText");
static_assert(offsetof(FDebugDrawText, TimeRemaining) == 40, "Offset mismatch for FDebugDrawText::TimeRemaining");
static_assert(offsetof(FDebugDrawText, TextColor) == 44, "Offset mismatch for FDebugDrawText::TextColor");
static_assert(offsetof(FDebugDrawText, bDrawShadow) == 48, "Offset mismatch for FDebugDrawText::bDrawShadow");
static_assert(offsetof(FDebugDrawText, FontScale) == 52, "Offset mismatch for FDebugDrawText::FontScale");

// /Script/UnrealEngineExperimental.OnUnrecoverableErrorMessage
// Kind: ScriptStruct; super: none
struct FOnUnrecoverableErrorMessage
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TitleStr[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    FText MessageStr; // 0x0018 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FOnUnrecoverableErrorMessage, Timestamp) == 0, "Offset mismatch for FOnUnrecoverableErrorMessage::Timestamp");
static_assert(offsetof(FOnUnrecoverableErrorMessage, TitleStr) == 8, "Offset mismatch for FOnUnrecoverableErrorMessage::TitleStr");
static_assert(offsetof(FOnUnrecoverableErrorMessage, MessageStr) == 24, "Offset mismatch for FOnUnrecoverableErrorMessage::MessageStr");

// /Script/UnrealEngineExperimental.OnVerseRuntimeErrorMessage
// Kind: ScriptStruct; super: none
struct FOnVerseRuntimeErrorMessage
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FText MessageStr; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FOnVerseRuntimeErrorMessage, Timestamp) == 0, "Offset mismatch for FOnVerseRuntimeErrorMessage::Timestamp");
static_assert(offsetof(FOnVerseRuntimeErrorMessage, MessageStr) == 8, "Offset mismatch for FOnVerseRuntimeErrorMessage::MessageStr");

// /Script/UnrealEngineExperimental.OnVerseRuntimeWarningMessage
// Kind: ScriptStruct; super: none
struct FOnVerseRuntimeWarningMessage
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FText MessageStr; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FOnVerseRuntimeWarningMessage, Timestamp) == 0, "Offset mismatch for FOnVerseRuntimeWarningMessage::Timestamp");
static_assert(offsetof(FOnVerseRuntimeWarningMessage, MessageStr) == 8, "Offset mismatch for FOnVerseRuntimeWarningMessage::MessageStr");

// /Script/UnrealEngineExperimental.PersistentLineBatcher
// Kind: ScriptStruct; super: none
struct FPersistentLineBatcher
{
public:
    void* PersistentLineBatcher; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPersistentLineBatcher, PersistentLineBatcher) == 0, "Offset mismatch for FPersistentLineBatcher::PersistentLineBatcher");

// /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
// Kind: ScriptStruct; super: none
struct FScriptDiagnosticMessage
{
public:
    std::uint8_t MessageType; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Timestamp[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FString Channel; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t MessageStr[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t SourceLocation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScriptDiagnosticMessage, MessageType) == 0, "Offset mismatch for FScriptDiagnosticMessage::MessageType");
static_assert(offsetof(FScriptDiagnosticMessage, Timestamp) == 8, "Offset mismatch for FScriptDiagnosticMessage::Timestamp");
static_assert(offsetof(FScriptDiagnosticMessage, Channel) == 16, "Offset mismatch for FScriptDiagnosticMessage::Channel");
static_assert(offsetof(FScriptDiagnosticMessage, MessageStr) == 32, "Offset mismatch for FScriptDiagnosticMessage::MessageStr");
static_assert(offsetof(FScriptDiagnosticMessage, SourceLocation) == 48, "Offset mismatch for FScriptDiagnosticMessage::SourceLocation");

// /Script/UnrealEngineExperimental.ScriptDiagnosticSourceLocation
// Kind: ScriptStruct; super: none
struct FScriptDiagnosticSourceLocation
{
public:
    FString FilePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t RowSpan[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ColSpan[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScriptDiagnosticSourceLocation, FilePath) == 0, "Offset mismatch for FScriptDiagnosticSourceLocation::FilePath");
static_assert(offsetof(FScriptDiagnosticSourceLocation, RowSpan) == 16, "Offset mismatch for FScriptDiagnosticSourceLocation::RowSpan");
static_assert(offsetof(FScriptDiagnosticSourceLocation, ColSpan) == 24, "Offset mismatch for FScriptDiagnosticSourceLocation::ColSpan");

// /Script/UnrealEngineExperimental.ScriptScreenLogMessage
// Kind: ScriptStruct; super: ScriptDiagnosticMessage
struct FScriptScreenLogMessage
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t ScreenColor[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    float DisplayDuration; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScriptScreenLogMessage, ScreenColor) == 80, "Offset mismatch for FScriptScreenLogMessage::ScreenColor");
static_assert(offsetof(FScriptScreenLogMessage, DisplayDuration) == 84, "Offset mismatch for FScriptScreenLogMessage::DisplayDuration");

// /Script/UnrealEngineExperimental.ScriptScreenLogMessageWithLocalization
// Kind: ScriptStruct; super: none
struct FScriptScreenLogMessageWithLocalization
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Message[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    FString Prefix; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t ScreenColor[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    float DisplayDuration; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScriptScreenLogMessageWithLocalization, Timestamp) == 0, "Offset mismatch for FScriptScreenLogMessageWithLocalization::Timestamp");
static_assert(offsetof(FScriptScreenLogMessageWithLocalization, Message) == 8, "Offset mismatch for FScriptScreenLogMessageWithLocalization::Message");
static_assert(offsetof(FScriptScreenLogMessageWithLocalization, Prefix) == 56, "Offset mismatch for FScriptScreenLogMessageWithLocalization::Prefix");
static_assert(offsetof(FScriptScreenLogMessageWithLocalization, ScreenColor) == 72, "Offset mismatch for FScriptScreenLogMessageWithLocalization::ScreenColor");
static_assert(offsetof(FScriptScreenLogMessageWithLocalization, DisplayDuration) == 76, "Offset mismatch for FScriptScreenLogMessageWithLocalization::DisplayDuration");

// /Script/UnrealEngineExperimental.ControllerComponentDebugDraw
// Kind: Class; super: ControllerComponent
class UControllerComponentDebugDraw
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> PersistentLineBatchers; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DebugDrawTexts; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControllerComponentDebugDraw, PersistentLineBatchers) == 192, "Offset mismatch for UControllerComponentDebugDraw::PersistentLineBatchers");
static_assert(offsetof(UControllerComponentDebugDraw, DebugDrawTexts) == 208, "Offset mismatch for UControllerComponentDebugDraw::DebugDrawTexts");

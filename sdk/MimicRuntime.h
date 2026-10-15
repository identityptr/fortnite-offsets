/**
 * decamp dumper generated SDK
 * Package: /Script/MimicRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MimicRuntime.AIPromptModerationDetailsMessage
// Kind: ScriptStruct; super: TableRowBase
struct FAIPromptModerationDetailsMessage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RestrictionCategory; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    FText DetailMessage; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FAIPromptModerationDetailsMessage, RestrictionCategory) == 8, "Offset mismatch for FAIPromptModerationDetailsMessage::RestrictionCategory");
static_assert(offsetof(FAIPromptModerationDetailsMessage, DetailMessage) == 16, "Offset mismatch for FAIPromptModerationDetailsMessage::DetailMessage");

// /Script/MimicRuntime.ConversationResponseTime
// Kind: ScriptStruct; super: none
struct FConversationResponseTime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LLMPromptConfigurationData
// Kind: ScriptStruct; super: none
struct FLLMPromptConfigurationData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LLMResonanceResponse
// Kind: ScriptStruct; super: none
struct FLLMResonanceResponse
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LLMResponseTypeData
// Kind: ScriptStruct; super: none
struct FLLMResponseTypeData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LocalizableMessageParameterLLMString
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterLLMString
{
public:
    FString Value; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLocalizableMessageParameterLLMString, Value) == 0, "Offset mismatch for FLocalizableMessageParameterLLMString::Value");

// /Script/MimicRuntime.LLMResponse
// Kind: Class; super: Object
class ULLMResponse
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LLMResult
// Kind: Class; super: Object
class ULLMResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.LLMSession
// Kind: Class; super: Object
class ULLMSession
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.MimicObserver
// Kind: Class; super: Object
class UMimicObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MimicRuntime.MonologuePawn
// Kind: Class; super: Pawn
class UMonologuePawn
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bCanAffectNavigationGeneration; // 0x0278 (Size: 0x1, Type: BoolProperty)
    // 0x0278 BoolProperty bIsLocalViewTarget (shared storage)
    // 0x0278 BoolProperty bUseControllerRotationPitch (shared storage)
    // 0x0278 BoolProperty bUseControllerRotationRoll (shared storage)
    // 0x0278 BoolProperty bUseControllerRotationYaw (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    float BaseEyeHeight; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoPossessPlayer; // 0x0280 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AutoPossessAI; // 0x0281 (Size: 0x1, Type: EnumProperty)
    std::uint16_t RemoteViewPitch16; // 0x0282 (Size: 0x2, Type: UInt16Property)
    std::uint8_t RemoteViewPitch; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0285
    void* AIControllerClass; // 0x0288 (Size: 0x8, Type: ClassProperty)
    void* PlayerState; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* LastHitBy; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* Controller; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* PreviousController; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x4]; // 0x02B0
    std::uint8_t ReceiveControllerChangedDelegate[0x1]; // 0x02B4 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t ReceiveRestartedDelegate[0x3]; // 0x02B5 (Size: 0x3, Type: MulticastSparseDelegateProperty)
    std::uint8_t ControlInputVector[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastControlInputVector[0x18]; // 0x02D0 (Size: 0x18, Type: StructProperty)
    void* OverrideInputComponentClass; // 0x02E8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMonologuePawn, bCanAffectNavigationGeneration) == 632, "Offset mismatch for UMonologuePawn::bCanAffectNavigationGeneration");
static_assert(offsetof(UMonologuePawn, BaseEyeHeight) == 636, "Offset mismatch for UMonologuePawn::BaseEyeHeight");
static_assert(offsetof(UMonologuePawn, AutoPossessPlayer) == 640, "Offset mismatch for UMonologuePawn::AutoPossessPlayer");
static_assert(offsetof(UMonologuePawn, AutoPossessAI) == 641, "Offset mismatch for UMonologuePawn::AutoPossessAI");
static_assert(offsetof(UMonologuePawn, RemoteViewPitch16) == 642, "Offset mismatch for UMonologuePawn::RemoteViewPitch16");
static_assert(offsetof(UMonologuePawn, RemoteViewPitch) == 644, "Offset mismatch for UMonologuePawn::RemoteViewPitch");
static_assert(offsetof(UMonologuePawn, AIControllerClass) == 648, "Offset mismatch for UMonologuePawn::AIControllerClass");
static_assert(offsetof(UMonologuePawn, PlayerState) == 656, "Offset mismatch for UMonologuePawn::PlayerState");
static_assert(offsetof(UMonologuePawn, LastHitBy) == 664, "Offset mismatch for UMonologuePawn::LastHitBy");
static_assert(offsetof(UMonologuePawn, Controller) == 672, "Offset mismatch for UMonologuePawn::Controller");
static_assert(offsetof(UMonologuePawn, PreviousController) == 680, "Offset mismatch for UMonologuePawn::PreviousController");
static_assert(offsetof(UMonologuePawn, ReceiveControllerChangedDelegate) == 692, "Offset mismatch for UMonologuePawn::ReceiveControllerChangedDelegate");
static_assert(offsetof(UMonologuePawn, ReceiveRestartedDelegate) == 693, "Offset mismatch for UMonologuePawn::ReceiveRestartedDelegate");
static_assert(offsetof(UMonologuePawn, ControlInputVector) == 696, "Offset mismatch for UMonologuePawn::ControlInputVector");
static_assert(offsetof(UMonologuePawn, LastControlInputVector) == 720, "Offset mismatch for UMonologuePawn::LastControlInputVector");
static_assert(offsetof(UMonologuePawn, OverrideInputComponentClass) == 744, "Offset mismatch for UMonologuePawn::OverrideInputComponentClass");

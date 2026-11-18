#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteGameFramework
{
    struct ActorOwnedStateTreeConfig
    {
        static constexpr std::string_view Name = "ActorOwnedStateTreeConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeAsset = 0x0;
            static constexpr std::uintptr_t bShouldReplicate = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateTreeAsset", 0x0, "SoftObjectProperty"},
            {"bShouldReplicate", 0x20, "BoolProperty"},
        }};
    };

    struct ComponentCacheHelper
    {
        static constexpr std::string_view Name = "ComponentCacheHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FGF_Character
    {
        static constexpr std::string_view Name = "FGF_Character";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x2F8;
            static constexpr std::uintptr_t CharacterMovement = 0x300;
            static constexpr std::uintptr_t CapsuleComponent = 0x308;
            static constexpr std::uintptr_t BasedMovement = 0x310;
            static constexpr std::uintptr_t ReplicatedBasedMovement = 0x368;
            static constexpr std::uintptr_t ReplicatedServerLastTransformUpdateTimeStamp = 0x3C0;
            static constexpr std::uintptr_t ReplayLastTransformUpdateTimeStamp = 0x3C4;
            static constexpr std::uintptr_t BaseRotationOffset = 0x3D0;
            static constexpr std::uintptr_t BaseTranslationOffset = 0x3F0;
            static constexpr std::uintptr_t ReplicatedGravityDirection = 0x408;
            static constexpr std::uintptr_t AnimRootMotionTranslationScale = 0x438;
            static constexpr std::uintptr_t CrouchedEyeHeight = 0x43C;
            static constexpr std::uintptr_t bClientResimulateRootMotion = 0x440;
            static constexpr std::uintptr_t bClientResimulateRootMotionSources = 0x440;
            static constexpr std::uintptr_t bClientUpdating = 0x440;
            static constexpr std::uintptr_t bClientWasFalling = 0x440;
            static constexpr std::uintptr_t bInBaseReplication = 0x440;
            static constexpr std::uintptr_t bIsCrouched = 0x440;
            static constexpr std::uintptr_t bPressedJump = 0x440;
            static constexpr std::uintptr_t bProxyIsJumpForceApplied = 0x440;
            static constexpr std::uintptr_t bClientCheckEncroachmentOnNetUpdate = 0x441;
            static constexpr std::uintptr_t bProxyIsCharacterMovementActive = 0x441;
            static constexpr std::uintptr_t bServerMoveIgnoreRootMotion = 0x441;
            static constexpr std::uintptr_t bSimGravityDisabled = 0x441;
            static constexpr std::uintptr_t bWasJumping = 0x441;
            static constexpr std::uintptr_t ReplicatedMovementMode = 0x442;
            static constexpr std::uintptr_t JumpKeyHoldTime = 0x444;
            static constexpr std::uintptr_t JumpForceTimeRemaining = 0x448;
            static constexpr std::uintptr_t ProxyJumpForceStartedTime = 0x44C;
            static constexpr std::uintptr_t JumpMaxHoldTime = 0x450;
            static constexpr std::uintptr_t JumpMaxCount = 0x454;
            static constexpr std::uintptr_t JumpCurrentCount = 0x458;
            static constexpr std::uintptr_t JumpCurrentCountPreJump = 0x45C;
            static constexpr std::uintptr_t OnReachedJumpApex = 0x468;
            static constexpr std::uintptr_t LandedDelegate = 0x478;
            static constexpr std::uintptr_t MovementModeChangedDelegate = 0x488;
            static constexpr std::uintptr_t OnCharacterMovementUpdated = 0x498;
            static constexpr std::uintptr_t SavedRootMotion = 0x4A8;
            static constexpr std::uintptr_t ClientRootMotionParams = 0x4F0;
            static constexpr std::uintptr_t RootMotionRepMoves = 0x560;
            static constexpr std::uintptr_t RepRootMotion = 0x570;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"Mesh", 0x2F8, "ObjectProperty"},
            {"CharacterMovement", 0x300, "ObjectProperty"},
            {"CapsuleComponent", 0x308, "ObjectProperty"},
            {"BasedMovement", 0x310, "StructProperty"},
            {"ReplicatedBasedMovement", 0x368, "StructProperty"},
            {"ReplicatedServerLastTransformUpdateTimeStamp", 0x3C0, "FloatProperty"},
            {"ReplayLastTransformUpdateTimeStamp", 0x3C4, "FloatProperty"},
            {"BaseRotationOffset", 0x3D0, "StructProperty"},
            {"BaseTranslationOffset", 0x3F0, "StructProperty"},
            {"ReplicatedGravityDirection", 0x408, "StructProperty"},
            {"AnimRootMotionTranslationScale", 0x438, "FloatProperty"},
            {"CrouchedEyeHeight", 0x43C, "FloatProperty"},
            {"bClientResimulateRootMotion", 0x440, "BoolProperty"},
            {"bClientResimulateRootMotionSources", 0x440, "BoolProperty"},
            {"bClientUpdating", 0x440, "BoolProperty"},
            {"bClientWasFalling", 0x440, "BoolProperty"},
            {"bInBaseReplication", 0x440, "BoolProperty"},
            {"bIsCrouched", 0x440, "BoolProperty"},
            {"bPressedJump", 0x440, "BoolProperty"},
            {"bProxyIsJumpForceApplied", 0x440, "BoolProperty"},
            {"bClientCheckEncroachmentOnNetUpdate", 0x441, "BoolProperty"},
            {"bProxyIsCharacterMovementActive", 0x441, "BoolProperty"},
            {"bServerMoveIgnoreRootMotion", 0x441, "BoolProperty"},
            {"bSimGravityDisabled", 0x441, "BoolProperty"},
            {"bWasJumping", 0x441, "BoolProperty"},
            {"ReplicatedMovementMode", 0x442, "ByteProperty"},
            {"JumpKeyHoldTime", 0x444, "FloatProperty"},
            {"JumpForceTimeRemaining", 0x448, "FloatProperty"},
            {"ProxyJumpForceStartedTime", 0x44C, "FloatProperty"},
            {"JumpMaxHoldTime", 0x450, "FloatProperty"},
            {"JumpMaxCount", 0x454, "IntProperty"},
            {"JumpCurrentCount", 0x458, "IntProperty"},
            {"JumpCurrentCountPreJump", 0x45C, "IntProperty"},
            {"OnReachedJumpApex", 0x468, "MulticastInlineDelegateProperty"},
            {"LandedDelegate", 0x478, "MulticastInlineDelegateProperty"},
            {"MovementModeChangedDelegate", 0x488, "MulticastInlineDelegateProperty"},
            {"OnCharacterMovementUpdated", 0x498, "MulticastInlineDelegateProperty"},
            {"SavedRootMotion", 0x4A8, "StructProperty"},
            {"ClientRootMotionParams", 0x4F0, "StructProperty"},
            {"RootMotionRepMoves", 0x560, "ArrayProperty"},
            {"RepRootMotion", 0x570, "StructProperty"},
        }};
    };

    struct FGF_GameMode
    {
        static constexpr std::string_view Name = "FGF_GameMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchState = 0x310;
            static constexpr std::uintptr_t bDelayedStart = 0x314;
            static constexpr std::uintptr_t NumSpectators = 0x318;
            static constexpr std::uintptr_t NumPlayers = 0x31C;
            static constexpr std::uintptr_t NumBots = 0x320;
            static constexpr std::uintptr_t MinRespawnDelay = 0x324;
            static constexpr std::uintptr_t NumTravellingPlayers = 0x328;
            static constexpr std::uintptr_t EngineMessageClass = 0x330;
            static constexpr std::uintptr_t InactivePlayerArray = 0x338;
            static constexpr std::uintptr_t InactivePlayerStateLifeSpan = 0x348;
            static constexpr std::uintptr_t MaxInactivePlayers = 0x34C;
            static constexpr std::uintptr_t bHandleDedicatedServerReplays = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MatchState", 0x310, "NameProperty"},
            {"bDelayedStart", 0x314, "BoolProperty"},
            {"NumSpectators", 0x318, "IntProperty"},
            {"NumPlayers", 0x31C, "IntProperty"},
            {"NumBots", 0x320, "IntProperty"},
            {"MinRespawnDelay", 0x324, "FloatProperty"},
            {"NumTravellingPlayers", 0x328, "IntProperty"},
            {"EngineMessageClass", 0x330, "ClassProperty"},
            {"InactivePlayerArray", 0x338, "ArrayProperty"},
            {"InactivePlayerStateLifeSpan", 0x348, "FloatProperty"},
            {"MaxInactivePlayers", 0x34C, "IntProperty"},
            {"bHandleDedicatedServerReplays", 0x350, "BoolProperty"},
        }};
    };

    struct FGF_GameState
    {
        static constexpr std::string_view Name = "FGF_GameState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameState";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsObjectTrackingEnabled = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsObjectTrackingEnabled", 0x338, "BoolProperty"},
        }};
    };

    struct FGF_PlayerController
    {
        static constexpr std::string_view Name = "FGF_PlayerController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerController";
        struct Offsets
        {
            static constexpr std::uintptr_t player = 0x318;
            static constexpr std::uintptr_t AcknowledgedPawn = 0x320;
            static constexpr std::uintptr_t MyHUD = 0x328;
            static constexpr std::uintptr_t PlayerCameraManager = 0x330;
            static constexpr std::uintptr_t PlayerCameraManagerClass = 0x338;
            static constexpr std::uintptr_t bAutoManageActiveCameraTarget = 0x340;
            static constexpr std::uintptr_t TargetViewRotation = 0x348;
            static constexpr std::uintptr_t SmoothTargetViewRotationSpeed = 0x378;
            static constexpr std::uintptr_t HiddenActors = 0x380;
            static constexpr std::uintptr_t HiddenPrimitiveComponents = 0x390;
            static constexpr std::uintptr_t LastSpectatorStateSynchTime = 0x3A4;
            static constexpr std::uintptr_t LastSpectatorSyncLocation = 0x3A8;
            static constexpr std::uintptr_t LastSpectatorSyncRotation = 0x3C0;
            static constexpr std::uintptr_t ClientCap = 0x3D8;
            static constexpr std::uintptr_t CheatManager = 0x3E0;
            static constexpr std::uintptr_t CheatClass = 0x3E8;
            static constexpr std::uintptr_t PlayerInput = 0x3F0;
            static constexpr std::uintptr_t ActiveForceFeedbackEffects = 0x3F8;
            static constexpr std::uintptr_t bPlayerIsWaiting = 0x488;
            static constexpr std::uintptr_t NetPlayerIndex = 0x48C;
            static constexpr std::uintptr_t PendingSwapConnection = 0x4A8;
            static constexpr std::uintptr_t NetConnection = 0x4B0;
            static constexpr std::uintptr_t InputYawScale = 0x4D0;
            static constexpr std::uintptr_t InputPitchScale = 0x4D4;
            static constexpr std::uintptr_t InputRollScale = 0x4D8;
            static constexpr std::uintptr_t bEnableClickEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableMotionControls = 0x4DC;
            static constexpr std::uintptr_t bEnableMouseOverEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableStreamingSource = 0x4DC;
            static constexpr std::uintptr_t bEnableTouchEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableTouchOverEvents = 0x4DC;
            static constexpr std::uintptr_t bForceFeedbackEnabled = 0x4DC;
            static constexpr std::uintptr_t bShowMouseCursor = 0x4DC;
            static constexpr std::uintptr_t bStreamingSourceShouldActivate = 0x4DD;
            static constexpr std::uintptr_t bStreamingSourceShouldBlockOnSlowStreaming = 0x4DD;
            static constexpr std::uintptr_t StreamingSourcePriority = 0x4E0;
            static constexpr std::uintptr_t StreamingSourceDebugColor = 0x4E4;
            static constexpr std::uintptr_t StreamingSourceShapes = 0x4E8;
            static constexpr std::uintptr_t ForceFeedbackScale = 0x4F8;
            static constexpr std::uintptr_t ClickEventKeys = 0x500;
            static constexpr std::uintptr_t DefaultMouseCursor = 0x510;
            static constexpr std::uintptr_t CurrentMouseCursor = 0x511;
            static constexpr std::uintptr_t DefaultClickTraceChannel = 0x512;
            static constexpr std::uintptr_t CurrentClickTraceChannel = 0x513;
            static constexpr std::uintptr_t HitResultTraceDistance = 0x514;
            static constexpr std::uintptr_t SeamlessTravelCount = 0x518;
            static constexpr std::uintptr_t LastCompletedSeamlessTravelCount = 0x51A;
            static constexpr std::uintptr_t InactiveStateInputComponent = 0x5A0;
            static constexpr std::uintptr_t bShouldPerformFullTickWhenPaused = 0x5A8;
            static constexpr std::uintptr_t CurrentTouchInterface = 0x5C0;
            static constexpr std::uintptr_t OverridePlayerInputClass = 0x5C8;
            static constexpr std::uintptr_t SpectatorPawn = 0x660;
            static constexpr std::uintptr_t bIsLocalPlayerController = 0x66C;
            static constexpr std::uintptr_t SpawnLocation = 0x670;
            static constexpr std::uintptr_t CachedConnectionPlayerId = 0x6B8;
            static constexpr std::uintptr_t ClientHandshakeId = 0x6E8;
        };

        inline static constexpr std::array<PropertyInfo, 56> Properties{{
            {"player", 0x318, "ObjectProperty"},
            {"AcknowledgedPawn", 0x320, "ObjectProperty"},
            {"MyHUD", 0x328, "ObjectProperty"},
            {"PlayerCameraManager", 0x330, "ObjectProperty"},
            {"PlayerCameraManagerClass", 0x338, "ClassProperty"},
            {"bAutoManageActiveCameraTarget", 0x340, "BoolProperty"},
            {"TargetViewRotation", 0x348, "StructProperty"},
            {"SmoothTargetViewRotationSpeed", 0x378, "FloatProperty"},
            {"HiddenActors", 0x380, "ArrayProperty"},
            {"HiddenPrimitiveComponents", 0x390, "ArrayProperty"},
            {"LastSpectatorStateSynchTime", 0x3A4, "FloatProperty"},
            {"LastSpectatorSyncLocation", 0x3A8, "StructProperty"},
            {"LastSpectatorSyncRotation", 0x3C0, "StructProperty"},
            {"ClientCap", 0x3D8, "IntProperty"},
            {"CheatManager", 0x3E0, "ObjectProperty"},
            {"CheatClass", 0x3E8, "ClassProperty"},
            {"PlayerInput", 0x3F0, "ObjectProperty"},
            {"ActiveForceFeedbackEffects", 0x3F8, "ArrayProperty"},
            {"bPlayerIsWaiting", 0x488, "BoolProperty"},
            {"NetPlayerIndex", 0x48C, "ByteProperty"},
            {"PendingSwapConnection", 0x4A8, "ObjectProperty"},
            {"NetConnection", 0x4B0, "ObjectProperty"},
            {"InputYawScale", 0x4D0, "FloatProperty"},
            {"InputPitchScale", 0x4D4, "FloatProperty"},
            {"InputRollScale", 0x4D8, "FloatProperty"},
            {"bEnableClickEvents", 0x4DC, "BoolProperty"},
            {"bEnableMotionControls", 0x4DC, "BoolProperty"},
            {"bEnableMouseOverEvents", 0x4DC, "BoolProperty"},
            {"bEnableStreamingSource", 0x4DC, "BoolProperty"},
            {"bEnableTouchEvents", 0x4DC, "BoolProperty"},
            {"bEnableTouchOverEvents", 0x4DC, "BoolProperty"},
            {"bForceFeedbackEnabled", 0x4DC, "BoolProperty"},
            {"bShowMouseCursor", 0x4DC, "BoolProperty"},
            {"bStreamingSourceShouldActivate", 0x4DD, "BoolProperty"},
            {"bStreamingSourceShouldBlockOnSlowStreaming", 0x4DD, "BoolProperty"},
            {"StreamingSourcePriority", 0x4E0, "EnumProperty"},
            {"StreamingSourceDebugColor", 0x4E4, "StructProperty"},
            {"StreamingSourceShapes", 0x4E8, "ArrayProperty"},
            {"ForceFeedbackScale", 0x4F8, "FloatProperty"},
            {"ClickEventKeys", 0x500, "ArrayProperty"},
            {"DefaultMouseCursor", 0x510, "ByteProperty"},
            {"CurrentMouseCursor", 0x511, "ByteProperty"},
            {"DefaultClickTraceChannel", 0x512, "ByteProperty"},
            {"CurrentClickTraceChannel", 0x513, "ByteProperty"},
            {"HitResultTraceDistance", 0x514, "FloatProperty"},
            {"SeamlessTravelCount", 0x518, "UInt16Property"},
            {"LastCompletedSeamlessTravelCount", 0x51A, "UInt16Property"},
            {"InactiveStateInputComponent", 0x5A0, "ObjectProperty"},
            {"bShouldPerformFullTickWhenPaused", 0x5A8, "BoolProperty"},
            {"CurrentTouchInterface", 0x5C0, "ObjectProperty"},
            {"OverridePlayerInputClass", 0x5C8, "ClassProperty"},
            {"SpectatorPawn", 0x660, "ObjectProperty"},
            {"bIsLocalPlayerController", 0x66C, "BoolProperty"},
            {"SpawnLocation", 0x670, "StructProperty"},
            {"CachedConnectionPlayerId", 0x6B8, "StructProperty"},
            {"ClientHandshakeId", 0x6E8, "UInt32Property"},
        }};
    };

    struct FGF_PlayerState
    {
        static constexpr std::string_view Name = "FGF_PlayerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerState";
        struct Offsets
        {
            static constexpr std::uintptr_t Score = 0x278;
            static constexpr std::uintptr_t PlayerID = 0x27C;
            static constexpr std::uintptr_t CompressedPing = 0x280;
            static constexpr std::uintptr_t bFromPreviousLevel = 0x282;
            static constexpr std::uintptr_t bIsABot = 0x282;
            static constexpr std::uintptr_t bIsInactive = 0x282;
            static constexpr std::uintptr_t bIsSpectator = 0x282;
            static constexpr std::uintptr_t bOnlySpectator = 0x282;
            static constexpr std::uintptr_t bShouldUpdateReplicatedPing = 0x282;
            static constexpr std::uintptr_t StartTime = 0x284;
            static constexpr std::uintptr_t UniqueID = 0x288;
            static constexpr std::uintptr_t EngineMessageClass = 0x2B8;
            static constexpr std::uintptr_t SavedNetworkAddress = 0x2C8;
            static constexpr std::uintptr_t OnPawnSet = 0x2E0;
            static constexpr std::uintptr_t PawnPrivate = 0x2F0;
            static constexpr std::uintptr_t PlayerNamePrivate = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Score", 0x278, "FloatProperty"},
            {"PlayerID", 0x27C, "IntProperty"},
            {"CompressedPing", 0x280, "ByteProperty"},
            {"bFromPreviousLevel", 0x282, "BoolProperty"},
            {"bIsABot", 0x282, "BoolProperty"},
            {"bIsInactive", 0x282, "BoolProperty"},
            {"bIsSpectator", 0x282, "BoolProperty"},
            {"bOnlySpectator", 0x282, "BoolProperty"},
            {"bShouldUpdateReplicatedPing", 0x282, "BoolProperty"},
            {"StartTime", 0x284, "IntProperty"},
            {"UniqueID", 0x288, "StructProperty"},
            {"EngineMessageClass", 0x2B8, "ClassProperty"},
            {"SavedNetworkAddress", 0x2C8, "StrProperty"},
            {"OnPawnSet", 0x2E0, "MulticastInlineDelegateProperty"},
            {"PawnPrivate", 0x2F0, "ObjectProperty"},
            {"PlayerNamePrivate", 0x310, "StrProperty"},
        }};
    };

    struct ObjectBasedStateTreeSchema
    {
        static constexpr std::string_view Name = "ObjectBasedStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateChangeData
    {
        static constexpr std::string_view Name = "StateChangeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeDataHandle = 0xC;
            static constexpr std::uintptr_t Handle = 0x10;
            static constexpr std::uintptr_t StateIdentifier = 0x14;
            static constexpr std::uintptr_t StateObject = 0x18;
            static constexpr std::uintptr_t StateChangeType = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StateTreeDataHandle", 0xC, "IntProperty"},
            {"Handle", 0x10, "IntProperty"},
            {"StateIdentifier", 0x14, "IntProperty"},
            {"StateObject", 0x18, "ObjectProperty"},
            {"StateChangeType", 0x20, "EnumProperty"},
        }};
    };

    struct StateChangeDataArray
    {
        static constexpr std::string_view Name = "StateChangeDataArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t StateChangeDataList = 0x48;
            static constexpr std::uintptr_t StateTreeManagerComponent = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateChangeDataList", 0x48, "ArrayProperty"},
            {"StateTreeManagerComponent", 0x58, "ObjectProperty"},
        }};
    };

    struct StateTreeClientSimulationData
    {
        static constexpr std::string_view Name = "StateTreeClientSimulationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeManagerComponent
    {
        static constexpr std::string_view Name = "StateTreeManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeRuntimeDataList = 0xC0;
            static constexpr std::uintptr_t SimulatedDataList = 0xD0;
            static constexpr std::uintptr_t ReplicatedStateChanges = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTreeRuntimeDataList", 0xC0, "ArrayProperty"},
            {"SimulatedDataList", 0xD0, "ArrayProperty"},
            {"ReplicatedStateChanges", 0xE0, "StructProperty"},
        }};
    };

    struct StateTreeRuntimeData
    {
        static constexpr std::string_view Name = "StateTreeRuntimeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t StateTree = 0x8;
            static constexpr std::uintptr_t StateTreeInstanceData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
            {"StateTree", 0x8, "ObjectProperty"},
            {"StateTreeInstanceData", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeTaskObject
    {
        static constexpr std::string_view Name = "StateTreeTaskObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeTaskBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bReplicates = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReplicates", 0x70, "BoolProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksStageShowRuntime
{
    struct SparksStageShowAssetConverter
    {
        static constexpr std::string_view Name = "SparksStageShowAssetConverter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StageLightCanBase
    {
        static constexpr std::string_view Name = "StageLightCanBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StageShowActorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FlareStaticMeshComponent = 0x278;
            static constexpr std::uintptr_t SpotlightStaticMeshComponent = 0x280;
            static constexpr std::uintptr_t YachtSpotlightCanComponent = 0x288;
            static constexpr std::uintptr_t StaticColor = 0x290;
            static constexpr std::uintptr_t Can_MID = 0x2A0;
            static constexpr std::uintptr_t Beam_MID = 0x2A8;
            static constexpr std::uintptr_t LightBeamOverrideMaterial = 0x2B0;
            static constexpr std::uintptr_t LightCanOverrideMaterial = 0x2B8;
            static constexpr std::uintptr_t LightFlareOverrideMaterial = 0x2C0;
            static constexpr std::uintptr_t LightBeamOriginalMaterial = 0x2C8;
            static constexpr std::uintptr_t LightCanOriginalMaterial = 0x2D0;
            static constexpr std::uintptr_t LightFlareOriginalMaterial = 0x2D8;
            static constexpr std::uintptr_t LastResult = 0x2E0;
            static constexpr std::uintptr_t TurnOffOnEventChange = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"FlareStaticMeshComponent", 0x278, "ObjectProperty"},
            {"SpotlightStaticMeshComponent", 0x280, "ObjectProperty"},
            {"YachtSpotlightCanComponent", 0x288, "ObjectProperty"},
            {"StaticColor", 0x290, "StructProperty"},
            {"Can_MID", 0x2A0, "ObjectProperty"},
            {"Beam_MID", 0x2A8, "ObjectProperty"},
            {"LightBeamOverrideMaterial", 0x2B0, "ObjectProperty"},
            {"LightCanOverrideMaterial", 0x2B8, "ObjectProperty"},
            {"LightFlareOverrideMaterial", 0x2C0, "ObjectProperty"},
            {"LightBeamOriginalMaterial", 0x2C8, "ObjectProperty"},
            {"LightCanOriginalMaterial", 0x2D0, "ObjectProperty"},
            {"LightFlareOriginalMaterial", 0x2D8, "ObjectProperty"},
            {"LastResult", 0x2E0, "DoubleProperty"},
            {"TurnOffOnEventChange", 0x300, "BoolProperty"},
        }};
    };

    struct StageManager
    {
        static constexpr std::string_view Name = "StageManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StageShowActors = 0x278;
            static constexpr std::uintptr_t LastMidiEvent = 0x2A0;
            static constexpr std::uintptr_t LastGameplayEvent = 0x2A1;
            static constexpr std::uintptr_t RandomStream = 0x2A4;
            static constexpr std::uintptr_t RegisterGameplayEventMapEventHandle = 0x2AC;
            static constexpr std::uintptr_t RegisterMIDIEventMapEventHandle = 0x2C8;
            static constexpr std::uintptr_t PlayMIDIEventHandle = 0x2E4;
            static constexpr std::uintptr_t PlayGameplayEventHandle = 0x300;
            static constexpr std::uintptr_t SetColorPaletteEventHandle = 0x31C;
            static constexpr std::uintptr_t MIDIDebugBeatsChangeEventHandle = 0x338;
            static constexpr std::uintptr_t ForceGameplayColorPaletteEventHandle = 0x354;
            static constexpr std::uintptr_t ForceMIDIColorPaletteEventHandle = 0x370;
            static constexpr std::uintptr_t GameplayEvents = 0x390;
            static constexpr std::uintptr_t MIDIEvents = 0x398;
            static constexpr std::uintptr_t CachedActors = 0x3A0;
            static constexpr std::uintptr_t MIDIColorPalettes = 0x3B0;
            static constexpr std::uintptr_t GameplayColorPalettes = 0x3B8;
            static constexpr std::uintptr_t ColorSettingsIndex = 0x3D0;
            static constexpr std::uintptr_t CurrentColorPalette = 0x3D8;
            static constexpr std::uintptr_t CurrentAltColorPalette = 0x3E8;
            static constexpr std::uintptr_t ColorTimerHandles = 0x3F8;
            static constexpr std::uintptr_t EventTimerHandles = 0x408;
            static constexpr std::uintptr_t EffectTimeline = 0x428;
            static constexpr std::uintptr_t MusicClockComponent = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"StageShowActors", 0x278, "MapProperty"},
            {"LastMidiEvent", 0x2A0, "EnumProperty"},
            {"LastGameplayEvent", 0x2A1, "EnumProperty"},
            {"RandomStream", 0x2A4, "StructProperty"},
            {"RegisterGameplayEventMapEventHandle", 0x2AC, "StructProperty"},
            {"RegisterMIDIEventMapEventHandle", 0x2C8, "StructProperty"},
            {"PlayMIDIEventHandle", 0x2E4, "StructProperty"},
            {"PlayGameplayEventHandle", 0x300, "StructProperty"},
            {"SetColorPaletteEventHandle", 0x31C, "StructProperty"},
            {"MIDIDebugBeatsChangeEventHandle", 0x338, "StructProperty"},
            {"ForceGameplayColorPaletteEventHandle", 0x354, "StructProperty"},
            {"ForceMIDIColorPaletteEventHandle", 0x370, "StructProperty"},
            {"GameplayEvents", 0x390, "ObjectProperty"},
            {"MIDIEvents", 0x398, "ObjectProperty"},
            {"CachedActors", 0x3A0, "ArrayProperty"},
            {"MIDIColorPalettes", 0x3B0, "ObjectProperty"},
            {"GameplayColorPalettes", 0x3B8, "ObjectProperty"},
            {"ColorSettingsIndex", 0x3D0, "IntProperty"},
            {"CurrentColorPalette", 0x3D8, "ArrayProperty"},
            {"CurrentAltColorPalette", 0x3E8, "ArrayProperty"},
            {"ColorTimerHandles", 0x3F8, "ArrayProperty"},
            {"EventTimerHandles", 0x408, "ArrayProperty"},
            {"EffectTimeline", 0x428, "ArrayProperty"},
            {"MusicClockComponent", 0x468, "ObjectProperty"},
        }};
    };

    struct StageManagerGameplayColorPalettes
    {
        static constexpr std::string_view Name = "StageManagerGameplayColorPalettes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorPalette = 0x28;
            static constexpr std::uintptr_t AltColorPalette = 0x38;
            static constexpr std::uintptr_t EventMap = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ColorPalette", 0x28, "ArrayProperty"},
            {"AltColorPalette", 0x38, "ArrayProperty"},
            {"EventMap", 0x48, "MapProperty"},
        }};
    };

    struct StageManagerMIDIColorPalettes
    {
        static constexpr std::string_view Name = "StageManagerMIDIColorPalettes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorPalette = 0x28;
            static constexpr std::uintptr_t AltColorPalette = 0x38;
            static constexpr std::uintptr_t EventMap = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ColorPalette", 0x28, "ArrayProperty"},
            {"AltColorPalette", 0x38, "ArrayProperty"},
            {"EventMap", 0x48, "MapProperty"},
        }};
    };

    struct StageShowActorBase
    {
        static constexpr std::string_view Name = "StageShowActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct StageShowActors
    {
        static constexpr std::string_view Name = "StageShowActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StageShowActors = 0x278;
            static constexpr std::uintptr_t AutonomousLoop = 0x288;
            static constexpr std::uintptr_t IgnoreLoopConditions = 0x289;
            static constexpr std::uintptr_t AutonomousLoopEvents = 0x290;
            static constexpr std::uintptr_t StartLoopState = 0x2A0;
            static constexpr std::uintptr_t StopLoopState = 0x2A4;
            static constexpr std::uintptr_t AutonomousLoopTimer = 0x2A8;
            static constexpr std::uintptr_t AutonomousLoopEventsIndex = 0x2B8;
            static constexpr std::uintptr_t BeatFrequencyCounter = 0x2BC;
            static constexpr std::uintptr_t MeasureFrequencyCounter = 0x2C0;
            static constexpr std::uintptr_t Delay = 0x2C8;
            static constexpr std::uintptr_t FxManagerId = 0x2D0;
            static constexpr std::uintptr_t CurrentLoopIndex = 0x2D4;
            static constexpr std::uintptr_t CurrentEffectIndex = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"StageShowActors", 0x278, "ArrayProperty"},
            {"AutonomousLoop", 0x288, "BoolProperty"},
            {"IgnoreLoopConditions", 0x289, "BoolProperty"},
            {"AutonomousLoopEvents", 0x290, "ArrayProperty"},
            {"StartLoopState", 0x2A0, "NameProperty"},
            {"StopLoopState", 0x2A4, "NameProperty"},
            {"AutonomousLoopTimer", 0x2A8, "StructProperty"},
            {"AutonomousLoopEventsIndex", 0x2B8, "IntProperty"},
            {"BeatFrequencyCounter", 0x2BC, "IntProperty"},
            {"MeasureFrequencyCounter", 0x2C0, "IntProperty"},
            {"Delay", 0x2C8, "DoubleProperty"},
            {"FxManagerId", 0x2D0, "NameProperty"},
            {"CurrentLoopIndex", 0x2D4, "IntProperty"},
            {"CurrentEffectIndex", 0x2D8, "IntProperty"},
        }};
    };

    struct StageShowEvent
    {
        static constexpr std::string_view Name = "StageShowEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StartDelay = 0x28;
            static constexpr std::uintptr_t FxType = 0x30;
            static constexpr std::uintptr_t FxAnimation = 0x31;
            static constexpr std::uintptr_t LoopCount = 0x34;
            static constexpr std::uintptr_t AnimationStepDelay = 0x38;
            static constexpr std::uintptr_t Indices = 0x40;
            static constexpr std::uintptr_t AlternateCount = 0x50;
            static constexpr std::uintptr_t CustomModeIndex = 0x54;
            static constexpr std::uintptr_t Reverse = 0x58;
            static constexpr std::uintptr_t NiagaraSystemOverride = 0x60;
            static constexpr std::uintptr_t LoopingEvent = 0x80;
            static constexpr std::uintptr_t FrequencyType = 0x81;
            static constexpr std::uintptr_t NoteFrequency = 0x88;
            static constexpr std::uintptr_t BeatFrequency = 0x90;
            static constexpr std::uintptr_t MeasureFrequency = 0x94;
            static constexpr std::uintptr_t TargetFxManagerIds = 0x98;
            static constexpr std::uintptr_t StopFXManager = 0xA8;
            static constexpr std::uintptr_t StartFrequencyType = 0xA9;
            static constexpr std::uintptr_t bUseNewStageCans = 0xAA;
            static constexpr std::uintptr_t StageShowEventSettings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"StartDelay", 0x28, "DoubleProperty"},
            {"FxType", 0x30, "EnumProperty"},
            {"FxAnimation", 0x31, "EnumProperty"},
            {"LoopCount", 0x34, "IntProperty"},
            {"AnimationStepDelay", 0x38, "DoubleProperty"},
            {"Indices", 0x40, "ArrayProperty"},
            {"AlternateCount", 0x50, "IntProperty"},
            {"CustomModeIndex", 0x54, "IntProperty"},
            {"Reverse", 0x58, "BoolProperty"},
            {"NiagaraSystemOverride", 0x60, "SoftObjectProperty"},
            {"LoopingEvent", 0x80, "BoolProperty"},
            {"FrequencyType", 0x81, "EnumProperty"},
            {"NoteFrequency", 0x88, "DoubleProperty"},
            {"BeatFrequency", 0x90, "IntProperty"},
            {"MeasureFrequency", 0x94, "IntProperty"},
            {"TargetFxManagerIds", 0x98, "ArrayProperty"},
            {"StopFXManager", 0xA8, "BoolProperty"},
            {"StartFrequencyType", 0xA9, "EnumProperty"},
            {"bUseNewStageCans", 0xAA, "BoolProperty"},
            {"StageShowEventSettings", 0xB0, "StructProperty"},
        }};
    };

    struct StageShowGameplayEventMap
    {
        static constexpr std::string_view Name = "StageShowGameplayEventMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EventMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventMap", 0x28, "MapProperty"},
        }};
    };

    struct StageShowMIDIEventMap
    {
        static constexpr std::string_view Name = "StageShowMIDIEventMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EventMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventMap", 0x28, "MapProperty"},
        }};
    };

    struct StageShowManagerBase
    {
        static constexpr std::string_view Name = "StageShowManagerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSimulate = 0x278;
            static constexpr std::uintptr_t CachedEventRouter = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsSimulate", 0x278, "BoolProperty"},
            {"CachedEventRouter", 0x280, "ObjectProperty"},
        }};
    };

    struct StageShowRotator
    {
        static constexpr std::string_view Name = "StageShowRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StageShowActorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CubeRotator = 0x278;
            static constexpr std::uintptr_t SceneRoot = 0x280;
            static constexpr std::uintptr_t StartRotation = 0x288;
            static constexpr std::uintptr_t EndRotation = 0x2A0;
            static constexpr std::uintptr_t Looping = 0x2B8;
            static constexpr std::uintptr_t RotationCurve = 0x2C0;
            static constexpr std::uintptr_t AnimationOffset = 0x2C8;
            static constexpr std::uintptr_t Length = 0x2D0;
            static constexpr std::uintptr_t Position = 0x2D8;
            static constexpr std::uintptr_t Playing = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CubeRotator", 0x278, "ObjectProperty"},
            {"SceneRoot", 0x280, "ObjectProperty"},
            {"StartRotation", 0x288, "StructProperty"},
            {"EndRotation", 0x2A0, "StructProperty"},
            {"Looping", 0x2B8, "BoolProperty"},
            {"RotationCurve", 0x2C0, "ObjectProperty"},
            {"AnimationOffset", 0x2C8, "DoubleProperty"},
            {"Length", 0x2D0, "DoubleProperty"},
            {"Position", 0x2D8, "DoubleProperty"},
            {"Playing", 0x2E0, "BoolProperty"},
        }};
    };

    struct StageShowSequence
    {
        static constexpr std::string_view Name = "StageShowSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceSteps = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SequenceSteps", 0x28, "ArrayProperty"},
        }};
    };

    struct StageShowSequencePool
    {
        static constexpr std::string_view Name = "StageShowSequencePool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequences = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sequences", 0x28, "ArrayProperty"},
        }};
    };

}

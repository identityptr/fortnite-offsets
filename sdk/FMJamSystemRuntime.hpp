#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamSystemRuntime
{
    struct ControllerComponent_JamEmotePersistence
    {
        static constexpr std::string_view Name = "ControllerComponent_JamEmotePersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LastStartedJamEmote = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LastStartedJamEmote", 0xC8, "ObjectProperty"},
        }};
    };

    struct JamControllerComponent
    {
        static constexpr std::string_view Name = "JamControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct JamControllerComponent_LoopPreloader
    {
        static constexpr std::string_view Name = "JamControllerComponent_LoopPreloader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHaveRegisteredForOnLoadoutFilled = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHaveRegisteredForOnLoadoutFilled", 0xC0, "BoolProperty"},
        }};
    };

    struct JamGlobalControlsWidget
    {
        static constexpr std::string_view Name = "JamGlobalControlsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Close = 0x4A0;
            static constexpr std::uintptr_t GameplayAbility = 0x4B8;
            static constexpr std::uintptr_t HasBlockedMovementInput = 0x4DC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Button_Close", 0x4A0, "ObjectProperty"},
            {"GameplayAbility", 0x4B8, "ObjectProperty"},
            {"HasBlockedMovementInput", 0x4DC, "BoolProperty"},
        }};
    };

    struct JamLoopsSongPartPlayerOverrideComponent
    {
        static constexpr std::string_view Name = "JamLoopsSongPartPlayerOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongPartPlayerOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideOverlayWidget = 0xE0;
            static constexpr std::uintptr_t NewOverrideOverlayWidget = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverrideOverlayWidget", 0xE0, "SoftClassProperty"},
            {"NewOverrideOverlayWidget", 0x100, "SoftClassProperty"},
        }};
    };

    struct JamOnOffSwitchComponent
    {
        static constexpr std::string_view Name = "JamOnOffSwitchComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableJam = 0xC0;
            static constexpr std::uintptr_t JamBlockerEffect = 0xE8;
            static constexpr std::uintptr_t JamBlockerEffectHandle = 0xF0;
            static constexpr std::uintptr_t GamePhaseUpdatedEventHandle = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableJam", 0xC0, "StructProperty"},
            {"JamBlockerEffect", 0xE8, "ClassProperty"},
            {"JamBlockerEffectHandle", 0xF0, "StructProperty"},
            {"GamePhaseUpdatedEventHandle", 0x104, "StructProperty"},
        }};
    };

    struct JamSessionComponent_QuestVerbProvider
    {
        static constexpr std::string_view Name = "JamSessionComponent_QuestVerbProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct JamSystemBPFL
    {
        static constexpr std::string_view Name = "JamSystemBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSystemEmoteBPFL
    {
        static constexpr std::string_view Name = "JamSystemEmoteBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PawnComponent_JamInstrumentAnim
    {
        static constexpr std::string_view Name = "PawnComponent_JamInstrumentAnim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentAnimPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentAnimations = 0xC0;
            static constexpr std::uintptr_t MusicClock = 0xD0;
            static constexpr std::uintptr_t MidiEventDriver = 0xD8;
            static constexpr std::uintptr_t CosmeticInstrumentType = 0xE8;
            static constexpr std::uintptr_t AnimatableState = 0xE9;
            static constexpr std::uintptr_t bCanPlayMidiAnimations = 0xEA;
            static constexpr std::uintptr_t StagePropActor = 0xF0;
            static constexpr std::uintptr_t BP_OnPlayerMusicClockChanged = 0x128;
            static constexpr std::uintptr_t BP_OnPlayerMidiEventDriverChanged = 0x150;
            static constexpr std::uintptr_t BP_OnPlayerCosmeticInstrumentTypeChanged = 0x178;
            static constexpr std::uintptr_t BP_OnPlayerAnimatableStateChanged = 0x1A0;
            static constexpr std::uintptr_t BP_OnStagePropActorChanged = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"InstrumentAnimations", 0xC0, "ObjectProperty"},
            {"MusicClock", 0xD0, "ObjectProperty"},
            {"MidiEventDriver", 0xD8, "InterfaceProperty"},
            {"CosmeticInstrumentType", 0xE8, "EnumProperty"},
            {"AnimatableState", 0xE9, "EnumProperty"},
            {"bCanPlayMidiAnimations", 0xEA, "BoolProperty"},
            {"StagePropActor", 0xF0, "ObjectProperty"},
            {"BP_OnPlayerMusicClockChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerMidiEventDriverChanged", 0x150, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerCosmeticInstrumentTypeChanged", 0x178, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerAnimatableStateChanged", 0x1A0, "MulticastInlineDelegateProperty"},
            {"BP_OnStagePropActorChanged", 0x1C8, "MulticastInlineDelegateProperty"},
        }};
    };

}

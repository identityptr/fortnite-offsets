#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakeRecorder
{
    struct TakeRecorder
    {
        static constexpr std::string_view Name = "TakeRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceAsset = 0x58;
            static constexpr std::uintptr_t OverlayWidget = 0x60;
            static constexpr std::uintptr_t WeakWorld = 0x68;
            static constexpr std::uintptr_t Parameters = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SequenceAsset", 0x58, "ObjectProperty"},
            {"OverlayWidget", 0x60, "ObjectProperty"},
            {"WeakWorld", 0x68, "WeakObjectProperty"},
            {"Parameters", 0x70, "StructProperty"},
        }};
    };

    struct TakeRecorderBlueprintLibrary
    {
        static constexpr std::string_view Name = "TakeRecorderBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderNamingTokensData
    {
        static constexpr std::string_view Name = "TakeRecorderNamingTokensData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UserDefinedTokens = 0x38;
            static constexpr std::uintptr_t FieldToUndefinedKeys = 0x58;
            static constexpr std::uintptr_t EvaluatedTextValue = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UserDefinedTokens", 0x38, "MapProperty"},
            {"FieldToUndefinedKeys", 0x58, "ArrayProperty"},
            {"EvaluatedTextValue", 0x68, "TextProperty"},
        }};
    };

    struct TakeRecorderOverlayWidget
    {
        static constexpr std::string_view Name = "TakeRecorderOverlayWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Recorder = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Recorder", 0x308, "ObjectProperty"},
        }};
    };

    struct TakeRecorderPanel
    {
        static constexpr std::string_view Name = "TakeRecorderPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderProjectSettings
    {
        static constexpr std::string_view Name = "TakeRecorderProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t HitchProtectionSettings = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x28, "StructProperty"},
            {"HitchProtectionSettings", 0x88, "StructProperty"},
        }};
    };

    struct TakeRecorderSubsystem
    {
        static constexpr std::string_view Name = "TakeRecorderSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x38;
            static constexpr std::uintptr_t TakeRecorderPreInitialize = 0x138;
            static constexpr std::uintptr_t TakeRecorderInitialized = 0x148;
            static constexpr std::uintptr_t TakeRecorderStarted = 0x158;
            static constexpr std::uintptr_t TakeRecorderStopped = 0x168;
            static constexpr std::uintptr_t TakeRecorderFinished = 0x178;
            static constexpr std::uintptr_t TakeRecorderCancelled = 0x188;
            static constexpr std::uintptr_t TakeRecorderMarkedFrameAdded = 0x198;
            static constexpr std::uintptr_t TakeRecorderSlateChanged = 0x1A8;
            static constexpr std::uintptr_t TakeRecorderTakeNumberChanged = 0x1B8;
            static constexpr std::uintptr_t TakeRecorderSourceAdded = 0x1C8;
            static constexpr std::uintptr_t TakeRecorderSourceRemoved = 0x1D8;
            static constexpr std::uintptr_t TakeRecorderSourceModified = 0x1E8;
            static constexpr std::uintptr_t PendingTakeCleared = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Implementation", 0x38, "InterfaceProperty"},
            {"TakeRecorderPreInitialize", 0x138, "MulticastInlineDelegateProperty"},
            {"TakeRecorderInitialized", 0x148, "MulticastInlineDelegateProperty"},
            {"TakeRecorderStarted", 0x158, "MulticastInlineDelegateProperty"},
            {"TakeRecorderStopped", 0x168, "MulticastInlineDelegateProperty"},
            {"TakeRecorderFinished", 0x178, "MulticastInlineDelegateProperty"},
            {"TakeRecorderCancelled", 0x188, "MulticastInlineDelegateProperty"},
            {"TakeRecorderMarkedFrameAdded", 0x198, "MulticastInlineDelegateProperty"},
            {"TakeRecorderSlateChanged", 0x1A8, "MulticastInlineDelegateProperty"},
            {"TakeRecorderTakeNumberChanged", 0x1B8, "MulticastInlineDelegateProperty"},
            {"TakeRecorderSourceAdded", 0x1C8, "MulticastInlineDelegateProperty"},
            {"TakeRecorderSourceRemoved", 0x1D8, "MulticastInlineDelegateProperty"},
            {"TakeRecorderSourceModified", 0x1E8, "MulticastInlineDelegateProperty"},
            {"PendingTakeCleared", 0x1F8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct TakeRecorderSubsystemImplementation
    {
        static constexpr std::string_view Name = "TakeRecorderSubsystemImplementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientPreset = 0x60;
            static constexpr std::uintptr_t SuppliedLevelSequence = 0x68;
            static constexpr std::uintptr_t RecordIntoLevelSequence = 0x70;
            static constexpr std::uintptr_t RecordingLevelSequence = 0x78;
            static constexpr std::uintptr_t LastRecordedLevelSequence = 0x80;
            static constexpr std::uintptr_t TakeMetaData = 0x88;
            static constexpr std::uintptr_t TransientTakeMetaData = 0x90;
            static constexpr std::uintptr_t NamingTokensData = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TransientPreset", 0x60, "ObjectProperty"},
            {"SuppliedLevelSequence", 0x68, "ObjectProperty"},
            {"RecordIntoLevelSequence", 0x70, "ObjectProperty"},
            {"RecordingLevelSequence", 0x78, "ObjectProperty"},
            {"LastRecordedLevelSequence", 0x80, "WeakObjectProperty"},
            {"TakeMetaData", 0x88, "ObjectProperty"},
            {"TransientTakeMetaData", 0x90, "ObjectProperty"},
            {"NamingTokensData", 0x98, "ObjectProperty"},
        }};
    };

    struct TakeRecorderSubsystemInterface
    {
        static constexpr std::string_view Name = "TakeRecorderSubsystemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderUserSettings
    {
        static constexpr std::string_view Name = "TakeRecorderUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t PresetSaveDir = 0x50;
            static constexpr std::uintptr_t LastOpenedPreset = 0x60;
            static constexpr std::uintptr_t bIsSequenceOpen = 0x80;
            static constexpr std::uintptr_t bShowUserSettingsOnUI = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0x28, "StructProperty"},
            {"PresetSaveDir", 0x50, "StructProperty"},
            {"LastOpenedPreset", 0x60, "SoftObjectProperty"},
            {"bIsSequenceOpen", 0x80, "BoolProperty"},
            {"bShowUserSettingsOnUI", 0x81, "BoolProperty"},
        }};
    };

}

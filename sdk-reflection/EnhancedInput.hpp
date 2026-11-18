#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EnhancedInput
{
    struct AppliedInputContextData
    {
        static constexpr std::string_view Name = "AppliedInputContextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0x0;
            static constexpr std::uintptr_t RegistrationCount = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Priority", 0x0, "IntProperty"},
            {"RegistrationCount", 0x4, "IntProperty"},
        }};
    };

    struct BlueprintEnhancedInputActionBinding
    {
        static constexpr std::string_view Name = "BlueprintEnhancedInputActionBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputAction = 0x0;
            static constexpr std::uintptr_t TriggerEvent = 0x8;
            static constexpr std::uintptr_t FunctionNameToBind = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputAction", 0x0, "ObjectProperty"},
            {"TriggerEvent", 0x8, "EnumProperty"},
            {"FunctionNameToBind", 0xC, "NameProperty"},
        }};
    };

    struct BlueprintInputDebugKeyDelegateBinding
    {
        static constexpr std::string_view Name = "BlueprintInputDebugKeyDelegateBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputChord = 0x0;
            static constexpr std::uintptr_t InputKeyEvent = 0x20;
            static constexpr std::uintptr_t FunctionNameToBind = 0x24;
            static constexpr std::uintptr_t bExecuteWhenPaused = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputChord", 0x0, "StructProperty"},
            {"InputKeyEvent", 0x20, "ByteProperty"},
            {"FunctionNameToBind", 0x24, "NameProperty"},
            {"bExecuteWhenPaused", 0x28, "BoolProperty"},
        }};
    };

    struct DefaultContextSetting
    {
        static constexpr std::string_view Name = "DefaultContextSetting";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingContext = 0x0;
            static constexpr std::uintptr_t Priority = 0x20;
            static constexpr std::uintptr_t bAddImmediately = 0x24;
            static constexpr std::uintptr_t bRegisterWithUserSettings = 0x25;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputMappingContext", 0x0, "SoftObjectProperty"},
            {"Priority", 0x20, "IntProperty"},
            {"bAddImmediately", 0x24, "BoolProperty"},
            {"bRegisterWithUserSettings", 0x25, "BoolProperty"},
        }};
    };

    struct EnhancedActionKeyMapping
    {
        static constexpr std::string_view Name = "EnhancedActionKeyMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Triggers = 0x0;
            static constexpr std::uintptr_t Modifiers = 0x10;
            static constexpr std::uintptr_t Action = 0x20;
            static constexpr std::uintptr_t Key = 0x28;
            static constexpr std::uintptr_t bHasAlwaysTickTrigger = 0x40;
            static constexpr std::uintptr_t SettingBehavior = 0x41;
            static constexpr std::uintptr_t PlayerMappableKeySettings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Triggers", 0x0, "ArrayProperty"},
            {"Modifiers", 0x10, "ArrayProperty"},
            {"Action", 0x20, "ObjectProperty"},
            {"Key", 0x28, "StructProperty"},
            {"bHasAlwaysTickTrigger", 0x40, "BoolProperty"},
            {"SettingBehavior", 0x41, "EnumProperty"},
            {"PlayerMappableKeySettings", 0x48, "ObjectProperty"},
        }};
    };

    struct EnhancedInputActionDelegateBinding
    {
        static constexpr std::string_view Name = "EnhancedInputActionDelegateBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputDelegateBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionDelegateBindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputActionDelegateBindings", 0x28, "ArrayProperty"},
        }};
    };

    struct EnhancedInputActionValueBinding
    {
        static constexpr std::string_view Name = "EnhancedInputActionValueBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputDelegateBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionValueBindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputActionValueBindings", 0x28, "ArrayProperty"},
        }};
    };

    struct EnhancedInputComponent
    {
        static constexpr std::string_view Name = "EnhancedInputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedKeyToActionInfo = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedKeyToActionInfo", 0x130, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetBoundActionValue",
        }};
    };

    struct EnhancedInputDeveloperSettings
    {
        static constexpr std::string_view Name = "EnhancedInputDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettingsBackedByCVars";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultMappingContexts = 0x30;
            static constexpr std::uintptr_t DefaultWorldSubsystemMappingContexts = 0x40;
            static constexpr std::uintptr_t PlatformSettings = 0x50;
            static constexpr std::uintptr_t UserSettingsClass = 0x60;
            static constexpr std::uintptr_t DefaultPlayerMappableKeyProfileClass = 0x80;
            static constexpr std::uintptr_t InputSettingsSaveSlotName = 0xA0;
            static constexpr std::uintptr_t DefaultWorldInputClass = 0xB0;
            static constexpr std::uintptr_t bEnableDefaultMappingContexts = 0xD0;
            static constexpr std::uintptr_t bEnableInputModeFiltering = 0xD0;
            static constexpr std::uintptr_t bEnableUserSettings = 0xD0;
            static constexpr std::uintptr_t bEnableWorldSubsystem = 0xD0;
            static constexpr std::uintptr_t bSendTriggeredEventsWhenInputIsFlushed = 0xD0;
            static constexpr std::uintptr_t bShouldOnlyTriggerLastActionInChord = 0xD0;
            static constexpr std::uintptr_t DefaultMappingContextInputModeQuery = 0xD8;
            static constexpr std::uintptr_t DefaultInputMode = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"DefaultMappingContexts", 0x30, "ArrayProperty"},
            {"DefaultWorldSubsystemMappingContexts", 0x40, "ArrayProperty"},
            {"PlatformSettings", 0x50, "StructProperty"},
            {"UserSettingsClass", 0x60, "SoftClassProperty"},
            {"DefaultPlayerMappableKeyProfileClass", 0x80, "SoftClassProperty"},
            {"InputSettingsSaveSlotName", 0xA0, "StrProperty"},
            {"DefaultWorldInputClass", 0xB0, "SoftClassProperty"},
            {"bEnableDefaultMappingContexts", 0xD0, "BoolProperty"},
            {"bEnableInputModeFiltering", 0xD0, "BoolProperty"},
            {"bEnableUserSettings", 0xD0, "BoolProperty"},
            {"bEnableWorldSubsystem", 0xD0, "BoolProperty"},
            {"bSendTriggeredEventsWhenInputIsFlushed", 0xD0, "BoolProperty"},
            {"bShouldOnlyTriggerLastActionInChord", 0xD0, "BoolProperty"},
            {"DefaultMappingContextInputModeQuery", 0xD8, "StructProperty"},
            {"DefaultInputMode", 0x120, "StructProperty"},
        }};
    };

    struct EnhancedInputLibrary
    {
        static constexpr std::string_view Name = "EnhancedInputLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "BreakInputActionValue",
            "Conv_InputActionValueToAxis1D",
            "Conv_InputActionValueToAxis2D",
            "Conv_InputActionValueToAxis3D",
            "Conv_InputActionValueToBool",
            "Conv_InputActionValueToString",
            "Conv_TriggerEventValueToString",
            "FlushPlayerInput",
            "GetBoundActionValue",
            "GetMappingName",
            "GetPlayerMappableKeySettings",
            "IsActionKeyMappingPlayerMappable",
            "MakeInputActionValueOfType",
            "RequestRebuildControlMappingsUsingContext",
        }};
    };

    struct EnhancedInputLocalPlayerSubsystem
    {
        static constexpr std::string_view Name = "EnhancedInputLocalPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlMappingsRebuiltDelegate = 0x70;
            static constexpr std::uintptr_t OnMappingContextAdded = 0x80;
            static constexpr std::uintptr_t OnMappingContextRemoved = 0x90;
            static constexpr std::uintptr_t OnPostUserSettingsInitialized = 0xA0;
            static constexpr std::uintptr_t UserSettings = 0xB0;
            static constexpr std::uintptr_t ContinuouslyInjectedInputs = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ControlMappingsRebuiltDelegate", 0x70, "MulticastInlineDelegateProperty"},
            {"OnMappingContextAdded", 0x80, "MulticastInlineDelegateProperty"},
            {"OnMappingContextRemoved", 0x90, "MulticastInlineDelegateProperty"},
            {"OnPostUserSettingsInitialized", 0xA0, "MulticastInlineDelegateProperty"},
            {"UserSettings", 0xB0, "ObjectProperty"},
            {"ContinuouslyInjectedInputs", 0xB8, "MapProperty"},
        }};
    };

    struct EnhancedInputPlatformData
    {
        static constexpr std::string_view Name = "EnhancedInputPlatformData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingContextRedirects = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MappingContextRedirects", 0x28, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetContextRedirect",
        }};
    };

    struct EnhancedInputPlatformSettings
    {
        static constexpr std::string_view Name = "EnhancedInputPlatformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlatformSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputData = 0x40;
            static constexpr std::uintptr_t InputDataClasses = 0x50;
            static constexpr std::uintptr_t bShouldLogMappingContextRedirects = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputData", 0x40, "ArrayProperty"},
            {"InputDataClasses", 0x50, "ArrayProperty"},
            {"bShouldLogMappingContextRedirects", 0x60, "BoolProperty"},
        }};
    };

    struct EnhancedInputSubsystemInterface
    {
        static constexpr std::string_view Name = "EnhancedInputSubsystemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 28> FunctionNames{{
            "AddMappingContext",
            "AddTagToInputMode",
            "AppendTagsToInputMode",
            "ClearAllMappings",
            "GetAllPlayerMappableActionKeyMappings",
            "GetInputMode",
            "GetUserSettings",
            "HasMappingContext",
            "InjectInputForAction",
            "InjectInputForPlayerMapping",
            "InjectInputVectorForAction",
            "InjectInputVectorForPlayerMapping",
            "OnUserKeyProfileChanged",
            "OnUserSettingsChanged",
            "QueryKeysMappedToAction",
            "QueryMapKeyInActiveContextSet",
            "QueryMapKeyInContextSet",
            "RemoveMappingContext",
            "RemoveTagFromInputMode",
            "RemoveTagsFromInputMode",
            "RequestRebuildControlMappings",
            "SetInputMode",
            "StartContinuousInputInjectionForAction",
            "StartContinuousInputInjectionForPlayerMapping",
            "StopContinuousInputInjectionForAction",
            "StopContinuousInputInjectionForPlayerMapping",
            "UpdateValueOfContinuousInputInjectionForAction",
            "UpdateValueOfContinuousInputInjectionForPlayerMapping",
        }};
    };

    struct EnhancedInputUserSettings
    {
        static constexpr std::string_view Name = "EnhancedInputUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SaveGame";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSettingsChanged = 0x38;
            static constexpr std::uintptr_t OnSettingsApplied = 0x48;
            static constexpr std::uintptr_t OnKeyProfileChanged = 0x58;
            static constexpr std::uintptr_t CurrentProfileIdentifier = 0x78;
            static constexpr std::uintptr_t CurrentProfileIdentifierString = 0x80;
            static constexpr std::uintptr_t SavedKeyProfiles = 0x90;
            static constexpr std::uintptr_t SavedKeyProfilesMap = 0xA0;
            static constexpr std::uintptr_t OwningLocalPlayer = 0xB0;
            static constexpr std::uintptr_t RegisteredMappingContexts = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnSettingsChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"OnSettingsApplied", 0x48, "MulticastInlineDelegateProperty"},
            {"OnKeyProfileChanged", 0x58, "MulticastInlineDelegateProperty"},
            {"CurrentProfileIdentifier", 0x78, "StructProperty"},
            {"CurrentProfileIdentifierString", 0x80, "StrProperty"},
            {"SavedKeyProfiles", 0x90, "MapProperty"},
            {"SavedKeyProfilesMap", 0xA0, "MapProperty"},
            {"OwningLocalPlayer", 0xB0, "WeakObjectProperty"},
            {"RegisteredMappingContexts", 0xB8, "SetProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "ApplySettings",
            "AsyncSaveSettings",
            "CreateNewKeyProfile",
            "FindMappingsInRow",
            "GetActiveKeyProfile",
            "GetActiveKeyProfileId",
            "GetKeyProfileWithId",
            "IsMappingContextRegistered",
            "MapPlayerKey",
            "RegisterInputMappingContext",
            "RegisterInputMappingContexts",
            "ResetAllPlayerKeysInRow",
            "ResetKeyProfileIdToDefault",
            "ResetKeyProfileToDefault",
            "SaveSettings",
            "SetActiveKeyProfile",
            "SetKeyProfileToDefault",
            "UnMapPlayerKey",
            "UnregisterInputMappingContext",
            "UnregisterInputMappingContexts",
        }};
    };

    struct EnhancedInputWorldSubsystem
    {
        static constexpr std::string_view Name = "EnhancedInputWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInput = 0x78;
            static constexpr std::uintptr_t CurrentInputStack = 0x90;
            static constexpr std::uintptr_t ContinuouslyInjectedInputs = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayerInput", 0x78, "ObjectProperty"},
            {"CurrentInputStack", 0x90, "ArrayProperty"},
            {"ContinuouslyInjectedInputs", 0xA0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddActorInputComponent",
            "RemoveActorInputComponent",
        }};
    };

    struct EnhancedPlayerInput
    {
        static constexpr std::string_view Name = "EnhancedPlayerInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerInput";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyConsumptionData = 0x3C8;
            static constexpr std::uintptr_t ActionInstanceData = 0x3D8;
            static constexpr std::uintptr_t ConsumedInputActions = 0x3E8;
            static constexpr std::uintptr_t AppliedInputContextData = 0x3F8;
            static constexpr std::uintptr_t AppliedInputContexts = 0x408;
            static constexpr std::uintptr_t EnhancedActionMappings = 0x418;
            static constexpr std::uintptr_t CurrentInputMode = 0x438;
            static constexpr std::uintptr_t KeysPressedThisTick = 0x498;
            static constexpr std::uintptr_t InputsInjectedThisTick = 0x4A8;
            static constexpr std::uintptr_t LastInjectedActions = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"KeyConsumptionData", 0x3C8, "MapProperty"},
            {"ActionInstanceData", 0x3D8, "MapProperty"},
            {"ConsumedInputActions", 0x3E8, "SetProperty"},
            {"AppliedInputContextData", 0x3F8, "MapProperty"},
            {"AppliedInputContexts", 0x408, "MapProperty"},
            {"EnhancedActionMappings", 0x418, "ArrayProperty"},
            {"CurrentInputMode", 0x438, "StructProperty"},
            {"KeysPressedThisTick", 0x498, "MapProperty"},
            {"InputsInjectedThisTick", 0x4A8, "MapProperty"},
            {"LastInjectedActions", 0x4B8, "SetProperty"},
        }};
    };

    struct EnhancedPlayerInputAsyncMirror
    {
        static constexpr std::string_view Name = "EnhancedPlayerInputAsyncMirror";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnhancedPlayerMappableKeyProfile
    {
        static constexpr std::string_view Name = "EnhancedPlayerMappableKeyProfile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileIdentifier = 0x28;
            static constexpr std::uintptr_t ProfileIdentifierString = 0x30;
            static constexpr std::uintptr_t OwningUserId = 0x40;
            static constexpr std::uintptr_t DisplayName = 0x48;
            static constexpr std::uintptr_t PlayerMappedKeys = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProfileIdentifier", 0x28, "StructProperty"},
            {"ProfileIdentifierString", 0x30, "StrProperty"},
            {"OwningUserId", 0x40, "StructProperty"},
            {"DisplayName", 0x48, "TextProperty"},
            {"PlayerMappedKeys", 0x58, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "DoesMappingPassQueryOptions",
            "DumpProfileToLog",
            "GetMappedKeysInRow",
            "GetMappingNamesForKey",
            "GetPlayerMappingRows",
            "GetProfileDisplayName",
            "GetProfileIdString",
            "K2_FindKeyMapping",
            "QueryPlayerMappedKeys",
            "ResetMappingToDefault",
            "ResetToDefault",
            "SetDisplayName",
            "ToString",
        }};
    };

    struct InjectedInput
    {
        static constexpr std::string_view Name = "InjectedInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Triggers = 0x20;
            static constexpr std::uintptr_t Modifiers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Triggers", 0x20, "ArrayProperty"},
            {"Modifiers", 0x30, "ArrayProperty"},
        }};
    };

    struct InjectedInputArray
    {
        static constexpr std::string_view Name = "InjectedInputArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Injected = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Injected", 0x0, "ArrayProperty"},
        }};
    };

    struct InputAction
    {
        static constexpr std::string_view Name = "InputAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionDescription = 0x28;
            static constexpr std::uintptr_t bTriggerWhenPaused = 0x38;
            static constexpr std::uintptr_t bConsumeInput = 0x39;
            static constexpr std::uintptr_t bConsumesActionAndAxisMappings = 0x3A;
            static constexpr std::uintptr_t bReserveAllMappings = 0x3B;
            static constexpr std::uintptr_t TriggerEventsThatConsumeLegacyKeys = 0x3C;
            static constexpr std::uintptr_t ValueType = 0x40;
            static constexpr std::uintptr_t AccumulationBehavior = 0x41;
            static constexpr std::uintptr_t Triggers = 0x48;
            static constexpr std::uintptr_t Modifiers = 0x58;
            static constexpr std::uintptr_t PlayerMappableKeySettings = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ActionDescription", 0x28, "TextProperty"},
            {"bTriggerWhenPaused", 0x38, "BoolProperty"},
            {"bConsumeInput", 0x39, "BoolProperty"},
            {"bConsumesActionAndAxisMappings", 0x3A, "BoolProperty"},
            {"bReserveAllMappings", 0x3B, "BoolProperty"},
            {"TriggerEventsThatConsumeLegacyKeys", 0x3C, "IntProperty"},
            {"ValueType", 0x40, "EnumProperty"},
            {"AccumulationBehavior", 0x41, "EnumProperty"},
            {"Triggers", 0x48, "ArrayProperty"},
            {"Modifiers", 0x58, "ArrayProperty"},
            {"PlayerMappableKeySettings", 0x68, "ObjectProperty"},
        }};
    };

    struct InputActionInstance
    {
        static constexpr std::string_view Name = "InputActionInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAction = 0x0;
            static constexpr std::uintptr_t TriggerEvent = 0x13;
            static constexpr std::uintptr_t LastTriggeredWorldTime = 0x14;
            static constexpr std::uintptr_t Triggers = 0x18;
            static constexpr std::uintptr_t Modifiers = 0x28;
            static constexpr std::uintptr_t ElapsedProcessedTime = 0x58;
            static constexpr std::uintptr_t ElapsedTriggeredTime = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourceAction", 0x0, "ObjectProperty"},
            {"TriggerEvent", 0x13, "EnumProperty"},
            {"LastTriggeredWorldTime", 0x14, "FloatProperty"},
            {"Triggers", 0x18, "ArrayProperty"},
            {"Modifiers", 0x28, "ArrayProperty"},
            {"ElapsedProcessedTime", 0x58, "FloatProperty"},
            {"ElapsedTriggeredTime", 0x5C, "FloatProperty"},
        }};
    };

    struct InputActionValue
    {
        static constexpr std::string_view Name = "InputActionValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputCancelAction
    {
        static constexpr std::string_view Name = "InputCancelAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CancelAction = 0x0;
            static constexpr std::uintptr_t CancellationStates = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CancelAction", 0x0, "ObjectProperty"},
            {"CancellationStates", 0x8, "ByteProperty"},
        }};
    };

    struct InputComboStepData
    {
        static constexpr std::string_view Name = "InputComboStepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComboStepAction = 0x0;
            static constexpr std::uintptr_t ComboStepCompletionStates = 0x8;
            static constexpr std::uintptr_t TimeToPressKey = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComboStepAction", 0x0, "ObjectProperty"},
            {"ComboStepCompletionStates", 0x8, "ByteProperty"},
            {"TimeToPressKey", 0xC, "FloatProperty"},
        }};
    };

    struct InputDebugKeyDelegateBinding
    {
        static constexpr std::string_view Name = "InputDebugKeyDelegateBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputDelegateBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t InputDebugKeyDelegateBindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputDebugKeyDelegateBindings", 0x28, "ArrayProperty"},
        }};
    };

    struct InputMappingContext
    {
        static constexpr std::string_view Name = "InputMappingContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Mappings = 0x28;
            static constexpr std::uintptr_t DefaultKeyMappings = 0x38;
            static constexpr std::uintptr_t MappingProfileOverrides = 0x48;
            static constexpr std::uintptr_t InputModeFilterOptions = 0x58;
            static constexpr std::uintptr_t InputModeQueryOverride = 0x60;
            static constexpr std::uintptr_t RegistrationTrackingMode = 0xA8;
            static constexpr std::uintptr_t ContextDescription = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Mappings", 0x28, "ArrayProperty"},
            {"DefaultKeyMappings", 0x38, "StructProperty"},
            {"MappingProfileOverrides", 0x48, "MapProperty"},
            {"InputModeFilterOptions", 0x58, "EnumProperty"},
            {"InputModeQueryOverride", 0x60, "StructProperty"},
            {"RegistrationTrackingMode", 0xA8, "EnumProperty"},
            {"ContextDescription", 0xB0, "TextProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "MapKey",
            "ShouldShowInputModeQuery",
            "UnmapAll",
            "UnmapAllKeysFromAction",
            "UnmapKey",
        }};
    };

    struct InputMappingContextMappingData
    {
        static constexpr std::string_view Name = "InputMappingContextMappingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mappings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mappings", 0x0, "ArrayProperty"},
        }};
    };

    struct InputModifier
    {
        static constexpr std::string_view Name = "InputModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetVisualizationColor",
            "ModifyRaw",
            "ReceiveModifierReinstanced",
        }};
    };

    struct InputModifierDeadZone
    {
        static constexpr std::string_view Name = "InputModifierDeadZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerThreshold = 0x28;
            static constexpr std::uintptr_t UpperThreshold = 0x2C;
            static constexpr std::uintptr_t Type = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerThreshold", 0x28, "FloatProperty"},
            {"UpperThreshold", 0x2C, "FloatProperty"},
            {"Type", 0x30, "EnumProperty"},
        }};
    };

    struct InputModifierFOVScaling
    {
        static constexpr std::string_view Name = "InputModifierFOVScaling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t FOVScale = 0x28;
            static constexpr std::uintptr_t FOVScalingType = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FOVScale", 0x28, "FloatProperty"},
            {"FOVScalingType", 0x2C, "EnumProperty"},
        }};
    };

    struct InputModifierNegate
    {
        static constexpr std::string_view Name = "InputModifierNegate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bX = 0x28;
            static constexpr std::uintptr_t bY = 0x29;
            static constexpr std::uintptr_t bZ = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bX", 0x28, "BoolProperty"},
            {"bY", 0x29, "BoolProperty"},
            {"bZ", 0x2A, "BoolProperty"},
        }};
    };

    struct InputModifierResponseCurveExponential
    {
        static constexpr std::string_view Name = "InputModifierResponseCurveExponential";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveExponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurveExponent", 0x28, "StructProperty"},
        }};
    };

    struct InputModifierResponseCurveUser
    {
        static constexpr std::string_view Name = "InputModifierResponseCurveUser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t ResponseX = 0x28;
            static constexpr std::uintptr_t ResponseY = 0x30;
            static constexpr std::uintptr_t ResponseZ = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResponseX", 0x28, "ObjectProperty"},
            {"ResponseY", 0x30, "ObjectProperty"},
            {"ResponseZ", 0x38, "ObjectProperty"},
        }};
    };

    struct InputModifierScalar
    {
        static constexpr std::string_view Name = "InputModifierScalar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Scalar = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scalar", 0x28, "StructProperty"},
        }};
    };

    struct InputModifierScaleByDeltaTime
    {
        static constexpr std::string_view Name = "InputModifierScaleByDeltaTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputModifierSmooth
    {
        static constexpr std::string_view Name = "InputModifierSmooth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputModifierSmoothDelta
    {
        static constexpr std::string_view Name = "InputModifierSmoothDelta";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothingMethod = 0x28;
            static constexpr std::uintptr_t Speed = 0x2C;
            static constexpr std::uintptr_t EasingExponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SmoothingMethod", 0x28, "EnumProperty"},
            {"Speed", 0x2C, "FloatProperty"},
            {"EasingExponent", 0x30, "FloatProperty"},
        }};
    };

    struct InputModifierSwizzleAxis
    {
        static constexpr std::string_view Name = "InputModifierSwizzleAxis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Order = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Order", 0x28, "EnumProperty"},
        }};
    };

    struct InputModifierToWorldSpace
    {
        static constexpr std::string_view Name = "InputModifierToWorldSpace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputTrigger
    {
        static constexpr std::string_view Name = "InputTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActuationThreshold = 0x28;
            static constexpr std::uintptr_t bShouldAlwaysTick = 0x2C;
            static constexpr std::uintptr_t LastValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActuationThreshold", 0x28, "FloatProperty"},
            {"bShouldAlwaysTick", 0x2C, "BoolProperty"},
            {"LastValue", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetTriggerType",
            "IsActuated",
            "ReceiveTriggerReinstanced",
            "UpdateState",
        }};
    };

    struct InputTriggerChordAction
    {
        static constexpr std::string_view Name = "InputTriggerChordAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t ChordAction = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChordAction", 0x50, "ObjectProperty"},
        }};
    };

    struct InputTriggerChordBlocker
    {
        static constexpr std::string_view Name = "InputTriggerChordBlocker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerChordAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ChordAction = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChordAction", 0x50, "ObjectProperty"},
        }};
    };

    struct InputTriggerCombo
    {
        static constexpr std::string_view Name = "InputTriggerCombo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentComboStepIndex = 0x50;
            static constexpr std::uintptr_t CurrentTimeBetweenComboSteps = 0x54;
            static constexpr std::uintptr_t ComboActions = 0x58;
            static constexpr std::uintptr_t InputCancelActions = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentComboStepIndex", 0x50, "IntProperty"},
            {"CurrentTimeBetweenComboSteps", 0x54, "FloatProperty"},
            {"ComboActions", 0x58, "ArrayProperty"},
            {"InputCancelActions", 0x68, "ArrayProperty"},
        }};
    };

    struct InputTriggerDown
    {
        static constexpr std::string_view Name = "InputTriggerDown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t ActuationThreshold = 0x28;
            static constexpr std::uintptr_t bShouldAlwaysTick = 0x2C;
            static constexpr std::uintptr_t LastValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActuationThreshold", 0x28, "FloatProperty"},
            {"bShouldAlwaysTick", 0x2C, "BoolProperty"},
            {"LastValue", 0x30, "StructProperty"},
        }};
    };

    struct InputTriggerHold
    {
        static constexpr std::string_view Name = "InputTriggerHold";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerTimedBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldTimeThreshold = 0x5C;
            static constexpr std::uintptr_t bIsOneShot = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HoldTimeThreshold", 0x5C, "FloatProperty"},
            {"bIsOneShot", 0x60, "BoolProperty"},
        }};
    };

    struct InputTriggerHoldAndRelease
    {
        static constexpr std::string_view Name = "InputTriggerHoldAndRelease";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerTimedBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldTimeThreshold = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HoldTimeThreshold", 0x58, "FloatProperty"},
        }};
    };

    struct InputTriggerPressed
    {
        static constexpr std::string_view Name = "InputTriggerPressed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t ActuationThreshold = 0x28;
            static constexpr std::uintptr_t bShouldAlwaysTick = 0x2C;
            static constexpr std::uintptr_t LastValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActuationThreshold", 0x28, "FloatProperty"},
            {"bShouldAlwaysTick", 0x2C, "BoolProperty"},
            {"LastValue", 0x30, "StructProperty"},
        }};
    };

    struct InputTriggerPulse
    {
        static constexpr std::string_view Name = "InputTriggerPulse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerTimedBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTriggerOnStart = 0x5C;
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t TriggerLimit = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTriggerOnStart", 0x5C, "BoolProperty"},
            {"Interval", 0x60, "FloatProperty"},
            {"TriggerLimit", 0x64, "IntProperty"},
        }};
    };

    struct InputTriggerReleased
    {
        static constexpr std::string_view Name = "InputTriggerReleased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t ActuationThreshold = 0x28;
            static constexpr std::uintptr_t bShouldAlwaysTick = 0x2C;
            static constexpr std::uintptr_t LastValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActuationThreshold", 0x28, "FloatProperty"},
            {"bShouldAlwaysTick", 0x2C, "BoolProperty"},
            {"LastValue", 0x30, "StructProperty"},
        }};
    };

    struct InputTriggerRepeatedTap
    {
        static constexpr std::string_view Name = "InputTriggerRepeatedTap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerTimedBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RepeatDelay = 0x58;
            static constexpr std::uintptr_t NumberOfTapsWhichTriggerRepeat = 0x60;
            static constexpr std::uintptr_t TapReleaseTimeThreshold = 0x64;
            static constexpr std::uintptr_t RepeatTime = 0x68;
            static constexpr std::uintptr_t NumberOfTapsSinceLastTrigger = 0x70;
            static constexpr std::uintptr_t bAwaitingRepeatTap = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RepeatDelay", 0x58, "DoubleProperty"},
            {"NumberOfTapsWhichTriggerRepeat", 0x60, "IntProperty"},
            {"TapReleaseTimeThreshold", 0x64, "FloatProperty"},
            {"RepeatTime", 0x68, "DoubleProperty"},
            {"NumberOfTapsSinceLastTrigger", 0x70, "IntProperty"},
            {"bAwaitingRepeatTap", 0x74, "BoolProperty"},
        }};
    };

    struct InputTriggerTap
    {
        static constexpr std::string_view Name = "InputTriggerTap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTriggerTimedBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TapReleaseTimeThreshold = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TapReleaseTimeThreshold", 0x58, "FloatProperty"},
        }};
    };

    struct InputTriggerTimedBase
    {
        static constexpr std::string_view Name = "InputTriggerTimedBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t HeldDuration = 0x50;
            static constexpr std::uintptr_t bAffectedByTimeDilation = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HeldDuration", 0x50, "FloatProperty"},
            {"bAffectedByTimeDilation", 0x54, "BoolProperty"},
        }};
    };

    struct KeyConsumptionOptions
    {
        static constexpr std::string_view Name = "KeyConsumptionOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyMappingRow
    {
        static constexpr std::string_view Name = "KeyMappingRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mappings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mappings", 0x0, "SetProperty"},
        }};
    };

    struct MapPlayerKeyArgs
    {
        static constexpr std::string_view Name = "MapPlayerKeyArgs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingName = 0x0;
            static constexpr std::uintptr_t Slot = 0x4;
            static constexpr std::uintptr_t NewKey = 0x8;
            static constexpr std::uintptr_t HardwareDeviceId = 0x20;
            static constexpr std::uintptr_t ProfileId = 0x24;
            static constexpr std::uintptr_t ProfileIdString = 0x28;
            static constexpr std::uintptr_t bCreateMatchingSlotIfNeeded = 0x38;
            static constexpr std::uintptr_t bDeferOnSettingsChangedBroadcast = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MappingName", 0x0, "NameProperty"},
            {"Slot", 0x4, "EnumProperty"},
            {"NewKey", 0x8, "StructProperty"},
            {"HardwareDeviceId", 0x20, "NameProperty"},
            {"ProfileId", 0x24, "StructProperty"},
            {"ProfileIdString", 0x28, "StrProperty"},
            {"bCreateMatchingSlotIfNeeded", 0x38, "BoolProperty"},
            {"bDeferOnSettingsChangedBroadcast", 0x38, "BoolProperty"},
        }};
    };

    struct MappingQueryIssue
    {
        static constexpr std::string_view Name = "MappingQueryIssue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Issue = 0x0;
            static constexpr std::uintptr_t BlockingContext = 0x8;
            static constexpr std::uintptr_t BlockingAction = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Issue", 0x0, "EnumProperty"},
            {"BlockingContext", 0x8, "ObjectProperty"},
            {"BlockingAction", 0x10, "ObjectProperty"},
        }};
    };

    struct ModifyContextOptions
    {
        static constexpr std::string_view Name = "ModifyContextOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceImmediately = 0x0;
            static constexpr std::uintptr_t bIgnoreAllPressedKeysUntilRelease = 0x0;
            static constexpr std::uintptr_t bNotifyUserSettings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bForceImmediately", 0x0, "BoolProperty"},
            {"bIgnoreAllPressedKeysUntilRelease", 0x0, "BoolProperty"},
            {"bNotifyUserSettings", 0x0, "BoolProperty"},
        }};
    };

    struct PlayerKeyMapping
    {
        static constexpr std::string_view Name = "PlayerKeyMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingName = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t DisplayCategory = 0x18;
            static constexpr std::uintptr_t Slot = 0x28;
            static constexpr std::uintptr_t bIsDirty = 0x29;
            static constexpr std::uintptr_t DefaultKey = 0x30;
            static constexpr std::uintptr_t CurrentKey = 0x48;
            static constexpr std::uintptr_t HardwareDeviceId = 0x60;
            static constexpr std::uintptr_t AssociatedInputAction = 0x70;
            static constexpr std::uintptr_t AssociatedInputActionSoft = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MappingName", 0x0, "NameProperty"},
            {"DisplayName", 0x8, "TextProperty"},
            {"DisplayCategory", 0x18, "TextProperty"},
            {"Slot", 0x28, "EnumProperty"},
            {"bIsDirty", 0x29, "BoolProperty"},
            {"DefaultKey", 0x30, "StructProperty"},
            {"CurrentKey", 0x48, "StructProperty"},
            {"HardwareDeviceId", 0x60, "StructProperty"},
            {"AssociatedInputAction", 0x70, "ObjectProperty"},
            {"AssociatedInputActionSoft", 0x78, "SoftObjectProperty"},
        }};
    };

    struct PlayerMappableInputConfig
    {
        static constexpr std::string_view Name = "PlayerMappableInputConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigName = 0x28;
            static constexpr std::uintptr_t ConfigDisplayName = 0x30;
            static constexpr std::uintptr_t bIsDeprecated = 0x40;
            static constexpr std::uintptr_t MetaData = 0x48;
            static constexpr std::uintptr_t Contexts = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ConfigName", 0x28, "NameProperty"},
            {"ConfigDisplayName", 0x30, "TextProperty"},
            {"bIsDeprecated", 0x40, "BoolProperty"},
            {"MetaData", 0x48, "ObjectProperty"},
            {"Contexts", 0x50, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GetConfigName",
            "GetDisplayName",
            "GetKeysBoundToAction",
            "GetMappingByName",
            "GetMappingContexts",
            "GetMetadata",
            "GetPlayerMappableKeys",
            "IsDeprecated",
            "ResetToDefault",
        }};
    };

    struct PlayerMappableKeyProfileCreationArgs
    {
        static constexpr std::string_view Name = "PlayerMappableKeyProfileCreationArgs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileType = 0x0;
            static constexpr std::uintptr_t ProfileIdentifier = 0x8;
            static constexpr std::uintptr_t ProfileStringIdentifier = 0x10;
            static constexpr std::uintptr_t UserId = 0x20;
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t bSetAsCurrentProfile = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProfileType", 0x0, "ClassProperty"},
            {"ProfileIdentifier", 0x8, "StructProperty"},
            {"ProfileStringIdentifier", 0x10, "StrProperty"},
            {"UserId", 0x20, "StructProperty"},
            {"DisplayName", 0x28, "TextProperty"},
            {"bSetAsCurrentProfile", 0x38, "BoolProperty"},
        }};
    };

    struct PlayerMappableKeyQueryOptions
    {
        static constexpr std::string_view Name = "PlayerMappableKeyQueryOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingName = 0x0;
            static constexpr std::uintptr_t KeyToMatch = 0x8;
            static constexpr std::uintptr_t SlotToMatch = 0x20;
            static constexpr std::uintptr_t bMatchBasicKeyTypes = 0x21;
            static constexpr std::uintptr_t bMatchKeyAxisType = 0x21;
            static constexpr std::uintptr_t RequiredDeviceType = 0x22;
            static constexpr std::uintptr_t RequiredDeviceFlags = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MappingName", 0x0, "NameProperty"},
            {"KeyToMatch", 0x8, "StructProperty"},
            {"SlotToMatch", 0x20, "EnumProperty"},
            {"bMatchBasicKeyTypes", 0x21, "BoolProperty"},
            {"bMatchKeyAxisType", 0x21, "BoolProperty"},
            {"RequiredDeviceType", 0x22, "EnumProperty"},
            {"RequiredDeviceFlags", 0x24, "IntProperty"},
        }};
    };

    struct PlayerMappableKeySettings
    {
        static constexpr std::string_view Name = "PlayerMappableKeySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x28;
            static constexpr std::uintptr_t Name = 0x30;
            static constexpr std::uintptr_t DisplayName = 0x38;
            static constexpr std::uintptr_t DisplayCategory = 0x48;
            static constexpr std::uintptr_t SupportedKeyProfiles = 0x58;
            static constexpr std::uintptr_t SupportedKeyProfileIds = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MetaData", 0x28, "ObjectProperty"},
            {"Name", 0x30, "NameProperty"},
            {"DisplayName", 0x38, "TextProperty"},
            {"DisplayCategory", 0x48, "TextProperty"},
            {"SupportedKeyProfiles", 0x58, "StructProperty"},
            {"SupportedKeyProfileIds", 0x78, "ArrayProperty"},
        }};
    };

}

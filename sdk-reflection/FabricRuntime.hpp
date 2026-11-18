#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricRuntime
{
    struct FabricAnimatableButtonInterface
    {
        static constexpr std::string_view Name = "FabricAnimatableButtonInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricAudioBridgeComponent
    {
        static constexpr std::string_view Name = "FabricAudioBridgeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FabricAudioPatchWrapperClass = 0xD8;
            static constexpr std::uintptr_t FabricAudioPatchWrapperInstance = 0xE0;
            static constexpr std::uintptr_t FabricMetaSoundManager = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FabricAudioPatchWrapperClass", 0xD8, "ClassProperty"},
            {"FabricAudioPatchWrapperInstance", 0xE0, "ObjectProperty"},
            {"FabricMetaSoundManager", 0xE8, "WeakObjectProperty"},
        }};
    };

    struct FabricAudioGenerator
    {
        static constexpr std::string_view Name = "FabricAudioGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricAudioModifier
    {
        static constexpr std::string_view Name = "FabricAudioModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricAudioReceiver
    {
        static constexpr std::string_view Name = "FabricAudioReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricButtonBase
    {
        static constexpr std::string_view Name = "FabricButtonBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ToggleStateChanged = 0x290;
            static constexpr std::uintptr_t OpenTimeSeconds = 0x2A0;
            static constexpr std::uintptr_t CloseTimeSeconds = 0x2A8;
            static constexpr std::uintptr_t bHasToggle = 0x2B0;
            static constexpr std::uintptr_t ClickMethod = 0x2B1;
            static constexpr std::uintptr_t InteractingController = 0x2B8;
            static constexpr std::uintptr_t ButtonId = 0x2C0;
            static constexpr std::uintptr_t ButtonLabel = 0x2D0;
            static constexpr std::uintptr_t ButtonDescription = 0x2E0;
            static constexpr std::uintptr_t GameplayTags = 0x2F0;
            static constexpr std::uintptr_t bEnabled = 0x310;
            static constexpr std::uintptr_t bHovered = 0x311;
            static constexpr std::uintptr_t bPressed = 0x312;
            static constexpr std::uintptr_t ToggleState = 0x313;
            static constexpr std::uintptr_t WidgetViewModel = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ToggleStateChanged", 0x290, "MulticastInlineDelegateProperty"},
            {"OpenTimeSeconds", 0x2A0, "DoubleProperty"},
            {"CloseTimeSeconds", 0x2A8, "DoubleProperty"},
            {"bHasToggle", 0x2B0, "BoolProperty"},
            {"ClickMethod", 0x2B1, "ByteProperty"},
            {"InteractingController", 0x2B8, "ObjectProperty"},
            {"ButtonId", 0x2C0, "StrProperty"},
            {"ButtonLabel", 0x2D0, "TextProperty"},
            {"ButtonDescription", 0x2E0, "TextProperty"},
            {"GameplayTags", 0x2F0, "StructProperty"},
            {"bEnabled", 0x310, "BoolProperty"},
            {"bHovered", 0x311, "BoolProperty"},
            {"bPressed", 0x312, "BoolProperty"},
            {"ToggleState", 0x313, "EnumProperty"},
            {"WidgetViewModel", 0x318, "ObjectProperty"},
        }};
    };

    struct FabricButtonComponentBase
    {
        static constexpr std::string_view Name = "FabricButtonComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ToggleStateChanged = 0x6B0;
            static constexpr std::uintptr_t OpenTimeSeconds = 0x6C0;
            static constexpr std::uintptr_t CloseTimeSeconds = 0x6C8;
            static constexpr std::uintptr_t bHasToggle = 0x6D0;
            static constexpr std::uintptr_t ClickMethod = 0x6D1;
            static constexpr std::uintptr_t InteractingController = 0x6D8;
            static constexpr std::uintptr_t ButtonId = 0x6E0;
            static constexpr std::uintptr_t ButtonLabel = 0x6F0;
            static constexpr std::uintptr_t ButtonDescription = 0x700;
            static constexpr std::uintptr_t GameplayTags = 0x710;
            static constexpr std::uintptr_t bUseScreenGrid = 0x730;
            static constexpr std::uintptr_t ScreenGridPosition = 0x738;
            static constexpr std::uintptr_t bEnabled = 0x748;
            static constexpr std::uintptr_t bHovered = 0x749;
            static constexpr std::uintptr_t bPressed = 0x74A;
            static constexpr std::uintptr_t ToggleState = 0x74B;
            static constexpr std::uintptr_t WidgetViewModel = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ToggleStateChanged", 0x6B0, "MulticastInlineDelegateProperty"},
            {"OpenTimeSeconds", 0x6C0, "DoubleProperty"},
            {"CloseTimeSeconds", 0x6C8, "DoubleProperty"},
            {"bHasToggle", 0x6D0, "BoolProperty"},
            {"ClickMethod", 0x6D1, "ByteProperty"},
            {"InteractingController", 0x6D8, "ObjectProperty"},
            {"ButtonId", 0x6E0, "StrProperty"},
            {"ButtonLabel", 0x6F0, "TextProperty"},
            {"ButtonDescription", 0x700, "TextProperty"},
            {"GameplayTags", 0x710, "StructProperty"},
            {"bUseScreenGrid", 0x730, "BoolProperty"},
            {"ScreenGridPosition", 0x738, "StructProperty"},
            {"bEnabled", 0x748, "BoolProperty"},
            {"bHovered", 0x749, "BoolProperty"},
            {"bPressed", 0x74A, "BoolProperty"},
            {"ToggleState", 0x74B, "EnumProperty"},
            {"WidgetViewModel", 0x750, "ObjectProperty"},
        }};
    };

    struct FabricDevice
    {
        static constexpr std::string_view Name = "FabricDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricDeviceCustomInteractionManager
    {
        static constexpr std::string_view Name = "FabricDeviceCustomInteractionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMPlayerMonitorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomInteractionComponentClass = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomInteractionComponentClass", 0x150, "ClassProperty"},
        }};
    };

    struct FabricFloatGenerator
    {
        static constexpr std::string_view Name = "FabricFloatGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricFloatProviderBase
    {
        static constexpr std::string_view Name = "FabricFloatProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFloatChanged = 0xF0;
            static constexpr std::uintptr_t OnTransitionFloatChanged = 0x100;
            static constexpr std::uintptr_t OnFloatProviderEnabledChanged = 0x110;
            static constexpr std::uintptr_t CurrentFloat = 0x120;
            static constexpr std::uintptr_t MusicClock = 0x124;
            static constexpr std::uintptr_t AssociatedPatchWrapper = 0x130;
            static constexpr std::uintptr_t EnabledParam = 0x138;
            static constexpr std::uintptr_t bAlwaysModulates = 0x148;
            static constexpr std::uintptr_t bBindBlueprintOnFloatChanged = 0x149;
            static constexpr std::uintptr_t bIsEnabled = 0x14A;
            static constexpr std::uintptr_t bModulatorValueChanged = 0x14B;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnFloatChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnTransitionFloatChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"OnFloatProviderEnabledChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"CurrentFloat", 0x120, "FloatProperty"},
            {"MusicClock", 0x124, "WeakObjectProperty"},
            {"AssociatedPatchWrapper", 0x130, "ObjectProperty"},
            {"EnabledParam", 0x138, "StrProperty"},
            {"bAlwaysModulates", 0x148, "BoolProperty"},
            {"bBindBlueprintOnFloatChanged", 0x149, "BoolProperty"},
            {"bIsEnabled", 0x14A, "BoolProperty"},
            {"bModulatorValueChanged", 0x14B, "BoolProperty"},
        }};
    };

    struct FabricFloatProviderStep
    {
        static constexpr std::string_view Name = "FabricFloatProviderStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricFloatProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StepRateParam = 0x150;
            static constexpr std::uintptr_t ActiveStepsParam = 0x160;
            static constexpr std::uintptr_t StepParamBase = 0x180;
            static constexpr std::uintptr_t MaxSteps = 0x190;
            static constexpr std::uintptr_t RuntimeGenerator = 0x198;
            static constexpr std::uintptr_t OnFloatProviderStepInitialized = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StepRateParam", 0x150, "StrProperty"},
            {"ActiveStepsParam", 0x160, "StrProperty"},
            {"StepParamBase", 0x180, "StrProperty"},
            {"MaxSteps", 0x190, "IntProperty"},
            {"RuntimeGenerator", 0x198, "StructProperty"},
            {"OnFloatProviderStepInitialized", 0x1B8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FabricFloatProviderValueSetter
    {
        static constexpr std::string_view Name = "FabricFloatProviderValueSetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricFloatProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueParam = 0x150;
            static constexpr std::uintptr_t TransitionTimingParam = 0x160;
            static constexpr std::uintptr_t BlendParam = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ValueParam", 0x150, "StrProperty"},
            {"TransitionTimingParam", 0x160, "StrProperty"},
            {"BlendParam", 0x170, "StrProperty"},
        }};
    };

    struct FabricFloatProviderWave
    {
        static constexpr std::string_view Name = "FabricFloatProviderWave";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricFloatProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WaveShapeParam = 0x150;
            static constexpr std::uintptr_t FreeHzParam = 0x160;
            static constexpr std::uintptr_t MinParam = 0x170;
            static constexpr std::uintptr_t MaxParam = 0x180;
            static constexpr std::uintptr_t BeatDurationParam = 0x190;
            static constexpr std::uintptr_t BeatOffsetParam = 0x1A0;
            static constexpr std::uintptr_t ShapeParam = 0x1B0;
            static constexpr std::uintptr_t StyleParam = 0x1C0;
            static constexpr std::uintptr_t PhaseCPDIndex = 0x1D0;
            static constexpr std::uintptr_t ValueCPDIndex = 0x1D4;
            static constexpr std::uintptr_t PreviewDisplayMeshes = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"WaveShapeParam", 0x150, "StrProperty"},
            {"FreeHzParam", 0x160, "StrProperty"},
            {"MinParam", 0x170, "StrProperty"},
            {"MaxParam", 0x180, "StrProperty"},
            {"BeatDurationParam", 0x190, "StrProperty"},
            {"BeatOffsetParam", 0x1A0, "StrProperty"},
            {"ShapeParam", 0x1B0, "StrProperty"},
            {"StyleParam", 0x1C0, "StrProperty"},
            {"PhaseCPDIndex", 0x1D0, "IntProperty"},
            {"ValueCPDIndex", 0x1D4, "IntProperty"},
            {"PreviewDisplayMeshes", 0x258, "SetProperty"},
        }};
    };

    struct FabricFloatReceiver
    {
        static constexpr std::string_view Name = "FabricFloatReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricGameFeatureAction_OverrideFabricInteractionTool
    {
        static constexpr std::string_view Name = "FabricGameFeatureAction_OverrideFabricInteractionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OverriddenPatchworkInteractionTool = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverriddenPatchworkInteractionTool", 0x28, "SoftObjectProperty"},
        }};
    };

    struct FabricGlobalRestrictionsWorldSubsystem
    {
        static constexpr std::string_view Name = "FabricGlobalRestrictionsWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t FabricInteractionToolRestrictionGameplayTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FabricInteractionToolRestrictionGameplayTags", 0x38, "StructProperty"},
        }};
    };

    struct FabricHoldable
    {
        static constexpr std::string_view Name = "FabricHoldable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricIndicatorComponent
    {
        static constexpr std::string_view Name = "FabricIndicatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEnabledStateChanged = 0xC0;
            static constexpr std::uintptr_t FabricTooltipWidgetType = 0xD0;
            static constexpr std::uintptr_t TargetsChangedTag = 0xD8;
            static constexpr std::uintptr_t HUDTagsToHide = 0xE0;
            static constexpr std::uintptr_t IndicatorShowingInputContext = 0x100;
            static constexpr std::uintptr_t IndicatorShowingPriority = 0x108;
            static constexpr std::uintptr_t ShowMoreAction = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnEnabledStateChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"FabricTooltipWidgetType", 0xD0, "ClassProperty"},
            {"TargetsChangedTag", 0xD8, "StructProperty"},
            {"HUDTagsToHide", 0xE0, "StructProperty"},
            {"IndicatorShowingInputContext", 0x100, "ObjectProperty"},
            {"IndicatorShowingPriority", 0x108, "IntProperty"},
            {"ShowMoreAction", 0x110, "ObjectProperty"},
        }};
    };

    struct FabricInteractable
    {
        static constexpr std::string_view Name = "FabricInteractable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricInteractableControllerComponent
    {
        static constexpr std::string_view Name = "FabricInteractableControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNoInteractablesHit = 0xC8;
            static constexpr std::uintptr_t PlayerController = 0xD8;
            static constexpr std::uintptr_t FabricInteractionToolItemDefSoftPtr = 0xE0;
            static constexpr std::uintptr_t OverriddenFabricInteractionToolItemDefSoftPtr = 0x100;
            static constexpr std::uintptr_t FabricInteractionToolItemDef = 0x120;
            static constexpr std::uintptr_t EnsurePlayerHasInteractionToolRetryDelay = 0x128;
            static constexpr std::uintptr_t SoftFabricDeviceBaseClass = 0x148;
            static constexpr std::uintptr_t StreamingMusicGameplayTags = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnNoInteractablesHit", 0xC8, "MulticastInlineDelegateProperty"},
            {"PlayerController", 0xD8, "ObjectProperty"},
            {"FabricInteractionToolItemDefSoftPtr", 0xE0, "SoftObjectProperty"},
            {"OverriddenFabricInteractionToolItemDefSoftPtr", 0x100, "SoftObjectProperty"},
            {"FabricInteractionToolItemDef", 0x120, "ObjectProperty"},
            {"EnsurePlayerHasInteractionToolRetryDelay", 0x128, "FloatProperty"},
            {"SoftFabricDeviceBaseClass", 0x148, "SoftClassProperty"},
            {"StreamingMusicGameplayTags", 0x168, "StructProperty"},
        }};
    };

    struct FabricInteractablePlayspaceComponent
    {
        static constexpr std::string_view Name = "FabricInteractablePlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct FabricInteractableTargetPayload
    {
        static constexpr std::string_view Name = "FabricInteractableTargetPayload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetedActor = 0x28;
            static constexpr std::uintptr_t TargetedComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetedActor", 0x28, "WeakObjectProperty"},
            {"TargetedComponent", 0x30, "WeakObjectProperty"},
        }};
    };

    struct FabricInteractionTool
    {
        static constexpr std::string_view Name = "FabricInteractionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInteractionStateChanged = 0x2A98;
            static constexpr std::uintptr_t OnCablesGrabbed = 0x2AA8;
            static constexpr std::uintptr_t OnCablesDropped = 0x2AB8;
            static constexpr std::uintptr_t OnMetasoundGeneratorCrossfadeStarted = 0x2AC8;
            static constexpr std::uintptr_t OnZoomLevelChanged = 0x2AD8;
            static constexpr std::uintptr_t FITSplineMeshComponentClass = 0x2AE8;
            static constexpr std::uintptr_t SplineComponent = 0x2AF0;
            static constexpr std::uintptr_t SplineMeshComponentArray = 0x2AF8;
            static constexpr std::uintptr_t SplineMeshMaterialInstance = 0x2B08;
            static constexpr std::uintptr_t MaxRange = 0x2B10;
            static constexpr std::uintptr_t MinDragAndDropTriggerTime = 0x2B14;
            static constexpr std::uintptr_t FiringRate = 0x2B18;
            static constexpr std::uintptr_t WipeAnim = 0x2B1C;
            static constexpr std::uintptr_t UseWipe = 0x2B20;
            static constexpr std::uintptr_t SplineMeshMaterialIndex = 0x2B24;
            static constexpr std::uintptr_t CPDUVScale = 0x2B28;
            static constexpr std::uintptr_t CPDUVPosition = 0x2B2C;
            static constexpr std::uintptr_t CPDWipeAnim = 0x2B30;
            static constexpr std::uintptr_t CPDUseWipe = 0x2B34;
            static constexpr std::uintptr_t CPDIndex_DeviceType = 0x2B38;
            static constexpr std::uintptr_t SplineSectionLength = 0x2B3C;
            static constexpr std::uintptr_t MaxSplineSpawnedInAFrame = 0x2B40;
            static constexpr std::uintptr_t DeviceTypeValue = 0x2B44;
            static constexpr std::uintptr_t FITTargetingAudioPitchMultiplier = 0x2B48;
            static constexpr std::uintptr_t FITZoomAudioPitchMultiplier = 0x2B4C;
            static constexpr std::uintptr_t SplineEndForwardMultiplier = 0x2B50;
            static constexpr std::uintptr_t SplineStartForwardMultiplier = 0x2B54;
            static constexpr std::uintptr_t HoveredInteractable = 0x2B58;
            static constexpr std::uintptr_t HoveredInteractableHitComponent = 0x2B60;
            static constexpr std::uintptr_t PressedInteractable = 0x2B68;
            static constexpr std::uintptr_t LastPressedInteractable = 0x2B70;
            static constexpr std::uintptr_t PressedInteractableHitComponent = 0x2B78;
            static constexpr std::uintptr_t InteractableOwnerDevice = 0x2B80;
            static constexpr std::uintptr_t AccumulatedDragAndDropTriggerTime = 0x2B88;
            static constexpr std::uintptr_t ServerInteractionData = 0x2B8C;
            static constexpr std::uintptr_t bServerTriggerPressed = 0x2BA9;
            static constexpr std::uintptr_t bServerIsHoldingCable = 0x2BAB;
            static constexpr std::uintptr_t ServerSplinePoints = 0x2BC0;
            static constexpr std::uintptr_t ServerContinuousInteractableValue = 0x2C20;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"OnInteractionStateChanged", 0x2A98, "MulticastInlineDelegateProperty"},
            {"OnCablesGrabbed", 0x2AA8, "MulticastInlineDelegateProperty"},
            {"OnCablesDropped", 0x2AB8, "MulticastInlineDelegateProperty"},
            {"OnMetasoundGeneratorCrossfadeStarted", 0x2AC8, "MulticastInlineDelegateProperty"},
            {"OnZoomLevelChanged", 0x2AD8, "MulticastInlineDelegateProperty"},
            {"FITSplineMeshComponentClass", 0x2AE8, "ClassProperty"},
            {"SplineComponent", 0x2AF0, "ObjectProperty"},
            {"SplineMeshComponentArray", 0x2AF8, "ArrayProperty"},
            {"SplineMeshMaterialInstance", 0x2B08, "ObjectProperty"},
            {"MaxRange", 0x2B10, "FloatProperty"},
            {"MinDragAndDropTriggerTime", 0x2B14, "FloatProperty"},
            {"FiringRate", 0x2B18, "FloatProperty"},
            {"WipeAnim", 0x2B1C, "FloatProperty"},
            {"UseWipe", 0x2B20, "FloatProperty"},
            {"SplineMeshMaterialIndex", 0x2B24, "IntProperty"},
            {"CPDUVScale", 0x2B28, "IntProperty"},
            {"CPDUVPosition", 0x2B2C, "IntProperty"},
            {"CPDWipeAnim", 0x2B30, "IntProperty"},
            {"CPDUseWipe", 0x2B34, "IntProperty"},
            {"CPDIndex_DeviceType", 0x2B38, "IntProperty"},
            {"SplineSectionLength", 0x2B3C, "FloatProperty"},
            {"MaxSplineSpawnedInAFrame", 0x2B40, "IntProperty"},
            {"DeviceTypeValue", 0x2B44, "FloatProperty"},
            {"FITTargetingAudioPitchMultiplier", 0x2B48, "FloatProperty"},
            {"FITZoomAudioPitchMultiplier", 0x2B4C, "FloatProperty"},
            {"SplineEndForwardMultiplier", 0x2B50, "FloatProperty"},
            {"SplineStartForwardMultiplier", 0x2B54, "FloatProperty"},
            {"HoveredInteractable", 0x2B58, "ObjectProperty"},
            {"HoveredInteractableHitComponent", 0x2B60, "ObjectProperty"},
            {"PressedInteractable", 0x2B68, "ObjectProperty"},
            {"LastPressedInteractable", 0x2B70, "WeakObjectProperty"},
            {"PressedInteractableHitComponent", 0x2B78, "ObjectProperty"},
            {"InteractableOwnerDevice", 0x2B80, "WeakObjectProperty"},
            {"AccumulatedDragAndDropTriggerTime", 0x2B88, "FloatProperty"},
            {"ServerInteractionData", 0x2B8C, "StructProperty"},
            {"bServerTriggerPressed", 0x2BA9, "BoolProperty"},
            {"bServerIsHoldingCable", 0x2BAB, "BoolProperty"},
            {"ServerSplinePoints", 0x2BC0, "StructProperty"},
            {"ServerContinuousInteractableValue", 0x2C20, "FloatProperty"},
        }};
    };

    struct FabricIslandSettingsInitializedInterface
    {
        static constexpr std::string_view Name = "FabricIslandSettingsInitializedInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricIslandSettingsWorldSubsystem
    {
        static constexpr std::string_view Name = "FabricIslandSettingsWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t UseMemoryMode = 0x38;
            static constexpr std::uintptr_t CheckMinigameSettingsIntervalSeconds = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UseMemoryMode", 0x38, "StructProperty"},
            {"CheckMinigameSettingsIntervalSeconds", 0x60, "FloatProperty"},
        }};
    };

    struct FabricMIDIPlayerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMIDIPlayerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricNoteReceivedPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiTrackIndexUserOptionName = 0x500;
            static constexpr std::uintptr_t EnableMidiOutputName = 0x504;
            static constexpr std::uintptr_t TempoMapMidiOutName = 0x508;
            static constexpr std::uintptr_t CurrentMidiFile = 0x510;
            static constexpr std::uintptr_t MidiTrackName = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MidiTrackIndexUserOptionName", 0x500, "NameProperty"},
            {"EnableMidiOutputName", 0x504, "NameProperty"},
            {"TempoMapMidiOutName", 0x508, "NameProperty"},
            {"CurrentMidiFile", 0x510, "ObjectProperty"},
            {"MidiTrackName", 0x518, "NameProperty"},
        }};
    };

    struct FabricMeshGenerator
    {
        static constexpr std::string_view Name = "FabricMeshGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricMeshModifier
    {
        static constexpr std::string_view Name = "FabricMeshModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricMeshModifierBase
    {
        static constexpr std::string_view Name = "FabricMeshModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
        struct Offsets
        {
            static constexpr std::uintptr_t CloneBehavior = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CloneBehavior", 0xE8, "EnumProperty"},
        }};
    };

    struct FabricMeshModifierClone
    {
        static constexpr std::string_view Name = "FabricMeshModifierClone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMeshModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CloneCount = 0xF0;
            static constexpr std::uintptr_t PerCloneTranslation = 0xF8;
            static constexpr std::uintptr_t bCentered = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CloneCount", 0xF0, "IntProperty"},
            {"PerCloneTranslation", 0xF8, "StructProperty"},
            {"bCentered", 0x110, "BoolProperty"},
        }};
    };

    struct FabricMeshModifierRandomize
    {
        static constexpr std::string_view Name = "FabricMeshModifierRandomize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMeshModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationRandLimit = 0xF0;
            static constexpr std::uintptr_t RotationRandLimit = 0xF4;
            static constexpr std::uintptr_t ScaleRandLimit = 0xF8;
            static constexpr std::uintptr_t LocationRandRange = 0x100;
            static constexpr std::uintptr_t RotationRandRange = 0x118;
            static constexpr std::uintptr_t ScaleRandRangeAdditive = 0x130;
            static constexpr std::uintptr_t ScaleRandRangeRangeBase = 0x148;
            static constexpr std::uintptr_t bUniformScale = 0x14C;
            static constexpr std::uintptr_t RandomStream = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LocationRandLimit", 0xF0, "FloatProperty"},
            {"RotationRandLimit", 0xF4, "FloatProperty"},
            {"ScaleRandLimit", 0xF8, "FloatProperty"},
            {"LocationRandRange", 0x100, "StructProperty"},
            {"RotationRandRange", 0x118, "StructProperty"},
            {"ScaleRandRangeAdditive", 0x130, "StructProperty"},
            {"ScaleRandRangeRangeBase", 0x148, "FloatProperty"},
            {"bUniformScale", 0x14C, "BoolProperty"},
            {"RandomStream", 0x150, "StructProperty"},
        }};
    };

    struct FabricMeshModifierRotate
    {
        static constexpr std::string_view Name = "FabricMeshModifierRotate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMeshModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationAmount = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RotationAmount", 0xF0, "StructProperty"},
        }};
    };

    struct FabricMeshModifierScale
    {
        static constexpr std::string_view Name = "FabricMeshModifierScale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMeshModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleFactor = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScaleFactor", 0xF0, "StructProperty"},
        }};
    };

    struct FabricMeshModifierTranslate
    {
        static constexpr std::string_view Name = "FabricMeshModifierTranslate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMeshModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PositionOffset = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PositionOffset", 0xF0, "StructProperty"},
        }};
    };

    struct FabricMeshProviderBase
    {
        static constexpr std::string_view Name = "FabricMeshProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferenceMesh = 0x28;
            static constexpr std::uintptr_t InstanceMeshes = 0x60;
            static constexpr std::uintptr_t CurrentCableFloatValue = 0x70;
            static constexpr std::uintptr_t CurrentCableFloatDirection = 0x74;
            static constexpr std::uintptr_t bCurrentCableFloatDirty = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ReferenceMesh", 0x28, "StructProperty"},
            {"InstanceMeshes", 0x60, "ArrayProperty"},
            {"CurrentCableFloatValue", 0x70, "FloatProperty"},
            {"CurrentCableFloatDirection", 0x74, "FloatProperty"},
            {"bCurrentCableFloatDirty", 0x78, "BoolProperty"},
        }};
    };

    struct FabricMeshReceiver
    {
        static constexpr std::string_view Name = "FabricMeshReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricMeshTreeNode
    {
        static constexpr std::string_view Name = "FabricMeshTreeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshModifier = 0x28;
            static constexpr std::uintptr_t Params = 0x30;
            static constexpr std::uintptr_t MeshProviderReference = 0x58;
            static constexpr std::uintptr_t Children = 0x90;
            static constexpr std::uintptr_t LastCalculatedChecksum = 0xA0;
            static constexpr std::uintptr_t bAllowChecksumCalculation = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MeshModifier", 0x28, "ObjectProperty"},
            {"Params", 0x30, "StructProperty"},
            {"MeshProviderReference", 0x58, "StructProperty"},
            {"Children", 0x90, "ArrayProperty"},
            {"LastCalculatedChecksum", 0xA0, "UInt32Property"},
            {"bAllowChecksumCalculation", 0xA4, "BoolProperty"},
        }};
    };

    struct FabricMetaSoundAudioPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundAudioPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t FromStartPatch = 0x4A0;
            static constexpr std::uintptr_t FromCurrentPatch = 0x4C0;
            static constexpr std::uintptr_t LoadedFromStartPatch = 0x4E0;
            static constexpr std::uintptr_t LoadedFromCurrentPatch = 0x4E8;
            static constexpr std::uintptr_t VolumeInputName = 0x4F0;
            static constexpr std::uintptr_t LoopAudioInputName = 0x4F4;
            static constexpr std::uintptr_t StartTimeInputName = 0x4F8;
            static constexpr std::uintptr_t StartTimestampInputName = 0x4FC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FromStartPatch", 0x4A0, "SoftObjectProperty"},
            {"FromCurrentPatch", 0x4C0, "SoftObjectProperty"},
            {"LoadedFromStartPatch", 0x4E0, "ObjectProperty"},
            {"LoadedFromCurrentPatch", 0x4E8, "ObjectProperty"},
            {"VolumeInputName", 0x4F0, "NameProperty"},
            {"LoopAudioInputName", 0x4F4, "NameProperty"},
            {"StartTimeInputName", 0x4F8, "NameProperty"},
            {"StartTimestampInputName", 0x4FC, "NameProperty"},
        }};
    };

    struct FabricMetaSoundBigKnobPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundBigKnobPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledStateInputName = 0xE8;
            static constexpr std::uintptr_t MetaSoundPatch = 0xF0;
            static constexpr std::uintptr_t UserOptionsToNodeInputs = 0x110;
            static constexpr std::uintptr_t PerPlatformInputBools = 0x120;
            static constexpr std::uintptr_t PerPlatformInputInts = 0x130;
            static constexpr std::uintptr_t PerPlatformInputFloats = 0x140;
            static constexpr std::uintptr_t DirectInputs = 0x150;
            static constexpr std::uintptr_t SimpleSignalOutputBinding = 0x160;
            static constexpr std::uintptr_t OnSimpleSignalBindingUpdate = 0x1B0;
            static constexpr std::uintptr_t VisibleInputParamName = 0x1C0;
            static constexpr std::uintptr_t AudibleInputParamName = 0x1C4;
            static constexpr std::uintptr_t bCanConsumeVisibleFlag = 0x1C8;
            static constexpr std::uintptr_t bCanConsumeAudibleFlag = 0x1C9;
            static constexpr std::uintptr_t bIsVisible = 0x1CA;
            static constexpr std::uintptr_t bIsAudible = 0x1CB;
            static constexpr std::uintptr_t OnMaxAttenuationChanged = 0x1F0;
            static constexpr std::uintptr_t OnMetaSoundOutputIntChangedBatch = 0x200;
            static constexpr std::uintptr_t OnMetaSoundOutputFloatChangedBatch = 0x210;
            static constexpr std::uintptr_t CurrentManager = 0x220;
            static constexpr std::uintptr_t TickSubsystem = 0x228;
            static constexpr std::uintptr_t CurrentNode = 0x230;
            static constexpr std::uintptr_t PositionalProxyActor = 0x2E0;
            static constexpr std::uintptr_t CurrentAudioComponent = 0x308;
            static constexpr std::uintptr_t NewAudioComponent = 0x310;
            static constexpr std::uintptr_t CombinerMetaSoundType = 0x328;
            static constexpr std::uintptr_t AnalyzerMetaSoundType = 0x32C;
            static constexpr std::uintptr_t MetaSoundRuntimeInputInfos = 0x330;
            static constexpr std::uintptr_t ConnectedInputWrappers = 0x340;
            static constexpr std::uintptr_t PendingInputWrappers = 0x350;
            static constexpr std::uintptr_t PendingOutputWrappers = 0x360;
            static constexpr std::uintptr_t ConnectionBuilder = 0x370;
            static constexpr std::uintptr_t CombinersInUse = 0x440;
            static constexpr std::uintptr_t ConnectedOutputWrappers = 0x450;
            static constexpr std::uintptr_t PatchWrapperQuality = 0x460;
            static constexpr std::uintptr_t MaxAttenuation = 0x461;
            static constexpr std::uintptr_t LoadedMetaSoundPatch = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"EnabledStateInputName", 0xE8, "NameProperty"},
            {"MetaSoundPatch", 0xF0, "SoftObjectProperty"},
            {"UserOptionsToNodeInputs", 0x110, "MapProperty"},
            {"PerPlatformInputBools", 0x120, "ArrayProperty"},
            {"PerPlatformInputInts", 0x130, "ArrayProperty"},
            {"PerPlatformInputFloats", 0x140, "ArrayProperty"},
            {"DirectInputs", 0x150, "ArrayProperty"},
            {"SimpleSignalOutputBinding", 0x160, "StructProperty"},
            {"OnSimpleSignalBindingUpdate", 0x1B0, "MulticastInlineDelegateProperty"},
            {"VisibleInputParamName", 0x1C0, "NameProperty"},
            {"AudibleInputParamName", 0x1C4, "NameProperty"},
            {"bCanConsumeVisibleFlag", 0x1C8, "BoolProperty"},
            {"bCanConsumeAudibleFlag", 0x1C9, "BoolProperty"},
            {"bIsVisible", 0x1CA, "BoolProperty"},
            {"bIsAudible", 0x1CB, "BoolProperty"},
            {"OnMaxAttenuationChanged", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputIntChangedBatch", 0x200, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputFloatChangedBatch", 0x210, "MulticastInlineDelegateProperty"},
            {"CurrentManager", 0x220, "ObjectProperty"},
            {"TickSubsystem", 0x228, "WeakObjectProperty"},
            {"CurrentNode", 0x230, "StructProperty"},
            {"PositionalProxyActor", 0x2E0, "WeakObjectProperty"},
            {"CurrentAudioComponent", 0x308, "WeakObjectProperty"},
            {"NewAudioComponent", 0x310, "WeakObjectProperty"},
            {"CombinerMetaSoundType", 0x328, "NameProperty"},
            {"AnalyzerMetaSoundType", 0x32C, "NameProperty"},
            {"MetaSoundRuntimeInputInfos", 0x330, "ArrayProperty"},
            {"ConnectedInputWrappers", 0x340, "ArrayProperty"},
            {"PendingInputWrappers", 0x350, "ArrayProperty"},
            {"PendingOutputWrappers", 0x360, "ArrayProperty"},
            {"ConnectionBuilder", 0x370, "StructProperty"},
            {"CombinersInUse", 0x440, "ArrayProperty"},
            {"ConnectedOutputWrappers", 0x450, "ArrayProperty"},
            {"PatchWrapperQuality", 0x460, "EnumProperty"},
            {"MaxAttenuation", 0x461, "EnumProperty"},
            {"LoadedMetaSoundPatch", 0x478, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundDrumPlayerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundDrumPlayerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t PitchSampleInputName = 0x4A0;
            static constexpr std::uintptr_t SlotKitInputName = 0x4A4;
            static constexpr std::uintptr_t PitchSampleParams = 0x4A8;
            static constexpr std::uintptr_t SlotLinkParams = 0x4B8;
            static constexpr std::uintptr_t CurrentKitParam = 0x4C8;
            static constexpr std::uintptr_t NumSamplesPerKit = 0x4D8;
            static constexpr std::uintptr_t DrumAmplitudes = 0x4E0;
            static constexpr std::uintptr_t OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate = 0x4F0;
            static constexpr std::uintptr_t OnFabricMetaSoundDrumPlayerSampleBanksLoaded = 0x500;
            static constexpr std::uintptr_t CurrentKitSamples = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PitchSampleInputName", 0x4A0, "NameProperty"},
            {"SlotKitInputName", 0x4A4, "NameProperty"},
            {"PitchSampleParams", 0x4A8, "ArrayProperty"},
            {"SlotLinkParams", 0x4B8, "ArrayProperty"},
            {"CurrentKitParam", 0x4C8, "StrProperty"},
            {"NumSamplesPerKit", 0x4D8, "IntProperty"},
            {"DrumAmplitudes", 0x4E0, "ArrayProperty"},
            {"OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate", 0x4F0, "MulticastInlineDelegateProperty"},
            {"OnFabricMetaSoundDrumPlayerSampleBanksLoaded", 0x500, "MulticastInlineDelegateProperty"},
            {"CurrentKitSamples", 0x558, "ArrayProperty"},
        }};
    };

    struct FabricMetaSoundEchoPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundEchoPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundWetDryPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowWetSignalWaveformTexture = 0x548;
            static constexpr std::uintptr_t bAllowDrySignalWaveformTexture = 0x549;
            static constexpr std::uintptr_t WetSignalWaveformTexture = 0x550;
            static constexpr std::uintptr_t DrySignalWaveformTexture = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAllowWetSignalWaveformTexture", 0x548, "BoolProperty"},
            {"bAllowDrySignalWaveformTexture", 0x549, "BoolProperty"},
            {"WetSignalWaveformTexture", 0x550, "ObjectProperty"},
            {"DrySignalWaveformTexture", 0x558, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundInstrumentPlayerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundInstrumentPlayerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFFTResultsUpdated = 0x498;
            static constexpr std::uintptr_t FFTAnalysisOutputBinding = 0x4A8;
            static constexpr std::uintptr_t FFTCPDStartIndex = 0x4F8;
            static constexpr std::uintptr_t FFTLength = 0x4FC;
            static constexpr std::uintptr_t CurrentFusionPatch = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnFFTResultsUpdated", 0x498, "MulticastInlineDelegateProperty"},
            {"FFTAnalysisOutputBinding", 0x4A8, "StructProperty"},
            {"FFTCPDStartIndex", 0x4F8, "IntProperty"},
            {"FFTLength", 0x4FC, "IntProperty"},
            {"CurrentFusionPatch", 0x538, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundLFOPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundLFOPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundModulatorPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t LFOFloatProvider = 0x4B8;
            static constexpr std::uintptr_t FreePhaseStartName = 0x4C0;
            static constexpr std::uintptr_t RandomSeedInputName = 0x4C4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LFOFloatProvider", 0x4B8, "ObjectProperty"},
            {"FreePhaseStartName", 0x4C0, "NameProperty"},
            {"RandomSeedInputName", 0x4C4, "NameProperty"},
        }};
    };

    struct FabricMetaSoundManagerComponent
    {
        static constexpr std::string_view Name = "FabricMetaSoundManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HarmonixMusicProviderPatch = 0xD0;
            static constexpr std::uintptr_t HarmonixMetronomeClockPatch = 0xF0;
            static constexpr std::uintptr_t HarmonixTempoClockPatch = 0x110;
            static constexpr std::uintptr_t HarmonixTransportPatch = 0x130;
            static constexpr std::uintptr_t UserOptionConverterNode = 0x150;
            static constexpr std::uintptr_t MidiStreamUtilityPatches = 0x170;
            static constexpr std::uintptr_t AudioUtilityPatches = 0x1F8;
            static constexpr std::uintptr_t FloatUtilityPatches = 0x280;
            static constexpr std::uintptr_t MusicProviderVolumeName = 0x308;
            static constexpr std::uintptr_t MusicProviderRootNoteName = 0x30C;
            static constexpr std::uintptr_t MusicProviderScaleName = 0x310;
            static constexpr std::uintptr_t TransportProviderPlayTriggerName = 0x314;
            static constexpr std::uintptr_t TransportProviderDelayedRestartTriggerName = 0x318;
            static constexpr std::uintptr_t TransportProviderRestartTriggerName = 0x31C;
            static constexpr std::uintptr_t TransportProviderSeekTriggerName = 0x320;
            static constexpr std::uintptr_t TransportProviderPauseTriggerName = 0x324;
            static constexpr std::uintptr_t TransportProviderContinueTriggerName = 0x328;
            static constexpr std::uintptr_t TransportProviderStopTriggerName = 0x32C;
            static constexpr std::uintptr_t TransportProviderSeekTargetName = 0x330;
            static constexpr std::uintptr_t ClockProviderTempoName = 0x334;
            static constexpr std::uintptr_t ClockProviderSpeedName = 0x338;
            static constexpr std::uintptr_t ClockProviderTimeSigNumName = 0x33C;
            static constexpr std::uintptr_t ClockProviderTimeSignDenomName = 0x340;
            static constexpr std::uintptr_t ClockProviderMidiFileInName = 0x344;
            static constexpr std::uintptr_t ClockProviderLoopName = 0x348;
            static constexpr std::uintptr_t UserOptionConverterCountInName = 0x34C;
            static constexpr std::uintptr_t CrossfadeSeconds = 0x350;
            static constexpr std::uintptr_t RebuildTimeOutSeconds = 0x354;
            static constexpr std::uintptr_t BlockRateOverride = 0x358;
            static constexpr std::uintptr_t QualityOverride = 0x35C;
            static constexpr std::uintptr_t DefaultMidiFile = 0x360;
            static constexpr std::uintptr_t OnMetasoundGeneratorCrossfadeStarted = 0x398;
            static constexpr std::uintptr_t OnMetasoundClockAuthorityChanged = 0x3F8;
            static constexpr std::uintptr_t OnPlayStateChanged = 0x420;
            static constexpr std::uintptr_t SignificanceRuntimeBuckets = 0x430;
            static constexpr std::uintptr_t SignificanceBasedUpdate = 0x440;
            static constexpr std::uintptr_t InitialCooldownTimeInSeconds = 0x448;
            static constexpr std::uintptr_t SourceBuilder = 0x450;
            static constexpr std::uintptr_t MusicClock = 0x458;
            static constexpr std::uintptr_t PlaybackAudioComponents = 0x460;
            static constexpr std::uintptr_t ServerPlaybackComponents = 0x480;
            static constexpr std::uintptr_t QueuedTransportRequestLock = 0x490;
            static constexpr std::uintptr_t CurrentTransportRequestLock = 0x4E0;
            static constexpr std::uintptr_t ClockAuthorityName = 0x4E8;
            static constexpr std::uintptr_t SortedRegisteredUtilityProviderAuthorities = 0x4F0;
            static constexpr std::uintptr_t ClockAuthorityLoopLength = 0x500;
            static constexpr std::uintptr_t TempoMapMidiFile = 0x508;
            static constexpr std::uintptr_t HarmonixMusicProviderNode = 0x510;
            static constexpr std::uintptr_t HarmonixMetronomeClockNode = 0x5C0;
            static constexpr std::uintptr_t HarmonixMidiTempoClockNode = 0x670;
            static constexpr std::uintptr_t HarmonixTransportNode = 0x720;
            static constexpr std::uintptr_t OnPlayNodeOutput = 0x7D0;
            static constexpr std::uintptr_t OnFinishedNodeInput = 0x7F0;
            static constexpr std::uintptr_t AudioOutNodeInputs = 0x810;
            static constexpr std::uintptr_t FreeMetaSoundNodes = 0x868;
            static constexpr std::uintptr_t UtilityNodeTypesToPatches = 0x878;
            static constexpr std::uintptr_t UtilityProviderNodesInGraph = 0x888;
            static constexpr std::uintptr_t bGraphDirty = 0x8A8;
            static constexpr std::uintptr_t bIsAudioless = 0x8A9;
            static constexpr std::uintptr_t bHasCompletedInitialCooldown = 0x8AA;
            static constexpr std::uintptr_t CurrentClockType = 0x8AB;
            static constexpr std::uintptr_t DefaultClockType = 0x8AC;
            static constexpr std::uintptr_t CurrentPlayState = 0x8AD;
            static constexpr std::uintptr_t PlayStateAfterRebuild = 0x8AE;
            static constexpr std::uintptr_t JamSyncType = 0x8AF;
            static constexpr std::uintptr_t LastBroadcastBy = 0x8B2;
        };

        inline static constexpr std::array<PropertyInfo, 66> Properties{{
            {"HarmonixMusicProviderPatch", 0xD0, "SoftObjectProperty"},
            {"HarmonixMetronomeClockPatch", 0xF0, "SoftObjectProperty"},
            {"HarmonixTempoClockPatch", 0x110, "SoftObjectProperty"},
            {"HarmonixTransportPatch", 0x130, "SoftObjectProperty"},
            {"UserOptionConverterNode", 0x150, "SoftObjectProperty"},
            {"MidiStreamUtilityPatches", 0x170, "StructProperty"},
            {"AudioUtilityPatches", 0x1F8, "StructProperty"},
            {"FloatUtilityPatches", 0x280, "StructProperty"},
            {"MusicProviderVolumeName", 0x308, "NameProperty"},
            {"MusicProviderRootNoteName", 0x30C, "NameProperty"},
            {"MusicProviderScaleName", 0x310, "NameProperty"},
            {"TransportProviderPlayTriggerName", 0x314, "NameProperty"},
            {"TransportProviderDelayedRestartTriggerName", 0x318, "NameProperty"},
            {"TransportProviderRestartTriggerName", 0x31C, "NameProperty"},
            {"TransportProviderSeekTriggerName", 0x320, "NameProperty"},
            {"TransportProviderPauseTriggerName", 0x324, "NameProperty"},
            {"TransportProviderContinueTriggerName", 0x328, "NameProperty"},
            {"TransportProviderStopTriggerName", 0x32C, "NameProperty"},
            {"TransportProviderSeekTargetName", 0x330, "NameProperty"},
            {"ClockProviderTempoName", 0x334, "NameProperty"},
            {"ClockProviderSpeedName", 0x338, "NameProperty"},
            {"ClockProviderTimeSigNumName", 0x33C, "NameProperty"},
            {"ClockProviderTimeSignDenomName", 0x340, "NameProperty"},
            {"ClockProviderMidiFileInName", 0x344, "NameProperty"},
            {"ClockProviderLoopName", 0x348, "NameProperty"},
            {"UserOptionConverterCountInName", 0x34C, "NameProperty"},
            {"CrossfadeSeconds", 0x350, "FloatProperty"},
            {"RebuildTimeOutSeconds", 0x354, "FloatProperty"},
            {"BlockRateOverride", 0x358, "FloatProperty"},
            {"QualityOverride", 0x35C, "NameProperty"},
            {"DefaultMidiFile", 0x360, "ObjectProperty"},
            {"OnMetasoundGeneratorCrossfadeStarted", 0x398, "MulticastInlineDelegateProperty"},
            {"OnMetasoundClockAuthorityChanged", 0x3F8, "MulticastInlineDelegateProperty"},
            {"OnPlayStateChanged", 0x420, "MulticastInlineDelegateProperty"},
            {"SignificanceRuntimeBuckets", 0x430, "ArrayProperty"},
            {"SignificanceBasedUpdate", 0x440, "ObjectProperty"},
            {"InitialCooldownTimeInSeconds", 0x448, "FloatProperty"},
            {"SourceBuilder", 0x450, "ObjectProperty"},
            {"MusicClock", 0x458, "ObjectProperty"},
            {"PlaybackAudioComponents", 0x460, "ArrayProperty"},
            {"ServerPlaybackComponents", 0x480, "ArrayProperty"},
            {"QueuedTransportRequestLock", 0x490, "OptionalProperty"},
            {"CurrentTransportRequestLock", 0x4E0, "StructProperty"},
            {"ClockAuthorityName", 0x4E8, "OptionalProperty"},
            {"SortedRegisteredUtilityProviderAuthorities", 0x4F0, "ArrayProperty"},
            {"ClockAuthorityLoopLength", 0x500, "StructProperty"},
            {"TempoMapMidiFile", 0x508, "WeakObjectProperty"},
            {"HarmonixMusicProviderNode", 0x510, "StructProperty"},
            {"HarmonixMetronomeClockNode", 0x5C0, "StructProperty"},
            {"HarmonixMidiTempoClockNode", 0x670, "StructProperty"},
            {"HarmonixTransportNode", 0x720, "StructProperty"},
            {"OnPlayNodeOutput", 0x7D0, "StructProperty"},
            {"OnFinishedNodeInput", 0x7F0, "StructProperty"},
            {"AudioOutNodeInputs", 0x810, "ArrayProperty"},
            {"FreeMetaSoundNodes", 0x868, "MapProperty"},
            {"UtilityNodeTypesToPatches", 0x878, "MapProperty"},
            {"UtilityProviderNodesInGraph", 0x888, "MapProperty"},
            {"bGraphDirty", 0x8A8, "BoolProperty"},
            {"bIsAudioless", 0x8A9, "BoolProperty"},
            {"bHasCompletedInitialCooldown", 0x8AA, "BoolProperty"},
            {"CurrentClockType", 0x8AB, "EnumProperty"},
            {"DefaultClockType", 0x8AC, "EnumProperty"},
            {"CurrentPlayState", 0x8AD, "EnumProperty"},
            {"PlayStateAfterRebuild", 0x8AE, "EnumProperty"},
            {"JamSyncType", 0x8AF, "EnumProperty"},
            {"LastBroadcastBy", 0x8B2, "EnumProperty"},
        }};
    };

    struct FabricMetaSoundModulatorPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundModulatorPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPatchWrapperVisibilityChanged = 0x498;
            static constexpr std::uintptr_t CurrentUserOption = 0x4A8;
            static constexpr std::uintptr_t MetaSoundUserOption = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnPatchWrapperVisibilityChanged", 0x498, "MulticastInlineDelegateProperty"},
            {"CurrentUserOption", 0x4A8, "ObjectProperty"},
            {"MetaSoundUserOption", 0x4B0, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundPatchOwner
    {
        static constexpr std::string_view Name = "FabricMetaSoundPatchOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricMetaSoundPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledStateInputName = 0xE8;
            static constexpr std::uintptr_t MetaSoundPatch = 0xF0;
            static constexpr std::uintptr_t UserOptionsToNodeInputs = 0x110;
            static constexpr std::uintptr_t PerPlatformInputBools = 0x120;
            static constexpr std::uintptr_t PerPlatformInputInts = 0x130;
            static constexpr std::uintptr_t PerPlatformInputFloats = 0x140;
            static constexpr std::uintptr_t DirectInputs = 0x150;
            static constexpr std::uintptr_t SimpleSignalOutputBinding = 0x160;
            static constexpr std::uintptr_t OnSimpleSignalBindingUpdate = 0x1B0;
            static constexpr std::uintptr_t VisibleInputParamName = 0x1C0;
            static constexpr std::uintptr_t AudibleInputParamName = 0x1C4;
            static constexpr std::uintptr_t bCanConsumeVisibleFlag = 0x1C8;
            static constexpr std::uintptr_t bCanConsumeAudibleFlag = 0x1C9;
            static constexpr std::uintptr_t bIsVisible = 0x1CA;
            static constexpr std::uintptr_t bIsAudible = 0x1CB;
            static constexpr std::uintptr_t OnMaxAttenuationChanged = 0x1F0;
            static constexpr std::uintptr_t OnMetaSoundOutputIntChangedBatch = 0x200;
            static constexpr std::uintptr_t OnMetaSoundOutputFloatChangedBatch = 0x210;
            static constexpr std::uintptr_t CurrentManager = 0x220;
            static constexpr std::uintptr_t TickSubsystem = 0x228;
            static constexpr std::uintptr_t CurrentNode = 0x230;
            static constexpr std::uintptr_t PositionalProxyActor = 0x2E0;
            static constexpr std::uintptr_t CurrentAudioComponent = 0x308;
            static constexpr std::uintptr_t NewAudioComponent = 0x310;
            static constexpr std::uintptr_t CombinerMetaSoundType = 0x328;
            static constexpr std::uintptr_t AnalyzerMetaSoundType = 0x32C;
            static constexpr std::uintptr_t MetaSoundRuntimeInputInfos = 0x330;
            static constexpr std::uintptr_t ConnectedInputWrappers = 0x340;
            static constexpr std::uintptr_t PendingInputWrappers = 0x350;
            static constexpr std::uintptr_t PendingOutputWrappers = 0x360;
            static constexpr std::uintptr_t ConnectionBuilder = 0x370;
            static constexpr std::uintptr_t CombinersInUse = 0x440;
            static constexpr std::uintptr_t ConnectedOutputWrappers = 0x450;
            static constexpr std::uintptr_t PatchWrapperQuality = 0x460;
            static constexpr std::uintptr_t MaxAttenuation = 0x461;
            static constexpr std::uintptr_t LoadedMetaSoundPatch = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"EnabledStateInputName", 0xE8, "NameProperty"},
            {"MetaSoundPatch", 0xF0, "SoftObjectProperty"},
            {"UserOptionsToNodeInputs", 0x110, "MapProperty"},
            {"PerPlatformInputBools", 0x120, "ArrayProperty"},
            {"PerPlatformInputInts", 0x130, "ArrayProperty"},
            {"PerPlatformInputFloats", 0x140, "ArrayProperty"},
            {"DirectInputs", 0x150, "ArrayProperty"},
            {"SimpleSignalOutputBinding", 0x160, "StructProperty"},
            {"OnSimpleSignalBindingUpdate", 0x1B0, "MulticastInlineDelegateProperty"},
            {"VisibleInputParamName", 0x1C0, "NameProperty"},
            {"AudibleInputParamName", 0x1C4, "NameProperty"},
            {"bCanConsumeVisibleFlag", 0x1C8, "BoolProperty"},
            {"bCanConsumeAudibleFlag", 0x1C9, "BoolProperty"},
            {"bIsVisible", 0x1CA, "BoolProperty"},
            {"bIsAudible", 0x1CB, "BoolProperty"},
            {"OnMaxAttenuationChanged", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputIntChangedBatch", 0x200, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputFloatChangedBatch", 0x210, "MulticastInlineDelegateProperty"},
            {"CurrentManager", 0x220, "ObjectProperty"},
            {"TickSubsystem", 0x228, "WeakObjectProperty"},
            {"CurrentNode", 0x230, "StructProperty"},
            {"PositionalProxyActor", 0x2E0, "WeakObjectProperty"},
            {"CurrentAudioComponent", 0x308, "WeakObjectProperty"},
            {"NewAudioComponent", 0x310, "WeakObjectProperty"},
            {"CombinerMetaSoundType", 0x328, "NameProperty"},
            {"AnalyzerMetaSoundType", 0x32C, "NameProperty"},
            {"MetaSoundRuntimeInputInfos", 0x330, "ArrayProperty"},
            {"ConnectedInputWrappers", 0x340, "ArrayProperty"},
            {"PendingInputWrappers", 0x350, "ArrayProperty"},
            {"PendingOutputWrappers", 0x360, "ArrayProperty"},
            {"ConnectionBuilder", 0x370, "StructProperty"},
            {"CombinersInUse", 0x440, "ArrayProperty"},
            {"ConnectedOutputWrappers", 0x450, "ArrayProperty"},
            {"PatchWrapperQuality", 0x460, "EnumProperty"},
            {"MaxAttenuation", 0x461, "EnumProperty"},
            {"LoadedMetaSoundPatch", 0x478, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundSequencerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundSequencerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStepSequence = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentStepSequence", 0x498, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundSpeakerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundSpeakerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t EqBands = 0x498;
            static constexpr std::uintptr_t AudioPeak = 0x4A8;
            static constexpr std::uintptr_t OnFabricMetaSoundSpeakerPatchEqBandUpdate = 0x510;
            static constexpr std::uintptr_t OnFabricSpeakerReceivingSignalChanged = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EqBands", 0x498, "ArrayProperty"},
            {"AudioPeak", 0x4A8, "StructProperty"},
            {"OnFabricMetaSoundSpeakerPatchEqBandUpdate", 0x510, "MulticastInlineDelegateProperty"},
            {"OnFabricSpeakerReceivingSignalChanged", 0x520, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FabricMetaSoundSplitterPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundSplitterPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t SplitterNodes = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplitterNodes", 0x4A0, "MapProperty"},
        }};
    };

    struct FabricMetaSoundTickSubsystem
    {
        static constexpr std::string_view Name = "FabricMetaSoundTickSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortManagedTickSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTickList = 0x68;
            static constexpr std::uintptr_t AllEnabledObjects = 0x78;
            static constexpr std::uintptr_t AllRegisteredObjects = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveTickList", 0x68, "ArrayProperty"},
            {"AllEnabledObjects", 0x78, "ArrayProperty"},
            {"AllRegisteredObjects", 0x88, "SetProperty"},
        }};
    };

    struct FabricMetaSoundTreeNode
    {
        static constexpr std::string_view Name = "FabricMetaSoundTreeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PinDirection = 0x28;
            static constexpr std::uintptr_t AssociatedPatchWrapper = 0x30;
            static constexpr std::uintptr_t Children = 0x38;
            static constexpr std::uintptr_t MaxAttenuation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PinDirection", 0x28, "EnumProperty"},
            {"AssociatedPatchWrapper", 0x30, "ObjectProperty"},
            {"Children", 0x38, "ArrayProperty"},
            {"MaxAttenuation", 0x48, "EnumProperty"},
        }};
    };

    struct FabricMetaSoundUtilityProviderPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundUtilityProviderPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaSoundPatch = 0x30;
            static constexpr std::uintptr_t bUseAsMusicProvider = 0x50;
            static constexpr std::uintptr_t bUseAsClockProvider = 0x51;
            static constexpr std::uintptr_t bUseAsTransportProvider = 0x52;
            static constexpr std::uintptr_t bManagesOwnMusicState = 0x53;
            static constexpr std::uintptr_t Priority = 0x54;
            static constexpr std::uintptr_t bRunsOnServer = 0x58;
            static constexpr std::uintptr_t CurrentManager = 0x60;
            static constexpr std::uintptr_t CurrentNode = 0x68;
            static constexpr std::uintptr_t CurrentAudioComponent = 0x138;
            static constexpr std::uintptr_t TransportRequestConfig = 0x140;
            static constexpr std::uintptr_t LoadedMetaSoundPatch = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MetaSoundPatch", 0x30, "SoftObjectProperty"},
            {"bUseAsMusicProvider", 0x50, "BoolProperty"},
            {"bUseAsClockProvider", 0x51, "BoolProperty"},
            {"bUseAsTransportProvider", 0x52, "BoolProperty"},
            {"bManagesOwnMusicState", 0x53, "BoolProperty"},
            {"Priority", 0x54, "IntProperty"},
            {"bRunsOnServer", 0x58, "BoolProperty"},
            {"CurrentManager", 0x60, "ObjectProperty"},
            {"CurrentNode", 0x68, "StructProperty"},
            {"CurrentAudioComponent", 0x138, "WeakObjectProperty"},
            {"TransportRequestConfig", 0x140, "StructProperty"},
            {"LoadedMetaSoundPatch", 0x150, "ObjectProperty"},
        }};
    };

    struct FabricMetaSoundWetDryPatchWrapper
    {
        static constexpr std::string_view Name = "FabricMetaSoundWetDryPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t WetDryOutputBinding = 0x498;
            static constexpr std::uintptr_t OnWetDryOutputSignalUpdate = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WetDryOutputBinding", 0x498, "StructProperty"},
            {"OnWetDryOutputSignalUpdate", 0x538, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FabricMidiFollowComponent
    {
        static constexpr std::string_view Name = "FabricMidiFollowComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFollowLengthFinished = 0xC0;
            static constexpr std::uintptr_t OnFollowSourcesSet = 0xD0;
            static constexpr std::uintptr_t FollowMidiFile = 0x100;
            static constexpr std::uintptr_t FollowLevelSequence = 0x10C;
            static constexpr std::uintptr_t SelectedMidiTrackStartTimestamp = 0x128;
            static constexpr std::uintptr_t ExternalSourceStartTimestamp = 0x130;
            static constexpr std::uintptr_t SelectedMidiTrackEndTimestamp = 0x138;
            static constexpr std::uintptr_t ExternalSourceEndTimestamp = 0x140;
            static constexpr std::uintptr_t MidiFollowData = 0x148;
            static constexpr std::uintptr_t DesiredLoopBehaviour = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnFollowLengthFinished", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnFollowSourcesSet", 0xD0, "MulticastInlineDelegateProperty"},
            {"FollowMidiFile", 0x100, "OptionalProperty"},
            {"FollowLevelSequence", 0x10C, "OptionalProperty"},
            {"SelectedMidiTrackStartTimestamp", 0x128, "StructProperty"},
            {"ExternalSourceStartTimestamp", 0x130, "StructProperty"},
            {"SelectedMidiTrackEndTimestamp", 0x138, "StructProperty"},
            {"ExternalSourceEndTimestamp", 0x140, "StructProperty"},
            {"MidiFollowData", 0x148, "StructProperty"},
            {"DesiredLoopBehaviour", 0x150, "EnumProperty"},
        }};
    };

    struct FabricMidiProvider
    {
        static constexpr std::string_view Name = "FabricMidiProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricModulatable
    {
        static constexpr std::string_view Name = "FabricModulatable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulatedActor = 0x2C;
            static constexpr std::uintptr_t ModulatorParams = 0x38;
            static constexpr std::uintptr_t NonModulatedParamsWithCallbacks = 0x48;
            static constexpr std::uintptr_t Modulators = 0x58;
            static constexpr std::uintptr_t LastBroadcastedValues = 0x68;
            static constexpr std::uintptr_t ModulatorSources = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ModulatedActor", 0x2C, "WeakObjectProperty"},
            {"ModulatorParams", 0x38, "ArrayProperty"},
            {"NonModulatedParamsWithCallbacks", 0x48, "SetProperty"},
            {"Modulators", 0x58, "MapProperty"},
            {"LastBroadcastedValues", 0x68, "MapProperty"},
            {"ModulatorSources", 0x78, "ArrayProperty"},
        }};
    };

    struct FabricModulationNode
    {
        static constexpr std::string_view Name = "FabricModulationNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatProviders = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatProviders", 0x28, "ArrayProperty"},
        }};
    };

    struct FabricModulator
    {
        static constexpr std::string_view Name = "FabricModulator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricModulatorDevice
    {
        static constexpr std::string_view Name = "FabricModulatorDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricModulatorSource
    {
        static constexpr std::string_view Name = "FabricModulatorSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricNoteReceivedPatchWrapper
    {
        static constexpr std::string_view Name = "FabricNoteReceivedPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteOutputName = 0x498;
            static constexpr std::uintptr_t TriggerNoteParams = 0x4A0;
            static constexpr std::uintptr_t OnMatchingMidiEventPassed = 0x4B0;
            static constexpr std::uintptr_t OnMatchingNoteOnMidiEventPassed = 0x4C0;
            static constexpr std::uintptr_t OnMatchingNoteOffMidiEventPassed = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NoteOutputName", 0x498, "NameProperty"},
            {"TriggerNoteParams", 0x4A0, "ArrayProperty"},
            {"OnMatchingMidiEventPassed", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnMatchingNoteOnMidiEventPassed", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnMatchingNoteOffMidiEventPassed", 0x4D0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FabricNoteTriggerPatchWrapper
    {
        static constexpr std::string_view Name = "FabricNoteTriggerPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricNoteReceivedPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t OctaveParam = 0x500;
            static constexpr std::uintptr_t MaxOctave = 0x510;
            static constexpr std::uintptr_t OnAnyMidiEventPassed = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OctaveParam", 0x500, "StrProperty"},
            {"MaxOctave", 0x510, "IntProperty"},
            {"OnAnyMidiEventPassed", 0x518, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FabricProgressorManager
    {
        static constexpr std::string_view Name = "FabricProgressorManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGlobalProgressionChanged = 0xC8;
            static constexpr std::uintptr_t bHasActiveGlobalProgression = 0xD8;
            static constexpr std::uintptr_t bInPlayMode = 0xD9;
            static constexpr std::uintptr_t GlobalPresetNumber = 0xDC;
            static constexpr std::uintptr_t GlobalProgression = 0xE0;
            static constexpr std::uintptr_t StoredGlobalProgression = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnGlobalProgressionChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"bHasActiveGlobalProgression", 0xD8, "BoolProperty"},
            {"bInPlayMode", 0xD9, "BoolProperty"},
            {"GlobalPresetNumber", 0xDC, "IntProperty"},
            {"GlobalProgression", 0xE0, "StructProperty"},
            {"StoredGlobalProgression", 0x100, "StructProperty"},
        }};
    };

    struct FabricSequencerPreviewFXComponent
    {
        static constexpr std::string_view Name = "FabricSequencerPreviewFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricSteppedPreviewFXComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StepSequencer = 0xAE0;
            static constexpr std::uintptr_t StepSequencerGrid = 0xAE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StepSequencer", 0xAE0, "WeakObjectProperty"},
            {"StepSequencerGrid", 0xAE8, "WeakObjectProperty"},
        }};
    };

    struct FabricSequencerSustainComponent
    {
        static constexpr std::string_view Name = "FabricSequencerSustainComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StepToInstanceMapping = 0xA50;
            static constexpr std::uintptr_t PICDStartBeat = 0xA60;
            static constexpr std::uintptr_t PICDEndBeat = 0xA64;
            static constexpr std::uintptr_t PICDLoopBeat = 0xA68;
            static constexpr std::uintptr_t CPDDeviceEnabled = 0xA6C;
            static constexpr std::uintptr_t GridSquareExtents = 0xA70;
            static constexpr std::uintptr_t SustainInstanceYLocation = 0xA74;
            static constexpr std::uintptr_t SustainInstanceYScale = 0xA78;
            static constexpr std::uintptr_t SustainInstanceZScale = 0xA7C;
            static constexpr std::uintptr_t StepSequencer = 0xA80;
            static constexpr std::uintptr_t StepSequencerGrid = 0xA88;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StepToInstanceMapping", 0xA50, "MapProperty"},
            {"PICDStartBeat", 0xA60, "IntProperty"},
            {"PICDEndBeat", 0xA64, "IntProperty"},
            {"PICDLoopBeat", 0xA68, "IntProperty"},
            {"CPDDeviceEnabled", 0xA6C, "IntProperty"},
            {"GridSquareExtents", 0xA70, "FloatProperty"},
            {"SustainInstanceYLocation", 0xA74, "FloatProperty"},
            {"SustainInstanceYScale", 0xA78, "FloatProperty"},
            {"SustainInstanceZScale", 0xA7C, "FloatProperty"},
            {"StepSequencer", 0xA80, "WeakObjectProperty"},
            {"StepSequencerGrid", 0xA88, "WeakObjectProperty"},
        }};
    };

    struct FabricSignificanceAsset
    {
        static constexpr std::string_view Name = "FabricSignificanceAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateBuckets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateBuckets", 0x28, "ArrayProperty"},
        }};
    };

    struct FabricSpeakerManagerComponent
    {
        static constexpr std::string_view Name = "FabricSpeakerManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMusicEventPriorityChanged = 0xC0;
            static constexpr std::uintptr_t OnClientAudibleMusicEventGroupChanged = 0xD0;
            static constexpr std::uintptr_t MusicEventPriority = 0xE0;
            static constexpr std::uintptr_t ClientCurrentAudibleMusicEventGroup = 0xE4;
            static constexpr std::uintptr_t AboveEmotesTag = 0xE8;
            static constexpr std::uintptr_t BelowEmotesTag = 0xEC;
            static constexpr std::uintptr_t ReplicatedReceivedSignalBufferDuration = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnMusicEventPriorityChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnClientAudibleMusicEventGroupChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"MusicEventPriority", 0xE0, "EnumProperty"},
            {"ClientCurrentAudibleMusicEventGroup", 0xE4, "NameProperty"},
            {"AboveEmotesTag", 0xE8, "StructProperty"},
            {"BelowEmotesTag", 0xEC, "StructProperty"},
            {"ReplicatedReceivedSignalBufferDuration", 0xF0, "FloatProperty"},
        }};
    };

    struct FabricStepSequencerComponent
    {
        static constexpr std::string_view Name = "FabricStepSequencerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNumTracksChanged = 0xD0;
            static constexpr std::uintptr_t OnNumStepsChanged = 0xE0;
            static constexpr std::uintptr_t OnPageChanged = 0xF0;
            static constexpr std::uintptr_t OnStepRateChanged = 0x100;
            static constexpr std::uintptr_t OnTimeSignatureChanged = 0x110;
            static constexpr std::uintptr_t OnBeatScaleChanged = 0x120;
            static constexpr std::uintptr_t OnBeatOffsetChanged = 0x130;
            static constexpr std::uintptr_t OnStepChanged = 0x140;
            static constexpr std::uintptr_t OnNoteStyleChanged = 0x150;
            static constexpr std::uintptr_t OnFullTableChanged = 0x160;
            static constexpr std::uintptr_t OnPageCleared = 0x170;
            static constexpr std::uintptr_t OnLoopEnded = 0x180;
            static constexpr std::uintptr_t LengthParam = 0x190;
            static constexpr std::uintptr_t DurationParam = 0x1A0;
            static constexpr std::uintptr_t PageParam = 0x1B0;
            static constexpr std::uintptr_t AutoPageParam = 0x1C0;
            static constexpr std::uintptr_t OctaveParam = 0x1D0;
            static constexpr std::uintptr_t NoteStyleParam = 0x1E0;
            static constexpr std::uintptr_t LoopParam = 0x1F0;
            static constexpr std::uintptr_t AutoPagePlaysBlankPagesParam = 0x200;
            static constexpr std::uintptr_t bMonophonic = 0x210;
            static constexpr std::uintptr_t bSupportsContinuation = 0x211;
            static constexpr std::uintptr_t StepRate = 0x214;
            static constexpr std::uintptr_t StepBeatScale = 0x218;
            static constexpr std::uintptr_t bSkipFourthStepInTriplet = 0x21C;
            static constexpr std::uintptr_t NoteStyle = 0x21D;
            static constexpr std::uintptr_t MaxSteps = 0x220;
            static constexpr std::uintptr_t CurrentSteps = 0x224;
            static constexpr std::uintptr_t bMatchStepsToTimeSignature = 0x228;
            static constexpr std::uintptr_t MaxPages = 0x22C;
            static constexpr std::uintptr_t CurrentPage = 0x230;
            static constexpr std::uintptr_t MaxTracks = 0x234;
            static constexpr std::uintptr_t CurrentTracks = 0x238;
            static constexpr std::uintptr_t LocalInteractionStartTrackIndex = 0x23C;
            static constexpr std::uintptr_t LocalInteractionStartStepIndex = 0x240;
            static constexpr std::uintptr_t bAutoPage = 0x244;
            static constexpr std::uintptr_t bAutoPagePlaysBlankPages = 0x245;
            static constexpr std::uintptr_t bLoop = 0x246;
            static constexpr std::uintptr_t RandomizationCommonSampleSize = 0x247;
            static constexpr std::uintptr_t RandomizationRestSelectionMaxPct = 0x248;
            static constexpr std::uintptr_t RandomizationCommonPitchSelectionMaxPct = 0x24C;
            static constexpr std::uintptr_t ContinuationControlClass = 0x250;
            static constexpr std::uintptr_t LocalStepTable = 0x258;
            static constexpr std::uintptr_t PackedStepTable = 0x280;
            static constexpr std::uintptr_t StepSequencerModulatable = 0x2D0;
            static constexpr std::uintptr_t CachedContinuationControl = 0x2D8;
            static constexpr std::uintptr_t ContinuationRowIndex = 0x2E0;
            static constexpr std::uintptr_t ContinuationStepIndex = 0x2E4;
            static constexpr std::uintptr_t MetaSoundMidiStepSequence = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 49> Properties{{
            {"OnNumTracksChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnNumStepsChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnPageChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnStepRateChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"OnTimeSignatureChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"OnBeatScaleChanged", 0x120, "MulticastInlineDelegateProperty"},
            {"OnBeatOffsetChanged", 0x130, "MulticastInlineDelegateProperty"},
            {"OnStepChanged", 0x140, "MulticastInlineDelegateProperty"},
            {"OnNoteStyleChanged", 0x150, "MulticastInlineDelegateProperty"},
            {"OnFullTableChanged", 0x160, "MulticastInlineDelegateProperty"},
            {"OnPageCleared", 0x170, "MulticastInlineDelegateProperty"},
            {"OnLoopEnded", 0x180, "MulticastInlineDelegateProperty"},
            {"LengthParam", 0x190, "StrProperty"},
            {"DurationParam", 0x1A0, "StrProperty"},
            {"PageParam", 0x1B0, "StrProperty"},
            {"AutoPageParam", 0x1C0, "StrProperty"},
            {"OctaveParam", 0x1D0, "StrProperty"},
            {"NoteStyleParam", 0x1E0, "StrProperty"},
            {"LoopParam", 0x1F0, "StrProperty"},
            {"AutoPagePlaysBlankPagesParam", 0x200, "StrProperty"},
            {"bMonophonic", 0x210, "BoolProperty"},
            {"bSupportsContinuation", 0x211, "BoolProperty"},
            {"StepRate", 0x214, "FloatProperty"},
            {"StepBeatScale", 0x218, "FloatProperty"},
            {"bSkipFourthStepInTriplet", 0x21C, "BoolProperty"},
            {"NoteStyle", 0x21D, "EnumProperty"},
            {"MaxSteps", 0x220, "IntProperty"},
            {"CurrentSteps", 0x224, "IntProperty"},
            {"bMatchStepsToTimeSignature", 0x228, "BoolProperty"},
            {"MaxPages", 0x22C, "IntProperty"},
            {"CurrentPage", 0x230, "IntProperty"},
            {"MaxTracks", 0x234, "IntProperty"},
            {"CurrentTracks", 0x238, "IntProperty"},
            {"LocalInteractionStartTrackIndex", 0x23C, "IntProperty"},
            {"LocalInteractionStartStepIndex", 0x240, "IntProperty"},
            {"bAutoPage", 0x244, "BoolProperty"},
            {"bAutoPagePlaysBlankPages", 0x245, "BoolProperty"},
            {"bLoop", 0x246, "BoolProperty"},
            {"RandomizationCommonSampleSize", 0x247, "ByteProperty"},
            {"RandomizationRestSelectionMaxPct", 0x248, "FloatProperty"},
            {"RandomizationCommonPitchSelectionMaxPct", 0x24C, "FloatProperty"},
            {"ContinuationControlClass", 0x250, "ClassProperty"},
            {"LocalStepTable", 0x258, "StructProperty"},
            {"PackedStepTable", 0x280, "StructProperty"},
            {"StepSequencerModulatable", 0x2D0, "ObjectProperty"},
            {"CachedContinuationControl", 0x2D8, "ObjectProperty"},
            {"ContinuationRowIndex", 0x2E0, "IntProperty"},
            {"ContinuationStepIndex", 0x2E4, "IntProperty"},
            {"MetaSoundMidiStepSequence", 0x2F0, "ObjectProperty"},
        }};
    };

    struct FabricStepSequencerGridComponent
    {
        static constexpr std::string_view Name = "FabricStepSequencerGridComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GridExtents = 0x250;
            static constexpr std::uintptr_t GridSpacing = 0x260;
            static constexpr std::uintptr_t SingleTrackNumItemsPerRow = 0x270;
            static constexpr std::uintptr_t EditorPreviewGridSize = 0x278;
            static constexpr std::uintptr_t GridSquareClassPtr = 0x288;
            static constexpr std::uintptr_t GridSquareClass = 0x290;
            static constexpr std::uintptr_t SequencerType = 0x2B0;
            static constexpr std::uintptr_t ActiveTrack = 0x2B4;
            static constexpr std::uintptr_t StepSequencer = 0x2B8;
            static constexpr std::uintptr_t GridRows = 0x2C0;
            static constexpr std::uintptr_t MaxTrackIndexToLoadSquares = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"GridExtents", 0x250, "StructProperty"},
            {"GridSpacing", 0x260, "StructProperty"},
            {"SingleTrackNumItemsPerRow", 0x270, "IntProperty"},
            {"EditorPreviewGridSize", 0x278, "StructProperty"},
            {"GridSquareClassPtr", 0x288, "ClassProperty"},
            {"GridSquareClass", 0x290, "SoftClassProperty"},
            {"SequencerType", 0x2B0, "ByteProperty"},
            {"ActiveTrack", 0x2B4, "IntProperty"},
            {"StepSequencer", 0x2B8, "ObjectProperty"},
            {"GridRows", 0x2C0, "ArrayProperty"},
            {"MaxTrackIndexToLoadSquares", 0x2F0, "IntProperty"},
        }};
    };

    struct FabricStepSequencerGridSquareComponent
    {
        static constexpr std::string_view Name = "FabricStepSequencerGridSquareComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ContinuationControlInteractionDelay = 0x6B8;
            static constexpr std::uintptr_t AssignedStepSequencer = 0x6C0;
            static constexpr std::uintptr_t ActiveTrack = 0x6C8;
            static constexpr std::uintptr_t AssignedStep = 0x6CC;
            static constexpr std::uintptr_t PreviousFocusStepIndex = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ContinuationControlInteractionDelay", 0x6B8, "FloatProperty"},
            {"AssignedStepSequencer", 0x6C0, "ObjectProperty"},
            {"ActiveTrack", 0x6C8, "IntProperty"},
            {"AssignedStep", 0x6CC, "IntProperty"},
            {"PreviousFocusStepIndex", 0x6D0, "IntProperty"},
        }};
    };

    struct FabricStepSequencerModulatable
    {
        static constexpr std::string_view Name = "FabricStepSequencerModulatable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsChromatic = 0x168;
            static constexpr std::uintptr_t bModulationValueChanged = 0x169;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsChromatic", 0x168, "BoolProperty"},
            {"bModulationValueChanged", 0x169, "BoolProperty"},
        }};
    };

    struct FabricSteppedPreviewFXComponent
    {
        static constexpr std::string_view Name = "FabricSteppedPreviewFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfSteps = 0xA50;
            static constexpr std::uintptr_t bManuallySpaceMeshInstances = 0xA54;
            static constexpr std::uintptr_t bAllowMultipleRows = 0xA55;
            static constexpr std::uintptr_t InstanceCountPerRow = 0xA58;
            static constexpr std::uintptr_t SpaceBetweenInstanceRows = 0xA5C;
            static constexpr std::uintptr_t bAlignToTransformCenter = 0xA60;
            static constexpr std::uintptr_t CenterAlignmentBounds = 0xA64;
            static constexpr std::uintptr_t DistanceBetweenInstances = 0xA68;
            static constexpr std::uintptr_t DistanceBetweenTripletInstances = 0xA6C;
            static constexpr std::uintptr_t DistanceBetweenInstanceSets = 0xA70;
            static constexpr std::uintptr_t DistanceBetweenTripletInstanceSets = 0xA74;
            static constexpr std::uintptr_t NoteStyle = 0xA78;
            static constexpr std::uintptr_t CPDDeviceEnabled = 0xA7C;
            static constexpr std::uintptr_t CPDNumSteps = 0xA80;
            static constexpr std::uintptr_t PICDNoteOn = 0xA84;
            static constexpr std::uintptr_t PICDNoteLength = 0xA88;
            static constexpr std::uintptr_t PICDSpanLength = 0xA8C;
            static constexpr std::uintptr_t PICDNoteTime = 0xA90;
            static constexpr std::uintptr_t PICDGenericFloatIndex = 0xA94;
            static constexpr std::uintptr_t LengthStepBeats = 0xA98;
            static constexpr std::uintptr_t StepRate = 0xA9C;
            static constexpr std::uintptr_t StepBeatScale = 0xAA0;
            static constexpr std::uintptr_t StepBeatOffset = 0xAA4;
            static constexpr std::uintptr_t TimeSignatureNumerator = 0xAA8;
            static constexpr std::uintptr_t TimeSignatureDenominator = 0xAAC;
            static constexpr std::uintptr_t LengthTrackBeats = 0xAB0;
            static constexpr std::uintptr_t InstanceSpace = 0xAB8;
            static constexpr std::uintptr_t InstanceSetSpace = 0xAC0;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"NumberOfSteps", 0xA50, "IntProperty"},
            {"bManuallySpaceMeshInstances", 0xA54, "BoolProperty"},
            {"bAllowMultipleRows", 0xA55, "BoolProperty"},
            {"InstanceCountPerRow", 0xA58, "IntProperty"},
            {"SpaceBetweenInstanceRows", 0xA5C, "FloatProperty"},
            {"bAlignToTransformCenter", 0xA60, "BoolProperty"},
            {"CenterAlignmentBounds", 0xA64, "FloatProperty"},
            {"DistanceBetweenInstances", 0xA68, "FloatProperty"},
            {"DistanceBetweenTripletInstances", 0xA6C, "FloatProperty"},
            {"DistanceBetweenInstanceSets", 0xA70, "FloatProperty"},
            {"DistanceBetweenTripletInstanceSets", 0xA74, "FloatProperty"},
            {"NoteStyle", 0xA78, "EnumProperty"},
            {"CPDDeviceEnabled", 0xA7C, "IntProperty"},
            {"CPDNumSteps", 0xA80, "IntProperty"},
            {"PICDNoteOn", 0xA84, "IntProperty"},
            {"PICDNoteLength", 0xA88, "IntProperty"},
            {"PICDSpanLength", 0xA8C, "IntProperty"},
            {"PICDNoteTime", 0xA90, "IntProperty"},
            {"PICDGenericFloatIndex", 0xA94, "IntProperty"},
            {"LengthStepBeats", 0xA98, "FloatProperty"},
            {"StepRate", 0xA9C, "FloatProperty"},
            {"StepBeatScale", 0xAA0, "FloatProperty"},
            {"StepBeatOffset", 0xAA4, "FloatProperty"},
            {"TimeSignatureNumerator", 0xAA8, "IntProperty"},
            {"TimeSignatureDenominator", 0xAAC, "IntProperty"},
            {"LengthTrackBeats", 0xAB0, "FloatProperty"},
            {"InstanceSpace", 0xAB8, "DoubleProperty"},
            {"InstanceSetSpace", 0xAC0, "DoubleProperty"},
        }};
    };

    struct FabricTextureGenerator
    {
        static constexpr std::string_view Name = "FabricTextureGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricTextureModifier
    {
        static constexpr std::string_view Name = "FabricTextureModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricTextureModifierBase
    {
        static constexpr std::string_view Name = "FabricTextureModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSourceTexturesChanged = 0xE8;
            static constexpr std::uintptr_t ModifiedTexture = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSourceTexturesChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"ModifiedTexture", 0xF8, "ObjectProperty"},
        }};
    };

    struct FabricTextureProviderBase
    {
        static constexpr std::string_view Name = "FabricTextureProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTextureChanged = 0x28;
            static constexpr std::uintptr_t SourceTexture = 0x38;
            static constexpr std::uintptr_t CurrentCableFloatValue = 0x50;
            static constexpr std::uintptr_t CurrentCableFloatDirection = 0x54;
            static constexpr std::uintptr_t TimeElapsedSinceLastCableFloatDirty = 0x58;
            static constexpr std::uintptr_t bCurrentCableFloatDirty = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnTextureChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"SourceTexture", 0x38, "StructProperty"},
            {"CurrentCableFloatValue", 0x50, "FloatProperty"},
            {"CurrentCableFloatDirection", 0x54, "FloatProperty"},
            {"TimeElapsedSinceLastCableFloatDirty", 0x58, "FloatProperty"},
            {"bCurrentCableFloatDirty", 0x5C, "BoolProperty"},
        }};
    };

    struct FabricTextureReceiver
    {
        static constexpr std::string_view Name = "FabricTextureReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricTextureTreeNode
    {
        static constexpr std::string_view Name = "FabricTextureTreeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x28;
            static constexpr std::uintptr_t Texture = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Children", 0x28, "ArrayProperty"},
            {"Texture", 0x38, "StructProperty"},
        }};
    };

    struct FabricTimelinePreviewComponent
    {
        static constexpr std::string_view Name = "FabricTimelinePreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTimeline = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentTimeline", 0xC0, "ObjectProperty"},
        }};
    };

    struct FabricTimelineSyncComponent
    {
        static constexpr std::string_view Name = "FabricTimelineSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ThresholdForSeekMS = 0xD0;
            static constexpr std::uintptr_t ThresholdForSeekWhenSpeedSyncDisallowedMS = 0xD4;
            static constexpr std::uintptr_t ThresholdForStartSpeedAdjustMS = 0xD8;
            static constexpr std::uintptr_t ThresholdForEndOfSpeedAdjustMS = 0xDC;
            static constexpr std::uintptr_t SpeedAdjustFactor = 0xE0;
            static constexpr std::uintptr_t bPrintToScreen = 0xE4;
            static constexpr std::uintptr_t bLogCorrectedServerTimeDelta = 0xE5;
            static constexpr std::uintptr_t SpeedSyncTimeoutLength = 0xE8;
            static constexpr std::uintptr_t TempoDeltaThrottleSeconds = 0xEC;
            static constexpr std::uintptr_t MassiveSyncErrorTimeThresholdMin = 0xF0;
            static constexpr std::uintptr_t MassiveSyncErrorTimeThresholdMax = 0xF4;
            static constexpr std::uintptr_t MassiveSyncErrorTimeThresholdMultiplier = 0xF8;
            static constexpr std::uintptr_t MetaSoundManager = 0x100;
            static constexpr std::uintptr_t MusicClock = 0x108;
            static constexpr std::uintptr_t ServerTimelineSyncServerSongPosition = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ThresholdForSeekMS", 0xD0, "FloatProperty"},
            {"ThresholdForSeekWhenSpeedSyncDisallowedMS", 0xD4, "FloatProperty"},
            {"ThresholdForStartSpeedAdjustMS", 0xD8, "FloatProperty"},
            {"ThresholdForEndOfSpeedAdjustMS", 0xDC, "FloatProperty"},
            {"SpeedAdjustFactor", 0xE0, "FloatProperty"},
            {"bPrintToScreen", 0xE4, "BoolProperty"},
            {"bLogCorrectedServerTimeDelta", 0xE5, "BoolProperty"},
            {"SpeedSyncTimeoutLength", 0xE8, "FloatProperty"},
            {"TempoDeltaThrottleSeconds", 0xEC, "FloatProperty"},
            {"MassiveSyncErrorTimeThresholdMin", 0xF0, "FloatProperty"},
            {"MassiveSyncErrorTimeThresholdMax", 0xF4, "FloatProperty"},
            {"MassiveSyncErrorTimeThresholdMultiplier", 0xF8, "FloatProperty"},
            {"MetaSoundManager", 0x100, "ObjectProperty"},
            {"MusicClock", 0x108, "ObjectProperty"},
            {"ServerTimelineSyncServerSongPosition", 0x118, "StructProperty"},
        }};
    };

    struct FabricTimelineSyncTargetInterface
    {
        static constexpr std::string_view Name = "FabricTimelineSyncTargetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FabricVFXTopperDataAsset
    {
        static constexpr std::string_view Name = "FabricVFXTopperDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VFXTopperDataEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VFXTopperDataEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct FabricWaveformTexture
    {
        static constexpr std::string_view Name = "FabricWaveformTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WaveformNumSamplesHeld = 0x30;
            static constexpr std::uintptr_t WaveformSmoothingDistance = 0x34;
            static constexpr std::uintptr_t WaveformSmoothingFactor = 0x38;
            static constexpr std::uintptr_t WaveformDecayPerSecond = 0x3C;
            static constexpr std::uintptr_t WaveformTexture = 0x40;
            static constexpr std::uintptr_t bEnableTextureRequests = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WaveformNumSamplesHeld", 0x30, "IntProperty"},
            {"WaveformSmoothingDistance", 0x34, "IntProperty"},
            {"WaveformSmoothingFactor", 0x38, "FloatProperty"},
            {"WaveformDecayPerSecond", 0x3C, "FloatProperty"},
            {"WaveformTexture", 0x40, "ObjectProperty"},
            {"bEnableTextureRequests", 0x48, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_FabricInteractableTargeting
    {
        static constexpr std::string_view Name = "FortGameplayAbility_FabricInteractableTargeting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingPreset = 0xB40;
            static constexpr std::uintptr_t TargetsChangedTag = 0xB48;
            static constexpr std::uintptr_t TargetingInterval = 0xB50;
            static constexpr std::uintptr_t PayloadCache = 0xB78;
            static constexpr std::uintptr_t AsyncTargetingHandle = 0xB80;
            static constexpr std::uintptr_t TargetingTimerHandle = 0xB88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetingPreset", 0xB40, "ObjectProperty"},
            {"TargetsChangedTag", 0xB48, "StructProperty"},
            {"TargetingInterval", 0xB50, "StructProperty"},
            {"PayloadCache", 0xB78, "ObjectProperty"},
            {"AsyncTargetingHandle", 0xB80, "StructProperty"},
            {"TargetingTimerHandle", 0xB88, "StructProperty"},
        }};
    };

}

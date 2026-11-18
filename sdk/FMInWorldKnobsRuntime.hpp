#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMInWorldKnobsRuntime
{
    struct FMInWorldCableOptionsComponent
    {
        static constexpr std::string_view Name = "FMInWorldCableOptionsComponent";
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

    struct FMInWorldDrumPlayerOptionsComponent
    {
        static constexpr std::string_view Name = "FMInWorldDrumPlayerOptionsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMInWorldKnobOptionsBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotPropertyNameToParam = 0x1A8;
            static constexpr std::uintptr_t LinkButtonComponents = 0x1B8;
            static constexpr std::uintptr_t SelectionSampleCarouselComponents = 0x1C8;
            static constexpr std::uintptr_t ParamNameToLinkedCheckBoxWidgetText = 0x1D8;
            static constexpr std::uintptr_t ParamNameToSamplePropertyBoxWidgetText = 0x1E8;
            static constexpr std::uintptr_t LinkedCheckBoxToolTipText = 0x1F8;
            static constexpr std::uintptr_t SampleNamePropertyBoxToolTipText = 0x208;
            static constexpr std::uintptr_t SlotUserOptions = 0x218;
            static constexpr std::uintptr_t SlotLinkUserOptions = 0x228;
            static constexpr std::uintptr_t SlotSampleUserOptions = 0x238;
            static constexpr std::uintptr_t MainKitParamUseroption = 0x248;
            static constexpr std::uintptr_t DrumPlayerBank = 0x258;
            static constexpr std::uintptr_t MainKitIndexComponent = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SlotPropertyNameToParam", 0x1A8, "MapProperty"},
            {"LinkButtonComponents", 0x1B8, "ArrayProperty"},
            {"SelectionSampleCarouselComponents", 0x1C8, "ArrayProperty"},
            {"ParamNameToLinkedCheckBoxWidgetText", 0x1D8, "MapProperty"},
            {"ParamNameToSamplePropertyBoxWidgetText", 0x1E8, "MapProperty"},
            {"LinkedCheckBoxToolTipText", 0x1F8, "TextProperty"},
            {"SampleNamePropertyBoxToolTipText", 0x208, "TextProperty"},
            {"SlotUserOptions", 0x218, "ArrayProperty"},
            {"SlotLinkUserOptions", 0x228, "ArrayProperty"},
            {"SlotSampleUserOptions", 0x238, "ArrayProperty"},
            {"MainKitParamUseroption", 0x248, "StrProperty"},
            {"DrumPlayerBank", 0x258, "ObjectProperty"},
            {"MainKitIndexComponent", 0x260, "ObjectProperty"},
        }};
    };

    struct FMInWorldKnobActorBase
    {
        static constexpr std::string_view Name = "FMInWorldKnobActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnModulatedPropertyValueChanged = 0x298;
            static constexpr std::uintptr_t OnKnobRuntimeValueChanged = 0x2A8;
            static constexpr std::uintptr_t OnKnobSerializedValueChanged = 0x2B8;
            static constexpr std::uintptr_t OnFloatProviderConnectionChanged = 0x2C8;
            static constexpr std::uintptr_t OptionKey = 0x2D8;
            static constexpr std::uintptr_t OverriddenTitle = 0x2E8;
            static constexpr std::uintptr_t OverriddenDescription = 0x2F8;
            static constexpr std::uintptr_t bCanBeModulated = 0x308;
            static constexpr std::uintptr_t bKnobEnabled = 0x309;
            static constexpr std::uintptr_t bKnobDisplayOnly = 0x30A;
            static constexpr std::uintptr_t bRestrictSettingNumericValues = 0x30B;
            static constexpr std::uintptr_t ModulatorPortParent = 0x310;
            static constexpr std::uintptr_t ModulatorPort = 0x318;
            static constexpr std::uintptr_t GameplayTags = 0x328;
            static constexpr std::uintptr_t MyUserOption = 0x350;
            static constexpr std::uintptr_t CurrentFloatProviders = 0x398;
            static constexpr std::uintptr_t HitComponent = 0x3C0;
            static constexpr std::uintptr_t InteractingController = 0x3C8;
            static constexpr std::uintptr_t InteractableType = 0x3D0;
            static constexpr std::uintptr_t WidgetViewModel = 0x3D4;
            static constexpr std::uintptr_t AttachedButtons = 0x3E0;
            static constexpr std::uintptr_t OverrideLabels = 0x3F0;
            static constexpr std::uintptr_t OptionLabels = 0x400;
            static constexpr std::uintptr_t OptionValues = 0x410;
            static constexpr std::uintptr_t SerializedOptionIndex = 0x420;
            static constexpr std::uintptr_t CurrentOptionIndex = 0x424;
            static constexpr std::uintptr_t SerializedUnrestrictedOptionValue = 0x428;
            static constexpr std::uintptr_t CurrentUnrestrictedOptionValue = 0x438;
            static constexpr std::uintptr_t CurrentAlpha = 0x448;
            static constexpr std::uintptr_t AlphaAtStartOfTransition = 0x44C;
            static constexpr std::uintptr_t ClampedKnobValue = 0x450;
            static constexpr std::uintptr_t bTrackingInput = 0x454;
            static constexpr std::uintptr_t bIsVisibilityBound = 0x455;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"OnModulatedPropertyValueChanged", 0x298, "MulticastInlineDelegateProperty"},
            {"OnKnobRuntimeValueChanged", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnKnobSerializedValueChanged", 0x2B8, "MulticastInlineDelegateProperty"},
            {"OnFloatProviderConnectionChanged", 0x2C8, "MulticastInlineDelegateProperty"},
            {"OptionKey", 0x2D8, "StrProperty"},
            {"OverriddenTitle", 0x2E8, "TextProperty"},
            {"OverriddenDescription", 0x2F8, "TextProperty"},
            {"bCanBeModulated", 0x308, "BoolProperty"},
            {"bKnobEnabled", 0x309, "BoolProperty"},
            {"bKnobDisplayOnly", 0x30A, "BoolProperty"},
            {"bRestrictSettingNumericValues", 0x30B, "BoolProperty"},
            {"ModulatorPortParent", 0x310, "ObjectProperty"},
            {"ModulatorPort", 0x318, "ObjectProperty"},
            {"GameplayTags", 0x328, "StructProperty"},
            {"MyUserOption", 0x350, "ObjectProperty"},
            {"CurrentFloatProviders", 0x398, "ArrayProperty"},
            {"HitComponent", 0x3C0, "ObjectProperty"},
            {"InteractingController", 0x3C8, "WeakObjectProperty"},
            {"InteractableType", 0x3D0, "EnumProperty"},
            {"WidgetViewModel", 0x3D4, "WeakObjectProperty"},
            {"AttachedButtons", 0x3E0, "ArrayProperty"},
            {"OverrideLabels", 0x3F0, "ArrayProperty"},
            {"OptionLabels", 0x400, "ArrayProperty"},
            {"OptionValues", 0x410, "ArrayProperty"},
            {"SerializedOptionIndex", 0x420, "IntProperty"},
            {"CurrentOptionIndex", 0x424, "IntProperty"},
            {"SerializedUnrestrictedOptionValue", 0x428, "StrProperty"},
            {"CurrentUnrestrictedOptionValue", 0x438, "StrProperty"},
            {"CurrentAlpha", 0x448, "FloatProperty"},
            {"AlphaAtStartOfTransition", 0x44C, "FloatProperty"},
            {"ClampedKnobValue", 0x450, "FloatProperty"},
            {"bTrackingInput", 0x454, "BoolProperty"},
            {"bIsVisibilityBound", 0x455, "BoolProperty"},
        }};
    };

    struct FMInWorldKnobActorCopyComponent
    {
        static constexpr std::string_view Name = "FMInWorldKnobActorCopyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnModulatedPropertyValueChanged = 0x328;
            static constexpr std::uintptr_t OnKnobRuntimeValueChanged = 0x338;
            static constexpr std::uintptr_t OnKnobSerializedValueChanged = 0x348;
            static constexpr std::uintptr_t OnFloatProviderConnectionChanged = 0x358;
            static constexpr std::uintptr_t OnKnobActorSet = 0x368;
            static constexpr std::uintptr_t DefaultKnobActorClass = 0x378;
            static constexpr std::uintptr_t InWorldKnobActor = 0x380;
            static constexpr std::uintptr_t OptionKey = 0x388;
            static constexpr std::uintptr_t OverriddenTitle = 0x398;
            static constexpr std::uintptr_t bCanBeModulated = 0x3A8;
            static constexpr std::uintptr_t bKnobEnabled = 0x3A9;
            static constexpr std::uintptr_t OuterUserOption = 0x3B0;
            static constexpr std::uintptr_t OuterFabricUserOption = 0x3B8;
            static constexpr std::uintptr_t CopiedUserOption = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnModulatedPropertyValueChanged", 0x328, "MulticastInlineDelegateProperty"},
            {"OnKnobRuntimeValueChanged", 0x338, "MulticastInlineDelegateProperty"},
            {"OnKnobSerializedValueChanged", 0x348, "MulticastInlineDelegateProperty"},
            {"OnFloatProviderConnectionChanged", 0x358, "MulticastInlineDelegateProperty"},
            {"OnKnobActorSet", 0x368, "MulticastInlineDelegateProperty"},
            {"DefaultKnobActorClass", 0x378, "ClassProperty"},
            {"InWorldKnobActor", 0x380, "ObjectProperty"},
            {"OptionKey", 0x388, "StrProperty"},
            {"OverriddenTitle", 0x398, "TextProperty"},
            {"bCanBeModulated", 0x3A8, "BoolProperty"},
            {"bKnobEnabled", 0x3A9, "BoolProperty"},
            {"OuterUserOption", 0x3B0, "ObjectProperty"},
            {"OuterFabricUserOption", 0x3B8, "StructProperty"},
            {"CopiedUserOption", 0x420, "ObjectProperty"},
        }};
    };

    struct FMInWorldKnobOptionsBaseComponent
    {
        static constexpr std::string_view Name = "FMInWorldKnobOptionsBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInitialKnobValuesLoaded = 0xC8;
            static constexpr std::uintptr_t OnAllKnobsLoaded = 0xD8;
            static constexpr std::uintptr_t OnAnyKnobRuntimeValueChanged = 0xE8;
            static constexpr std::uintptr_t OnAnyKnobSerializedValueChanged = 0xF8;
            static constexpr std::uintptr_t InWorldKnobInterfaceObjects = 0x108;
            static constexpr std::uintptr_t BuildingActorOwner = 0x118;
            static constexpr std::uintptr_t OwnerClass = 0x120;
            static constexpr std::uintptr_t SaveComponent = 0x128;
            static constexpr std::uintptr_t PropertiesEditedByUserOptions = 0x130;
            static constexpr std::uintptr_t OptionKeyToInWorldKnobObject = 0x140;
            static constexpr std::uintptr_t OptionKeyToModulatorPort = 0x150;
            static constexpr std::uintptr_t PendingFabricModulatables = 0x160;
            static constexpr std::uintptr_t ActorSaveRequestTimer = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnInitialKnobValuesLoaded", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnAllKnobsLoaded", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnAnyKnobRuntimeValueChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnAnyKnobSerializedValueChanged", 0xF8, "MulticastInlineDelegateProperty"},
            {"InWorldKnobInterfaceObjects", 0x108, "SetProperty"},
            {"BuildingActorOwner", 0x118, "ObjectProperty"},
            {"OwnerClass", 0x120, "ClassProperty"},
            {"SaveComponent", 0x128, "ObjectProperty"},
            {"PropertiesEditedByUserOptions", 0x130, "MapProperty"},
            {"OptionKeyToInWorldKnobObject", 0x140, "MapProperty"},
            {"OptionKeyToModulatorPort", 0x150, "MapProperty"},
            {"PendingFabricModulatables", 0x160, "ArrayProperty"},
            {"ActorSaveRequestTimer", 0x170, "StructProperty"},
        }};
    };

    struct FMInWorldKnobOptionsComponent
    {
        static constexpr std::string_view Name = "FMInWorldKnobOptionsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMInWorldKnobOptionsBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedInWorldKnobInterfaceObjects = 0x1A8;
            static constexpr std::uintptr_t ReplicatedFabricInteractableObjects = 0x1B8;
            static constexpr std::uintptr_t ReplicatedModulatorPorts = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReplicatedInWorldKnobInterfaceObjects", 0x1A8, "ArrayProperty"},
            {"ReplicatedFabricInteractableObjects", 0x1B8, "ArrayProperty"},
            {"ReplicatedModulatorPorts", 0x1C8, "ArrayProperty"},
        }};
    };

    struct FabricChildActorComponent
    {
        static constexpr std::string_view Name = "FabricChildActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InWorldKnobModulatorPort = 0x2A0;
            static constexpr std::uintptr_t bUseScreenGrid = 0x2A8;
            static constexpr std::uintptr_t ScreenGridPosition = 0x2B0;
            static constexpr std::uintptr_t ModulatorPortSaveData = 0x2C0;
            static constexpr std::uintptr_t CableManagerClassForModulatorPorts = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InWorldKnobModulatorPort", 0x2A0, "ObjectProperty"},
            {"bUseScreenGrid", 0x2A8, "BoolProperty"},
            {"ScreenGridPosition", 0x2B0, "StructProperty"},
            {"ModulatorPortSaveData", 0x2C0, "StructProperty"},
            {"CableManagerClassForModulatorPorts", 0x308, "ClassProperty"},
        }};
    };

    struct FabricChildActorTickSubsystem
    {
        static constexpr std::string_view Name = "FabricChildActorTickSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortManagedTickSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildActorComponentsPendingSpawn = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildActorComponentsPendingSpawn", 0xA0, "ArrayProperty"},
        }};
    };

    struct FabricScreenComponent
    {
        static constexpr std::string_view Name = "FabricScreenComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWidgetCreated = 0x240;
            static constexpr std::uintptr_t OnWidgetAdded = 0x250;
            static constexpr std::uintptr_t ScreenWidget = 0x278;
            static constexpr std::uintptr_t ScreenWidgetComponent = 0x280;
            static constexpr std::uintptr_t CopyComponentsToWidget = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnWidgetCreated", 0x240, "MulticastInlineDelegateProperty"},
            {"OnWidgetAdded", 0x250, "MulticastInlineDelegateProperty"},
            {"ScreenWidget", 0x278, "WeakObjectProperty"},
            {"ScreenWidgetComponent", 0x280, "WeakObjectProperty"},
            {"CopyComponentsToWidget", 0x288, "MapProperty"},
        }};
    };

    struct FabricScreenLayoutDataAsset
    {
        static constexpr std::string_view Name = "FabricScreenLayoutDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Layout = 0x28;
            static constexpr std::uintptr_t AdditionalWidgetLayout = 0x38;
            static constexpr std::uintptr_t FabricScreenWidgetClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Layout", 0x28, "ArrayProperty"},
            {"AdditionalWidgetLayout", 0x38, "ArrayProperty"},
            {"FabricScreenWidgetClass", 0x48, "ClassProperty"},
        }};
    };

    struct FabricUserOptionPresetAsset
    {
        static constexpr std::string_view Name = "FabricUserOptionPresetAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UserOptionPreset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserOptionPreset", 0x28, "StructProperty"},
        }};
    };

    struct FabricUserOptionSaveComponent
    {
        static constexpr std::string_view Name = "FabricUserOptionSaveComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UserOptionsToSave = 0xC8;
            static constexpr std::uintptr_t MaxSaveSlots = 0xD8;
            static constexpr std::uintptr_t SaveIndexParam = 0xE0;
            static constexpr std::uintptr_t PresetAssets = 0xF0;
            static constexpr std::uintptr_t PresetIndexParam = 0x100;
            static constexpr std::uintptr_t ApplyIndexImmediatelyToggleParam = 0x110;
            static constexpr std::uintptr_t OnActiveOverridesChanged = 0x120;
            static constexpr std::uintptr_t Owner = 0x130;
            static constexpr std::uintptr_t UserOptionSaveModulatable = 0x138;
            static constexpr std::uintptr_t Presets = 0x148;
            static constexpr std::uintptr_t Saves = 0x158;
            static constexpr std::uintptr_t FloatUserOptions = 0x168;
            static constexpr std::uintptr_t ActiveSaveIndex = 0x178;
            static constexpr std::uintptr_t ActivePresetIndex = 0x17C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"UserOptionsToSave", 0xC8, "ArrayProperty"},
            {"MaxSaveSlots", 0xD8, "IntProperty"},
            {"SaveIndexParam", 0xE0, "StrProperty"},
            {"PresetAssets", 0xF0, "ArrayProperty"},
            {"PresetIndexParam", 0x100, "StrProperty"},
            {"ApplyIndexImmediatelyToggleParam", 0x110, "StrProperty"},
            {"OnActiveOverridesChanged", 0x120, "MulticastInlineDelegateProperty"},
            {"Owner", 0x130, "ObjectProperty"},
            {"UserOptionSaveModulatable", 0x138, "ObjectProperty"},
            {"Presets", 0x148, "ArrayProperty"},
            {"Saves", 0x158, "ArrayProperty"},
            {"FloatUserOptions", 0x168, "SetProperty"},
            {"ActiveSaveIndex", 0x178, "IntProperty"},
            {"ActivePresetIndex", 0x17C, "IntProperty"},
        }};
    };

    struct FabricUserOptionSaveModulatable
    {
        static constexpr std::string_view Name = "FabricUserOptionSaveModulatable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricModulatable";
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

    struct InWorldKnobInterface
    {
        static constexpr std::string_view Name = "InWorldKnobInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlaylistUserOptionFMIncomingCableConnection
    {
        static constexpr std::string_view Name = "PlaylistUserOptionFMIncomingCableConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

    struct PlaylistUserOptionFMLinkPreset
    {
        static constexpr std::string_view Name = "PlaylistUserOptionFMLinkPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

    struct PlaylistUserOptionFMOutgoingCableConnection
    {
        static constexpr std::string_view Name = "PlaylistUserOptionFMOutgoingCableConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

}

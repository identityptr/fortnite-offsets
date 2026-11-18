#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomizableUIClient
{
    struct ControlPanelWidget
    {
        static constexpr std::string_view Name = "ControlPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PanelOpacityWhenDragedOver = 0x330;
            static constexpr std::uintptr_t LayoutProfileManager = 0x3C0;
            static constexpr std::uintptr_t Button_Save = 0x3C8;
            static constexpr std::uintptr_t Button_RevertAll = 0x3D0;
            static constexpr std::uintptr_t Button_Exit = 0x3D8;
            static constexpr std::uintptr_t Button_OpenProfileSelectionPanel = 0x3E0;
            static constexpr std::uintptr_t Button_SwitchContexts = 0x3E8;
            static constexpr std::uintptr_t Button_SwitchProperties = 0x3F0;
            static constexpr std::uintptr_t GridSnapOption_Controls = 0x3F8;
            static constexpr std::uintptr_t Switcher_Controls = 0x400;
            static constexpr std::uintptr_t UISceneSelector = 0x408;
            static constexpr std::uintptr_t PropertyPanel_WidgetProperties = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PanelOpacityWhenDragedOver", 0x330, "FloatProperty"},
            {"LayoutProfileManager", 0x3C0, "ObjectProperty"},
            {"Button_Save", 0x3C8, "ObjectProperty"},
            {"Button_RevertAll", 0x3D0, "ObjectProperty"},
            {"Button_Exit", 0x3D8, "ObjectProperty"},
            {"Button_OpenProfileSelectionPanel", 0x3E0, "ObjectProperty"},
            {"Button_SwitchContexts", 0x3E8, "ObjectProperty"},
            {"Button_SwitchProperties", 0x3F0, "ObjectProperty"},
            {"GridSnapOption_Controls", 0x3F8, "ObjectProperty"},
            {"Switcher_Controls", 0x400, "ObjectProperty"},
            {"UISceneSelector", 0x408, "ObjectProperty"},
            {"PropertyPanel_WidgetProperties", 0x410, "ObjectProperty"},
        }};
    };

    struct CreateCustomizableWidgetOperation
    {
        static constexpr std::string_view Name = "CreateCustomizableWidgetOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DragDropOperation";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableInstancesPool = 0x90;
            static constexpr std::uintptr_t Scene = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AvailableInstancesPool", 0x90, "SetProperty"},
            {"Scene", 0xA0, "SoftObjectProperty"},
        }};
    };

    struct CustomLayoutSelectionPanelWidget
    {
        static constexpr std::string_view Name = "CustomLayoutSelectionPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutProfileManager = 0x330;
            static constexpr std::uintptr_t HUDLayoutToolPopupClass = 0x338;
            static constexpr std::uintptr_t HUDLayoutToolTextInputPopupClass = 0x340;
            static constexpr std::uintptr_t NoCustomLayoutSlotsLeftPopupContent = 0x348;
            static constexpr std::uintptr_t DeleteCustomLayoutPopupContent = 0x390;
            static constexpr std::uintptr_t RenamePopupContent = 0x3D8;
            static constexpr std::uintptr_t CustomizableUIRegistry = 0x420;
            static constexpr std::uintptr_t EntryBox_Presets = 0x450;
            static constexpr std::uintptr_t EntryBox_CustomLayouts = 0x458;
            static constexpr std::uintptr_t EntryBox_EmptyCustomLayoutSlots = 0x460;
            static constexpr std::uintptr_t Button_Exit = 0x468;
            static constexpr std::uintptr_t Button_EditLayout = 0x470;
            static constexpr std::uintptr_t Button_Convert = 0x478;
            static constexpr std::uintptr_t Button_Copy = 0x480;
            static constexpr std::uintptr_t Button_Delete = 0x488;
            static constexpr std::uintptr_t Button_Rename = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"LayoutProfileManager", 0x330, "ObjectProperty"},
            {"HUDLayoutToolPopupClass", 0x338, "ClassProperty"},
            {"HUDLayoutToolTextInputPopupClass", 0x340, "ClassProperty"},
            {"NoCustomLayoutSlotsLeftPopupContent", 0x348, "StructProperty"},
            {"DeleteCustomLayoutPopupContent", 0x390, "StructProperty"},
            {"RenamePopupContent", 0x3D8, "StructProperty"},
            {"CustomizableUIRegistry", 0x420, "ObjectProperty"},
            {"EntryBox_Presets", 0x450, "ObjectProperty"},
            {"EntryBox_CustomLayouts", 0x458, "ObjectProperty"},
            {"EntryBox_EmptyCustomLayoutSlots", 0x460, "ObjectProperty"},
            {"Button_Exit", 0x468, "ObjectProperty"},
            {"Button_EditLayout", 0x470, "ObjectProperty"},
            {"Button_Convert", 0x478, "ObjectProperty"},
            {"Button_Copy", 0x480, "ObjectProperty"},
            {"Button_Delete", 0x488, "ObjectProperty"},
            {"Button_Rename", 0x490, "ObjectProperty"},
        }};
    };

    struct CustomizableCoreDirector
    {
        static constexpr std::string_view Name = "CustomizableCoreDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0x278;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x288;
            static constexpr std::uintptr_t bEnabledDuringReplay = 0x290;
            static constexpr std::uintptr_t ScenesManuallyAdded = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultScenes", 0x278, "ArrayProperty"},
            {"OwningLocalPlayer", 0x288, "WeakObjectProperty"},
            {"bEnabledDuringReplay", 0x290, "BoolProperty"},
            {"ScenesManuallyAdded", 0x298, "ArrayProperty"},
        }};
    };

    struct CustomizableLayoutPresetCollection
    {
        static constexpr std::string_view Name = "CustomizableLayoutPresetCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLayoutPreset = 0x28;
            static constexpr std::uintptr_t AdditionalLayoutPresets = 0x58;
            static constexpr std::uintptr_t bIsDevelopmentOnly = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultLayoutPreset", 0x28, "StructProperty"},
            {"AdditionalLayoutPresets", 0x58, "SetProperty"},
            {"bIsDevelopmentOnly", 0x68, "BoolProperty"},
        }};
    };

    struct CustomizableProperty
    {
        static constexpr std::string_view Name = "CustomizableProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EditConditions = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t PropertyTag = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EditConditions", 0x68, "ArrayProperty"},
            {"DisplayName", 0x78, "TextProperty"},
            {"PropertyTag", 0x88, "StructProperty"},
        }};
    };

    struct CustomizablePropertyExcludeCondition
    {
        static constexpr std::string_view Name = "CustomizablePropertyExcludeCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableProperty_Bool
    {
        static constexpr std::string_view Name = "CustomizableProperty_Bool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x90;
            static constexpr std::uintptr_t CurrentValue = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x90, "BoolProperty"},
            {"CurrentValue", 0x91, "BoolProperty"},
        }};
    };

    struct CustomizableProperty_ComboSlotType
    {
        static constexpr std::string_view Name = "CustomizableProperty_ComboSlotType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty_Int";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x90;
            static constexpr std::uintptr_t CurrentValue = 0x91;
            static constexpr std::uintptr_t Options = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultValue", 0x90, "EnumProperty"},
            {"CurrentValue", 0x91, "EnumProperty"},
            {"Options", 0x98, "MapProperty"},
        }};
    };

    struct CustomizableProperty_Discrete
    {
        static constexpr std::string_view Name = "CustomizableProperty_Discrete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty_Int";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x90;
            static constexpr std::uintptr_t CurrentValue = 0x94;
            static constexpr std::uintptr_t Options = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultValue", 0x90, "IntProperty"},
            {"CurrentValue", 0x94, "IntProperty"},
            {"Options", 0x98, "MapProperty"},
        }};
    };

    struct CustomizableProperty_Float
    {
        static constexpr std::string_view Name = "CustomizableProperty_Float";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x90;
            static constexpr std::uintptr_t LowerBound = 0x94;
            static constexpr std::uintptr_t UpperBound = 0x98;
            static constexpr std::uintptr_t StepSize = 0x9C;
            static constexpr std::uintptr_t FormatStyle = 0xA0;
            static constexpr std::uintptr_t CurrentValue = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DefaultValue", 0x90, "FloatProperty"},
            {"LowerBound", 0x94, "FloatProperty"},
            {"UpperBound", 0x98, "FloatProperty"},
            {"StepSize", 0x9C, "FloatProperty"},
            {"FormatStyle", 0xA0, "EnumProperty"},
            {"CurrentValue", 0xA4, "FloatProperty"},
        }};
    };

    struct CustomizableProperty_Int
    {
        static constexpr std::string_view Name = "CustomizableProperty_Int";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t EditConditions = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t PropertyTag = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EditConditions", 0x68, "ArrayProperty"},
            {"DisplayName", 0x78, "TextProperty"},
            {"PropertyTag", 0x88, "StructProperty"},
        }};
    };

    struct CustomizableProperty_QuickbarLocks
    {
        static constexpr std::string_view Name = "CustomizableProperty_QuickbarLocks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableProperty_Int";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x90;
            static constexpr std::uintptr_t CurrentValue = 0x94;
            static constexpr std::uintptr_t MaximumDisplayedOptions = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultValue", 0x90, "IntProperty"},
            {"CurrentValue", 0x94, "IntProperty"},
            {"MaximumDisplayedOptions", 0x98, "IntProperty"},
        }};
    };

    struct CustomizableUICategoryWidget
    {
        static constexpr std::string_view Name = "CustomizableUICategoryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_CategoryName = 0x330;
            static constexpr std::uintptr_t EntryBox_UIModeCategoryButtons = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_CategoryName", 0x330, "ObjectProperty"},
            {"EntryBox_UIModeCategoryButtons", 0x338, "ObjectProperty"},
        }};
    };

    struct CustomizableUIClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "CustomizableUIClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackActiveLayoutProfile = 0x40;
            static constexpr std::uintptr_t CustomLayoutProfiles = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FallbackActiveLayoutProfile", 0x40, "OptionalProperty"},
            {"CustomLayoutProfiles", 0x90, "ArrayProperty"},
        }};
    };

    struct CustomizableUIDeveloperSettings
    {
        static constexpr std::string_view Name = "CustomizableUIDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLayoutPresetCollection = 0x30;
            static constexpr std::uintptr_t AdditionalLayoutPresetCollections = 0x50;
            static constexpr std::uintptr_t MaxCustomLayoutProfileSaveSlots = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultLayoutPresetCollection", 0x30, "SoftObjectProperty"},
            {"AdditionalLayoutPresetCollections", 0x50, "SetProperty"},
            {"MaxCustomLayoutProfileSaveSlots", 0x60, "IntProperty"},
        }};
    };

    struct CustomizableUIEditor
    {
        static constexpr std::string_view Name = "CustomizableUIEditor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapPercentageToColapsePanels = 0x568;
            static constexpr std::uintptr_t NonEditableHUDWidgetOpacity = 0x56C;
            static constexpr std::uintptr_t PanelOpacityWhenDragedOver = 0x570;
            static constexpr std::uintptr_t OnOpenSubPanelAnimPlaybackSpeed = 0x574;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x578;
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x580;
            static constexpr std::uintptr_t HUDLayoutToolPopupClass = 0x588;
            static constexpr std::uintptr_t HudLayoutToolTutorialPopupClass = 0x590;
            static constexpr std::uintptr_t ExitHudLayoutToolPopupContent = 0x598;
            static constexpr std::uintptr_t DeleteOutOfBoundsHUDProxiesPopupContent = 0x5E0;
            static constexpr std::uintptr_t RevertAllProxiesPopupContent = 0x628;
            static constexpr std::uintptr_t SwitchHUDProfileSavePopupContent = 0x670;
            static constexpr std::uintptr_t SwitchHUDProfileDeletePopupContent = 0x6B8;
            static constexpr std::uintptr_t CreateNewCustomLayoutPopupContent = 0x700;
            static constexpr std::uintptr_t CustomLayoutSlotsFullPopupContent = 0x748;
            static constexpr std::uintptr_t SuccessToasterContent = 0x790;
            static constexpr std::uintptr_t FailureToasterContent = 0x7B8;
            static constexpr std::uintptr_t LocalFailureToasterContent = 0x7E0;
            static constexpr std::uintptr_t CloudFailureToasterContent = 0x808;
            static constexpr std::uintptr_t AnchorsCustomPropertyTag = 0x830;
            static constexpr std::uintptr_t DoubleClickDelay = 0x834;
            static constexpr std::uintptr_t VisibleSceneSet = 0x838;
            static constexpr std::uintptr_t CurrentlyVisibleScenes = 0x840;
            static constexpr std::uintptr_t QueuedPopups = 0x8C8;
            static constexpr std::uintptr_t LayoutProfileManager = 0x900;
            static constexpr std::uintptr_t VirtualCanvas_WidgetLayer = 0x970;
            static constexpr std::uintptr_t CustomizableUIPreviewLayer = 0x978;
            static constexpr std::uintptr_t Overlay_VirtualCanvasWorkspace = 0x980;
            static constexpr std::uintptr_t Grid_Visual = 0x988;
            static constexpr std::uintptr_t Text_ProfileName = 0x990;
            static constexpr std::uintptr_t Text_WidgetName = 0x998;
            static constexpr std::uintptr_t Text_ContextName = 0x9A0;
            static constexpr std::uintptr_t Button_Exit = 0x9A8;
            static constexpr std::uintptr_t Button_ResetVirtualCanvas = 0x9B0;
            static constexpr std::uintptr_t Button_ToggleControlPanel = 0x9B8;
            static constexpr std::uintptr_t Button_ToggleWidgetCatalog = 0x9C0;
            static constexpr std::uintptr_t CanvasPanel_ControlsContainer = 0x9C8;
            static constexpr std::uintptr_t VerticalBox_ControlPanelContainer = 0x9D0;
            static constexpr std::uintptr_t ControlPanel_Controls = 0x9D8;
            static constexpr std::uintptr_t ProfileSelectionPanel_Profiles = 0x9E0;
            static constexpr std::uintptr_t WidgetCatalog_Catalog = 0x9E8;
            static constexpr std::uintptr_t LinkAcrossPanel_LinkManagementWindow = 0x9F0;
            static constexpr std::uintptr_t Anim_ControlPanelToggle = 0x9F8;
            static constexpr std::uintptr_t Anim_ToggleWidgetCatalog = 0xA00;
            static constexpr std::uintptr_t Toaster_Notifications = 0xA08;
            static constexpr std::uintptr_t TooltipLayer_Messages = 0xA10;
            static constexpr std::uintptr_t Overlay_ToolMainOverlay = 0xA18;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"OverlapPercentageToColapsePanels", 0x568, "FloatProperty"},
            {"NonEditableHUDWidgetOpacity", 0x56C, "FloatProperty"},
            {"PanelOpacityWhenDragedOver", 0x570, "FloatProperty"},
            {"OnOpenSubPanelAnimPlaybackSpeed", 0x574, "FloatProperty"},
            {"PrimaryContentSetup", 0x578, "StructProperty"},
            {"CustomizableUIDatabase", 0x580, "ObjectProperty"},
            {"HUDLayoutToolPopupClass", 0x588, "ClassProperty"},
            {"HudLayoutToolTutorialPopupClass", 0x590, "ClassProperty"},
            {"ExitHudLayoutToolPopupContent", 0x598, "StructProperty"},
            {"DeleteOutOfBoundsHUDProxiesPopupContent", 0x5E0, "StructProperty"},
            {"RevertAllProxiesPopupContent", 0x628, "StructProperty"},
            {"SwitchHUDProfileSavePopupContent", 0x670, "StructProperty"},
            {"SwitchHUDProfileDeletePopupContent", 0x6B8, "StructProperty"},
            {"CreateNewCustomLayoutPopupContent", 0x700, "StructProperty"},
            {"CustomLayoutSlotsFullPopupContent", 0x748, "StructProperty"},
            {"SuccessToasterContent", 0x790, "StructProperty"},
            {"FailureToasterContent", 0x7B8, "StructProperty"},
            {"LocalFailureToasterContent", 0x7E0, "StructProperty"},
            {"CloudFailureToasterContent", 0x808, "StructProperty"},
            {"AnchorsCustomPropertyTag", 0x830, "StructProperty"},
            {"DoubleClickDelay", 0x834, "FloatProperty"},
            {"VisibleSceneSet", 0x838, "ObjectProperty"},
            {"CurrentlyVisibleScenes", 0x840, "ArrayProperty"},
            {"QueuedPopups", 0x8C8, "ArrayProperty"},
            {"LayoutProfileManager", 0x900, "ObjectProperty"},
            {"VirtualCanvas_WidgetLayer", 0x970, "ObjectProperty"},
            {"CustomizableUIPreviewLayer", 0x978, "ObjectProperty"},
            {"Overlay_VirtualCanvasWorkspace", 0x980, "ObjectProperty"},
            {"Grid_Visual", 0x988, "ObjectProperty"},
            {"Text_ProfileName", 0x990, "ObjectProperty"},
            {"Text_WidgetName", 0x998, "ObjectProperty"},
            {"Text_ContextName", 0x9A0, "ObjectProperty"},
            {"Button_Exit", 0x9A8, "ObjectProperty"},
            {"Button_ResetVirtualCanvas", 0x9B0, "ObjectProperty"},
            {"Button_ToggleControlPanel", 0x9B8, "ObjectProperty"},
            {"Button_ToggleWidgetCatalog", 0x9C0, "ObjectProperty"},
            {"CanvasPanel_ControlsContainer", 0x9C8, "ObjectProperty"},
            {"VerticalBox_ControlPanelContainer", 0x9D0, "ObjectProperty"},
            {"ControlPanel_Controls", 0x9D8, "ObjectProperty"},
            {"ProfileSelectionPanel_Profiles", 0x9E0, "ObjectProperty"},
            {"WidgetCatalog_Catalog", 0x9E8, "ObjectProperty"},
            {"LinkAcrossPanel_LinkManagementWindow", 0x9F0, "ObjectProperty"},
            {"Anim_ControlPanelToggle", 0x9F8, "ObjectProperty"},
            {"Anim_ToggleWidgetCatalog", 0xA00, "ObjectProperty"},
            {"Toaster_Notifications", 0xA08, "ObjectProperty"},
            {"TooltipLayer_Messages", 0xA10, "ObjectProperty"},
            {"Overlay_ToolMainOverlay", 0xA18, "ObjectProperty"},
        }};
    };

    struct CustomizableUIGameFeatureAliasButton
    {
        static constexpr std::string_view Name = "CustomizableUIGameFeatureAliasButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableUISceneSetButton";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_UISceneSetEntries = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryBox_UISceneSetEntries", 0x330, "ObjectProperty"},
        }};
    };

    struct CustomizableUIGameFeatureAliasButtonViewModel
    {
        static constexpr std::string_view Name = "CustomizableUIGameFeatureAliasButtonViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizableUISceneSetButtonViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureAlias = 0xA8;
            static constexpr std::uintptr_t SceneSetCount = 0xB0;
            static constexpr std::uintptr_t SelectedSceneSetCount = 0xB1;
            static constexpr std::uintptr_t ChildrenSceneSetToViewModelMap = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameFeatureAlias", 0xA8, "ObjectProperty"},
            {"SceneSetCount", 0xB0, "ByteProperty"},
            {"SelectedSceneSetCount", 0xB1, "ByteProperty"},
            {"ChildrenSceneSetToViewModelMap", 0xB8, "MapProperty"},
        }};
    };

    struct CustomizableUIGameUserSettings
    {
        static constexpr std::string_view Name = "CustomizableUIGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveLayoutProfileId = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveLayoutProfileId", 0x28, "OptionalProperty"},
        }};
    };

    struct CustomizableUIManager
    {
        static constexpr std::string_view Name = "CustomizableUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x30;
            static constexpr std::uintptr_t DynamicUIManagerProxyAdapter = 0x58;
            static constexpr std::uintptr_t LayoutProfileManager = 0x60;
            static constexpr std::uintptr_t ActiveLayoutPresetCollection = 0x68;
            static constexpr std::uintptr_t SceneDrivers = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CustomizableUIDatabase", 0x30, "ObjectProperty"},
            {"DynamicUIManagerProxyAdapter", 0x58, "ObjectProperty"},
            {"LayoutProfileManager", 0x60, "ObjectProperty"},
            {"ActiveLayoutPresetCollection", 0x68, "ObjectProperty"},
            {"SceneDrivers", 0x70, "ObjectProperty"},
        }};
    };

    struct CustomizableUIPreviewLayer
    {
        static constexpr std::string_view Name = "CustomizableUIPreviewLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x318;
            static constexpr std::uintptr_t CustomizableUIManager = 0x320;
            static constexpr std::uintptr_t LayoutProfileManager = 0x328;
            static constexpr std::uintptr_t SelectedWidgetHighlight = 0x330;
            static constexpr std::uintptr_t OutOfBoundsWidgetHighlight = 0x350;
            static constexpr std::uintptr_t ActiveLoadedScenesOwning = 0x420;
            static constexpr std::uintptr_t GeneratedProxyReplacementsScene = 0x440;
            static constexpr std::uintptr_t SelectedWidgetAdjustmentsScene = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CustomizableUIDatabase", 0x318, "ObjectProperty"},
            {"CustomizableUIManager", 0x320, "ObjectProperty"},
            {"LayoutProfileManager", 0x328, "ObjectProperty"},
            {"SelectedWidgetHighlight", 0x330, "SoftClassProperty"},
            {"OutOfBoundsWidgetHighlight", 0x350, "SoftClassProperty"},
            {"ActiveLoadedScenesOwning", 0x420, "ArrayProperty"},
            {"GeneratedProxyReplacementsScene", 0x440, "ObjectProperty"},
            {"SelectedWidgetAdjustmentsScene", 0x448, "ObjectProperty"},
        }};
    };

    struct CustomizableUISceneDriver
    {
        static constexpr std::string_view Name = "CustomizableUISceneDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedModificationsScenes = 0xA0;
            static constexpr std::uintptr_t GeneratedAvailableWidgetAllowsScenes = 0xB0;
            static constexpr std::uintptr_t GeneratedAvailableInstanceTargetingScenes = 0xC0;
            static constexpr std::uintptr_t GeneratedUnallowsForRemovedTargetedWidgets = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GeneratedModificationsScenes", 0xA0, "MapProperty"},
            {"GeneratedAvailableWidgetAllowsScenes", 0xB0, "MapProperty"},
            {"GeneratedAvailableInstanceTargetingScenes", 0xC0, "MapProperty"},
            {"GeneratedUnallowsForRemovedTargetedWidgets", 0xD0, "MapProperty"},
        }};
    };

    struct CustomizableUISceneSetButton
    {
        static constexpr std::string_view Name = "CustomizableUISceneSetButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct CustomizableUISceneSetButtonViewModel
    {
        static constexpr std::string_view Name = "CustomizableUISceneSetButtonViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x68;
            static constexpr std::uintptr_t CheckBoxState = 0x78;
            static constexpr std::uintptr_t bIsCheckBoxChecked = 0x79;
            static constexpr std::uintptr_t bIsGameFeatureAlias = 0x7A;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisplayName", 0x68, "TextProperty"},
            {"CheckBoxState", 0x78, "EnumProperty"},
            {"bIsCheckBoxChecked", 0x79, "BoolProperty"},
            {"bIsGameFeatureAlias", 0x7A, "BoolProperty"},
        }};
    };

    struct CustomizableUISceneSetSelectorWidget
    {
        static constexpr std::string_view Name = "CustomizableUISceneSetSelectorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSelectedSceneSet = 0x348;
            static constexpr std::uintptr_t SelectedSceneSets = 0x358;
            static constexpr std::uintptr_t GameFeatureAliasButtonClass = 0x368;
            static constexpr std::uintptr_t EntryBox_UIModeCategories = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultSelectedSceneSet", 0x348, "SetProperty"},
            {"SelectedSceneSets", 0x358, "SetProperty"},
            {"GameFeatureAliasButtonClass", 0x368, "ClassProperty"},
            {"EntryBox_UIModeCategories", 0x370, "ObjectProperty"},
        }};
    };

    struct CustomizableWidgetCanvas
    {
        static constexpr std::string_view Name = "CustomizableWidgetCanvas";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HLTV2WidgetWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLayout = 0x368;
            static constexpr std::uintptr_t DefaultSize = 0x3A8;
            static constexpr std::uintptr_t SizePropertyTag = 0x3AC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultLayout", 0x368, "StructProperty"},
            {"DefaultSize", 0x3A8, "FloatProperty"},
            {"SizePropertyTag", 0x3AC, "StructProperty"},
        }};
    };

    struct CustomizableWidgetCatalogWidget
    {
        static constexpr std::string_view Name = "CustomizableWidgetCatalogWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x330;
            static constexpr std::uintptr_t LayoutProfileManager = 0x338;
            static constexpr std::uintptr_t PanelOpacityWhenDragedOver = 0x340;
            static constexpr std::uintptr_t PreviewWidgetClass = 0x348;
            static constexpr std::uintptr_t WidgetCategoryToEntryBox = 0x350;
            static constexpr std::uintptr_t Button_DisplayButtonPreviews = 0x3A8;
            static constexpr std::uintptr_t Button_DisplayWidgetPreviews = 0x3B0;
            static constexpr std::uintptr_t Switcher_Previews = 0x3B8;
            static constexpr std::uintptr_t EntryBox_ButtonPreviews = 0x3C0;
            static constexpr std::uintptr_t EntryBox_WidgetPreviews = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CustomizableUIDatabase", 0x330, "ObjectProperty"},
            {"LayoutProfileManager", 0x338, "ObjectProperty"},
            {"PanelOpacityWhenDragedOver", 0x340, "FloatProperty"},
            {"PreviewWidgetClass", 0x348, "ClassProperty"},
            {"WidgetCategoryToEntryBox", 0x350, "MapProperty"},
            {"Button_DisplayButtonPreviews", 0x3A8, "ObjectProperty"},
            {"Button_DisplayWidgetPreviews", 0x3B0, "ObjectProperty"},
            {"Switcher_Previews", 0x3B8, "ObjectProperty"},
            {"EntryBox_ButtonPreviews", 0x3C0, "ObjectProperty"},
            {"EntryBox_WidgetPreviews", 0x3C8, "ObjectProperty"},
        }};
    };

    struct CustomizableWidgetCatalogWidgetEntry
    {
        static constexpr std::string_view Name = "CustomizableWidgetCatalogWidgetEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_SceneSetName = 0x330;
            static constexpr std::uintptr_t EntryBox_EntryPreviews = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_SceneSetName", 0x330, "ObjectProperty"},
            {"EntryBox_EntryPreviews", 0x338, "ObjectProperty"},
        }};
    };

    struct CustomizableWidgetSettingRegistry
    {
        static constexpr std::string_view Name = "CustomizableWidgetSettingRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t RootSettings = 0xA0;
            static constexpr std::uintptr_t RegisteredSettings = 0xB0;
            static constexpr std::uintptr_t OwningLocalPlayer = 0xC0;
            static constexpr std::uintptr_t EditConditionCache = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootSettings", 0xA0, "ArrayProperty"},
            {"RegisteredSettings", 0xB0, "MapProperty"},
            {"OwningLocalPlayer", 0xC0, "WeakObjectProperty"},
            {"EditConditionCache", 0xC8, "ObjectProperty"},
        }};
    };

    struct DynamicUIManagerProxyAdapter
    {
        static constexpr std::string_view Name = "DynamicUIManagerProxyAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIProxy
    {
        static constexpr std::string_view Name = "DynamicUIProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExcludeCondition_AutoRunLockZoneDisabled
    {
        static constexpr std::string_view Name = "ExcludeCondition_AutoRunLockZoneDisabled";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizablePropertyExcludeCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExcludeCondition_CVar
    {
        static constexpr std::string_view Name = "ExcludeCondition_CVar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomizablePropertyExcludeCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t CVarName = 0x28;
            static constexpr std::uintptr_t ExcludeIf = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CVarName", 0x28, "StrProperty"},
            {"ExcludeIf", 0x38, "BoolProperty"},
        }};
    };

    struct HLTV2WidgetWrapper
    {
        static constexpr std::string_view Name = "HLTV2WidgetWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseTouchHUDWidgetRegistry = 0x318;
            static constexpr std::uintptr_t CompiledTouchHUDWidgetRegistry = 0x320;
            static constexpr std::uintptr_t BehaviorTag = 0x338;
            static constexpr std::uintptr_t WrappedWidgetContainer = 0x340;
            static constexpr std::uintptr_t GeneratedWrappedWidgetContainer = 0x348;
            static constexpr std::uintptr_t WrappedWidget = 0x350;
            static constexpr std::uintptr_t bIsPreviewOrProxyWidget = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BaseTouchHUDWidgetRegistry", 0x318, "ObjectProperty"},
            {"CompiledTouchHUDWidgetRegistry", 0x320, "ObjectProperty"},
            {"BehaviorTag", 0x338, "StructProperty"},
            {"WrappedWidgetContainer", 0x340, "ObjectProperty"},
            {"GeneratedWrappedWidgetContainer", 0x348, "ObjectProperty"},
            {"WrappedWidget", 0x350, "ObjectProperty"},
            {"bIsPreviewOrProxyWidget", 0x358, "BoolProperty"},
        }};
    };

    struct LayoutProfileButtonWidget
    {
        static constexpr std::string_view Name = "LayoutProfileButtonWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InEditColor = 0x330;
            static constexpr std::uintptr_t SelectedColor = 0x340;
            static constexpr std::uintptr_t Button_Internal = 0x3A0;
            static constexpr std::uintptr_t Border_ActiveIndicator = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InEditColor", 0x330, "StructProperty"},
            {"SelectedColor", 0x340, "StructProperty"},
            {"Button_Internal", 0x3A0, "ObjectProperty"},
            {"Border_ActiveIndicator", 0x3A8, "ObjectProperty"},
        }};
    };

    struct LayoutProfileManager
    {
        static constexpr std::string_view Name = "LayoutProfileManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x30;
            static constexpr std::uintptr_t CustomizableUIGameUserSettings = 0xC0;
            static constexpr std::uintptr_t CustomizableUIClientSettingRecordPartition = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CustomizableUIDatabase", 0x30, "ObjectProperty"},
            {"CustomizableUIGameUserSettings", 0xC0, "ObjectProperty"},
            {"CustomizableUIClientSettingRecordPartition", 0xC8, "ObjectProperty"},
        }};
    };

    struct LinkAcrossActionPanelWidget
    {
        static constexpr std::string_view Name = "LinkAcrossActionPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_MainContextTitle = 0x330;
            static constexpr std::uintptr_t Text_VehicleContextTitle = 0x338;
            static constexpr std::uintptr_t Button_SelectAll = 0x340;
            static constexpr std::uintptr_t Button_DeselectAll = 0x348;
            static constexpr std::uintptr_t ScrollBox_Actions = 0x350;
            static constexpr std::uintptr_t EntryBox_MainContextActions = 0x358;
            static constexpr std::uintptr_t EntryBox_VehicleContextActions = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Text_MainContextTitle", 0x330, "ObjectProperty"},
            {"Text_VehicleContextTitle", 0x338, "ObjectProperty"},
            {"Button_SelectAll", 0x340, "ObjectProperty"},
            {"Button_DeselectAll", 0x348, "ObjectProperty"},
            {"ScrollBox_Actions", 0x350, "ObjectProperty"},
            {"EntryBox_MainContextActions", 0x358, "ObjectProperty"},
            {"EntryBox_VehicleContextActions", 0x360, "ObjectProperty"},
        }};
    };

    struct LinkAcrossActionWidget
    {
        static constexpr std::string_view Name = "LinkAcrossActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledCheckBoxBorderColor = 0x3B0;
            static constexpr std::uintptr_t DisabledCheckBoxBorderColor = 0x3C0;
            static constexpr std::uintptr_t CheckMarkSprite = 0x3D0;
            static constexpr std::uintptr_t Text_ActionName = 0x3E8;
            static constexpr std::uintptr_t LinkAcrossWarningIndicator_Warning = 0x3F0;
            static constexpr std::uintptr_t NumericalIndicator_ActionImpact = 0x3F8;
            static constexpr std::uintptr_t Image_CheckboxBorder = 0x400;
            static constexpr std::uintptr_t Button_SelectAction = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EnabledCheckBoxBorderColor", 0x3B0, "StructProperty"},
            {"DisabledCheckBoxBorderColor", 0x3C0, "StructProperty"},
            {"CheckMarkSprite", 0x3D0, "ObjectProperty"},
            {"Text_ActionName", 0x3E8, "ObjectProperty"},
            {"LinkAcrossWarningIndicator_Warning", 0x3F0, "ObjectProperty"},
            {"NumericalIndicator_ActionImpact", 0x3F8, "ObjectProperty"},
            {"Image_CheckboxBorder", 0x400, "ObjectProperty"},
            {"Button_SelectAction", 0x408, "ObjectProperty"},
        }};
    };

    struct LinkAcrossPanelTitleWidget
    {
        static constexpr std::string_view Name = "LinkAcrossPanelTitleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AdvancedActionTitle = 0x340;
            static constexpr std::uintptr_t PreviewWidgetClass = 0x350;
            static constexpr std::uintptr_t SizeBox_Preview = 0x358;
            static constexpr std::uintptr_t Text_WidgetName = 0x360;
            static constexpr std::uintptr_t Text_Action = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AdvancedActionTitle", 0x340, "TextProperty"},
            {"PreviewWidgetClass", 0x350, "ClassProperty"},
            {"SizeBox_Preview", 0x358, "ObjectProperty"},
            {"Text_WidgetName", 0x360, "ObjectProperty"},
            {"Text_Action", 0x368, "ObjectProperty"},
        }};
    };

    struct LinkAcrossPanelWidget
    {
        static constexpr std::string_view Name = "LinkAcrossPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x330;
            static constexpr std::uintptr_t LayoutProfileManager = 0x338;
            static constexpr std::uintptr_t TooltipLayer = 0x340;
            static constexpr std::uintptr_t SimpleActionMessages = 0x3F0;
            static constexpr std::uintptr_t LinkAcrossPanelTitle_Header = 0x400;
            static constexpr std::uintptr_t Button_Close = 0x408;
            static constexpr std::uintptr_t Switcher_Actions = 0x410;
            static constexpr std::uintptr_t SizeBox_ActionPanelContainer = 0x418;
            static constexpr std::uintptr_t LinkAcrossActionPanel_Actions = 0x420;
            static constexpr std::uintptr_t VerticalBox_SimpleAction = 0x428;
            static constexpr std::uintptr_t Text_SimpleAction = 0x430;
            static constexpr std::uintptr_t Text_SimpleActionWarning = 0x438;
            static constexpr std::uintptr_t Button_ToggleAdvanced = 0x440;
            static constexpr std::uintptr_t Button_Cancel = 0x448;
            static constexpr std::uintptr_t Button_Confirm = 0x450;
            static constexpr std::uintptr_t WarningIndicator_MainWarning = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"CustomizableUIDatabase", 0x330, "ObjectProperty"},
            {"LayoutProfileManager", 0x338, "ObjectProperty"},
            {"TooltipLayer", 0x340, "ObjectProperty"},
            {"SimpleActionMessages", 0x3F0, "ArrayProperty"},
            {"LinkAcrossPanelTitle_Header", 0x400, "ObjectProperty"},
            {"Button_Close", 0x408, "ObjectProperty"},
            {"Switcher_Actions", 0x410, "ObjectProperty"},
            {"SizeBox_ActionPanelContainer", 0x418, "ObjectProperty"},
            {"LinkAcrossActionPanel_Actions", 0x420, "ObjectProperty"},
            {"VerticalBox_SimpleAction", 0x428, "ObjectProperty"},
            {"Text_SimpleAction", 0x430, "ObjectProperty"},
            {"Text_SimpleActionWarning", 0x438, "ObjectProperty"},
            {"Button_ToggleAdvanced", 0x440, "ObjectProperty"},
            {"Button_Cancel", 0x448, "ObjectProperty"},
            {"Button_Confirm", 0x450, "ObjectProperty"},
            {"WarningIndicator_MainWarning", 0x458, "ObjectProperty"},
        }};
    };

    struct PreviewWrapperWidget
    {
        static constexpr std::string_view Name = "PreviewWrapperWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WrappedWidgetCustomizableWidgetId = 0x330;
            static constexpr std::uintptr_t CreateCustomizableWidgetOperation = 0x3A8;
            static constexpr std::uintptr_t DragDistanceThresholdMillimeters = 0x3C0;
            static constexpr std::uintptr_t WrappedWidget = 0x3D0;
            static constexpr std::uintptr_t TextBlock_InstancesLeftCounter = 0x3E8;
            static constexpr std::uintptr_t Border_Background = 0x3F0;
            static constexpr std::uintptr_t Overlay_Wrapper = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WrappedWidgetCustomizableWidgetId", 0x330, "OptionalProperty"},
            {"CreateCustomizableWidgetOperation", 0x3A8, "ObjectProperty"},
            {"DragDistanceThresholdMillimeters", 0x3C0, "FloatProperty"},
            {"WrappedWidget", 0x3D0, "ObjectProperty"},
            {"TextBlock_InstancesLeftCounter", 0x3E8, "ObjectProperty"},
            {"Border_Background", 0x3F0, "ObjectProperty"},
            {"Overlay_Wrapper", 0x3F8, "ObjectProperty"},
        }};
    };

    struct PropertyPanelWidget
    {
        static constexpr std::string_view Name = "PropertyPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VisibleSettings = 0x330;
            static constexpr std::uintptr_t CustomizableWidgetSettingRegistry = 0x340;
            static constexpr std::uintptr_t CustomizableUIDatabase = 0x348;
            static constexpr std::uintptr_t Switcher_PropertiesAndMessage = 0x368;
            static constexpr std::uintptr_t Text_SelectWidgetMessage = 0x370;
            static constexpr std::uintptr_t VerticalBox_PropertiesContainer = 0x378;
            static constexpr std::uintptr_t Text_WidgetName = 0x380;
            static constexpr std::uintptr_t Button_EditLinks = 0x388;
            static constexpr std::uintptr_t Button_RevertHUDWidget = 0x390;
            static constexpr std::uintptr_t Button_DeleteHUDWidget = 0x398;
            static constexpr std::uintptr_t ListView_Settings = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"VisibleSettings", 0x330, "ArrayProperty"},
            {"CustomizableWidgetSettingRegistry", 0x340, "ObjectProperty"},
            {"CustomizableUIDatabase", 0x348, "ObjectProperty"},
            {"Switcher_PropertiesAndMessage", 0x368, "ObjectProperty"},
            {"Text_SelectWidgetMessage", 0x370, "ObjectProperty"},
            {"VerticalBox_PropertiesContainer", 0x378, "ObjectProperty"},
            {"Text_WidgetName", 0x380, "ObjectProperty"},
            {"Button_EditLinks", 0x388, "ObjectProperty"},
            {"Button_RevertHUDWidget", 0x390, "ObjectProperty"},
            {"Button_DeleteHUDWidget", 0x398, "ObjectProperty"},
            {"ListView_Settings", 0x3A0, "ObjectProperty"},
        }};
    };

    struct ProxyWrapperWidget
    {
        static constexpr std::string_view Name = "ProxyWrapperWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Overlay_Wrapper = 0x330;
            static constexpr std::uintptr_t ScaleBox_SizeProperty = 0x338;
            static constexpr std::uintptr_t WrappedWidget = 0x340;
            static constexpr std::uintptr_t WidgetName = 0x348;
            static constexpr std::uintptr_t AppendWidgetAndBehaviorNames = 0x358;
            static constexpr std::uintptr_t InBoundsHighlightColor = 0x35C;
            static constexpr std::uintptr_t OutOfBoundsProxyHighlightColor = 0x36C;
            static constexpr std::uintptr_t Image_SelectionHighlight = 0x3B0;
            static constexpr std::uintptr_t Image_OutOfBoundsIndicator = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Overlay_Wrapper", 0x330, "ObjectProperty"},
            {"ScaleBox_SizeProperty", 0x338, "ObjectProperty"},
            {"WrappedWidget", 0x340, "ObjectProperty"},
            {"WidgetName", 0x348, "TextProperty"},
            {"AppendWidgetAndBehaviorNames", 0x358, "BoolProperty"},
            {"InBoundsHighlightColor", 0x35C, "StructProperty"},
            {"OutOfBoundsProxyHighlightColor", 0x36C, "StructProperty"},
            {"Image_SelectionHighlight", 0x3B0, "ObjectProperty"},
            {"Image_OutOfBoundsIndicator", 0x3B8, "ObjectProperty"},
        }};
    };

}

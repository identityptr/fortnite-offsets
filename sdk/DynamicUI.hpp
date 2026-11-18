#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicUI
{
    struct CreatedWidgetsHandler
    {
        static constexpr std::string_view Name = "CreatedWidgetsHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIAdjust
    {
        static constexpr std::string_view Name = "DynamicUIAdjust";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWidget = 0x0;
            static constexpr std::uintptr_t LayoutConstraint = 0x78;
            static constexpr std::uintptr_t SizeModifier = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetWidget", 0x0, "StructProperty"},
            {"LayoutConstraint", 0x78, "ObjectProperty"},
            {"SizeModifier", 0x80, "ObjectProperty"},
        }};
    };

    struct DynamicUIAllowed
    {
        static constexpr std::string_view Name = "DynamicUIAllowed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget = 0x0;
            static constexpr std::uintptr_t ZOrder = 0x20;
            static constexpr std::uintptr_t CustomZOrder = 0x24;
            static constexpr std::uintptr_t ActionDomain = 0x28;
            static constexpr std::uintptr_t LayoutConstraint = 0x48;
            static constexpr std::uintptr_t SizeModifier = 0x50;
            static constexpr std::uintptr_t ExcludeConditions = 0x58;
            static constexpr std::uintptr_t UniqueID = 0x68;
            static constexpr std::uintptr_t AllowLayerIDOverride = 0x6C;
            static constexpr std::uintptr_t bClampMinDPIScaleToOne = 0x6E;
            static constexpr std::uintptr_t bHUDScaleOverride = 0x6E;
            static constexpr std::uintptr_t bIsUnique = 0x6E;
            static constexpr std::uintptr_t bUseActionDomain = 0x6E;
            static constexpr std::uintptr_t bUseExclude = 0x6E;
            static constexpr std::uintptr_t bUseHUDScaleOverride = 0x6E;
            static constexpr std::uintptr_t bUseLayerOverride = 0x6E;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Widget", 0x0, "SoftClassProperty"},
            {"ZOrder", 0x20, "EnumProperty"},
            {"CustomZOrder", 0x24, "IntProperty"},
            {"ActionDomain", 0x28, "SoftObjectProperty"},
            {"LayoutConstraint", 0x48, "ObjectProperty"},
            {"SizeModifier", 0x50, "ObjectProperty"},
            {"ExcludeConditions", 0x58, "ArrayProperty"},
            {"UniqueID", 0x68, "NameProperty"},
            {"AllowLayerIDOverride", 0x6C, "UInt16Property"},
            {"bClampMinDPIScaleToOne", 0x6E, "BoolProperty"},
            {"bHUDScaleOverride", 0x6E, "BoolProperty"},
            {"bIsUnique", 0x6E, "BoolProperty"},
            {"bUseActionDomain", 0x6E, "BoolProperty"},
            {"bUseExclude", 0x6E, "BoolProperty"},
            {"bUseHUDScaleOverride", 0x6E, "BoolProperty"},
            {"bUseLayerOverride", 0x6E, "BoolProperty"},
        }};
    };

    struct DynamicUIAspectRatio
    {
        static constexpr std::string_view Name = "DynamicUIAspectRatio";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseGlobalMaxAspectRatio = 0x0;
            static constexpr std::uintptr_t bUseMaxAspectRatio = 0x0;
            static constexpr std::uintptr_t AspectRatio = 0x4;
            static constexpr std::uintptr_t CustomAspectRatio = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseGlobalMaxAspectRatio", 0x0, "BoolProperty"},
            {"bUseMaxAspectRatio", 0x0, "BoolProperty"},
            {"AspectRatio", 0x4, "EnumProperty"},
            {"CustomAspectRatio", 0x8, "FloatProperty"},
        }};
    };

    struct DynamicUIConstraintAlignment
    {
        static constexpr std::string_view Name = "DynamicUIConstraintAlignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x90;
            static constexpr std::uintptr_t VerticalAlignment = 0x91;
            static constexpr std::uintptr_t Anchor = 0x94;
            static constexpr std::uintptr_t VerticalMargin = 0x98;
            static constexpr std::uintptr_t HorizontalMargin = 0xA0;
            static constexpr std::uintptr_t MaxAspectRatio = 0xA8;
            static constexpr std::uintptr_t bUseMaxAspectRatio = 0xB4;
            static constexpr std::uintptr_t bUseSafeZone = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"HorizontalAlignment", 0x90, "ByteProperty"},
            {"VerticalAlignment", 0x91, "ByteProperty"},
            {"Anchor", 0x94, "EnumProperty"},
            {"VerticalMargin", 0x98, "StructProperty"},
            {"HorizontalMargin", 0xA0, "StructProperty"},
            {"MaxAspectRatio", 0xA8, "StructProperty"},
            {"bUseMaxAspectRatio", 0xB4, "BoolProperty"},
            {"bUseSafeZone", 0xB4, "BoolProperty"},
        }};
    };

    struct DynamicUIConstraintBase
    {
        static constexpr std::string_view Name = "DynamicUIConstraintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x60;
            static constexpr std::uintptr_t ConstraintOverrides = 0x70;
            static constexpr std::uintptr_t bUseOffset = 0x80;
            static constexpr std::uintptr_t bUseOverride = 0x80;
            static constexpr std::uintptr_t ConstraintOverride = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Offset", 0x60, "StructProperty"},
            {"ConstraintOverrides", 0x70, "ArrayProperty"},
            {"bUseOffset", 0x80, "BoolProperty"},
            {"bUseOverride", 0x80, "BoolProperty"},
            {"ConstraintOverride", 0x88, "ObjectProperty"},
        }};
    };

    struct DynamicUIConstraintContainer
    {
        static constexpr std::string_view Name = "DynamicUIConstraintContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetsToContain = 0x90;
            static constexpr std::uintptr_t Padding = 0xA0;
            static constexpr std::uintptr_t bMustMatchAllWidgets = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WidgetsToContain", 0x90, "ArrayProperty"},
            {"Padding", 0xA0, "StructProperty"},
            {"bMustMatchAllWidgets", 0xB0, "BoolProperty"},
        }};
    };

    struct DynamicUIConstraintOverrideBase
    {
        static constexpr std::string_view Name = "DynamicUIConstraintOverrideBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIConstraintOwnershipModifierTaggedSlot
    {
        static constexpr std::string_view Name = "DynamicUIConstraintOwnershipModifierTaggedSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotTag = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotTag", 0x90, "StructProperty"},
        }};
    };

    struct DynamicUIConstraintPlatformOverride
    {
        static constexpr std::string_view Name = "DynamicUIConstraintPlatformOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformVisibilityControls = 0x28;
            static constexpr std::uintptr_t InputTypeVisibilityControls = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlatformVisibilityControls", 0x28, "MapProperty"},
            {"InputTypeVisibilityControls", 0x38, "MapProperty"},
        }};
    };

    struct DynamicUIConstraintPosition
    {
        static constexpr std::string_view Name = "DynamicUIConstraintPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x90;
            static constexpr std::uintptr_t Anchor = 0xA0;
            static constexpr std::uintptr_t bUseSafeZone = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Position", 0x90, "StructProperty"},
            {"Anchor", 0xA0, "EnumProperty"},
            {"bUseSafeZone", 0xA4, "BoolProperty"},
        }};
    };

    struct DynamicUIConstraintReplace
    {
        static constexpr std::string_view Name = "DynamicUIConstraintReplace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWidget = 0x90;
            static constexpr std::uintptr_t ReplacedWidgetBehavior = 0x108;
            static constexpr std::uintptr_t Fallbacks = 0x110;
            static constexpr std::uintptr_t bUseFallbacks = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetWidget", 0x90, "StructProperty"},
            {"ReplacedWidgetBehavior", 0x108, "EnumProperty"},
            {"Fallbacks", 0x110, "ArrayProperty"},
            {"bUseFallbacks", 0x120, "BoolProperty"},
        }};
    };

    struct DynamicUIConstraintSplitscreenOverride
    {
        static constexpr std::string_view Name = "DynamicUIConstraintSplitscreenOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SplitscreenConstraintOverride = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplitscreenConstraintOverride", 0x28, "ObjectProperty"},
        }};
    };

    struct DynamicUIConstraintWidget
    {
        static constexpr std::string_view Name = "DynamicUIConstraintWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIConstraintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Anchor = 0x90;
            static constexpr std::uintptr_t TargetWidget = 0x98;
            static constexpr std::uintptr_t TargetAnchor = 0x110;
            static constexpr std::uintptr_t Fallbacks = 0x118;
            static constexpr std::uintptr_t bConstrainToUnallowedWidgets = 0x128;
            static constexpr std::uintptr_t bUseFallbacks = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Anchor", 0x90, "EnumProperty"},
            {"TargetWidget", 0x98, "StructProperty"},
            {"TargetAnchor", 0x110, "EnumProperty"},
            {"Fallbacks", 0x118, "ArrayProperty"},
            {"bConstrainToUnallowedWidgets", 0x128, "BoolProperty"},
            {"bUseFallbacks", 0x128, "BoolProperty"},
        }};
    };

    struct DynamicUIDirectorBase
    {
        static constexpr std::string_view Name = "DynamicUIDirectorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
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

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "AddScene",
            "AddScenes",
            "AddWidgetCreatedCallback",
            "AddWidgetRemovedCallback",
            "AddWidgetWithUniqueIDCreatedCallback",
            "AddWidgetWithUniqueIDRemovedCallback",
            "GetOwningLocalPlayer",
            "GetOwningLocalPlayerController",
            "IsSceneActive",
            "RemoveScene",
            "RemoveScenes",
        }};
    };

    struct DynamicUIDirectorData
    {
        static constexpr std::string_view Name = "DynamicUIDirectorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectorClass = 0x0;
            static constexpr std::uintptr_t Instance = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DirectorClass", 0x0, "SoftClassProperty"},
            {"Instance", 0x20, "WeakObjectProperty"},
        }};
    };

    struct DynamicUIExcludeBase
    {
        static constexpr std::string_view Name = "DynamicUIExcludeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIExcludeConsoleVariable
    {
        static constexpr std::string_view Name = "DynamicUIExcludeConsoleVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIExcludeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleVariables = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConsoleVariables", 0x28, "ArrayProperty"},
        }};
    };

    struct DynamicUIExcludeConsoleVariableTypeBase
    {
        static constexpr std::string_view Name = "DynamicUIExcludeConsoleVariableTypeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleVariableName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConsoleVariableName", 0x28, "StrProperty"},
        }};
    };

    struct DynamicUIExcludeConsoleVariableTypeBool
    {
        static constexpr std::string_view Name = "DynamicUIExcludeConsoleVariableTypeBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIExcludeConsoleVariableTypeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExclusionState = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExclusionState", 0x40, "BoolProperty"},
        }};
    };

    struct DynamicUIExcludeInputType
    {
        static constexpr std::string_view Name = "DynamicUIExcludeInputType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIExcludeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputTypes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputTypes", 0x28, "ArrayProperty"},
        }};
    };

    struct DynamicUIHorizontalMargin
    {
        static constexpr std::string_view Name = "DynamicUIHorizontalMargin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "FloatProperty"},
            {"Right", 0x4, "FloatProperty"},
        }};
    };

    struct DynamicUILayer
    {
        static constexpr std::string_view Name = "DynamicUILayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"ID", 0x10, "ByteProperty"},
        }};
    };

    struct DynamicUILayerSettings
    {
        static constexpr std::string_view Name = "DynamicUILayerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExperienceLayers = 0x28;
            static constexpr std::uintptr_t PlatformLayers = 0x38;
            static constexpr std::uintptr_t DefaultLayerName = 0x48;
            static constexpr std::uintptr_t HUDScaledLayers = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExperienceLayers", 0x28, "ArrayProperty"},
            {"PlatformLayers", 0x38, "ArrayProperty"},
            {"DefaultLayerName", 0x48, "StrProperty"},
            {"HUDScaledLayers", 0x58, "ArrayProperty"},
        }};
    };

    struct DynamicUIManager
    {
        static constexpr std::string_view Name = "DynamicUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerDataMap = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerDataMap", 0x58, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddScene",
            "AddSceneToFirstLocalPlayer",
            "AddScenes",
            "IsSceneActive",
            "IsSceneActiveOnFirstLocalPlayer",
            "RemoveScene",
            "RemoveSceneFromFirstLocalPlayer",
            "RemoveScenes",
        }};
    };

    struct DynamicUIManagerDebug
    {
        static constexpr std::string_view Name = "DynamicUIManagerDebug";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIPanelDebug
    {
        static constexpr std::string_view Name = "DynamicUIPanelDebug";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUIPlayerData
    {
        static constexpr std::string_view Name = "DynamicUIPlayerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveDirectors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveDirectors", 0x28, "MapProperty"},
        }};
    };

    struct DynamicUIPreload
    {
        static constexpr std::string_view Name = "DynamicUIPreload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Widget", 0x0, "SoftClassProperty"},
        }};
    };

    struct DynamicUIScene
    {
        static constexpr std::string_view Name = "DynamicUIScene";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneLayerID = 0x28;
            static constexpr std::uintptr_t Allowed = 0x30;
            static constexpr std::uintptr_t Unallow = 0x40;
            static constexpr std::uintptr_t Adjust = 0x50;
            static constexpr std::uintptr_t Preload = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SceneLayerID", 0x28, "UInt16Property"},
            {"Allowed", 0x30, "ArrayProperty"},
            {"Unallow", 0x40, "ArrayProperty"},
            {"Adjust", 0x50, "ArrayProperty"},
            {"Preload", 0x60, "ArrayProperty"},
        }};
    };

    struct DynamicUISceneData
    {
        static constexpr std::string_view Name = "DynamicUISceneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextData", 0x0, "ArrayProperty"},
        }};
    };

    struct DynamicUISceneTarget
    {
        static constexpr std::string_view Name = "DynamicUISceneTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneAssetPath = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SceneAssetPath", 0x0, "StructProperty"},
        }};
    };

    struct DynamicUISizeBase
    {
        static constexpr std::string_view Name = "DynamicUISizeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SizeOverride = 0x50;
            static constexpr std::uintptr_t bUseOverride = 0x58;
            static constexpr std::uintptr_t bUseRenderTransform = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SizeOverride", 0x50, "ObjectProperty"},
            {"bUseOverride", 0x58, "BoolProperty"},
            {"bUseRenderTransform", 0x58, "BoolProperty"},
        }};
    };

    struct DynamicUISizeFixed
    {
        static constexpr std::string_view Name = "DynamicUISizeFixed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUISizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Size", 0x60, "StructProperty"},
        }};
    };

    struct DynamicUISizeMatchWidget
    {
        static constexpr std::string_view Name = "DynamicUISizeMatchWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUISizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWidget = 0x60;
            static constexpr std::uintptr_t MatchType = 0xD8;
            static constexpr std::uintptr_t Fallbacks = 0xE0;
            static constexpr std::uintptr_t bUseFallbacks = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetWidget", 0x60, "StructProperty"},
            {"MatchType", 0xD8, "EnumProperty"},
            {"Fallbacks", 0xE0, "ArrayProperty"},
            {"bUseFallbacks", 0xF0, "BoolProperty"},
        }};
    };

    struct DynamicUISizeOverrideBase
    {
        static constexpr std::string_view Name = "DynamicUISizeOverrideBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicUISizeOverridePlatform
    {
        static constexpr std::string_view Name = "DynamicUISizeOverridePlatform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUISizeOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformOverrides = 0x28;
            static constexpr std::uintptr_t InputTypeOverrides = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlatformOverrides", 0x28, "MapProperty"},
            {"InputTypeOverrides", 0x38, "MapProperty"},
        }};
    };

    struct DynamicUISizeScale
    {
        static constexpr std::string_view Name = "DynamicUISizeScale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUISizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scale", 0x60, "StructProperty"},
        }};
    };

    struct DynamicUISizeSplitscreenOverride
    {
        static constexpr std::string_view Name = "DynamicUISizeSplitscreenOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUISizeOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SplitscreenSizeModifier = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplitscreenSizeModifier", 0x28, "ObjectProperty"},
        }};
    };

    struct DynamicUITransitionableWidgetInterface
    {
        static constexpr std::string_view Name = "DynamicUITransitionableWidgetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BroadcastTransitionCompleted",
        }};
    };

    struct DynamicUIUnallowBase
    {
        static constexpr std::string_view Name = "DynamicUIUnallowBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Behavior = 0x28;
            static constexpr std::uintptr_t ExcludeConditions = 0x30;
            static constexpr std::uintptr_t bUseExclude = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Behavior", 0x28, "EnumProperty"},
            {"ExcludeConditions", 0x30, "ArrayProperty"},
            {"bUseExclude", 0x40, "BoolProperty"},
        }};
    };

    struct DynamicUIUnallowLayer
    {
        static constexpr std::string_view Name = "DynamicUIUnallowLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIUnallowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UnallowLayerID = 0x48;
            static constexpr std::uintptr_t Comparison = 0x4A;
            static constexpr std::uintptr_t Exclusions = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UnallowLayerID", 0x48, "UInt16Property"},
            {"Comparison", 0x4A, "EnumProperty"},
            {"Exclusions", 0x50, "ArrayProperty"},
        }};
    };

    struct DynamicUIUnallowScene
    {
        static constexpr std::string_view Name = "DynamicUIUnallowScene";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIUnallowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Scene = 0x48;
            static constexpr std::uintptr_t Exclusions = 0x60;
            static constexpr std::uintptr_t RuntimeScene = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Scene", 0x48, "StructProperty"},
            {"Exclusions", 0x60, "ArrayProperty"},
            {"RuntimeScene", 0x70, "ObjectProperty"},
        }};
    };

    struct DynamicUIUnallowWidget
    {
        static constexpr std::string_view Name = "DynamicUIUnallowWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIUnallowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget = 0x48;
            static constexpr std::uintptr_t bTargetAll = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Widget", 0x48, "StructProperty"},
            {"bTargetAll", 0xC0, "BoolProperty"},
        }};
    };

    struct DynamicUIVerticalMargin
    {
        static constexpr std::string_view Name = "DynamicUIVerticalMargin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Top = 0x0;
            static constexpr std::uintptr_t Bottom = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Top", 0x0, "FloatProperty"},
            {"Bottom", 0x4, "FloatProperty"},
        }};
    };

    struct DynamicUIWidgetTarget
    {
        static constexpr std::string_view Name = "DynamicUIWidgetTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetPath = 0x0;
            static constexpr std::uintptr_t WidgetAssetPath = 0x8;
            static constexpr std::uintptr_t WidgetClass = 0x20;
            static constexpr std::uintptr_t UniqueID = 0x40;
            static constexpr std::uintptr_t bUseUniqueID = 0x44;
            static constexpr std::uintptr_t bUseWidgetClass = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WidgetPath", 0x0, "NameProperty"},
            {"WidgetAssetPath", 0x8, "StructProperty"},
            {"WidgetClass", 0x20, "SoftClassProperty"},
            {"UniqueID", 0x40, "NameProperty"},
            {"bUseUniqueID", 0x44, "BoolProperty"},
            {"bUseWidgetClass", 0x44, "BoolProperty"},
        }};
    };

}

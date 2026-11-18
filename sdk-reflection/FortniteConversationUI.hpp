#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteConversationUI
{
    struct FortApplyAbilityBrief
    {
        static constexpr std::string_view Name = "FortApplyAbilityBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseServiceText = 0x348;
            static constexpr std::uintptr_t Text_Display = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchaseServiceText", 0x348, "TextProperty"},
            {"Text_Display", 0x358, "ObjectProperty"},
        }};
    };

    struct FortBasicBrief
    {
        static constexpr std::string_view Name = "FortBasicBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
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

    struct FortBasicItemBrief
    {
        static constexpr std::string_view Name = "FortBasicItemBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_TitleBar = 0x338;
            static constexpr std::uintptr_t TransactionStrip_Main = 0x340;
            static constexpr std::uintptr_t DisplayItem = 0x348;
            static constexpr std::uintptr_t ServiceConfigs = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_TitleBar", 0x338, "ObjectProperty"},
            {"TransactionStrip_Main", 0x340, "ObjectProperty"},
            {"DisplayItem", 0x348, "ObjectProperty"},
            {"ServiceConfigs", 0x350, "MapProperty"},
        }};
    };

    struct FortBuyBrief
    {
        static constexpr std::string_view Name = "FortBuyBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t RemainingForSaleKey = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RemainingForSaleKey", 0x348, "StrProperty"},
        }};
    };

    struct FortConversationBriefRadialList
    {
        static constexpr std::string_view Name = "FortConversationBriefRadialList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct FortConversationMarker
    {
        static constexpr std::string_view Name = "FortConversationMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowConversationLimitHit = 0x4E0;
            static constexpr std::uintptr_t InitialOffset = 0x518;
            static constexpr std::uintptr_t ManualOffset = 0x530;
            static constexpr std::uintptr_t MessageBubbleDuration = 0x548;
            static constexpr std::uintptr_t LastTextBubbleDuration = 0x54C;
            static constexpr std::uintptr_t bSetCustomInteractionWidgetOnlyWhenNeeded = 0x550;
            static constexpr std::uintptr_t Switcher_States = 0x558;
            static constexpr std::uintptr_t Overlay_PreviewState = 0x560;
            static constexpr std::uintptr_t ConversationMessage_Main = 0x570;
            static constexpr std::uintptr_t Text_ParticipantName = 0x580;
            static constexpr std::uintptr_t Keybind_Nameplate = 0x590;
            static constexpr std::uintptr_t NPCIcon = 0x598;
            static constexpr std::uintptr_t CustomDialogMarkerIndicatorIcon = 0x5A0;
            static constexpr std::uintptr_t DefaultDialogMarkerIndicatorIcon = 0x5A8;
            static constexpr std::uintptr_t DefaultMaxParticipantIconTexture = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bShowConversationLimitHit", 0x4E0, "BoolProperty"},
            {"InitialOffset", 0x518, "StructProperty"},
            {"ManualOffset", 0x530, "StructProperty"},
            {"MessageBubbleDuration", 0x548, "FloatProperty"},
            {"LastTextBubbleDuration", 0x54C, "FloatProperty"},
            {"bSetCustomInteractionWidgetOnlyWhenNeeded", 0x550, "BoolProperty"},
            {"Switcher_States", 0x558, "ObjectProperty"},
            {"Overlay_PreviewState", 0x560, "ObjectProperty"},
            {"ConversationMessage_Main", 0x570, "ObjectProperty"},
            {"Text_ParticipantName", 0x580, "ObjectProperty"},
            {"Keybind_Nameplate", 0x590, "ObjectProperty"},
            {"NPCIcon", 0x598, "ObjectProperty"},
            {"CustomDialogMarkerIndicatorIcon", 0x5A0, "ObjectProperty"},
            {"DefaultDialogMarkerIndicatorIcon", 0x5A8, "ObjectProperty"},
            {"DefaultMaxParticipantIconTexture", 0x5B0, "SoftObjectProperty"},
        }};
    };

    struct FortConversationMessageWidget
    {
        static constexpr std::string_view Name = "FortConversationMessageWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct FortConversationOption
    {
        static constexpr std::string_view Name = "FortConversationOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRadialPickerEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOptionConfirmedSound = 0x1698;
            static constexpr std::uintptr_t OnOptionHoveredSound = 0x16A0;
            static constexpr std::uintptr_t Switcher_DisplayAsset = 0x16A8;
            static constexpr std::uintptr_t DefaultSoftTaskIcon = 0x16B0;
            static constexpr std::uintptr_t DefaultConfirmChoiceSound = 0x16D0;
            static constexpr std::uintptr_t DefaultHoverChoiceSound = 0x16F0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnOptionConfirmedSound", 0x1698, "ObjectProperty"},
            {"OnOptionHoveredSound", 0x16A0, "ObjectProperty"},
            {"Switcher_DisplayAsset", 0x16A8, "ObjectProperty"},
            {"DefaultSoftTaskIcon", 0x16B0, "SoftObjectProperty"},
            {"DefaultConfirmChoiceSound", 0x16D0, "SoftObjectProperty"},
            {"DefaultHoverChoiceSound", 0x16F0, "SoftObjectProperty"},
        }};
    };

    struct FortConversationOptionBrief
    {
        static constexpr std::string_view Name = "FortConversationOptionBrief";
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

    struct FortConversationOptionsPanel
    {
        static constexpr std::string_view Name = "FortConversationOptionsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRows = 0x190;
            static constexpr std::uintptr_t MiddleColumnWidth = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxRows", 0x190, "IntProperty"},
            {"MiddleColumnWidth", 0x194, "IntProperty"},
        }};
    };

    struct FortConversationResourceWidget
    {
        static constexpr std::string_view Name = "FortConversationResourceWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceItemDefinition = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResourceItemDefinition", 0x308, "ObjectProperty"},
        }};
    };

    struct FortConversationScreen
    {
        static constexpr std::string_view Name = "FortConversationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConversationOptionUpdated = 0x4B0;
            static constexpr std::uintptr_t BriefAvailableWidgetPool = 0x4C0;
            static constexpr std::uintptr_t CurrentConversationBriefWidgets = 0x510;
            static constexpr std::uintptr_t CurrentResourcesUsedInConversationBriefs = 0x520;
            static constexpr std::uintptr_t Switcher_Details = 0x530;
            static constexpr std::uintptr_t CurrentConversationNPCIcon = 0x538;
            static constexpr std::uintptr_t CurrentConversationNPCActor = 0x558;
            static constexpr std::uintptr_t ConversationInputComp = 0x598;
            static constexpr std::uintptr_t CurrentlySelectedIndex = 0x5A0;
            static constexpr std::uintptr_t bBlockOptionIntroAnimation = 0x5A4;
            static constexpr std::uintptr_t RadialSelectionMaterialParameterName = 0x5A8;
            static constexpr std::uintptr_t TagPriorities = 0x5B0;
            static constexpr std::uintptr_t InteractActionNameKBM = 0x5C0;
            static constexpr std::uintptr_t ADSInputAction = 0x5C4;
            static constexpr std::uintptr_t InteractActionNameGamepad = 0x5C8;
            static constexpr std::uintptr_t ConfirmBinding = 0x5D0;
            static constexpr std::uintptr_t MakeSelectionBinding = 0x5E0;
            static constexpr std::uintptr_t ADSMouseBinding = 0x5F0;
            static constexpr std::uintptr_t CancelActionBinding = 0x600;
            static constexpr std::uintptr_t RightTriggerBinding = 0x610;
            static constexpr std::uintptr_t DetailsNodeTypeToBrief = 0x620;
            static constexpr std::uintptr_t ChatBrief = 0x630;
            static constexpr std::uintptr_t DataDrivenBriefPrefix = 0x650;
            static constexpr std::uintptr_t DataDrivenBrief = 0x660;
            static constexpr std::uintptr_t BasicBrief = 0x680;
            static constexpr std::uintptr_t RadialMenu_DialogOptions = 0x6A0;
            static constexpr std::uintptr_t Image_RadialHighlight = 0x6A8;
            static constexpr std::uintptr_t Keybind_Confirm = 0x6B0;
            static constexpr std::uintptr_t BasicBrief_Main = 0x6B8;
            static constexpr std::uintptr_t SizeBox_RadialMenu = 0x6C0;
            static constexpr std::uintptr_t Overlay_Details = 0x6C8;
            static constexpr std::uintptr_t Overlay_WheelContainer = 0x6D0;
            static constexpr std::uintptr_t Image_Background = 0x6D8;
            static constexpr std::uintptr_t Image_LoadingSpinner = 0x6E0;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"OnConversationOptionUpdated", 0x4B0, "MulticastInlineDelegateProperty"},
            {"BriefAvailableWidgetPool", 0x4C0, "StructProperty"},
            {"CurrentConversationBriefWidgets", 0x510, "MapProperty"},
            {"CurrentResourcesUsedInConversationBriefs", 0x520, "ArrayProperty"},
            {"Switcher_Details", 0x530, "ObjectProperty"},
            {"CurrentConversationNPCIcon", 0x538, "SoftObjectProperty"},
            {"CurrentConversationNPCActor", 0x558, "WeakObjectProperty"},
            {"ConversationInputComp", 0x598, "ObjectProperty"},
            {"CurrentlySelectedIndex", 0x5A0, "IntProperty"},
            {"bBlockOptionIntroAnimation", 0x5A4, "BoolProperty"},
            {"RadialSelectionMaterialParameterName", 0x5A8, "NameProperty"},
            {"TagPriorities", 0x5B0, "ArrayProperty"},
            {"InteractActionNameKBM", 0x5C0, "NameProperty"},
            {"ADSInputAction", 0x5C4, "NameProperty"},
            {"InteractActionNameGamepad", 0x5C8, "NameProperty"},
            {"ConfirmBinding", 0x5D0, "StructProperty"},
            {"MakeSelectionBinding", 0x5E0, "StructProperty"},
            {"ADSMouseBinding", 0x5F0, "StructProperty"},
            {"CancelActionBinding", 0x600, "StructProperty"},
            {"RightTriggerBinding", 0x610, "StructProperty"},
            {"DetailsNodeTypeToBrief", 0x620, "MapProperty"},
            {"ChatBrief", 0x630, "SoftClassProperty"},
            {"DataDrivenBriefPrefix", 0x650, "StrProperty"},
            {"DataDrivenBrief", 0x660, "SoftClassProperty"},
            {"BasicBrief", 0x680, "SoftClassProperty"},
            {"RadialMenu_DialogOptions", 0x6A0, "ObjectProperty"},
            {"Image_RadialHighlight", 0x6A8, "ObjectProperty"},
            {"Keybind_Confirm", 0x6B0, "ObjectProperty"},
            {"BasicBrief_Main", 0x6B8, "ObjectProperty"},
            {"SizeBox_RadialMenu", 0x6C0, "ObjectProperty"},
            {"Overlay_Details", 0x6C8, "ObjectProperty"},
            {"Overlay_WheelContainer", 0x6D0, "ObjectProperty"},
            {"Image_Background", 0x6D8, "ObjectProperty"},
            {"Image_LoadingSpinner", 0x6E0, "ObjectProperty"},
        }};
    };

    struct FortConversation_CommActiveBase
    {
        static constexpr std::string_view Name = "FortConversation_CommActiveBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationInputComponent = 0x4A0;
            static constexpr std::uintptr_t FireInputActionName = 0x4A8;
            static constexpr std::uintptr_t ADS_DataTableRowHandle = 0x4B0;
            static constexpr std::uintptr_t BackAction_DataTableRowHandle = 0x4C0;
            static constexpr std::uintptr_t ADSInputActionName = 0x4D0;
            static constexpr std::uintptr_t InventoryKBMInputActionName = 0x4D4;
            static constexpr std::uintptr_t InventoryGamepadInputActionName = 0x4D8;
            static constexpr std::uintptr_t PlaceMapMarkerInputActionName = 0x4DC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ConversationInputComponent", 0x4A0, "ObjectProperty"},
            {"FireInputActionName", 0x4A8, "NameProperty"},
            {"ADS_DataTableRowHandle", 0x4B0, "StructProperty"},
            {"BackAction_DataTableRowHandle", 0x4C0, "StructProperty"},
            {"ADSInputActionName", 0x4D0, "NameProperty"},
            {"InventoryKBMInputActionName", 0x4D4, "NameProperty"},
            {"InventoryGamepadInputActionName", 0x4D8, "NameProperty"},
            {"PlaceMapMarkerInputActionName", 0x4DC, "NameProperty"},
        }};
    };

    struct FortDataDrivenServiceBrief
    {
        static constexpr std::string_view Name = "FortDataDrivenServiceBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_TitleBar = 0x338;
            static constexpr std::uintptr_t RichText_Description = 0x340;
            static constexpr std::uintptr_t Text_StockRemaining = 0x348;
            static constexpr std::uintptr_t TransactionStrip_Main = 0x350;
            static constexpr std::uintptr_t ServiceConfigs = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Text_TitleBar", 0x338, "ObjectProperty"},
            {"RichText_Description", 0x340, "ObjectProperty"},
            {"Text_StockRemaining", 0x348, "ObjectProperty"},
            {"TransactionStrip_Main", 0x350, "ObjectProperty"},
            {"ServiceConfigs", 0x358, "MapProperty"},
        }};
    };

    struct FortDuelBrief
    {
        static constexpr std::string_view Name = "FortDuelBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t TextTemplate = 0x348;
            static constexpr std::uintptr_t Text_Objective = 0x358;
            static constexpr std::uintptr_t TileView = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TextTemplate", 0x348, "TextProperty"},
            {"Text_Objective", 0x358, "ObjectProperty"},
            {"TileView", 0x360, "ObjectProperty"},
        }};
    };

    struct FortHireBrief
    {
        static constexpr std::string_view Name = "FortHireBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t TextTemplate = 0x348;
            static constexpr std::uintptr_t Text_Objective = 0x358;
            static constexpr std::uintptr_t SpecializationsVisualDataTable = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TextTemplate", 0x348, "TextProperty"},
            {"Text_Objective", 0x358, "ObjectProperty"},
            {"SpecializationsVisualDataTable", 0x360, "ObjectProperty"},
        }};
    };

    struct FortIntelBrief
    {
        static constexpr std::string_view Name = "FortIntelBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t TextTemplate = 0x348;
            static constexpr std::uintptr_t Text_Objective = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TextTemplate", 0x348, "TextProperty"},
            {"Text_Objective", 0x358, "ObjectProperty"},
        }};
    };

    struct FortItemFundBrief
    {
        static constexpr std::string_view Name = "FortItemFundBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_TitleBar = 0x3D8;
            static constexpr std::uintptr_t Text_ProgressPercent = 0x3E0;
            static constexpr std::uintptr_t Text_ProgressCount = 0x3E8;
            static constexpr std::uintptr_t Progress_Funding = 0x3F0;
            static constexpr std::uintptr_t LazyImage_Icon = 0x3F8;
            static constexpr std::uintptr_t TransactionStrip_Main = 0x400;
            static constexpr std::uintptr_t ServiceConfigs = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Text_TitleBar", 0x3D8, "ObjectProperty"},
            {"Text_ProgressPercent", 0x3E0, "ObjectProperty"},
            {"Text_ProgressCount", 0x3E8, "ObjectProperty"},
            {"Progress_Funding", 0x3F0, "ObjectProperty"},
            {"LazyImage_Icon", 0x3F8, "ObjectProperty"},
            {"TransactionStrip_Main", 0x400, "ObjectProperty"},
            {"ServiceConfigs", 0x408, "MapProperty"},
        }};
    };

    struct FortItemTransactionBrief
    {
        static constexpr std::string_view Name = "FortItemTransactionBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactionStrip_Main = 0x338;
            static constexpr std::uintptr_t DisplayItem = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransactionStrip_Main", 0x338, "ObjectProperty"},
            {"DisplayItem", 0x340, "ObjectProperty"},
        }};
    };

    struct FortMultiItemFundBrief
    {
        static constexpr std::string_view Name = "FortMultiItemFundBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSingleItemFundBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t Item_EntrySecondary = 0x358;
            static constexpr std::uintptr_t Item_EntryTertiary = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item_EntrySecondary", 0x358, "ObjectProperty"},
            {"Item_EntryTertiary", 0x360, "ObjectProperty"},
        }};
    };

    struct FortNPCTextDisplay
    {
        static constexpr std::string_view Name = "FortNPCTextDisplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Message = 0x308;
            static constexpr std::uintptr_t LazyImage_NPCImage = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_Message", 0x308, "ObjectProperty"},
            {"LazyImage_NPCImage", 0x310, "ObjectProperty"},
        }};
    };

    struct FortPlayerConversationUIComponent
    {
        static constexpr std::string_view Name = "FortPlayerConversationUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlockUISpawning = 0xC8;
            static constexpr std::uintptr_t DialogWidgetSoftClass = 0xD0;
            static constexpr std::uintptr_t DialogMarkerSoftClass = 0xF0;
            static constexpr std::uintptr_t MobileDialogWidgetSoftClass = 0x110;
            static constexpr std::uintptr_t MultiBriefsDialogWidgetSoftClass = 0x130;
            static constexpr std::uintptr_t MobileMultiBriefsDialogWidgetSoftClass = 0x150;
            static constexpr std::uintptr_t SpectatorConversationScenes = 0x170;
            static constexpr std::uintptr_t SpectatorMobileConversationScenes = 0x180;
            static constexpr std::uintptr_t DialogWidgetClass = 0x190;
            static constexpr std::uintptr_t DialogMarkerClass = 0x198;
            static constexpr std::uintptr_t DialogWidgetPool = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bBlockUISpawning", 0xC8, "BoolProperty"},
            {"DialogWidgetSoftClass", 0xD0, "SoftClassProperty"},
            {"DialogMarkerSoftClass", 0xF0, "SoftClassProperty"},
            {"MobileDialogWidgetSoftClass", 0x110, "SoftClassProperty"},
            {"MultiBriefsDialogWidgetSoftClass", 0x130, "SoftClassProperty"},
            {"MobileMultiBriefsDialogWidgetSoftClass", 0x150, "SoftClassProperty"},
            {"SpectatorConversationScenes", 0x170, "ArrayProperty"},
            {"SpectatorMobileConversationScenes", 0x180, "ArrayProperty"},
            {"DialogWidgetClass", 0x190, "ClassProperty"},
            {"DialogMarkerClass", 0x198, "ClassProperty"},
            {"DialogWidgetPool", 0x1A0, "StructProperty"},
        }};
    };

    struct FortQuestBrief
    {
        static constexpr std::string_view Name = "FortQuestBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t ThisMatchOnlyQuestText = 0x338;
            static constexpr std::uintptr_t Text_Objective = 0x348;
            static constexpr std::uintptr_t Text_MoneyReward = 0x350;
            static constexpr std::uintptr_t Text_XpReward = 0x358;
            static constexpr std::uintptr_t Text_ExpirationTime = 0x360;
            static constexpr std::uintptr_t LazyImage_QuestProviderImage = 0x368;
            static constexpr std::uintptr_t Overlay_QuestProvider = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ThisMatchOnlyQuestText", 0x338, "TextProperty"},
            {"Text_Objective", 0x348, "ObjectProperty"},
            {"Text_MoneyReward", 0x350, "ObjectProperty"},
            {"Text_XpReward", 0x358, "ObjectProperty"},
            {"Text_ExpirationTime", 0x360, "ObjectProperty"},
            {"LazyImage_QuestProviderImage", 0x368, "ObjectProperty"},
            {"Overlay_QuestProvider", 0x370, "ObjectProperty"},
        }};
    };

    struct FortShowFutureStormCircleBrief
    {
        static constexpr std::string_view Name = "FortShowFutureStormCircleBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseServiceText = 0x348;
            static constexpr std::uintptr_t Text_Display = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchaseServiceText", 0x348, "TextProperty"},
            {"Text_Display", 0x358, "ObjectProperty"},
        }};
    };

    struct FortSingleItemFundBrief
    {
        static constexpr std::string_view Name = "FortSingleItemFundBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t Item_Entry = 0x338;
            static constexpr std::uintptr_t NPCTextDisplay = 0x340;
            static constexpr std::uintptr_t ServiceConfigs = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item_Entry", 0x338, "ObjectProperty"},
            {"NPCTextDisplay", 0x340, "ObjectProperty"},
            {"ServiceConfigs", 0x348, "MapProperty"},
        }};
    };

    struct FortSingleOrMultiItemFundBrief
    {
        static constexpr std::string_view Name = "FortSingleOrMultiItemFundBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationOptionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t SingleItemBrief = 0x338;
            static constexpr std::uintptr_t MultiItemsBrief = 0x358;
            static constexpr std::uintptr_t Overlay_Brief = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SingleItemBrief", 0x338, "SoftClassProperty"},
            {"MultiItemsBrief", 0x358, "SoftClassProperty"},
            {"Overlay_Brief", 0x378, "ObjectProperty"},
        }};
    };

    struct FortTransactionStrip
    {
        static constexpr std::string_view Name = "FortTransactionStrip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_CostDescription = 0x310;
            static constexpr std::uintptr_t CachedGlobalCurrency = 0x318;
            static constexpr std::uintptr_t ResourceCurrency = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text_CostDescription", 0x310, "ObjectProperty"},
            {"CachedGlobalCurrency", 0x318, "WeakObjectProperty"},
            {"ResourceCurrency", 0x320, "ObjectProperty"},
        }};
    };

    struct FortUpgradeBrief
    {
        static constexpr std::string_view Name = "FortUpgradeBrief";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTransactionBrief";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactionStrip_Main = 0x338;
            static constexpr std::uintptr_t DisplayItem = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransactionStrip_Main", 0x338, "ObjectProperty"},
            {"DisplayItem", 0x340, "ObjectProperty"},
        }};
    };

    struct MobileConversationScreen
    {
        static constexpr std::string_view Name = "MobileConversationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseButtonArea = 0x6E8;
            static constexpr std::uintptr_t MobileButtonConfirm = 0x6F8;
            static constexpr std::uintptr_t MobileButtonTouchInformation = 0x700;
            static constexpr std::uintptr_t Switcher_CenteredDetails = 0x718;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CloseButtonArea", 0x6E8, "ObjectProperty"},
            {"MobileButtonConfirm", 0x6F8, "ObjectProperty"},
            {"MobileButtonTouchInformation", 0x700, "ObjectProperty"},
            {"Switcher_CenteredDetails", 0x718, "ObjectProperty"},
        }};
    };

}

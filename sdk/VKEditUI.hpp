#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VKEditUI
{
    struct VKConnectionIndicator
    {
        static constexpr std::string_view Name = "VKConnectionIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EditStatusLocalizedText = 0x4A0;
            static constexpr std::uintptr_t StatusIcon_NotConnected = 0x540;
            static constexpr std::uintptr_t StatusIcon_Connected = 0x548;
            static constexpr std::uintptr_t StatusIcon_RefreshRequired = 0x550;
            static constexpr std::uintptr_t StatusIcon_Preparing = 0x558;
            static constexpr std::uintptr_t StatusIcon_Downloading = 0x560;
            static constexpr std::uintptr_t StatusIcon_UpToDate = 0x568;
            static constexpr std::uintptr_t StatusIcon_StartingGame = 0x570;
            static constexpr std::uintptr_t StatusIcon_GameInProgress = 0x578;
            static constexpr std::uintptr_t StatusIcon_GameInProgressWarning = 0x580;
            static constexpr std::uintptr_t StatusIcon_Error = 0x588;
            static constexpr std::uintptr_t StatusIcon_PerformanceWarning = 0x590;
            static constexpr std::uintptr_t Image_StatusIcon = 0x598;
            static constexpr std::uintptr_t Text_StatusMessage = 0x5A0;
            static constexpr std::uintptr_t Switcher_AdditionalInfo = 0x5A8;
            static constexpr std::uintptr_t Panel_DownloadInfiniteContainer = 0x5B0;
            static constexpr std::uintptr_t Panel_DownloadContainer = 0x5B8;
            static constexpr std::uintptr_t ProgressBar_Download = 0x5C0;
            static constexpr std::uintptr_t Text_DownloadProgress = 0x5C8;
            static constexpr std::uintptr_t Panel_OpenLogContainer = 0x5D0;
            static constexpr std::uintptr_t Panel_SubMessageContainer = 0x5D8;
            static constexpr std::uintptr_t Image_SubMessage = 0x5E0;
            static constexpr std::uintptr_t Text_SubMessage = 0x5E8;
            static constexpr std::uintptr_t Text_EditMode = 0x5F0;
            static constexpr std::uintptr_t Panel_SquadListContainer = 0x5F8;
            static constexpr std::uintptr_t AthenaSquadList = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"EditStatusLocalizedText", 0x4A0, "TextProperty"},
            {"StatusIcon_NotConnected", 0x540, "ObjectProperty"},
            {"StatusIcon_Connected", 0x548, "ObjectProperty"},
            {"StatusIcon_RefreshRequired", 0x550, "ObjectProperty"},
            {"StatusIcon_Preparing", 0x558, "ObjectProperty"},
            {"StatusIcon_Downloading", 0x560, "ObjectProperty"},
            {"StatusIcon_UpToDate", 0x568, "ObjectProperty"},
            {"StatusIcon_StartingGame", 0x570, "ObjectProperty"},
            {"StatusIcon_GameInProgress", 0x578, "ObjectProperty"},
            {"StatusIcon_GameInProgressWarning", 0x580, "ObjectProperty"},
            {"StatusIcon_Error", 0x588, "ObjectProperty"},
            {"StatusIcon_PerformanceWarning", 0x590, "ObjectProperty"},
            {"Image_StatusIcon", 0x598, "ObjectProperty"},
            {"Text_StatusMessage", 0x5A0, "ObjectProperty"},
            {"Switcher_AdditionalInfo", 0x5A8, "ObjectProperty"},
            {"Panel_DownloadInfiniteContainer", 0x5B0, "ObjectProperty"},
            {"Panel_DownloadContainer", 0x5B8, "ObjectProperty"},
            {"ProgressBar_Download", 0x5C0, "ObjectProperty"},
            {"Text_DownloadProgress", 0x5C8, "ObjectProperty"},
            {"Panel_OpenLogContainer", 0x5D0, "ObjectProperty"},
            {"Panel_SubMessageContainer", 0x5D8, "ObjectProperty"},
            {"Image_SubMessage", 0x5E0, "ObjectProperty"},
            {"Text_SubMessage", 0x5E8, "ObjectProperty"},
            {"Text_EditMode", 0x5F0, "ObjectProperty"},
            {"Panel_SquadListContainer", 0x5F8, "ObjectProperty"},
            {"AthenaSquadList", 0x600, "ObjectProperty"},
        }};
    };

    struct VKDebugMessagesBase
    {
        static constexpr std::string_view Name = "VKDebugMessagesBase";
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

    struct ValkyriePerformanceHUDBase
    {
        static constexpr std::string_view Name = "ValkyriePerformanceHUDBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ThermometerMemoryThreshold = 0x370;
            static constexpr std::uintptr_t ViewModel = 0x4C8;
            static constexpr std::uintptr_t MemoryThermometerViewModel = 0x4D0;
            static constexpr std::uintptr_t PackageSizeThermometerViewModel = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ThermometerMemoryThreshold", 0x370, "StructProperty"},
            {"ViewModel", 0x4C8, "ObjectProperty"},
            {"MemoryThermometerViewModel", 0x4D0, "ObjectProperty"},
            {"PackageSizeThermometerViewModel", 0x4D8, "ObjectProperty"},
        }};
    };

    struct VkEditDynamicUIDirector
    {
        static constexpr std::string_view Name = "VkEditDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MemorySamplingScene = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemorySamplingScene", 0x2A8, "ObjectProperty"},
        }};
    };

    struct VkEditLogTab
    {
        static constexpr std::string_view Name = "VkEditLogTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x4D0;
            static constexpr std::uintptr_t MapTabInfo = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TabButtonLabelInfo", 0x4D0, "StructProperty"},
            {"MapTabInfo", 0x5C0, "StructProperty"},
        }};
    };

    struct VkPerformanceThermometerListViewModel
    {
        static constexpr std::string_view Name = "VkPerformanceThermometerListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ThermometerViewModels = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ThermometerViewModels", 0x68, "ArrayProperty"},
        }};
    };

    struct VkPerformanceThermometerViewModel
    {
        static constexpr std::string_view Name = "VkPerformanceThermometerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x68;
            static constexpr std::uintptr_t Value = 0x78;
            static constexpr std::uintptr_t MaxValue = 0x7C;
            static constexpr std::uintptr_t GlobalValue = 0x80;
            static constexpr std::uintptr_t bCookRequired = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x68, "TextProperty"},
            {"Value", 0x78, "IntProperty"},
            {"MaxValue", 0x7C, "IntProperty"},
            {"GlobalValue", 0x80, "IntProperty"},
            {"bCookRequired", 0x84, "BoolProperty"},
        }};
    };

    struct VkPerformanceViewModel
    {
        static constexpr std::string_view Name = "VkPerformanceViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ThermometerListViewModel = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ThermometerListViewModel", 0x68, "ObjectProperty"},
        }};
    };

}

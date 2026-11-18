#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricUI
{
    struct FabricBeatDisplayViewModel
    {
        static constexpr std::string_view Name = "FabricBeatDisplayViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfBeats = 0x68;
            static constexpr std::uintptr_t bVisible = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumberOfBeats", 0x68, "FloatProperty"},
            {"bVisible", 0x6C, "BoolProperty"},
        }};
    };

    struct FabricButtonBaseViewModel
    {
        static constexpr std::string_view Name = "FabricButtonBaseViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricInteractableViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ToggleState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ToggleState", 0x90, "EnumProperty"},
        }};
    };

    struct FabricCarouselViewModel
    {
        static constexpr std::string_view Name = "FabricCarouselViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricInteractableViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bPresetEnabled = 0x90;
            static constexpr std::uintptr_t bShowBorder = 0x91;
            static constexpr std::uintptr_t CurrentOptionIndex = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bPresetEnabled", 0x90, "BoolProperty"},
            {"bShowBorder", 0x91, "BoolProperty"},
            {"CurrentOptionIndex", 0x94, "IntProperty"},
        }};
    };

    struct FabricGeneralTextWidget
    {
        static constexpr std::string_view Name = "FabricGeneralTextWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricGridStyle
    {
        static constexpr std::string_view Name = "FabricGridStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x28;
            static constexpr std::uintptr_t HorizontalAlignment = 0x38;
            static constexpr std::uintptr_t VerticalAlignment = 0x39;
            static constexpr std::uintptr_t RowSpan = 0x3C;
            static constexpr std::uintptr_t ColumnSpan = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Padding", 0x28, "StructProperty"},
            {"HorizontalAlignment", 0x38, "ByteProperty"},
            {"VerticalAlignment", 0x39, "ByteProperty"},
            {"RowSpan", 0x3C, "IntProperty"},
            {"ColumnSpan", 0x40, "IntProperty"},
        }};
    };

    struct FabricInfoWidget
    {
        static constexpr std::string_view Name = "FabricInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricInteractableViewModel
    {
        static constexpr std::string_view Name = "FabricInteractableViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Value = 0x78;
            static constexpr std::uintptr_t bEnabled = 0x88;
            static constexpr std::uintptr_t bVisible = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Value", 0x78, "TextProperty"},
            {"bEnabled", 0x88, "BoolProperty"},
            {"bVisible", 0x89, "BoolProperty"},
        }};
    };

    struct FabricKnobViewModel
    {
        static constexpr std::string_view Name = "FabricKnobViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricInteractableViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bValueVisible = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bValueVisible", 0x90, "BoolProperty"},
        }};
    };

    struct FabricMeasureViewModel
    {
        static constexpr std::string_view Name = "FabricMeasureViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeasureCount = 0x68;
            static constexpr std::uintptr_t bVisible = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeasureCount", 0x68, "TextProperty"},
            {"bVisible", 0x78, "BoolProperty"},
        }};
    };

    struct FabricPageInfoViewModel
    {
        static constexpr std::string_view Name = "FabricPageInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasContent = 0x68;
            static constexpr std::uintptr_t bActivePage = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHasContent", 0x68, "BoolProperty"},
            {"bActivePage", 0x69, "BoolProperty"},
        }};
    };

    struct FabricPlaybackTimeViewModel
    {
        static constexpr std::string_view Name = "FabricPlaybackTimeViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ElapsedSeconds = 0x68;
            static constexpr std::uintptr_t TotalSeconds = 0x6C;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t bVisible = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ElapsedSeconds", 0x68, "FloatProperty"},
            {"TotalSeconds", 0x6C, "FloatProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"bVisible", 0x71, "BoolProperty"},
        }};
    };

    struct FabricPlaybackTimeWidget
    {
        static constexpr std::string_view Name = "FabricPlaybackTimeWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedSlot_Left = 0x340;
            static constexpr std::uintptr_t NamedSlot_Right = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NamedSlot_Left", 0x340, "ObjectProperty"},
            {"NamedSlot_Right", 0x348, "ObjectProperty"},
        }};
    };

    struct FabricScreenWidget
    {
        static constexpr std::string_view Name = "FabricScreenWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InvalidationBox_RootBox = 0x330;
            static constexpr std::uintptr_t ScaleBox_ScreenScale = 0x338;
            static constexpr std::uintptr_t GridPanel_ScreenGrid = 0x340;
            static constexpr std::uintptr_t Spacer_ElementSpacer = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InvalidationBox_RootBox", 0x330, "ObjectProperty"},
            {"ScaleBox_ScreenScale", 0x338, "ObjectProperty"},
            {"GridPanel_ScreenGrid", 0x340, "ObjectProperty"},
            {"Spacer_ElementSpacer", 0x348, "ObjectProperty"},
        }};
    };

    struct FabricSongSyncViewModel
    {
        static constexpr std::string_view Name = "FabricSongSyncViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlTempoState = 0x68;
            static constexpr std::uintptr_t bHasLinkedSongSyncDevices = 0x69;
            static constexpr std::uintptr_t bEnabled = 0x6A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlTempoState", 0x68, "EnumProperty"},
            {"bHasLinkedSongSyncDevices", 0x69, "BoolProperty"},
            {"bEnabled", 0x6A, "BoolProperty"},
        }};
    };

    struct FabricTimeSignatureViewModel
    {
        static constexpr std::string_view Name = "FabricTimeSignatureViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TopValue = 0x68;
            static constexpr std::uintptr_t BottomValue = 0x78;
            static constexpr std::uintptr_t bEnabled = 0x88;
            static constexpr std::uintptr_t bVisible = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TopValue", 0x68, "TextProperty"},
            {"BottomValue", 0x78, "TextProperty"},
            {"bEnabled", 0x88, "BoolProperty"},
            {"bVisible", 0x89, "BoolProperty"},
        }};
    };

    struct FabricTimeSignatureWidget
    {
        static constexpr std::string_view Name = "FabricTimeSignatureWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricTrackInfoViewModel
    {
        static constexpr std::string_view Name = "FabricTrackInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackInfoState = 0x68;
            static constexpr std::uintptr_t Artist = 0x70;
            static constexpr std::uintptr_t Title = 0x80;
            static constexpr std::uintptr_t bLoading = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TrackInfoState", 0x68, "EnumProperty"},
            {"Artist", 0x70, "StrProperty"},
            {"Title", 0x80, "StrProperty"},
            {"bLoading", 0x90, "BoolProperty"},
        }};
    };

    struct FabricTrackInfoWidget
    {
        static constexpr std::string_view Name = "FabricTrackInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricTrackNumberViewModel
    {
        static constexpr std::string_view Name = "FabricTrackNumberViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTrackNumber = 0x68;
            static constexpr std::uintptr_t TotalNumberOfTracks = 0x6C;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t bVisible = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentTrackNumber", 0x68, "IntProperty"},
            {"TotalNumberOfTracks", 0x6C, "IntProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"bVisible", 0x71, "BoolProperty"},
        }};
    };

    struct FabricTrackNumberWidget
    {
        static constexpr std::string_view Name = "FabricTrackNumberWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricWidget
    {
        static constexpr std::string_view Name = "FabricWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStyle = 0x330;
            static constexpr std::uintptr_t ViewModelClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GridStyle", 0x330, "ClassProperty"},
            {"ViewModelClass", 0x338, "ClassProperty"},
        }};
    };

    struct FabricWidgetComponent
    {
        static constexpr std::string_view Name = "FabricWidgetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldSuscribeToSignificanceSubsystem = 0x760;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShouldSuscribeToSignificanceSubsystem", 0x760, "BoolProperty"},
        }};
    };

    struct FabricWidgetTickControlSubsystem
    {
        static constexpr std::string_view Name = "FabricWidgetTickControlSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayspaceComponent_FabricViewModelManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_FabricViewModelManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModels = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewModels", 0xC0, "MapProperty"},
        }};
    };

}

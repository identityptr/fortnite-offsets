#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamDecksUI
{
    struct JamDeckIndicatorBase
    {
        static constexpr std::string_view Name = "JamDeckIndicatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatedActor = 0x378;
            static constexpr std::uintptr_t IndicatedActorComponent = 0x380;
            static constexpr std::uintptr_t RelativeLocation = 0x388;
            static constexpr std::uintptr_t MaxDistance = 0x3A0;
            static constexpr std::uintptr_t bClampOnScreen = 0x3A4;
            static constexpr std::uintptr_t bShowClampToScreenArrow = 0x3A5;
            static constexpr std::uintptr_t ElevationArrowData = 0x3A8;
            static constexpr std::uintptr_t bUseScreenSpacePosition = 0x3C4;
            static constexpr std::uintptr_t ScreenSpaceRelativeOffset = 0x3C8;
            static constexpr std::uintptr_t ScreenPriority = 0x3D8;
            static constexpr std::uintptr_t TurnToMarkerTouchTarget = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"IndicatedActor", 0x378, "WeakObjectProperty"},
            {"IndicatedActorComponent", 0x380, "WeakObjectProperty"},
            {"RelativeLocation", 0x388, "StructProperty"},
            {"MaxDistance", 0x3A0, "FloatProperty"},
            {"bClampOnScreen", 0x3A4, "BoolProperty"},
            {"bShowClampToScreenArrow", 0x3A5, "BoolProperty"},
            {"ElevationArrowData", 0x3A8, "StructProperty"},
            {"bUseScreenSpacePosition", 0x3C4, "BoolProperty"},
            {"ScreenSpaceRelativeOffset", 0x3C8, "StructProperty"},
            {"ScreenPriority", 0x3D8, "IntProperty"},
            {"TurnToMarkerTouchTarget", 0x4B0, "ObjectProperty"},
        }};
    };

    struct JamDeckViewModel
    {
        static constexpr std::string_view Name = "JamDeckViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSlotVM = 0x68;
            static constexpr std::uintptr_t OwnerName = 0x70;
            static constexpr std::uintptr_t FocusingPlayers = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MusicSlotVM", 0x68, "ObjectProperty"},
            {"OwnerName", 0x70, "TextProperty"},
            {"FocusingPlayers", 0x80, "ArrayProperty"},
        }};
    };

    struct JamDecksComponent_IndicatorsProvider
    {
        static constexpr std::string_view Name = "JamDecksComponent_IndicatorsProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WhileFocusedIndicators = 0xC0;
            static constexpr std::uintptr_t PerPlayerData = 0xE0;
            static constexpr std::uintptr_t JamDeckViewModel = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WhileFocusedIndicators", 0xC0, "ArrayProperty"},
            {"PerPlayerData", 0xE0, "ArrayProperty"},
            {"JamDeckViewModel", 0xF0, "ObjectProperty"},
        }};
    };

    struct JamDecksControllerComponent_IndicatorsManager
    {
        static constexpr std::string_view Name = "JamDecksControllerComponent_IndicatorsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicUISceneToAdd = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicUISceneToAdd", 0xC0, "ObjectProperty"},
        }};
    };

    struct JamDecksGameStateComponent_IndicatorCache
    {
        static constexpr std::string_view Name = "JamDecksGameStateComponent_IndicatorCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetPool = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetPool", 0xC0, "StructProperty"},
        }};
    };

    struct JamDecksIndicatorLayerBase
    {
        static constexpr std::string_view Name = "JamDecksIndicatorLayerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DeckIndicators = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeckIndicators", 0x370, "ObjectProperty"},
        }};
    };

    struct JamDecksPickerOverriderComponent
    {
        static constexpr std::string_view Name = "JamDecksPickerOverriderComponent";
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

    struct QuickJoinButtonBehaviorExtension
    {
        static constexpr std::string_view Name = "QuickJoinButtonBehaviorExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehaviorExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t QuickJoinTagQuery = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuickJoinTagQuery", 0x90, "StructProperty"},
        }};
    };

}

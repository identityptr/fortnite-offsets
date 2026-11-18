#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshCosmeticsUI
{
    struct FortVariantRedirectorTile
    {
        static constexpr std::string_view Name = "FortVariantRedirectorTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVariantEditorWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_VariantOptions = 0x3C8;
            static constexpr std::uintptr_t Text_VariantName = 0x3D0;
            static constexpr std::uintptr_t SprayCustomizerClass = 0x3D8;
            static constexpr std::uintptr_t SprayCustomizerConfig = 0x3F8;
            static constexpr std::uintptr_t ClearAllSlotsInputAction = 0x400;
            static constexpr std::uintptr_t RandomizeSpraysInputAction = 0x410;
            static constexpr std::uintptr_t ItemDefinition = 0x420;
            static constexpr std::uintptr_t LoadedEmotesToRandomize = 0x428;
            static constexpr std::uintptr_t OnVariantEngagedEvent = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EntryBox_VariantOptions", 0x3C8, "ObjectProperty"},
            {"Text_VariantName", 0x3D0, "ObjectProperty"},
            {"SprayCustomizerClass", 0x3D8, "SoftClassProperty"},
            {"SprayCustomizerConfig", 0x3F8, "ObjectProperty"},
            {"ClearAllSlotsInputAction", 0x400, "StructProperty"},
            {"RandomizeSpraysInputAction", 0x410, "StructProperty"},
            {"ItemDefinition", 0x420, "WeakObjectProperty"},
            {"LoadedEmotesToRandomize", 0x428, "ArrayProperty"},
            {"OnVariantEngagedEvent", 0x438, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortVariantRedirectorTileButton
    {
        static constexpr std::string_view Name = "FortVariantRedirectorTileButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageOverlay = 0x15D0;
            static constexpr std::uintptr_t LazyImage_TileIcon = 0x15D8;
            static constexpr std::uintptr_t DisplayMode = 0x15E0;
            static constexpr std::uintptr_t SlotOpacitySprayAssigned = 0x15E4;
            static constexpr std::uintptr_t SlotOpacitySprayNotAssigned = 0x15E8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ImageOverlay", 0x15D0, "ObjectProperty"},
            {"LazyImage_TileIcon", 0x15D8, "ObjectProperty"},
            {"DisplayMode", 0x15E0, "EnumProperty"},
            {"SlotOpacitySprayAssigned", 0x15E4, "FloatProperty"},
            {"SlotOpacitySprayNotAssigned", 0x15E8, "FloatProperty"},
        }};
    };

    struct FortVariantSprayCustomizer
    {
        static constexpr std::string_view Name = "FortVariantSprayCustomizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Back = 0x7D0;
            static constexpr std::uintptr_t Button_Confirm = 0x7D8;
            static constexpr std::uintptr_t Button_HideArchivedItems = 0x7E0;
            static constexpr std::uintptr_t Button_ShowArchivedItems = 0x7E8;
            static constexpr std::uintptr_t Widget_ArchivedItemsButtons = 0x7F0;
            static constexpr std::uintptr_t Button_SpraysTab = 0x7F8;
            static constexpr std::uintptr_t Button_SettingsTab = 0x800;
            static constexpr std::uintptr_t Button_TouchClose = 0x808;
            static constexpr std::uintptr_t ActionWidget_TabLeft = 0x810;
            static constexpr std::uintptr_t ActionWidget_TabRight = 0x818;
            static constexpr std::uintptr_t Switcher_Tabs = 0x820;
            static constexpr std::uintptr_t Widget_Sprays = 0x828;
            static constexpr std::uintptr_t Widget_Settings = 0x830;
            static constexpr std::uintptr_t TexturePicker_Sprays = 0x838;
            static constexpr std::uintptr_t Setting_Saturation = 0x840;
            static constexpr std::uintptr_t Setting_Wear = 0x848;
            static constexpr std::uintptr_t Setting_Scale = 0x850;
            static constexpr std::uintptr_t TabLeftAction = 0x858;
            static constexpr std::uintptr_t TabRightAction = 0x868;
            static constexpr std::uintptr_t ItemShopPreviewSceneChangerTag = 0x878;
            static constexpr std::uintptr_t TabButtonGroup = 0x880;
            static constexpr std::uintptr_t SprayVariant = 0x888;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"Button_Back", 0x7D0, "ObjectProperty"},
            {"Button_Confirm", 0x7D8, "ObjectProperty"},
            {"Button_HideArchivedItems", 0x7E0, "ObjectProperty"},
            {"Button_ShowArchivedItems", 0x7E8, "ObjectProperty"},
            {"Widget_ArchivedItemsButtons", 0x7F0, "ObjectProperty"},
            {"Button_SpraysTab", 0x7F8, "ObjectProperty"},
            {"Button_SettingsTab", 0x800, "ObjectProperty"},
            {"Button_TouchClose", 0x808, "ObjectProperty"},
            {"ActionWidget_TabLeft", 0x810, "ObjectProperty"},
            {"ActionWidget_TabRight", 0x818, "ObjectProperty"},
            {"Switcher_Tabs", 0x820, "ObjectProperty"},
            {"Widget_Sprays", 0x828, "ObjectProperty"},
            {"Widget_Settings", 0x830, "ObjectProperty"},
            {"TexturePicker_Sprays", 0x838, "ObjectProperty"},
            {"Setting_Saturation", 0x840, "ObjectProperty"},
            {"Setting_Wear", 0x848, "ObjectProperty"},
            {"Setting_Scale", 0x850, "ObjectProperty"},
            {"TabLeftAction", 0x858, "StructProperty"},
            {"TabRightAction", 0x868, "StructProperty"},
            {"ItemShopPreviewSceneChangerTag", 0x878, "StructProperty"},
            {"TabButtonGroup", 0x880, "ObjectProperty"},
            {"SprayVariant", 0x888, "ObjectProperty"},
        }};
    };

    struct FortVariantSprayCustomizerConfig
    {
        static constexpr std::string_view Name = "FortVariantSprayCustomizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SprayCustomizerOptions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SprayCustomizerOptions", 0x28, "MapProperty"},
        }};
    };

    struct FortVariantSprayCustomizerSetting
    {
        static constexpr std::string_view Name = "FortVariantSprayCustomizerSetting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slider_Value = 0x308;
            static constexpr std::uintptr_t CommitDelay = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slider_Value", 0x308, "ObjectProperty"},
            {"CommitDelay", 0x310, "FloatProperty"},
        }};
    };

}

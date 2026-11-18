#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeCommunicationUI
{
    struct CreativeBubbleChatMessageViewModel
    {
        static constexpr std::string_view Name = "CreativeBubbleChatMessageViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTextChatMessageVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IsWhisper = 0x1B0;
            static constexpr std::uintptr_t IsSocialParty = 0x1B1;
            static constexpr std::uintptr_t IsFriend = 0x1B2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IsWhisper", 0x1B0, "BoolProperty"},
            {"IsSocialParty", 0x1B1, "BoolProperty"},
            {"IsFriend", 0x1B2, "BoolProperty"},
        }};
    };

    struct CreativeBubbleChatViewModel
    {
        static constexpr std::string_view Name = "CreativeBubbleChatViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTextChatPlayerBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayerState = 0x88;
            static constexpr std::uintptr_t Messages = 0x90;
            static constexpr std::uintptr_t Message = 0xA0;
            static constexpr std::uintptr_t bIsIndicatorClamped = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetPlayerState", 0x88, "WeakObjectProperty"},
            {"Messages", 0x90, "ArrayProperty"},
            {"Message", 0xA0, "TextProperty"},
            {"bIsIndicatorClamped", 0xB0, "BoolProperty"},
        }};
    };

    struct CreativeIndicatorLayerManagerWidget
    {
        static constexpr std::string_view Name = "CreativeIndicatorLayerManagerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerIndicatorPoolSize = 0x380;
            static constexpr std::uintptr_t IndicatorPool = 0x388;
            static constexpr std::uintptr_t LocalPlayerViewModel = 0x3D0;
            static constexpr std::uintptr_t PlayerIndicatorClass = 0x3D8;
            static constexpr std::uintptr_t PlayerIndicators = 0x3E0;
            static constexpr std::uintptr_t ShowIndicatorForLocalPlayer = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayerIndicatorPoolSize", 0x380, "IntProperty"},
            {"IndicatorPool", 0x388, "StructProperty"},
            {"LocalPlayerViewModel", 0x3D0, "ObjectProperty"},
            {"PlayerIndicatorClass", 0x3D8, "ClassProperty"},
            {"PlayerIndicators", 0x3E0, "ObjectProperty"},
            {"ShowIndicatorForLocalPlayer", 0x3E8, "BoolProperty"},
        }};
    };

    struct CreativeLocalPlayerViewModel
    {
        static constexpr std::string_view Name = "CreativeLocalPlayerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameMemberPlayerStates = 0x78;
            static constexpr std::uintptr_t CachedTeammatePlayerStates = 0x88;
            static constexpr std::uintptr_t CachedSquadMemberPlayerStates = 0x98;
            static constexpr std::uintptr_t CachedPartyMemberPlayerStates = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedGameMemberPlayerStates", 0x78, "ArrayProperty"},
            {"CachedTeammatePlayerStates", 0x88, "ArrayProperty"},
            {"CachedSquadMemberPlayerStates", 0x98, "ArrayProperty"},
            {"CachedPartyMemberPlayerStates", 0xA8, "ArrayProperty"},
        }};
    };

    struct CreativePlayerIndicatorWidget
    {
        static constexpr std::string_view Name = "CreativePlayerIndicatorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDistanceToDisplayInfo = 0x4D0;
            static constexpr std::uintptr_t BubbleChatViewModel = 0x4D8;
            static constexpr std::uintptr_t Text_Distance = 0x4E8;
            static constexpr std::uintptr_t CachedCreativeCommunicationOverride = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinDistanceToDisplayInfo", 0x4D0, "FloatProperty"},
            {"BubbleChatViewModel", 0x4D8, "ObjectProperty"},
            {"Text_Distance", 0x4E8, "ObjectProperty"},
            {"CachedCreativeCommunicationOverride", 0x520, "ObjectProperty"},
        }};
    };

    struct CreativePlayerStateComponent_UIViewModels
    {
        static constexpr std::string_view Name = "CreativePlayerStateComponent_UIViewModels";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
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

    struct CreativeProximityChatDebugWidget
    {
        static constexpr std::string_view Name = "CreativeProximityChatDebugWidget";
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

}

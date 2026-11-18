#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeCommunicationRuntime
{
    struct CreativeCommunicationOverrideBlueprintLibrary
    {
        static constexpr std::string_view Name = "CreativeCommunicationOverrideBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CreativeGameStateComponent_CommunicationOverride
    {
        static constexpr std::string_view Name = "CreativeGameStateComponent_CommunicationOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_CommunicationOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCreativeBubbleChatSettingsUpdated = 0x1A0;
            static constexpr std::uintptr_t CachedMinigame = 0x1B0;
            static constexpr std::uintptr_t SproutStyleBubbleChatWidgetScene = 0x1B8;
            static constexpr std::uintptr_t ProximityChatDebugWidgetScene = 0x1C0;
            static constexpr std::uintptr_t CreativeBubbleChatSettings = 0x1C8;
            static constexpr std::uintptr_t BubbleChatEnabled = 0x200;
            static constexpr std::uintptr_t BubbleChatMaximumRange = 0x228;
            static constexpr std::uintptr_t BubbleChatMinLifetime = 0x250;
            static constexpr std::uintptr_t BubbleChatMaxLifetime = 0x278;
            static constexpr std::uintptr_t BubbleChatOcculdeBubble = 0x2A0;
            static constexpr std::uintptr_t BubbleChatClampToScreenMaxDistance = 0x2C8;
            static constexpr std::uintptr_t BubbleChatStyle = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnCreativeBubbleChatSettingsUpdated", 0x1A0, "MulticastInlineDelegateProperty"},
            {"CachedMinigame", 0x1B0, "ObjectProperty"},
            {"SproutStyleBubbleChatWidgetScene", 0x1B8, "ObjectProperty"},
            {"ProximityChatDebugWidgetScene", 0x1C0, "ObjectProperty"},
            {"CreativeBubbleChatSettings", 0x1C8, "StructProperty"},
            {"BubbleChatEnabled", 0x200, "StructProperty"},
            {"BubbleChatMaximumRange", 0x228, "StructProperty"},
            {"BubbleChatMinLifetime", 0x250, "StructProperty"},
            {"BubbleChatMaxLifetime", 0x278, "StructProperty"},
            {"BubbleChatOcculdeBubble", 0x2A0, "StructProperty"},
            {"BubbleChatClampToScreenMaxDistance", 0x2C8, "StructProperty"},
            {"BubbleChatStyle", 0x2F0, "StructProperty"},
        }};
    };

}

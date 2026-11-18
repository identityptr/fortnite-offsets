#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeVideoPlayerRuntime
{
    struct CreativeVideoPlayerFullscreenGameplayAbility
    {
        static constexpr std::string_view Name = "CreativeVideoPlayerFullscreenGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t NoCollisionGameplayEffectClass = 0xB40;
            static constexpr std::uintptr_t NoDamageGameplayEffectClass = 0xB48;
            static constexpr std::uintptr_t AnimationStateGameplayEffectClasses = 0xB50;
            static constexpr std::uintptr_t FullscreenWidgetClass = 0xB60;
            static constexpr std::uintptr_t FullscreenEffects = 0xB68;
            static constexpr std::uintptr_t FullscreenMappingContext = 0xB70;
            static constexpr std::uintptr_t FullscreenInputAction = 0xB78;
            static constexpr std::uintptr_t bPromptToConfirmFullscreen = 0xB80;
            static constexpr std::uintptr_t bIsDismissable = 0xB81;
            static constexpr std::uintptr_t OverrideMovementInputComponent = 0xB88;
            static constexpr std::uintptr_t SelectFullscreenModeInputComponent = 0xB90;
            static constexpr std::uintptr_t ActiveGameplayEffects = 0xB98;
            static constexpr std::uintptr_t RequestedFullscreenEffects = 0xBA8;
            static constexpr std::uintptr_t VideoPlayerWidget = 0xBB0;
            static constexpr std::uintptr_t ExtMediaTextureCached = 0xBB8;
            static constexpr std::uintptr_t ExtSourceBusCached = 0xBC0;
            static constexpr std::uintptr_t ExtMediaSoundComponentCached = 0xBC8;
            static constexpr std::uintptr_t bExtComponentsSet = 0xBD0;
            static constexpr std::uintptr_t bActivatedFullscreen = 0xBD1;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"NoCollisionGameplayEffectClass", 0xB40, "ClassProperty"},
            {"NoDamageGameplayEffectClass", 0xB48, "ClassProperty"},
            {"AnimationStateGameplayEffectClasses", 0xB50, "ArrayProperty"},
            {"FullscreenWidgetClass", 0xB60, "ClassProperty"},
            {"FullscreenEffects", 0xB68, "EnumProperty"},
            {"FullscreenMappingContext", 0xB70, "ObjectProperty"},
            {"FullscreenInputAction", 0xB78, "ObjectProperty"},
            {"bPromptToConfirmFullscreen", 0xB80, "BoolProperty"},
            {"bIsDismissable", 0xB81, "BoolProperty"},
            {"OverrideMovementInputComponent", 0xB88, "ObjectProperty"},
            {"SelectFullscreenModeInputComponent", 0xB90, "ObjectProperty"},
            {"ActiveGameplayEffects", 0xB98, "ArrayProperty"},
            {"RequestedFullscreenEffects", 0xBA8, "EnumProperty"},
            {"VideoPlayerWidget", 0xBB0, "ObjectProperty"},
            {"ExtMediaTextureCached", 0xBB8, "ObjectProperty"},
            {"ExtSourceBusCached", 0xBC0, "ObjectProperty"},
            {"ExtMediaSoundComponentCached", 0xBC8, "ObjectProperty"},
            {"bExtComponentsSet", 0xBD0, "BoolProperty"},
            {"bActivatedFullscreen", 0xBD1, "BoolProperty"},
        }};
    };

    struct CreativeVideoPlayerFunctionLibrary
    {
        static constexpr std::string_view Name = "CreativeVideoPlayerFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CreativeVideoPlayerWorldSubsystem
    {
        static constexpr std::string_view Name = "CreativeVideoPlayerWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNotifyFullscreenChange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnNotifyFullscreenChange", 0x38, "MulticastInlineDelegateProperty"},
        }};
    };

}

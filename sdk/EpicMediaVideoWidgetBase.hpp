#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaVideoWidgetBase
{
    struct EpicMediaVideoWidgetBase
    {
        static constexpr std::string_view Name = "EpicMediaVideoWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePlayer = 0x4B8;
            static constexpr std::uintptr_t Config = 0x4C0;
            static constexpr std::uintptr_t PressToSkipAction = 0x4C8;
            static constexpr std::uintptr_t HoldToSkipAction = 0x4D8;
            static constexpr std::uintptr_t Button_Skip = 0x4E8;
            static constexpr std::uintptr_t MediaTexture = 0x4F0;
            static constexpr std::uintptr_t Image_VideoTexture = 0x4F8;
            static constexpr std::uintptr_t Image_Throbber = 0x500;
            static constexpr std::uintptr_t SoundComponent = 0x508;
            static constexpr std::uintptr_t ActiveSoundMix = 0x510;
            static constexpr std::uintptr_t DefaultSubmix = 0x518;
            static constexpr std::uintptr_t SoundClass = 0x520;
            static constexpr std::uintptr_t LicensedSubmix = 0x528;
            static constexpr std::uintptr_t bAutoBroadcastRebuild = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"BasePlayer", 0x4B8, "ObjectProperty"},
            {"Config", 0x4C0, "ObjectProperty"},
            {"PressToSkipAction", 0x4C8, "StructProperty"},
            {"HoldToSkipAction", 0x4D8, "StructProperty"},
            {"Button_Skip", 0x4E8, "ObjectProperty"},
            {"MediaTexture", 0x4F0, "ObjectProperty"},
            {"Image_VideoTexture", 0x4F8, "ObjectProperty"},
            {"Image_Throbber", 0x500, "ObjectProperty"},
            {"SoundComponent", 0x508, "ObjectProperty"},
            {"ActiveSoundMix", 0x510, "ObjectProperty"},
            {"DefaultSubmix", 0x518, "ObjectProperty"},
            {"SoundClass", 0x520, "ObjectProperty"},
            {"LicensedSubmix", 0x528, "ObjectProperty"},
            {"bAutoBroadcastRebuild", 0x530, "BoolProperty"},
        }};
    };

    struct EpicMediaVideoWidgetConfig
    {
        static constexpr std::string_view Name = "EpicMediaVideoWidgetConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaID = 0x28;
            static constexpr std::uintptr_t MediaName = 0x38;
            static constexpr std::uintptr_t PerfControl = 0x48;
            static constexpr std::uintptr_t bAllowSkipping = 0x49;
            static constexpr std::uintptr_t bHoldToSkip = 0x4A;
            static constexpr std::uintptr_t bHideControls = 0x4B;
            static constexpr std::uintptr_t bAutoPlay = 0x4C;
            static constexpr std::uintptr_t bLoop = 0x4D;
            static constexpr std::uintptr_t bNoAudio = 0x4E;
            static constexpr std::uintptr_t BasePlayerOverride = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MediaID", 0x28, "StrProperty"},
            {"MediaName", 0x38, "StrProperty"},
            {"PerfControl", 0x48, "ByteProperty"},
            {"bAllowSkipping", 0x49, "BoolProperty"},
            {"bHoldToSkip", 0x4A, "BoolProperty"},
            {"bHideControls", 0x4B, "BoolProperty"},
            {"bAutoPlay", 0x4C, "BoolProperty"},
            {"bLoop", 0x4D, "BoolProperty"},
            {"bNoAudio", 0x4E, "BoolProperty"},
            {"BasePlayerOverride", 0x50, "WeakObjectProperty"},
        }};
    };

}

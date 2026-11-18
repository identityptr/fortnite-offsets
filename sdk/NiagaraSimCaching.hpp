#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NiagaraSimCaching
{
    struct MovieSceneNiagaraCacheSection
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraCacheSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBaseCacheSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x148;
            static constexpr std::uintptr_t bCacheOutOfDate = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Params", 0x148, "StructProperty"},
            {"bCacheOutOfDate", 0x1D0, "BoolProperty"},
        }};
    };

    struct MovieSceneNiagaraCacheTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraCacheTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRecording = 0x108;
            static constexpr std::uintptr_t AnimationSections = 0x110;
            static constexpr std::uintptr_t bCacheRecordingEnabled = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsRecording", 0x108, "BoolProperty"},
            {"AnimationSections", 0x110, "ArrayProperty"},
            {"bCacheRecordingEnabled", 0x120, "BoolProperty"},
        }};
    };

}

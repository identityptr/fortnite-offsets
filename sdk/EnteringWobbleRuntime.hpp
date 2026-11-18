#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EnteringWobbleRuntime
{
    struct EnteringWobbleBeamComponent
    {
        static constexpr std::string_view Name = "EnteringWobbleBeamComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorComponent_TargetedBeam";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMinLengthReached = 0x488;
            static constexpr std::uintptr_t OnBeamDetached = 0x498;
            static constexpr std::uintptr_t MaxBeamLength = 0x4A8;
            static constexpr std::uintptr_t MinBeamLengthWhenDetached = 0x4D0;
            static constexpr std::uintptr_t BeamStartpointInterpSpeed = 0x4F8;
            static constexpr std::uintptr_t SecondsBeforeBeamDetach = 0x520;
            static constexpr std::uintptr_t bBeamDetached = 0x548;
            static constexpr std::uintptr_t ImpactActorEndpoint = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnMinLengthReached", 0x488, "MulticastInlineDelegateProperty"},
            {"OnBeamDetached", 0x498, "MulticastInlineDelegateProperty"},
            {"MaxBeamLength", 0x4A8, "StructProperty"},
            {"MinBeamLengthWhenDetached", 0x4D0, "StructProperty"},
            {"BeamStartpointInterpSpeed", 0x4F8, "StructProperty"},
            {"SecondsBeforeBeamDetach", 0x520, "StructProperty"},
            {"bBeamDetached", 0x548, "BoolProperty"},
            {"ImpactActorEndpoint", 0x558, "OptionalProperty"},
        }};
    };

}

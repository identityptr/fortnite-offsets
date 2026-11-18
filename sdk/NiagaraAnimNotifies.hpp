#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NiagaraAnimNotifies
{
    struct AnimNotifyState_TimedNiagaraEffect
    {
        static constexpr std::string_view Name = "AnimNotifyState_TimedNiagaraEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x30;
            static constexpr std::uintptr_t SocketName = 0x38;
            static constexpr std::uintptr_t LocationOffset = 0x40;
            static constexpr std::uintptr_t RotationOffset = 0x58;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t bApplyRateScaleAsTimeDilation = 0x88;
            static constexpr std::uintptr_t bDestroyAtEnd = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Template", 0x30, "ObjectProperty"},
            {"SocketName", 0x38, "NameProperty"},
            {"LocationOffset", 0x40, "StructProperty"},
            {"RotationOffset", 0x58, "StructProperty"},
            {"Scale", 0x70, "StructProperty"},
            {"bApplyRateScaleAsTimeDilation", 0x88, "BoolProperty"},
            {"bDestroyAtEnd", 0x89, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSpawnedEffect",
        }};
    };

    struct AnimNotifyState_TimedNiagaraEffectAdvanced
    {
        static constexpr std::string_view Name = "AnimNotifyState_TimedNiagaraEffectAdvanced";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_TimedNiagaraEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyProgressType = 0x90;
            static constexpr std::uintptr_t bApplyRateScaleToProgress = 0x91;
            static constexpr std::uintptr_t NotifyProgressUserParameter = 0x94;
            static constexpr std::uintptr_t AnimCurves = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NotifyProgressType", 0x90, "EnumProperty"},
            {"bApplyRateScaleToProgress", 0x91, "BoolProperty"},
            {"NotifyProgressUserParameter", 0x94, "NameProperty"},
            {"AnimCurves", 0x98, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetNotifyProgress",
        }};
    };

    struct AnimNotify_PlayNiagaraEffect
    {
        static constexpr std::string_view Name = "AnimNotify_PlayNiagaraEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x38;
            static constexpr std::uintptr_t LocationOffset = 0x40;
            static constexpr std::uintptr_t RotationOffset = 0x58;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t bAbsoluteScale = 0x88;
            static constexpr std::uintptr_t Attached = 0xC0;
            static constexpr std::uintptr_t SocketName = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Template", 0x38, "ObjectProperty"},
            {"LocationOffset", 0x40, "StructProperty"},
            {"RotationOffset", 0x58, "StructProperty"},
            {"Scale", 0x70, "StructProperty"},
            {"bAbsoluteScale", 0x88, "BoolProperty"},
            {"Attached", 0xC0, "BoolProperty"},
            {"SocketName", 0xC4, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSpawnedEffect",
        }};
    };

    struct CurveParameterPair
    {
        static constexpr std::string_view Name = "CurveParameterPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimCurveName = 0x0;
            static constexpr std::uintptr_t UserVariableName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimCurveName", 0x0, "NameProperty"},
            {"UserVariableName", 0x4, "NameProperty"},
        }};
    };

}

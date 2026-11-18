#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UnrealEngineExperimental
{
    struct ControllerComponentDebugDraw
    {
        static constexpr std::string_view Name = "ControllerComponentDebugDraw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentLineBatchers = 0xC0;
            static constexpr std::uintptr_t DebugDrawTexts = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PersistentLineBatchers", 0xC0, "ArrayProperty"},
            {"DebugDrawTexts", 0xD0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "Clear",
            "ClearChannel",
            "DrawDebugBoxInternal",
            "DrawDebugCapsuleInternal",
            "DrawDebugConeInternal",
            "DrawDebugCylinderInternal",
            "DrawDebugDirectionalArrowInternal",
            "DrawDebugLineInternal",
            "DrawDebugPointInternal",
            "DrawDebugSphereInternal",
            "DrawDebugTextInternal",
            "Reset",
            "SetDebugDrawEnabled",
        }};
    };

    struct DebugDrawText
    {
        static constexpr std::string_view Name = "DebugDrawText";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugTextPosition = 0x0;
            static constexpr std::uintptr_t DebugText = 0x18;
            static constexpr std::uintptr_t TimeRemaining = 0x28;
            static constexpr std::uintptr_t TextColor = 0x2C;
            static constexpr std::uintptr_t bDrawShadow = 0x30;
            static constexpr std::uintptr_t FontScale = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DebugTextPosition", 0x0, "StructProperty"},
            {"DebugText", 0x18, "StrProperty"},
            {"TimeRemaining", 0x28, "FloatProperty"},
            {"TextColor", 0x2C, "StructProperty"},
            {"bDrawShadow", 0x30, "BoolProperty"},
            {"FontScale", 0x34, "FloatProperty"},
        }};
    };

    struct OnUnrecoverableErrorMessage
    {
        static constexpr std::string_view Name = "OnUnrecoverableErrorMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Timestamp = 0x0;
            static constexpr std::uintptr_t TitleStr = 0x8;
            static constexpr std::uintptr_t MessageStr = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Timestamp", 0x0, "StructProperty"},
            {"TitleStr", 0x8, "TextProperty"},
            {"MessageStr", 0x18, "TextProperty"},
        }};
    };

    struct OnVerseRuntimeErrorMessage
    {
        static constexpr std::string_view Name = "OnVerseRuntimeErrorMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Timestamp = 0x0;
            static constexpr std::uintptr_t MessageStr = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Timestamp", 0x0, "StructProperty"},
            {"MessageStr", 0x8, "TextProperty"},
        }};
    };

    struct PersistentLineBatcher
    {
        static constexpr std::string_view Name = "PersistentLineBatcher";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentLineBatcher = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersistentLineBatcher", 0x0, "ObjectProperty"},
        }};
    };

    struct ScriptDiagnosticMessage
    {
        static constexpr std::string_view Name = "ScriptDiagnosticMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageType = 0x0;
            static constexpr std::uintptr_t Timestamp = 0x8;
            static constexpr std::uintptr_t Channel = 0x10;
            static constexpr std::uintptr_t MessageStr = 0x20;
            static constexpr std::uintptr_t SourceLocation = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MessageType", 0x0, "ByteProperty"},
            {"Timestamp", 0x8, "StructProperty"},
            {"Channel", 0x10, "StrProperty"},
            {"MessageStr", 0x20, "TextProperty"},
            {"SourceLocation", 0x30, "StructProperty"},
        }};
    };

    struct ScriptDiagnosticSourceLocation
    {
        static constexpr std::string_view Name = "ScriptDiagnosticSourceLocation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x0;
            static constexpr std::uintptr_t RowSpan = 0x10;
            static constexpr std::uintptr_t ColSpan = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilePath", 0x0, "StrProperty"},
            {"RowSpan", 0x10, "StructProperty"},
            {"ColSpan", 0x18, "StructProperty"},
        }};
    };

    struct ScriptScreenLogMessage
    {
        static constexpr std::string_view Name = "ScriptScreenLogMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ScriptDiagnosticMessage";
        struct Offsets
        {
            static constexpr std::uintptr_t ScreenColor = 0x50;
            static constexpr std::uintptr_t DisplayDuration = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScreenColor", 0x50, "StructProperty"},
            {"DisplayDuration", 0x54, "FloatProperty"},
        }};
    };

    struct ScriptScreenLogMessageWithLocalization
    {
        static constexpr std::string_view Name = "ScriptScreenLogMessageWithLocalization";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Timestamp = 0x0;
            static constexpr std::uintptr_t Message = 0x8;
            static constexpr std::uintptr_t Prefix = 0x38;
            static constexpr std::uintptr_t ScreenColor = 0x48;
            static constexpr std::uintptr_t DisplayDuration = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Timestamp", 0x0, "StructProperty"},
            {"Message", 0x8, "StructProperty"},
            {"Prefix", 0x38, "StrProperty"},
            {"ScreenColor", 0x48, "StructProperty"},
            {"DisplayDuration", 0x4C, "FloatProperty"},
        }};
    };

}

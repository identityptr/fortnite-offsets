#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChatCompletion
{
    struct AsyncAction_ChatCompletionRequest
    {
        static constexpr std::string_view Name = "AsyncAction_ChatCompletionRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
            static constexpr std::uintptr_t ChatCompleter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
            {"ChatCompleter", 0x50, "ObjectProperty"},
        }};
    };

    struct AsyncAction_StructuredChatCompletionRequest
    {
        static constexpr std::string_view Name = "AsyncAction_StructuredChatCompletionRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
            static constexpr std::uintptr_t ChatCompleter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
            {"ChatCompleter", 0x50, "ObjectProperty"},
        }};
    };

    struct ChatCompleter
    {
        static constexpr std::string_view Name = "ChatCompleter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGenerateResponse = 0x28;
            static constexpr std::uintptr_t OnGenerateStructuredResponse = 0x38;
            static constexpr std::uintptr_t OnResponse = 0x48;
            static constexpr std::uintptr_t OnStructuredResponse = 0x58;
            static constexpr std::uintptr_t OnFailure = 0x68;
            static constexpr std::uintptr_t Subsystem = 0x78;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnGenerateResponse", 0x28, "MulticastInlineDelegateProperty"},
            {"OnGenerateStructuredResponse", 0x38, "MulticastInlineDelegateProperty"},
            {"OnResponse", 0x48, "MulticastInlineDelegateProperty"},
            {"OnStructuredResponse", 0x58, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x68, "MulticastInlineDelegateProperty"},
            {"Subsystem", 0x78, "WeakObjectProperty"},
            {"bStripFromClientBuilds", 0x80, "BoolProperty"},
        }};
    };

    struct ChatCompleterBase
    {
        static constexpr std::string_view Name = "ChatCompleterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChatCompleter";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGenerateResponse = 0x28;
            static constexpr std::uintptr_t OnGenerateStructuredResponse = 0x38;
            static constexpr std::uintptr_t OnResponse = 0x48;
            static constexpr std::uintptr_t OnStructuredResponse = 0x58;
            static constexpr std::uintptr_t OnFailure = 0x68;
            static constexpr std::uintptr_t Subsystem = 0x78;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnGenerateResponse", 0x28, "MulticastInlineDelegateProperty"},
            {"OnGenerateStructuredResponse", 0x38, "MulticastInlineDelegateProperty"},
            {"OnResponse", 0x48, "MulticastInlineDelegateProperty"},
            {"OnStructuredResponse", 0x58, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x68, "MulticastInlineDelegateProperty"},
            {"Subsystem", 0x78, "WeakObjectProperty"},
            {"bStripFromClientBuilds", 0x80, "BoolProperty"},
        }};
    };

    struct ChatCompleterMock
    {
        static constexpr std::string_view Name = "ChatCompleterMock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChatCompleter";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGenerateResponse = 0x28;
            static constexpr std::uintptr_t OnGenerateStructuredResponse = 0x38;
            static constexpr std::uintptr_t OnResponse = 0x48;
            static constexpr std::uintptr_t OnStructuredResponse = 0x58;
            static constexpr std::uintptr_t OnFailure = 0x68;
            static constexpr std::uintptr_t Subsystem = 0x78;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnGenerateResponse", 0x28, "MulticastInlineDelegateProperty"},
            {"OnGenerateStructuredResponse", 0x38, "MulticastInlineDelegateProperty"},
            {"OnResponse", 0x48, "MulticastInlineDelegateProperty"},
            {"OnStructuredResponse", 0x58, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x68, "MulticastInlineDelegateProperty"},
            {"Subsystem", 0x78, "WeakObjectProperty"},
            {"bStripFromClientBuilds", 0x80, "BoolProperty"},
        }};
    };

    struct ChatCompletionCheatManager
    {
        static constexpr std::string_view Name = "ChatCompletionCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChatCompletionFunctionLibrary
    {
        static constexpr std::string_view Name = "ChatCompletionFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChatCompletionSubsystem
    {
        static constexpr std::string_view Name = "ChatCompletionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalyticsEventNamespace = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnalyticsEventNamespace", 0x78, "StrProperty"},
        }};
    };

}

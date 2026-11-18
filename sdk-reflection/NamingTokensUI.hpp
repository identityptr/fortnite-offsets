#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NamingTokensUI
{
    struct NamingTokensEditableText
    {
        static constexpr std::string_view Name = "NamingTokensEditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiLineEditableText";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterArgs = 0x4E0;
            static constexpr std::uintptr_t NamespaceSuggestionPriority = 0x4F8;
            static constexpr std::uintptr_t bEnableSuggestionDropdown = 0x508;
            static constexpr std::uintptr_t bFullyQualifyFilteredNamespaces = 0x509;
            static constexpr std::uintptr_t bIsMultiline = 0x50A;
            static constexpr std::uintptr_t bDisplayTokenIcon = 0x50B;
            static constexpr std::uintptr_t bDisplayErrorMessage = 0x50C;
            static constexpr std::uintptr_t bDisplayBorderImage = 0x50D;
            static constexpr std::uintptr_t ArgumentStyle = 0x510;
            static constexpr std::uintptr_t BackgroundColor = 0x7F0;
            static constexpr std::uintptr_t bCanDisplayResolvedText = 0x804;
            static constexpr std::uintptr_t bShowUnknownTokenWarning = 0x805;
            static constexpr std::uintptr_t bShowUnsetTokenWarning = 0x806;
            static constexpr std::uintptr_t OnPreEvaluateNamingTokens = 0x808;
            static constexpr std::uintptr_t Contexts = 0x838;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"FilterArgs", 0x4E0, "StructProperty"},
            {"NamespaceSuggestionPriority", 0x4F8, "ArrayProperty"},
            {"bEnableSuggestionDropdown", 0x508, "BoolProperty"},
            {"bFullyQualifyFilteredNamespaces", 0x509, "BoolProperty"},
            {"bIsMultiline", 0x50A, "BoolProperty"},
            {"bDisplayTokenIcon", 0x50B, "BoolProperty"},
            {"bDisplayErrorMessage", 0x50C, "BoolProperty"},
            {"bDisplayBorderImage", 0x50D, "BoolProperty"},
            {"ArgumentStyle", 0x510, "StructProperty"},
            {"BackgroundColor", 0x7F0, "StructProperty"},
            {"bCanDisplayResolvedText", 0x804, "BoolProperty"},
            {"bShowUnknownTokenWarning", 0x805, "BoolProperty"},
            {"bShowUnsetTokenWarning", 0x806, "BoolProperty"},
            {"OnPreEvaluateNamingTokens", 0x808, "MulticastInlineDelegateProperty"},
            {"Contexts", 0x838, "ArrayProperty"},
        }};
    };

}

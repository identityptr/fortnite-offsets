#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AuroraFortniteRuntime
{
    struct AuroraFortnitePlayerControllerComponent
    {
        static constexpr std::string_view Name = "AuroraFortnitePlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AuroraPlayerControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseImplementationClass = 0x138;
            static constexpr std::uintptr_t OwnedEntitlementQuantities = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchaseImplementationClass", 0x138, "ClassProperty"},
            {"OwnedEntitlementQuantities", 0x140, "StructProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraDisplayStoreUI
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraDisplayStoreUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraForceClawbackAll
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraForceClawbackAll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraGrantAllEntitlement
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraGrantAllEntitlement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_AuroraGrantEntitlement";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraGrantEntitlement
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraGrantEntitlement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraGrantOneEntitlement
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraGrantOneEntitlement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_AuroraGrantEntitlement";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraPrintOwnedEntitlements
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraPrintOwnedEntitlements";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_AuroraPurchasesAlwaysFail
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AuroraPurchasesAlwaysFail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t bAlwaysFailPurchases = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAlwaysFailPurchases", 0xE0, "BoolProperty"},
        }};
    };

}

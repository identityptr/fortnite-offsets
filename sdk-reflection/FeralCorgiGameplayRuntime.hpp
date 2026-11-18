#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FeralCorgiGameplayRuntime
{
    struct ApparatusBridge
    {
        static constexpr std::string_view Name = "ApparatusBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CheatBridge
    {
        static constexpr std::string_view Name = "CheatBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FeralCorgiGameStateComponentBridge
    {
        static constexpr std::string_view Name = "FeralCorgiGameStateComponentBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FeralCorgiPlayerState
    {
        static constexpr std::string_view Name = "FeralCorgiPlayerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t PinColorForPlayer = 0x17C8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PinColorForPlayer", 0x17C8, "ArrayProperty"},
        }};
    };

    struct FeralCorgiRootPlayspace
    {
        static constexpr std::string_view Name = "FeralCorgiRootPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t FeralCorgiStateMachineClass = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FeralCorgiStateMachineClass", 0x670, "ClassProperty"},
        }};
    };

    struct FeralCorgiState
    {
        static constexpr std::string_view Name = "FeralCorgiState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiStateMachine
    {
        static constexpr std::string_view Name = "FeralCorgiStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTransitionData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootTransitionData", 0xE0, "StructProperty"},
        }};
    };

    struct FeralCorgiState_ClassSelection
    {
        static constexpr std::string_view Name = "FeralCorgiState_ClassSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_MainLoopSM
    {
        static constexpr std::string_view Name = "FeralCorgiState_MainLoopSM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTransitionData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootTransitionData", 0xE0, "StructProperty"},
        }};
    };

    struct FeralCorgiState_MainLoop_BuyPhase
    {
        static constexpr std::string_view Name = "FeralCorgiState_MainLoop_BuyPhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_MainLoop_End
    {
        static constexpr std::string_view Name = "FeralCorgiState_MainLoop_End";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_MainLoop_Gameplay
    {
        static constexpr std::string_view Name = "FeralCorgiState_MainLoop_Gameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_MainLoop_Reset
    {
        static constexpr std::string_view Name = "FeralCorgiState_MainLoop_Reset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_MasterSM
    {
        static constexpr std::string_view Name = "FeralCorgiState_MasterSM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTransitionData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootTransitionData", 0xE0, "StructProperty"},
        }};
    };

    struct FeralCorgiState_MatchFinished
    {
        static constexpr std::string_view Name = "FeralCorgiState_MatchFinished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiState_Setup
    {
        static constexpr std::string_view Name = "FeralCorgiState_Setup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FeralCorgiState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FeralCorgiTeamStart
    {
        static constexpr std::string_view Name = "FeralCorgiTeamStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadStart";
        struct Offsets
        {
            static constexpr std::uintptr_t StartType = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartType", 0x2A8, "EnumProperty"},
        }};
    };

    struct FortAthenaMutator_FeralCorgi
    {
        static constexpr std::string_view Name = "FortAthenaMutator_FeralCorgi";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DoNotDropItemDefs = 0x418;
            static constexpr std::uintptr_t DoNotDestroyItemDefs = 0x428;
            static constexpr std::uintptr_t AutoPickupItemDefs = 0x438;
            static constexpr std::uintptr_t BuyPhaseRestrictedItemDefs = 0x448;
            static constexpr std::uintptr_t HUDMenuBottomBarVerticalAligment = 0x458;
            static constexpr std::uintptr_t HUDMenuBottomBarHorizontalAligment = 0x459;
            static constexpr std::uintptr_t HUDEliminatorSpectatingPlayernameVerticalAligment = 0x45A;
            static constexpr std::uintptr_t HUDEliminatorSpectatingPlayernameHorinzontalAligment = 0x45B;
            static constexpr std::uintptr_t bUseTeamForSpectating = 0x45C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DoNotDropItemDefs", 0x418, "ArrayProperty"},
            {"DoNotDestroyItemDefs", 0x428, "ArrayProperty"},
            {"AutoPickupItemDefs", 0x438, "ArrayProperty"},
            {"BuyPhaseRestrictedItemDefs", 0x448, "ArrayProperty"},
            {"HUDMenuBottomBarVerticalAligment", 0x458, "ByteProperty"},
            {"HUDMenuBottomBarHorizontalAligment", 0x459, "ByteProperty"},
            {"HUDEliminatorSpectatingPlayernameVerticalAligment", 0x45A, "ByteProperty"},
            {"HUDEliminatorSpectatingPlayernameHorinzontalAligment", 0x45B, "ByteProperty"},
            {"bUseTeamForSpectating", 0x45C, "BoolProperty"},
        }};
    };

    struct FortAutomationRpcManager_Feral
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_Feral";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCheatManager_FeralCorgi
    {
        static constexpr std::string_view Name = "FortCheatManager_FeralCorgi";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerComponent_FeralCorgi
    {
        static constexpr std::string_view Name = "FortControllerComponent_FeralCorgi";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageCameraShakeClassOverride = 0xC8;
            static constexpr std::uintptr_t DynamicDamageZoneComponentClass = 0xD0;
            static constexpr std::uintptr_t EnvironmentRespawnQuery = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DamageCameraShakeClassOverride", 0xC8, "ClassProperty"},
            {"DynamicDamageZoneComponentClass", 0xD0, "ClassProperty"},
            {"EnvironmentRespawnQuery", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortGameStateComponent_FeralCorgiManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_FeralCorgiManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamOneTeamId = 0xD0;
            static constexpr std::uintptr_t TeamTwoTeamId = 0xD1;
            static constexpr std::uintptr_t CurrentAttackingTeam = 0xD2;
            static constexpr std::uintptr_t RoundWinningTeam = 0xD3;
            static constexpr std::uintptr_t RoundWinningTeamRole = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TeamOneTeamId", 0xD0, "ByteProperty"},
            {"TeamTwoTeamId", 0xD1, "ByteProperty"},
            {"CurrentAttackingTeam", 0xD2, "EnumProperty"},
            {"RoundWinningTeam", 0xD3, "EnumProperty"},
            {"RoundWinningTeamRole", 0xD4, "EnumProperty"},
        }};
    };

    struct FortGameStateComponent_FeralCorgiVerseCommonBridge
    {
        static constexpr std::string_view Name = "FortGameStateComponent_FeralCorgiVerseCommonBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentPhaseName = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentPhaseName", 0xC0, "StrProperty"},
        }};
    };

    struct FortPawnComponent_FeralCorgi
    {
        static constexpr std::string_view Name = "FortPawnComponent_FeralCorgi";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortPlayspaceComponent_Apparatus
    {
        static constexpr std::string_view Name = "FortPlayspaceComponent_Apparatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnApparatusTimerRemainingUpdated = 0x128;
            static constexpr std::uintptr_t OnApparatusReset = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnApparatusTimerRemainingUpdated", 0x128, "MulticastInlineDelegateProperty"},
            {"OnApparatusReset", 0x138, "MulticastInlineDelegateProperty"},
        }};
    };

}

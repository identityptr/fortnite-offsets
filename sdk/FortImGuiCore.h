/**
 * decamp dumper generated SDK
 * Package: /Script/FortImGuiCore
 */
#pragma once
#include "Basic.h"

// /Script/FortImGuiCore.FortImguiCoreCheatInputBindingSet
// Kind: ScriptStruct; super: none
struct FFortImguiCoreCheatInputBindingSet
{
public:
    TArray<void*> RequiredInputs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString SpecificImguiMenu; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortImguiCoreCheatInputBindingSet, RequiredInputs) == 0, "Offset mismatch for FFortImguiCoreCheatInputBindingSet::RequiredInputs");
static_assert(offsetof(FFortImguiCoreCheatInputBindingSet, SpecificImguiMenu) == 16, "Offset mismatch for FFortImguiCoreCheatInputBindingSet::SpecificImguiMenu");

// /Script/FortImGuiCore.DebuggableObject
// Kind: Class; super: Interface
class UDebuggableObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortImGuiCore.FortImGuiCoreCheatManager
// Kind: Class; super: CheatManagerExtension
class UFortImGuiCoreCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortImGuiCore.FortImGuiCoreCheatSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortImGuiCoreCheatSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortImGuiCore.FortImGuiCoreMenuBar
// Kind: Class; super: ImGuiDebugMenuBase
class UFortImGuiCoreMenuBar
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortImGuiCoreMenuBar, PrivateLocalPlayerController) == 656, "Offset mismatch for UFortImGuiCoreMenuBar::PrivateLocalPlayerController");

// /Script/FortImGuiCore.ImGuiDebugMenuBase
// Kind: Class; super: Actor
class UImGuiDebugMenuBase
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UImGuiDebugMenuBase, PrivateLocalPlayerController) == 656, "Offset mismatch for UImGuiDebugMenuBase::PrivateLocalPlayerController");

// /Script/FortImGuiCore.ImGuiReplicatedDebugMenuBase
// Kind: Class; super: ImGuiDebugMenuBase
class UImGuiReplicatedDebugMenuBase
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UImGuiReplicatedDebugMenuBase, PrivateLocalPlayerController) == 656, "Offset mismatch for UImGuiReplicatedDebugMenuBase::PrivateLocalPlayerController");

// /Script/FortImGuiCore.ObjectDebuggerCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UObjectDebuggerCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortImGuiCore.ObjectDebuggerMenu
// Kind: Class; super: ImGuiDebugMenuBase
class UObjectDebuggerMenu
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UObjectDebuggerMenu, PrivateLocalPlayerController) == 656, "Offset mismatch for UObjectDebuggerMenu::PrivateLocalPlayerController");

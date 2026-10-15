/**
 * decamp dumper generated SDK
 * Package: /Script/CommonUIMVVMExtensions
 */
#pragma once
#include "Basic.h"

// /Script/CommonUIMVVMExtensions.MVVMViewEnhancedInputClassExtension
// Kind: Class; super: MVVMViewClassExtension
class UMVVMViewEnhancedInputClassExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WidgetName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnhancedInputPropertyName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t WidgetPath[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMVVMViewEnhancedInputClassExtension, WidgetName) == 40, "Offset mismatch for UMVVMViewEnhancedInputClassExtension::WidgetName");
static_assert(offsetof(UMVVMViewEnhancedInputClassExtension, EnhancedInputPropertyName) == 44, "Offset mismatch for UMVVMViewEnhancedInputClassExtension::EnhancedInputPropertyName");
static_assert(offsetof(UMVVMViewEnhancedInputClassExtension, Priority) == 48, "Offset mismatch for UMVVMViewEnhancedInputClassExtension::Priority");
static_assert(offsetof(UMVVMViewEnhancedInputClassExtension, WidgetPath) == 52, "Offset mismatch for UMVVMViewEnhancedInputClassExtension::WidgetPath");

// /Script/CommonUIMVVMExtensions.MVVMViewEnhancedInputExtension
// Kind: Class; super: MVVMViewExtension
class UMVVMViewEnhancedInputExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnEnhancedInputTriggered; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0038
    std::uint8_t UIActionBindingHandle[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t PendingWidgetParentAssignmentTimer[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    TWeakObjectPtr<void> ActionWidget; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    void* ClassExtension; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMVVMViewEnhancedInputExtension, OnEnhancedInputTriggered) == 40, "Offset mismatch for UMVVMViewEnhancedInputExtension::OnEnhancedInputTriggered");
static_assert(offsetof(UMVVMViewEnhancedInputExtension, UIActionBindingHandle) == 88, "Offset mismatch for UMVVMViewEnhancedInputExtension::UIActionBindingHandle");
static_assert(offsetof(UMVVMViewEnhancedInputExtension, PendingWidgetParentAssignmentTimer) == 96, "Offset mismatch for UMVVMViewEnhancedInputExtension::PendingWidgetParentAssignmentTimer");
static_assert(offsetof(UMVVMViewEnhancedInputExtension, ActionWidget) == 104, "Offset mismatch for UMVVMViewEnhancedInputExtension::ActionWidget");
static_assert(offsetof(UMVVMViewEnhancedInputExtension, ClassExtension) == 112, "Offset mismatch for UMVVMViewEnhancedInputExtension::ClassExtension");

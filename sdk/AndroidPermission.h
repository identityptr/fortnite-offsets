/**
 * decamp dumper generated SDK
 * Package: /Script/AndroidPermission
 */
#pragma once
#include "Basic.h"

// /Script/AndroidPermission.AndroidPermissionCallbackProxy
// Kind: Class; super: Object
class UAndroidPermissionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAndroidPermissionCallbackProxy, OnPermissionsGrantedDynamicDelegate) == 40, "Offset mismatch for UAndroidPermissionCallbackProxy::OnPermissionsGrantedDynamicDelegate");

// /Script/AndroidPermission.AndroidPermissionFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAndroidPermissionFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};

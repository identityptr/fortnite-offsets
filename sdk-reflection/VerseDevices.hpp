#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseDevices
{
    struct PlaylistUserOptionSafeFloatRange
    {
        static constexpr std::string_view Name = "PlaylistUserOptionSafeFloatRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x1B0;
            static constexpr std::uintptr_t max = 0x1B4;
            static constexpr std::uintptr_t SliderMin = 0x1B8;
            static constexpr std::uintptr_t SliderMax = 0x1BC;
            static constexpr std::uintptr_t DefaultValue = 0x1C0;
            static constexpr std::uintptr_t IncrementValue = 0x1C8;
            static constexpr std::uintptr_t bOverrideSliderRange = 0x1CC;
            static constexpr std::uintptr_t bRestrictSliderValues = 0x1CD;
            static constexpr std::uintptr_t bUseNumericInput = 0x1CE;
            static constexpr std::uintptr_t MinFractionalDigits = 0x1CF;
            static constexpr std::uintptr_t MaxFractionalDigits = 0x1D0;
            static constexpr std::uintptr_t UnitName = 0x1D8;
            static constexpr std::uintptr_t OverrideValueStrings = 0x1E8;
            static constexpr std::uintptr_t SliderOptionValues = 0x1F8;
            static constexpr std::uintptr_t SliderOptionValues_DefaultIndex = 0x208;
            static constexpr std::uintptr_t bShowNaN = 0x20C;
            static constexpr std::uintptr_t bShowInf = 0x20D;
            static constexpr std::uintptr_t bShowMinusInf = 0x20E;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"min", 0x1B0, "FloatProperty"},
            {"max", 0x1B4, "FloatProperty"},
            {"SliderMin", 0x1B8, "FloatProperty"},
            {"SliderMax", 0x1BC, "FloatProperty"},
            {"DefaultValue", 0x1C0, "StructProperty"},
            {"IncrementValue", 0x1C8, "FloatProperty"},
            {"bOverrideSliderRange", 0x1CC, "BoolProperty"},
            {"bRestrictSliderValues", 0x1CD, "BoolProperty"},
            {"bUseNumericInput", 0x1CE, "BoolProperty"},
            {"MinFractionalDigits", 0x1CF, "ByteProperty"},
            {"MaxFractionalDigits", 0x1D0, "ByteProperty"},
            {"UnitName", 0x1D8, "TextProperty"},
            {"OverrideValueStrings", 0x1E8, "MapProperty"},
            {"SliderOptionValues", 0x1F8, "ArrayProperty"},
            {"SliderOptionValues_DefaultIndex", 0x208, "IntProperty"},
            {"bShowNaN", 0x20C, "BoolProperty"},
            {"bShowInf", 0x20D, "BoolProperty"},
            {"bShowMinusInf", 0x20E, "BoolProperty"},
        }};
    };

    struct PlaylistUserOptionScript
    {
        static constexpr std::string_view Name = "PlaylistUserOptionScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionValues = 0x1B0;
            static constexpr std::uintptr_t DefaultValueIndex = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OptionValues", 0x1B0, "ArrayProperty"},
            {"DefaultValueIndex", 0x1C0, "IntProperty"},
        }};
    };

    struct ScriptDevice
    {
        static constexpr std::string_view Name = "ScriptDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t Script = 0xB50;
            static constexpr std::uintptr_t ScriptInstance = 0xB58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Script", 0xB50, "ObjectProperty"},
            {"ScriptInstance", 0xB58, "ObjectProperty"},
        }};
    };

    struct VerseCreativeDevice
    {
        static constexpr std::string_view Name = "VerseCreativeDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseMovableObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseCreativeObject
    {
        static constexpr std::string_view Name = "VerseCreativeObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseMovableObjectBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedActor = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedActor", 0xA0, "ObjectProperty"},
        }};
    };

    struct VerseCreativeObjectQuotaHelperComponent
    {
        static constexpr std::string_view Name = "VerseCreativeObjectQuotaHelperComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct VerseCreativePropAsset
    {
        static constexpr std::string_view Name = "VerseCreativePropAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPathName = 0x28;
            static constexpr std::uintptr_t LevelSaveRecord = 0x30;
            static constexpr std::uintptr_t ActorClass = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AssetPathName", 0x28, "NameProperty"},
            {"LevelSaveRecord", 0x30, "ObjectProperty"},
            {"ActorClass", 0x38, "SoftClassProperty"},
        }};
    };

    struct VerseDeviceHealth
    {
        static constexpr std::string_view Name = "VerseDeviceHealth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseDeviceSubsystem
    {
        static constexpr std::string_view Name = "VerseDeviceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceClassToVerseClassMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceClassToVerseClassMap", 0x38, "MapProperty"},
        }};
    };

    struct VerseDeviceWrapperClassMap
    {
        static constexpr std::string_view Name = "VerseDeviceWrapperClassMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceClassMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceClassMap", 0x28, "MapProperty"},
        }};
    };

    struct VerseDevicesFeatureAction_RegisterWrapperClasses
    {
        static constexpr std::string_view Name = "VerseDevicesFeatureAction_RegisterWrapperClasses";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceToWrapperClassMapAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceToWrapperClassMapAsset", 0x28, "SoftObjectProperty"},
        }};
    };

    struct VerseMovableObjectBase
    {
        static constexpr std::string_view Name = "VerseMovableObjectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

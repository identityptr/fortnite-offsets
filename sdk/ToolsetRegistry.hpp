#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ToolsetRegistry
{
    struct AgentSkill
    {
        static constexpr std::string_view Name = "AgentSkill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t Instructions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Description", 0x28, "StrProperty"},
            {"Instructions", 0x38, "StrProperty"},
        }};
    };

    struct AgentSkillToolset
    {
        static constexpr std::string_view Name = "AgentSkillToolset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolsetDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ColorConverterTestObject
    {
        static constexpr std::string_view Name = "ColorConverterTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidConverterTestObject
    {
        static constexpr std::string_view Name = "GuidConverterTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReferenceConverterTestObject
    {
        static constexpr std::string_view Name = "ReferenceConverterTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TestInstancedObject = 0x28;
            static constexpr std::uintptr_t TestInstancedArray = 0x30;
            static constexpr std::uintptr_t TestValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TestInstancedObject", 0x28, "ObjectProperty"},
            {"TestInstancedArray", 0x30, "ArrayProperty"},
            {"TestValue", 0x40, "IntProperty"},
        }};
    };

    struct ToolCallAsyncResultImage
    {
        static constexpr std::string_view Name = "ToolCallAsyncResultImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "StructProperty"},
        }};
    };

    struct ToolCallAsyncResultImageArray
    {
        static constexpr std::string_view Name = "ToolCallAsyncResultImageArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "ArrayProperty"},
        }};
    };

    struct ToolCallAsyncResultImages
    {
        static constexpr std::string_view Name = "ToolCallAsyncResultImages";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "ArrayProperty"},
        }};
    };

    struct ToolCallAsyncResultReturnPropertyTest
    {
        static constexpr std::string_view Name = "ToolCallAsyncResultReturnPropertyTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolsetDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolCallExceptionHandlerTestObject
    {
        static constexpr std::string_view Name = "ToolCallExceptionHandlerTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolCallFakeClass
    {
        static constexpr std::string_view Name = "ToolCallFakeClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t float_ = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"float", 0x28, "FloatProperty"},
        }};
    };

    struct ToolsetContainerTestObject
    {
        static constexpr std::string_view Name = "ToolsetContainerTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t IntArray = 0x28;
            static constexpr std::uintptr_t IntSet = 0x38;
            static constexpr std::uintptr_t StructSet = 0x48;
            static constexpr std::uintptr_t IntMap = 0x58;
            static constexpr std::uintptr_t StructMap = 0x68;
            static constexpr std::uintptr_t StructProp = 0x78;
            static constexpr std::uintptr_t OuterArray = 0x98;
            static constexpr std::uintptr_t NestedStruct = 0xA8;
            static constexpr std::uintptr_t NestedStructArray = 0xD8;
            static constexpr std::uintptr_t RefObj = 0xE8;
            static constexpr std::uintptr_t TransformProp = 0xF0;
            static constexpr std::uintptr_t TransformArray = 0x150;
            static constexpr std::uintptr_t LinearColorProp = 0x160;
            static constexpr std::uintptr_t BoolFlag = 0x170;
            static constexpr std::uintptr_t IntField = 0x174;
            static constexpr std::uintptr_t FloatField = 0x178;
            static constexpr std::uintptr_t EnumField = 0x17C;
            static constexpr std::uintptr_t FixedArray = 0x180;
            static constexpr std::uintptr_t Codes = 0x190;
            static constexpr std::uintptr_t InstancedStructProp = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"IntArray", 0x28, "ArrayProperty"},
            {"IntSet", 0x38, "SetProperty"},
            {"StructSet", 0x48, "SetProperty"},
            {"IntMap", 0x58, "MapProperty"},
            {"StructMap", 0x68, "MapProperty"},
            {"StructProp", 0x78, "StructProperty"},
            {"OuterArray", 0x98, "ArrayProperty"},
            {"NestedStruct", 0xA8, "StructProperty"},
            {"NestedStructArray", 0xD8, "ArrayProperty"},
            {"RefObj", 0xE8, "ObjectProperty"},
            {"TransformProp", 0xF0, "StructProperty"},
            {"TransformArray", 0x150, "ArrayProperty"},
            {"LinearColorProp", 0x160, "StructProperty"},
            {"BoolFlag", 0x170, "BoolProperty"},
            {"IntField", 0x174, "IntProperty"},
            {"FloatField", 0x178, "FloatProperty"},
            {"EnumField", 0x17C, "EnumProperty"},
            {"FixedArray", 0x180, "IntProperty"},
            {"Codes", 0x190, "ArrayProperty"},
            {"InstancedStructProp", 0x1A0, "StructProperty"},
        }};
    };

    struct ToolsetDefinition
    {
        static constexpr std::string_view Name = "ToolsetDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetEditCondTestObject
    {
        static constexpr std::string_view Name = "ToolsetEditCondTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bGateEnabled = 0x28;
            static constexpr std::uintptr_t Mode = 0x29;
            static constexpr std::uintptr_t GatedByBool = 0x2C;
            static constexpr std::uintptr_t GatedByEnum = 0x30;
            static constexpr std::uintptr_t GatedByCanEditChange = 0x34;
            static constexpr std::uintptr_t AlwaysEditable = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bGateEnabled", 0x28, "BoolProperty"},
            {"Mode", 0x29, "EnumProperty"},
            {"GatedByBool", 0x2C, "IntProperty"},
            {"GatedByEnum", 0x30, "IntProperty"},
            {"GatedByCanEditChange", 0x34, "IntProperty"},
            {"AlwaysEditable", 0x38, "IntProperty"},
        }};
    };

    struct ToolsetJsonEnumDefaultTestObject
    {
        static constexpr std::string_view Name = "ToolsetJsonEnumDefaultTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetJsonTestObject
    {
        static constexpr std::string_view Name = "ToolsetJsonTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VisibleProperty = 0x28;
            static constexpr std::uintptr_t StructProperty = 0x30;
            static constexpr std::uintptr_t HiddenProperty = 0x48;
            static constexpr std::uintptr_t ReadOnlyProperty = 0x49;
            static constexpr std::uintptr_t DefaultsOnlyProperty = 0x4A;
            static constexpr std::uintptr_t InstanceOnlyProperty = 0x4B;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VisibleProperty", 0x28, "BoolProperty"},
            {"StructProperty", 0x30, "StructProperty"},
            {"HiddenProperty", 0x48, "BoolProperty"},
            {"ReadOnlyProperty", 0x49, "BoolProperty"},
            {"DefaultsOnlyProperty", 0x4A, "BoolProperty"},
            {"InstanceOnlyProperty", 0x4B, "BoolProperty"},
        }};
    };

    struct ToolsetManifestSeed
    {
        static constexpr std::string_view Name = "ToolsetManifestSeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetRegistry
    {
        static constexpr std::string_view Name = "ToolsetRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetRegistryManifest
    {
        static constexpr std::string_view Name = "ToolsetRegistryManifest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PluginName = 0x28;
            static constexpr std::uintptr_t Toolsets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PluginName", 0x28, "NameProperty"},
            {"Toolsets", 0x30, "MapProperty"},
        }};
    };

    struct ToolsetRegistryPropertyAccessorsOtherTestObject
    {
        static constexpr std::string_view Name = "ToolsetRegistryPropertyAccessorsOtherTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetRegistryPropertyAccessorsTestObject
    {
        static constexpr std::string_view Name = "ToolsetRegistryPropertyAccessorsTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolsetRegistrySettings
    {
        static constexpr std::string_view Name = "ToolsetRegistrySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockedNames = 0x30;
            static constexpr std::uintptr_t AllowedNames = 0x40;
            static constexpr std::uintptr_t AgentSkillBlockedNames = 0x50;
            static constexpr std::uintptr_t AgentSkillAllowedNames = 0x60;
            static constexpr std::uintptr_t SetObjectPropertiesBlockedClasses = 0x70;
            static constexpr std::uintptr_t SetObjectPropertiesBlockedProperties = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BlockedNames", 0x30, "ArrayProperty"},
            {"AllowedNames", 0x40, "ArrayProperty"},
            {"AgentSkillBlockedNames", 0x50, "ArrayProperty"},
            {"AgentSkillAllowedNames", 0x60, "ArrayProperty"},
            {"SetObjectPropertiesBlockedClasses", 0x70, "ArrayProperty"},
            {"SetObjectPropertiesBlockedProperties", 0x80, "ArrayProperty"},
        }};
    };

    struct ToolsetRegistryTestPermissionProvider
    {
        static constexpr std::string_view Name = "ToolsetRegistryTestPermissionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorConverterFunctionTest
    {
        static constexpr std::string_view Name = "VectorConverterFunctionTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

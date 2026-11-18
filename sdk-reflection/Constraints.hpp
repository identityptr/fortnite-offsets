#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Constraints
{
    struct ConstraintAndActiveChannel
    {
        static constexpr std::string_view Name = "ConstraintAndActiveChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveChannel = 0x0;
            static constexpr std::uintptr_t ConstraintCopyToSpawn = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveChannel", 0x0, "StructProperty"},
            {"ConstraintCopyToSpawn", 0xC8, "ObjectProperty"},
        }};
    };

    struct ConstraintSubsystem
    {
        static constexpr std::string_view Name = "ConstraintSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConstraintAddedToSystem_BP = 0x30;
            static constexpr std::uintptr_t OnConstraintRemovedFromSystem_BP = 0x31;
            static constexpr std::uintptr_t ConstraintsInWorld = 0x38;
            static constexpr std::uintptr_t ConstraintsConfig = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnConstraintAddedToSystem_BP", 0x30, "MulticastSparseDelegateProperty"},
            {"OnConstraintRemovedFromSystem_BP", 0x31, "MulticastSparseDelegateProperty"},
            {"ConstraintsInWorld", 0x38, "ArrayProperty"},
            {"ConstraintsConfig", 0x50, "MapProperty"},
        }};
    };

    struct ConstraintTickFunction
    {
        static constexpr std::string_view Name = "ConstraintTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct ConstraintsActor
    {
        static constexpr std::string_view Name = "ConstraintsActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintsManager = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintsManager", 0x278, "ObjectProperty"},
        }};
    };

    struct ConstraintsInWorld
    {
        static constexpr std::string_view Name = "ConstraintsInWorld";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x0;
            static constexpr std::uintptr_t Constraints = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"World", 0x0, "WeakObjectProperty"},
            {"Constraints", 0x8, "ArrayProperty"},
        }};
    };

    struct ConstraintsManager
    {
        static constexpr std::string_view Name = "ConstraintsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConstraintAdded_BP = 0x28;
            static constexpr std::uintptr_t OnConstraintRemoved_BP = 0x29;
            static constexpr std::uintptr_t Constraints = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnConstraintAdded_BP", 0x28, "MulticastSparseDelegateProperty"},
            {"OnConstraintRemoved_BP", 0x29, "MulticastSparseDelegateProperty"},
            {"Constraints", 0x38, "ArrayProperty"},
        }};
    };

    struct ConstraintsScriptingLibrary
    {
        static constexpr std::string_view Name = "ConstraintsScriptingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddConstraint",
            "CreateFromType",
            "CreateTransformableComponentHandle",
            "CreateTransformableHandle",
            "GetConstraintsArray",
            "RemoveConstraint",
            "RemoveThisConstraint",
        }};
    };

    struct MovieSceneConstraintChannel
    {
        static constexpr std::string_view Name = "MovieSceneConstraintChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneBoolChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t DefaultValue = 0x68;
            static constexpr std::uintptr_t bHasDefaultValue = 0x69;
            static constexpr std::uintptr_t Values = 0x70;
            static constexpr std::uintptr_t KeyHandles = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"DefaultValue", 0x68, "BoolProperty"},
            {"bHasDefaultValue", 0x69, "BoolProperty"},
            {"Values", 0x70, "ArrayProperty"},
            {"KeyHandles", 0x80, "StructProperty"},
        }};
    };

    struct TickableConstraint
    {
        static constexpr std::string_view Name = "TickableConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Active = 0x28;
            static constexpr std::uintptr_t bValid = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Active", 0x28, "BoolProperty"},
            {"bValid", 0x29, "BoolProperty"},
        }};
    };

    struct TickableLookAtConstraint
    {
        static constexpr std::string_view Name = "TickableLookAtConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableTransformConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t Axis = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Axis", 0xC0, "StructProperty"},
        }};
    };

    struct TickableParentConstraint
    {
        static constexpr std::string_view Name = "TickableParentConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableTransformConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetTransform = 0xD0;
            static constexpr std::uintptr_t bScaling = 0x130;
            static constexpr std::uintptr_t TransformFilter = 0x131;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OffsetTransform", 0xD0, "StructProperty"},
            {"bScaling", 0x130, "BoolProperty"},
            {"TransformFilter", 0x131, "StructProperty"},
        }};
    };

    struct TickableRotationConstraint
    {
        static constexpr std::string_view Name = "TickableRotationConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableTransformConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetRotation = 0xD0;
            static constexpr std::uintptr_t AxisFilter = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OffsetRotation", 0xD0, "StructProperty"},
            {"AxisFilter", 0xF0, "StructProperty"},
        }};
    };

    struct TickableScaleConstraint
    {
        static constexpr std::string_view Name = "TickableScaleConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableTransformConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetScale = 0xC8;
            static constexpr std::uintptr_t AxisFilter = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OffsetScale", 0xC8, "StructProperty"},
            {"AxisFilter", 0xE0, "StructProperty"},
        }};
    };

    struct TickableTransformConstraint
    {
        static constexpr std::string_view Name = "TickableTransformConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentTRSHandle = 0xA0;
            static constexpr std::uintptr_t ChildTRSHandle = 0xA8;
            static constexpr std::uintptr_t bMaintainOffset = 0xB0;
            static constexpr std::uintptr_t Weight = 0xB4;
            static constexpr std::uintptr_t bDynamicOffset = 0xB8;
            static constexpr std::uintptr_t Type = 0xB9;
            static constexpr std::uintptr_t bUseCurrentOffset = 0xBA;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ParentTRSHandle", 0xA0, "ObjectProperty"},
            {"ChildTRSHandle", 0xA8, "ObjectProperty"},
            {"bMaintainOffset", 0xB0, "BoolProperty"},
            {"Weight", 0xB4, "FloatProperty"},
            {"bDynamicOffset", 0xB8, "BoolProperty"},
            {"Type", 0xB9, "EnumProperty"},
            {"bUseCurrentOffset", 0xBA, "BoolProperty"},
        }};
    };

    struct TickableTranslationConstraint
    {
        static constexpr std::string_view Name = "TickableTranslationConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableTransformConstraint";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetTranslation = 0xC8;
            static constexpr std::uintptr_t AxisFilter = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OffsetTranslation", 0xC8, "StructProperty"},
            {"AxisFilter", 0xE0, "StructProperty"},
        }};
    };

    struct TransformableComponentHandle
    {
        static constexpr std::string_view Name = "TransformableComponentHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TransformableHandle";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x60;
            static constexpr std::uintptr_t SocketName = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Component", 0x60, "WeakObjectProperty"},
            {"SocketName", 0x68, "NameProperty"},
        }};
    };

    struct TransformableHandle
    {
        static constexpr std::string_view Name = "TransformableHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintBindingID = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintBindingID", 0x2C, "StructProperty"},
        }};
    };

}

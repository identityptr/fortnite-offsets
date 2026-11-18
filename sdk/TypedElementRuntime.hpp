#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TypedElementRuntime
{
    struct TypedElementAssetDataInterface
    {
        static constexpr std::string_view Name = "TypedElementAssetDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAllReferencedAssetDatas",
            "GetAssetData",
        }};
    };

    struct TypedElementAssetDataReferencedOptions
    {
        static constexpr std::string_view Name = "TypedElementAssetDataReferencedOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnlyTopLevelAsset = 0x0;
            static constexpr std::uintptr_t bIncludeSoftReferences = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnlyTopLevelAsset", 0x0, "BoolProperty"},
            {"bIncludeSoftReferences", 0x1, "BoolProperty"},
        }};
    };

    struct TypedElementHierarchyInterface
    {
        static constexpr std::string_view Name = "TypedElementHierarchyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetChildElements",
            "GetParentElement",
        }};
    };

    struct TypedElementIsSelectedOptions
    {
        static constexpr std::string_view Name = "TypedElementIsSelectedOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowIndirect = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowIndirect", 0x0, "BoolProperty"},
        }};
    };

    struct TypedElementObjectInterface
    {
        static constexpr std::string_view Name = "TypedElementObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetObject",
            "GetObjectClass",
        }};
    };

    struct TypedElementPrimitiveCustomDataInterface
    {
        static constexpr std::string_view Name = "TypedElementPrimitiveCustomDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetCustomData",
            "SetCustomDataValue",
        }};
    };

    struct TypedElementSelectionInterface
    {
        static constexpr std::string_view Name = "TypedElementSelectionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AllowSelectionModifiers",
            "CanDeselectElement",
            "CanSelectElement",
            "DeselectElement",
            "GetSelectionElement",
            "IsElementSelected",
            "SelectElement",
        }};
    };

    struct TypedElementSelectionNormalizationOptions
    {
        static constexpr std::string_view Name = "TypedElementSelectionNormalizationOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bExpandGroups = 0x0;
            static constexpr std::uintptr_t bFollowAttachment = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bExpandGroups", 0x0, "BoolProperty"},
            {"bFollowAttachment", 0x1, "BoolProperty"},
        }};
    };

    struct TypedElementSelectionOptions
    {
        static constexpr std::string_view Name = "TypedElementSelectionOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowHidden = 0x0;
            static constexpr std::uintptr_t bAllowGroups = 0x1;
            static constexpr std::uintptr_t bAllowLegacyNotifications = 0x2;
            static constexpr std::uintptr_t bWarnIfLocked = 0x3;
            static constexpr std::uintptr_t bAllowSubRootSelection = 0x4;
            static constexpr std::uintptr_t ChildElementInclusionMethod = 0x5;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bAllowHidden", 0x0, "BoolProperty"},
            {"bAllowGroups", 0x1, "BoolProperty"},
            {"bAllowLegacyNotifications", 0x2, "BoolProperty"},
            {"bWarnIfLocked", 0x3, "BoolProperty"},
            {"bAllowSubRootSelection", 0x4, "BoolProperty"},
            {"ChildElementInclusionMethod", 0x5, "EnumProperty"},
        }};
    };

    struct TypedElementSelectionSet
    {
        static constexpr std::string_view Name = "TypedElementSelectionSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPreSelectionChange = 0x828;
            static constexpr std::uintptr_t OnSelectionChange = 0x838;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPreSelectionChange", 0x828, "MulticastInlineDelegateProperty"},
            {"OnSelectionChange", 0x838, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 22> FunctionNames{{
            "AllowSelectionModifiers",
            "CanDeselectElement",
            "CanSelectElement",
            "ClearSelection",
            "CountSelectedElements",
            "CountSelectedObjects",
            "DeselectElement",
            "DeselectElements",
            "GetBottomSelectedObject",
            "GetCurrentSelectionState",
            "GetNumSelectedElements",
            "GetSelectedObjects",
            "GetSelectionElement",
            "GetTopSelectedObject",
            "HasSelectedElements",
            "HasSelectedObjects",
            "IsElementSelected",
            "K2_GetSelectedElementHandles",
            "RestoreSelectionState",
            "SelectElement",
            "SelectElements",
            "SetSelection",
        }};
    };

    struct TypedElementSelectionSetLibrary
    {
        static constexpr std::string_view Name = "TypedElementSelectionSetLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "DeselectElementsFromList",
            "GetNormalizedElementList",
            "GetNormalizedSelection",
            "SelectElementsFromList",
            "SetSelectionFromList",
        }};
    };

    struct TypedElementSelectionSetState
    {
        static constexpr std::string_view Name = "TypedElementSelectionSetState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatedFromSelectionSet = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CreatedFromSelectionSet", 0x0, "WeakObjectProperty"},
        }};
    };

}

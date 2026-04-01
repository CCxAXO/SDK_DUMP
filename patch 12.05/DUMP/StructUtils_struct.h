// Enum StructUtils.EPropertyBagPropertyType
enum class EPropertyBagPropertyType : uint8 {
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Double = 6,
	Name = 7,
	String = 8,
	Text = 9,
	Enum = 10,
	Struct = 11,
	Object = 12,
	SoftObject = 13,
	Class = 14,
	SoftClass = 15,
	Count = 16,
	EPropertyBagPropertyType_MAX = 17
};

// Enum StructUtils.EPropertyBagContainerType
enum class EPropertyBagContainerType : uint8 {
	None = 0,
	Array = 1,
	Count = 2,
	EPropertyBagContainerType_MAX = 3
};

// Enum StructUtils.EPropertyBagResult
enum class EPropertyBagResult : uint8 {
	Success = 0,
	TypeMismatch = 1,
	OutOfBounds = 2,
	PropertyNotFound = 3,
	EPropertyBagResult_MAX = 4
};

// Enum StructUtils.EPropertyBagMissingEnum
enum class EPropertyBagMissingEnum : uint8 {
	Missing = 0,
	EPropertyBagMissingEnum_MAX = 1
};

// ScriptStruct StructUtils.InstancedStruct
// Size: 0x10 (Inherited: 0x00)
struct FInstancedStruct {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.InstancedStructContainer
// Size: 0x10 (Inherited: 0x00)
struct FInstancedStructContainer {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.PropertyBagContainerTypes
// Size: 0x03 (Inherited: 0x00)
struct FPropertyBagContainerTypes {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
// Size: 0x20 (Inherited: 0x00)
struct FPropertyBagPropertyDescMetaData {
	struct FName Key; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct StructUtils.PropertyBagPropertyDesc
// Size: 0x30 (Inherited: 0x00)
struct FPropertyBagPropertyDesc {
	struct UObject* ValueTypeObject; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x0c)
	enum class EPropertyBagPropertyType ValueType; // 0x24(0x01)
	struct FPropertyBagContainerTypes ContainerTypes; // 0x25(0x03)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct StructUtils.InstancedPropertyBag
// Size: 0x10 (Inherited: 0x00)
struct FInstancedPropertyBag {
	struct FInstancedStruct Value; // 0x00(0x10)
};

// ScriptStruct StructUtils.PropertyBagMissingStruct
// Size: 0x01 (Inherited: 0x00)
struct FPropertyBagMissingStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct StructUtils.SharedStruct
// Size: 0x10 (Inherited: 0x00)
struct FSharedStruct {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.ConstSharedStruct
// Size: 0x10 (Inherited: 0x00)
struct FConstSharedStruct {
	char pad_0[0x10]; // 0x00(0x10)
};


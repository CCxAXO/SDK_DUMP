// Enum PropertyPath.EPropertyPathTestEnum
enum class EPropertyPathTestEnum : uint8 {
	One = 0,
	Two = 1,
	Three = 2,
	Four = 3,
	EPropertyPathTestEnum_MAX = 4
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x20 (Inherited: 0x00)
struct FPropertyPathSegment {
	struct FName Name; // 0x00(0x0c)
	int32_t ArrayIndex; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x38 (Inherited: 0x00)
struct FCachedPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UFunction* CachedFunction; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
// Size: 0x20 (Inherited: 0x00)
struct FPropertyPathTestInnerStruct {
	float float; // 0x00(0x04)
	bool bool; // 0x04(0x01)
	enum class EPropertyPathTestEnum EnumOne; // 0x05(0x01)
	enum class EPropertyPathTestEnum EnumTwo; // 0x06(0x01)
	enum class EPropertyPathTestEnum EnumThree; // 0x07(0x01)
	enum class EPropertyPathTestEnum EnumFour; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Integer; // 0x0c(0x04)
	struct FString String; // 0x10(0x10)
};

// ScriptStruct PropertyPath.PropertyPathTestStruct
// Size: 0x50 (Inherited: 0x00)
struct FPropertyPathTestStruct {
	bool bool; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Integer; // 0x04(0x04)
	enum class EPropertyPathTestEnum EnumOne; // 0x08(0x01)
	enum class EPropertyPathTestEnum EnumTwo; // 0x09(0x01)
	enum class EPropertyPathTestEnum EnumThree; // 0x0a(0x01)
	enum class EPropertyPathTestEnum EnumFour; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString String; // 0x10(0x10)
	float float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FPropertyPathTestInnerStruct InnerStruct; // 0x28(0x20)
	struct UPropertyPathTestObject* InnerObject; // 0x48(0x08)
};

// ScriptStruct PropertyPath.PropertyPathTestBed
// Size: 0xb0 (Inherited: 0x00)
struct FPropertyPathTestBed {
	struct UPropertyPathTestObject* Object; // 0x00(0x08)
	struct UPropertyPathTestObject* ModifiedObject; // 0x08(0x08)
	struct FPropertyPathTestStruct ModifiedStruct; // 0x10(0x50)
	struct FPropertyPathTestStruct DefaultStruct; // 0x60(0x50)
};


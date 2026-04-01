// Class PropertyPath.PropertyPathTestObject
// Size: 0x158 (Inherited: 0x30)
struct UPropertyPathTestObject : UObject {
	bool bool; // 0x30(0x01)
	enum class EPropertyPathTestEnum EnumOne; // 0x31(0x01)
	enum class EPropertyPathTestEnum EnumTwo; // 0x32(0x01)
	enum class EPropertyPathTestEnum EnumThree; // 0x33(0x01)
	enum class EPropertyPathTestEnum EnumFour; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Integer; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString String; // 0x40(0x10)
	float float; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FPropertyPathTestStruct Struct; // 0x58(0x50)
	struct FPropertyPathTestStruct StructRef; // 0xa8(0x50)
	struct FPropertyPathTestStruct StructConstRef; // 0xf8(0x50)
	struct UPropertyPathTestObject* InnerObject; // 0x148(0x08)
	char pad_150[0x8]; // 0x150(0x08)

	void SetStructRef(struct FPropertyPathTestStruct InStruct); // Function PropertyPath.PropertyPathTestObject.SetStructRef // (Final|Native|Public) // @ game+0x265de60
	void SetStructConstRef(struct FPropertyPathTestStruct InStruct); // Function PropertyPath.PropertyPathTestObject.SetStructConstRef // (Final|Native|Public) // @ game+0x265dcc0
	void SetStruct(struct FPropertyPathTestStruct InStruct); // Function PropertyPath.PropertyPathTestObject.SetStruct // (Final|Native|Public) // @ game+0x265e030
	void SetFloat(float InFloat); // Function PropertyPath.PropertyPathTestObject.SetFloat // (Final|Native|Public) // @ game+0x265e1d0
	struct FPropertyPathTestStruct GetStructRef(); // Function PropertyPath.PropertyPathTestObject.GetStructRef // (Final|Native|Public|Const) // @ game+0x265de30
	struct FPropertyPathTestStruct GetStructConstRef(); // Function PropertyPath.PropertyPathTestObject.GetStructConstRef // (Final|Native|Public|Const) // @ game+0x265dc90
	struct FPropertyPathTestStruct GetStruct(); // Function PropertyPath.PropertyPathTestObject.GetStruct // (Final|Native|Public|Const) // @ game+0x265dfd0
	float GetFloat(); // Function PropertyPath.PropertyPathTestObject.GetFloat // (Final|Native|Public|Const) // @ game+0x265e1a0
};


// Class StructUtils.PropertyBagMissingObject
// Size: 0x30 (Inherited: 0x30)
struct UPropertyBagMissingObject : UObject {
};

// Class StructUtils.PropertyBag
// Size: 0xe0 (Inherited: 0xc8)
struct UPropertyBag : UScriptStruct {
	struct TArray<struct FPropertyBagPropertyDesc> PropertyDescs; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
};


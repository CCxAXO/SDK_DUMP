// Enum RemoteControlLogic.ERCBehaviourConditionType
enum class ERCBehaviourConditionType : uint8 {
	IsEqual = 0,
	IsGreaterThan = 1,
	IsLesserThan = 2,
	IsGreaterThanOrEqualTo = 3,
	IsLesserThanOrEqualTo = 4,
	Else = 5,
	None = 6,
	ERCBehaviourConditionType_MAX = 7
};

// ScriptStruct RemoteControlLogic.RCBehaviourCondition
// Size: 0x10 (Inherited: 0x00)
struct FRCBehaviourCondition {
	enum class ERCBehaviourConditionType ConditionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct URCVirtualPropertySelfContainer* Comparand; // 0x08(0x08)
};

// ScriptStruct RemoteControlLogic.RCRangeMapInput
// Size: 0x10 (Inherited: 0x00)
struct FRCRangeMapInput {
	struct URCVirtualPropertySelfContainer* InputProperty; // 0x00(0x08)
	struct URCVirtualPropertySelfContainer* PropertyValue; // 0x08(0x08)
};

// ScriptStruct RemoteControlLogic.RCSetAssetPath
// Size: 0x10 (Inherited: 0x00)
struct FRCSetAssetPath {
	struct TArray<struct FString> PathArray; // 0x00(0x10)
};


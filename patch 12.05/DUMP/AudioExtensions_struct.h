// Enum AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8 {
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	Object = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	ObjectArray = 11,
	Trigger = 12,
	COUNT = 13,
	EAudioParameterType_MAX = 14
};

// ScriptStruct AudioExtensions.SoundGeneratorOutput
// Size: 0x0c (Inherited: 0x00)
struct FSoundGeneratorOutput {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct AudioExtensions.AudioParameter
// Size: 0xa0 (Inherited: 0x00)
struct FAudioParameter {
	struct FName ParamName; // 0x00(0x0c)
	float FloatParam; // 0x0c(0x04)
	bool BoolParam; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t IntParam; // 0x14(0x04)
	struct UObject* ObjectParam; // 0x18(0x08)
	struct FString StringParam; // 0x20(0x10)
	struct TArray<float> ArrayFloatParam; // 0x30(0x10)
	struct TArray<bool> ArrayBoolParam; // 0x40(0x10)
	struct TArray<int32_t> ArrayIntParam; // 0x50(0x10)
	struct TArray<struct UObject*> ArrayObjectParam; // 0x60(0x10)
	struct TArray<struct FString> ArrayStringParam; // 0x70(0x10)
	enum class EAudioParameterType ParamType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName TypeName; // 0x84(0x0c)
	char pad_90[0x10]; // 0x90(0x10)
};


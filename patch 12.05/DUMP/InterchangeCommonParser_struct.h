// Enum InterchangeCommonParser.EInterchangeCurveInterpMode
enum class EInterchangeCurveInterpMode : uint8 {
	Linear = 0,
	Constant = 1,
	Cubic = 2,
	None = 3,
	EInterchangeCurveInterpMode_MAX = 4
};

// Enum InterchangeCommonParser.EInterchangeCurveTangentMode
enum class EInterchangeCurveTangentMode : uint8 {
	Auto = 0,
	User = 1,
	Break = 2,
	None = 3,
	EInterchangeCurveTangentMode_MAX = 4
};

// Enum InterchangeCommonParser.EInterchangeCurveTangentWeightMode
enum class EInterchangeCurveTangentWeightMode : uint8 {
	WeightedNone = 0,
	WeightedArrive = 1,
	WeightedLeave = 2,
	WeightedBoth = 3,
	EInterchangeCurveTangentWeightMode_MAX = 4
};

// ScriptStruct InterchangeCommonParser.InterchangeCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FInterchangeCurveKey {
	enum class EInterchangeCurveInterpMode InterpMode; // 0x00(0x01)
	enum class EInterchangeCurveTangentMode TangentMode; // 0x01(0x01)
	enum class EInterchangeCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct InterchangeCommonParser.InterchangeCurve
// Size: 0x10 (Inherited: 0x00)
struct FInterchangeCurve {
	struct TArray<struct FInterchangeCurveKey> Keys; // 0x00(0x10)
};

// ScriptStruct InterchangeCommonParser.InterchangeStepCurve
// Size: 0x70 (Inherited: 0x00)
struct FInterchangeStepCurve {
	struct TArray<float> KeyTimes; // 0x00(0x10)
	char pad_10[0x60]; // 0x10(0x60)
};


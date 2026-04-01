// Enum WaveTable.EWaveTableBitDepth
enum class EWaveTableBitDepth : uint8 {
	PCM_17 = 0,
	IEEE_Float = 1,
	COUNT = 2,
	EWaveTableBitDepth_MAX = 3
};

// Enum WaveTable.EWaveTableResolution
enum class EWaveTableResolution : uint8 {
	None = 0,
	Res_9 = 3,
	Res_17 = 4,
	Res_33 = 5,
	Res_65 = 6,
	Res_129 = 7,
	Res_257 = 8,
	Res_513 = 9,
	Res_1025 = 10,
	Res_2049 = 11,
	Res_4097 = 12,
	Res_Max = 12,
	Maximum = 13,
	EWaveTableResolution_MAX = 14
};

// Enum WaveTable.EWaveTableSamplingMode
enum class EWaveTableSamplingMode : uint8 {
	FixedSampleRate = 0,
	FixedResolution = 1,
	COUNT = 2,
	EWaveTableSamplingMode_MAX = 3
};

// Enum WaveTable.EWaveTableCurve
enum class EWaveTableCurve : uint8 {
	Linear = 0,
	Linear_Inv = 1,
	Exp = 2,
	Exp_Inverse = 3,
	Log = 4,
	Sin = 5,
	Sin_Full = 6,
	SCurve = 7,
	Shared = 8,
	Custom = 9,
	File = 10,
	Count = 11,
	EWaveTableCurve_MAX = 12
};

// ScriptStruct WaveTable.WaveTableData
// Size: 0x20 (Inherited: 0x00)
struct FWaveTableData {
	enum class EWaveTableBitDepth BitDepth; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<char> Data; // 0x08(0x10)
	float FinalValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct WaveTable.WaveTableBankEntry
// Size: 0xb8 (Inherited: 0x00)
struct FWaveTableBankEntry {
	struct FWaveTableTransform Transform; // 0x00(0xb8)
};

// ScriptStruct WaveTable.WaveTableTransform
// Size: 0xb8 (Inherited: 0x00)
struct FWaveTableTransform {
	enum class EWaveTableCurve Curve; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scalar; // 0x04(0x04)
	struct FRichCurve CurveCustom; // 0x08(0x80)
	struct UCurveFloat* CurveShared; // 0x88(0x08)
	struct FWaveTableData TableData; // 0x90(0x20)
	float Duration; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct WaveTable.WaveTableSettings
// Size: 0x58 (Inherited: 0x00)
struct FWaveTableSettings {
	struct FFilePath FilePath; // 0x00(0x10)
	int32_t ChannelIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FWaveTableData SourceData; // 0x18(0x20)
	int32_t SourceSampleRate; // 0x38(0x04)
	float Phase; // 0x3c(0x04)
	float Top; // 0x40(0x04)
	float Tail; // 0x44(0x04)
	float FadeIn; // 0x48(0x04)
	float FadeOut; // 0x4c(0x04)
	bool bNormalize; // 0x50(0x01)
	bool bRemoveOffset; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};


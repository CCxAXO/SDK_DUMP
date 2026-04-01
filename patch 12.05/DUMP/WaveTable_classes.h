// Class WaveTable.WaveTableBank
// Size: 0x68 (Inherited: 0x30)
struct UWaveTableBank : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EWaveTableSamplingMode SampleMode; // 0x38(0x01)
	enum class EWaveTableResolution Resolution; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t SampleRate; // 0x3c(0x04)
	bool bBipolar; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FWaveTableBankEntry> Entries; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};


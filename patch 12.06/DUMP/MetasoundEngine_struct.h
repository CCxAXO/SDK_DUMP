// Enum MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8 {
	Error = 0,
	Warning = 1,
	Info = 2,
	EMetaSoundMessageLevel_MAX = 3
};

// Enum MetasoundEngine.EMetaSoundOutputAudioFormat
enum class EMetaSoundOutputAudioFormat : uint8 {
	Mono = 0,
	Stereo = 1,
	Quad = 2,
	FiveDotOne = 3,
	SevenDotOne = 4,
	COUNT = 5,
	EMetaSoundOutputAudioFormat_MAX = 6
};

// Enum MetasoundEngine.EMetaSoundBuilderResult
enum class EMetaSoundBuilderResult : uint8 {
	Succeeded = 0,
	Failed = 1,
	EMetaSoundBuilderResult_MAX = 2
};

// ScriptStruct MetasoundEngine.MetaSoundOutput
// Size: 0x18 (Inherited: 0x0c)
struct FMetaSoundOutput : FSoundGeneratorOutput {
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// Size: 0x28 (Inherited: 0x00)
struct FDefaultMetaSoundAssetAutoUpdateSettings {
	struct FSoftObjectPath Metasound; // 0x00(0x28)
};

// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
// Size: 0x10 (Inherited: 0x00)
struct FMetaSoundAssetDirectory {
	struct FDirectoryPath Directory; // 0x00(0x10)
};

// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
// Size: 0x30 (Inherited: 0x00)
struct FMetaSoundAsyncAssetDependencies {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Metasound; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeInputHandle
// Size: 0x20 (Inherited: 0x20)
struct FMetaSoundBuilderNodeInputHandle : FMetasoundFrontendVertexHandle {
};

// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeOutputHandle
// Size: 0x20 (Inherited: 0x20)
struct FMetaSoundBuilderNodeOutputHandle : FMetasoundFrontendVertexHandle {
};

// ScriptStruct MetasoundEngine.MetaSoundNodeHandle
// Size: 0x10 (Inherited: 0x00)
struct FMetaSoundNodeHandle {
	struct FGuid NodeId; // 0x00(0x10)
};

// ScriptStruct MetasoundEngine.MetaSoundBuilderOptions
// Size: 0x20 (Inherited: 0x00)
struct FMetaSoundBuilderOptions {
	struct FName Name; // 0x00(0x0c)
	bool bForceUniqueClassName; // 0x0c(0x01)
	bool bAddToRegistry; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TScriptInterface<IMetaSoundDocumentInterface> ExistingMetaSound; // 0x10(0x10)
};


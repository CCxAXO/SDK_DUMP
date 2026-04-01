// Enum InterchangeEngine.EInterchangePipelineConfigurationDialogResult
enum class EInterchangePipelineConfigurationDialogResult : uint8 {
	Cancel = 0,
	Import = 1,
	ImportAll = 2,
	EInterchangePipelineConfigurationDialogResult_MAX = 3
};

// ScriptStruct InterchangeEngine.InterchangeFilePickerParameters
// Size: 0x30 (Inherited: 0x00)
struct FInterchangeFilePickerParameters {
	bool bAllowMultipleFiles; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Title; // 0x08(0x18)
	struct FString DefaultPath; // 0x20(0x10)
};

// ScriptStruct InterchangeEngine.InterchangeStackInfo
// Size: 0x20 (Inherited: 0x00)
struct FInterchangeStackInfo {
	struct FName StackName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UInterchangePipelineBase*> Pipelines; // 0x10(0x10)
};

// ScriptStruct InterchangeEngine.InterchangeTranslatorPipelines
// Size: 0x40 (Inherited: 0x00)
struct FInterchangeTranslatorPipelines {
	struct TSoftClassPtr<UObject> Translator; // 0x00(0x30)
	struct TArray<struct FSoftObjectPath> Pipelines; // 0x30(0x10)
};

// ScriptStruct InterchangeEngine.InterchangePipelineStack
// Size: 0x20 (Inherited: 0x00)
struct FInterchangePipelineStack {
	struct TArray<struct FSoftObjectPath> Pipelines; // 0x00(0x10)
	struct TArray<struct FInterchangeTranslatorPipelines> PerTranslatorPipelines; // 0x10(0x10)
};

// ScriptStruct InterchangeEngine.InterchangeImportSettings
// Size: 0x98 (Inherited: 0x00)
struct FInterchangeImportSettings {
	struct TMap<struct FName, struct FInterchangePipelineStack> PipelineStacks; // 0x00(0x50)
	struct FName DefaultPipelineStack; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSoftClassPtr<UObject> PipelineConfigurationDialogClass; // 0x60(0x30)
	bool bShowPipelineStacksConfigurationDialog; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct InterchangeEngine.InterchangeContentImportSettings
// Size: 0x138 (Inherited: 0x98)
struct FInterchangeContentImportSettings : FInterchangeImportSettings {
	struct TMap<enum class EInterchangeTranslatorAssetType, struct FName> DefaultPipelineStackOverride; // 0x98(0x50)
	struct TMap<enum class EInterchangeTranslatorAssetType, bool> ShowPipelineStacksConfigurationDialogOverride; // 0xe8(0x50)
};

// ScriptStruct InterchangeEngine.PropertyData
// Size: 0x18 (Inherited: 0x00)
struct FPropertyData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct InterchangeEngine.ImportAssetParameters
// Size: 0xc0 (Inherited: 0x00)
struct FImportAssetParameters {
	struct UObject* ReimportAsset; // 0x00(0x08)
	int32_t ReimportSourceIndex; // 0x08(0x04)
	bool bIsAutomated; // 0x0c(0x01)
	bool bFollowRedirectors; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FSoftObjectPath> OverridePipelines; // 0x10(0x10)
	struct FDelegate OnAssetDone; // 0x20(0x14)
	char pad_34[0x14]; // 0x34(0x14)
	struct FDelegate OnAssetsImportDone; // 0x48(0x14)
	char pad_5C[0x14]; // 0x5c(0x14)
	struct FDelegate OnSceneObjectDone; // 0x70(0x14)
	char pad_84[0x14]; // 0x84(0x14)
	struct FDelegate OnSceneImportDone; // 0x98(0x14)
	char pad_AC[0x14]; // 0xac(0x14)
};


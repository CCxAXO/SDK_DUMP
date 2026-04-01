// Class InterchangeEngine.InterchangeBlueprintPipelineBase
// Size: 0xb0 (Inherited: 0xb0)
struct UInterchangeBlueprintPipelineBase : UBlueprint {
};

// Class InterchangeEngine.InterchangeFilePickerBase
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeFilePickerBase : UObject {

	bool ScriptedFilePickerForTranslatorType(enum class EInterchangeTranslatorType TranslatorType, struct FInterchangeFilePickerParameters& Parameters, struct TArray<struct FString>& OutFilenames); // Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7b15d90
	bool ScriptedFilePickerForTranslatorAssetType(enum class EInterchangeTranslatorAssetType TranslatorAssetType, struct FInterchangeFilePickerParameters& Parameters, struct TArray<struct FString>& OutFilenames); // Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7b16130
};

// Class InterchangeEngine.InterchangePipelineConfigurationBase
// Size: 0x30 (Inherited: 0x30)
struct UInterchangePipelineConfigurationBase : UObject {

	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(struct TArray<struct FInterchangeStackInfo>& PipelineStacks, struct TArray<struct UInterchangePipelineBase*>& OutPipelines, struct UInterchangeSourceData* SourceData); // Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7b16c70
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(struct TArray<struct FInterchangeStackInfo>& PipelineStacks, struct TArray<struct UInterchangePipelineBase*>& OutPipelines, struct UInterchangeSourceData* SourceData); // Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7b16910
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(struct TArray<struct FInterchangeStackInfo>& PipelineStacks, struct TArray<struct UInterchangePipelineBase*>& OutPipelines, struct UInterchangeSourceData* SourceData); // Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7b16fd0
};

// Class InterchangeEngine.InterchangeProjectSettings
// Size: 0x280 (Inherited: 0x48)
struct UInterchangeProjectSettings : UDeveloperSettings {
	struct FInterchangeContentImportSettings ContentImportSettings; // 0x48(0x138)
	struct FInterchangeImportSettings SceneImportSettings; // 0x180(0x98)
	struct TSoftClassPtr<UObject> FilePickerClass; // 0x218(0x30)
	bool bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TSoftClassPtr<UObject> GenericPipelineClass; // 0x250(0x30)
};

// Class InterchangeEngine.InterchangePythonPipelineBase
// Size: 0xf0 (Inherited: 0xf0)
struct UInterchangePythonPipelineBase : UInterchangePipelineBase {
};

// Class InterchangeEngine.InterchangePythonPipelineAsset
// Size: 0x78 (Inherited: 0x30)
struct UInterchangePythonPipelineAsset : UObject {
	struct TSoftClassPtr<UObject> PythonClass; // 0x30(0x30)
	struct UInterchangePythonPipelineBase* GeneratedPipeline; // 0x60(0x08)
	struct FString JsonDefaultProperties; // 0x68(0x10)
};

// Class InterchangeEngine.InterchangeSceneImportAsset
// Size: 0x38 (Inherited: 0x30)
struct UInterchangeSceneImportAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class InterchangeEngine.InterchangeAssetImportData
// Size: 0xc0 (Inherited: 0x30)
struct UInterchangeAssetImportData : UAssetImportData {
	struct FSoftObjectPath SceneImportAsset; // 0x30(0x28)
	struct FString NodeUniqueID; // 0x58(0x10)
	struct UInterchangeBaseNodeContainer* NodeContainer; // 0x68(0x08)
	struct TArray<struct UObject*> Pipelines; // 0x70(0x10)
	struct UInterchangeBaseNodeContainer* TransientNodeContainer; // 0x80(0x08)
	struct TArray<struct UObject*> TransientPipelines; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)

	void SetPipelines(struct TArray<struct UObject*>& InPipelines); // Function InterchangeEngine.InterchangeAssetImportData.SetPipelines // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b19190
	void SetNodeContainer(struct UInterchangeBaseNodeContainer* InNodeContainer); // Function InterchangeEngine.InterchangeAssetImportData.SetNodeContainer // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x7b19430
	struct FString ScriptGetFirstFilename(); // Function InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x444f4a0
	struct TArray<struct FString> ScriptExtractFilenames(); // Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ca4d50
	struct TArray<struct FString> ScriptExtractDisplayLabels(); // Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ca4d50
	struct UInterchangeBaseNode* GetStoredNode(struct FString InNodeUniqueId); // Function InterchangeEngine.InterchangeAssetImportData.GetStoredNode // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b18f50
	struct UInterchangeFactoryBaseNode* GetStoredFactoryNode(struct FString InNodeUniqueId); // Function InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b18e00
	struct TArray<struct UObject*> GetPipelines(); // Function InterchangeEngine.InterchangeAssetImportData.GetPipelines // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b19300
	int32_t GetNumberOfPipelines(); // Function InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b192c0
	struct UInterchangeBaseNodeContainer* GetNodeContainer(); // Function InterchangeEngine.InterchangeAssetImportData.GetNodeContainer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b19780
};

// Class InterchangeEngine.InterchangePipelineStackOverride
// Size: 0x40 (Inherited: 0x30)
struct UInterchangePipelineStackOverride : UObject {
	struct TArray<struct FSoftObjectPath> OverridePipelines; // 0x30(0x10)

	void AddPythonPipeline(struct UInterchangePythonPipelineBase* PipelineBase); // Function InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7b1c280
	void AddPipeline(struct UInterchangePipelineBase* PipelineBase); // Function InterchangeEngine.InterchangePipelineStackOverride.AddPipeline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7b1c280
	void AddBlueprintPipeline(struct UInterchangeBlueprintPipelineBase* PipelineBase); // Function InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7b1c280
};

// Class InterchangeEngine.InterchangeManager
// Size: 0x1f0 (Inherited: 0x30)
struct UInterchangeManager : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
	struct TSet<ClassPtrProperty> RegisteredTranslatorsClass; // 0xd8(0x50)
	struct TMap<ClassPtrProperty, ClassPtrProperty> RegisteredFactoryClasses; // 0x128(0x50)
	struct TMap<ClassPtrProperty, struct UInterchangeWriterBase*> RegisteredWriters; // 0x178(0x50)
	char pad_1C8[0x28]; // 0x1c8(0x28)

	bool ImportScene(struct FString ContentPath, struct UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters); // Function InterchangeEngine.InterchangeManager.ImportScene // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b1cb80
	bool ImportAsset(struct FString ContentPath, struct UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters); // Function InterchangeEngine.InterchangeManager.ImportAsset // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b1d050
	struct UObject* GetRegisteredFactoryClass(struct UObject* ClassToMake); // Function InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1c7d0
	struct UInterchangeManager* GetInterchangeManagerScripted(); // Function InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b1d410
	bool ExportScene(struct UObject* World, bool bIsAutomated); // Function InterchangeEngine.InterchangeManager.ExportScene // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7b1ca00
	bool ExportAsset(struct UObject* Asset, bool bIsAutomated); // Function InterchangeEngine.InterchangeManager.ExportAsset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7b1ca00
	struct UInterchangeSourceData* CreateSourceData(struct FString InFilename); // Function InterchangeEngine.InterchangeManager.CreateSourceData // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x7b1c8d0
};

// Class InterchangeEngine.InterchangeMeshUtilities
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeMeshUtilities : UObject {
};


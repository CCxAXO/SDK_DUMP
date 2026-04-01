// Enum InterchangeCore.EInterchangeFactoryAssetType
enum class EInterchangeFactoryAssetType : uint8 {
	None = 0,
	Textures = 1,
	Materials = 2,
	Meshes = 3,
	Animations = 4,
	Physics = 5,
	EInterchangeFactoryAssetType_MAX = 6
};

// Enum InterchangeCore.EInterchangePipelineTask
enum class EInterchangePipelineTask : uint8 {
	PostTranslator = 0,
	PostFactory = 1,
	PostImport = 2,
	Export = 3,
	EInterchangePipelineTask_MAX = 4
};

// Enum InterchangeCore.EInterchangePipelineContext
enum class EInterchangePipelineContext : uint8 {
	None = 0,
	AssetImport = 1,
	AssetReimport = 2,
	SceneImport = 3,
	SceneReimport = 4,
	AssetCustomLODImport = 5,
	AssetCustomLODReimport = 6,
	AssetAlternateSkinningImport = 7,
	AssetAlternateSkinningReimport = 8,
	EInterchangePipelineContext_MAX = 9
};

// Enum InterchangeCore.EInterchangeResultType
enum class EInterchangeResultType : uint8 {
	Success = 0,
	Warning = 1,
	Error = 2,
	EInterchangeResultType_MAX = 3
};

// Enum InterchangeCore.EInterchangeTranslatorType
enum class EInterchangeTranslatorType : uint8 {
	Invalid = 0,
	Assets = 2,
	Actors = 4,
	Scenes = 6,
	EInterchangeTranslatorType_MAX = 7
};

// Enum InterchangeCore.EInterchangeTranslatorAssetType
enum class EInterchangeTranslatorAssetType : uint8 {
	None = 0,
	Textures = 1,
	Materials = 2,
	Meshes = 4,
	Animations = 8,
	EInterchangeTranslatorAssetType_MAX = 9
};

// Enum InterchangeCore.EInterchangeNodeContainerType
enum class EInterchangeNodeContainerType : uint8 {
	None = 0,
	TranslatedScene = 1,
	TranslatedAsset = 2,
	FactoryData = 3,
	EInterchangeNodeContainerType_MAX = 4
};

// Enum InterchangeCore.EReimportStrategyFlags
enum class EReimportStrategyFlags : uint8 {
	ApplyNoProperties = 0,
	ApplyPipelineProperties = 1,
	ApplyEditorChangedProperties = 2,
	EReimportStrategyFlags_MAX = 3
};

// ScriptStruct InterchangeCore.InterchangePipelinePropertyStatePerContext
// Size: 0x01 (Inherited: 0x00)
struct FInterchangePipelinePropertyStatePerContext {
	bool bVisible; // 0x00(0x01)
};

// ScriptStruct InterchangeCore.InterchangePipelinePropertyStates
// Size: 0x03 (Inherited: 0x00)
struct FInterchangePipelinePropertyStates {
	bool bLocked; // 0x00(0x01)
	struct FInterchangePipelinePropertyStatePerContext ImportStates; // 0x01(0x01)
	struct FInterchangePipelinePropertyStatePerContext ReimportStates; // 0x02(0x01)
};

// ScriptStruct InterchangeCore.InterchangeUserDefinedAttributeInfo
// Size: 0x30 (Inherited: 0x00)
struct FInterchangeUserDefinedAttributeInfo {
	struct FString Name; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};


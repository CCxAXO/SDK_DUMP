// Class InterchangeCore.InterchangeFactoryBase
// Size: 0x38 (Inherited: 0x30)
struct UInterchangeFactoryBase : UObject {
	struct UInterchangeResultsContainer* Results; // 0x30(0x08)

	struct UObject* GetFactoryClass(); // Function InterchangeCore.InterchangeFactoryBase.GetFactoryClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d90280
};

// Class InterchangeCore.InterchangeSourceData
// Size: 0x58 (Inherited: 0x30)
struct UInterchangeSourceData : UObject {
	struct FString Filename; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	bool SetFilename(struct FString InFilename); // Function InterchangeCore.InterchangeSourceData.SetFilename // (Final|Native|Public|BlueprintCallable) // @ game+0x79fd900
	struct FString GetFilename(); // Function InterchangeCore.InterchangeSourceData.GetFilename // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59b23c0
};

// Class InterchangeCore.InterchangeWriterBase
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeWriterBase : UObject {
};

// Class InterchangeCore.InterchangePipelineBase
// Size: 0xf0 (Inherited: 0x30)
struct UInterchangePipelineBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UInterchangeResultsContainer* Results; // 0x38(0x08)
	struct TMap<struct FName, struct FInterchangePipelinePropertyStates> PropertiesStates; // 0x40(0x50)
	char pad_90[0x60]; // 0x90(0x60)

	void ScriptedSetReimportSourceIndex(struct UObject* ReimportObjectClass, int32_t SourceFileIndex); // Function InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x79fe840
	void ScriptedExecutePreImportPipeline(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct TArray<struct UInterchangeSourceData*>& SourceDatas); // Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x79ff2f0
	void ScriptedExecutePostImportPipeline(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FString FactoryNodeKey, struct UObject* CreatedAsset, bool bIsAReimport); // Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x79feaf0
	void ScriptedExecutePostFactoryPipeline(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FString FactoryNodeKey, struct UObject* CreatedAsset, bool bIsAReimport); // Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x79fee00
	void ScriptedExecutePipeline(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct TArray<struct UInterchangeSourceData*>& SourceDatas); // Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x79ff110
	void ScriptedExecuteExportPipeline(struct UInterchangeBaseNodeContainer* BaseNodeContainer); // Function InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3f37190
	bool ScriptedCanExecuteOnAnyThread(enum class EInterchangePipelineTask PipelineTask); // Function InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x79fe9e0
	struct FInterchangePipelinePropertyStates FindOrAddPropertyStates(struct FName PropertyPath); // Function InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x79fe500
	bool DoesPropertyStatesExist(struct FName PropertyPath); // Function InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x79fe6d0
};

// Class InterchangeCore.InterchangeResult
// Size: 0x68 (Inherited: 0x30)
struct UInterchangeResult : UObject {
	struct FString SourceAssetName; // 0x30(0x10)
	struct FString DestinationAssetName; // 0x40(0x10)
	ClassPtrProperty AssetType; // 0x50(0x08)
	struct FString InterchangeKey; // 0x58(0x10)
};

// Class InterchangeCore.InterchangeResultSuccess
// Size: 0x68 (Inherited: 0x68)
struct UInterchangeResultSuccess : UInterchangeResult {
};

// Class InterchangeCore.InterchangeResultWarning
// Size: 0x68 (Inherited: 0x68)
struct UInterchangeResultWarning : UInterchangeResult {
};

// Class InterchangeCore.InterchangeResultError
// Size: 0x68 (Inherited: 0x68)
struct UInterchangeResultError : UInterchangeResult {
};

// Class InterchangeCore.InterchangeResultWarning_Generic
// Size: 0x80 (Inherited: 0x68)
struct UInterchangeResultWarning_Generic : UInterchangeResultWarning {
	struct FText Text; // 0x68(0x18)
};

// Class InterchangeCore.InterchangeResultError_Generic
// Size: 0x80 (Inherited: 0x68)
struct UInterchangeResultError_Generic : UInterchangeResultError {
	struct FText Text; // 0x68(0x18)
};

// Class InterchangeCore.InterchangeResultError_ReimportFail
// Size: 0x68 (Inherited: 0x68)
struct UInterchangeResultError_ReimportFail : UInterchangeResultError {
};

// Class InterchangeCore.InterchangeResultDisplay_Generic
// Size: 0x80 (Inherited: 0x68)
struct UInterchangeResultDisplay_Generic : UInterchangeResultSuccess {
	struct FText Text; // 0x68(0x18)
};

// Class InterchangeCore.InterchangeResultsContainer
// Size: 0x68 (Inherited: 0x30)
struct UInterchangeResultsContainer : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct TArray<struct UInterchangeResult*> Results; // 0x58(0x10)
};

// Class InterchangeCore.InterchangeTranslatorBase
// Size: 0x40 (Inherited: 0x30)
struct UInterchangeTranslatorBase : UObject {
	struct UInterchangeResultsContainer* Results; // 0x30(0x08)
	struct UInterchangeSourceData* SourceData; // 0x38(0x08)
};

// Class InterchangeCore.InterchangeBaseNode
// Size: 0x68 (Inherited: 0x30)
struct UInterchangeBaseNode : UObject {
	char pad_30[0x38]; // 0x30(0x38)

	bool SetParentUid(struct FString ParentUid); // Function InterchangeCore.InterchangeBaseNode.SetParentUid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a04b70
	bool SetEnabled(bool bIsEnabled); // Function InterchangeCore.InterchangeBaseNode.SetEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a04660
	bool SetDisplayLabel(struct FString DisplayName); // Function InterchangeCore.InterchangeBaseNode.SetDisplayLabel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a04d50
	bool SetAssetName(struct FString AssetName); // Function InterchangeCore.InterchangeBaseNode.SetAssetName // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a04430
	bool RemoveTargetNodeUid(struct FString AssetUid); // Function InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04790
	bool RemoveAttribute(struct FString NodeAttributeKey); // Function InterchangeCore.InterchangeBaseNode.RemoveAttribute // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a07250
	bool IsEnabled(); // Function InterchangeCore.InterchangeBaseNode.IsEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04760
	void InitializeNode(struct FString UniqueId, struct FString DisplayLabel, enum class EInterchangeNodeContainerType NodeContainerType); // Function InterchangeCore.InterchangeBaseNode.InitializeNode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a07390
	bool GetVector2Attribute(struct FString NodeAttributeKey, struct FVector2f& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetVector2Attribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a05110
	struct FString GetUniqueID(); // Function InterchangeCore.InterchangeBaseNode.GetUniqueID // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04fd0
	void GetTargetNodeUids(struct TArray<struct FString>& OutTargetAssets); // Function InterchangeCore.InterchangeBaseNode.GetTargetNodeUids // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04a10
	int32_t GetTargetNodeCount(); // Function InterchangeCore.InterchangeBaseNode.GetTargetNodeCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04b40
	bool GetStringAttribute(struct FString NodeAttributeKey, struct FString& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetStringAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a05d90
	struct FString GetParentUid(); // Function InterchangeCore.InterchangeBaseNode.GetParentUid // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04cb0
	enum class EInterchangeNodeContainerType GetNodeContainerType(); // Function InterchangeCore.InterchangeBaseNode.GetNodeContainerType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04630
	bool GetLinearColorAttribute(struct FString NodeAttributeKey, struct FLinearColor& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a055d0
	bool GetInt32Attribute(struct FString NodeAttributeKey, int32_t& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetInt32Attribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a06a90
	bool GetGuidAttribute(struct FString NodeAttributeKey, struct FGuid& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetGuidAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a059b0
	bool GetFloatAttribute(struct FString NodeAttributeKey, float& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetFloatAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a066b0
	bool GetDoubleAttribute(struct FString NodeAttributeKey, double& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetDoubleAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a061f0
	struct FString GetDisplayLabel(); // Function InterchangeCore.InterchangeBaseNode.GetDisplayLabel // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04e90
	bool GetBooleanAttribute(struct FString NodeAttributeKey, bool& OutValue); // Function InterchangeCore.InterchangeBaseNode.GetBooleanAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a06e70
	struct FString GetAssetName(); // Function InterchangeCore.InterchangeBaseNode.GetAssetName // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a04580
	bool AddVector2Attribute(struct FString NodeAttributeKey, struct FVector2f& Value); // Function InterchangeCore.InterchangeBaseNode.AddVector2Attribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a05300
	bool AddTargetNodeUid(struct FString AssetUid); // Function InterchangeCore.InterchangeBaseNode.AddTargetNodeUid // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a048d0
	bool AddStringAttribute(struct FString NodeAttributeKey, struct FString Value); // Function InterchangeCore.InterchangeBaseNode.AddStringAttribute // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a05fc0
	bool AddLinearColorAttribute(struct FString NodeAttributeKey, struct FLinearColor& Value); // Function InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a057c0
	bool AddInt32Attribute(struct FString NodeAttributeKey, int32_t& Value); // Function InterchangeCore.InterchangeBaseNode.AddInt32Attribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a06c80
	bool AddGuidAttribute(struct FString NodeAttributeKey, struct FGuid& Value); // Function InterchangeCore.InterchangeBaseNode.AddGuidAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a05ba0
	bool AddFloatAttribute(struct FString NodeAttributeKey, float& Value); // Function InterchangeCore.InterchangeBaseNode.AddFloatAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a068a0
	bool AddDoubleAttribute(struct FString NodeAttributeKey, double& Value); // Function InterchangeCore.InterchangeBaseNode.AddDoubleAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a063e0
	bool AddBooleanAttribute(struct FString NodeAttributeKey, bool& Value); // Function InterchangeCore.InterchangeBaseNode.AddBooleanAttribute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a07060
};

// Class InterchangeCore.InterchangeBaseNodeContainer
// Size: 0xd0 (Inherited: 0x30)
struct UInterchangeBaseNodeContainer : UObject {
	struct TMap<struct FString, struct UInterchangeBaseNode*> Nodes; // 0x30(0x50)
	char pad_80[0x50]; // 0x80(0x50)

	bool SetNodeParentUid(struct FString NodeUniqueID, struct FString NewParentNodeUid); // Function InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0c0d0
	void SaveToFile(struct FString Filename); // Function InterchangeCore.InterchangeBaseNodeContainer.SaveToFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0baa0
	void ResetChildrenCache(); // Function InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache // (Final|Native|Public|BlueprintCallable) // @ game+0x7a0b930
	void ReplaceNode(struct FString NodeUniqueID, struct UInterchangeFactoryBaseNode* NewNode); // Function InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0cba0
	void LoadFromFile(struct FString Filename); // Function InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0b970
	bool IsNodeUidValid(struct FString NodeUniqueID); // Function InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0c9b0
	void GetRoots(struct TArray<struct FString>& RootNodes); // Function InterchangeCore.InterchangeBaseNodeContainer.GetRoots // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0c840
	void GetNodes(struct UObject* ClassNode, struct TArray<struct FString>& OutNodes); // Function InterchangeCore.InterchangeBaseNodeContainer.GetNodes // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0c670
	struct TArray<struct FString> GetNodeChildrenUids(struct FString NodeUniqueID); // Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0bdc0
	int32_t GetNodeChildrenCount(struct FString NodeUniqueID); // Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0bf90
	struct UInterchangeBaseNode* GetNodeChildren(struct FString NodeUniqueID, int32_t ChildIndex); // Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0bbd0
	struct UInterchangeBaseNode* GetNode(struct FString NodeUniqueID); // Function InterchangeCore.InterchangeBaseNodeContainer.GetNode // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0c440
	struct UInterchangeFactoryBaseNode* GetFactoryNode(struct FString NodeUniqueID); // Function InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0c300
	void ComputeChildrenCache(); // Function InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0b950
	struct FString AddNode(struct UInterchangeBaseNode* Node); // Function InterchangeCore.InterchangeBaseNodeContainer.AddNode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0cdc0
};

// Class InterchangeCore.InterchangeFactoryBaseNode
// Size: 0x148 (Inherited: 0x68)
struct UInterchangeFactoryBaseNode : UInterchangeBaseNode {
	char pad_68[0xe0]; // 0x68(0xe0)

	bool UnsetSkipNodeImport(); // Function InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a10590
	bool UnsetForceNodeReimport(); // Function InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0f950
	bool ShouldSkipNodeImport(); // Function InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a106e0
	bool ShouldForceNodeReimport(); // Function InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0faa0
	bool SetSkipNodeImport(); // Function InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a106b0
	bool SetReimportStrategyFlags(enum class EReimportStrategyFlags& ReimportStrategyFlags); // Function InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a10710
	bool SetForceNodeReimport(); // Function InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0fa70
	bool SetCustomSubPath(struct FString AttributeValue); // Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a10310
	bool SetCustomReferenceObject(struct FSoftObjectPath& AttributeValue); // Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a0fad0
	bool RemoveFactoryDependencyUid(struct FString DependencyUid); // Function InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0fd50
	enum class EReimportStrategyFlags GetReimportStrategyFlags(); // Function InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a10810
	void GetFactoryDependency(int32_t Index, struct FString& OutDependency); // Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0ffd0
	int32_t GetFactoryDependenciesCount(); // Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a102e0
	void GetFactoryDependencies(struct TArray<struct FString>& OutDependencies); // Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a101b0
	bool GetCustomSubPath(struct FString& AttributeValue); // Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a10450
	bool GetCustomReferenceObject(struct FSoftObjectPath& AttributeValue); // Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0fc10
	bool AddFactoryDependencyUid(struct FString DependencyUid); // Function InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a0fe90
};

// Class InterchangeCore.InterchangeSourceNode
// Size: 0xd8 (Inherited: 0x68)
struct UInterchangeSourceNode : UInterchangeBaseNode {
	char pad_68[0x70]; // 0x68(0x70)

	bool SetCustomSourceTimelineStart(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a132c0
	bool SetCustomSourceTimelineEnd(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a130c0
	bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a136c0
	bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a134c0
	bool SetCustomImportUnusedMaterial(bool& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a12ac0
	bool SetCustomAnimatedTimeStart(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a12ec0
	bool SetCustomAnimatedTimeEnd(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a12cc0
	void InitializeSourceNode(struct FString UniqueId, struct FString DisplayLabel); // Function InterchangeCore.InterchangeSourceNode.InitializeSourceNode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7a138c0
	bool GetCustomSourceTimelineStart(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a133c0
	bool GetCustomSourceTimelineEnd(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a131c0
	bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a137c0
	bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a135c0
	bool GetCustomImportUnusedMaterial(bool& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a12bc0
	bool GetCustomAnimatedTimeStart(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a12fc0
	bool GetCustomAnimatedTimeEnd(double& AttributeValue); // Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a12dc0
};

// Class InterchangeCore.InterchangeUserDefinedAttributesAPI
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeUserDefinedAttributesAPI : UObject {

	bool RemoveUserDefinedAttribute(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x7a171a0
	void GetUserDefinedAttributeInfos(struct UInterchangeBaseNode* InterchangeNode, struct TArray<struct FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a15bf0
	bool GetUserDefinedAttribute_Int32(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, int32_t& OutValue, struct FString& OutPayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32 // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a16260
	bool GetUserDefinedAttribute_FString(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, struct FString& OutValue, struct FString& OutPayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a15e50
	bool GetUserDefinedAttribute_Float(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, float& OutValue, struct FString& OutPayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a16a00
	bool GetUserDefinedAttribute_Double(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, double& OutValue, struct FString& OutPayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a16630
	bool GetUserDefinedAttribute_Boolean(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, bool& OutValue, struct FString& OutPayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a16dd0
	void DuplicateAllUserDefinedAttribute(struct UInterchangeBaseNode* InterchangeSourceNode, struct UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x7a159d0
	bool CreateUserDefinedAttribute_Int32(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, int32_t& Value, struct FString PayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32 // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a17790
	bool CreateUserDefinedAttribute_FString(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, struct FString Value, struct FString PayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x7a17370
	bool CreateUserDefinedAttribute_Float(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, float& Value, struct FString PayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a17f80
	bool CreateUserDefinedAttribute_Double(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, double& Value, struct FString PayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a17b80
	bool CreateUserDefinedAttribute_Boolean(struct UInterchangeBaseNode* InterchangeNode, struct FString UserDefinedAttributeName, bool& Value, struct FString PayloadKey); // Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a18380
};


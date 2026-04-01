// Class MetasoundEngine.MetasoundGeneratorHandle
// Size: 0xe8 (Inherited: 0x30)
struct UMetasoundGeneratorHandle : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)

	bool WatchOutput(struct FName OutputName, struct FDelegate& OnOutputValueChanged, struct FName AnalyzerName, struct FName AnalyzerOutputName); // Function MetasoundEngine.MetasoundGeneratorHandle.WatchOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x833d5e0
	void OnOutputValueChangedMulticast__DelegateSignature(struct FName Name, struct FMetaSoundOutput& output); // DelegateFunction MetasoundEngine.MetasoundGeneratorHandle.OnOutputValueChangedMulticast__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1b42740
	struct UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(struct UAudioComponent* OnComponent); // Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x833db70
	bool ApplyParameterPack(struct UMetasoundParameterPack* Pack); // Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack // (Final|Native|Public|BlueprintCallable) // @ game+0x833d920
};

// Class MetasoundEngine.MetasoundOutputBlueprintAccess
// Size: 0x30 (Inherited: 0x30)
struct UMetasoundOutputBlueprintAccess : UBlueprintFunctionLibrary {

	bool IsTime(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e230
	bool IsString(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsString // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e5e0
	bool IsInt32(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833ebf0
	bool IsFloat(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833ef00
	bool IsBool(struct FMetaSoundOutput& output); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e8f0
	float GetTimeSeconds(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e040
	struct FString GetString(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetString // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e350
	int32_t GetInt32(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833ea10
	float GetFloat(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833ed10
	bool GetBool(struct FMetaSoundOutput& output, bool& Success); // Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x833e700
};

// Class MetasoundEngine.MetaSoundOutputSubsystem
// Size: 0x68 (Inherited: 0x58)
struct UMetaSoundOutputSubsystem : UTickableWorldSubsystem {
	struct TArray<struct UMetasoundGeneratorHandle*> TrackedGenerators; // 0x58(0x10)

	bool WatchOutput(struct UAudioComponent* AudioComponent, struct FName OutputName, struct FDelegate& OnOutputValueChanged, struct FName AnalyzerName, struct FName AnalyzerOutputName); // Function MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x833f450
};

// Class MetasoundEngine.MetaSoundSettings
// Size: 0x90 (Inherited: 0x48)
struct UMetaSoundSettings : UDeveloperSettings {
	bool bAutoUpdateEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x50(0x10)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x60(0x10)
	bool bAutoUpdateLogWarningOnDroppedConnection; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FDirectoryPath> DirectoriesToRegister; // 0x78(0x10)
	int32_t DenyListCacheChangeID; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class MetasoundEngine.MetasoundEditorGraphBase
// Size: 0x68 (Inherited: 0x68)
struct UMetasoundEditorGraphBase : UEdGraph {
};

// Class MetasoundEngine.MetaSoundPatch
// Size: 0x380 (Inherited: 0x30)
struct UMetaSoundPatch : UObject {
	char pad_30[0x70]; // 0x30(0x70)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0xa0(0x1e0)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x280(0x50)
	struct TSet<struct UObject*> ReferencedAssetClassObjects; // 0x2d0(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x320(0x50)
	struct FGuid AssetClassID; // 0x370(0x10)
};

// Class MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0x1e8 (Inherited: 0x38)
struct UMetaSoundAssetSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies; // 0x40(0x10)
	char pad_50[0x198]; // 0x50(0x198)

	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x834f000
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x834f170
};

// Class MetasoundEngine.MetaSoundBuilderBase
// Size: 0x68 (Inherited: 0x30)
struct UMetaSoundBuilderBase : UObject {
	struct FMetaSoundFrontendDocumentBuilder Builder; // 0x30(0x30)
	bool bIsAttached; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	void SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8353fd0
	void SetGraphInputDefault(struct FName InputName, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8353c00
	void RemoveNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354380
	void RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354540
	void RemoveInterface(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveInterface // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354700
	void RemoveGraphOutput(struct FName Name, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83548c0
	void RemoveGraphInput(struct FName Name, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354a80
	bool NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x83551d0
	bool NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8354f50
	bool NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle); // Function MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8355090
	bool IsPreset(); // Function MetasoundEngine.MetaSoundBuilderBase.IsPreset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8354f00
	bool InterfaceIsDeclared(struct FName InterfaceName); // Function MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x83553f0
	struct UObject* GetReferencedPresetAsset(); // Function MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8355500
	void GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FName& Name, struct FName& DataType, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8355530
	struct FMetasoundFrontendLiteral GetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8355c10
	void GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, struct FName& Name, struct FName& DataType, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8355f80
	struct FMetasoundFrontendLiteral GetNodeInputClassDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83558a0
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult, struct FName DataType); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356c60
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356f60
	struct FMetaSoundNodeHandle FindNodeOutputParent(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356530
	struct FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(struct FMetaSoundNodeHandle& NodeHandle, struct FName OutputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83571b0
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult, struct FName DataType); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8357410
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8357710
	struct FMetaSoundNodeHandle FindNodeInputParent(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356530
	struct FMetaSoundBuilderNodeInputHandle FindNodeInputByName(struct FMetaSoundNodeHandle& NodeHandle, struct FName InputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8357960
	struct FMetasoundFrontendVersion FindNodeClassVersion(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83562f0
	struct TArray<struct FMetaSoundNodeHandle> FindInterfaceOutputNodes(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356730
	struct TArray<struct FMetaSoundNodeHandle> FindInterfaceInputNodes(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8356960
	struct FMetaSoundNodeHandle FindGraphOutputNode(struct FName OutputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8357bc0
	struct FMetaSoundNodeHandle FindGraphInputNode(struct FName InputName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8357e00
	void DisconnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8358040
	void DisconnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8358620
	void DisconnectNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83582a0
	void DisconnectNodeInput(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8358460
	void ConvertToPreset(struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedNodeClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354c40
	void ConvertFromPreset(enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8354e00
	bool ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& output); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8358950
	bool ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8358a90
	bool ContainsNode(struct FMetaSoundNodeHandle& Node); // Function MetasoundEngine.MetaSoundBuilderBase.ContainsNode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8358bd0
	void ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8359870
	void ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8359ad0
	void ConnectNodeOutputToGraphOutput(struct FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8358f70
	struct TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8359530
	void ConnectNodeInputToGraphInput(struct FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8358d00
	struct TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x83591e0
	struct FMetaSoundNodeHandle AddNodeByClassName(struct FMetasoundFrontendClassName& ClassName, int32_t MajorVersion, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8359d40
	struct FMetaSoundNodeHandle AddNode(struct TScriptInterface<IMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8359fd0
	void AddInterface(struct FName InterfaceName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderBase.AddInterface // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835a190
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(struct FName Name, struct FName DataType, struct FMetasoundFrontendLiteral DefaultValue, enum class EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // Function MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835a350
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(struct FName Name, struct FName DataType, struct FMetasoundFrontendLiteral DefaultValue, enum class EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // Function MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835a9e0
};

// Class MetasoundEngine.MetaSoundPatchBuilder
// Size: 0x68 (Inherited: 0x68)
struct UMetaSoundPatchBuilder : UMetaSoundBuilderBase {

	struct TScriptInterface<IMetaSoundDocumentInterface> Build(struct UObject* Parent, struct FMetaSoundBuilderOptions& OPTIONS); // Function MetasoundEngine.MetaSoundPatchBuilder.Build // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x835bcd0
};

// Class MetasoundEngine.MetaSoundSourceBuilder
// Size: 0x70 (Inherited: 0x68)
struct UMetaSoundSourceBuilder : UMetaSoundBuilderBase {
	char pad_68[0x8]; // 0x68(0x08)

	void SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundSourceBuilder.SetFormat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835bfd0
	bool GetLiveUpdatesEnabled(); // Function MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x835c170
	struct TScriptInterface<IMetaSoundDocumentInterface> Build(struct UObject* Parent, struct FMetaSoundBuilderOptions& OPTIONS); // Function MetasoundEngine.MetaSoundSourceBuilder.Build // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x835bcd0
	void Audition(struct UObject* Parent, struct UAudioComponent* AudioComponent, struct FDelegate OnCreateGenerator, bool bLiveUpdatesEnabled); // Function MetasoundEngine.MetaSoundSourceBuilder.Audition // (Final|Native|Public|BlueprintCallable) // @ game+0x835c200
};

// Class MetasoundEngine.MetaSoundBuilderSubsystem
// Size: 0xe0 (Inherited: 0x38)
struct UMetaSoundBuilderSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<struct FName, struct UMetaSoundBuilderBase*> NamedBuilders; // 0x40(0x50)
	struct TMap<struct FName, struct TWeakObjectPtr<struct UMetaSoundBuilderBase>> AssetBuilders; // 0x90(0x50)

	bool UnregisterSourceBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835c9a0
	bool UnregisterPatchBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835c9a0
	bool UnregisterBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835c9a0
	void RegisterSourceBuilder(struct FName BuilderName, struct UMetaSoundSourceBuilder* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835cac0
	void RegisterPatchBuilder(struct FName BuilderName, struct UMetaSoundPatchBuilder* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835cac0
	void RegisterBuilder(struct FName BuilderName, struct UMetaSoundBuilderBase* Builder); // Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835cac0
	bool IsInterfaceRegistered(struct FName InInterfaceName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x835cd30
	struct UMetaSoundSourceBuilder* FindSourceBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835ce40
	struct UMetaSoundPatchBuilder* FindPatchBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835d000
	struct UMetaSoundBuilderBase* FindBuilder(struct FName BuilderName); // Function MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x835d1c0
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(struct FString Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835d8f0
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(struct TArray<struct FString>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835d6e0
	struct UMetaSoundSourceBuilder* CreateSourcePresetBuilder(struct FName BuilderName, struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedSourceClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835e930
	struct UMetaSoundSourceBuilder* CreateSourceBuilder(struct FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, struct TArray<struct FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, enum class EMetaSoundBuilderResult& OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835ee40
	struct UMetaSoundPatchBuilder* CreatePatchPresetBuilder(struct FName BuilderName, struct TScriptInterface<IMetaSoundDocumentInterface>& ReferencedPatchClass, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835ebc0
	struct UMetaSoundPatchBuilder* CreatePatchBuilder(struct FName BuilderName, enum class EMetaSoundBuilderResult& OutResult); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835f370
	struct FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(struct UObject* Value); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral // (Final|Native|Public|BlueprintCallable) // @ game+0x835dc50
	struct FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(struct TArray<struct UObject*>& Value); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835db00
	struct FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(struct FAudioParameter& Param); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835d350
	struct FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835df60
	struct FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(struct TArray<int32_t>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835dd70
	struct FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835e350
	struct FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(struct TArray<float>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835e140
	struct FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835e750
	struct FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(struct TArray<bool>& Value, struct FName& DataType); // Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x835e540
};

// Class MetasoundEngine.MetaSoundSource
// Size: 0x8b0 (Inherited: 0x490)
struct UMetaSoundSource : USoundWaveProcedural {
	char pad_490[0x70]; // 0x490(0x70)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x500(0x1e0)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x6e0(0x50)
	struct TSet<struct UObject*> ReferencedAssetClassObjects; // 0x730(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x780(0x50)
	enum class EMetaSoundOutputAudioFormat OutputFormat; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	struct FGuid AssetClassID; // 0x7d4(0x10)
	char pad_7E4[0xcc]; // 0x7e4(0xcc)
};


// Class DataflowEngine.DataflowBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UDataflowBlueprintLibrary : UBlueprintFunctionLibrary {

	void EvaluateTerminalNodeByName(struct UDataflow* Dataflow, struct FName TerminalNodeName, struct UObject* ResultAsset); // Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x362c470
};

// Class DataflowEngine.DataflowEdNode
// Size: 0xc8 (Inherited: 0xa0)
struct UDataflowEdNode : UEdGraphNode {
	char pad_A0[0x20]; // 0xa0(0x20)
	bool bRenderInAssetEditor; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class DataflowEngine.Dataflow
// Size: 0xb0 (Inherited: 0x68)
struct UDataflow : UEdGraph {
	char pad_68[0x28]; // 0x68(0x28)
	bool bActive; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UObject*> Targets; // 0x98(0x10)
	struct UMaterial* Material; // 0xa8(0x08)
};


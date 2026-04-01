// ScriptStruct DataflowCore.DataflowConnection
// Size: 0x48 (Inherited: 0x00)
struct FDataflowConnection {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct DataflowCore.DataflowInput
// Size: 0x50 (Inherited: 0x48)
struct FDataflowInput : FDataflowConnection {
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct DataflowCore.DataflowOutput
// Size: 0x70 (Inherited: 0x48)
struct FDataflowOutput : FDataflowConnection {
	char pad_48[0x28]; // 0x48(0x28)
};

// ScriptStruct DataflowCore.DataflowNode
// Size: 0xf0 (Inherited: 0x00)
struct FDataflowNode {
	char pad_0[0xd0]; // 0x00(0xd0)
	bool bActive; // 0xd0(0x01)
	char pad_D1[0x1f]; // 0xd1(0x1f)
};

// ScriptStruct DataflowCore.DataflowOverrideNode
// Size: 0x118 (Inherited: 0xf0)
struct FDataflowOverrideNode : FDataflowNode {
	struct FName Key; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString Default; // 0x100(0x10)
	bool IsOverriden; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct DataflowCore.DataflowSelection
// Size: 0x20 (Inherited: 0x00)
struct FDataflowSelection {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DataflowCore.DataflowTransformSelection
// Size: 0x20 (Inherited: 0x20)
struct FDataflowTransformSelection : FDataflowSelection {
};

// ScriptStruct DataflowCore.DataflowVertexSelection
// Size: 0x20 (Inherited: 0x20)
struct FDataflowVertexSelection : FDataflowSelection {
};

// ScriptStruct DataflowCore.DataflowFaceSelection
// Size: 0x20 (Inherited: 0x20)
struct FDataflowFaceSelection : FDataflowSelection {
};

// ScriptStruct DataflowCore.NodeColors
// Size: 0x20 (Inherited: 0x00)
struct FNodeColors {
	struct FLinearColor NodeTitleColor; // 0x00(0x10)
	struct FLinearColor NodeBodyTintColor; // 0x10(0x10)
};

// ScriptStruct DataflowCore.DataflowTerminalNode
// Size: 0xf0 (Inherited: 0xf0)
struct FDataflowTerminalNode : FDataflowNode {
};


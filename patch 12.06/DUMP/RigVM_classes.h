// Class RigVM.RigVMGraphFunctionHost
// Size: 0x30 (Inherited: 0x30)
struct URigVMGraphFunctionHost : UInterface {
};

// Class RigVM.RigVMBlueprintGeneratedClass
// Size: 0x3a0 (Inherited: 0x378)
struct URigVMBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_378[0x8]; // 0x378(0x08)
	struct FRigVMGraphFunctionStore GraphFunctionStore; // 0x380(0x20)
};

// Class RigVM.RigVM
// Size: 0x2b0 (Inherited: 0x30)
struct URigVM : UObject {
	struct URigVMMemoryStorage* WorkMemoryStorageObject; // 0x30(0x08)
	struct URigVMMemoryStorage* LiteralMemoryStorageObject; // 0x38(0x08)
	struct URigVMMemoryStorage* DebugMemoryStorageObject; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
	struct FRigVMByteCode ByteCodeStorage; // 0x68(0xa0)
	char pad_108[0x8]; // 0x108(0x08)
	struct FRigVMInstructionArray Instructions; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)
	struct TArray<struct FName> FunctionNamesStorage; // 0x128(0x10)
	char pad_138[0x38]; // 0x138(0x38)
	struct TArray<struct FRigVMParameter> Parameters; // 0x170(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x180(0x50)
	char pad_1D0[0x98]; // 0x1d0(0x98)
	struct URigVM* DeferredVMToCopy; // 0x268(0x08)
	char pad_270[0x40]; // 0x270(0x40)

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b8450
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b8100
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b79e0
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b8780
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b7dc0
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b8b20
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b8e60
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b94a0
	void SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b9170
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74b97c0
	struct FRigVMStatistics GetStatistics(); // Function RigVM.RigVM.GetStatistics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74b7850
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Native|Public|Const) // @ game+0x74badb0
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74ba110
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b9f10
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b9ad0
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74ba2f0
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74b9d20
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74ba510
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74ba6f0
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74baa50
	double GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74ba8a0
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74bac00
	bool Execute(struct FRigVMExtendedExecuteContext& Context, struct FName& InEntryName); // Function RigVM.RigVM.Execute // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74bb0e0
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Native|Public|HasOutParms) // @ game+0x74baf20
};

// Class RigVM.NameSpacedUserData
// Size: 0x108 (Inherited: 0x30)
struct UNameSpacedUserData : UAssetUserData {
	struct FString Namespace; // 0x30(0x10)
	char pad_40[0xc8]; // 0x40(0xc8)
};

// Class RigVM.DataAssetLink
// Size: 0x110 (Inherited: 0x108)
struct UDataAssetLink : UNameSpacedUserData {
	struct UDataAsset* DataAsset; // 0x108(0x08)

	void SetDataAsset(struct UDataAsset* InDataAsset); // Function RigVM.DataAssetLink.SetDataAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x74c2660
	struct UDataAsset* GetDataAsset(); // Function RigVM.DataAssetLink.GetDataAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x533e630
};

// Class RigVM.RigVMMemoryStorageGeneratorClass
// Size: 0x250 (Inherited: 0x210)
struct URigVMMemoryStorageGeneratorClass : UClass {
	char pad_210[0x40]; // 0x210(0x40)
};

// Class RigVM.RigVMMemoryStorage
// Size: 0x30 (Inherited: 0x30)
struct URigVMMemoryStorage : UObject {
};

// Class RigVM.RigVMNativized
// Size: 0x2d8 (Inherited: 0x2b0)
struct URigVMNativized : URigVM {
	char pad_2B0[0x28]; // 0x2b0(0x28)
};

// Class RigVM.RigVMUserWorkflowOptions
// Size: 0xa8 (Inherited: 0x30)
struct URigVMUserWorkflowOptions : UObject {
	struct UObject* Subject; // 0x30(0x08)
	struct FRigVMUserWorkflow Workflow; // 0x38(0x60)
	char pad_98[0x10]; // 0x98(0x10)

	bool RequiresDialog(); // Function RigVM.RigVMUserWorkflowOptions.RequiresDialog // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74ff340
	void ReportWarning(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportWarning // (Final|Native|Public|BlueprintCallable) // @ game+0x74ff010
	void ReportInfo(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x74fee70
	void ReportError(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportError // (Final|Native|Public|BlueprintCallable) // @ game+0x74ff210
	bool IsValid(); // Function RigVM.RigVMUserWorkflowOptions.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74ff420
};

// Class RigVM.RigVMHost
// Size: 0x348 (Inherited: 0x30)
struct URigVMHost : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FRigVMRuntimeSettings VMRuntimeSettings; // 0x38(0x18)
	char pad_50[0x10]; // 0x50(0x10)
	struct URigVM* VM; // 0x60(0x08)
	struct FRigVMExtendedExecuteContext ExtendedExecuteContext; // 0x68(0x1c0)
	struct FRigVMDrawContainer DrawContainer; // 0x228(0x18)
	char pad_240[0x18]; // 0x240(0x18)
	struct TArray<struct FName> EventQueue; // 0x258(0x10)
	char pad_268[0x90]; // 0x268(0x90)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2f8(0x10)
	char pad_308[0x40]; // 0x308(0x40)

	bool SupportsEvent(struct FName& InEventName); // Function RigVM.RigVMHost.SupportsEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b04a0
	bool SetVariableFromString(struct FName& InVariableName, struct FString InValue); // Function RigVM.RigVMHost.SetVariableFromString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75b06d0
	void SetFramesPerSecond(float InFramesPerSecond); // Function RigVM.RigVMHost.SetFramesPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x75b0d00
	void SetDeltaTime(float InDeltaTime); // Function RigVM.RigVMHost.SetDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x59bb0f0
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Function RigVM.RigVMHost.SetAbsoluteTime // (Final|Native|Public|BlueprintCallable) // @ game+0x75b0f80
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x75b0df0
	void RequestRunOnceEvent(struct FName& InEventName, int32_t InEventIndex); // Function RigVM.RigVMHost.RequestRunOnceEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75b0130
	void RequestInit(); // Function RigVM.RigVMHost.RequestInit // (Native|Public|BlueprintCallable) // @ game+0x3d671f0
	bool RemoveRunOnceEvent(struct FName& InEventName); // Function RigVM.RigVMHost.RemoveRunOnceEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75b0020
	struct URigVM* GetVM(); // Function RigVM.RigVMHost.GetVM // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75affb0
	struct FName GetVariableType(struct FName& InVariableName); // Function RigVM.RigVMHost.GetVariableType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b09c0
	struct FString GetVariableAsString(struct FName& InVariableName); // Function RigVM.RigVMHost.GetVariableAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b08b0
	struct TArray<struct FName> GetSupportedEvents(); // Function RigVM.RigVMHost.GetSupportedEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b03e0
	struct TArray<struct FName> GetScriptAccessibleVariables(); // Function RigVM.RigVMHost.GetScriptAccessibleVariables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b0b20
	struct FRigVMExtendedExecuteContext GetExtendedExecuteContext(); // Function RigVM.RigVMHost.GetExtendedExecuteContext // (Native|Public|BlueprintCallable) // @ game+0x75aff70
	float GetDeltaTime(); // Function RigVM.RigVMHost.GetDeltaTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42d2800
	float GetCurrentFramesPerSecond(); // Function RigVM.RigVMHost.GetCurrentFramesPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75b0ca0
	float GetAbsoluteTime(); // Function RigVM.RigVMHost.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fa3280
	struct TArray<struct URigVMHost*> FindRigVMHosts(struct UObject* Outer, struct URigVMHost* OptionalClass); // Function RigVM.RigVMHost.FindRigVMHosts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75b1130
	bool ExecuteEvent(struct FName& InEventName); // Function RigVM.RigVMHost.ExecuteEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75b02e0
	bool Execute(struct FName& InEventName); // Function RigVM.RigVMHost.Execute // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75b05c0
	bool CanExecute(); // Function RigVM.RigVMHost.CanExecute // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bbbbf0
};

// Class RigVM.RigVMEditorSettings
// Size: 0x48 (Inherited: 0x48)
struct URigVMEditorSettings : UDeveloperSettings {
};


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

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x74290a0
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7428d50
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7428630
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x74293d0
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7428a10
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7429770
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7429ab0
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742a0f0
	void SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7429dc0
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742a410
	struct FRigVMStatistics GetStatistics(); // Function RigVM.RigVM.GetStatistics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74284a0
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Native|Public|Const) // @ game+0x742ba00
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x742ad60
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x742ab60
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x742a720
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742af40
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x742a970
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742b160
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742b340
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742b6a0
	double GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742b4f0
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742b850
	bool Execute(struct FRigVMExtendedExecuteContext& Context, struct FName& InEntryName); // Function RigVM.RigVM.Execute // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x742bd30
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Native|Public|HasOutParms) // @ game+0x742bb70
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

	void SetDataAsset(struct UDataAsset* InDataAsset); // Function RigVM.DataAssetLink.SetDataAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x74332b0
	struct UDataAsset* GetDataAsset(); // Function RigVM.DataAssetLink.GetDataAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5d70
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

	bool RequiresDialog(); // Function RigVM.RigVMUserWorkflowOptions.RequiresDialog // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x746ff90
	void ReportWarning(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportWarning // (Final|Native|Public|BlueprintCallable) // @ game+0x746fc60
	void ReportInfo(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x746fac0
	void ReportError(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportError // (Final|Native|Public|BlueprintCallable) // @ game+0x746fe60
	bool IsValid(); // Function RigVM.RigVMUserWorkflowOptions.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7470070
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

	bool SupportsEvent(struct FName& InEventName); // Function RigVM.RigVMHost.SupportsEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7521590
	bool SetVariableFromString(struct FName& InVariableName, struct FString InValue); // Function RigVM.RigVMHost.SetVariableFromString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75217c0
	void SetFramesPerSecond(float InFramesPerSecond); // Function RigVM.RigVMHost.SetFramesPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x7521df0
	void SetDeltaTime(float InDeltaTime); // Function RigVM.RigVMHost.SetDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x595b860
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Function RigVM.RigVMHost.SetAbsoluteTime // (Final|Native|Public|BlueprintCallable) // @ game+0x7522070
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x7521ee0
	void RequestRunOnceEvent(struct FName& InEventName, int32_t InEventIndex); // Function RigVM.RigVMHost.RequestRunOnceEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7521220
	void RequestInit(); // Function RigVM.RigVMHost.RequestInit // (Native|Public|BlueprintCallable) // @ game+0x3d188c0
	bool RemoveRunOnceEvent(struct FName& InEventName); // Function RigVM.RigVMHost.RemoveRunOnceEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7521110
	struct URigVM* GetVM(); // Function RigVM.RigVMHost.GetVM // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75210a0
	struct FName GetVariableType(struct FName& InVariableName); // Function RigVM.RigVMHost.GetVariableType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7521ab0
	struct FString GetVariableAsString(struct FName& InVariableName); // Function RigVM.RigVMHost.GetVariableAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75219a0
	struct TArray<struct FName> GetSupportedEvents(); // Function RigVM.RigVMHost.GetSupportedEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75214d0
	struct TArray<struct FName> GetScriptAccessibleVariables(); // Function RigVM.RigVMHost.GetScriptAccessibleVariables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7521c10
	struct FRigVMExtendedExecuteContext GetExtendedExecuteContext(); // Function RigVM.RigVMHost.GetExtendedExecuteContext // (Native|Public|BlueprintCallable) // @ game+0x7521060
	float GetDeltaTime(); // Function RigVM.RigVMHost.GetDeltaTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42822b0
	float GetCurrentFramesPerSecond(); // Function RigVM.RigVMHost.GetCurrentFramesPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7521d90
	float GetAbsoluteTime(); // Function RigVM.RigVMHost.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3f54410
	struct TArray<struct URigVMHost*> FindRigVMHosts(struct UObject* Outer, struct URigVMHost* OptionalClass); // Function RigVM.RigVMHost.FindRigVMHosts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7522220
	bool ExecuteEvent(struct FName& InEventName); // Function RigVM.RigVMHost.ExecuteEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75213d0
	bool Execute(struct FName& InEventName); // Function RigVM.RigVMHost.Execute // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75216b0
	bool CanExecute(); // Function RigVM.RigVMHost.CanExecute // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b6d630
};

// Class RigVM.RigVMEditorSettings
// Size: 0x48 (Inherited: 0x48)
struct URigVMEditorSettings : UDeveloperSettings {
};


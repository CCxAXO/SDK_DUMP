// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageCompatibilityInterface : UInterface {
};

// Class TypedElementFramework.TypedElementDataStorageFactory
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageFactory : UObject {
};

// Class TypedElementFramework.TypedElementDataStorageInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageInterface : UInterface {
};

// Class TypedElementFramework.TypedElementDataStorageUiInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementDataStorageUiInterface : UInterface {
};

// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementHandleLibrary : UObject {

	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x26ac750
	bool NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26ac350
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26ac880
	bool Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.Equal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26ac550
};

// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementListLibrary : UObject {

	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26aedb0
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26ae770
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26aeaa0
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x26ad920
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26aefe0
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26af1a0
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26af980
	bool HasElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26afef0
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26b01d0
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26af420
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26b0510
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26ae8b0
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26b0950
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26af6a0
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26afc60
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x26ae450
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26b07d0
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26adc00
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x26ade70
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x26ae170
};

// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementCounterInterface : UInterface {
};

// Class TypedElementFramework.TypedElementRegistry
// Size: 0x980 (Inherited: 0x30)
struct UTypedElementRegistry : UObject {
	char pad_30[0x950]; // 0x30(0x950)

	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26b30c0
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, struct UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26b2ee0
};

// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceA : UInterface {

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26b49b0
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26b4c60
};

// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceB : UInterface {

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26b4e80
};

// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x30 (Inherited: 0x30)
struct UTestTypedElementInterfaceC : UInterface {

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26b4e80
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x38 (Inherited: 0x30)
struct UTestTypedElementInterfaceA_ImplTyped : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x38 (Inherited: 0x30)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x40 (Inherited: 0x30)
struct UTestTypedElementInterfaceBAndC_Typed : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};


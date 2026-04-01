// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementSelectionSetLibrary : UObject {

	bool SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2708ff0
	bool SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2709510
	struct FScriptTypedElementListProxy GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2708e30
	struct FScriptTypedElementListProxy GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2708b60
	bool DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2709280
};

// Class TypedElementRuntime.TypedElementSelectionSet
// Size: 0x8a0 (Inherited: 0x30)
struct UTypedElementSelectionSet : UObject {
	char pad_30[0x800]; // 0x30(0x800)
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x830(0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x840(0x10)
	char pad_850[0x50]; // 0x850(0x50)

	bool SetSelection(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270a990
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270b0c0
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270b390
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270bcb0
	void OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b42740
	void OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b42740
	struct TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x270a360
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x270bae0
	bool HasSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x270c610
	bool HasSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x270ca00
	struct UObject* GetTopSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270c180
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x270a5e0
	struct TArray<struct UObject*> GetSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x270c2f0
	int32_t GetNumSelectedElements(); // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270cc40
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270be10
	struct UObject* GetBottomSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270c010
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270ac60
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x270ae90
	int32_t CountSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x270c450
	int32_t CountSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x270c7d0
	bool ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x270cc70
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x270b850
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x270b5c0
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x270a870
};

// Class TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementAssetDataInterface : UInterface {

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData // (RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27101c0
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2710450
};

// Class TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementHierarchyInterface : UInterface {

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2710cd0
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27109c0
};

// Class TypedElementRuntime.TypedElementObjectInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementObjectInterface : UInterface {

	struct UObject* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27112f0
	struct UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObject // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2711420
};

// Class TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementPrimitiveCustomDataInterface : UInterface {

	void SetCustomDataValue(struct FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Function TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomDataValue // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27117e0
	void SetCustomData(struct FScriptTypedElementHandle& InElementHandle, struct TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // Function TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomData // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2711af0
};

// Class TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementSelectionInterface : UInterface {

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2712db0
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2713440
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2712590
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2712ae0
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2713260
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2713080
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet); // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27128a0
};


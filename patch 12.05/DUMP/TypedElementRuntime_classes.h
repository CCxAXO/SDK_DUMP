// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementSelectionSetLibrary : UObject {

	bool SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26bb200
	bool SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26bb720
	struct FScriptTypedElementListProxy GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26bb040
	struct FScriptTypedElementListProxy GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x26bad70
	bool DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26bb490
};

// Class TypedElementRuntime.TypedElementSelectionSet
// Size: 0x8a0 (Inherited: 0x30)
struct UTypedElementSelectionSet : UObject {
	char pad_30[0x800]; // 0x30(0x800)
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x830(0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x840(0x10)
	char pad_850[0x50]; // 0x850(0x50)

	bool SetSelection(struct TArray<None>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bcba0
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bd2d0
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bd5a0
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bdec0
	void OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1af5410
	void OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1af5410
	struct TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x26bc570
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bdcf0
	bool HasSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x26be820
	bool HasSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x26bec10
	struct UObject* GetTopSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26be390
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bc7f0
	struct TArray<None> GetSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x26be500
	int32_t GetNumSelectedElements(); // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bee50
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26be020
	struct UObject* GetBottomSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26be220
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bce70
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26bd0a0
	int32_t CountSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x26be660
	int32_t CountSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x26be9e0
	bool ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x26bee80
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bda60
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bd7d0
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26bca80
};

// Class TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementAssetDataInterface : UInterface {

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData // (RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x26c23d0
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c2660
};

// Class TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementHierarchyInterface : UInterface {

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c2ee0
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c2bd0
};

// Class TypedElementRuntime.TypedElementObjectInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementObjectInterface : UInterface {

	struct UObject* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c3500
	struct UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObject // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c3630
};

// Class TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementPrimitiveCustomDataInterface : UInterface {

	void SetCustomDataValue(struct FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Function TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomDataValue // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c39f0
	void SetCustomData(struct FScriptTypedElementHandle& InElementHandle, struct TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // Function TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomData // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c3d00
};

// Class TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x30 (Inherited: 0x30)
struct UTypedElementSelectionInterface : UInterface {

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c4fc0
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c5650
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c47a0
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c4cf0
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c5470
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c5290
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet); // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26c4ab0
};


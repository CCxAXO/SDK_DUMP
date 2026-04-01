// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
// Size: 0x08 (Inherited: 0x00)
struct FScriptTypedElementHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
// Size: 0x01 (Inherited: 0x00)
struct FTypedElementDataStorageColumn {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TypedElementFramework.TypedElementUObjectColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementUObjectColumn : FTypedElementDataStorageColumn {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct TypedElementFramework.TypedElementExternalObjectColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementExternalObjectColumn : FTypedElementDataStorageColumn {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
// Size: 0x01 (Inherited: 0x00)
struct FTypedElementDataStorageTag {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
// Size: 0x10 (Inherited: 0x00)
struct FTypedElementWidgetConstructor {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TypedElementFramework.TypedElementLabelColumn
// Size: 0x10 (Inherited: 0x01)
struct FTypedElementLabelColumn : FTypedElementDataStorageColumn {
	struct FString Label; // 0x00(0x10)
};

// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementLabelHashColumn : FTypedElementDataStorageColumn {
	uint64_t LabelHash; // 0x00(0x08)
};

// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
// Size: 0x10 (Inherited: 0x00)
struct FScriptTypedElementListProxy {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
// Size: 0x01 (Inherited: 0x01)
struct FTypedElementSyncBackToWorldTag : FTypedElementDataStorageTag {
};

// ScriptStruct TypedElementFramework.TypedElementSyncFromWorldTag
// Size: 0x01 (Inherited: 0x01)
struct FTypedElementSyncFromWorldTag : FTypedElementDataStorageTag {
};

// ScriptStruct TypedElementFramework.TypedElementRowReferenceColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementRowReferenceColumn : FTypedElementDataStorageColumn {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
// Size: 0x10 (Inherited: 0x01)
struct FTypedElementPackagePathColumn : FTypedElementDataStorageColumn {
	struct FString Path; // 0x00(0x10)
};

// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
// Size: 0x10 (Inherited: 0x01)
struct FTypedElementPackageLoadedPathColumn : FTypedElementDataStorageColumn {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TypedElementFramework.TypedElementSelectionColumn
// Size: 0x01 (Inherited: 0x01)
struct FTypedElementSelectionColumn : FTypedElementDataStorageColumn {
};

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
// Size: 0x10 (Inherited: 0x01)
struct FTypedElementSlateWidgetReferenceColumn : FTypedElementDataStorageColumn {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
// Size: 0x01 (Inherited: 0x01)
struct FTypedElementSlateWidgetReferenceDeletesRowTag : FTypedElementDataStorageTag {
};

// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
// Size: 0x60 (Inherited: 0x01)
struct FTypedElementLocalTransformColumn : FTypedElementDataStorageColumn {
	struct FTransform Transform; // 0x00(0x60)
};

// ScriptStruct TypedElementFramework.TypedElementClassTypeInfoColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementClassTypeInfoColumn : FTypedElementDataStorageColumn {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct TypedElementFramework.TypedElementScriptStructTypeInfoColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementScriptStructTypeInfoColumn : FTypedElementDataStorageColumn {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
// Size: 0x04 (Inherited: 0x01)
struct FTypedElementU32IntValueCacheColumn : FTypedElementDataStorageColumn {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
// Size: 0x04 (Inherited: 0x01)
struct FTypedElementI32IntValueCacheColumn : FTypedElementDataStorageColumn {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct TypedElementFramework.TypedElementU64IntValueCacheColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementU64IntValueCacheColumn : FTypedElementDataStorageColumn {
	uint64_t Value; // 0x00(0x08)
};

// ScriptStruct TypedElementFramework.TypedElementI64IntValueCacheColumn
// Size: 0x08 (Inherited: 0x01)
struct FTypedElementI64IntValueCacheColumn : FTypedElementDataStorageColumn {
	int64_t Value; // 0x00(0x08)
};

// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
// Size: 0x04 (Inherited: 0x01)
struct FTypedElementFloatValueCacheColumn : FTypedElementDataStorageColumn {
	float Value; // 0x00(0x04)
};

// ScriptStruct TypedElementFramework.TypedElementViewportColorColumn
// Size: 0x01 (Inherited: 0x01)
struct FTypedElementViewportColorColumn : FTypedElementDataStorageColumn {
	char SelectionOutlineColorIndex; // 0x00(0x01)
};


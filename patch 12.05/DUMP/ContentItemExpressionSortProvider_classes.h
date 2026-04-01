// BlueprintGeneratedClass ContentItemExpressionSortProvider.ContentItemExpressionSortProvider_C
// Size: 0x50 (Inherited: 0x40)
struct UContentItemExpressionSortProvider_C : USortProviderBase_C {
	struct TArray<struct FActiveExpressionMapping> EquippedExpressions; // 0x40(0x10)

	void GetExpressionDataAssetInfo(struct FWildcard Wildcard, bool& IsValid, bool& IsNullSpray, int32_t& SortIndex); // Function ContentItemExpressionSortProvider.ContentItemExpressionSortProvider_C.GetExpressionDataAssetInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	enum class ESortOrder SortObjects(struct FWildcard ObjectA, struct FWildcard ObjectB); // Function ContentItemExpressionSortProvider.ContentItemExpressionSortProvider_C.SortObjects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


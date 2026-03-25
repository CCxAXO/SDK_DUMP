// Class RGIEngine.RGIActorUtilLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGIActorUtilLibrary : UBlueprintFunctionLibrary {

	struct AActor* GetTopActor(struct AActor* Owner); // Function RGIEngine.RGIActorUtilLibrary.GetTopActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55116a0
	struct AActor* FindOwnerActor(struct UObject* Obj); // Function RGIEngine.RGIActorUtilLibrary.FindOwnerActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5511790
};

// Class RGIEngine.RGIArrayLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGIArrayLibrary : UBlueprintFunctionLibrary {

	void StableSortObjectArrayByPredicate(struct UObject* WorldContextObject, struct TArray<struct UObject*>& ArrayToSort, struct FDelegate Predicate); // Function RGIEngine.RGIArrayLibrary.StableSortObjectArrayByPredicate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5511d30
	void SortStringArray(struct TArray<struct FString>& StringArray, bool Reversed, enum class ESearchCase SearchCase); // Function RGIEngine.RGIArrayLibrary.SortStringArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5511aa0
	void SortObjectArrayByPredicate(struct UObject* WorldContextObject, struct TArray<struct UObject*>& ArrayToSort, struct FDelegate Predicate); // Function RGIEngine.RGIArrayLibrary.SortObjectArrayByPredicate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5511ff0
};

// Class RGIEngine.RGICompositionLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGICompositionLibrary : UBlueprintFunctionLibrary {

	bool IsChildOfClass(struct UObject* Object, struct TSoftClassPtr<UObject> Class); // Function RGIEngine.RGICompositionLibrary.IsChildOfClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5512610
	bool HasDefaultComponent(struct AActor* ActorClass, struct UActorComponent* ComponentClass); // Function RGIEngine.RGICompositionLibrary.HasDefaultComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5512e20
	struct UActorComponent* GetFirstDefaultComponent(struct AActor* ActorClass, struct UActorComponent* ComponentClass); // Function RGIEngine.RGICompositionLibrary.GetFirstDefaultComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55133a0
	struct TArray<struct UActorComponent*> GetDefaultComponents(struct AActor* ActorClass, struct UActorComponent* ComponentClass); // Function RGIEngine.RGICompositionLibrary.GetDefaultComponents // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5512ff0
	struct UObject* GetClassDefaultObject(struct UObject* Class); // Function RGIEngine.RGICompositionLibrary.GetClassDefaultObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5513810
	struct UObject* FindOrLoadClassByName(struct FString ClassName, struct UObject* OuterObject, bool bWarnIfPackageLoaded); // Function RGIEngine.RGICompositionLibrary.FindOrLoadClassByName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55135a0
	struct UActorComponent* FindFirstComponentInOwnershipChain(struct AActor* Actor, struct UActorComponent* ComponentClass); // Function RGIEngine.RGICompositionLibrary.FindFirstComponentInOwnershipChain // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55131e0
	bool DoesObjectPassClassFilter(struct FClassInclusionExclusionFilter& Filter, struct UObject* TestObject); // Function RGIEngine.RGICompositionLibrary.DoesObjectPassClassFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5512a20
};


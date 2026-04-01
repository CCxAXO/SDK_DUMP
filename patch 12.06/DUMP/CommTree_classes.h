// WidgetBlueprintGeneratedClass CommTree.CommTree_C
// Size: 0x348 (Inherited: 0x318)
struct UCommTree_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* CommOptionsVBox; // 0x320(0x08)
	struct TArray<struct UCommTreeOption_C*> CommTreeOptions; // 0x328(0x10)
	struct FString TreeID; // 0x338(0x10)

	void BuildOptions(struct TArray<enum class NonVerbalCommTypesEnum>& CommTreeEnums); // Function CommTree.CommTree_C.BuildOptions // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommTree(int32_t EntryPoint); // Function CommTree.CommTree_C.ExecuteUbergraph_CommTree // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


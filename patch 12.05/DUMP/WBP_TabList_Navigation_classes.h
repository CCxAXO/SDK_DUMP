// WidgetBlueprintGeneratedClass WBP_TabList_Navigation.WBP_TabList_Navigation_C
// Size: 0x610 (Inherited: 0x5f1)
struct UWBP_TabList_Navigation_C : UWBP_TabList_Base_C {
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct TArray<enum class EUINavigationTabListPriority> TabListPriority; // 0x600(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.HandleTabCreation // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToTabListViewModel(bool bShouldBind); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.BindToTabListViewModel // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TabList_Navigation(int32_t EntryPoint); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.ExecuteUbergraph_WBP_TabList_Navigation // (Final|UbergraphFunction) // @ game+0x1af5410
};


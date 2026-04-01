// WidgetBlueprintGeneratedClass WBP_TabList_Navigation.WBP_TabList_Navigation_C
// Size: 0x618 (Inherited: 0x5f9)
struct UWBP_TabList_Navigation_C : UWBP_TabList_Base_C {
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct TArray<enum class EUINavigationTabListPriority> TabListPriority; // 0x608(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.HandleTabCreation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BindToTabListViewModel(bool bShouldBind); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.BindToTabListViewModel // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_TabList_Navigation(int32_t EntryPoint); // Function WBP_TabList_Navigation.WBP_TabList_Navigation_C.ExecuteUbergraph_WBP_TabList_Navigation // (Final|UbergraphFunction) // @ game+0x1b42740
};


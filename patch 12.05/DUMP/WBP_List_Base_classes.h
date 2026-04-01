// WidgetBlueprintGeneratedClass WBP_List_Base.WBP_List_Base_C
// Size: 0x630 (Inherited: 0x618)
struct UWBP_List_Base_C : UAresCommonListWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x618(0x08)
	struct TArray<struct UBaseHandle*> Handles; // 0x620(0x10)

	void BindToAresListViewModel(bool bShouldBind); // Function WBP_List_Base.WBP_List_Base_C.BindToAresListViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_List_Base.WBP_List_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_List_Base.WBP_List_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_List_Base.WBP_List_Base_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_List_Base.WBP_List_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_List_Base.WBP_List_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_List_Base(int32_t EntryPoint); // Function WBP_List_Base.WBP_List_Base_C.ExecuteUbergraph_WBP_List_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


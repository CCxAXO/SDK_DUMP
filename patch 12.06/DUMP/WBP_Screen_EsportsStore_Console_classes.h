// WidgetBlueprintGeneratedClass WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C
// Size: 0x550 (Inherited: 0x520)
struct UWBP_Screen_EsportsStore_Console_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* BG; // 0x528(0x08)
	struct UImage* Image_93; // 0x530(0x08)
	struct UTextBlock* Title; // 0x538(0x08)
	struct UWBP_Panel_StoreOffers_C* WBP_Panel_StoreOffers; // 0x540(0x08)
	struct UVM_EsportsStoreScreen_C* EsportsStoreScreenVM; // 0x548(0x08)

	void InitSortProvider(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.InitSortProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void Init View Models(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_EsportsStore_Console_WBP_Panel_StoreOffers_K2Node_ComponentBoundEvent_0_RegisterSortProvider__DelegateSignature(); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.BndEvt__WBP_Screen_EsportsStore_Console_WBP_Panel_StoreOffers_K2Node_ComponentBoundEvent_0_RegisterSortProvider__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_EsportsStore_Console(int32_t EntryPoint); // Function WBP_Screen_EsportsStore_Console.WBP_Screen_EsportsStore_Console_C.ExecuteUbergraph_WBP_Screen_EsportsStore_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


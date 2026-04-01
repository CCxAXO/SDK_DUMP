// WidgetBlueprintGeneratedClass WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_RemainingBalance_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonRichText* RemainingBalanceText; // 0x3e8(0x08)
	struct UVM_StoreOffer_C* OfferViewModel; // 0x3f0(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FRemainingBalanceInfo& RemainingBalance); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRemainingBalanceText(struct FRemainingBalanceInfo NewRemainingBalance); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.SetRemainingBalanceText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RemainingBalance(int32_t EntryPoint); // Function WBP_Panel_RemainingBalance.WBP_Panel_RemainingBalance_C.ExecuteUbergraph_WBP_Panel_RemainingBalance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


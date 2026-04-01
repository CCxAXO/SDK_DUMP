// WidgetBlueprintGeneratedClass WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C
// Size: 0x408 (Inherited: 0x400)
struct UWBP_Panel_AgentTokenBalance_C : UWBP_Panel_CurrencyAmount_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)

	void Handle on Currency Amount Updated(int32_t Amount); // Function WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C.Handle on Currency Amount Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCurrencyVM(bool Bind); // Function WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C.BindCurrencyVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle on Currency Text Updated(struct FText Amount); // Function WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C.Handle on Currency Text Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_AgentTokenBalance(int32_t EntryPoint); // Function WBP_Panel_AgentTokenBalance.WBP_Panel_AgentTokenBalance_C.ExecuteUbergraph_WBP_Panel_AgentTokenBalance // (Final|UbergraphFunction) // @ game+0x1b42740
};


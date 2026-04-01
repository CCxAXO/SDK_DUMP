// WidgetBlueprintGeneratedClass WBP_Screen_Battlepass.WBP_Screen_Battlepass_C
// Size: 0x538 (Inherited: 0x520)
struct UWBP_Screen_Battlepass_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Panel_Contract_Console_C* WBP_Panel_Contract_Console; // 0x528(0x08)
	struct UActiveContractsViewModel* ActiveContractsViewModel; // 0x530(0x08)

	bool BP_OnHandleBackAction(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnActivated(); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_Battlepass(int32_t EntryPoint); // Function WBP_Screen_Battlepass.WBP_Screen_Battlepass_C.ExecuteUbergraph_WBP_Screen_Battlepass // (Final|UbergraphFunction) // @ game+0x1b42740
};


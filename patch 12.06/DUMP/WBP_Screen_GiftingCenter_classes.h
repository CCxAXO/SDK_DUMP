// WidgetBlueprintGeneratedClass WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C
// Size: 0x540 (Inherited: 0x520)
struct UWBP_Screen_GiftingCenter_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Panel_GiftingCenter_C* WBP_Panel_GiftingCenter; // 0x528(0x08)
	struct UVM_Gifting_C* VM_Gifting; // 0x530(0x08)
	struct UVM_GiftingCenterScreen_C* VM_GiftingCenterScreen; // 0x538(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNextClicked(struct UCommonButtonBase* Button); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.HandleNextClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleGiftRecipientClicked(struct UCommonButtonBase* Button); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.HandleGiftRecipientClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_GiftingCenter(int32_t EntryPoint); // Function WBP_Screen_GiftingCenter.WBP_Screen_GiftingCenter_C.ExecuteUbergraph_WBP_Screen_GiftingCenter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


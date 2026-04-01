// WidgetBlueprintGeneratedClass WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C
// Size: 0x538 (Inherited: 0x520)
struct UWBP_Screen_SelectGiftRecipient_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Panel_GiftRecipient_C* WBP_Panel_GiftRecipient; // 0x528(0x08)
	struct UVM_SelectGiftRecipientScreen_C* VM_SelectGiftRecipientScreen; // 0x530(0x08)

	void HandleRecipientCandidateListUpdated(struct TArray<struct UGiftRecipientCandidateInfo*>& GiftRecipientCandidates); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.HandleRecipientCandidateListUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_SelectGiftRecipient(int32_t EntryPoint); // Function WBP_Screen_SelectGiftRecipient.WBP_Screen_SelectGiftRecipient_C.ExecuteUbergraph_WBP_Screen_SelectGiftRecipient // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


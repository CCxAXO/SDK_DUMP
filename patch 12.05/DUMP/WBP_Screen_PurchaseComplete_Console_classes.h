// WidgetBlueprintGeneratedClass WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C
// Size: 0x560 (Inherited: 0x520)
struct UWBP_Screen_PurchaseComplete_Console_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UOverlay* GiftingOfferPreview; // 0x528(0x08)
	struct UImage* IMG_BG_DiamondTexture_Side; // 0x530(0x08)
	struct UImage* IMG_BG_DiamondTexture_TopLeft; // 0x538(0x08)
	struct UWidgetSwitcher* PurchaseDetailsSwitcher; // 0x540(0x08)
	struct UWBP_Panel_GiftingOfferPreview_C* WBP_Panel_GiftingOfferPreview; // 0x548(0x08)
	struct UWBP_Panel_RewardDetails_C* WBP_Panel_RewardDetails; // 0x550(0x08)
	struct UVM_PurchaseCompleteScreen_C* VM_PurchaseCompleteScreen; // 0x558(0x08)

	bool IsWidgetActive(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void HandleBackButtonClickedPC(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.HandleBackButtonClickedPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Offer Or Reward List Changed(struct UOfferDTO* InOfferDTO, struct URewardModelList* InRewardList); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.Handle Offer Or Reward List Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void SetupCIACallbacks(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStackActivation(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnStackDeactivation(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeactivated(); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PurchaseComplete_Console(int32_t EntryPoint); // Function WBP_Screen_PurchaseComplete_Console.WBP_Screen_PurchaseComplete_Console_C.ExecuteUbergraph_WBP_Screen_PurchaseComplete_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


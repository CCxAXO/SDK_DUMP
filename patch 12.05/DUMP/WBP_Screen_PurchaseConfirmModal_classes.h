// WidgetBlueprintGeneratedClass WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C
// Size: 0x5b8 (Inherited: 0x520)
struct UWBP_Screen_PurchaseConfirmModal_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_CurrencyWallet_C* WBP_CurrencyWallet; // 0x528(0x08)
	struct UWBP_Panel_PurchaseConfirm_C* WBP_Panel_PurchaseConfirm_98; // 0x530(0x08)
	bool HasSufficientFunds; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FAresConditionalInputAction RefundPolicyAction; // 0x540(0x28)
	struct FAresConditionalInputAction TermsAndConditionsAction; // 0x568(0x28)
	struct FAresConditionalInputAction ScrollAction; // 0x590(0x28)

	bool IsWidgetActive(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void UpdateScrollConditionalInputActionActive(bool IsScrollable); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.UpdateScrollConditionalInputActionActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Conditional Input Action Actives(enum class EPurchaseState OrderState); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.Update Conditional Input Action Actives // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTermsAndConditionsPressed(struct FName ActionName); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.HandleTermsAndConditionsPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupCIACallbacks(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStackDeactivation(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStackActivation(); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PurchaseConfirmModal(int32_t EntryPoint); // Function WBP_Screen_PurchaseConfirmModal.WBP_Screen_PurchaseConfirmModal_C.ExecuteUbergraph_WBP_Screen_PurchaseConfirmModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


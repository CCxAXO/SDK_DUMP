// WidgetBlueprintGeneratedClass WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C
// Size: 0x5d8 (Inherited: 0x520)
struct UWBP_Screen_OfferDetails_Console_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Panel_RewardDetails_C* WBP_Panel_RewardDetails; // 0x528(0x08)
	struct FAresConditionalInputAction ManageUpgradesAction; // 0x530(0x28)
	struct FAresConditionalInputAction ModelViewerAction; // 0x558(0x28)
	struct UVM_OfferDetailsScreen_C* VM_OfferDetailScreen; // 0x580(0x08)
	struct TMap<struct FName, struct FWildcard> NavArgs; // 0x588(0x50)

	bool IsWidgetActive(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void HandleHideLockIconChanged(bool InHideLockIcon); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.HandleHideLockIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle OfferOrRewardListChange(struct UOfferDTO* InOfferDTO, struct URewardModelList* InRewardList); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.Handle OfferOrRewardListChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModel(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleModelViewerAction(struct FName ActionName); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.HandleModelViewerAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleManageUpgradesAction(struct FName ActionName); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.HandleManageUpgradesAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupCIACallbacks(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void BP_OnDeactivated(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStackDeactivation(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnActivated(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStackActivation(); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_OfferDetails_Console(int32_t EntryPoint); // Function WBP_Screen_OfferDetails_Console.WBP_Screen_OfferDetails_Console_C.ExecuteUbergraph_WBP_Screen_OfferDetails_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


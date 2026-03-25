// WidgetBlueprintGeneratedClass HUDMoneyReadout.HUDMoneyReadout_C
// Size: 0x398 (Inherited: 0x330)
struct UHUDMoneyReadout_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* FadeInRewards; // 0x338(0x08)
	struct UWidgetAnimation* FadeOutRewards; // 0x340(0x08)
	struct UTextBlock* CurrentPlayerMoneyText; // 0x348(0x08)
	struct UButton* HoverButton; // 0x350(0x08)
	struct UInvalidationBox* InvalidationBox_HudMoneyReadout; // 0x358(0x08)
	struct UVerticalBox* RewardsContainer; // 0x360(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x368(0x08)
	int32_t LastKnownMoneyTotal; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct AShooterPlayerState* ShooterPlayerState; // 0x378(0x08)
	int32_t MaxBankedMoney; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UMoneyManagementComponent* ViewedMoneyManager; // 0x388(0x08)
	struct UMoneyManagementComponent* OldMoneyManager; // 0x390(0x08)

	void UpdateVisibility(); // Function HUDMoneyReadout.HUDMoneyReadout_C.UpdateVisibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function HUDMoneyReadout.HUDMoneyReadout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateMoney(); // Function HUDMoneyReadout.HUDMoneyReadout_C.UpdateMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TrackedRewardsChanged_Event_1(); // Function HUDMoneyReadout.HUDMoneyReadout_C.TrackedRewardsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RewardEvent(); // Function HUDMoneyReadout.HUDMoneyReadout_C.RewardEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_2(); // Function HUDMoneyReadout.HUDMoneyReadout_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function HUDMoneyReadout.HUDMoneyReadout_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayRewards(struct TArray<struct FAresTrackedReward>& PriorRoundRewards); // Function HUDMoneyReadout.HUDMoneyReadout_C.DisplayRewards // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AnimateOut(); // Function HUDMoneyReadout.HUDMoneyReadout_C.AnimateOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function HUDMoneyReadout.HUDMoneyReadout_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function HUDMoneyReadout.HUDMoneyReadout_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void EnterRound(int32_t InRoundNumberBeginning); // Function HUDMoneyReadout.HUDMoneyReadout_C.EnterRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePreviousRoundRewardsFinalized(struct TArray<struct FAresTrackedReward>& PreviousRoundRewards); // Function HUDMoneyReadout.HUDMoneyReadout_C.HandlePreviousRoundRewardsFinalized // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerViewTargetModeChanged_Event(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function HUDMoneyReadout.HUDMoneyReadout_C.OnPlayerViewTargetModeChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ViewTargetChanged(struct AActor* NewViewTarget); // Function HUDMoneyReadout.HUDMoneyReadout_C.ViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMoneyUpdated_Event_1(); // Function HUDMoneyReadout.HUDMoneyReadout_C.OnMoneyUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMoneyInternal(); // Function HUDMoneyReadout.HUDMoneyReadout_C.UpdateMoneyInternal // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoundRestoreComplete(int32_t NewRoundNumber); // Function HUDMoneyReadout.HUDMoneyReadout_C.OnRoundRestoreComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated_Event(); // Function HUDMoneyReadout.HUDMoneyReadout_C.OnCinematicModeUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function HUDMoneyReadout.HUDMoneyReadout_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HUDMoneyReadout(int32_t EntryPoint); // Function HUDMoneyReadout.HUDMoneyReadout_C.ExecuteUbergraph_HUDMoneyReadout // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


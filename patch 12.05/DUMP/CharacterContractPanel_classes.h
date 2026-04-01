// WidgetBlueprintGeneratedClass CharacterContractPanel.CharacterContractPanel_C
// Size: 0x390 (Inherited: 0x318)
struct UCharacterContractPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHelpFlyout_C* HelpFlyout; // 0x320(0x08)
	struct USizeBox* RecruitBox; // 0x328(0x08)
	struct USharedButtonMaster_C* SharedRecruitButton; // 0x330(0x08)
	struct USharedButtonMaster_C* SharedViewButton; // 0x338(0x08)
	struct USpacer* Spacer_329; // 0x340(0x08)
	struct UScaleBox* UnlockedBySubBox; // 0x348(0x08)
	struct UUnlockedSubscriptionPanel_C* UnlockedSubscriptionPanel; // 0x350(0x08)
	struct USizeBox* ViewContractsBox; // 0x358(0x08)
	struct UContractsViewController* ContractsViewController; // 0x360(0x08)
	struct UContractViewModel* ContractViewModel; // 0x368(0x08)
	struct UCharacterHandle* Character; // 0x370(0x08)
	bool AresNavBarData; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FMulticastInlineDelegate OnContractDetailsRequested; // 0x380(0x10)

	void IsFeaturedAgentSelected(bool& bFeaturedAgentSelected); // Function CharacterContractPanel.CharacterContractPanel_C.IsFeaturedAgentSelected // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Is Agent Only Available Soon(bool& AvailableSoon); // Function CharacterContractPanel.CharacterContractPanel_C.Is Agent Only Available Soon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleCharacterStatusChanged(); // Function CharacterContractPanel.CharacterContractPanel_C.HandleCharacterStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFlyoutTutorial(); // Function CharacterContractPanel.CharacterContractPanel_C.UpdateFlyoutTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestShowContractDetails(struct UContractViewModel* ContractViewModel); // Function CharacterContractPanel.CharacterContractPanel_C.RequestShowContractDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	int32_t GetRecruitmentBalance(); // Function CharacterContractPanel.CharacterContractPanel_C.GetRecruitmentBalance // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWalletChanged(); // Function CharacterContractPanel.CharacterContractPanel_C.HandleWalletChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsCompleteChanged(bool NewParam); // Function CharacterContractPanel.CharacterContractPanel_C.HandleIsCompleteChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleProgressChanged(float NewParam); // Function CharacterContractPanel.CharacterContractPanel_C.HandleProgressChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsCharacterRecruitable(bool& IsRecruitable); // Function CharacterContractPanel.CharacterContractPanel_C.IsCharacterRecruitable // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Does Player Have Recruitment Tokens(bool& HasTokens); // Function CharacterContractPanel.CharacterContractPanel_C.Does Player Have Recruitment Tokens // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateViewButton(); // Function CharacterContractPanel.CharacterContractPanel_C.UpdateViewButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSubscriptionPanel(); // Function CharacterContractPanel.CharacterContractPanel_C.UpdateSubscriptionPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacter(struct UCharacterHandle* Character Handle); // Function CharacterContractPanel.CharacterContractPanel_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Recruit Button(); // Function CharacterContractPanel.CharacterContractPanel_C.Update Recruit Button // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UContractsViewController* ContractsViewController); // Function CharacterContractPanel.CharacterContractPanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CharacterContractPanel.CharacterContractPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedActivateRecruitButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CharacterContractPanel.CharacterContractPanel_C.BndEvt__SharedActivateRecruitButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedViewButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function CharacterContractPanel.CharacterContractPanel_C.BndEvt__SharedViewButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterContractPanel(int32_t EntryPoint); // Function CharacterContractPanel.CharacterContractPanel_C.ExecuteUbergraph_CharacterContractPanel // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnContractDetailsRequested__DelegateSignature(struct UContractViewModel* ContractViewModel); // Function CharacterContractPanel.CharacterContractPanel_C.OnContractDetailsRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


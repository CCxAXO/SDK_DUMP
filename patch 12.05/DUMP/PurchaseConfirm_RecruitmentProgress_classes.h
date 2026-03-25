// WidgetBlueprintGeneratedClass PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C
// Size: 0x348 (Inherited: 0x318)
struct UPurchaseConfirm_RecruitmentProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x320(0x08)
	struct UTextBlock* HeaderText; // 0x328(0x08)
	struct UProgressBar* ProgressBar; // 0x330(0x08)
	struct UTextBlock* ProgressText; // 0x338(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x340(0x08)

	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitExpirationTimer(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.InitExpirationTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitEvent(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.InitEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.OnIsOwnedChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimerExpired(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.OnTimerExpired // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleRecruitmentEventUpdated(); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.HandleRecruitmentEventUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseConfirm_RecruitmentProgress(int32_t EntryPoint); // Function PurchaseConfirm_RecruitmentProgress.PurchaseConfirm_RecruitmentProgress_C.ExecuteUbergraph_PurchaseConfirm_RecruitmentProgress // (Final|UbergraphFunction) // @ game+0x1af5410
};


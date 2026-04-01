// WidgetBlueprintGeneratedClass EOGRecruitmentProgress.EOGRecruitmentProgress_C
// Size: 0x408 (Inherited: 0x318)
struct UEOGRecruitmentProgress_C : UEOGRecruitmentProgress_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* EventIconSwitcher; // 0x320(0x08)
	struct UWidgetSwitcher* EventProgressBarSwitcher; // 0x328(0x08)
	struct UProgressBar* ProgressBar; // 0x330(0x08)
	struct UTextBlock* ProgressText; // 0x338(0x08)
	struct UTextBlock* RecruitmentEventDisplayName; // 0x340(0x08)
	struct UTextBlock* RecruitmentEventHeaderText; // 0x348(0x08)
	struct UVerticalBox* RewardsContainer; // 0x350(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x358(0x08)
	struct UTextBlock* UnlockAgentText; // 0x360(0x08)
	struct UWBP_Panel_AgentBackground_C* WBP_Panel_AgentBackground; // 0x368(0x08)
	struct URecruitmentEventEOGViewModel* RecruitmentProgressEOGViewModel; // 0x370(0x08)
	struct UCharacterDataAsset* CharacterDataAsset; // 0x378(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x380(0x08)
	struct FDateTime AnimatingSince; // 0x388(0x08)
	struct FDateTime AnimatingUntil; // 0x390(0x08)
	bool IsAnimating; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UCharacterUIData* CharacterUIData; // 0x3a0(0x08)
	struct TMap<struct UAresBasePrimaryDataAsset*, int32_t> RewardAmounts; // 0x3a8(0x50)
	struct FString AllCapsAgentName; // 0x3f8(0x10)

	void Update Unlock Agent Text(int32_t Total XP); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.Update Unlock Agent Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show End State(); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.Show End State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.HandleCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickAnimation(); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(struct FTimespan Duration); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.AnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct URecruitmentEventEOGViewModel* RecruitmentEventEOGViewModel); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRecruitmentEventProgress(int32_t CurrentProgress); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.UpdateRecruitmentEventProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUnlockAgentText(struct FText UnlockAgentText); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.SetUnlockAgentText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRecruitmentEventHeaderText(struct FText HeaderText); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.SetRecruitmentEventHeaderText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRecruitmentEventDisplayName(struct FText DisplayName); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.SetRecruitmentEventDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearRewardWidgets(); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.ClearRewardWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddRewardWidget(struct UEOGContractReward_C* EOGContractReward); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.AddRewardWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EOGRecruitmentProgress(int32_t EntryPoint); // Function EOGRecruitmentProgress.EOGRecruitmentProgress_C.ExecuteUbergraph_EOGRecruitmentProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


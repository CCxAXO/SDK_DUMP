// WidgetBlueprintGeneratedClass EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C
// Size: 0x318 (Inherited: 0x318)
struct UEOGRecruitmentProgress_Base_C : UUserWidget {

	void Reset(); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show End State(); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.Show End State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.HandleCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickAnimation(); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(struct FTimespan Duration); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.AnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct URecruitmentEventEOGViewModel* RecruitmentEventEOGViewModel); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRecruitmentEventProgress(int32_t CurrentProgress); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.UpdateRecruitmentEventProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUnlockAgentText(struct FText UnlockAgentText); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.SetUnlockAgentText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRecruitmentEventHeaderText(struct FText HeaderText); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.SetRecruitmentEventHeaderText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRecruitmentEventDisplayName(struct FText DisplayName); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.SetRecruitmentEventDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearRewardWidgets(); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.ClearRewardWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddRewardWidget(struct UEOGContractReward_C* EOGContractReward); // Function EOGRecruitmentProgress_Base.EOGRecruitmentProgress_Base_C.AddRewardWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


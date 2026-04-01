// WidgetBlueprintGeneratedClass WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C
// Size: 0x1b30 (Inherited: 0x1ae0)
struct UWBP_Panel_EventPassHomescreenBanner_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* ReleaseAnim; // 0x1ae8(0x08)
	struct UWidgetAnimation* PressAnim; // 0x1af0(0x08)
	struct UAresCommonText* EventPassTitle; // 0x1af8(0x08)
	struct UImage* KeyArtLeft; // 0x1b00(0x08)
	struct UImage* KeyArtRight; // 0x1b08(0x08)
	struct UWBP_ProgressBar_MilestoneSegmented_C* WBP_ProgressBar_MilestoneSegmented; // 0x1b10(0x08)
	struct UActiveContractsViewModel* ActiveContractsViewModel; // 0x1b18(0x08)
	struct UVM_ContractState_C* VM_ContractState; // 0x1b20(0x08)
	struct UVM_ContractUIData_C* VM_ContractUIData; // 0x1b28(0x08)

	void UpdateMilestones(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.UpdateMilestones // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCurrentChapterCompletionChanged(double Current Chapter Completion); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.HandleCurrentChapterCompletionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Is Completed Changed(bool IsCompleted); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.Handle Is Completed Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleActiveEventpassChanged(struct UContractViewModel* ActiveEventpassContract); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.HandleActiveEventpassChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCurrentLevelChanged(int32_t CurrentLevel); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.HandleCurrentLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNumLevelsChanged(int32_t NewNumLevels); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.HandleNumLevelsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEventTitleChanged(struct FText Title); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.HandleEventTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Banner Clicked(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.Handle Banner Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EventPassHomescreenBanner(int32_t EntryPoint); // Function WBP_Panel_EventPassHomescreenBanner.WBP_Panel_EventPassHomescreenBanner_C.ExecuteUbergraph_WBP_Panel_EventPassHomescreenBanner // (Final|UbergraphFunction) // @ game+0x1b42740
};


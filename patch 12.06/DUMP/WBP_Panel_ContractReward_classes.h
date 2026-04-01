// WidgetBlueprintGeneratedClass WBP_Panel_ContractReward.WBP_Panel_ContractReward_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_ContractReward_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UCommonBorder* ContentBanner; // 0x3e8(0x08)
	struct UTextBlock* TierText; // 0x3f0(0x08)
	struct UWBP_ProgressBar_Material_C* WBP_ProgressBar_Material; // 0x3f8(0x08)
	struct UWBP_View_ContractItemDisplay_C* WBP_View_ContractItemDisplay; // 0x400(0x08)
	struct UVM_ContractLevel_C* VM_Level; // 0x408(0x08)
	struct UMaterialInstanceDynamic* MI_ProgressBar; // 0x410(0x08)
	struct UMaterialInstanceDynamic* ProgressBar_MI; // 0x418(0x08)
	struct UVM_ContractState_C* VM_ContractState; // 0x420(0x08)
	struct FMulticastInlineDelegate OnChildButtonClicked; // 0x428(0x10)
	struct UContractLevelViewModel* ListItemObject; // 0x438(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVM_ContractState(struct UVM_ContractState_C* NewVMContractState); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.SetVM_ContractState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindContractStateEvents(bool Bind); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BindContractStateEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeObject(struct UObject* Object); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.InitializeObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelProgressChanged(double LevelProgress); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.HandleLevelProgressChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelTextChanged(struct FText LevelText); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.HandleLevelTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindLevelEvents(bool Bind); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BindLevelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVMLevel(struct UVM_ContractLevel_C* VM Level); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.SetVMLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ContractReward_WBP_View_ContractItemDisplay_K2Node_ComponentBoundEvent_0_OnChildButtonClicked__DelegateSignature(struct UObject* Item); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BndEvt__WBP_Panel_ContractReward_WBP_View_ContractItemDisplay_K2Node_ComponentBoundEvent_0_OnChildButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContractReward(int32_t EntryPoint); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.ExecuteUbergraph_WBP_Panel_ContractReward // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnChildButtonClicked__DelegateSignature(struct UObject* Item); // Function WBP_Panel_ContractReward.WBP_Panel_ContractReward_C.OnChildButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


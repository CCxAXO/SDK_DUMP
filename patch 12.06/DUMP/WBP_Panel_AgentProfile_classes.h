// WidgetBlueprintGeneratedClass WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_AgentProfile_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAgentProfileViewModel* AgentProfileViewModel; // 0x3e8(0x08)
	struct UWBP_Button_SecondaryCTA_C* AgentProfilePanel; // 0x3f0(0x08)
	struct UImage* DangerIcon; // 0x3f8(0x08)
	struct UWBP_Button_Icon_Primary_C* ModifyButton; // 0x400(0x08)
	struct UTexture2D* Default Icon; // 0x408(0x08)
	struct FText Default Display Name; // 0x410(0x18)
	bool bCanCreateProfile; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UCharacterDataAsset* Default Character Data; // 0x430(0x08)
	struct UCharacterHandle* ListItemObjectAsCharacterHandle; // 0x438(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Is Creating Profile Changed(bool bInIsCreatingNewProfile); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.On Is Creating Profile Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToSettings(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BindToSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectedStateFromNewAgent(struct FName NewSelectedAgent); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.UpdateSelectedStateFromNewAgent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDoesProfileExistChanged(bool NewValue); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.OnDoesProfileExistChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToViewModel(bool bShouldBind); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BindToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	enum class ESlateVisibility __c041acd3-4f27-552c-850c-e5b2dceac2ae_SourceToDest(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.__c041acd3-4f27-552c-850c-e5b2dceac2ae_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetDefaults(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.SetDefaults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTooltipWidgets(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.InitializeTooltipWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AgentProfile_ModifyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BndEvt__WBP_Panel_AgentProfile_ModifyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AgentProfile_AgentProfilePanel_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.BndEvt__WBP_Panel_AgentProfile_AgentProfilePanel_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_AgentProfile(int32_t EntryPoint); // Function WBP_Panel_AgentProfile.WBP_Panel_AgentProfile_C.ExecuteUbergraph_WBP_Panel_AgentProfile // (Final|UbergraphFunction) // @ game+0x1b42740
};


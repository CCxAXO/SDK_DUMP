// WidgetBlueprintGeneratedClass WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_SettingProfilesDisplay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USettingProfilesDisplayViewModel* SettingProfilesDisplayViewModel; // 0x3e8(0x08)
	struct UWBP_Button_Ghost_C* BeginProfileCreationButton_Ghost; // 0x3f0(0x08)
	struct UWBP_Input_TextBox_C* SearchBar; // 0x3f8(0x08)
	struct UUniversalHorizontalDivider04_C* UniversalHorizontalDivider04; // 0x400(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x408(0x08)
	struct UWBP_Panel_AgentProfile_C* WBP_Panel_AgentProfile; // 0x410(0x08)
	struct UFP_AgentProfiles_C* SearchFilterProvider; // 0x418(0x08)

	void BindToViewModel(bool bShouldBind); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.BindToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAgentProfileAddedOrRemoved(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.OnAgentProfileAddedOrRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateActiveFilterIndicator(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.UpdateActiveFilterIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFilterChanged(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.OnFilterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitSearchFilter(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.InitSearchFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize Providers(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.Initialize Providers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsCreatingNewAgentProfileChanged(bool IsAddingAgent); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.OnIsCreatingNewAgentProfileChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SettingProfilesDisplay_SearchBar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.BndEvt__WBP_Panel_SettingProfilesDisplay_SearchBar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SettingProfilesDisplay_BeginProfileCreationButton_Ghost_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.BndEvt__WBP_Panel_SettingProfilesDisplay_BeginProfileCreationButton_Ghost_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SettingProfilesDisplay(int32_t EntryPoint); // Function WBP_Panel_SettingProfilesDisplay.WBP_Panel_SettingProfilesDisplay_C.ExecuteUbergraph_WBP_Panel_SettingProfilesDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


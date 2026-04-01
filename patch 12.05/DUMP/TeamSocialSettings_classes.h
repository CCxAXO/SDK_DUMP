// WidgetBlueprintGeneratedClass TeamSocialSettings.TeamSocialSettings_C
// Size: 0x419 (Inherited: 0x408)
struct UTeamSocialSettings_C : UWBP_TeamSocialSettings_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UGridPanel* GridPanel_Headings; // 0x410(0x08)
	bool DesignTime_ShowBlockButton; // 0x418(0x01)

	void SetHeadingsSize(bool ShowBlockButton); // Function TeamSocialSettings.TeamSocialSettings_C.SetHeadingsSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreatePlayerWidget(bool IsAlly, struct AShooterPlayerState* PlayerState, struct UWBP_IndividualSocialSettings_Base_C*& CreatedWidget); // Function TeamSocialSettings.TeamSocialSettings_C.CreatePlayerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function TeamSocialSettings.TeamSocialSettings_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RemakeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function TeamSocialSettings.TeamSocialSettings_C.BndEvt__RemakeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TimeoutButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function TeamSocialSettings.TeamSocialSettings_C.BndEvt__TimeoutButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TeamSocialSettings.TeamSocialSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TeamSocialSettings.TeamSocialSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TeamSocialSettings(int32_t EntryPoint); // Function TeamSocialSettings.TeamSocialSettings_C.ExecuteUbergraph_TeamSocialSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C
// Size: 0x658 (Inherited: 0x608)
struct UWBP_Screen_SettingsLanding_PC_C : UWBP_Screen_Landing_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x610(0x08)
	struct UImage* Img_Background; // 0x618(0x08)
	struct USocialPanelPicker_C* SocialPanelPicker; // 0x620(0x08)
	struct UWBP_Panel_ConflictWarning_C* WBP_Panel_ConflictWarning; // 0x628(0x08)
	struct UWBP_Panel_CrosshairBarWrapper_C* WBP_Panel_CrosshairBarWrapper; // 0x630(0x08)
	struct UWBP_Panel_SettingProfilesDisplay_C* WBP_Panel_SettingProfilesDisplay; // 0x638(0x08)
	struct UWBP_Panel_SettingsFooter_C* WBP_Panel_SettingsFooter; // 0x640(0x08)
	struct UWBP_TabList_NavigationSettings_C* WBP_TabList_NavigationSettings_148; // 0x648(0x08)
	struct USettingsScreenViewModel* LandingScreenViewModelPC; // 0x650(0x08)

	void BroadcastInGameOptionsMenuState(bool bOpened); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.BroadcastInGameOptionsMenuState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleShowSocialMenuChanged(bool bShowSocialPanel); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.HandleShowSocialMenuChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleUpdatedElementVisibilities(struct FSettingsScreenElementVisibilities& NewVisibilities); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.HandleUpdatedElementVisibilities // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShowProfileChooserChanged(bool bShouldDisplay); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.OnShowProfileChooserChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPCLandingScreenViewModel(bool bShouldBind); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.BindToPCLandingScreenViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToLandingViewModel(bool ShouldBind); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.BindToLandingViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeactivated(); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_SettingsLanding_PC(int32_t EntryPoint); // Function WBP_Screen_SettingsLanding_PC.WBP_Screen_SettingsLanding_PC_C.ExecuteUbergraph_WBP_Screen_SettingsLanding_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};


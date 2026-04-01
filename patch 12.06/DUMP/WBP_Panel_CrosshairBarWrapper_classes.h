// WidgetBlueprintGeneratedClass WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_CrosshairBarWrapper_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UCrosshairDashboardViewModel* CrosshairDashboardViewModel; // 0x3e8(0x08)
	struct UCrosshair_ProfilesBar_C* Crosshair_ProfilesBar; // 0x3f0(0x08)
	struct UImage* CrosshairBG; // 0x3f8(0x08)
	struct UCrosshairPreviewCardWidget_C* CrosshairPreviewCardWidget; // 0x400(0x08)
	struct UCrosshairPreviewCardWidget_ADS_C* CrosshairPreviewCardWidget_ADS; // 0x408(0x08)
	struct UCrosshairPreviewCardWidget_SniperScope_C* CrosshairPreviewCardWidget_SniperScope; // 0x410(0x08)
	struct UWBP_Button_Ghost_C* ImportPrimarySettings; // 0x418(0x08)
	struct UHorizontalBox* MisalignedTooltipBox; // 0x420(0x08)
	struct UWBP_Button_Ghost_C* ResetToDefault; // 0x428(0x08)
	struct UWBP_Panel_SettingButtonList_C* WBP_Panel_SettingButtonList; // 0x430(0x08)

	void SetScreenElementVisibilities(struct FSettingsScreenElementVisibilities Element Visibilities); // Function WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C.SetScreenElementVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_CrosshairBarWrapper_ImportPrimarySettings_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C.BndEvt__WBP_Panel_CrosshairBarWrapper_ImportPrimarySettings_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_CrosshairBarWrapper_ResetToDefault_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C.BndEvt__WBP_Panel_CrosshairBarWrapper_ResetToDefault_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CrosshairBarWrapper(int32_t EntryPoint); // Function WBP_Panel_CrosshairBarWrapper.WBP_Panel_CrosshairBarWrapper_C.ExecuteUbergraph_WBP_Panel_CrosshairBarWrapper // (Final|UbergraphFunction) // @ game+0x1b42740
};


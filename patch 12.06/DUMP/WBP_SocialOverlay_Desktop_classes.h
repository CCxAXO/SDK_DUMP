// WidgetBlueprintGeneratedClass WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C
// Size: 0x500 (Inherited: 0x4d0)
struct UWBP_SocialOverlay_Desktop_C : USocialOverlay_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UWBP_BackgroundDimmer_Standard_C* BackgroundDimmer; // 0x4d8(0x08)
	struct UWBP_Button_Basic_C* Button_Close; // 0x4e0(0x08)
	struct UOverlay* Overlay_Root; // 0x4e8(0x08)
	struct UWBP_SocialPanel_Desktop_C* WBP_SocialPanel_Desktop; // 0x4f0(0x08)
	struct UBP_SocialExperienceEventAudioPlayer_C* EventAudioPlayer; // 0x4f8(0x08)

	bool BP_OnHandleBackAction(); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnLatestTransitionChanged(struct FSocialExperienceTransition InTransition); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.OnLatestTransitionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SocialOverlay_Console_SocialBackgroundDimmer_Console_K2Node_ComponentBoundEvent_0_OnDimmerPressed__DelegateSignature(); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.BndEvt__SocialOverlay_Console_SocialBackgroundDimmer_Console_K2Node_ComponentBoundEvent_0_OnDimmerPressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_SocialOverlay_Console_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.BndEvt__WBP_SocialOverlay_Console_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_SocialOverlay_Desktop(int32_t EntryPoint); // Function WBP_SocialOverlay_Desktop.WBP_SocialOverlay_Desktop_C.ExecuteUbergraph_WBP_SocialOverlay_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


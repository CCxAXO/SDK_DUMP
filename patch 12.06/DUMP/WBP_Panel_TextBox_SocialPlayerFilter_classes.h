// WidgetBlueprintGeneratedClass WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_TextBox_SocialPlayerFilter_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct UAresSocialPlayerFilterStringViewModel* AresSocialPlayerFilterStringViewModel; // 0x3f0(0x08)
	struct UWBP_EditableTextBox_C* WBP_EditableTextBox; // 0x3f8(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerFilterStringChanged(struct FString InPlayerFilterString); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.OnPlayerFilterStringChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerFilterIsEnabledChanged(bool bIsEnabled); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.OnPlayerFilterIsEnabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialFilterTextBox_Console_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.BndEvt__WBP_Panel_SocialFilterTextBox_Console_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialFilterTextBox_Console_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_1_OnTextCleared__DelegateSignature(); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.BndEvt__WBP_Panel_SocialFilterTextBox_Console_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_1_OnTextCleared__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnOpenInterpolationChanged(double OpenInterpolation); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.OnOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TextBox_SocialPlayerFilter(int32_t EntryPoint); // Function WBP_Panel_TextBox_SocialPlayerFilter.WBP_Panel_TextBox_SocialPlayerFilter_C.ExecuteUbergraph_WBP_Panel_TextBox_SocialPlayerFilter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


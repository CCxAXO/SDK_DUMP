// WidgetBlueprintGeneratedClass PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C
// Size: 0x3f8 (Inherited: 0x331)
struct UPartyAccessibilitySettings_PC_C : UPartyAccessibilitySettings_Base_C {
	char pad_331[0x7]; // 0x331(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x340(0x08)
	struct UButton* AccessibilityButton; // 0x348(0x08)
	struct UTextBlock* AccessibilityDescription; // 0x350(0x08)
	struct USizeBox* AccessibilitySettingsSizeBox; // 0x358(0x08)
	struct UImage* Color_Background; // 0x360(0x08)
	struct UImage* Color_Slider; // 0x368(0x08)
	struct UImage* Party_Icon; // 0x370(0x08)
	struct UImage* Party_Icon_2; // 0x378(0x08)
	struct UImage* PartyBackground_Image; // 0x380(0x08)
	struct USizeBox* SizeBox_PartyCodeButton; // 0x388(0x08)
	struct USocialPartyCodeButton_C* SocialPartyCodeButton; // 0x390(0x08)
	struct UXPBoostsIndicator_C* XPBoostsIndicator; // 0x398(0x08)
	struct FLinearColor Open_BgColor; // 0x3a0(0x10)
	struct FLinearColor Open_SliderColor; // 0x3b0(0x10)
	struct FLinearColor Closed_BgColor; // 0x3c0(0x10)
	struct FLinearColor Closed_SliderColor; // 0x3d0(0x10)
	bool IsDisplayingOpen; // 0x3e0(0x01)
	bool IsCustom; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct UAkAudioEvent* AUD_OnButtonEntered; // 0x3e8(0x08)
	struct FSlateChildSize PartyCodeSize; // 0x3f0(0x08)

	void ShowPartyCodeButton(); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.ShowPartyCodeButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePremiumContractXPIcon(enum class EPartyViewState PartyState); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.UpdatePremiumContractXPIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSocialXPIndicator(enum class ESocialXPState SocialXPState); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.UpdateSocialXPIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSlider(bool ShouldOpen); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.UpdateSlider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AccessibilityButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.BndEvt__AccessibilityButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyAccessibilitySettings_PC_AccessibilityButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.BndEvt__PartyAccessibilitySettings_PC_AccessibilityButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyAccessibilitySettings_PC(int32_t EntryPoint); // Function PartyAccessibilitySettings_PC.PartyAccessibilitySettings_PC_C.ExecuteUbergraph_PartyAccessibilitySettings_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};


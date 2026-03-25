// WidgetBlueprintGeneratedClass WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C
// Size: 0x1b4c (Inherited: 0x1ae0)
struct UWBP_Button_SocialTrigger_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Anim_InputPulse; // 0x1ae8(0x08)
	struct UImage* Image_Pulse_1; // 0x1af0(0x08)
	struct UImage* Image_Pulse_2; // 0x1af8(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x1b00(0x08)
	struct USizeBox* SizeBox_InputAction; // 0x1b08(0x08)
	struct UWBP_SocialNotificationBorder_C* WBP_SocialNotificationBorder; // 0x1b10(0x08)
	struct FSlateColor PartyColor; // 0x1b18(0x14)
	char pad_1B2C[0x4]; // 0x1b2c(0x04)
	double PulseAnimationSpeed; // 0x1b30(0x08)
	struct FSlateColor FriendColor; // 0x1b38(0x14)

	void SetPulseColor(struct FSlateColor TintColor); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.SetPulseColor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayPulseAnimation(bool bLoop, bool bResetIfPlaying); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.PlayPulseAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayBorderAnimation(struct FSlateColor Color); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.PlayBorderAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayPartyNotificationAnimation(); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.PlayPartyNotificationAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayFriendNotificationAnimation(); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.PlayFriendNotificationAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopNotificationAnimation(); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.StopNotificationAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_SocialTrigger(int32_t EntryPoint); // Function WBP_Button_SocialTrigger.WBP_Button_SocialTrigger_C.ExecuteUbergraph_WBP_Button_SocialTrigger // (Final|UbergraphFunction) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C
// Size: 0x550 (Inherited: 0x520)
struct UWBP_Screen_VoiceChatSettings_Desktop_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct USharedButtonText1_C* CloseButton; // 0x528(0x08)
	struct USharedButtonText1_C* GoToSettingsButton; // 0x530(0x08)
	struct UActionBindingWidget_C* PartyPushToTalkBinding; // 0x538(0x08)
	struct UActionBindingWidget_C* TeamPushToTalkBinding; // 0x540(0x08)
	struct USettingsScreen* SettingsScreenClass; // 0x548(0x08)

	void Close Self(); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.Close Self // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSettingsScreenClass(); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.SetSettingsScreenClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateSettingsScreen(struct USettingsScreen*& SettingScreen); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.CreateSettingsScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GoToSettingsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.BndEvt__GoToSettingsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_VoiceChatSettings_Desktop(int32_t EntryPoint); // Function WBP_Screen_VoiceChatSettings_Desktop.WBP_Screen_VoiceChatSettings_Desktop_C.ExecuteUbergraph_WBP_Screen_VoiceChatSettings_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


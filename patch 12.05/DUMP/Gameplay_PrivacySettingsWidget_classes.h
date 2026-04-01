// WidgetBlueprintGeneratedClass Gameplay_PrivacySettingsWidget.Gameplay_PrivacySettingsWidget_C
// Size: 0x348 (Inherited: 0x318)
struct UGameplay_PrivacySettingsWidget_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* Auto-RejectPartyInvitesbyRiotID; // 0x320(0x08)
	struct UBoolSettingsWidget_C* AutoReject; // 0x328(0x08)
	struct UButtonSettingsWidget_C* ButtonSettingsWidget_BlockedPlayerList; // 0x330(0x08)
	struct UBoolSettingsWidget_C* HideChatBox; // 0x338(0x08)
	struct UVerticalBox* PrivacySubsection; // 0x340(0x08)

	void HideBlockedPlayerList(bool& bResult); // Function Gameplay_PrivacySettingsWidget.Gameplay_PrivacySettingsWidget_C.HideBlockedPlayerList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BndEvt__Gameplay_PrivacySettingsWidget_BlockedPlayerListSettingWidget_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct UButtonSettingsWidget_C* Widget); // Function Gameplay_PrivacySettingsWidget.Gameplay_PrivacySettingsWidget_C.BndEvt__Gameplay_PrivacySettingsWidget_BlockedPlayerListSettingWidget_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Gameplay_PrivacySettingsWidget.Gameplay_PrivacySettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Gameplay_PrivacySettingsWidget(int32_t EntryPoint); // Function Gameplay_PrivacySettingsWidget.Gameplay_PrivacySettingsWidget_C.ExecuteUbergraph_Gameplay_PrivacySettingsWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


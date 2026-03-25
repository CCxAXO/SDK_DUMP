// WidgetBlueprintGeneratedClass ConferenceSelectModalV2.ConferenceSelectModalV2_C
// Size: 0x3e8 (Inherited: 0x318)
struct UConferenceSelectModalV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* BG_2; // 0x328(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x330(0x08)
	struct UConferenceSelectOptions_C* ConferenceSelectOptions; // 0x338(0x08)
	struct USizeBox* CreateTeamButtons; // 0x340(0x08)
	struct UTextBlock* ErrorText; // 0x348(0x08)
	struct UImage* Gradient; // 0x350(0x08)
	struct UHorizontalBox* HB_CancelButton; // 0x358(0x08)
	struct UImage* Logo; // 0x360(0x08)
	struct UImage* Pattern; // 0x368(0x08)
	struct UHorizontalBox* SelectConferenceButtons; // 0x370(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x378(0x08)
	struct UTextBlock* Title; // 0x380(0x08)
	struct UImage* topornament; // 0x388(0x08)
	struct UHorizontalBox* WarningBox; // 0x390(0x08)
	struct UTextBlock* WarningText; // 0x398(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary_CreateTeam; // 0x3a0(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary_SelectConference; // 0x3a8(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary_SelectConference; // 0x3b0(0x08)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnConferenceSelected; // 0x3c0(0x10)
	bool shouldEmitEventWithoutServiceCall; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FString Conference; // 0x3d8(0x10)

	void InitForSelectConference(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.InitForSelectConference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitForSetConference(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.InitForSetConference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitForCreateTeam(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.InitForCreateTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSuccess(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.OnSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConferenceSelectModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.BndEvt__ConferenceSelectModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnError(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConferenceSelectModalV2_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.BndEvt__ConferenceSelectModalV2_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConferenceSelectModalV2_WBP_MenuButtonPrimary_CreateTeam_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.BndEvt__ConferenceSelectModalV2_WBP_MenuButtonPrimary_CreateTeam_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ConferenceSelectModalV2(int32_t EntryPoint); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.ExecuteUbergraph_ConferenceSelectModalV2 // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnConferenceSelected__DelegateSignature(struct FString Conference); // Function ConferenceSelectModalV2.ConferenceSelectModalV2_C.OnConferenceSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


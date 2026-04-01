// WidgetBlueprintGeneratedClass PlayScreenPartyV2.PlayScreenPartyV2_C
// Size: 0x3d0 (Inherited: 0x318)
struct UPlayScreenPartyV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UCustomGamePartyV2_C* CustomGamePartyV2; // 0x330(0x08)
	struct UDefaultPartyV3_C* DefaultPartyV3; // 0x338(0x08)
	struct UImage* Image_ConnectorLine; // 0x340(0x08)
	struct UImage* Image_ConnectorLine_2; // 0x348(0x08)
	struct USizeBox* LeaveButtonSizebox; // 0x350(0x08)
	struct USharedButtonMaster_C* LeavePartyButton; // 0x358(0x08)
	struct UImage* LightingSweeps; // 0x360(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x368(0x08)
	struct UWidgetSwitcher* PartyStateSwitcher; // 0x370(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PremierParty_Lazy; // 0x378(0x08)
	struct UQueueSelector_C* QueueSelector; // 0x380(0x08)
	struct USharedButtonMaster_C* RangeButton; // 0x388(0x08)
	struct UWidgetSwitcher* StartGameButtonSwitcher; // 0x390(0x08)
	struct UStartGameWidgetV2_C* StartGameWidgetV2; // 0x398(0x08)
	struct UImage* SubNav_line; // 0x3a0(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* TournamentQueueButtonLoader; // 0x3a8(0x08)
	struct UPartyModel* Model; // 0x3b0(0x08)
	struct UPartyViewController* ViewController; // 0x3b8(0x08)
	bool MapInfo; // 0x3c0(0x01)
	bool ChangingPartyName; // 0x3c1(0x01)
	bool isCustomGame; // 0x3c2(0x01)
	char pad_3C3[0x5]; // 0x3c3(0x05)
	struct UPremierParty_Base_C* PremierParty_WidgetInstance; // 0x3c8(0x08)

	void TrySelectQueue(struct FString QueueID); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.TrySelectQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLeaveButton(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.UpdateLeaveButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleStateChanged(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.HandleStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnStateChanged(enum class EPartyViewState PartyState); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnErrorNotificationChanged(struct UPartyErrorNotification* PartyErrorNotification); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.OnErrorNotificationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Matchmaking Changed(bool NewValue); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.Matchmaking Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NoOp(); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.NoOp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NoOpError(enum class EPartyErrorEnum PartyErrorEnum); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.NoOpError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayScreenPartyV2(int32_t EntryPoint); // Function PlayScreenPartyV2.PlayScreenPartyV2_C.ExecuteUbergraph_PlayScreenPartyV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};


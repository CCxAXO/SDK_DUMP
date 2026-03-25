// WidgetBlueprintGeneratedClass RosterInvitePanel.RosterInvitePanel_C
// Size: 0x471 (Inherited: 0x318)
struct URosterInvitePanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Outro; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UImage* backdrop; // 0x330(0x08)
	struct UTextBlock* ErrorText; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UImage* Image_3; // 0x350(0x08)
	struct UImage* Image_4; // 0x358(0x08)
	struct UImage* Image_115; // 0x360(0x08)
	struct UImage* Image_437; // 0x368(0x08)
	struct UVerticalBox* InvitablePlayersList; // 0x370(0x08)
	struct UTextBlock* InvitedPlayerCount; // 0x378(0x08)
	struct UVerticalBox* InvitedPlayersList; // 0x380(0x08)
	struct UButton* LeaveButton; // 0x388(0x08)
	struct UImage* Pattern; // 0x390(0x08)
	struct UEditableTextBox* SearchText; // 0x398(0x08)
	struct UImage* tint_bg; // 0x3a0(0x08)
	struct UImage* topornament; // 0x3a8(0x08)
	struct UImage* WarningIcon; // 0x3b0(0x08)
	struct UTextBlock* WarningText; // 0x3b8(0x08)
	struct URosterModel* RosterModel; // 0x3c0(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x3c8(0x08)
	struct TMap<struct FString, struct URosterInvitePanelListingWidget_C*> PlayerToWidgetMap; // 0x3d0(0x50)
	struct TMap<struct FString, struct URosterInvitePanelListingWidget_C*> InvitedPlayerToWidgetMap; // 0x420(0x50)
	bool Exiting; // 0x470(0x01)

	void UpdateWarningText(struct FText WarningText); // Function RosterInvitePanel.RosterInvitePanel_C.UpdateWarningText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateErrorText(struct FText Error Text); // Function RosterInvitePanel.RosterInvitePanel_C.UpdateErrorText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInviteLists(); // Function RosterInvitePanel.RosterInvitePanel_C.UpdateInviteLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddWidgetToContainer(struct UVerticalBox* VerticalBox, struct UUserWidget* ListWidget); // Function RosterInvitePanel.RosterInvitePanel_C.AddWidgetToContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FilterWidget(struct URosterInvitePanelListingWidget_C* InviteListingWIdget); // Function RosterInvitePanel.RosterInvitePanel_C.FilterWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Exit(); // Function RosterInvitePanel.RosterInvitePanel_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitInviteWidgets(); // Function RosterInvitePanel.RosterInvitePanel_C.InitInviteWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ComparePlatformPlayerDisplayNames(struct UObject* LHS, struct UObject* RHS, bool& LHS<RHS); // Function RosterInvitePanel.RosterInvitePanel_C.ComparePlatformPlayerDisplayNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPlayers(struct TArray<struct UPlatformPlayer*>& SortedInvitablePlayers, struct TArray<struct UPlatformPlayer*>& InvitedPlayers); // Function RosterInvitePanel.RosterInvitePanel_C.GetPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHidden(); // Function RosterInvitePanel.RosterInvitePanel_C.OnHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShown(); // Function RosterInvitePanel.RosterInvitePanel_C.OnShown // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function RosterInvitePanel.RosterInvitePanel_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RosterInvitePanel.RosterInvitePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOutroAnimationFinished(); // Function RosterInvitePanel.RosterInvitePanel_C.OnOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIntroAnimationFinished(); // Function RosterInvitePanel.RosterInvitePanel_C.OnIntroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function RosterInvitePanel.RosterInvitePanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnUpdate(); // Function RosterInvitePanel.RosterInvitePanel_C.OnUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Invite Complete(bool InviteFailed, struct FText ErrorText); // Function RosterInvitePanel.RosterInvitePanel_C.On Invite Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterInvitePanel(int32_t EntryPoint); // Function RosterInvitePanel.RosterInvitePanel_C.ExecuteUbergraph_RosterInvitePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass GamePodSelectOptions.GamePodSelectOptions_C
// Size: 0x391 (Inherited: 0x318)
struct UGamePodSelectOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UBorder* CaptainView; // 0x328(0x08)
	struct UWidgetSwitcher* CaptainViewSwitcher; // 0x330(0x08)
	struct UTextBlock* FollowerGamePodName; // 0x338(0x08)
	struct UOverlay* FollowerView; // 0x340(0x08)
	struct UImage* Image_92; // 0x348(0x08)
	struct UTextBlock* ServerText; // 0x350(0x08)
	struct USharedComboBox_C* SharedComboBox; // 0x358(0x08)
	struct UPartyModel* Model; // 0x360(0x08)
	struct UPartyViewController* ViewController; // 0x368(0x08)
	bool Initialized; // 0x370(0x01)
	bool SettingsExpanded; // 0x371(0x01)
	char pad_372[0x2]; // 0x372(0x02)
	struct FName EnableBotsConfigName; // 0x374(0x0c)
	struct FMulticastInlineDelegate OnMapSelected; // 0x380(0x10)
	bool AddingOptions; // 0x390(0x01)

	void UpdateFollowerGamePod(struct FString GamePod); // Function GamePodSelectOptions.GamePodSelectOptions_C.UpdateFollowerGamePod // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectBestGamepod(); // Function GamePodSelectOptions.GamePodSelectOptions_C.SelectBestGamepod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOptions(struct TArray<struct FPingInfo>& Unused Params); // Function GamePodSelectOptions.GamePodSelectOptions_C.AddOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitGamePodSelector(); // Function GamePodSelectOptions.GamePodSelectOptions_C.InitGamePodSelector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Game Pod Selection Input(struct FString Selection); // Function GamePodSelectOptions.GamePodSelectOptions_C.Handle Game Pod Selection Input // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function GamePodSelectOptions.GamePodSelectOptions_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Model, struct UPartyViewController* Controller); // Function GamePodSelectOptions.GamePodSelectOptions_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Initialized(); // Function GamePodSelectOptions.GamePodSelectOptions_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnerChanged(bool NewValue); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGamePodSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnGamePodSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_74_OnButtonReleasedEvent__DelegateSignature(); // Function GamePodSelectOptions.GamePodSelectOptions_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_74_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AddBotsCheckBox_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function GamePodSelectOptions.GamePodSelectOptions_C.BndEvt__AddBotsCheckBox_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAnyConfigUpdated_Event_1(struct FName& ConfigName); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnAnyConfigUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ToggleSettingsOption_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function GamePodSelectOptions.GamePodSelectOptions_C.BndEvt__ToggleSettingsOption_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(enum class EPartyViewState PartyState); // Function GamePodSelectOptions.GamePodSelectOptions_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGamePodChanged_Event_1(struct FString NewValue); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnGamePodChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GamePodSelectOptions(int32_t EntryPoint); // Function GamePodSelectOptions.GamePodSelectOptions_C.ExecuteUbergraph_GamePodSelectOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnMapSelected__DelegateSignature(struct UMapUIData* MapUIData); // Function GamePodSelectOptions.GamePodSelectOptions_C.OnMapSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


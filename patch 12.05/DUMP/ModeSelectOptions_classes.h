// WidgetBlueprintGeneratedClass ModeSelectOptions.ModeSelectOptions_C
// Size: 0x3d4 (Inherited: 0x318)
struct UModeSelectOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UBorder* CaptainView; // 0x328(0x08)
	struct UWidgetSwitcher* CaptainViewSwitcher; // 0x330(0x08)
	struct UTextBlock* FollowerModeName; // 0x338(0x08)
	struct UOverlay* FollowerView; // 0x340(0x08)
	struct UImage* Image_92; // 0x348(0x08)
	struct USharedComboBox_C* SharedComboBox; // 0x350(0x08)
	struct UTextBlock* TextBlock_1; // 0x358(0x08)
	struct UPartyModel* Model; // 0x360(0x08)
	struct UPartyViewController* ViewController; // 0x368(0x08)
	bool Initialized; // 0x370(0x01)
	bool SettingsExpanded; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct TMap<struct FString, struct UGameModeDataAsset*> ModeDisplayNamesToConfigs; // 0x378(0x50)
	struct FName EnableBotsConfigName; // 0x3c8(0x0c)

	void ToggleModeSelection(bool MapSelection); // Function ModeSelectOptions.ModeSelectOptions_C.ToggleModeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedMode(); // Function ModeSelectOptions.ModeSelectOptions_C.UpdateSelectedMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeModeSelector(); // Function ModeSelectOptions.ModeSelectOptions_C.InitializeModeSelector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModeOptionRemoved(struct UGameModeDataAsset* Removed Option); // Function ModeSelectOptions.ModeSelectOptions_C.HandleModeOptionRemoved // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModeOptionAdded(struct UGameModeDataAsset* Added Option); // Function ModeSelectOptions.ModeSelectOptions_C.HandleModeOptionAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModeSelectionInput(struct FString Selection); // Function ModeSelectOptions.ModeSelectOptions_C.HandleModeSelectionInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function ModeSelectOptions.ModeSelectOptions_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function ModeSelectOptions.ModeSelectOptions_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnerChanged(bool NewValue); // Function ModeSelectOptions.ModeSelectOptions_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function ModeSelectOptions.ModeSelectOptions_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function ModeSelectOptions.ModeSelectOptions_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModeSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function ModeSelectOptions.ModeSelectOptions_C.OnModeSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Initialized(); // Function ModeSelectOptions.ModeSelectOptions_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyConfigUpdated_Event_1(struct FName& ConfigName); // Function ModeSelectOptions.ModeSelectOptions_C.OnAnyConfigUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ModeSelectOptions.ModeSelectOptions_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ModeSelectOptions.ModeSelectOptions_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnModeOptionAdded(struct UGameModeDataAsset* ModeAsset); // Function ModeSelectOptions.ModeSelectOptions_C.OnModeOptionAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModeOptionRemoved(struct UGameModeDataAsset* ModeAsset); // Function ModeSelectOptions.ModeSelectOptions_C.OnModeOptionRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModeChanged(struct FString NewValue); // Function ModeSelectOptions.ModeSelectOptions_C.OnModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ModeSelectOptions(int32_t EntryPoint); // Function ModeSelectOptions.ModeSelectOptions_C.ExecuteUbergraph_ModeSelectOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


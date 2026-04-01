// WidgetBlueprintGeneratedClass QueueSelector.QueueSelector_C
// Size: 0x5bc (Inherited: 0x318)
struct UQueueSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* CaptainView; // 0x320(0x08)
	struct UHorizontalBox* NewQueueButtonsBox; // 0x328(0x08)
	struct UPartyModel* Model; // 0x330(0x08)
	struct UPartyViewController* ViewController; // 0x338(0x08)
	bool SettingsExpanded; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct TMap<struct UTabButtonBase_C*, struct FQueueConfig> ButtonToTypeMap; // 0x348(0x50)
	struct UAkAudioEvent* DropDownClickSound; // 0x398(0x08)
	struct FQueueConfig CustomQueueConfig; // 0x3a0(0xa0)
	struct TArray<struct FQueueConfig> QueueConfigs; // 0x440(0x10)
	struct FName CustomGameEnabledConfig; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TMap<struct FString, struct UTabButtonBase_C*> QueueToButtonMap; // 0x460(0x50)
	struct TMap<struct FString, struct FQueueConfig> QueueConfigsById; // 0x4b0(0x50)
	struct USharedComboBox_C* Overflow Dropdown; // 0x500(0x08)
	int32_t Max Queues Before Overflow; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct FQueueConfig PremierQueueConfig; // 0x510(0xa0)
	struct FName TournamentsGameEnabledConfig; // 0x5b0(0x0c)

	void SetQueueButtonDisabledWithTooltip(struct UTabButtonBase_C* Button, struct FText ToolTip); // Function QueueSelector.QueueSelector_C.SetQueueButtonDisabledWithTooltip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPremierQueueConfig(); // Function QueueSelector.QueueSelector_C.SetPremierQueueConfig // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCustomQueueConfig(); // Function QueueSelector.QueueSelector_C.SetCustomQueueConfig // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPremierSelected(); // Function QueueSelector.QueueSelector_C.OnPremierSelected // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCustomSelected(); // Function QueueSelector.QueueSelector_C.OnCustomSelected // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetButtonForQueueId(struct FString QueueID, struct UTabButtonBase_C*& Button); // Function QueueSelector.QueueSelector_C.GetButtonForQueueId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEnablementOnAllButtons(); // Function QueueSelector.QueueSelector_C.UpdateEnablementOnAllButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FString GetCurrentQueueID(); // Function QueueSelector.QueueSelector_C.GetCurrentQueueID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateDropdownEntries(); // Function QueueSelector.QueueSelector_C.CreateDropdownEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonEnablement(struct UTabButtonBase_C* Button, struct FQueueConfig QueueConfig); // Function QueueSelector.QueueSelector_C.UpdateButtonEnablement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnButtonClicked(struct UTabButtonBase_C* Button); // Function QueueSelector.QueueSelector_C.OnButtonClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateNewDropdownButton(struct FQueueConfig QueueConfig, struct UMatchmakingQueueDataAsset* QueueDataAsset, struct FString QueueID); // Function QueueSelector.QueueSelector_C.CreateNewDropdownButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQueueSelected(struct FQueueConfig QueueConfig); // Function QueueSelector.QueueSelector_C.OnQueueSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function QueueSelector.QueueSelector_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Initialized(); // Function QueueSelector.QueueSelector_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnerChanged(bool NewValue); // Function QueueSelector.QueueSelector_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function QueueSelector.QueueSelector_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function QueueSelector.QueueSelector_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function QueueSelector.QueueSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function QueueSelector.QueueSelector_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQueueIDChanged(struct FString NewValue); // Function QueueSelector.QueueSelector_C.OnQueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStateChanged_Event_1(enum class EPartyViewState PartyState); // Function QueueSelector.QueueSelector_C.OnStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Noop(); // Function QueueSelector.QueueSelector_C.Noop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyError(enum class EPartyErrorEnum Error); // Function QueueSelector.QueueSelector_C.OnPartyError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function QueueSelector.QueueSelector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnQueueConfigUpdated(); // Function QueueSelector.QueueSelector_C.OnQueueConfigUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOverflowQueueSelected(struct FString QueueID); // Function QueueSelector.QueueSelector_C.OnOverflowQueueSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchmakingChanged(bool NewValue); // Function QueueSelector.QueueSelector_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInPremierTournamentChanged(bool NewValue); // Function QueueSelector.QueueSelector_C.OnInPremierTournamentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_QueueSelector(int32_t EntryPoint); // Function QueueSelector.QueueSelector_C.ExecuteUbergraph_QueueSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


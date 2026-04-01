// WidgetBlueprintGeneratedClass PregameParentWidgetBase.PregameParentWidgetBase_C
// Size: 0x558 (Inherited: 0x520)
struct UPregameParentWidgetBase_C : UPregameParentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UPregameViewController* ViewController; // 0x528(0x08)
	struct UWidget* MapSelectScreen; // 0x530(0x08)
	struct UUserWidget* CharacterSelectScreen; // 0x538(0x08)
	bool HasInitializedChat; // 0x540(0x01)
	bool HasSentCoachSystemMessage; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct UUserWidget* DefaultCharacterSelectScreenClass; // 0x548(0x08)
	struct UUserWidget* ObserverCharacterSelectScreenClass; // 0x550(0x08)

	void GetCharacterSelectClass(struct UUserWidget*& CharacterSelectClass); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.GetCharacterSelectClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCoachSystemMessage(); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.UpdateCoachSystemMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScreen(struct UWidget* Screen); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.SetScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddScreen(struct UWidget* Screen); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.AddScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMapSelect(struct UWidget*& Widget); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.GetMapSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterSelect(struct UUserWidget*& Widget); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.GetCharacterSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnGameFlowStateUpdated(enum class EGameFlowStateType NewState); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.OnGameFlowStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnIsLocalPlayerCoachChanged(bool NewValue); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.OnIsLocalPlayerCoachChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPregameStateUpdated(enum class EPregameMatchState State); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.OnPregameStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLocalPlayerIsSpectatorUpdated(bool bNewIsSpectator); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.OnLocalPlayerIsSpectatorUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinematicModeUpdated(); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PregameParentWidgetBase(int32_t EntryPoint); // Function PregameParentWidgetBase.PregameParentWidgetBase_C.ExecuteUbergraph_PregameParentWidgetBase // (Final|UbergraphFunction) // @ game+0x1b42740
};


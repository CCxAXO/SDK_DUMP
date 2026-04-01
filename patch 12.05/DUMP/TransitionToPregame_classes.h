// WidgetBlueprintGeneratedClass TransitionToPregame.TransitionToPregame_C
// Size: 0x3bb (Inherited: 0x338)
struct UTransitionToPregame_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro_Simple; // 0x340(0x08)
	struct UWidgetAnimation* Outro; // 0x348(0x08)
	struct UWidgetAnimation* Intro; // 0x350(0x08)
	struct UMapIntroIdleAscent_C* Art; // 0x358(0x08)
	struct UImage* BlackFallback; // 0x360(0x08)
	struct UImage* Color; // 0x368(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x370(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x378(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* MapIntroLazyLoader; // 0x380(0x08)
	struct UTransitionTriggers_C* TransitionTriggers; // 0x388(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x398(0x08)
	struct UTransitionToPregameModel* DataModel; // 0x3a0(0x08)
	bool Hiding; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UTournamentMapIntro_C* TournamentMapIntroWidget; // 0x3b0(0x08)
	bool TournamentIntroEnabled; // 0x3b8(0x01)
	bool IsWaitingForPremierOutro; // 0x3b9(0x01)
	bool PregameOutroFinished; // 0x3ba(0x01)

	void SequenceEvent__ENTRYPOINTTransitionToPregame(); // Function TransitionToPregame.TransitionToPregame_C.SequenceEvent__ENTRYPOINTTransitionToPregame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Play Pregame Simple Outro(); // Function TransitionToPregame.TransitionToPregame_C.Play Pregame Simple Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Play Pregame Outro(); // Function TransitionToPregame.TransitionToPregame_C.Play Pregame Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Request Premier Outro(); // Function TransitionToPregame.TransitionToPregame_C.Request Premier Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PremierOutroDone(); // Function TransitionToPregame.TransitionToPregame_C.PremierOutroDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function TransitionToPregame.TransitionToPregame_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModelStateChanged(); // Function TransitionToPregame.TransitionToPregame_C.HandleModelStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UPWVisible(); // Function TransitionToPregame.TransitionToPregame_C.UPWVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show(); // Function TransitionToPregame.TransitionToPregame_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide(); // Function TransitionToPregame.TransitionToPregame_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TransitionToPregame.TransitionToPregame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OutroAnimationFinished(); // Function TransitionToPregame.TransitionToPregame_C.OutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentStateChanged(enum class ETransitionScreenState NewValue); // Function TransitionToPregame.TransitionToPregame_C.HandleCurrentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function TransitionToPregame.TransitionToPregame_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnOutroCompleted(); // Function TransitionToPregame.TransitionToPregame_C.OnOutroCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TransitionToPregame(int32_t EntryPoint); // Function TransitionToPregame.TransitionToPregame_C.ExecuteUbergraph_TransitionToPregame // (Final|UbergraphFunction) // @ game+0x1af5410
};


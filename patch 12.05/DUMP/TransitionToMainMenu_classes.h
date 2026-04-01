// WidgetBlueprintGeneratedClass TransitionToMainMenu.TransitionToMainMenu_C
// Size: 0x399 (Inherited: 0x338)
struct UTransitionToMainMenu_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro; // 0x340(0x08)
	struct UWidgetAnimation* Intro; // 0x348(0x08)
	struct UImage* BlackFallback; // 0x350(0x08)
	struct UImage* Color; // 0x358(0x08)
	struct UImage* FallbackImage; // 0x360(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x368(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* MapIntroLoader; // 0x370(0x08)
	struct UTransitionTriggers_C* TransitionTriggers; // 0x378(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x380(0x08)
	bool Hiding; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UTransitionToMainMenuModel* DataModel; // 0x390(0x08)
	bool InitializedMapIntro; // 0x398(0x01)

	void SequenceEvent__ENTRYPOINTTransitionToMainMenu(); // Function TransitionToMainMenu.TransitionToMainMenu_C.SequenceEvent__ENTRYPOINTTransitionToMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function TransitionToMainMenu.TransitionToMainMenu_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModelStateChanged(); // Function TransitionToMainMenu.TransitionToMainMenu_C.HandleModelStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UPWVisible(); // Function TransitionToMainMenu.TransitionToMainMenu_C.UPWVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show(); // Function TransitionToMainMenu.TransitionToMainMenu_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide(); // Function TransitionToMainMenu.TransitionToMainMenu_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TransitionToMainMenu.TransitionToMainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOutroAnimationFinished(); // Function TransitionToMainMenu.TransitionToMainMenu_C.OnOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentStateChanged(enum class ETransitionScreenState NewValue); // Function TransitionToMainMenu.TransitionToMainMenu_C.HandleCurrentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TransitionToMainMenu(int32_t EntryPoint); // Function TransitionToMainMenu.TransitionToMainMenu_C.ExecuteUbergraph_TransitionToMainMenu // (Final|UbergraphFunction) // @ game+0x1af5410
};


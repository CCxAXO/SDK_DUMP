// WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// Size: 0x388 (Inherited: 0x338)
struct ULoadingScreen_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro; // 0x340(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* FaceOffTransitionLazyLoader; // 0x348(0x08)
	struct UMapIntroV3_C* MapIntroV3; // 0x350(0x08)
	struct UTransitionTriggers_C* TransitionTriggers; // 0x358(0x08)
	struct UWidgetSwitcher* TransitionTypeSwitcher; // 0x360(0x08)
	struct UVoicePushToTalkSuppressor_C* VoicePushToTalkSuppressor; // 0x368(0x08)
	bool Hiding; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UTransitionToInGameModel* DataModel; // 0x378(0x08)
	struct UTexture* FallbackImage; // 0x380(0x08)

	void HandleCurrentStateChanged(); // Function LoadingScreen.LoadingScreen_C.HandleCurrentStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function LoadingScreen.LoadingScreen_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show(); // Function LoadingScreen.LoadingScreen_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide(); // Function LoadingScreen.LoadingScreen_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOutroAnimationFinished(); // Function LoadingScreen.LoadingScreen_C.OnOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function LoadingScreen.LoadingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleStateChanged(enum class ETransitionScreenState NewValue); // Function LoadingScreen.LoadingScreen_C.HandleStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function LoadingScreen.LoadingScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function LoadingScreen.LoadingScreen_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LoadingScreen(int32_t EntryPoint); // Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};


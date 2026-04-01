// WidgetBlueprintGeneratedClass ReplayLoadingScreen.ReplayLoadingScreen_C
// Size: 0x378 (Inherited: 0x338)
struct UReplayLoadingScreen_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro; // 0x340(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* FaceOffTransitionLazyLoader; // 0x348(0x08)
	struct UTransitionTriggers_C* TransitionTriggers; // 0x350(0x08)
	struct UWidgetSwitcher* TransitionTypeSwitcher; // 0x358(0x08)
	bool Hiding; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UTransitionToWatchingReplayModel* DataModel; // 0x368(0x08)
	struct UTexture* FallbackImage; // 0x370(0x08)

	void HandleCurrentStateChanged(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.HandleCurrentStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopAnimations(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Hide(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Current State Changed(enum class ETransitionScreenState NewValue); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.On Current State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Outro Completed(); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.On Outro Completed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReplayLoadingScreen(int32_t EntryPoint); // Function ReplayLoadingScreen.ReplayLoadingScreen_C.ExecuteUbergraph_ReplayLoadingScreen // (Final|UbergraphFunction) // @ game+0x1b42740
};


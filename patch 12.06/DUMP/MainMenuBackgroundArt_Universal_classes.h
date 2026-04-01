// WidgetBlueprintGeneratedClass MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C
// Size: 0x385 (Inherited: 0x318)
struct UMainMenuBackgroundArt_Universal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeIn; // 0x320(0x08)
	struct UImage* Art; // 0x328(0x08)
	struct UMediaPlayer* VideoPlayer; // 0x330(0x08)
	bool AllowVideo; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UTexture2D* Texture2D; // 0x340(0x08)
	struct FSlateColor DefaultTint; // 0x348(0x14)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FVector2D DefaultSize; // 0x360(0x10)
	struct FSlateColor WhiteTint; // 0x370(0x14)
	bool PlayedFadeIn; // 0x384(0x01)

	void TryPlayFadeInAnimation(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.TryPlayFadeInAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideArt(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.HideArt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateArtFromTextureOrMaterial(struct UTexture2D* Texture, struct UMaterial* Material); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.UpdateArtFromTextureOrMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetArtToDefault(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.ResetArtToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SyncToCurrentMainMenuNavigationState(bool IsDesignTime); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.SyncToCurrentMainMenuNavigationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopVideo(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.StopVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SyncToNavigationState(enum class EAresMainMenuTopNavigationState NavigationState, bool IsDesignTime); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.SyncToNavigationState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoaded_619A757E4305949A8D4258AA537A540B(struct UObject* Loaded); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.OnLoaded_619A757E4305949A8D4258AA537A540B // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleNavigationStateChanged(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.HandleNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleConfigUpdated(struct FName& ConfigName); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.HandleConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayVideo(struct FMediaSourceParams& MediaSourceParams); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.PlayVideo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVideoStarted(struct FString OpenedUrl); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.OnVideoStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVideoStopped(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.OnVideoStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnResume(); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.OnResume // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MainMenuBackgroundArt_Universal(int32_t EntryPoint); // Function MainMenuBackgroundArt_Universal.MainMenuBackgroundArt_Universal_C.ExecuteUbergraph_MainMenuBackgroundArt_Universal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


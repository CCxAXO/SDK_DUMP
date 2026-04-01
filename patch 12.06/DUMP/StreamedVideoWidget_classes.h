// WidgetBlueprintGeneratedClass StreamedVideoWidget.StreamedVideoWidget_C
// Size: 0x372 (Inherited: 0x318)
struct UStreamedVideoWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* ScreenFadeIn; // 0x320(0x08)
	struct UImage* Loading; // 0x328(0x08)
	struct UVerticalBox* LoadingHolder; // 0x330(0x08)
	struct UImage* Screen; // 0x338(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x340(0x08)
	struct FMulticastInlineDelegate OnPlaybackComplete; // 0x348(0x10)
	struct FMulticastInlineDelegate OnPlaybackFailed; // 0x358(0x10)
	struct UMediaTexture* MediaTexture; // 0x368(0x08)
	bool wasNotPlaying; // 0x370(0x01)
	bool stoppedPlaying; // 0x371(0x01)

	void GetVideoVolume(double& Volume); // Function StreamedVideoWidget.StreamedVideoWidget_C.GetVideoVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Stop(); // Function StreamedVideoWidget.StreamedVideoWidget_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayStreamedVideo(struct UStreamedVideoDataAsset* Video, bool Loop, bool& Success); // Function StreamedVideoWidget.StreamedVideoWidget_C.PlayStreamedVideo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEndReached(); // Function StreamedVideoWidget.StreamedVideoWidget_C.HandleEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function StreamedVideoWidget.StreamedVideoWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleMediaOpenFailed(struct FString FailedUrl); // Function StreamedVideoWidget.StreamedVideoWidget_C.HandleMediaOpenFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClientQuit(bool bForceImmediate); // Function StreamedVideoWidget.StreamedVideoWidget_C.HandleClientQuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function StreamedVideoWidget.StreamedVideoWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function StreamedVideoWidget.StreamedVideoWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleMediaOpened(struct FString OpenedUrl); // Function StreamedVideoWidget.StreamedVideoWidget_C.HandleMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function StreamedVideoWidget.StreamedVideoWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_StreamedVideoWidget(int32_t EntryPoint); // Function StreamedVideoWidget.StreamedVideoWidget_C.ExecuteUbergraph_StreamedVideoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnPlaybackFailed__DelegateSignature(); // Function StreamedVideoWidget.StreamedVideoWidget_C.OnPlaybackFailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlaybackComplete__DelegateSignature(); // Function StreamedVideoWidget.StreamedVideoWidget_C.OnPlaybackComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


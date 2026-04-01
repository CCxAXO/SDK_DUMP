// WidgetBlueprintGeneratedClass GunSkinLevelPreview.GunSkinLevelPreview_C
// Size: 0x3b8 (Inherited: 0x318)
struct UGunSkinLevelPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* Container; // 0x320(0x08)
	struct UBackgroundBlur* HeaderBackgroundBlur; // 0x328(0x08)
	struct UOverlay* HeaderOverlay; // 0x330(0x08)
	struct UOverlay* PlaybackErrorCase; // 0x338(0x08)
	struct UWidgetSwitcher* PreviewSwitcher; // 0x340(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x348(0x08)
	struct UVerticalBox* StreamedCase; // 0x350(0x08)
	struct UStreamedVideoWidget_C* StreamedVideoWidget; // 0x358(0x08)
	struct UTextBlock* TitleTextBlock; // 0x360(0x08)
	struct UOverlay* UnavailableCase; // 0x368(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x370(0x08)
	bool Open; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UStreamedVideoDataAsset* StreamedVideo; // 0x380(0x08)
	struct FText Title; // 0x388(0x18)
	bool ShowCloseButton; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate OnCloseButtonPressed; // 0x3a8(0x10)

	void SetTitle(struct FText Title); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool IsPaused(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.IsPaused // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool CanPause(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.CanPause // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ActivateWidget(struct UWidget* Target); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.ActivateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNoVideo(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.HandleNoVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Pause(bool& Success); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Pause // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Play(bool& Success); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Play // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Stop(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Start(bool Loop, bool& Success); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Start // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NotifyVisibility(bool IsOpen); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.NotifyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StreamedVideoWidget_K2Node_ComponentBoundEvent_0_OnPlaybackComplete__DelegateSignature(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.BndEvt__StreamedVideoWidget_K2Node_ComponentBoundEvent_0_OnPlaybackComplete__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StreamedVideoWidget_K2Node_ComponentBoundEvent_2_OnPlaybackFailed__DelegateSignature(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.BndEvt__StreamedVideoWidget_K2Node_ComponentBoundEvent_2_OnPlaybackFailed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GunSkinLevelPreview_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.BndEvt__GunSkinLevelPreview_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GunSkinLevelPreview(int32_t EntryPoint); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.ExecuteUbergraph_GunSkinLevelPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnCloseButtonPressed__DelegateSignature(); // Function GunSkinLevelPreview.GunSkinLevelPreview_C.OnCloseButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


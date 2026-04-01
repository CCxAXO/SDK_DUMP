// WidgetBlueprintGeneratedClass WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C
// Size: 0x370 (Inherited: 0x318)
struct UWBP_FlyoutTemplate_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x320(0x08)
	struct FMulticastInlineDelegate TransitionAnimationFinished; // 0x328(0x10)
	struct FMulticastInlineDelegate CloseRequested; // 0x338(0x10)
	struct UAkAudioEvent* Aud_Open; // 0x348(0x08)
	struct UAkAudioEvent* Aud_Close; // 0x350(0x08)
	struct UWidgetAnimation* CloseAnimation; // 0x358(0x08)
	double OpenAnimationSpeed; // 0x360(0x08)
	double CloseAnimationSpeed; // 0x368(0x08)

	void PlayTransitionAnimation(struct UWidgetAnimation* Animation, enum class EUMGSequencePlayMode PlayMode, struct UAkAudioEvent* AudioEvent, bool IsInstant, double PlaybackSpeed); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.PlayTransitionAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayCloseAnimation(bool IsInstant); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.PlayCloseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOpenAnimation(bool IsInstant); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.PlayOpenAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UWidgetAnimation* OpenAnimation, struct UWidgetAnimation* CloseAnimation); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_FlyoutTemplate_Base(int32_t EntryPoint); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.ExecuteUbergraph_WBP_FlyoutTemplate_Base // (Final|UbergraphFunction) // @ game+0x1b42740
	void CloseRequested__DelegateSignature(); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.CloseRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TransitionAnimationFinished__DelegateSignature(); // Function WBP_FlyoutTemplate_Base.WBP_FlyoutTemplate_Base_C.TransitionAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


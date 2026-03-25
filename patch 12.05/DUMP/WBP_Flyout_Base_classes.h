// WidgetBlueprintGeneratedClass WBP_Flyout_Base.WBP_Flyout_Base_C
// Size: 0x450 (Inherited: 0x440)
struct UWBP_Flyout_Base_C : UFlyoutWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWBP_FlyoutTemplate_Base_C* FlyoutTemplate; // 0x448(0x08)

	void OnTemplateTransitionAnimationFinished(); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.OnTemplateTransitionAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTemplateCloseRequested(); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.OnTemplateCloseRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UWBP_FlyoutTemplate_Base_C* FlyoutTemplate); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOpenAnimationFinished(); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.OnOpenAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCloseAnimationFinished(); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.OnCloseAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOpenAnimation(bool bIsInstant); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.PlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PlayCloseAnimation(bool bIsInstant); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.PlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OpenStateChanged(enum class EAresFlyoutOpenState PreviousOpenState, enum class EAresFlyoutOpenState CurrentOpenState); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.OpenStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Flyout_Base(int32_t EntryPoint); // Function WBP_Flyout_Base.WBP_Flyout_Base_C.ExecuteUbergraph_WBP_Flyout_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass SharedButtonWithPopout.SharedButtonWithPopout_C
// Size: 0x39d (Inherited: 0x320)
struct USharedButtonWithPopout_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTelemetryButton* Button; // 0x328(0x08)
	struct UOverlay* ButtonWidgetContainer; // 0x330(0x08)
	struct UMenuAnchor* PopoutAnchor; // 0x338(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x340(0x10)
	struct UAkAudioEvent* AUD_Event_Click; // 0x350(0x08)
	struct UAkAudioEvent* AUD_Event_Hover; // 0x358(0x08)
	struct UUserWidget* ButtonWidget; // 0x360(0x08)
	struct UUserWidget* PopoutWidget; // 0x368(0x08)
	bool PopoutOnPress; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UUserWidget* PopoutContent; // 0x378(0x08)
	struct UUserWidget* ButtonContent; // 0x380(0x08)
	enum class EMenuPlacement PopoutPlacement; // 0x388(0x01)
	enum class EHorizontalAlignment PopoutHorizontalAlignment; // 0x389(0x01)
	enum class EVerticalAlignment PopoutVerticalAlignment; // 0x38a(0x01)
	char pad_38B[0x1]; // 0x38b(0x01)
	struct FMargin PopoutPadding; // 0x38c(0x10)
	bool ShouldShowPopout; // 0x39c(0x01)

	void OnMenuOpenChanged(bool IsOpen); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.OnMenuOpenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* GetMenuContent(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.GetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClosePopout(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.ClosePopout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenPopout(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.OpenPopout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FormatPopoutAnchor(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.FormatPopoutAnchor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreatePopoutWidget(struct UUserWidget* Widget Class, struct APlayerController* Owner, struct UUserWidget*& User Widget); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.CreatePopoutWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitPopoutWidget(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.InitPopoutWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateButtonWidget(struct UUserWidget* Widget Class, struct APlayerController* Owner, struct UUserWidget*& User Widget); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.CreateButtonWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitButtonWidget(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.InitButtonWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedButtonWithPopout(int32_t EntryPoint); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.ExecuteUbergraph_SharedButtonWithPopout // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function SharedButtonWithPopout.SharedButtonWithPopout_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


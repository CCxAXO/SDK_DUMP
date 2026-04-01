// WidgetBlueprintGeneratedClass LargeModal.LargeModal_C
// Size: 0x400 (Inherited: 0x320)
struct ULargeModal_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UNamedSlot* Background; // 0x328(0x08)
	struct UNamedSlot* content; // 0x330(0x08)
	struct UNamedSlot* Header; // 0x338(0x08)
	struct UNamedSlot* IconSlot; // 0x340(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x348(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x350(0x08)
	struct USharedBackButton_C* SharedForwardButton; // 0x358(0x08)
	struct UTextBlock* Subtitle; // 0x360(0x08)
	struct UTextBlock* Title; // 0x368(0x08)
	struct UUniversalModalVignette_C* UniversalModalVignette; // 0x370(0x08)
	bool ShowCloseButton; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FText TitleText; // 0x380(0x18)
	struct TArray<struct UTelemetryTabButton_C*> Tabs; // 0x398(0x10)
	struct FMulticastInlineDelegate TabClicked; // 0x3a8(0x10)
	struct UTelemetryTabButton_C* CurrentTab; // 0x3b8(0x08)
	struct FMulticastInlineDelegate EscClicked; // 0x3c0(0x10)
	bool FullScreenContent; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UUserWidget* ContentWidget; // 0x3d8(0x08)
	bool UseForwardButton; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FText SubtitleText; // 0x3e8(0x18)

	void OnSkinLoaded(); // Function LargeModal.LargeModal_C.OnSkinLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSubtitle(struct FText Subtitle); // Function LargeModal.LargeModal_C.SetSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFullscreenContent(bool IsFullscreen); // Function LargeModal.LargeModal_C.SetFullscreenContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEscButtonsVisible(bool CloseButtonVisible, bool UseForwardButton); // Function LargeModal.LargeModal_C.SetEscButtonsVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTitle(struct FText Title); // Function LargeModal.LargeModal_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function LargeModal.LargeModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function LargeModal.LargeModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function LargeModal.LargeModal_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LargeModal(int32_t EntryPoint); // Function LargeModal.LargeModal_C.ExecuteUbergraph_LargeModal // (Final|UbergraphFunction) // @ game+0x1b42740
	void EscClicked__DelegateSignature(); // Function LargeModal.LargeModal_C.EscClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TabClicked__DelegateSignature(int32_t ClickedTabIndex); // Function LargeModal.LargeModal_C.TabClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


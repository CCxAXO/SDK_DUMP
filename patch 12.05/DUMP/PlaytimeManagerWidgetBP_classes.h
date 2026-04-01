// WidgetBlueprintGeneratedClass PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C
// Size: 0x350 (Inherited: 0x318)
struct UPlaytimeManagerWidgetBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* CloseImage; // 0x320(0x08)
	struct UTextBlock* CursorHelperText; // 0x328(0x08)
	struct UBorder* NotificationBorder; // 0x330(0x08)
	struct UVerticalBox* NotificationBox; // 0x338(0x08)
	struct UButton* NotificationCloseButton; // 0x340(0x08)
	struct UTextBlock* NotificationText; // 0x348(0x08)

	void UpdateCursorHelpTextVisibility(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.UpdateCursorHelpTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandlePlaytimeNotification(struct FString Notification, int32_t Minutes); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.HandlePlaytimeNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__NotificationCloseButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.BndEvt__NotificationCloseButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void HandleSessionLoopStateChanged(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.HandleSessionLoopStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlaytimeManagerWidgetBP(int32_t EntryPoint); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.ExecuteUbergraph_PlaytimeManagerWidgetBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


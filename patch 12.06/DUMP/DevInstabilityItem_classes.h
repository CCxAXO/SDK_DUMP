// WidgetBlueprintGeneratedClass DevInstabilityItem.DevInstabilityItem_C
// Size: 0x348 (Inherited: 0x318)
struct UDevInstabilityItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Bullet; // 0x320(0x08)
	struct UTextBlock* Text; // 0x328(0x08)
	struct UInstabilityTrackingDetails* TrackingDetails; // 0x330(0x08)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x338(0x10)

	void UpdateVisibility(); // Function DevInstabilityItem.DevInstabilityItem_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupWidget(struct UInstabilityTrackingDetails* TrackingDetails, struct UBP_InstabilityIndicatorHUD_C* ParentWidget); // Function DevInstabilityItem.DevInstabilityItem_C.SetupWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInstabilityStateChanged(bool bInstabilityDetected, bool bIsCritical); // Function DevInstabilityItem.DevInstabilityItem_C.OnInstabilityStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DevInstabilityItem(int32_t EntryPoint); // Function DevInstabilityItem.DevInstabilityItem_C.ExecuteUbergraph_DevInstabilityItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void VisibilityChanged__DelegateSignature(); // Function DevInstabilityItem.DevInstabilityItem_C.VisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


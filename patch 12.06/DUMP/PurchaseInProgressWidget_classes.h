// WidgetBlueprintGeneratedClass PurchaseInProgressWidget.PurchaseInProgressWidget_C
// Size: 0x340 (Inherited: 0x318)
struct UPurchaseInProgressWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* InProgressAudioAnim; // 0x320(0x08)
	struct UImage* DecoLeft; // 0x328(0x08)
	struct UImage* DecoRight; // 0x330(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x338(0x08)

	void SequenceEvent__ENTRYPOINTPurchaseInProgressWidget(); // Function PurchaseInProgressWidget.PurchaseInProgressWidget_C.SequenceEvent__ENTRYPOINTPurchaseInProgressWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent_1(); // Function PurchaseInProgressWidget.PurchaseInProgressWidget_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedByUser(bool bNewValue); // Function PurchaseInProgressWidget.PurchaseInProgressWidget_C.SetObservedByUser // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PurchaseInProgressWidget(int32_t EntryPoint); // Function PurchaseInProgressWidget.PurchaseInProgressWidget_C.ExecuteUbergraph_PurchaseInProgressWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};


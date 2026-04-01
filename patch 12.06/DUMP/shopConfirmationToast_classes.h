// WidgetBlueprintGeneratedClass shopConfirmationToast.shopConfirmationToast_C
// Size: 0x330 (Inherited: 0x318)
struct UshopConfirmationToast_C : UShopConfirmationToast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeOut; // 0x320(0x08)
	struct UTextBlock* ToastText; // 0x328(0x08)

	void FireFeedback(struct FText& TextToDisplay); // Function shopConfirmationToast.shopConfirmationToast_C.FireFeedback // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_shopConfirmationToast(int32_t EntryPoint); // Function shopConfirmationToast.shopConfirmationToast_C.ExecuteUbergraph_shopConfirmationToast // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


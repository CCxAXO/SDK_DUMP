// WidgetBlueprintGeneratedClass SharedHyperlinkButon.SharedHyperlinkButon_C
// Size: 0x3a0 (Inherited: 0x318)
struct USharedHyperlinkButon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ButtonText; // 0x320(0x08)
	struct UButton* HyperlinkButton; // 0x328(0x08)
	struct UImage* Image_170; // 0x330(0x08)
	struct FText Button Label; // 0x338(0x18)
	struct FName UrlConfigName; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FString UrlDefaultValue; // 0x360(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x370(0x10)
	bool LaunchExternalBrowserWindow; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FText UrlOverride; // 0x388(0x18)

	void PreConstruct(bool IsDesignTime); // Function SharedHyperlinkButon.SharedHyperlinkButon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__HyperlinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SharedHyperlinkButon.SharedHyperlinkButon_C.BndEvt__HyperlinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedHyperlinkButon(int32_t EntryPoint); // Function SharedHyperlinkButon.SharedHyperlinkButon_C.ExecuteUbergraph_SharedHyperlinkButon // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function SharedHyperlinkButon.SharedHyperlinkButon_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


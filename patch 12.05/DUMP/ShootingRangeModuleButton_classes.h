// WidgetBlueprintGeneratedClass ShootingRangeModuleButton.ShootingRangeModuleButton_C
// Size: 0x3e8 (Inherited: 0x320)
struct UShootingRangeModuleButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* OnClick; // 0x328(0x08)
	struct UImage* BLDot; // 0x330(0x08)
	struct UImage* BRDot; // 0x338(0x08)
	struct UTextBlock* DescriptionText; // 0x340(0x08)
	struct UImage* Image_1; // 0x348(0x08)
	struct UImage* MapImage; // 0x350(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x358(0x08)
	struct UTelemetryButton* TelemetryButton_321; // 0x360(0x08)
	struct UTextBlock* TitleText; // 0x368(0x08)
	struct UImage* TLDot; // 0x370(0x08)
	struct UImage* TRDot; // 0x378(0x08)
	struct FText Title; // 0x380(0x18)
	struct FText Description; // 0x398(0x18)
	struct FString Module; // 0x3b0(0x10)
	struct UTexture2D* MapTexture; // 0x3c0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x3c8(0x10)
	struct UAkAudioEvent* AUD_Click; // 0x3d8(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x3e0(0x08)

	void UndoSelectedStyles(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.UndoSelectedStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedStyles(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.SetSelectedStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_320_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.BndEvt__TelemetryButton_320_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ShootingRangeModuleButton(int32_t EntryPoint); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.ExecuteUbergraph_ShootingRangeModuleButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnClicked__DelegateSignature(struct UShootingRangeModuleButton_C* Button); // Function ShootingRangeModuleButton.ShootingRangeModuleButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


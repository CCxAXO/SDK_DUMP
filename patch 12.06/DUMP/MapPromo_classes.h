// WidgetBlueprintGeneratedClass MapPromo.MapPromo_C
// Size: 0x368 (Inherited: 0x318)
struct UMapPromo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* UnHoverAnim; // 0x320(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x328(0x08)
	struct UImage* BundleImage; // 0x330(0x08)
	struct UImage* Focus; // 0x338(0x08)
	struct UImage* Image_530; // 0x340(0x08)
	struct UTextBlock* Label; // 0x348(0x08)
	struct UTelemetryButton* PopupButton; // 0x350(0x08)
	struct UAkAudioEvent* SoundClick; // 0x358(0x08)
	struct UAkAudioEvent* SoundHover; // 0x360(0x08)

	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function MapPromo.MapPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function MapPromo.MapPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function MapPromo.MapPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapPromo.MapPromo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapPromo(int32_t EntryPoint); // Function MapPromo.MapPromo_C.ExecuteUbergraph_MapPromo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


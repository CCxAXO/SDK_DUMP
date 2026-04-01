// WidgetBlueprintGeneratedClass CarouselArrowButtons.CarouselArrowButtons_C
// Size: 0x348 (Inherited: 0x318)
struct UCarouselArrowButtons_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* IndexText; // 0x320(0x08)
	struct UButton* previousItemButtonLeft1; // 0x328(0x08)
	struct UButton* previousItemButtonRight; // 0x330(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x338(0x10)

	void BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function CarouselArrowButtons.CarouselArrowButtons_C.BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function CarouselArrowButtons.CarouselArrowButtons_C.BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ScrollToStartButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function CarouselArrowButtons.CarouselArrowButtons_C.BndEvt__ScrollToStartButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CarouselArrowButtons.CarouselArrowButtons_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CarouselArrowButtons(int32_t EntryPoint); // Function CarouselArrowButtons.CarouselArrowButtons_C.ExecuteUbergraph_CarouselArrowButtons // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(int32_t Direction); // Function CarouselArrowButtons.CarouselArrowButtons_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


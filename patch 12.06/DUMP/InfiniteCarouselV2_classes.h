// WidgetBlueprintGeneratedClass InfiniteCarouselV2.InfiniteCarouselV2_C
// Size: 0x458 (Inherited: 0x448)
struct UInfiniteCarouselV2_C : UInfiniteCarouselV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UAkAudioEvent* ScrollAudio; // 0x450(0x08)

	void UnbindInput(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.UnbindInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ScrollRight(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.ScrollRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ScrollLeft(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.ScrollLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitInput(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.InitInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayScrollAudio(int32_t Index); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.PlayScrollAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InfiniteCarouselV2(int32_t EntryPoint); // Function InfiniteCarouselV2.InfiniteCarouselV2_C.ExecuteUbergraph_InfiniteCarouselV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};


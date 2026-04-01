// WidgetBlueprintGeneratedClass TransitionManagerWidgetBP.TransitionManagerWidgetBP_C
// Size: 0x360 (Inherited: 0x330)
struct UTransitionManagerWidgetBP_C : UTransitionManagerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* LetterboxBottom; // 0x338(0x08)
	struct UImage* LetterboxLeft; // 0x340(0x08)
	struct UImage* LetterboxRight; // 0x348(0x08)
	struct UImage* LetterboxTop; // 0x350(0x08)
	double TargetAspectRatio; // 0x358(0x08)

	void HandleWidgetAddedToContainerWidget(struct USimpleLifecycleWidget* TransitionWidget, struct UPanelSlot* LayoutSlot); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.HandleWidgetAddedToContainerWidget // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TransitionManagerWidgetBP(int32_t EntryPoint); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.ExecuteUbergraph_TransitionManagerWidgetBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


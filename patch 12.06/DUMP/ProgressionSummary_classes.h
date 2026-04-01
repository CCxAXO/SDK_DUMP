// WidgetBlueprintGeneratedClass ProgressionSummary.ProgressionSummary_C
// Size: 0x360 (Inherited: 0x318)
struct UProgressionSummary_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UProgressionSummaryAccountLevel_C* AccountLevel; // 0x320(0x08)
	struct UImage* CornerGridBL; // 0x328(0x08)
	struct UImage* CornerGridBR; // 0x330(0x08)
	struct UImage* CornerSheen; // 0x338(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* DailyRewards_Lazyloader; // 0x340(0x08)
	struct UButton* InteractiveArea; // 0x348(0x08)
	struct FMulticastInlineDelegate OnUnhovered; // 0x350(0x10)

	void BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ProgressionSummary.ProgressionSummary_C.BndEvt__InteractiveArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ProgressionSummary.ProgressionSummary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ProgressionSummary.ProgressionSummary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnDailyRewardsEnabledChanged(); // Function ProgressionSummary.ProgressionSummary_C.OnDailyRewardsEnabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ProgressionSummary(int32_t EntryPoint); // Function ProgressionSummary.ProgressionSummary_C.ExecuteUbergraph_ProgressionSummary // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnUnHovered__DelegateSignature(); // Function ProgressionSummary.ProgressionSummary_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


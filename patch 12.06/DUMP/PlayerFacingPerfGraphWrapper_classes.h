// WidgetBlueprintGeneratedClass PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C
// Size: 0x3cc (Inherited: 0x320)
struct UPlayerFacingPerfGraphWrapper_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* GraphPreview; // 0x328(0x08)
	struct UPlayerFacingPerfGraph_C* GraphWidget; // 0x330(0x08)
	struct URichTextBlock* TitleRichText; // 0x338(0x08)
	double MaxYAxisTop; // 0x340(0x08)
	double MinYAxisTop; // 0x348(0x08)
	double MaxYAxisBottom; // 0x350(0x08)
	double MinYAxisBottom; // 0x358(0x08)
	double YAxisMargin; // 0x360(0x08)
	struct FText GraphTitle; // 0x368(0x18)
	enum class EPlayerPerfMetricCategory MetricCategory; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct TArray<struct FGraphMetricEntry> GraphMetrics; // 0x388(0x10)
	enum class EGraphDisplayType DisplayType; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FLinearColor BackgroundColor; // 0x39c(0x10)
	int32_t XAxisZoom; // 0x3ac(0x04)
	struct UDataTable* TextStyles; // 0x3b0(0x08)
	struct UDataTable* TextStylesMoble; // 0x3b8(0x08)
	struct FName GraphRowName; // 0x3c0(0x0c)

	void SetDefaultToBold(); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.SetDefaultToBold // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ForwardFontInfoToGraph(); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.ForwardFontInfoToGraph // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ForwardConfigToGraph(); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.ForwardConfigToGraph // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerFacingPerfGraphWrapper(int32_t EntryPoint); // Function PlayerFacingPerfGraphWrapper.PlayerFacingPerfGraphWrapper_C.ExecuteUbergraph_PlayerFacingPerfGraphWrapper // (Final|UbergraphFunction) // @ game+0x1b42740
};


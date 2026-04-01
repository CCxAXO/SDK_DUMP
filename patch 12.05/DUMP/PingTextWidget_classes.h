// WidgetBlueprintGeneratedClass PingTextWidget.PingTextWidget_C
// Size: 0x341 (Inherited: 0x318)
struct UPingTextWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Distance; // 0x320(0x08)
	struct UTextBlock* Meters; // 0x328(0x08)
	struct UTextBlock* Region; // 0x330(0x08)
	struct UTextBlock* Subject; // 0x338(0x08)
	enum class ESlateVisibility BaseDistanceTextVisibility; // 0x340(0x01)

	void SetDistanceTextVisibility(enum class ESlateVisibility InVisibility); // Function PingTextWidget.PingTextWidget_C.SetDistanceTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRegionText(struct FText RegionText); // Function PingTextWidget.PingTextWidget_C.SetRegionText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubjectText(struct FText SubjectText); // Function PingTextWidget.PingTextWidget_C.SetSubjectText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PingTextWidget.PingTextWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PingTextWidget.PingTextWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PingTextWidget(int32_t EntryPoint); // Function PingTextWidget.PingTextWidget_C.ExecuteUbergraph_PingTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


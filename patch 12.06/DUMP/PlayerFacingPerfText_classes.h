// WidgetBlueprintGeneratedClass PlayerFacingPerfText.PlayerFacingPerfText_C
// Size: 0x3d8 (Inherited: 0x320)
struct UPlayerFacingPerfText_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UHorizontalBox* HorizontalBox_32; // 0x328(0x08)
	struct URichTextBlock* MetricName; // 0x330(0x08)
	struct URichTextBlock* PrimaryMetric; // 0x338(0x08)
	struct URichTextBlock* SecondaryMetric; // 0x340(0x08)
	bool IsSettingsEnabled; // 0x348(0x01)
	enum class EPlayerPerfMetricCategory Metric Category; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct TArray<struct FTextMetricEntry> Metric Stats; // 0x350(0x10)
	struct UPlayerFacingPerfMetric* Metric; // 0x360(0x08)
	struct FText Metric Name; // 0x368(0x18)
	struct TMap<enum class EPlayerPerfStatField, struct UPlayerFacingPerfTextMetric_C*> TextMetrics; // 0x380(0x50)
	struct UPlayerFacingPerfTextMetric_C* CachedPlayerFacingPerfTextMetric; // 0x3d0(0x08)

	void OnDataUpdated(); // Function PlayerFacingPerfText.PlayerFacingPerfText_C.OnDataUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function PlayerFacingPerfText.PlayerFacingPerfText_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function PlayerFacingPerfText.PlayerFacingPerfText_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerFacingPerfText(int32_t EntryPoint); // Function PlayerFacingPerfText.PlayerFacingPerfText_C.ExecuteUbergraph_PlayerFacingPerfText // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


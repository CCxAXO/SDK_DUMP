// WidgetBlueprintGeneratedClass CountdownPingTextWidget.CountdownPingTextWidget_C
// Size: 0x348 (Inherited: 0x318)
struct UCountdownPingTextWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* MessageWidgetSwitcher; // 0x320(0x08)
	struct UTextBlock* NowText; // 0x328(0x08)
	struct UTextBlock* PushingInText; // 0x330(0x08)
	struct UTextBlock* PushingText; // 0x338(0x08)
	struct UTextBlock* SecondsText; // 0x340(0x08)

	void ResetWidget(); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.ResetWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRemainingSeconds(int32_t Seconds); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.SetRemainingSeconds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CountdownPingTextWidget(int32_t EntryPoint); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.ExecuteUbergraph_CountdownPingTextWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


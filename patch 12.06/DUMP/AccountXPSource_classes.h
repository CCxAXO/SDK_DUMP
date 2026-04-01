// WidgetBlueprintGeneratedClass AccountXPSource.AccountXPSource_C
// Size: 0x358 (Inherited: 0x318)
struct UAccountXPSource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FlyIn; // 0x320(0x08)
	struct UWidgetAnimation* Flyout; // 0x328(0x08)
	struct UWidgetAnimation* Default; // 0x330(0x08)
	struct UTextBlock* XPSource; // 0x338(0x08)
	struct FText SourceText; // 0x340(0x18)

	void Set XPSource(struct FText SourceInfo); // Function AccountXPSource.AccountXPSource_C.Set XPSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AccountXPSource.AccountXPSource_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AccountXPSource.AccountXPSource_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AccountXPSource(int32_t EntryPoint); // Function AccountXPSource.AccountXPSource_C.ExecuteUbergraph_AccountXPSource // (Final|UbergraphFunction) // @ game+0x1b42740
};


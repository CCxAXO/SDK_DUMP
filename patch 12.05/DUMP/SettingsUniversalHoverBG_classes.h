// WidgetBlueprintGeneratedClass SettingsUniversalHoverBG.SettingsUniversalHoverBG_C
// Size: 0x338 (Inherited: 0x320)
struct USettingsUniversalHoverBG_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UImage* HoverImage; // 0x330(0x08)

	void Construct(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnHoverState(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.OnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnHoverState(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.OnUnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SettingsUniversalHoverBG(int32_t EntryPoint); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.ExecuteUbergraph_SettingsUniversalHoverBG // (Final|UbergraphFunction) // @ game+0x1af5410
};


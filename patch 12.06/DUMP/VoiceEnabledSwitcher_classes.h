// WidgetBlueprintGeneratedClass VoiceEnabledSwitcher.VoiceEnabledSwitcher_C
// Size: 0x338 (Inherited: 0x318)
struct UVoiceEnabledSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresWidgetSwitcher* Switcher; // 0x320(0x08)
	struct UNamedSlot* VoiceDisabledSlot; // 0x328(0x08)
	struct UNamedSlot* VoiceEnabledSlot; // 0x330(0x08)

	void HandleAnyConfigChanged(struct FName& ConfigName); // Function VoiceEnabledSwitcher.VoiceEnabledSwitcher_C.HandleAnyConfigChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindVoiceListeners(); // Function VoiceEnabledSwitcher.VoiceEnabledSwitcher_C.BindVoiceListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayCurrentSlot(); // Function VoiceEnabledSwitcher.VoiceEnabledSwitcher_C.DisplayCurrentSlot // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function VoiceEnabledSwitcher.VoiceEnabledSwitcher_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VoiceEnabledSwitcher(int32_t EntryPoint); // Function VoiceEnabledSwitcher.VoiceEnabledSwitcher_C.ExecuteUbergraph_VoiceEnabledSwitcher // (Final|UbergraphFunction) // @ game+0x1b42740
};


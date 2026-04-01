// WidgetBlueprintGeneratedClass SingleAbilityEffectWidget.SingleAbilityEffectWidget_C
// Size: 0x3a8 (Inherited: 0x318)
struct USingleAbilityEffectWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* ConsolePanel; // 0x320(0x08)
	struct USizeBox* DesktopPanel; // 0x328(0x08)
	struct USizeBox* DesktopPanel_Legacy; // 0x330(0x08)
	struct UCommonVisibilitySwitcher* PlatformSwitcher; // 0x338(0x08)
	struct UAresCommonText* TitleText_Console; // 0x340(0x08)
	struct UAresCommonText* TitleText_Desktop; // 0x348(0x08)
	struct UTextBlock* TitleText_Desktop_Legacy; // 0x350(0x08)
	struct UAresCommonText* ValueText_Console; // 0x358(0x08)
	struct UAresCommonText* ValueText_Desktop; // 0x360(0x08)
	struct UTextBlock* ValueText_Desktop_Legacy; // 0x368(0x08)
	struct FCharacterAbilityEffectInfo Effect; // 0x370(0x38)

	void FormatValue(struct FCharacterAbilityEffectInfo Effect, struct FText& FormattedValue); // Function SingleAbilityEffectWidget.SingleAbilityEffectWidget_C.FormatValue // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PopulateValues(struct FCharacterAbilityEffectInfo Effect); // Function SingleAbilityEffectWidget.SingleAbilityEffectWidget_C.PopulateValues // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SingleAbilityEffectWidget.SingleAbilityEffectWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SingleAbilityEffectWidget(int32_t EntryPoint); // Function SingleAbilityEffectWidget.SingleAbilityEffectWidget_C.ExecuteUbergraph_SingleAbilityEffectWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


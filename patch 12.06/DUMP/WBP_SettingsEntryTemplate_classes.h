// WidgetBlueprintGeneratedClass WBP_SettingsEntryTemplate.WBP_SettingsEntryTemplate_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_SettingsEntryTemplate_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UNamedSlot* PrimaryTextSlot; // 0x3e8(0x08)
	struct UNamedSlot* SecondaryTextSlot; // 0x3f0(0x08)
	struct UNamedSlot* SettingComponentSlot; // 0x3f8(0x08)
	struct UNamedSlot* TooltipSlot; // 0x400(0x08)

	void SetSecondaryTextVisibility(); // Function WBP_SettingsEntryTemplate.WBP_SettingsEntryTemplate_C.SetSecondaryTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsEntryTemplate.WBP_SettingsEntryTemplate_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_SettingsEntryTemplate.WBP_SettingsEntryTemplate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_SettingsEntryTemplate(int32_t EntryPoint); // Function WBP_SettingsEntryTemplate.WBP_SettingsEntryTemplate_C.ExecuteUbergraph_WBP_SettingsEntryTemplate // (Final|UbergraphFunction) // @ game+0x1b42740
};


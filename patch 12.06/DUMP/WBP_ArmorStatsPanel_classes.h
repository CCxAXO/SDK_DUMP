// WidgetBlueprintGeneratedClass WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C
// Size: 0x350 (Inherited: 0x318)
struct UWBP_ArmorStatsPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* ArmorIcon; // 0x320(0x08)
	struct UTextBlock* ArmorName; // 0x328(0x08)
	struct UVerticalBox* DescriptionBox; // 0x330(0x08)
	struct UVerticalBox* DetailEntries; // 0x338(0x08)
	struct UArmorUIData* ArmorUIData; // 0x340(0x08)
	struct UArmorUIData* PreviewData; // 0x348(0x08)

	void UpdateDescriptions(); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.UpdateDescriptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDetails(); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.UpdateDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateName(); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIcon(); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContent(struct UArmorUIData* Data); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_ArmorStatsPanel(int32_t EntryPoint); // Function WBP_ArmorStatsPanel.WBP_ArmorStatsPanel_C.ExecuteUbergraph_WBP_ArmorStatsPanel // (Final|UbergraphFunction) // @ game+0x1b42740
};


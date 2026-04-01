// WidgetBlueprintGeneratedClass WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C
// Size: 0x1b94 (Inherited: 0x1ae0)
struct UWBP_Button_Esports_PickemGroupEntry_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x1ae8(0x08)
	struct UAresButtonBorderComponent* ButtonBorder; // 0x1af0(0x08)
	struct UImage* Image_border; // 0x1af8(0x08)
	struct UImage* Image_HeaderBackground_Default; // 0x1b00(0x08)
	struct UImage* Image_HoverGradient; // 0x1b08(0x08)
	struct UNamedSlot* NamedSlot_Body; // 0x1b10(0x08)
	struct UNamedSlot* NamedSlot_Header; // 0x1b18(0x08)
	struct UOverlay* Overlay_HeaderBackground; // 0x1b20(0x08)
	struct USizeBox* SizeBox_Header; // 0x1b28(0x08)
	struct FSlateColor StandardHeaderColor; // 0x1b30(0x14)
	struct FSlateColor AdvancingHeaderColor; // 0x1b44(0x14)
	struct FSlateColor PerfectStandardHeaderColor; // 0x1b58(0x14)
	char pad_1B6C[0x4]; // 0x1b6c(0x04)
	struct UCommonButtonStyle* StandardButtonStyle; // 0x1b70(0x08)
	struct UCommonButtonStyle* PerfectButtonStyle; // 0x1b78(0x08)
	struct FSlateColor PerfectAdvancingHeaderColor; // 0x1b80(0x14)

	void UpdateAppearanceSwiss(); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.UpdateAppearanceSwiss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAppearance(bool IsAdvancingEntry, bool IsPerfect); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.UpdateAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionPressed(); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionReleased(); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Esports_PickemGroupEntry(int32_t EntryPoint); // Function WBP_Button_Esports_PickemGroupEntry.WBP_Button_Esports_PickemGroupEntry_C.ExecuteUbergraph_WBP_Button_Esports_PickemGroupEntry // (Final|UbergraphFunction) // @ game+0x1af5410
};


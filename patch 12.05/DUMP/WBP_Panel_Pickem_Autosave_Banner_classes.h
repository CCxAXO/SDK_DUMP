// WidgetBlueprintGeneratedClass WBP_Panel_Pickem_Autosave_Banner.WBP_Panel_Pickem_Autosave_Banner_C
// Size: 0x690 (Inherited: 0x318)
struct UWBP_Panel_Pickem_Autosave_Banner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Show; // 0x320(0x08)
	struct UImage* Image_Icon; // 0x328(0x08)
	struct UAresCommonText* Text_State; // 0x330(0x08)
	enum class EEsportsPickemAutosaveState PreviewAutosaveState; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FSlateBrush PendingChangesIcon; // 0x340(0xd0)
	struct FSlateBrush SavingIcon; // 0x410(0xd0)
	struct FSlateBrush SavedIcon; // 0x4e0(0xd0)
	struct FSlateBrush ErrorIcon; // 0x5b0(0xd0)
	struct UCommonTextStyle* StandardTextStyle; // 0x680(0x08)
	struct UCommonTextStyle* ErrorTextStyle; // 0x688(0x08)

	void ApplyStateAppearance(enum class EEsportsPickemAutosaveState AutosaveState); // Function WBP_Panel_Pickem_Autosave_Banner.WBP_Panel_Pickem_Autosave_Banner_C.ApplyStateAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Pickem_Autosave_Banner.WBP_Panel_Pickem_Autosave_Banner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Pickem_Autosave_Banner(int32_t EntryPoint); // Function WBP_Panel_Pickem_Autosave_Banner.WBP_Panel_Pickem_Autosave_Banner_C.ExecuteUbergraph_WBP_Panel_Pickem_Autosave_Banner // (Final|UbergraphFunction) // @ game+0x1af5410
};


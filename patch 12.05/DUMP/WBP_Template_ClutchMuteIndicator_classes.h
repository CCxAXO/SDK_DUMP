// WidgetBlueprintGeneratedClass WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C
// Size: 0x3bc (Inherited: 0x318)
struct UWBP_Template_ClutchMuteIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Appear; // 0x320(0x08)
	struct UBorder* Border_Content; // 0x328(0x08)
	struct UBorder* Border_InputAction; // 0x330(0x08)
	struct UBorder* Border_Text; // 0x338(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN_MuteAction; // 0x340(0x08)
	struct UAresCommonRichText* Text_Label; // 0x348(0x08)
	struct UAresCommonText* Text_Label_Old; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x358(0x08)
	struct FName ActionName; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FText MuteText; // 0x370(0x18)
	bool bIsMuted; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FText UnmuteText; // 0x390(0x18)
	bool bIsUsingLegacyAppearance; // 0x3a8(0x01)
	bool bPreviewLegacyAppearance; // 0x3a9(0x01)
	char pad_3AA[0x2]; // 0x3aa(0x02)
	struct FLinearColor TextColor; // 0x3ac(0x10)

	void CacheIsUsingLegacyAppearance(); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.CacheIsUsingLegacyAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetIsMuted(bool bInIsMuted); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.SetIsMuted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAppearance(); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.UpdateAppearance // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowIndicator(); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.ShowIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideIndicator(); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.HideIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_ClutchMuteIndicator(int32_t EntryPoint); // Function WBP_Template_ClutchMuteIndicator.WBP_Template_ClutchMuteIndicator_C.ExecuteUbergraph_WBP_Template_ClutchMuteIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


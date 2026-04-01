// WidgetBlueprintGeneratedClass WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_RewardThumbnail_Switcher_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* RewardThumbnailOverlay; // 0x3e8(0x08)
	struct TMap<struct UOfferDTO*, struct UWBP_Panel_RewardThumbnail_Interface_C*> OfferToRewardWidget; // 0x3f0(0x50)
	struct UWBP_Panel_RewardThumbnail_Interface_C* RewardPreviewWidget; // 0x440(0x08)
	struct UWBP_Panel_RewardThumbnail_Interface_C* PanelWidget; // 0x448(0x08)

	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnParentUnhovered(); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.OnParentUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnParentHovered(); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.OnParentHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.UpdateColorAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Reward Preview Widget(struct UWBP_Panel_RewardThumbnail_Interface_C* InPanelWidget, struct UWBP_Panel_RewardThumbnail_Interface_C*& Widget); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.Set Reward Preview Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RewardThumbnail_Switcher(int32_t EntryPoint); // Function WBP_Panel_RewardThumbnail_Switcher.WBP_Panel_RewardThumbnail_Switcher_C.ExecuteUbergraph_WBP_Panel_RewardThumbnail_Switcher // (Final|UbergraphFunction) // @ game+0x1b42740
};


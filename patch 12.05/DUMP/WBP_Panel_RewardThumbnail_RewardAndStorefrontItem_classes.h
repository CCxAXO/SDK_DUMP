// WidgetBlueprintGeneratedClass WBP_Panel_RewardThumbnail_RewardAndStorefrontItem.WBP_Panel_RewardThumbnail_RewardAndStorefrontItem_C
// Size: 0x418 (Inherited: 0x400)
struct UWBP_Panel_RewardThumbnail_RewardAndStorefrontItem_C : UWBP_Panel_RewardThumbnail_Interface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWBP_Panel_RewardThumbnail_RewardShadow_C* WBP_Panel_RewardThumbnail_From_Reward_With_Shadow; // 0x408(0x08)
	struct UWBP_Panel_RewardThumbnail_StorefrontItem_C* WBP_Panel_RewardThumbnail_LogoIcon; // 0x410(0x08)

	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardThumbnail_RewardAndStorefrontItem.WBP_Panel_RewardThumbnail_RewardAndStorefrontItem_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RewardThumbnail_RewardAndStorefrontItem(int32_t EntryPoint); // Function WBP_Panel_RewardThumbnail_RewardAndStorefrontItem.WBP_Panel_RewardThumbnail_RewardAndStorefrontItem_C.ExecuteUbergraph_WBP_Panel_RewardThumbnail_RewardAndStorefrontItem // (Final|UbergraphFunction) // @ game+0x1af5410
};


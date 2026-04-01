// WidgetBlueprintGeneratedClass SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C
// Size: 0x410 (Inherited: 0x318)
struct USubscriptionRewards_DetailsModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ActivePrograms_Subtitle; // 0x320(0x08)
	struct USubscription_RewardItem_DetailsModal_C* Agents_Item; // 0x328(0x08)
	struct UImage* BackgroundBrightSpot; // 0x330(0x08)
	struct UImage* BackgroundOverlay; // 0x338(0x08)
	struct UImage* BGLineOrnamentTL; // 0x340(0x08)
	struct UImage* BGLineOrnamentTL_2; // 0x348(0x08)
	struct UImage* BGOrnamentationBlockArrow; // 0x350(0x08)
	struct UImage* BGOrnamentLeft; // 0x358(0x08)
	struct UImage* BGOrnamentMainBtm; // 0x360(0x08)
	struct UImage* BGOrnamentRight; // 0x368(0x08)
	struct UImage* BGRectangularOrnamentTL; // 0x370(0x08)
	struct UImage* BGRectangularOrnamentTL_2; // 0x378(0x08)
	struct UImage* BGRectangularOrnamentTR; // 0x380(0x08)
	struct UImage* BGSquareOrnamentBL; // 0x388(0x08)
	struct UImage* BGSquareOrnamentTL; // 0x390(0x08)
	struct UImage* BGSquareOrnamentTR; // 0x398(0x08)
	struct UImage* CenterPiece; // 0x3a0(0x08)
	struct UImage* Divider; // 0x3a8(0x08)
	struct UImage* DotL; // 0x3b0(0x08)
	struct UImage* DotR; // 0x3b8(0x08)
	struct USubscription_RewardItem_DetailsModal_C* GunBuddies_Item; // 0x3c0(0x08)
	struct ULargeModal_C* LargeModal; // 0x3c8(0x08)
	struct USubscription_RewardItem_DetailsModal_C* PlayerCards_Item; // 0x3d0(0x08)
	struct USubscription_RewardItem_DetailsModal_C* PlayerTitles_Item; // 0x3d8(0x08)
	struct UVerticalBox* RewardsOverview_Container; // 0x3e0(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x3e8(0x08)
	struct USubscription_RewardItem_DetailsModal_C* Sprays_Item; // 0x3f0(0x08)
	struct USubscription_RewardItem_DetailsModal_C* WeaponSkins_Item; // 0x3f8(0x08)
	struct UImage* XBOXPassAgentBackground; // 0x400(0x08)
	struct USubscription_RewardItem_DetailsModal_C* XpRewards; // 0x408(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update_SubscriptionRewardItem(enum class ESubscriptionRewardType SubscriptionRewardType, struct FText Title, struct FText Details); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.Update_SubscriptionRewardItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update_ActiveProgramsSubtitle(struct FText SubscriptionsList); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.Update_ActiveProgramsSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SubscriptionRewards_DetailsModal(int32_t EntryPoint); // Function SubscriptionRewards_DetailsModal.SubscriptionRewards_DetailsModal_C.ExecuteUbergraph_SubscriptionRewards_DetailsModal // (Final|UbergraphFunction) // @ game+0x1af5410
};


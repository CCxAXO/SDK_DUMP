// WidgetBlueprintGeneratedClass WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_Pickem_Event_Reward_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* backdrop; // 0x3e8(0x08)
	struct UImage* base; // 0x3f0(0x08)
	struct UAresCommonText* CT_RewardName; // 0x3f8(0x08)
	struct UAresCommonText* CT_RewardRequirements; // 0x400(0x08)
	struct UImage* Outline; // 0x408(0x08)
	struct UImage* Reward_Icon; // 0x410(0x08)
	struct UImage* Reward_Owned_check; // 0x418(0x08)
	struct UImage* Reward_Owned_Icon; // 0x420(0x08)
	struct UPickemRewardModel* PickemReward; // 0x428(0x08)

	void OnTitleLoaded(struct UPlayerTitleHandle* PlayerTitleHandle); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.OnTitleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReinitializeReward(struct UPickemRewardModel* NewPickemReward); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.ReinitializeReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRewardRequirements(struct FText NewParam); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.SetRewardRequirements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippableCharmLevelLoaded(struct UEquippableCharmLevelHandle* EquippableCharmLevelHandle); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.OnEquippableCharmLevelLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippableCharmLoaded(struct UEquippableCharmHandle* EquippableCharmHandle); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.OnEquippableCharmLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSprayLoaded(struct USprayHandle* SprayHandle); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.OnSprayLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitReward(); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.InitReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Pickem_Event_Reward(int32_t EntryPoint); // Function WBP_Panel_Pickem_Event_Reward.WBP_Panel_Pickem_Event_Reward_C.ExecuteUbergraph_WBP_Panel_Pickem_Event_Reward // (Final|UbergraphFunction) // @ game+0x1af5410
};


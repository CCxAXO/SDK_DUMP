// WidgetBlueprintGeneratedClass WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_Pickem_Event_Rewards_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BG; // 0x3e8(0x08)
	struct UImage* BG_2; // 0x3f0(0x08)
	struct UImage* Image_208; // 0x3f8(0x08)
	struct UWBP_Panel_Pickem_Event_Reward_C* ParticipationRewardObject; // 0x400(0x08)
	struct UHorizontalBox* Pickem_Rewards; // 0x408(0x08)
	struct TArray<struct FText> AwardTitles; // 0x410(0x10)
	struct UPickemEventInfoViewModel* PickemEventVM; // 0x420(0x08)

	void InitOnPickemScreenReady(); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.InitOnPickemScreenReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Pickem Event VM Has Valid Data Changed(bool InHasValidData); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.On Pickem Event VM Has Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromModelEvents(bool ShouldBind); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.BindToOrUnbindFromModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeRewards(struct TArray<struct UPickemRewardModel*>& Pickem Reward Models); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.InitializeRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Pickem_Event_Rewards(int32_t EntryPoint); // Function WBP_Panel_Pickem_Event_Rewards.WBP_Panel_Pickem_Event_Rewards_C.ExecuteUbergraph_WBP_Panel_Pickem_Event_Rewards // (Final|UbergraphFunction) // @ game+0x1af5410
};


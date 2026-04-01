// WidgetBlueprintGeneratedClass DailyRewardsBase.DailyRewardsBase_C
// Size: 0x328 (Inherited: 0x318)
struct UDailyRewardsBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDailyRewardsMilestones_C* DailyRewardsMilestones; // 0x320(0x08)

	void Init(); // Function DailyRewardsBase.DailyRewardsBase_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DailyRewardsBase.DailyRewardsBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnDailyRewardsChanged(); // Function DailyRewardsBase.DailyRewardsBase_C.OnDailyRewardsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function DailyRewardsBase.DailyRewardsBase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsBase(int32_t EntryPoint); // Function DailyRewardsBase.DailyRewardsBase_C.ExecuteUbergraph_DailyRewardsBase // (Final|UbergraphFunction) // @ game+0x1b42740
};


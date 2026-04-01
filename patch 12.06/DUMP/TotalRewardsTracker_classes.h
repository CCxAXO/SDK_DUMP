// WidgetBlueprintGeneratedClass TotalRewardsTracker.TotalRewardsTracker_C
// Size: 0x340 (Inherited: 0x318)
struct UTotalRewardsTracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* 3Box; // 0x320(0x08)
	struct UWidgetAnimation* 2Box; // 0x328(0x08)
	struct UDoughCounter_C* DoughCounter; // 0x330(0x08)
	struct UXPCounter_C* XPCounter; // 0x338(0x08)

	void SequenceEvent__ENTRYPOINTTotalRewardsTracker_3(); // Function TotalRewardsTracker.TotalRewardsTracker_C.SequenceEvent__ENTRYPOINTTotalRewardsTracker_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTTotalRewardsTracker_2(); // Function TotalRewardsTracker.TotalRewardsTracker_C.SequenceEvent__ENTRYPOINTTotalRewardsTracker_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTTotalRewardsTracker_1(); // Function TotalRewardsTracker.TotalRewardsTracker_C.SequenceEvent__ENTRYPOINTTotalRewardsTracker_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTTotalRewardsTracker(); // Function TotalRewardsTracker.TotalRewardsTracker_C.SequenceEvent__ENTRYPOINTTotalRewardsTracker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateFullTracker(bool Is Ranked Game); // Function TotalRewardsTracker.TotalRewardsTracker_C.AnimateFullTracker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowEndState(int32_t XP, int32_t Dough); // Function TotalRewardsTracker.TotalRewardsTracker_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function TotalRewardsTracker.TotalRewardsTracker_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TrickleRewards(int32_t XPFrom, int32_t XPTo, int32_t DoughFrom, int32_t DoughTo, struct FTimespan Duration); // Function TotalRewardsTracker.TotalRewardsTracker_C.TrickleRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AudioEvent_XP_Slide(); // Function TotalRewardsTracker.TotalRewardsTracker_C.AudioEvent_XP_Slide // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AudioEvent_DoughFlip(); // Function TotalRewardsTracker.TotalRewardsTracker_C.AudioEvent_DoughFlip // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TotalRewardsTracker(int32_t EntryPoint); // Function TotalRewardsTracker.TotalRewardsTracker_C.ExecuteUbergraph_TotalRewardsTracker // (Final|UbergraphFunction) // @ game+0x1b42740
};


// BlueprintGeneratedClass Comp_Controller_AutoShowScoreboard.Comp_Controller_AutoShowScoreboard_C
// Size: 0x101 (Inherited: 0xd8)
struct UComp_Controller_AutoShowScoreboard_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnScoreboardAutoShowScoreboardStart; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnScoreboardAutoShowScoreboardStop; // 0xf0(0x10)
	bool AutoShowScoreboard; // 0x100(0x01)

	void Event Set Auto Scoreboard(bool ShouldForceScoreboard); // Function Comp_Controller_AutoShowScoreboard.Comp_Controller_AutoShowScoreboard_C.Event Set Auto Scoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Controller_AutoShowScoreboard(int32_t EntryPoint); // Function Comp_Controller_AutoShowScoreboard.Comp_Controller_AutoShowScoreboard_C.ExecuteUbergraph_Comp_Controller_AutoShowScoreboard // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnScoreboardAutoShowScoreboardStop__DelegateSignature(); // Function Comp_Controller_AutoShowScoreboard.Comp_Controller_AutoShowScoreboard_C.OnScoreboardAutoShowScoreboardStop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreboardAutoShowScoreboardStart__DelegateSignature(); // Function Comp_Controller_AutoShowScoreboard.Comp_Controller_AutoShowScoreboard_C.OnScoreboardAutoShowScoreboardStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


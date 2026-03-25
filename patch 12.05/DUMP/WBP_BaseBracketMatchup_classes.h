// WidgetBlueprintGeneratedClass WBP_BaseBracketMatchup.WBP_BaseBracketMatchup_C
// Size: 0x3e2 (Inherited: 0x3e0)
struct UWBP_BaseBracketMatchup_C : UAresCommonUserWidget {
	enum class EBracketMatchupID MatchupBracketID; // 0x3e0(0x01)
	enum class EBracketType BracketType; // 0x3e1(0x01)

	void SetBracketType(enum class EBracketType InBracketType); // Function WBP_BaseBracketMatchup.WBP_BaseBracketMatchup_C.SetBracketType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UAresViewModelBase* InViewModel); // Function WBP_BaseBracketMatchup.WBP_BaseBracketMatchup_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMatchupBracketID(enum class EBracketMatchupID& OutMatchupBracketID); // Function WBP_BaseBracketMatchup.WBP_BaseBracketMatchup_C.GetMatchupBracketID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchupBracketID(enum class EBracketMatchupID InMatchupBracketID); // Function WBP_BaseBracketMatchup.WBP_BaseBracketMatchup_C.SetMatchupBracketID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


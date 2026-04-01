// WidgetBlueprintGeneratedClass MatchDetailsTabBase.MatchDetailsTabBase_C
// Size: 0x5a9 (Inherited: 0x318)
struct UMatchDetailsTabBase_C : UUserWidget {
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x318(0x278)
	struct FMulticastInlineDelegate OnInit; // 0x590(0x10)
	struct UMatchDetailsViewModel* MatchDetailsViewModel; // 0x5a0(0x08)
	bool IsEndOfGame; // 0x5a8(0x01)

	void Init(struct FProcessedMatchDetails ProcessedMatchDetailsDTO, struct UMatchDetailsViewModel* ViewModel, bool IsEndOfGame); // Function MatchDetailsTabBase.MatchDetailsTabBase_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInit__DelegateSignature(); // Function MatchDetailsTabBase.MatchDetailsTabBase_C.OnInit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


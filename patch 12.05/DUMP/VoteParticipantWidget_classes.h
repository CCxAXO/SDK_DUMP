// WidgetBlueprintGeneratedClass VoteParticipantWidget.VoteParticipantWidget_C
// Size: 0x378 (Inherited: 0x330)
struct UVoteParticipantWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Voter_AFK; // 0x338(0x08)
	struct UImage* Voter_Normal; // 0x340(0x08)
	struct FString Text; // 0x348(0x10)
	struct FLinearColor NoColor; // 0x358(0x10)
	struct FLinearColor YesColor; // 0x368(0x10)

	struct FText GetText_1(); // Function VoteParticipantWidget.VoteParticipantWidget_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetState(enum class VoteParticipantStateEnum State); // Function VoteParticipantWidget.VoteParticipantWidget_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function VoteParticipantWidget.VoteParticipantWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VoteParticipantWidget(int32_t EntryPoint); // Function VoteParticipantWidget.VoteParticipantWidget_C.ExecuteUbergraph_VoteParticipantWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


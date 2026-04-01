// BlueprintGeneratedClass GameplayVoteOptionBase.GameplayVoteOptionBase_C
// Size: 0x180 (Inherited: 0x130)
struct UGameplayVoteOptionBase_C : UGameplayVoteOptionComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	struct FText ButtonText; // 0x138(0x18)
	struct FText ResultsDescription; // 0x150(0x18)
	struct FText ResultsDescriptionObserver; // 0x168(0x18)

	struct FText GetVoteOptionDebugText(); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetVoteOptionDebugText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void FormatTextForResultsScreen(struct UTextBlock* TextWidget); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.FormatTextForResultsScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetButtonCheckAndTextVisibility(enum class ESlateVisibility& TextVisibility, enum class ESlateVisibility& CheckVisibility); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetButtonCheckAndTextVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetButtonTextWithKeybind(struct FText& ButtonTextWithKeybind); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.GetButtonTextWithKeybind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void AuthNotifyAllObservers(struct FText NotificationText); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.AuthNotifyAllObservers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthNotifyAllParticipants(struct FText NotificationText); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.AuthNotifyAllParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelected(); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.OnSelected // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameplayVoteOptionBase(int32_t EntryPoint); // Function GameplayVoteOptionBase.GameplayVoteOptionBase_C.ExecuteUbergraph_GameplayVoteOptionBase // (Final|UbergraphFunction) // @ game+0x1b42740
};


// BlueprintGeneratedClass VM_PenaltyFeedback.VM_PenaltyFeedback_C
// Size: 0x148 (Inherited: 0x90)
struct UVM_PenaltyFeedback_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FString MatchID; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPlayerPenaltyFeedbackChanged; // 0xa8(0x10)
	struct URestrictionsManager* RestrictionsManager; // 0xb8(0x08)
	struct FString ObservedSubject; // 0xc0(0x10)
	struct TSet<struct FString> TranslatedInfractions; // 0xd0(0x50)
	struct FString URLPenaltyFeedback; // 0x120(0x10)
	struct FName MatchIDParameterName; // 0x130(0x0c)
	struct FName ObservedSubjectParameterName; // 0x13c(0x0c)

	void GetCommunityCodeURL(struct FText& CommunityCodeURL); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.GetCommunityCodeURL // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCommunityCodeQRCodeImage(struct UTexture2D*& QRCodeImage); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.GetCommunityCodeQRCodeImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayPenaltyFeedbackSideScreen(); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.DisplayPenaltyFeedbackSideScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchID(struct FString MatchID); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedSubject(struct FString ObservedSubject); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.SetObservedSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Penalty Feedback(bool& HasPenaltyFeedback, struct TArray<enum class EInfractionType>& Infractions); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.Get Penalty Feedback // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPenaltyFeedbackText(struct TArray<bool>& Infractions, struct FText& InfractionsText); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.GetPenaltyFeedbackText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTranslatedInfractionType(enum class EInfractionType Infraction, struct FText& InfractionText); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.GetTranslatedInfractionType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Player Penalty Feedback(); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.Set Player Penalty Feedback // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToRestrictionsManager(struct URestrictionsManager* NewRestrictionsManager, bool Bind); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.BindToRestrictionsManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PenaltyFeedback(int32_t EntryPoint); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.ExecuteUbergraph_VM_PenaltyFeedback // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPlayerPenaltyFeedbackChanged__DelegateSignature(bool HasPenaltyFeedback, struct TArray<enum class EInfractionType>& Infractions); // Function VM_PenaltyFeedback.VM_PenaltyFeedback_C.OnPlayerPenaltyFeedbackChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


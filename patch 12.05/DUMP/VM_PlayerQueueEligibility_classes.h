// BlueprintGeneratedClass VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C
// Size: 0x100 (Inherited: 0xb8)
struct UVM_PlayerQueueEligibility_C : UVM_PartyPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	bool bIsQueueEligible; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FMulticastInlineDelegate OnIsQueueEligibleChanged; // 0xc8(0x10)
	struct FText QueueIneligibilityReason; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnQueueIneligibilityReasonChanged; // 0xf0(0x10)

	void GetQueueIneligibilityReason(struct FText& Reason); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.GetQueueIneligibilityReason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FormatRemainingAccountLevelsIneligibilityText(struct FText& IneligibilityText); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.FormatRemainingAccountLevelsIneligibilityText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FormatIneligibleRosterPartyMemberText(struct FText& IneligibilityText); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.FormatIneligibleRosterPartyMemberText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FormatSkillDisparityText(struct FText& IneligibilityText); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.FormatSkillDisparityText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetQueueIneligibilityReason(struct FText NewIneligibleReason); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.SetQueueIneligibilityReason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRosterPartyIneligibleReasonChanged(enum class ERosterPartyMemberEligibility RosterPartyIneligibleReason); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.HandleRosterPartyIneligibleReasonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsQueueEligible(bool& bIsQueueEligible); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.GetIsQueueEligible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.RefreshAllData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsQueueEligible(bool bNewValue); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.SetIsQueueEligible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueEligibility(); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.UpdateQueueEligibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIneligiblePlayerSubjectsChanged(struct TSet<struct FString> IneligibleToPlayWithSubjects); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.HandleIneligiblePlayerSubjectsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRemainingAccountLevelsChanged(int32_t NewValue); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.HandleRemainingAccountLevelsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindPartyPlayerModel(struct UPartyPlayerModel* PartyPlayerModel, bool bDoBind); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.BindOrUnbindPartyPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerQueueEligibility(int32_t EntryPoint); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.ExecuteUbergraph_VM_PlayerQueueEligibility // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnQueueIneligibilityReasonChanged__DelegateSignature(struct FText IneligibilityReason); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.OnQueueIneligibilityReasonChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsQueueEligibleChanged__DelegateSignature(bool bIsQueueEligible); // Function VM_PlayerQueueEligibility.VM_PlayerQueueEligibility_C.OnIsQueueEligibleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


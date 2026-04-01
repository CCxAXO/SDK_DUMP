// BlueprintGeneratedClass VM_SocialPartyState.VM_SocialPartyState_C
// Size: 0x129 (Inherited: 0x90)
struct UVM_SocialPartyState_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	int32_t PartySize; // 0x98(0x04)
	enum class EAresSocialPartyAccessibility PartyAccessibility; // 0x9c(0x01)
	enum class EAresSocialPartyCompatibility PartyCompatibility; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	struct FMulticastInlineDelegate OnPartySizeChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnPartyAccessibilityChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnPartyCompatibilityChanged; // 0xc0(0x10)
	struct FString PartyId; // 0xd0(0x10)
	int32_t ExcludedPartyMemberCount; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastInlineDelegate OnExcludedPartyMemberCountChanged; // 0xe8(0x10)
	bool bIsVisibleParty; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FMulticastInlineDelegate OnIsVisiblePartyChanged; // 0x100(0x10)
	int32_t MaxPartySize; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FMulticastInlineDelegate OnMaxPartySizeChanged; // 0x118(0x10)
	bool bListShouldFilter; // 0x128(0x01)

	void SetListShouldFilter(bool bListShouldFilter); // Function VM_SocialPartyState.VM_SocialPartyState_C.SetListShouldFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMaxPartySize(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdateMaxPartySize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMaxPartySize(int32_t& MemberCount); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetMaxPartySize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetIsVisibleParty(bool& bIsVisibleParty); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetIsVisibleParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdatePartyVisibility(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdatePartyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetExcludedPartyMemberCount(int32_t& ExcludedPartyMemberCount); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetExcludedPartyMemberCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateExcludedPartyMemberCount(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdateExcludedPartyMemberCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePartyCompatibility(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdatePartyCompatibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePartyAccessibility(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdatePartyAccessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePartySize(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdatePartySize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCachedPartyState(struct FPartyData PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.UpdateCachedPartyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentPartyData(struct FPartyData& PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetCurrentPartyData // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPartyId(struct FString PartyId); // Function VM_SocialPartyState.VM_SocialPartyState_C.SetPartyId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PartyHasMultipleMembers(bool& Result); // Function VM_SocialPartyState.VM_SocialPartyState_C.PartyHasMultipleMembers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPartyCompatibility(enum class EAresSocialPartyCompatibility& PartyCompatibility); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetPartyCompatibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPartyAccessibility(enum class EAresSocialPartyAccessibility& PartyAccessibility); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetPartyAccessibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPartySize(int32_t& MemberCount); // Function VM_SocialPartyState.VM_SocialPartyState_C.GetPartySize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyChanged(struct FString PartyId, struct FPartyData& PartyData); // Function VM_SocialPartyState.VM_SocialPartyState_C.HandlePartyChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_SocialPartyState(int32_t EntryPoint); // Function VM_SocialPartyState.VM_SocialPartyState_C.ExecuteUbergraph_VM_SocialPartyState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMaxPartySizeChanged__DelegateSignature(int32_t MaxPartySize); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnMaxPartySizeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsVisiblePartyChanged__DelegateSignature(bool bIsVisibleParty); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnIsVisiblePartyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnExcludedPartyMemberCountChanged__DelegateSignature(int32_t ExcludedPartyMemberCount); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnExcludedPartyMemberCountChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyAccessibilityChanged__DelegateSignature(enum class EAresSocialPartyAccessibility PartyAccessibility); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnPartyAccessibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartySizeChanged__DelegateSignature(int32_t PartySize); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnPartySizeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyCompatibilityChanged__DelegateSignature(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function VM_SocialPartyState.VM_SocialPartyState_C.OnPartyCompatibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


// BlueprintGeneratedClass VM_Map_PromoTile.VM_Map_PromoTile_C
// Size: 0x160 (Inherited: 0x138)
struct UVM_Map_PromoTile_C : UVM_Interface_PromoTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FString DesktopQueueID; // 0x140(0x10)
	struct FString ConsoleQueueID; // 0x150(0x10)

	void OnQueueChangeFailure(enum class EPartyErrorEnum PartyErrorEnum); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.OnQueueChangeFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQueueChangeSuccess(); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.OnQueueChangeSuccess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClick(); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.Init // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_Map_PromoTile(int32_t EntryPoint); // Function VM_Map_PromoTile.VM_Map_PromoTile_C.ExecuteUbergraph_VM_Map_PromoTile // (Final|UbergraphFunction) // @ game+0x1b42740
};


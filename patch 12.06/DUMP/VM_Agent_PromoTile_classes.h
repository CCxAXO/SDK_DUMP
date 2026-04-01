// BlueprintGeneratedClass VM_Agent_PromoTile.VM_Agent_PromoTile_C
// Size: 0x148 (Inherited: 0x138)
struct UVM_Agent_PromoTile_C : UVM_Interface_PromoTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct URecruitmentEventViewModel* VM_RecruitmentEvent; // 0x140(0x08)

	void Handle On Config Manager Config Updated(struct FName& ConfigName); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Handle On Config Manager Config Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Background and Text from Recruitable Agent(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Set Background and Text from Recruitable Agent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle On Recruitable Agent Changed(struct UCharacterHandle* RecruitableAgent); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Handle On Recruitable Agent Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Prepare for Promotion(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Prepare for Promotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Should Show Recruitment Event Changed(bool Should Show Recruitment Event); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Handle Should Show Recruitment Event Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind Events(bool Bind); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init View Models(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClick(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.Init // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_Agent_PromoTile(int32_t EntryPoint); // Function VM_Agent_PromoTile.VM_Agent_PromoTile_C.ExecuteUbergraph_VM_Agent_PromoTile // (Final|UbergraphFunction) // @ game+0x1b42740
};


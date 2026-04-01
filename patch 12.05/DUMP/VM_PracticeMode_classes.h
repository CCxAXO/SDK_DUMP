// BlueprintGeneratedClass VM_PracticeMode.VM_PracticeMode_C
// Size: 0xb0 (Inherited: 0x90)
struct UVM_PracticeMode_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool CanEnterSoloExperience; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate CanEnterSoloExperienceChanged; // 0xa0(0x10)

	void SetCanEnterSoloExperience(bool CanEnter); // Function VM_PracticeMode.VM_PracticeMode_C.SetCanEnterSoloExperience // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyUpdated(); // Function VM_PracticeMode.VM_PracticeMode_C.OnPartyUpdated // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEnterExperienceSuccess(); // Function VM_PracticeMode.VM_PracticeMode_C.OnEnterExperienceSuccess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestEnterSoloExperience(enum class ESoloExperienceType Experience To Start); // Function VM_PracticeMode.VM_PracticeMode_C.RequestEnterSoloExperience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_PracticeMode.VM_PracticeMode_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PracticeMode(int32_t EntryPoint); // Function VM_PracticeMode.VM_PracticeMode_C.ExecuteUbergraph_VM_PracticeMode // (Final|UbergraphFunction) // @ game+0x1af5410
	void CanEnterSoloExperienceChanged__DelegateSignature(bool CanNowEnter); // Function VM_PracticeMode.VM_PracticeMode_C.CanEnterSoloExperienceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


// BlueprintGeneratedClass VM_ContractUIData.VM_ContractUIData_C
// Size: 0x110 (Inherited: 0x90)
struct UVM_ContractUIData_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText ContractTitle; // 0x98(0x18)
	struct FMulticastInlineDelegate OnContractTitleChanged; // 0xb0(0x10)
	struct FText PreferredDisplayName; // 0xc0(0x18)
	struct FText ShortDisplayName; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnShortDisplayNameChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnPreferredDisplayNameChanged; // 0x100(0x10)

	void SetPreferredDisplayName(struct FText NewPreferredDisplayName); // Function VM_ContractUIData.VM_ContractUIData_C.SetPreferredDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShortDisplayName(struct FText NewShortDisplayName); // Function VM_ContractUIData.VM_ContractUIData_C.SetShortDisplayName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitfromContract(struct UContractViewModel* Contract); // Function VM_ContractUIData.VM_ContractUIData_C.InitfromContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventLoaded(struct UEventHandle* EventHandle); // Function VM_ContractUIData.VM_ContractUIData_C.OnEventLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContractV2Loaded(struct UContractV2Handle* ContractHandle); // Function VM_ContractUIData.VM_ContractUIData_C.OnContractV2Loaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_ContractUIData.VM_ContractUIData_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePreferredDisplayName(); // Function VM_ContractUIData.VM_ContractUIData_C.UpdatePreferredDisplayName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContractTitle(struct FText ContractTitleNew); // Function VM_ContractUIData.VM_ContractUIData_C.SetContractTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromContractID(struct FGuid ContractID); // Function VM_ContractUIData.VM_ContractUIData_C.InitFromContractID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_ContractUIData.VM_ContractUIData_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_ContractUIData.VM_ContractUIData_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContractUIData(int32_t EntryPoint); // Function VM_ContractUIData.VM_ContractUIData_C.ExecuteUbergraph_VM_ContractUIData // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPreferredDisplayNameChanged__DelegateSignature(struct FText NewPreferredDisplayName); // Function VM_ContractUIData.VM_ContractUIData_C.OnPreferredDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShortDisplayNameChanged__DelegateSignature(struct FText NewShortDisplayName); // Function VM_ContractUIData.VM_ContractUIData_C.OnShortDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContractTitleChanged__DelegateSignature(struct FText Title); // Function VM_ContractUIData.VM_ContractUIData_C.OnContractTitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


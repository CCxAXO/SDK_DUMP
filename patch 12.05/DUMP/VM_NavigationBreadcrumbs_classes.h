// BlueprintGeneratedClass VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C
// Size: 0xe8 (Inherited: 0x90)
struct UVM_NavigationBreadcrumbs_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText CurrentScreenName; // 0x98(0x18)
	struct FText CurrentScreenParentName; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnCurrentScreenNameChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnCurrentScreenParentNameChanged; // 0xd8(0x10)

	void HandleCurrentScreenParentNameChanged(struct FText& NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.HandleCurrentScreenParentNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentScreenNameChanged(struct FText& NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.HandleCurrentScreenNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentScreenParentName(struct FText NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.SetCurrentScreenParentName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentScreenName(struct FText NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.SetCurrentScreenName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToNavigationModel(bool Bind); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.BindToNavigationModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_NavigationBreadcrumbs(int32_t EntryPoint); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.ExecuteUbergraph_VM_NavigationBreadcrumbs // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnCurrentScreenParentNameChanged__DelegateSignature(struct FText NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.OnCurrentScreenParentNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentScreenNameChanged__DelegateSignature(struct FText NewValue); // Function VM_NavigationBreadcrumbs.VM_NavigationBreadcrumbs_C.OnCurrentScreenNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


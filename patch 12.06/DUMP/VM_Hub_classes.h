// BlueprintGeneratedClass VM_Hub.VM_Hub_C
// Size: 0x208 (Inherited: 0x200)
struct UVM_Hub_C : ULandingScreenViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)

	void FilterHomeScreen(struct TArray<struct FName>& ChildScreens); // Function VM_Hub.VM_Hub_C.FilterHomeScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsSoupActiveChanged(bool IsSoupActive); // Function VM_Hub.VM_Hub_C.HandleIsSoupActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FilterSoup(struct TArray<struct FName>& ChildScreens); // Function VM_Hub.VM_Hub_C.FilterSoup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FilterEsportsHub(struct TArray<struct FName>& Child Screens); // Function VM_Hub.VM_Hub_C.FilterEsportsHub // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAnyConfigChanged(struct FName& ConfigName); // Function VM_Hub.VM_Hub_C.HandleAnyConfigChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsBonusShopActiveChanged(bool IsBonusShopActive); // Function VM_Hub.VM_Hub_C.HandleIsBonusShopActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function VM_Hub.VM_Hub_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FilterChildScreens(struct TArray<struct FName>& ChildrenScreens, struct TArray<struct FName>& OutFilteredScreens); // Function VM_Hub.VM_Hub_C.FilterChildScreens // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FilterAgentsPage(struct TArray<struct FName>& ChildrenScreens); // Function VM_Hub.VM_Hub_C.FilterAgentsPage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FilterBonusStore(struct TArray<struct FName>& ChildScreens); // Function VM_Hub.VM_Hub_C.FilterBonusStore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_Hub.VM_Hub_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_Hub(int32_t EntryPoint); // Function VM_Hub.VM_Hub_C.ExecuteUbergraph_VM_Hub // (Final|UbergraphFunction) // @ game+0x1b42740
};


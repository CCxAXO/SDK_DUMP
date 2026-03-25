// BlueprintGeneratedClass VM_NavigationBar.VM_NavigationBar_C
// Size: 0xf8 (Inherited: 0x90)
struct UVM_NavigationBar_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UUINavigationModel* UINavigationModel; // 0x98(0x08)
	int32_t NavigationIndex; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FRGICommonNavBarDetails> NavigationBarData; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnNavigationBarChanged; // 0xb8(0x10)
	int32_t NavigationBarIndex; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FMulticastInlineDelegate OnNavigationBarIndexChanged; // 0xd0(0x10)
	bool bNavigationBarEnabled; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FMulticastInlineDelegate OnIsNavigationBarEnabledChanged; // 0xe8(0x10)

	void HandleOnMenuUrlChanged(struct FAresMenuUrl& NewUrl); // Function VM_NavigationBar.VM_NavigationBar_C.HandleOnMenuUrlChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToNavigationModel(bool bShouldBind); // Function VM_NavigationBar.VM_NavigationBar_C.BindToNavigationModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNavigationBarIndexChanged(int32_t NavigationBarIndex, int32_t ScreenIndex); // Function VM_NavigationBar.VM_NavigationBar_C.HandleNavigationBarIndexChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshDetails(); // Function VM_NavigationBar.VM_NavigationBar_C.RefreshDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNavigationBarEnabledChanged(int32_t NavigationBarIndex, bool bIsEnabled); // Function VM_NavigationBar.VM_NavigationBar_C.HandleNavigationBarEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNavigationBarDataChanged(int32_t NavigationBarIndex, struct TArray<struct FRGICommonNavBarDetails>& NewNavigationBarDetails); // Function VM_NavigationBar.VM_NavigationBar_C.HandleNavigationBarDataChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNavigationIndex(int32_t InNavigationIndex); // Function VM_NavigationBar.VM_NavigationBar_C.SetNavigationIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNavigationBarEnabled(bool bIsEnabled); // Function VM_NavigationBar.VM_NavigationBar_C.SetNavigationBarEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNavigationBarData(struct TArray<struct FRGICommonNavBarDetails>& InNavigationBarData, bool bForceBroadcast); // Function VM_NavigationBar.VM_NavigationBar_C.SetNavigationBarData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_NavigationBar.VM_NavigationBar_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_NavigationBar(int32_t EntryPoint); // Function VM_NavigationBar.VM_NavigationBar_C.ExecuteUbergraph_VM_NavigationBar // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsNavigationBarEnabledChanged__DelegateSignature(bool bIsEnabled); // Function VM_NavigationBar.VM_NavigationBar_C.OnIsNavigationBarEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationBarIndexChanged__DelegateSignature(int32_t ScreenIndex); // Function VM_NavigationBar.VM_NavigationBar_C.OnNavigationBarIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationBarChanged__DelegateSignature(struct TArray<struct FRGICommonNavBarDetails>& InNavBarEntries); // Function VM_NavigationBar.VM_NavigationBar_C.OnNavigationBarChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


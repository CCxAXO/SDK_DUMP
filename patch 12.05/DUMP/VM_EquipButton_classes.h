// BlueprintGeneratedClass VM_EquipButton.VM_EquipButton_C
// Size: 0x109 (Inherited: 0x90)
struct UVM_EquipButton_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UVM_WeaponVariantList_C* VM_WeaponVariantList; // 0x98(0x08)
	struct UVM_InventoryItem_C* VM_InventoryItem; // 0xa0(0x08)
	struct UVM_Reward_C* VM_Reward; // 0xa8(0x08)
	bool bIsEquipped; // 0xb0(0x01)
	bool bIsEquipCandidate; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct FMulticastInlineDelegate OnIsEquipCandidateChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0xc8(0x10)
	struct UGunSkinPersonalizationViewModel* VM_SkinPersonalization; // 0xd8(0x08)
	struct FText ButtonText; // 0xe0(0x18)
	struct FMulticastInlineDelegate OnButtonTextChanged; // 0xf8(0x10)
	enum class EAresContentType RewardType; // 0x108(0x01)

	void ShowInCollectionsScreen(struct FString InUrlString, struct TMap<struct FName, struct FWildcard> InNavParameters, struct UUserWidget* InScreenClass); // Function VM_EquipButton.VM_EquipButton_C.ShowInCollectionsScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Is Reward Expression(bool& IsRewardSpray); // Function VM_EquipButton.VM_EquipButton_C.Is Reward Expression // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleRewardTypeChanged(enum class EAresContentType RewardType); // Function VM_EquipButton.VM_EquipButton_C.HandleRewardTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonText(); // Function VM_EquipButton.VM_EquipButton_C.UpdateButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Button Text(struct FText ButtonTextIn); // Function VM_EquipButton.VM_EquipButton_C.Set Button Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAnyVMHasValidDataChanged(bool NewValue); // Function VM_EquipButton.VM_EquipButton_C.HandleAnyVMHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHasValidData(); // Function VM_EquipButton.VM_EquipButton_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEquipped(bool IsEquippedIn); // Function VM_EquipButton.VM_EquipButton_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEquipCandidate(bool IsEquipCandidateIn); // Function VM_EquipButton.VM_EquipButton_C.SetIsEquipCandidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function VM_EquipButton.VM_EquipButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool BindEvents); // Function VM_EquipButton.VM_EquipButton_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsUnlockedChanged(bool IsUnlockedIn); // Function VM_EquipButton.VM_EquipButton_C.HandleIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(bool IsEquipped); // Function VM_EquipButton.VM_EquipButton_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIsEquipCandidate(); // Function VM_EquipButton.VM_EquipButton_C.UpdateIsEquipCandidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Button Clicked(struct UCommonButtonBase* Button); // Function VM_EquipButton.VM_EquipButton_C.Handle Button Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromHandle(struct UBaseHandle* BaseHandle); // Function VM_EquipButton.VM_EquipButton_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_EquipButton.VM_EquipButton_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_EquipButton.VM_EquipButton_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_EquipButton.VM_EquipButton_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_EquipButton(int32_t EntryPoint); // Function VM_EquipButton.VM_EquipButton_C.ExecuteUbergraph_VM_EquipButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnButtonTextChanged__DelegateSignature(struct FText ButtonText); // Function VM_EquipButton.VM_EquipButton_C.OnButtonTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function VM_EquipButton.VM_EquipButton_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquipCandidateChanged__DelegateSignature(bool IsEquipCandidate); // Function VM_EquipButton.VM_EquipButton_C.OnIsEquipCandidateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


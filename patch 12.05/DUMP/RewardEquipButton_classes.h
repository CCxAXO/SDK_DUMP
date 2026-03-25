// WidgetBlueprintGeneratedClass RewardEquipButton.RewardEquipButton_C
// Size: 0x340 (Inherited: 0x318)
struct URewardEquipButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* EquipButton; // 0x320(0x08)
	struct UBaseHandle* Handle; // 0x328(0x08)
	struct FMulticastInlineDelegate OnEquipGunSkin; // 0x330(0x10)

	void SetHandle(struct UBaseHandle* NewHandle); // Function RewardEquipButton.RewardEquipButton_C.SetHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Equip(); // Function RewardEquipButton.RewardEquipButton_C.Equip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateForEquippableSkinLevel(struct UEquippableSkinLevelHandle* Handle); // Function RewardEquipButton.RewardEquipButton_C.UpdateForEquippableSkinLevel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateForEquippableSkin(struct UEquippableSkinHandle* Handle); // Function RewardEquipButton.RewardEquipButton_C.UpdateForEquippableSkin // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateForPlayerTitle(struct UPlayerTitleHandle* Handle); // Function RewardEquipButton.RewardEquipButton_C.UpdateForPlayerTitle // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateForPlayerCard(struct UPlayerCardHandle* CardHandle); // Function RewardEquipButton.RewardEquipButton_C.UpdateForPlayerCard // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update(); // Function RewardEquipButton.RewardEquipButton_C.Update // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RewardEquipButton.RewardEquipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RewardEquipButton.RewardEquipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function RewardEquipButton.RewardEquipButton_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RewardEquipButton(int32_t EntryPoint); // Function RewardEquipButton.RewardEquipButton_C.ExecuteUbergraph_RewardEquipButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnEquipGunSkin__DelegateSignature(); // Function RewardEquipButton.RewardEquipButton_C.OnEquipGunSkin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


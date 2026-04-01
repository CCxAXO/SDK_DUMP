// WidgetBlueprintGeneratedClass BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C
// Size: 0x3f0 (Inherited: 0x318)
struct UBuddyInstanceComboBoxV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedComboBox_C* ComboBox; // 0x320(0x08)
	struct UEquippableCharmHandle* Buddy; // 0x328(0x08)
	struct TMap<struct FGuid, struct UEquippableCharmInstanceHandle*> InstanceIDToHandle; // 0x330(0x50)
	struct FMulticastInlineDelegate OnContentUpdated; // 0x380(0x10)
	struct FMulticastInlineDelegate OnBuddyInstanceSelected; // 0x390(0x10)
	struct TMap<struct UEquippableDataAsset*, struct UEquippableHandle*> EquippableHandles; // 0x3a0(0x50)

	void DoesEquippableHaveInstanceOfBuddy(struct UEquippableDataAsset* Equippable, bool& Value); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.DoesEquippableHaveInstanceOfBuddy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetUnassignedInstanceID(struct FGuid& InstanceId); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.GetUnassignedInstanceID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AutoSelect(); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.AutoSelect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCount(int32_t& Count); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.GetCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetDisplayText(struct UEquippableDataAsset* Equippable, int32_t Index, struct FText& Text); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.GetDisplayText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RefreshComboBox(); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.RefreshComboBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateInstances(struct FEquippableCharmInstanceHandles& Instances); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.PopulateInstances // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBuddy(struct UEquippableCharmHandle* Buddy); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.SetBuddy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(struct FString Item); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnEquippablesLoaded(struct FEquippableHandles& EquippableHandles); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.OnEquippablesLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BuddyInstanceComboBoxV2(int32_t EntryPoint); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.ExecuteUbergraph_BuddyInstanceComboBoxV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnBuddyInstanceSelected__DelegateSignature(struct UEquippableCharmInstanceHandle* BuddyInstance); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.OnBuddyInstanceSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentUpdated__DelegateSignature(); // Function BuddyInstanceComboBoxV2.BuddyInstanceComboBoxV2_C.OnContentUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


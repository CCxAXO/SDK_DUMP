// BlueprintGeneratedClass VM_AccessoryStoreScreen.VM_AccessoryStoreScreen_C
// Size: 0xa4 (Inherited: 0x90)
struct UVM_AccessoryStoreScreen_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FName StoreAccessoryStoreEnabledConfigName; // 0x98(0x0c)

	void HandleAccessoryStoreEnabledChanged(); // Function VM_AccessoryStoreScreen.VM_AccessoryStoreScreen_C.HandleAccessoryStoreEnabledChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferSelected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function VM_AccessoryStoreScreen.VM_AccessoryStoreScreen_C.HandleOfferSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_AccessoryStoreScreen.VM_AccessoryStoreScreen_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_AccessoryStoreScreen(int32_t EntryPoint); // Function VM_AccessoryStoreScreen.VM_AccessoryStoreScreen_C.ExecuteUbergraph_VM_AccessoryStoreScreen // (Final|UbergraphFunction) // @ game+0x1b42740
};


// BlueprintGeneratedClass VM_SprayManagement.VM_SprayManagement_C
// Size: 0x138 (Inherited: 0xb0)
struct UVM_SprayManagement_C : UAresPersonalizationViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USprayHandle* DisplaySprayHandle; // 0xb8(0x08)
	enum class EAresSprayCategory DisplaySprayCategory; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FMulticastInlineDelegate DisplaySprayCategoryChanged; // 0xc8(0x10)
	struct FText DisplaySprayName; // 0xd8(0x18)
	struct FMulticastInlineDelegate DisplaySprayNameChanged; // 0xf0(0x10)
	struct USprayHandle* ViewerHandle; // 0x100(0x08)
	struct FMulticastInlineDelegate ViewerHandleChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSlotHandlesChanged; // 0x118(0x10)
	struct TArray<struct USprayEquipSlotHandle*> EquipSlotHandles; // 0x128(0x10)

	void EquipSlotHandleComparisonPredicate(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function VM_SprayManagement.VM_SprayManagement_C.EquipSlotHandleComparisonPredicate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortAndSetEquipSlotHandles(struct FSprayEquipSlotHandles SprayEquipSlotHandles, struct TArray<struct USprayEquipSlotHandle*>& SortedEquipSlotHandles); // Function VM_SprayManagement.VM_SprayManagement_C.SortAndSetEquipSlotHandles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleDisplayedHandleFavorited(); // Function VM_SprayManagement.VM_SprayManagement_C.ToggleDisplayedHandleFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSlotHandlesEquippedChange(); // Function VM_SprayManagement.VM_SprayManagement_C.HandleSlotHandlesEquippedChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindSlotHandles(bool Bind, struct TArray<struct USprayEquipSlotHandle*>& SlotHandles); // Function VM_SprayManagement.VM_SprayManagement_C.BindSlotHandles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EquipDisplayToSpraySlotIndex(int32_t SlotIndex); // Function VM_SprayManagement.VM_SprayManagement_C.EquipDisplayToSpraySlotIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSpraySlotsLoaded(struct FSprayEquipSlotHandles& SprayEquipSlotHandles); // Function VM_SprayManagement.VM_SprayManagement_C.HandleSpraySlotsLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewerHandle(struct USprayHandle* ViewerHandle); // Function VM_SprayManagement.VM_SprayManagement_C.SetViewerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewerHandleLoaded(struct USprayHandle* SprayHandle); // Function VM_SprayManagement.VM_SprayManagement_C.OnViewerHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplaySprayName(struct FText DisplaySprayName); // Function VM_SprayManagement.VM_SprayManagement_C.SetDisplaySprayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplaySprayCategory(enum class EAresSprayCategory DisplaySprayCategory); // Function VM_SprayManagement.VM_SprayManagement_C.SetDisplaySprayCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplaySprayHandle(struct USprayHandle* DisplaySprayHandle); // Function VM_SprayManagement.VM_SprayManagement_C.SetDisplaySprayHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplaySprayHandleChanged(struct USprayHandle* DisplaySprayHandle); // Function VM_SprayManagement.VM_SprayManagement_C.DisplaySprayHandleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_SprayManagement.VM_SprayManagement_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_SprayManagement(int32_t EntryPoint); // Function VM_SprayManagement.VM_SprayManagement_C.ExecuteUbergraph_VM_SprayManagement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnSlotHandlesChanged__DelegateSignature(struct TArray<struct USprayEquipSlotHandle*>& SlotHandles); // Function VM_SprayManagement.VM_SprayManagement_C.OnSlotHandlesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ViewerHandleChanged__DelegateSignature(struct USprayHandle* ViewerHandle); // Function VM_SprayManagement.VM_SprayManagement_C.ViewerHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplaySprayNameChanged__DelegateSignature(struct FText DisplaySprayName); // Function VM_SprayManagement.VM_SprayManagement_C.DisplaySprayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplaySprayCategoryChanged__DelegateSignature(enum class EAresSprayCategory DisplaySprayCategory); // Function VM_SprayManagement.VM_SprayManagement_C.DisplaySprayCategoryChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


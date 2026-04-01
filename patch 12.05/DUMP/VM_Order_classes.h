// BlueprintGeneratedClass VM_Order.VM_Order_C
// Size: 0xc0 (Inherited: 0x90)
struct UVM_Order_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate OnOrderStateChanged; // 0xa0(0x10)
	struct FGuid OrderXID; // 0xb0(0x10)

	void Offer Type To Purchase Types(enum class EOfferDTOType OfferType, enum class EPurchaseType& PurchaseType, enum class EPurchaseSource& PurchaseSource); // Function VM_Order.VM_Order_C.Offer Type To Purchase Types // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ExecuteSubmitOrderOnOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_Order.VM_Order_C.ExecuteSubmitOrderOnOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Submit Order(enum class EPurchaseType PurchaseType, enum class EPurchaseSource PurchaseSource, struct UOfferDTO* OfferDTO); // Function VM_Order.VM_Order_C.Submit Order // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOrderStateChanged(enum class EPurchaseState& OrderState, bool IsValidOrderID, struct FGuid& OrderID, struct FGuid& XID); // Function VM_Order.VM_Order_C.HandleOrderStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPurchaseEvents(bool Bind); // Function VM_Order.VM_Order_C.BindToPurchaseEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferObject(struct UObject* OfferObject, enum class Enum_OffersType OfferType); // Function VM_Order.VM_Order_C.SetOfferObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPurchaseSource(enum class EPurchaseSource PurchaseSource); // Function VM_Order.VM_Order_C.SetPurchaseSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Order.VM_Order_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Order(int32_t EntryPoint); // Function VM_Order.VM_Order_C.ExecuteUbergraph_VM_Order // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnOrderStateChanged__DelegateSignature(enum class EPurchaseState OrderState); // Function VM_Order.VM_Order_C.OnOrderStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


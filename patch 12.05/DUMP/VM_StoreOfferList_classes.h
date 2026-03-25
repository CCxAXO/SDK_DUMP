// BlueprintGeneratedClass VM_StoreOfferList.VM_StoreOfferList_C
// Size: 0x130 (Inherited: 0x90)
struct UVM_StoreOfferList_C : UAresViewModelBase {
	enum class Enum_OffersType StoreOffersType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UObject*> OfferObjects; // 0x98(0x10)
	struct FMulticastInlineDelegate OnOfferObjectsChanged; // 0xa8(0x10)
	struct TMap<struct FGuid, bool> OfferIDs; // 0xb8(0x50)
	struct FMulticastInlineDelegate OnSelectedStoreOfferChanged; // 0x108(0x10)
	struct UObject* SelectedOfferObject; // 0x118(0x08)
	struct FMulticastInlineDelegate OnSelectedOfferObjectChanged; // 0x120(0x10)

	void OnEsportsStoreOffersChanged(struct TArray<struct UBundleViewModel*>& EsportsBundles); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnEsportsStoreOffersChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPersonalizedOfferDTOsChanged(struct TArray<struct URotatingOfferDTO*>& Personalized Offers); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnPersonalizedOfferDTOsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RevealOrSetSelectedOffer(struct UObject* NewSelectedOfferObject); // Function VM_StoreOfferList.VM_StoreOfferList_C.RevealOrSetSelectedOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsOfferInCurrentList(struct UObject* OfferObject, bool& IsInList); // Function VM_StoreOfferList.VM_StoreOfferList_C.IsOfferInCurrentList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RevealBonusOfferIfUnseen(struct UObject* OfferObjectToReveal); // Function VM_StoreOfferList.VM_StoreOfferList_C.RevealBonusOfferIfUnseen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Selected Offer Object(struct UObject* NewSelectedOfferObject); // Function VM_StoreOfferList.VM_StoreOfferList_C.Set Selected Offer Object // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function VM_StoreOfferList.VM_StoreOfferList_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryGetOfferID(struct UObject* OfferObject, struct FGuid& OfferId, bool& FoundOfferID); // Function VM_StoreOfferList.VM_StoreOfferList_C.TryGetOfferID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnBonusStoreOffersChanged(struct TArray<struct UBonusStoreOfferViewModel*>& BonusStoreOffers); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnBonusStoreOffersChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Offer Objects(struct TArray<struct UObject*>& InOfferObjects); // Function VM_StoreOfferList.VM_StoreOfferList_C.Set Offer Objects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAccessoryStoreOffersChanged(struct TArray<struct UAccessoryStoreOfferViewModel*>& AccessoryStoreOffers); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnAccessoryStoreOffersChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromStoreOffersType(enum class Enum_OffersType OffersType); // Function VM_StoreOfferList.VM_StoreOfferList_C.InitFromStoreOffersType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSelectedOfferObjectChanged__DelegateSignature(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnSelectedOfferObjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSelectedStoreOfferChanged__DelegateSignature(struct UStoreOffer* SelectedStoreOffer); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnSelectedStoreOfferChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOfferObjectsChanged__DelegateSignature(struct TArray<struct UObject*>& OfferObjects, enum class Enum_OffersType OffersType); // Function VM_StoreOfferList.VM_StoreOfferList_C.OnOfferObjectsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


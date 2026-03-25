// BlueprintGeneratedClass VM_Interface_PromoTile.VM_Interface_PromoTile_C
// Size: 0x138 (Inherited: 0x90)
struct UVM_Interface_PromoTile_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UTexture2D* BackgroundImage; // 0x98(0x08)
	struct FText SecondaryText; // 0xa0(0x18)
	struct FText PrimaryText; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnPrimaryTextChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnSecondaryTextChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnBackgroundImageChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnAdditionalTextChanged; // 0x100(0x10)
	struct FText AdditionalText; // 0x110(0x18)
	struct FMulticastInlineDelegate OnPromotionActivityChanged; // 0x128(0x10)

	void SetAdditionalText(struct FText InAdditionalText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.SetAdditionalText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshParentTile(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.RefreshParentTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Prepare for Promotion(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.Prepare for Promotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundImage(struct UTexture2D* InBackgroundImage); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.SetBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.Init // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleClick(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.HandleClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPrimaryText(struct FText InPrimaryText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.SetPrimaryText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSecondaryText(struct FText InSecondaryText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.SetSecondaryText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.Destruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Interface_PromoTile(int32_t EntryPoint); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.ExecuteUbergraph_VM_Interface_PromoTile // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPromotionActivityChanged__DelegateSignature(); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnPromotionActivityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAdditionalTextChanged__DelegateSignature(struct FText InAdditionalText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnAdditionalTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBackgroundImageChanged__DelegateSignature(struct UTexture2D* BackgroundImage); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnBackgroundImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSecondaryTextChanged__DelegateSignature(struct FText SecondaryText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnSecondaryTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPrimaryTextChanged__DelegateSignature(struct FText PrimaryText); // Function VM_Interface_PromoTile.VM_Interface_PromoTile_C.OnPrimaryTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


// BlueprintGeneratedClass VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C
// Size: 0x150 (Inherited: 0x138)
struct UVM_NightMarket_PromoTile_C : UVM_Interface_PromoTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FDateTime BonusShop_StartTime; // 0x140(0x08)
	struct FDateTime BonusShop_ExpirationTime; // 0x148(0x08)

	void HandleOnBonusShopExpirationTimeChanged(struct FDateTime& NewValue); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.HandleOnBonusShopExpirationTimeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnPromotionActivityChanged(bool IsBonusShopActive); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.HandleOnPromotionActivityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnBonusShopStartTimeChanged(struct FDateTime& NewValue); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.HandleOnBonusShopStartTimeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDateRangeText(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.SetDateRangeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDateTextValues(struct FDateTime Date, struct FText& Year, struct FText& Month, struct FText& Day); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.GetDateTextValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Is Bonus Shop Active and Enabled(bool& IsEnabled); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.Is Bonus Shop Active and Enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleClick(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.Init // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.Destruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_NightMarket_PromoTile(int32_t EntryPoint); // Function VM_NightMarket_PromoTile.VM_NightMarket_PromoTile_C.ExecuteUbergraph_VM_NightMarket_PromoTile // (Final|UbergraphFunction) // @ game+0x1b42740
};


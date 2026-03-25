// WidgetBlueprintGeneratedClass UniversalCarouselBG.UniversalCarouselBG_C
// Size: 0x3dd (Inherited: 0x318)
struct UUniversalCarouselBG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Favorited; // 0x320(0x08)
	struct UImage* BG; // 0x328(0x08)
	struct UCanvasPanel* Border; // 0x330(0x08)
	struct UImage* BorderBottom; // 0x338(0x08)
	struct UImage* BorderLeft; // 0x340(0x08)
	struct UImage* BorderRight; // 0x348(0x08)
	struct UImage* BorderTop; // 0x350(0x08)
	struct UNamedSlot* content; // 0x358(0x08)
	struct UImage* ContextualIcon; // 0x360(0x08)
	struct UImage* EquippedIcon; // 0x368(0x08)
	struct UOverlay* FavoritedIconContainer; // 0x370(0x08)
	struct UImage* FavoriteIcon; // 0x378(0x08)
	struct UImage* InteractionOverlay; // 0x380(0x08)
	struct UImage* LockIcon; // 0x388(0x08)
	struct UImage* PipBL; // 0x390(0x08)
	struct UImage* PipBR; // 0x398(0x08)
	struct UOverlay* Pips; // 0x3a0(0x08)
	struct UImage* PipTL; // 0x3a8(0x08)
	struct UImage* PipTR; // 0x3b0(0x08)
	struct UCanvasPanel* SelectionBorder; // 0x3b8(0x08)
	struct UImage* SubscriptionIcon; // 0x3c0(0x08)
	bool IsHover; // 0x3c8(0x01)
	bool IsMouseDown; // 0x3c9(0x01)
	bool IsSelected; // 0x3ca(0x01)
	bool IsSubscriptionContent; // 0x3cb(0x01)
	bool IsOwned; // 0x3cc(0x01)
	bool IsEquipped; // 0x3cd(0x01)
	bool IsFavorited; // 0x3ce(0x01)
	bool UseSoftLockStyle; // 0x3cf(0x01)
	double EquippedPipSize; // 0x3d0(0x08)
	bool HideSelectionBorder; // 0x3d8(0x01)
	bool HideCosmeticBorder; // 0x3d9(0x01)
	bool UseCenteredEquipIcon; // 0x3da(0x01)
	bool IsContextual; // 0x3db(0x01)
	bool IsPremium; // 0x3dc(0x01)

	void SetIsUnlockedWithType(bool IsUnlocked, bool IsUnlockedOnlyBySubscription); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsUnlockedWithType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleConfigUpdated(); // Function UniversalCarouselBG.UniversalCarouselBG_C.HandleConfigUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsPremium(bool NewIsPremium); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsPremium // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsContextual(bool IsContextual); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsContextual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsFavorited(bool IsFavorited); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEquipped(bool IsEquipped); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsSubscriptionContent(bool IsSubscription); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsSubscriptionContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsOwned(bool IsOwned); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUseSoftLockStyle(bool NewUseSoftLockStyle); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetUseSoftLockStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEquipIconPosition(); // Function UniversalCarouselBG.UniversalCarouselBG_C.UpdateEquipIconPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInteraction(); // Function UniversalCarouselBG.UniversalCarouselBG_C.UpdateInteraction // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateState(); // Function UniversalCarouselBG.UniversalCarouselBG_C.UpdateState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsSelected(bool IsSelected); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsMouseDown(bool IsMouseDown); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsMouseDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsHovered(bool IsHovered); // Function UniversalCarouselBG.UniversalCarouselBG_C.SetIsHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function UniversalCarouselBG.UniversalCarouselBG_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function UniversalCarouselBG.UniversalCarouselBG_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function UniversalCarouselBG.UniversalCarouselBG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UniversalCarouselBG(int32_t EntryPoint); // Function UniversalCarouselBG.UniversalCarouselBG_C.ExecuteUbergraph_UniversalCarouselBG // (Final|UbergraphFunction) // @ game+0x1af5410
};


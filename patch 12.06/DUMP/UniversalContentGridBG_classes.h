// WidgetBlueprintGeneratedClass UniversalContentGridBG.UniversalContentGridBG_C
// Size: 0x3f6 (Inherited: 0x318)
struct UUniversalContentGridBG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Favorited; // 0x320(0x08)
	struct UImage* BG; // 0x328(0x08)
	struct UImage* BG01; // 0x330(0x08)
	struct UCanvasPanel* Border; // 0x338(0x08)
	struct UImage* BorderGreen; // 0x340(0x08)
	struct UImage* BorderHover; // 0x348(0x08)
	struct UImage* BorderNormal; // 0x350(0x08)
	struct UNamedSlot* content; // 0x358(0x08)
	struct UImage* ContextualIcon; // 0x360(0x08)
	struct UImage* EquippedIcon; // 0x368(0x08)
	struct UOverlay* FavoritedIconContainer; // 0x370(0x08)
	struct UImage* FavoriteIcon; // 0x378(0x08)
	struct UImage* GradientTop; // 0x380(0x08)
	struct UImage* GradientTop_2; // 0x388(0x08)
	struct UOverlay* HoverOverlay; // 0x390(0x08)
	struct UImage* InteractionOverlay; // 0x398(0x08)
	struct UImage* LockIcon; // 0x3a0(0x08)
	struct UImage* PipBL; // 0x3a8(0x08)
	struct UImage* PipBR; // 0x3b0(0x08)
	struct UOverlay* Pips; // 0x3b8(0x08)
	struct UImage* PipTL; // 0x3c0(0x08)
	struct UImage* PipTR; // 0x3c8(0x08)
	struct UCanvasPanel* SelectionBorder; // 0x3d0(0x08)
	struct UImage* SubscriptionIcon; // 0x3d8(0x08)
	bool IsSelected; // 0x3e0(0x01)
	bool IsHover; // 0x3e1(0x01)
	bool IsOwned; // 0x3e2(0x01)
	bool IsEquipped; // 0x3e3(0x01)
	bool IsMouseDown; // 0x3e4(0x01)
	bool UseCenteredEquipIcon; // 0x3e5(0x01)
	bool UseSoftLockStyle; // 0x3e6(0x01)
	char pad_3E7[0x1]; // 0x3e7(0x01)
	double EquippedPipSize; // 0x3e8(0x08)
	bool IsContextual; // 0x3f0(0x01)
	bool IsPremium; // 0x3f1(0x01)
	bool HideSelectionBorder; // 0x3f2(0x01)
	bool HideCosmeticBorder; // 0x3f3(0x01)
	bool IsSubscriptionContent; // 0x3f4(0x01)
	bool IsFavorited; // 0x3f5(0x01)

	void SetIsUnlockedWithType(bool IsUnlocked, bool IsUnlockedOnlyBySubscription); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsUnlockedWithType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsContextual(bool IsContextual); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsContextual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleConfigUpdated(); // Function UniversalContentGridBG.UniversalContentGridBG_C.HandleConfigUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsFavorited(bool IsFavorited); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsSubscriptionContent(bool IsSubscription); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsSubscriptionContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUseSoftLockStyle(bool NewUseSoftLockStyle); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetUseSoftLockStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsPremium(bool NewIsPremium); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsPremium // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEquipIconPosition(); // Function UniversalContentGridBG.UniversalContentGridBG_C.UpdateEquipIconPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsMouseDown(bool IsMouseDown); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsMouseDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInteraction(); // Function UniversalContentGridBG.UniversalContentGridBG_C.UpdateInteraction // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsHovered(bool IsHovered); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsEquipped(bool IsEquipped); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsOwned(bool IsOwned); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateState(); // Function UniversalContentGridBG.UniversalContentGridBG_C.UpdateState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsSelected(bool IsSelected); // Function UniversalContentGridBG.UniversalContentGridBG_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function UniversalContentGridBG.UniversalContentGridBG_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function UniversalContentGridBG.UniversalContentGridBG_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function UniversalContentGridBG.UniversalContentGridBG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UniversalContentGridBG(int32_t EntryPoint); // Function UniversalContentGridBG.UniversalContentGridBG_C.ExecuteUbergraph_UniversalContentGridBG // (Final|UbergraphFunction) // @ game+0x1b42740
};


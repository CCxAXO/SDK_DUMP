// WidgetBlueprintGeneratedClass UniversalChargeBar.UniversalChargeBar_C
// Size: 0x380 (Inherited: 0x318)
struct UUniversalChargeBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* TextTranslation; // 0x320(0x08)
	struct UNamedSlot* BarSlot; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UImage* BLDot; // 0x338(0x08)
	struct UImage* BRDot; // 0x340(0x08)
	struct UProgressBar* ChargeBar; // 0x348(0x08)
	struct UImage* Ticks; // 0x350(0x08)
	struct UNamedSlot* TickSlot; // 0x358(0x08)
	struct UImage* TLDot; // 0x360(0x08)
	struct UTextBlock* TopText; // 0x368(0x08)
	struct UImage* TRDot; // 0x370(0x08)
	struct UImage* WhiteOutline; // 0x378(0x08)

	void SetChargePercent(double ChargePercent); // Function UniversalChargeBar.UniversalChargeBar_C.SetChargePercent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTopText(struct FText InText); // Function UniversalChargeBar.UniversalChargeBar_C.SetTopText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDividers(int32_t Dividers); // Function UniversalChargeBar.UniversalChargeBar_C.SetDividers // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFillColor(struct FLinearColor InColor); // Function UniversalChargeBar.UniversalChargeBar_C.SetFillColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function UniversalChargeBar.UniversalChargeBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UniversalChargeBar.UniversalChargeBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UniversalChargeBar(int32_t EntryPoint); // Function UniversalChargeBar.UniversalChargeBar_C.ExecuteUbergraph_UniversalChargeBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


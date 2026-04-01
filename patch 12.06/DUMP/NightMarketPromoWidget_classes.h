// WidgetBlueprintGeneratedClass NightMarketPromoWidget.NightMarketPromoWidget_C
// Size: 0x3d8 (Inherited: 0x318)
struct UNightMarketPromoWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UWidgetAnimation* UnHoverAnim; // 0x330(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x338(0x08)
	struct UOverlay* Divider; // 0x340(0x08)
	struct UTextBlock* EventTimeRange; // 0x348(0x08)
	struct UImage* Focus; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image_4; // 0x360(0x08)
	struct UImage* Image_5; // 0x368(0x08)
	struct UImage* Image_6; // 0x370(0x08)
	struct UImage* Image_530; // 0x378(0x08)
	struct UImage* Image_534; // 0x380(0x08)
	struct UTextBlock* Label; // 0x388(0x08)
	struct UImage* LeftArrow; // 0x390(0x08)
	struct UTelemetryButton* PopupButton; // 0x398(0x08)
	struct UImage* PromoImage; // 0x3a0(0x08)
	struct UImage* RightArrow; // 0x3a8(0x08)
	struct UAkAudioEvent* SoundClick; // 0x3b0(0x08)
	struct UAkAudioEvent* SoundHover; // 0x3b8(0x08)
	struct UBundleViewModel* FeaturedBundle; // 0x3c0(0x08)
	struct FDateTime BonusShop_StartDate; // 0x3c8(0x08)
	struct FDateTime BonusShop_EndDate; // 0x3d0(0x08)

	void EventUpdateStartAndEndText(struct FDateTime& NewValue); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.EventUpdateStartAndEndText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDateRangeText(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.SetDateRangeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDateTextValues(struct FDateTime Date, struct FText& Year, struct FText& Month, struct FText& Day); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.GetDateTextValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTimeRangeText(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.UpdateTimeRangeText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_NightMarketPromoWidget(int32_t EntryPoint); // Function NightMarketPromoWidget.NightMarketPromoWidget_C.ExecuteUbergraph_NightMarketPromoWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};


// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_Bodega_PurchaseComplete_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Gradient_Bottom; // 0x3e8(0x08)
	struct UImage* Gradient_Top; // 0x3f0(0x08)
	struct UWBP_Panel_AgentBackground_C* WBP_Panel_AgentBackground; // 0x3f8(0x08)
	struct UCharacterDataViewModel* CharacterDataVM; // 0x400(0x08)
	struct UCharacterDataAsset* SelectedCharacterData; // 0x408(0x08)
	struct UCharacterUIData* CurrentUIData; // 0x410(0x08)

	void SetSelectedCharacterData(struct UCharacterDataAsset* SelectedCharacter); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.SetSelectedCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCharacterDataModelEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.BindCharacterDataModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_OfferPreview_Bodega_PurchaseComplete(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_Bodega_PurchaseComplete.WBP_Panel_OfferPreview_Bodega_PurchaseComplete_C.ExecuteUbergraph_WBP_Panel_OfferPreview_Bodega_PurchaseComplete // (Final|UbergraphFunction) // @ game+0x1b42740
};


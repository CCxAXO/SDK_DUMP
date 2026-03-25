// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C
// Size: 0x470 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_Bodega_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* AgentIconsContainer; // 0x3e8(0x08)
	struct UImage* BorderBottom; // 0x3f0(0x08)
	struct UImage* BorderLeft; // 0x3f8(0x08)
	struct UImage* BorderRight; // 0x400(0x08)
	struct UImage* BorderTop; // 0x408(0x08)
	struct UWBP_Panel_AgentBackground_C* WBP_Panel_AgentBackground; // 0x410(0x08)
	struct UWBP_Panel_AgentTokenBalance_C* WBP_Panel_AgentTokenBalance; // 0x418(0x08)
	struct UWBP_Panel_RecruitmentEvent_C* WBP_Panel_RecruitmentEvent; // 0x420(0x08)
	struct UVM_CharacterInfoPanel_C* CharInfoVM; // 0x428(0x08)
	struct FMargin AbilityIconPadding; // 0x430(0x10)
	double AbilityIconOpacity; // 0x440(0x08)
	struct UCharacterDataAsset* SelectedCharacterData; // 0x448(0x08)
	struct UCharacterDataViewModel* CharacterDataVM; // 0x450(0x08)
	struct URecruitmentEventViewModel* RecruitmentEventVM; // 0x458(0x08)
	struct UCharacterUIData* Agent; // 0x460(0x08)
	struct UCharacterUIData* UI Data; // 0x468(0x08)

	void SetSelectedCharacterData(struct UCharacterDataAsset* SelectedCharacter); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.SetSelectedCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCharacterDataModelEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.BindCharacterDataModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCharacterInfoModelEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.BindCharacterInfoModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAbilityIconsChanged(struct TMap<struct FStruct_AgentSelect_AbilityButtonData, struct UTexture*> InputPin); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.OnAbilityIconsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_Bodega(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_Bodega.WBP_Panel_OfferPreview_Bodega_C.ExecuteUbergraph_WBP_Panel_OfferPreview_Bodega // (Final|UbergraphFunction) // @ game+0x1af5410
};


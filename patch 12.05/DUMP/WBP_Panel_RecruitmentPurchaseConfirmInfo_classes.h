// WidgetBlueprintGeneratedClass WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_RecruitmentPurchaseConfirmInfo_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonButtonText* CharacterInformationBannerText; // 0x3e8(0x08)
	struct UOverlay* PanelPromptOverlay; // 0x3f0(0x08)
	struct UVM_CharacterInformationBanner_C* CharacterInformationViewModel; // 0x3f8(0x08)

	void HandleCharacterInformationBannerTextChanged(struct FText CharacterInformationBannerText); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.HandleCharacterInformationBannerTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCharacterInformationBannerEvents(bool Bind); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.BindCharacterInformationBannerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RecruitmentPurchaseConfirmInfo(int32_t EntryPoint); // Function WBP_Panel_RecruitmentPurchaseConfirmInfo.WBP_Panel_RecruitmentPurchaseConfirmInfo_C.ExecuteUbergraph_WBP_Panel_RecruitmentPurchaseConfirmInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};


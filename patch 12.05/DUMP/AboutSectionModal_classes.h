// WidgetBlueprintGeneratedClass AboutSectionModal.AboutSectionModal_C
// Size: 0x3a0 (Inherited: 0x318)
struct UAboutSectionModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AccentTL; // 0x320(0x08)
	struct UImage* AccentTR; // 0x328(0x08)
	struct UScaleBox* AgeRatingDisplay; // 0x330(0x08)
	struct UImage* BackgroundGradient_Bot; // 0x338(0x08)
	struct UImage* BackgroundGradient_Top; // 0x340(0x08)
	struct UImage* BackgroundOverlay; // 0x348(0x08)
	struct UTextBlock* ClientVersionText; // 0x350(0x08)
	struct USharedButtonMaster_C* DebugOnDemandSweep; // 0x358(0x08)
	struct UImage* Image_108; // 0x360(0x08)
	struct UImage* Image_110; // 0x368(0x08)
	struct UImage* Image_183; // 0x370(0x08)
	struct UImage* Image_184; // 0x378(0x08)
	struct UOverlay* Overlay_63; // 0x380(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x388(0x08)
	struct UTabbedContent_C* TabbedContent_119; // 0x390(0x08)
	struct UTextBlock* WeaponName; // 0x398(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function AboutSectionModal.AboutSectionModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function AboutSectionModal.AboutSectionModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function AboutSectionModal.AboutSectionModal_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function AboutSectionModal.AboutSectionModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AboutSectionModal_DebugOnDemandSweep_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function AboutSectionModal.AboutSectionModal_C.BndEvt__AboutSectionModal_DebugOnDemandSweep_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AboutSectionModal(int32_t EntryPoint); // Function AboutSectionModal.AboutSectionModal_C.ExecuteUbergraph_AboutSectionModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


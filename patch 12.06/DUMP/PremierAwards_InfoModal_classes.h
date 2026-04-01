// WidgetBlueprintGeneratedClass PremierAwards_InfoModal.PremierAwards_InfoModal_C
// Size: 0x388 (Inherited: 0x318)
struct UPremierAwards_InfoModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* BG_2; // 0x328(0x08)
	struct UImage* BG_3; // 0x330(0x08)
	struct UImage* BG_4; // 0x338(0x08)
	struct UImage* BG_5; // 0x340(0x08)
	struct UImage* BG_6; // 0x348(0x08)
	struct UAresCommonText* ChampsAuraStatus; // 0x350(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x358(0x08)
	struct UAresCommonText* TeamTagPlatingStatus; // 0x360(0x08)
	struct UWBP_MenuButton_Premier_C* WBP_MenuButton_Premier; // 0x368(0x08)
	struct TArray<struct UOverlay*> MainBoxContent; // 0x370(0x10)
	struct UPremierAwardHubViewModel* ViewModel; // 0x380(0x08)

	void UpdateAwardStatus(struct UPremierAwardHubViewModel* AwardsViewModel); // Function PremierAwards_InfoModal.PremierAwards_InfoModal_C.UpdateAwardStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SwapContentOrder(); // Function PremierAwards_InfoModal.PremierAwards_InfoModal_C.SwapContentOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierAwards_InfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function PremierAwards_InfoModal.PremierAwards_InfoModal_C.BndEvt__PremierAwards_InfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierAwards_InfoModal_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierAwards_InfoModal.PremierAwards_InfoModal_C.BndEvt__PremierAwards_InfoModal_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierAwards_InfoModal(int32_t EntryPoint); // Function PremierAwards_InfoModal.PremierAwards_InfoModal_C.ExecuteUbergraph_PremierAwards_InfoModal // (Final|UbergraphFunction) // @ game+0x1b42740
};


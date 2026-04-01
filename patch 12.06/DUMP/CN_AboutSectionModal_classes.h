// WidgetBlueprintGeneratedClass CN_AboutSectionModal.CN_AboutSectionModal_C
// Size: 0x380 (Inherited: 0x318)
struct UCN_AboutSectionModal_C : UUserWidget {
	struct UImage* AccentTL; // 0x318(0x08)
	struct UImage* AccentTR; // 0x320(0x08)
	struct UImage* BackgroundGradient_Bot; // 0x328(0x08)
	struct UImage* BackgroundGradient_Top; // 0x330(0x08)
	struct UImage* BackgroundOverlay; // 0x338(0x08)
	struct UImage* Image_108; // 0x340(0x08)
	struct UImage* Image_110; // 0x348(0x08)
	struct UImage* Image_183; // 0x350(0x08)
	struct UImage* Image_184; // 0x358(0x08)
	struct UTextBlock* ModalTitle; // 0x360(0x08)
	struct UOverlay* Overlay_63; // 0x368(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x370(0x08)
	struct UTabbedContent_C* TabbedContent_119; // 0x378(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function CN_AboutSectionModal.CN_AboutSectionModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function CN_AboutSectionModal.CN_AboutSectionModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


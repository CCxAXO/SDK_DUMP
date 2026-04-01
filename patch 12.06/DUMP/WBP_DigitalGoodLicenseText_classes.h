// WidgetBlueprintGeneratedClass WBP_DigitalGoodLicenseText.WBP_DigitalGoodLicenseText_C
// Size: 0x419 (Inherited: 0x3e0)
struct UWBP_DigitalGoodLicenseText_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* DigitalGoodsDisclaimerTextsConsole; // 0x3e8(0x08)
	struct UHorizontalBox* DigitalGoodsDisclaimerTextsPC; // 0x3f0(0x08)
	struct UAresCommonText* DisclaimerAboutLicenseConsole; // 0x3f8(0x08)
	struct UAresCommonText* DisclaimerAboutLicensePC; // 0x400(0x08)
	struct UWidgetSwitcher* PlatformWidgetSwitcher; // 0x408(0x08)
	struct USharedHyperlinkButon_C* SharedHyperlinkButon; // 0x410(0x08)
	enum class EAresPlatformType PlatformTypePreview; // 0x418(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_DigitalGoodLicenseText.WBP_DigitalGoodLicenseText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_DigitalGoodLicenseText(int32_t EntryPoint); // Function WBP_DigitalGoodLicenseText.WBP_DigitalGoodLicenseText_C.ExecuteUbergraph_WBP_DigitalGoodLicenseText // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


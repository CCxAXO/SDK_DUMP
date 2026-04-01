// WidgetBlueprintGeneratedClass WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C
// Size: 0x1b39 (Inherited: 0x1ae0)
struct UWBP_Button_SecondaryCTA_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresButtonTextComponent* BodyText; // 0x1ae8(0x08)
	struct UBorder* Border_Icon; // 0x1af0(0x08)
	struct UAresButtonTextComponent* HeaderText; // 0x1af8(0x08)
	struct FDataTableRowHandle ActionDataTableRow; // 0x1b00(0x18)
	bool bShowHeader; // 0x1b18(0x01)
	bool bShowIcon; // 0x1b19(0x01)
	bool bShowCallToAction; // 0x1b1a(0x01)
	char pad_1B1B[0x5]; // 0x1b1b(0x05)
	struct UTexture2D* Icon; // 0x1b20(0x08)
	enum class EStretch IconScaleType; // 0x1b28(0x01)
	char pad_1B29[0x7]; // 0x1b29(0x07)
	double IconCustomScale; // 0x1b30(0x08)
	bool UseThinIcon; // 0x1b38(0x01)

	void SetThinIcon(bool SetThinIcon); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetThinIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHeaderText(struct FText& InText); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetHeaderText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowCallToAction(bool bShowCallToAction); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetShowCallToAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIcon(struct UTexture2D* Icon); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowIcon(bool bShowIcon); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowHeader(bool bShowHeader); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.SetShowHeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_SecondaryCTA(int32_t EntryPoint); // Function WBP_Button_SecondaryCTA.WBP_Button_SecondaryCTA_C.ExecuteUbergraph_WBP_Button_SecondaryCTA // (Final|UbergraphFunction) // @ game+0x1b42740
};


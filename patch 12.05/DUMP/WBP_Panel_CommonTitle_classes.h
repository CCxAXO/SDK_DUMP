// WidgetBlueprintGeneratedClass WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C
// Size: 0x401 (Inherited: 0x318)
struct UWBP_Panel_CommonTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresCommonText* Eyebrow; // 0x320(0x08)
	struct UNamedSlot* IconSlot; // 0x328(0x08)
	struct UNamedSlot* IconSlot_Subtitle; // 0x330(0x08)
	struct UAresCommonText* IndexIndicator; // 0x338(0x08)
	struct UScaleBox* ScaleBox_1; // 0x340(0x08)
	struct UAresCommonText* Subtitle; // 0x348(0x08)
	struct UHorizontalBox* SubtitleBox; // 0x350(0x08)
	struct UVerticalBox* TextBox; // 0x358(0x08)
	struct USpacer* TextSpacer; // 0x360(0x08)
	struct UAresCommonText* Title; // 0x368(0x08)
	enum class EHorizontalAlignment DefaultTextOrientation; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FText DefaultEyebrowText; // 0x378(0x18)
	struct UCommonTextStyle* EyebrowStyle; // 0x390(0x08)
	struct FText DefaultTitleText; // 0x398(0x18)
	struct UCommonTextStyle* TitleStyle; // 0x3b0(0x08)
	struct FText DefaultSubtitleText; // 0x3b8(0x18)
	struct UCommonTextStyle* SubtitleStyle; // 0x3d0(0x08)
	enum class EHorizontalAlignment IndexIndicatorOrientation; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FText DefaultSubtitleIndexText; // 0x3e0(0x18)
	struct UCommonTextStyle* IndexIndicatorStyle; // 0x3f8(0x08)
	bool IconOnSubtitle; // 0x400(0x01)

	void SetTitleTextOrientation(enum class EHorizontalAlignment InHorizontalAlignment); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetTitleTextOrientation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshDisplayStyles(); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.RefreshDisplayStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayDefaultFieldTexts(); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.DisplayDefaultFieldTexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextOrientation(enum class EHorizontalAlignment InHorizontalAlignment); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetTextOrientation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFieldText(struct UTextBlock* InWidget, struct FText InText); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetFieldText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubtitleIndexText(struct FText InText); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetSubtitleIndexText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubtitleText(struct FText InText); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetSubtitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitleText(struct FText InText); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEyebrowText(struct FText InText); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetEyebrowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEyebrowColor(struct FSlateColor InColor); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.SetEyebrowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_CommonTitle(int32_t EntryPoint); // Function WBP_Panel_CommonTitle.WBP_Panel_CommonTitle_C.ExecuteUbergraph_WBP_Panel_CommonTitle // (Final|UbergraphFunction) // @ game+0x1af5410
};


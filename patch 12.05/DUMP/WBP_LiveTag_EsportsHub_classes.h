// WidgetBlueprintGeneratedClass WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C
// Size: 0x3b1 (Inherited: 0x318)
struct UWBP_LiveTag_EsportsHub_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Pulse; // 0x320(0x08)
	struct UAresCommonText* AresCommonText_144; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UImage* chevronL1; // 0x338(0x08)
	struct UImage* chevronL2; // 0x340(0x08)
	struct UImage* chevronL3; // 0x348(0x08)
	struct UImage* chevronR1; // 0x350(0x08)
	struct UImage* chevronR2; // 0x358(0x08)
	struct UImage* chevronR3; // 0x360(0x08)
	struct UImage* Image_linkout; // 0x368(0x08)
	struct UImage* LeftBlock; // 0x370(0x08)
	struct UOverlay* O_Graphic; // 0x378(0x08)
	struct UImage* RightBlock1; // 0x380(0x08)
	struct UScaleBox* SBL; // 0x388(0x08)
	struct UScaleBox* SBR; // 0x390(0x08)
	bool Is Pointing Left; // 0x398(0x01)
	bool Is Pointing Right; // 0x399(0x01)
	bool Is Has Linkout; // 0x39a(0x01)
	bool Is Hide BG; // 0x39b(0x01)
	struct FSlateColor In Color and Opacity; // 0x39c(0x14)
	bool is In Progress; // 0x3b0(0x01)

	void SetInProgress(); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.SetInProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBGVisibility(); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.SetBGVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLinkoutVisibility(); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.SetLinkoutVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDirection(bool Pointing Left, bool Pointing Right); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.SetDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_LiveTag_EsportsHub(int32_t EntryPoint); // Function WBP_LiveTag_EsportsHub.WBP_LiveTag_EsportsHub_C.ExecuteUbergraph_WBP_LiveTag_EsportsHub // (Final|UbergraphFunction) // @ game+0x1af5410
};


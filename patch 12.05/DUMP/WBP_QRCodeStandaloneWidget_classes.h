// WidgetBlueprintGeneratedClass WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_QRCodeStandaloneWidget_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UQRCodeViewModel* QRCodeViewModel; // 0x3e8(0x08)
	struct UWidgetAnimation* QRCodeFadein; // 0x3f0(0x08)
	struct UAresCommonText* DisplayURL; // 0x3f8(0x08)
	struct UImage* QRCode; // 0x400(0x08)
	struct USizeBox* UrlLinkSizeBox; // 0x408(0x08)
	bool ShouldDisplayURL; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UAresCommonTextStyle* URLTextStyle; // 0x418(0x08)

	void SetQRCodeViewModel(struct UQRCodeViewModel* ViewModel); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.SetQRCodeViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnQRCodeChanged(struct UTexture2D* NewQRCode); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.OnQRCodeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisplayURLChanged(struct FString NewLink); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.OnDisplayURLChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithURL(struct FString BaseURL, struct FString AdditionalParams); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.InitWithURL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_QRCodeStandaloneWidget(int32_t EntryPoint); // Function WBP_QRCodeStandaloneWidget.WBP_QRCodeStandaloneWidget_C.ExecuteUbergraph_WBP_QRCodeStandaloneWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


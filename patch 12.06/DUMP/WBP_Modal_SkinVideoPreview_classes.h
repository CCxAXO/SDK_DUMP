// WidgetBlueprintGeneratedClass WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C
// Size: 0x429 (Inherited: 0x3e0)
struct UWBP_Modal_SkinVideoPreview_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* OpenAnim; // 0x3e8(0x08)
	struct UImage* Background; // 0x3f0(0x08)
	struct USizeBox* PreviewSizeBox; // 0x3f8(0x08)
	struct UGunSkinLevelPreview_C* PreviewWidget; // 0x400(0x08)
	struct UStreamedVideoDataAsset* StreamedVideo; // 0x408(0x08)
	struct FText Title; // 0x410(0x18)
	bool Open; // 0x428(0x01)

	enum class EMenuStackWidget_RequestCloseMenuResult RequestCloseMenu(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.RequestCloseMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCloseButtonPressed(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.HandleCloseButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPreviewTitle(struct FText Title); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.SetPreviewTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnBackgroundMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.OnBackgroundMouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClose(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.HandleClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOpen(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.HandleOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreparePreviewWidget(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.PreparePreviewWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRegister(struct UMenuStackEntry* RegisteredEntry); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.OnRegister // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOpen(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.OnOpen // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnClose(); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.OnClose // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Modal_SkinVideoPreview(int32_t EntryPoint); // Function WBP_Modal_SkinVideoPreview.WBP_Modal_SkinVideoPreview_C.ExecuteUbergraph_WBP_Modal_SkinVideoPreview // (Final|UbergraphFunction) // @ game+0x1b42740
};


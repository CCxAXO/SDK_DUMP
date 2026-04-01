// WidgetBlueprintGeneratedClass WBP_Panel_MFABanner.WBP_Panel_MFABanner_C
// Size: 0x1af8 (Inherited: 0x1ae0)
struct UWBP_Panel_MFABanner_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UMFABannerViewModel* MFABannerViewModel; // 0x1ae8(0x08)
	struct UImage* hover; // 0x1af0(0x08)

	enum class ESlateVisibility __89c3e8e5-402c-4310-fe6d-759cf74bb36f_SourceToDest(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.__89c3e8e5-402c-4310-fe6d-759cf74bb36f_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HideFocus(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.HideFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowFocus(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.ShowFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleBannerClicked(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.HandleBannerClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Banner(bool IsLobby); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.Init Banner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_MFABanner(int32_t EntryPoint); // Function WBP_Panel_MFABanner.WBP_Panel_MFABanner_C.ExecuteUbergraph_WBP_Panel_MFABanner // (Final|UbergraphFunction) // @ game+0x1af5410
};


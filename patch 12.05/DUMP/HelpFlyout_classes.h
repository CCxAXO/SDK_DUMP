// WidgetBlueprintGeneratedClass HelpFlyout.HelpFlyout_C
// Size: 0x3b1 (Inherited: 0x320)
struct UHelpFlyout_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* WiggleRight; // 0x328(0x08)
	struct UWidgetAnimation* WiggleDown; // 0x330(0x08)
	struct UWidgetAnimation* WiggleLeft; // 0x338(0x08)
	struct UWidgetAnimation* WiggleUp; // 0x340(0x08)
	struct UImage* Border; // 0x348(0x08)
	struct UOverlay* Bottom; // 0x350(0x08)
	struct UImage* HelperImage; // 0x358(0x08)
	struct USizeBox* InfoImage; // 0x360(0x08)
	struct UOverlay* Left; // 0x368(0x08)
	struct UOverlay* Right; // 0x370(0x08)
	struct UTextBlock* TextBlock_29; // 0x378(0x08)
	struct UOverlay* TextContent; // 0x380(0x08)
	struct UOverlay* Top; // 0x388(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x390(0x08)
	struct FText content; // 0x398(0x18)
	enum class FlyoutArrowDirection ArrowDirection; // 0x3b0(0x01)

	void SetContent(struct FText newText); // Function HelpFlyout.HelpFlyout_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTextAlignment(); // Function HelpFlyout.HelpFlyout_C.UpdateTextAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateArrowDirection(); // Function HelpFlyout.HelpFlyout_C.UpdateArrowDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HelpFlyout.HelpFlyout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function HelpFlyout.HelpFlyout_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function HelpFlyout.HelpFlyout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HelpFlyout(int32_t EntryPoint); // Function HelpFlyout.HelpFlyout_C.ExecuteUbergraph_HelpFlyout // (Final|UbergraphFunction) // @ game+0x1af5410
};


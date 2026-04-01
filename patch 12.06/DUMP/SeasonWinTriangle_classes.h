// WidgetBlueprintGeneratedClass SeasonWinTriangle.SeasonWinTriangle_C
// Size: 0x3c8 (Inherited: 0x320)
struct USeasonWinTriangle_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOverlay* ImageOverlay; // 0x328(0x08)
	struct UMenuAnchor* MenuAnchor_608; // 0x330(0x08)
	struct USizeBox* SizeBox_2; // 0x338(0x08)
	struct UButton* TriangleButton; // 0x340(0x08)
	struct UCanvasPanel* TriangleButtonWrapper; // 0x348(0x08)
	struct UImage* TriangleImage; // 0x350(0x08)
	double Size; // 0x358(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x360(0x10)
	bool IsButton; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FLinearColor Color; // 0x374(0x10)
	char pad_384[0x4]; // 0x384(0x04)
	struct FText TextForTooltip; // 0x388(0x18)
	int32_t Tier; // 0x3a0(0x04)
	bool HasBorder; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UTexture2D* Image; // 0x3a8(0x08)
	double Spacing; // 0x3b0(0x08)
	bool Inverted; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UTexture2D* InvertedImage; // 0x3c0(0x08)

	struct UWidget* Get_TriangleButton_ToolTipWidget_1(); // Function SeasonWinTriangle.SeasonWinTriangle_C.Get_TriangleButton_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CalcYOffset(double& YOffset); // Function SeasonWinTriangle.SeasonWinTriangle_C.CalcYOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetHeight(double Length, double& Height); // Function SeasonWinTriangle.SeasonWinTriangle_C.GetHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CalcXOffset(double& XOffset); // Function SeasonWinTriangle.SeasonWinTriangle_C.CalcXOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Construct(); // Function SeasonWinTriangle.SeasonWinTriangle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SeasonWinTriangle.SeasonWinTriangle_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TriangleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SeasonWinTriangle.SeasonWinTriangle_C.BndEvt__TriangleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TriangleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SeasonWinTriangle.SeasonWinTriangle_C.BndEvt__TriangleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function SeasonWinTriangle.SeasonWinTriangle_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SeasonWinTriangle.SeasonWinTriangle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SeasonWinTriangle(int32_t EntryPoint); // Function SeasonWinTriangle.SeasonWinTriangle_C.ExecuteUbergraph_SeasonWinTriangle // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function SeasonWinTriangle.SeasonWinTriangle_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


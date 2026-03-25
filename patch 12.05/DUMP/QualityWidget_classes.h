// WidgetBlueprintGeneratedClass QualityWidget.QualityWidget_C
// Size: 0x4c0 (Inherited: 0x320)
struct UQualityWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UButton* HighButton; // 0x338(0x08)
	struct UOverlay* HighOverlay; // 0x340(0x08)
	struct UImage* HighSelected; // 0x348(0x08)
	struct UTextBlock* HighTxt; // 0x350(0x08)
	struct UImage* Image_1; // 0x358(0x08)
	struct UButton* LowButton; // 0x360(0x08)
	struct UOverlay* LowOverlay; // 0x368(0x08)
	struct UImage* LowSelected; // 0x370(0x08)
	struct UTextBlock* LowTxt; // 0x378(0x08)
	struct UButton* MediumButton; // 0x380(0x08)
	struct UOverlay* MediumOverlay; // 0x388(0x08)
	struct UImage* MediumSelected; // 0x390(0x08)
	struct UTextBlock* MediumTxt; // 0x398(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x3a0(0x08)
	struct UButton* VeryLowButton; // 0x3a8(0x08)
	struct UOverlay* VeryLowOverlay; // 0x3b0(0x08)
	struct UImage* VeryLowSelected; // 0x3b8(0x08)
	struct UTextBlock* VeryLowTxt; // 0x3c0(0x08)
	struct FText DisplayText; // 0x3c8(0x18)
	struct FText DisplayTooltip; // 0x3e0(0x18)
	enum class EAresIntSettingName SettingName; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32_t Value; // 0x3fc(0x04)
	struct FText HighText; // 0x400(0x18)
	struct FText MediumText; // 0x418(0x18)
	struct FText LowText; // 0x430(0x18)
	struct FText VeryLowText; // 0x448(0x18)
	int32_t HighValue; // 0x460(0x04)
	int32_t MediumValue; // 0x464(0x04)
	int32_t LowValue; // 0x468(0x04)
	int32_t VeryLowValue; // 0x46c(0x04)
	struct TMap<int32_t, struct UOverlay*> ValueToOverlayMap; // 0x470(0x50)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function QualityWidget.QualityWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplay(); // Function QualityWidget.QualityWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsValueAllowed(int32_t InValue, bool& Allowed); // Function QualityWidget.QualityWidget_C.IsValueAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ConstructValueToOverlayMap(); // Function QualityWidget.QualityWidget_C.ConstructValueToOverlayMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyValueRestrictions(); // Function QualityWidget.QualityWidget_C.ApplyValueRestrictions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function QualityWidget.QualityWidget_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetColors(); // Function QualityWidget.QualityWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyStaticUI(); // Function QualityWidget.QualityWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function QualityWidget.QualityWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function QualityWidget.QualityWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function QualityWidget.QualityWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function QualityWidget.QualityWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function QualityWidget.QualityWidget_C.BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SettingChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function QualityWidget.QualityWidget_C.SettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function QualityWidget.QualityWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function QualityWidget.QualityWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__VeryLowButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function QualityWidget.QualityWidget_C.BndEvt__VeryLowButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function QualityWidget.QualityWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshIntSettingVisual(); // Function QualityWidget.QualityWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_QualityWidget(int32_t EntryPoint); // Function QualityWidget.QualityWidget_C.ExecuteUbergraph_QualityWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


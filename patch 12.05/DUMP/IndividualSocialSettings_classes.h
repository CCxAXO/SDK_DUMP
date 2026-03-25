// WidgetBlueprintGeneratedClass IndividualSocialSettings.IndividualSocialSettings_C
// Size: 0x3f9 (Inherited: 0x3d8)
struct UIndividualSocialSettings_C : UWBP_IndividualSocialSettings_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UScaleBox* ScaleBox_Block; // 0x3e0(0x08)
	struct UScaleBox* ScaleBox_VolumeSlider; // 0x3e8(0x08)
	struct USpacer* Spacer_Actions; // 0x3f0(0x08)
	bool DesignTime_ShowBlockFeature; // 0x3f8(0x01)

	void SetShowBlockButton(bool ShowBlockButton); // Function IndividualSocialSettings.IndividualSocialSettings_C.SetShowBlockButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function IndividualSocialSettings.IndividualSocialSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function IndividualSocialSettings.IndividualSocialSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_IndividualSocialSettings(int32_t EntryPoint); // Function IndividualSocialSettings.IndividualSocialSettings_C.ExecuteUbergraph_IndividualSocialSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass ShootingRangeScreenV2.ShootingRangeScreenV2_C
// Size: 0x440 (Inherited: 0x318)
struct UShootingRangeScreenV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Outro; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UImage* Border; // 0x330(0x08)
	struct UImage* EnterRangeBackground; // 0x338(0x08)
	struct USharedButtonMaster_C* EnterRangeButton; // 0x340(0x08)
	struct UImage* Image_166; // 0x348(0x08)
	struct UImage* Image_168; // 0x350(0x08)
	struct UImage* Image_169; // 0x358(0x08)
	struct UImage* Image_170; // 0x360(0x08)
	struct ULargeModal_C* LargeModal; // 0x368(0x08)
	struct UShootingRangeModuleButton_C* PlantModule; // 0x370(0x08)
	struct UImage* rangeModePreviewImage; // 0x378(0x08)
	struct UShootingRangeModuleButton_C* SkillTestModule; // 0x380(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x388(0x08)
	bool IsAllowedToEnter; // 0x390(0x01)
	bool IsRequestInProgress; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UShootingRangeModuleButton_C* SelectedModule; // 0x398(0x08)
	struct TArray<struct UShootingRangeModuleButton_C*> Modules; // 0x3a0(0x10)
	struct TMap<struct FString, struct FText> ModuleStringToTextMap; // 0x3b0(0x50)
	struct FAresMainMenuNavBarData NavBarData; // 0x400(0x28)
	struct FText EnterRangeText; // 0x428(0x18)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTShootingRangeScreenV2(struct UBorder* Target); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.SequenceEvent__ENTRYPOINTShootingRangeScreenV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(struct UBorder* Target); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplay(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateModel(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.UpdateModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentPartyUpdated(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.OnCurrentPartyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartSoloExperienceCompleted(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.OnStartSoloExperienceCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnButtonClicked(struct UShootingRangeModuleButton_C* Button); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.OnButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EnterRangeButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.BndEvt__EnterRangeButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ShootingRangeScreenV2(int32_t EntryPoint); // Function ShootingRangeScreenV2.ShootingRangeScreenV2_C.ExecuteUbergraph_ShootingRangeScreenV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass PatchNotesWidget.PatchNotesWidget_C
// Size: 0x338 (Inherited: 0x318)
struct UPatchNotesWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWBP_Button_Ghost_C* WBP_Button_Ghost; // 0x320(0x08)
	struct UAkAudioEvent* SoundClick; // 0x328(0x08)
	struct UAkAudioEvent* SoundHover; // 0x330(0x08)

	void ArePatchNotesAvailable(bool& ArePatchNotesAvailable); // Function PatchNotesWidget.PatchNotesWidget_C.ArePatchNotesAvailable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get URL(struct FString& URL); // Function PatchNotesWidget.PatchNotesWidget_C.Get URL // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function PatchNotesWidget.PatchNotesWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PatchNotesWidget_WBP_Button_Ghost_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PatchNotesWidget.PatchNotesWidget_C.BndEvt__PatchNotesWidget_WBP_Button_Ghost_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PatchNotesWidget(int32_t EntryPoint); // Function PatchNotesWidget.PatchNotesWidget_C.ExecuteUbergraph_PatchNotesWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


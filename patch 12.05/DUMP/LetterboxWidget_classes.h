// WidgetBlueprintGeneratedClass LetterboxWidget.LetterboxWidget_C
// Size: 0x438 (Inherited: 0x42a)
struct ULetterboxWidget_C : UBaseBoolOptionWidget_C {
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)

	bool ShouldDisplay(); // Function LetterboxWidget.LetterboxWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPersistedValue(bool& Value); // Function LetterboxWidget.LetterboxWidget_C.GetPersistedValue // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function LetterboxWidget.LetterboxWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function LetterboxWidget.LetterboxWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void GameSettingsUpdated(); // Function LetterboxWidget.LetterboxWidget_C.GameSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function LetterboxWidget.LetterboxWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleValueUpdated(bool Value); // Function LetterboxWidget.LetterboxWidget_C.HandleValueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LetterboxWidget(int32_t EntryPoint); // Function LetterboxWidget.LetterboxWidget_C.ExecuteUbergraph_LetterboxWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


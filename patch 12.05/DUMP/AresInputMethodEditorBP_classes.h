// WidgetBlueprintGeneratedClass AresInputMethodEditorBP.AresInputMethodEditorBP_C
// Size: 0x4c1 (Inherited: 0x4a0)
struct UAresInputMethodEditorBP_C : UAresInputMethodEditor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UImage* Background; // 0x4a8(0x08)
	struct UVerticalBox* IMEBox; // 0x4b0(0x08)
	bool Different Length; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	int32_t New Selected Index; // 0x4bc(0x04)
	bool Needs To Reposition; // 0x4c0(0x01)

	void Create IME View(struct TArray<struct FString>& Candidate Strings, int32_t Selected Index); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Create IME View // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Make Background Overlay(struct UOverlay*& BackgroundOverlay); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Make Background Overlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Format Candidate String(struct FString Candidate String, int32_t Index, struct FString& Formated Candidate String); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Format Candidate String // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Add Candidate String to IME(struct FString Candidate String, bool IsSelectedIndex); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Add Candidate String to IME // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInputMethodOnUpdate(struct TArray<struct FString>& NewCandidateStrings, int32_t NewSelectedIndex); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.HandleInputMethodOnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AresInputMethodEditorBP(int32_t EntryPoint); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.ExecuteUbergraph_AresInputMethodEditorBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


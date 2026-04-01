// WidgetBlueprintGeneratedClass VSyncWidget.VSyncWidget_C
// Size: 0x438 (Inherited: 0x42a)
struct UVSyncWidget_C : UBaseBoolOptionWidget_C {
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)

	bool ShouldDisplay(); // Function VSyncWidget.VSyncWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PersistValue(bool Value); // Function VSyncWidget.VSyncWidget_C.PersistValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function VSyncWidget.VSyncWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function VSyncWidget.VSyncWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VSyncWidget(int32_t EntryPoint); // Function VSyncWidget.VSyncWidget_C.ExecuteUbergraph_VSyncWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};


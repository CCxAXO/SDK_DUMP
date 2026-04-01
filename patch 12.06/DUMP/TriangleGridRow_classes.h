// WidgetBlueprintGeneratedClass TriangleGridRow.TriangleGridRow_C
// Size: 0x361 (Inherited: 0x318)
struct UTriangleGridRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* Overlay_1; // 0x320(0x08)
	int32_t NumberOfTriangles; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct USeasonWinTriangle_C*> AllTriangleWidgets; // 0x330(0x10)
	double Size; // 0x340(0x08)
	double Spacing; // 0x348(0x08)
	struct FLinearColor TriangleColor; // 0x350(0x10)
	bool bInitialized; // 0x360(0x01)

	void InitInternal(); // Function TriangleGridRow.TriangleGridRow_C.InitInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function TriangleGridRow.TriangleGridRow_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateTriangles(); // Function TriangleGridRow.TriangleGridRow_C.GenerateTriangles // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAllTriangleWidgets(struct TArray<struct USeasonWinTriangle_C*>& NewParam); // Function TriangleGridRow.TriangleGridRow_C.GetAllTriangleWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TriangleGridRow.TriangleGridRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TriangleGridRow.TriangleGridRow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TriangleGridRow(int32_t EntryPoint); // Function TriangleGridRow.TriangleGridRow_C.ExecuteUbergraph_TriangleGridRow // (Final|UbergraphFunction) // @ game+0x1b42740
};


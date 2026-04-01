// WidgetBlueprintGeneratedClass SegmentedCircularProgressBar.SegmentedCircularProgressBar_C
// Size: 0x390 (Inherited: 0x320)
struct USegmentedCircularProgressBar_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOverlay* Overlay_1; // 0x328(0x08)
	struct UMaterialInstance* ProgressBarMaterial; // 0x330(0x08)
	struct FLinearColor FillColor; // 0x338(0x10)
	struct FLinearColor EmptyColor; // 0x348(0x10)
	int32_t NumSegments; // 0x358(0x04)
	struct FLinearColor ActiveSegmentFillColor; // 0x35c(0x10)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct UImage*> SegmentImages; // 0x370(0x10)
	double SegmentWidthMultiplier; // 0x380(0x08)
	double FillAmount; // 0x388(0x08)

	void SetNumSegments(int32_t NumSegments); // Function SegmentedCircularProgressBar.SegmentedCircularProgressBar_C.SetNumSegments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPercent(double InPercent); // Function SegmentedCircularProgressBar.SegmentedCircularProgressBar_C.SetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFillProperties(); // Function SegmentedCircularProgressBar.SegmentedCircularProgressBar_C.UpdateFillProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function SegmentedCircularProgressBar.SegmentedCircularProgressBar_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SegmentedCircularProgressBar(int32_t EntryPoint); // Function SegmentedCircularProgressBar.SegmentedCircularProgressBar_C.ExecuteUbergraph_SegmentedCircularProgressBar // (Final|UbergraphFunction) // @ game+0x1b42740
};


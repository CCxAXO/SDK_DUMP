// WidgetBlueprintGeneratedClass WBP_ProgressBar_Basic.WBP_ProgressBar_Basic_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_ProgressBar_Basic_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UProgressBar* DeltaBar; // 0x3e8(0x08)
	struct UProgressBar* TopBar; // 0x3f0(0x08)
	double BeforePercent; // 0x3f8(0x08)
	double AfterPercent; // 0x400(0x08)
	struct FLinearColor DeltaColor; // 0x408(0x10)
	struct FLinearColor TopColor; // 0x418(0x10)

	void SetProgress(double BeforePercent, double AfterPercent); // Function WBP_ProgressBar_Basic.WBP_ProgressBar_Basic_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressBar_Basic.WBP_ProgressBar_Basic_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_ProgressBar_Basic.WBP_ProgressBar_Basic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_ProgressBar_Basic(int32_t EntryPoint); // Function WBP_ProgressBar_Basic.WBP_ProgressBar_Basic_C.ExecuteUbergraph_WBP_ProgressBar_Basic // (Final|UbergraphFunction) // @ game+0x1b42740
};


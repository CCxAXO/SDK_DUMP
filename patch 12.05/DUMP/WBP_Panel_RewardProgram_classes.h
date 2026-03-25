// WidgetBlueprintGeneratedClass WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_RewardProgram_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* RewardsProgramImage; // 0x3e8(0x08)
	struct URewardProgramListViewModel* RewardProgramListVM; // 0x3f0(0x08)

	void HandleIsAnyRewardProgramActiveChanged(bool IsAnyRewardProgramActive); // Function WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C.HandleIsAnyRewardProgramActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RewardProgram(int32_t EntryPoint); // Function WBP_Panel_RewardProgram.WBP_Panel_RewardProgram_C.ExecuteUbergraph_WBP_Panel_RewardProgram // (Final|UbergraphFunction) // @ game+0x1af5410
};


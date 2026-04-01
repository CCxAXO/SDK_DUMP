// WidgetBlueprintGeneratedClass WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_Panel_PickemProgressBar_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UBasePickemChoiceProgressViewModel* ChoiceProgressViewModel; // 0x3e8(0x08)
	struct FString TournamentSlug; // 0x3f0(0x10)
	enum class EPickemBlockSlug PickemBlock; // 0x400(0x01)
	bool bIsBoundToViewModels; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FString TournamentID; // 0x408(0x10)

	void SetPickemBlock(enum class EPickemBlockSlug InPickemBlock); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.SetPickemBlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool GetServerHasMadeAllChoices(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.GetServerHasMadeAllChoices // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleMaxChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.HandleMaxChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleServerChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.HandleServerChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClientChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.HandleClientChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetViewModels(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.ResetViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcastViewModels(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.RefreshBroadcastViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeViewModels(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.InitializeViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool GetClientHasMadeAllChoices(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.GetClientHasMadeAllChoices // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	double GetServerChoiceCountPercentage(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.GetServerChoiceCountPercentage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	double GetClientChoiceCountPercentage(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.GetClientChoiceCountPercentage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModels(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.MakeViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemProgressBar_Base(int32_t EntryPoint); // Function WBP_Panel_PickemProgressBar_Base.WBP_Panel_PickemProgressBar_Base_C.ExecuteUbergraph_WBP_Panel_PickemProgressBar_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};


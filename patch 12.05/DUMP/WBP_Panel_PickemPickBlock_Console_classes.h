// WidgetBlueprintGeneratedClass WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C
// Size: 0x4b8 (Inherited: 0x3e0)
struct UWBP_Panel_PickemPickBlock_Console_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_PickWindowDateRange; // 0x3e8(0x08)
	struct UAresCommonText* CT_PickWindowN; // 0x3f0(0x08)
	struct UEsports_TabbedContentBtn_C* Esports_PickemsCardAnimation; // 0x3f8(0x08)
	struct UHorizontalBox* HorizontalBox_PointsContainer; // 0x400(0x08)
	struct UAresWidgetSwitcher* Switcher_Content; // 0x408(0x08)
	struct UAresWidgetSwitcher* Switcher_TopLeft; // 0x410(0x08)
	struct UAresCommonText* Text_Points; // 0x418(0x08)
	struct UAresCommonText* Text_PointsAmount; // 0x420(0x08)
	struct UAresCommonText* Text_StageName; // 0x428(0x08)
	struct UWBP_Panel_PickemPickBlockStateIndicator_C* WBP_Panel_PickemPickBlockStateIndicator; // 0x430(0x08)
	struct UPickemBlockStageViewModel* PickemStageViewModel; // 0x438(0x08)
	struct UPickemPickBlockViewModel* PickemPickBlockViewModel; // 0x440(0x08)
	struct UPickemBlockModel* PickemBlockModel; // 0x448(0x08)
	struct FString TournamentSlug; // 0x450(0x10)
	enum class EPickemBlockSlug PickemBlock; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FSlateColor StandardTitleColor; // 0x464(0x14)
	struct FSlateColor OpenTitleColor; // 0x478(0x14)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UPickemEventInfoViewModel* PickemEventVM; // 0x490(0x08)
	struct FString TournamentID; // 0x498(0x10)
	struct FMulticastInlineDelegate PickBlockIsEmpty; // 0x4a8(0x10)

	void HandlePickBlockElementsChanged(struct TArray<struct UPickemBlockElementModel*>& PickBlockElements); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.HandlePickBlockElementsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPickemInfoVMHasValidData(bool InHasValidData); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.OnPickemInfoVMHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOpenCloseTimeChanged(struct FDateTime& NewValue); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.HandleOpenCloseTimeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentPickemStageChanged(enum class EAresPickemStage PickemStage); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.HandleCurrentPickemStageChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializePickemBlockVM(struct UPickemBlockModel* BlockModel); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.InitializePickemBlockVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializePickemBlockStageVM(struct FString InTournamentSlug, struct FString InTournamentID); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.InitializePickemBlockStageVM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemPickBlock_Console(int32_t EntryPoint); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.ExecuteUbergraph_WBP_Panel_PickemPickBlock_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void PickBlockIsEmpty__DelegateSignature(bool bIsEmpty); // Function WBP_Panel_PickemPickBlock_Console.WBP_Panel_PickemPickBlock_Console_C.PickBlockIsEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


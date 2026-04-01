// WidgetBlueprintGeneratedClass WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C
// Size: 0x48a (Inherited: 0x3e0)
struct UWBP_BracketBuilder_CellDesigner_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* HB_Main; // 0x3e8(0x08)
	struct FLinearColor Color_DarkBG; // 0x3f0(0x10)
	struct FLinearColor Color_LightBG; // 0x400(0x10)
	struct FLinearColor Color_LowerBracketBG; // 0x410(0x10)
	struct TMap<enum class EBracketMatchupID, struct UWBP_BaseBracketMatchup_C*> MatchupEnumToWidgetMap; // 0x420(0x50)
	struct UEsportsBracketViewModel* BracketViewModel; // 0x470(0x08)
	struct FMulticastInlineDelegate OnMatchupViewModelNeeded; // 0x478(0x10)
	enum class E_BracketDesignType BracketDesignType; // 0x488(0x01)
	enum class E_BracketDesignType PreviewBracketDesignType; // 0x489(0x01)

	void Setup12TeamDoubleElim(); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.Setup12TeamDoubleElim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupBracket(); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.SetupBracket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MatchupViewModelNeeded(struct FString MatchupID, enum class EBracketMatchupID BracketMatchupID); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.MatchupViewModelNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool Bind); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsBracketViewModel* InViewModel, enum class E_BracketDesignType InDesignType); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AssociateMatchupToViewModel(enum class EBracketMatchupID InBracketMatchupID, struct UAresViewModelBase* InViewModel); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.AssociateMatchupToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Clear Bracket(); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.Clear Bracket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Setup8TeamDoubleElim(); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.Setup8TeamDoubleElim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddBracketCell(struct FF_TabbedBracketCellConfig InCellConfig, struct UVerticalBox* InContainer); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.AddBracketCell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddColumn(struct TArray<struct FF_TabbedBracketCellConfig>& InCellConfigs); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.AddColumn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_BracketBuilder_CellDesigner(int32_t EntryPoint); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.ExecuteUbergraph_WBP_BracketBuilder_CellDesigner // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnMatchupViewModelNeeded__DelegateSignature(struct FString MatchupID, enum class EBracketMatchupID BracketMatchupID); // Function WBP_BracketBuilder_CellDesigner.WBP_BracketBuilder_CellDesigner_C.OnMatchupViewModelNeeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


// WidgetBlueprintGeneratedClass LoadingTeamV3.LoadingTeamV3_C
// Size: 0x358 (Inherited: 0x318)
struct ULoadingTeamV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* PlayerList; // 0x320(0x08)
	struct UTextBlock* startingSideText; // 0x328(0x08)
	struct UUniversalHorizontalDivider02_C* UniversalHorizontalDivider02; // 0x330(0x08)
	struct UVerticalBox* VerticalBoxContainer; // 0x338(0x08)
	bool teamObjective; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UPregameTeamModel* TeamModel; // 0x348(0x08)
	bool Ally; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t PreviewTeamSize; // 0x354(0x04)

	void CreateLoadingPlayer(struct FLoadingScreenPlayer Player, bool Allied, bool DesignTime, bool IsRankedMatch, struct UUserWidget*& Widget); // Function LoadingTeamV3.LoadingTeamV3_C.CreateLoadingPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAlly(); // Function LoadingTeamV3.LoadingTeamV3_C.UpdateAlly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FLoadingScreenTeam Team, bool Ally, bool IsRankedMatch); // Function LoadingTeamV3.LoadingTeamV3_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function LoadingTeamV3.LoadingTeamV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LoadingTeamV3(int32_t EntryPoint); // Function LoadingTeamV3.LoadingTeamV3_C.ExecuteUbergraph_LoadingTeamV3 // (Final|UbergraphFunction) // @ game+0x1b42740
};


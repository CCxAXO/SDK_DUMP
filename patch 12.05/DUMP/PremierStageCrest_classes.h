// WidgetBlueprintGeneratedClass PremierStageCrest.PremierStageCrest_C
// Size: 0x4b0 (Inherited: 0x3e0)
struct UPremierStageCrest_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UTextBlock* ContextualSubtext; // 0x3e8(0x08)
	struct UWidgetSwitcher* CrestProgress; // 0x3f0(0x08)
	struct UWidgetSwitcher* CrestState; // 0x3f8(0x08)
	struct UTextBlock* CrestType; // 0x400(0x08)
	struct UImage* Divider; // 0x408(0x08)
	struct UTextBlock* Division; // 0x410(0x08)
	struct UTextBlock* Empty; // 0x418(0x08)
	struct UTextBlock* MatchesPlayed; // 0x420(0x08)
	struct UTextBlock* NameAndTag; // 0x428(0x08)
	struct UWidgetSwitcher* ParticipationState; // 0x430(0x08)
	struct UTextBlock* PlayMatchesToUnlock; // 0x438(0x08)
	struct UTextBlock* PointsEarned; // 0x440(0x08)
	struct UPremierCrest_C* PREMIERCREST; // 0x448(0x08)
	struct UProgressBar* ProgressBar_MatchesPlayed; // 0x450(0x08)
	struct UProgressBar* ProgressBar_PointsToQualify; // 0x458(0x08)
	struct UTextBlock* QualifyforPlayoffs; // 0x460(0x08)
	struct UTextBlock* UnenrolledText; // 0x468(0x08)
	struct UPremierSeasonDataAsset* PremierSeasonData; // 0x470(0x08)
	struct UDataTable* Division Data Table; // 0x478(0x08)
	struct UVM_PremierCrests_C* PremierCrestsVM; // 0x480(0x08)
	bool IsActiveSeason; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	int64_t SeasonMatchesRequiredForCrest; // 0x490(0x08)
	struct FGuid SeasonID; // 0x498(0x10)
	int64_t TournamentMatchesRequiredForCrest; // 0x4a8(0x08)

	void QualifiedForCrest(bool& IsQualified); // Function PremierStageCrest.PremierStageCrest_C.QualifiedForCrest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Bind PremierCrests Events(bool Bind); // Function PremierStageCrest.PremierStageCrest_C.Bind PremierCrests Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierCrestsVM(struct UVM_PremierCrests_C* PremierCrestsVM); // Function PremierStageCrest.PremierStageCrest_C.Set PremierCrestsVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update PremierCrestWidget(); // Function PremierStageCrest.PremierStageCrest_C.Update PremierCrestWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update ContextualSubtext(); // Function PremierStageCrest.PremierStageCrest_C.Update ContextualSubtext // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update CrestTypeText(); // Function PremierStageCrest.PremierStageCrest_C.Update CrestTypeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update PointsToQualify ProgressBar&Text(); // Function PremierStageCrest.PremierStageCrest_C.Update PointsToQualify ProgressBar&Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update MatchesPlayed ProgressBar&Text(); // Function PremierStageCrest.PremierStageCrest_C.Update MatchesPlayed ProgressBar&Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update CrestState(); // Function PremierStageCrest.PremierStageCrest_C.Update CrestState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Name & Tag & Division(); // Function PremierStageCrest.PremierStageCrest_C.Update Name & Tag & Division // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update ParticipationState(); // Function PremierStageCrest.PremierStageCrest_C.Update ParticipationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init with Defaults(bool& Break); // Function PremierStageCrest.PremierStageCrest_C.Init with Defaults // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisuals(); // Function PremierStageCrest.PremierStageCrest_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function PremierStageCrest.PremierStageCrest_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierStageCrest.PremierStageCrest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On SeasonID Updated(struct FGuid SeasonID); // Function PremierStageCrest.PremierStageCrest_C.On SeasonID Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init With VM(struct UVM_PremierCrests_C* PremierCrestsVM); // Function PremierStageCrest.PremierStageCrest_C.Init With VM // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On PremierPlayerCrestsModel Updated(struct UPremierPlayerCrestsModelOld* PremierPlayerCrestsModel); // Function PremierStageCrest.PremierStageCrest_C.On PremierPlayerCrestsModel Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierStageCrest(int32_t EntryPoint); // Function PremierStageCrest.PremierStageCrest_C.ExecuteUbergraph_PremierStageCrest // (Final|UbergraphFunction) // @ game+0x1af5410
};


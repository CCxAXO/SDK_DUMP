// WidgetBlueprintGeneratedClass WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_Esports_EventTeamsWrap_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* RowContainer; // 0x3e8(0x08)
	int32_t NumTeamsAcross; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UEsportsEventViewModel* EventViewModel; // 0x3f8(0x08)
	enum class EHorizontalAlignment ContentsAlignment; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FMargin ContentsPadding; // 0x404(0x10)
	int32_t DesignerNumTeams; // 0x414(0x04)
	struct UEsportsTournamentViewModel* TournamentViewModel; // 0x418(0x08)

	void SortEsportsTeamWidgets(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.SortEsportsTeamWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamIDsUpdated(struct TArray<struct FString>& TeamIDs); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.OnTeamIDsUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTournamentViewModel(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.SetTournamentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyVerticalPadding(struct UVerticalBoxSlot* InSlot, int32_t InIndex, int32_t InTotal); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.ApplyVerticalPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyHorizontalPadding(struct UHorizontalBoxSlot* InSlot, int32_t InIndex, int32_t InTotal); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.ApplyHorizontalPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsEventViewModel* InViewModel); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddWidget(struct UAresCommonUserWidget* InWidget, int32_t InIndex, int32_t InTotal); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.AddWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamsUpdated(struct TArray<struct UTeamModel*>& InTeamModels); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.OnTeamsUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool bShouldBind); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Esports_EventTeamsWrap(int32_t EntryPoint); // Function WBP_Panel_Esports_EventTeamsWrap.WBP_Panel_Esports_EventTeamsWrap_C.ExecuteUbergraph_WBP_Panel_Esports_EventTeamsWrap // (Final|UbergraphFunction) // @ game+0x1b42740
};


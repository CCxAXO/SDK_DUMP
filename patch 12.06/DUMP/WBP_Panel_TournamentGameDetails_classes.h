// WidgetBlueprintGeneratedClass WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C
// Size: 0x441 (Inherited: 0x3e0)
struct UWBP_Panel_TournamentGameDetails_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* IMG_BG; // 0x3e8(0x08)
	struct UAresCommonText* TXT_GameNumber; // 0x3f0(0x08)
	struct UAresCommonText* TXT_LeftScore; // 0x3f8(0x08)
	struct UAresCommonText* TXT_MapName; // 0x400(0x08)
	struct UAresCommonText* TXT_RightScore; // 0x408(0x08)
	struct UWBP_Panel_TournamentMatchIndicator_C* WBP_Panel_TournamentMatchIndicator; // 0x410(0x08)
	struct UWBP_Panel_TournamentLiveTag_C* WBP_TournamentLiveTag; // 0x418(0x08)
	int32_t LeftScore; // 0x420(0x04)
	int32_t RightScore; // 0x424(0x04)
	int32_t GameIndex; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMatchupParticipantModel* LeftParticipant; // 0x430(0x08)
	struct UMatchupParticipantModel* RightParticipant; // 0x438(0x08)
	bool bIsLive; // 0x440(0x01)

	void ChangeTextWidgetTypeface(struct UTextBlock* TextWidget, struct FName Typeface); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.ChangeTextWidgetTypeface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLive(bool bIsLive); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.SetIsLive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EmptyState(); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.EmptyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.SetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideGameNumber(); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.HideGameNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshWidget(); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.RefreshWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetParticipants(struct UMatchupParticipantModel* InLeftParticipant, struct UMatchupParticipantModel* InRightParticpant, int32_t GameIndex); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.SetParticipants // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateOutcomeStyling(); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.UpdateOutcomeStyling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRightScore(int32_t InScore); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.SetRightScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeftScore(int32_t InScore); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.SetLeftScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TournamentGameDetails(int32_t EntryPoint); // Function WBP_Panel_TournamentGameDetails.WBP_Panel_TournamentGameDetails_C.ExecuteUbergraph_WBP_Panel_TournamentGameDetails // (Final|UbergraphFunction) // @ game+0x1b42740
};


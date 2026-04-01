// WidgetBlueprintGeneratedClass Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C
// Size: 0x4f8 (Inherited: 0x400)
struct UWidget_Voting_LeftFlyout_C : UWidget_Voting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* TransitionOffScreen; // 0x408(0x08)
	struct UWidgetAnimation* VoteFailed; // 0x410(0x08)
	struct UWidgetAnimation* VotePassed; // 0x418(0x08)
	struct UWidgetAnimation* VoteActive; // 0x420(0x08)
	struct UWidgetAnimation* AnimReset; // 0x428(0x08)
	struct UWidgetAnimation* AnimSurrender; // 0x430(0x08)
	struct UButton* NoButton; // 0x438(0x08)
	struct UImage* NoOptionCheck; // 0x440(0x08)
	struct UTextBlock* NoOptionText; // 0x448(0x08)
	struct UTextBlock* NoResultText; // 0x450(0x08)
	struct UTextBlock* NoResultTitleText; // 0x458(0x08)
	struct UScaleBox* NumVotedYes; // 0x460(0x08)
	struct UTextBlock* NumVotedYesText; // 0x468(0x08)
	struct UTextBlock* NumVotesNeededText; // 0x470(0x08)
	struct UScaleBox* NumYesVotesNeeded; // 0x478(0x08)
	struct UVoteParticipantWidget_C* Participant1; // 0x480(0x08)
	struct UVoteParticipantWidget_C* Participant2; // 0x488(0x08)
	struct UVoteParticipantWidget_C* Participant3; // 0x490(0x08)
	struct UVoteParticipantWidget_C* Participant4; // 0x498(0x08)
	struct UVoteParticipantWidget_C* Participant5; // 0x4a0(0x08)
	struct UHorizontalBox* Participants; // 0x4a8(0x08)
	struct UOverlay* VoteOptionButtonOverlay; // 0x4b0(0x08)
	struct UHorizontalBox* VoteOptionButtons; // 0x4b8(0x08)
	struct UProgressBar* VoteTimeRemaining; // 0x4c0(0x08)
	struct UTextBlock* VoteTitle; // 0x4c8(0x08)
	struct UButton* YesButton; // 0x4d0(0x08)
	struct UImage* YesOptionCheck; // 0x4d8(0x08)
	struct UTextBlock* YesOptionText; // 0x4e0(0x08)
	struct UTextBlock* YesResultText; // 0x4e8(0x08)
	struct UTextBlock* YesResultTitleText; // 0x4f0(0x08)

	void SequenceEvent__ENTRYPOINTWidget_Voting_LeftFlyout(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.SequenceEvent__ENTRYPOINTWidget_Voting_LeftFlyout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpParticipantsArray(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.SetUpParticipantsArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NoOptionSelected(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.NoOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void YesOptionSelected(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.YesOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNoOption(struct UGameplayVoteOptionBase_C* NoOption); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.UpdateNoOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateYesOption(struct UGameplayVoteOptionBase_C* YesOption); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.UpdateYesOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Up Widget Text for Vote(struct AGameplayVoteBase_C* ActiveVote); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.Set Up Widget Text for Vote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AudioEvent(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.AudioEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideAndResetWidget(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.HideAndResetWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HideWidget(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.HideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Active Vote Updated(struct AGameplayVote* Vote); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.On Active Vote Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowWidget(); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.ShowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_Voting_LeftFlyout(int32_t EntryPoint); // Function Widget_Voting_LeftFlyout.Widget_Voting_LeftFlyout_C.ExecuteUbergraph_Widget_Voting_LeftFlyout // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


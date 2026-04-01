// WidgetBlueprintGeneratedClass WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C
// Size: 0x498 (Inherited: 0x3e0)
struct UWBP_Panel_SocialTrigger_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_PartyToFriend; // 0x3e8(0x08)
	struct UWidgetAnimation* Anim_FriendToParty; // 0x3f0(0x08)
	struct UWBP_Button_SocialTrigger_C* Button_SocialTrigger; // 0x3f8(0x08)
	struct UImage* Image_FriendIcon; // 0x400(0x08)
	struct UImage* Image_PartyIcon; // 0x408(0x08)
	struct USizeBox* SizeBox_BadgeNotification; // 0x410(0x08)
	struct USizeBox* SizeBox_FriendIcon; // 0x418(0x08)
	struct UCommonTextBlock* Text_FriendInfo; // 0x420(0x08)
	struct UCommonTextBlock* Text_PartyInfo; // 0x428(0x08)
	struct UWBP_Panel_SocialBadgeNotification_C* WBP_Panel_BadgeNotification; // 0x430(0x08)
	struct UAresSocialExperienceViewModel* SocialExperienceViewModel; // 0x438(0x08)
	struct FSlateColor PartyColor; // 0x440(0x14)
	enum class EAresSocialTriggerMode PreviewTriggerMode; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32_t PreviewOnlineFriendCount; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UAkAudioEvent* UnseenSocialNotificationAudioEvent; // 0x460(0x08)
	enum class EAresSocialTriggerMode CurrentTriggerMode; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	int32_t PreviewPartyInviteCount; // 0x46c(0x04)
	struct UAresOnlineFriendCountViewModel* OnlineFriendCountViewModel; // 0x470(0x08)
	struct UAresPartyInviteCountViewModel* PartyInviteCountViewModel; // 0x478(0x08)
	struct UAresPartyRequestCountViewModel* PartyRequestCountViewModel; // 0x480(0x08)
	struct TArray<struct UAresSocialCountViewModelBase*> CountViewModels; // 0x488(0x10)

	int32_t GetPartyMessageCount(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.GetPartyMessageCount // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandlePartyMessageCountChanged(int32_t CurrentCount, int32_t PreviousCount); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.HandlePartyMessageCountChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.BindOrUnbindViewModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModels(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.MakeViewModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnlineFriendCountChanged(int32_t CurrentCount, int32_t PreviousCount); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.HandleOnlineFriendCountChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUnseenNotifications(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.HandleUnseenNotifications // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdatePartyText(int32_t PartyMessageCount); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.UpdatePartyText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrentTriggerMode(enum class EAresSocialTriggerMode TriggerMode, enum class EAresSocialTransitionType TransitionType); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.SetCurrentTriggerMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFriendText(int32_t OnlineFriendCount); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.UpdateFriendText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCurrentTriggerMode(enum class EAresSocialTransitionType TransitionType); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.UpdateCurrentTriggerMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UI_SocialEntrancePanel_UI_SocialEntranceButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.BndEvt__UI_SocialEntrancePanel_UI_SocialEntranceButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SocialTrigger(int32_t EntryPoint); // Function WBP_Panel_SocialTrigger.WBP_Panel_SocialTrigger_C.ExecuteUbergraph_WBP_Panel_SocialTrigger // (Final|UbergraphFunction) // @ game+0x1b42740
};


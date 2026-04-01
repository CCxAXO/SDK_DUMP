// WidgetBlueprintGeneratedClass WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C
// Size: 0x46b (Inherited: 0x3e0)
struct UWBP_Panel_VoiceIndicatorList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialPaddedListPanel_C* SocialPaddedListPanel; // 0x3e8(0x08)
	struct TMap<struct FString, struct UUserWidget*> SubjectToWidgetMap; // 0x3f0(0x50)
	struct UWBP_Panel_VoiceIndicator_Base_C* VoiceIndicatorClass; // 0x440(0x08)
	int32_t PreviewCount; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UVoiceParticipantListViewModel* VoiceParticipantListViewModel; // 0x450(0x08)
	bool bIncludePartyVoiceParticipants; // 0x458(0x01)
	bool bIncludeTeamVoiceParticipants; // 0x459(0x01)
	char pad_45A[0x2]; // 0x45a(0x02)
	int32_t MinVisibleParticipantCount; // 0x45c(0x04)
	double PaddingBetweenVoiceIndicators; // 0x460(0x08)
	enum class EAresTouchSwipeDirection SortDirection; // 0x468(0x01)
	enum class EHorizontalAlignment ChildHorizontalAlignment; // 0x469(0x01)
	enum class EVerticalAlignment ChildVerticalAlignment; // 0x46a(0x01)

	void ConstructVoiceIndicatorWidget(struct FString PlayerSubject, struct UWBP_Panel_VoiceIndicator_Base_C*& Widget, bool& bIsValid); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.ConstructVoiceIndicatorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveVoiceIndicator(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.RemoveVoiceIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddVoiceIndicator(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.AddVoiceIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshVoiceIndicators(struct TArray<struct FString>& PlayerSubjects); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.RefreshVoiceIndicators // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearVoiceIndicators(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.ClearVoiceIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceParticipantRemoved(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.HandleVoiceParticipantRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceParticipantAdded(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.HandleVoiceParticipantAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceParticipantListRefreshed(struct TArray<struct FString>& PlayerSubjects); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.HandleVoiceParticipantListRefreshed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VoiceIndicatorList_SocialPaddedListPanel_K2Node_ComponentBoundEvent_1_ChildCountChanged__DelegateSignature(int32_t Count); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.BndEvt__WBP_Panel_VoiceIndicatorList_SocialPaddedListPanel_K2Node_ComponentBoundEvent_1_ChildCountChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VoiceIndicatorList_SocialPaddedListPanel_K2Node_ComponentBoundEvent_2_ChildVisibilityChanged__DelegateSignature(); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.BndEvt__WBP_Panel_VoiceIndicatorList_SocialPaddedListPanel_K2Node_ComponentBoundEvent_2_ChildVisibilityChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VoiceIndicatorList(int32_t EntryPoint); // Function WBP_Panel_VoiceIndicatorList.WBP_Panel_VoiceIndicatorList_C.ExecuteUbergraph_WBP_Panel_VoiceIndicatorList // (Final|UbergraphFunction) // @ game+0x1af5410
};


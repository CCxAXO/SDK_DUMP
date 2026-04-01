// WidgetBlueprintGeneratedClass JanusPlayButton.JanusPlayButton_C
// Size: 0x372 (Inherited: 0x318)
struct UJanusPlayButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* DurationText; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image_2; // 0x330(0x08)
	struct UImage* PlaybackIcon; // 0x338(0x08)
	struct UButton* PlayButton; // 0x340(0x08)
	struct UTextBlock* StartPlayback; // 0x348(0x08)
	bool PlaybackFound; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FString Match ID; // 0x358(0x10)
	enum class EJanusStreamerUsed Result; // 0x368(0x01)
	enum class EMatchHistoryContext Context; // 0x369(0x01)
	char pad_36A[0x2]; // 0x36a(0x02)
	int32_t ListPosition; // 0x36c(0x04)
	bool CanDownload; // 0x370(0x01)
	bool CanPlay; // 0x371(0x01)

	void UpdateButtonAndText(); // Function JanusPlayButton.JanusPlayButton_C.UpdateButtonAndText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Configure Play Button Text(bool bEnabled, struct FText ContentText); // Function JanusPlayButton.JanusPlayButton_C.Configure Play Button Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Play Button Enabled(bool Enable); // Function JanusPlayButton.JanusPlayButton_C.Set Play Button Enabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableUI(bool bEnableUI, struct FString Text); // Function JanusPlayButton.JanusPlayButton_C.EnableUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Janus Button(struct FString MatchID, enum class EMatchHistoryContext Context, int32_t ListPosition); // Function JanusPlayButton.JanusPlayButton_C.Init Janus Button // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function JanusPlayButton.JanusPlayButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__JanusPlayButton_Button_122_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function JanusPlayButton.JanusPlayButton_C.BndEvt__JanusPlayButton_Button_122_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnLocalFileMatchEntryUpdated_Event_1(struct FString MatchID, struct FReplayLocalFileMatchEntryUpdateInfo& UpdateInfo); // Function JanusPlayButton.JanusPlayButton_C.OnLocalFileMatchEntryUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_JanusPlayButton(int32_t EntryPoint); // Function JanusPlayButton.JanusPlayButton_C.ExecuteUbergraph_JanusPlayButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};


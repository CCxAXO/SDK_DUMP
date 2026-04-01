// WidgetBlueprintGeneratedClass ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C
// Size: 0x474 (Inherited: 0x320)
struct UThreadedChatMessageDisplayBox_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UAresScrollBox* AresScrollBox_1; // 0x328(0x08)
	struct UInvalidationBox* InvalidationBox_ThreadedChatMessageDisplayBox; // 0x330(0x08)
	struct UVerticalBox* MessageBox; // 0x338(0x08)
	struct FText LastSeperatorDate; // 0x340(0x18)
	bool ShowDateSeperators; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<enum class EChatRoomType> AllowedRoomTypes; // 0x360(0x10)
	struct TArray<enum class EMessageContentType> AllowedMessageContentTypes; // 0x370(0x10)
	struct FVector2D FooterSize; // 0x380(0x10)
	struct FDateTime LastEventTriggeringAudio; // 0x390(0x08)
	struct UAkAudioEvent* MessageAddedAudioDefault; // 0x398(0x08)
	int32_t MinimumSecondsBetweenMessagingToPlayAudio; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TMap<enum class EChatRoomType, struct UAkAudioEvent*> MessageAddedAudioOverrides; // 0x3a8(0x50)
	bool MuteMessageAudio; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32_t MinimumSecondsBeforeFirstAudio; // 0x3fc(0x04)
	struct FVector2D PreviousSize; // 0x400(0x10)
	struct FMulticastInlineDelegate MessageAddedToDisplay; // 0x410(0x10)
	struct TSet<struct FString> UnreadConversationIDs; // 0x420(0x50)
	bool DoesPlayAudio; // 0x470(0x01)
	bool UsePerMessageBacking; // 0x471(0x01)
	bool IsNotificationOnlyWidget; // 0x472(0x01)
	bool IgnoringIncomingMessages; // 0x473(0x01)

	void ExpireAllMessages(); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.ExpireAllMessages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ScrollToEnd(); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.ScrollToEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeLastEventTriggeringAudio(); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.InitializeLastEventTriggeringAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMessageAudio(struct FUnifiedChatMessage Message, struct UAkAudioEvent*& Audio); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.GetMessageAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void TryPlayAudio(struct FUnifiedChatMessage Message); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.TryPlayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateMessageWidget(struct FUnifiedChatMessage& UnifiedChatMessage, bool UsePerMessageBacking, struct UUserWidget*& Widget); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.CreateMessageWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddMessagesToContainer(struct TArray<struct FUnifiedChatMessage>& Messages, bool Audio); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.AddMessagesToContainer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMessagesAdded_Event_1(struct TArray<struct FUnifiedChatMessage>& MessagesAdded); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.OnMessagesAdded_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Initialize(bool UsePerMessageBacking); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ThreadedChatMessageDisplayBox(int32_t EntryPoint); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.ExecuteUbergraph_ThreadedChatMessageDisplayBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void MessageAddedToDisplay__DelegateSignature(); // Function ThreadedChatMessageDisplayBox.ThreadedChatMessageDisplayBox_C.MessageAddedToDisplay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


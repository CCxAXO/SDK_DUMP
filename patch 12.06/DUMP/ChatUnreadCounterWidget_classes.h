// WidgetBlueprintGeneratedClass ChatUnreadCounterWidget.ChatUnreadCounterWidget_C
// Size: 0x3d8 (Inherited: 0x318)
struct UChatUnreadCounterWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UTextBlock* CountTextbox; // 0x328(0x08)
	struct TSet<enum class EChatRoomType> RoomTypes; // 0x330(0x50)
	int32_t MessageCount; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FMulticastInlineDelegate OnStartCounting; // 0x388(0x10)
	struct FMulticastInlineDelegate OnStopCounting; // 0x398(0x10)
	struct FDateTime Counting Start Time; // 0x3a8(0x08)
	struct FSlateColor BackgroundTint; // 0x3b0(0x14)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FMulticastInlineDelegate OnCountUpdated; // 0x3c8(0x10)

	void GetUnreadMessageCount(int32_t& MessageCount); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.GetUnreadMessageCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CountUnreadMessages(struct TArray<struct FUnifiedChatMessage>& Messages, int32_t& Unread Count); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.CountUnreadMessages // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMessageCountUpdated(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnMessageCountUpdated // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopCounting(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.StopCounting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartCounting(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.StartCounting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnStartCounting_(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnStartCounting_ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStopCounting_(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnStopCounting_ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMessagesAdded(struct TArray<struct FUnifiedChatMessage>& MessagesAdded); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnMessagesAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ChatUnreadCounterWidget(int32_t EntryPoint); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.ExecuteUbergraph_ChatUnreadCounterWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnCountUpdated__DelegateSignature(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnCountUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStopCounting__DelegateSignature(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnStopCounting__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStartCounting__DelegateSignature(); // Function ChatUnreadCounterWidget.ChatUnreadCounterWidget_C.OnStartCounting__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


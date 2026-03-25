// WidgetBlueprintGeneratedClass ChatMessageV2_Base.ChatMessageV2_Base_C
// Size: 0x478 (Inherited: 0x318)
struct UChatMessageV2_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeOutSystem; // 0x320(0x08)
	struct UWidgetAnimation* FadeOut; // 0x328(0x08)
	struct UWidgetAnimation* HideMessage; // 0x330(0x08)
	struct UWidgetAnimation* ShowMessage; // 0x338(0x08)
	struct FUnifiedChatMessage UnifiedChatMessage; // 0x340(0xd8)
	bool NeedsInitializeOnConstruct; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FText ConstructedAuthorText; // 0x420(0x18)
	bool ShowMessageBacking; // 0x438(0x01)
	bool AutoExpire; // 0x439(0x01)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct FText CachedFormattedChatMessageText; // 0x440(0x18)
	bool Show Separator; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FMulticastInlineDelegate MessageClicked; // 0x460(0x10)
	struct FDateTime UTCDateTime; // 0x470(0x08)

	void CopyFromChatMessage(struct UChatMessageV2_Base_C* Chat Message Widget); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.CopyFromChatMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show(); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Expire(bool Instant, double NewParam1); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.Expire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDateText(struct FText& Text, bool& IsToday); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.GetDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FUnifiedChatMessage InUnifiedChatMessage, bool InShowMessageBacking, bool InAutoExpire, bool ShowSeparator); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitInternal(struct FText FormattedChatMessageText, double AnimStartTime); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.InitInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ChatMessageV2_Base(int32_t EntryPoint); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.ExecuteUbergraph_ChatMessageV2_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void MessageClicked__DelegateSignature(struct FString Subject); // Function ChatMessageV2_Base.ChatMessageV2_Base_C.MessageClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


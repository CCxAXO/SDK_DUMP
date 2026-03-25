// WidgetBlueprintGeneratedClass ChatMessage.ChatMessage_C
// Size: 0x473 (Inherited: 0x318)
struct UChatMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeOut; // 0x320(0x08)
	struct UTextBlock* Author; // 0x328(0x08)
	struct UBorder* Border_2; // 0x330(0x08)
	struct UTextBlock* Channel; // 0x338(0x08)
	struct UHorizontalBox* ContextHeader; // 0x340(0x08)
	struct UImage* MessageBacking; // 0x348(0x08)
	struct URichTextBlock* RichText; // 0x350(0x08)
	struct UTextBlock* TimestampText; // 0x358(0x08)
	struct FUnifiedChatMessage UnifiedChatMessage; // 0x360(0xd8)
	bool HasInitialized; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FText SystemMessageAuthor; // 0x440(0x18)
	struct FText ConstructedAuthorText; // 0x458(0x18)
	bool ShowMessageBacking; // 0x470(0x01)
	bool AutoExpire; // 0x471(0x01)
	bool Expiring; // 0x472(0x01)

	void Expire(double Fade speed); // Function ChatMessage.ChatMessage_C.Expire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetChannelBasedTextStyleKey(struct FUnifiedChatMessage& Message, struct FText& Key); // Function ChatMessage.ChatMessage_C.GetChannelBasedTextStyleKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetSenderBasedTextStyleKey(struct FUnifiedChatMessage& Message, struct FText& Type); // Function ChatMessage.ChatMessage_C.GetSenderBasedTextStyleKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ClearTextWrapWidth(); // Function ChatMessage.ChatMessage_C.ClearTextWrapWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MeasureAvailableTextWidth(double& MeasuredWidth); // Function ChatMessage.ChatMessage_C.MeasureAvailableTextWidth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetTextWrapWidth(double AvailableWidth); // Function ChatMessage.ChatMessage_C.SetTextWrapWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool AreTeamsEnemies(struct FName A, struct FName B); // Function ChatMessage.ChatMessage_C.AreTeamsEnemies // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool IsWhisper(); // Function ChatMessage.ChatMessage_C.IsWhisper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetAuthorText(struct FText& Author String); // Function ChatMessage.ChatMessage_C.GetAuthorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsPlayingTeam(struct FName Team, bool& Is Playing Team); // Function ChatMessage.ChatMessage_C.IsPlayingTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsFromEnemy(struct FUnifiedChatMessage& Message, bool& Is Enemy); // Function ChatMessage.ChatMessage_C.IsFromEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsFromSelf(struct FUnifiedChatMessage& Message, bool& Is Self); // Function ChatMessage.ChatMessage_C.IsFromSelf // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function ChatMessage.ChatMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ChatMessage(int32_t EntryPoint); // Function ChatMessage.ChatMessage_C.ExecuteUbergraph_ChatMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


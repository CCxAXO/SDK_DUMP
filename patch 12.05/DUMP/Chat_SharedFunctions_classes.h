// BlueprintGeneratedClass Chat_SharedFunctions.Chat_SharedFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct UChat_SharedFunctions_C : UBlueprintFunctionLibrary {

	void SplitNameAndTag(struct FText NameAndTag, struct UObject* __WorldContext, struct FText& GameName, struct FText& Tagline); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.SplitNameAndTag // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool HasMultipleFriendsWithSameName(struct FText Game Name, struct UObject* __WorldContext); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.HasMultipleFriendsWithSameName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FText HideTaglineIfUniqueName(struct FText NameAndTag, struct UObject* __WorldContext); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.HideTaglineIfUniqueName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetChatWidgetContext(struct UObject* __WorldContext, enum class EGameFlowStateType& post transition state); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.GetChatWidgetContext // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetChatRoomTypeText(enum class EChatRoomType Room, struct UObject* __WorldContext, struct FText& Room Name); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.GetChatRoomTypeText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SwitchActiveChatTabIfNeeded(enum class ETextChatRoomType NewActiveChatTab, enum class ETextChatRoomType CurrentActiveChatTab, struct UWidgetSwitcher* ChatDisplayBoxSwitcher, struct UThreadedChatMessageDisplayBox_C* GroupMessageDisplayPanel, struct UThreadedChatMessageDisplayBox_C* PrivateMessageDisplayPanel, struct UObject* __WorldContext, bool& DidChangeTabs); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.SwitchActiveChatTabIfNeeded // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	char GetIndicatedChatTab(struct FString Input text, struct UObject* __WorldContext); // Function Chat_SharedFunctions.Chat_SharedFunctions_C.GetIndicatedChatTab // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


// BlueprintGeneratedClass PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C
// Size: 0x1a8 (Inherited: 0xd8)
struct UPlayerNonverbalChatComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FText CharacterName; // 0xe0(0x18)
	struct ABaseController_C* BaseController; // 0xf8(0x08)
	struct TMap<double, enum class NonVerbalCommTypesEnum> TimeToVOMap; // 0x100(0x50)
	bool PlayedRecently; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t ShopButtonAction; // 0x154(0x04)
	struct TMap<enum class NonVerbalCommTypesEnum, struct FText> NonVerbalCommTypeToChatText; // 0x158(0x50)

	void GetChatTextForNonverbalEnum(enum class NonVerbalCommTypesEnum Nonverbal Enum, struct FText& ChatText); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.GetChatTextForNonverbalEnum // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayTacticalComm(int32_t WheelGroupIndex, int32_t WheelIndex, int32_t WheelItemIndex, struct FVector PingLocation); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.PlayTacticalComm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FString GetWeaponNameFromPlayerState(struct AShooterPlayerState* State); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.GetWeaponNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void TryConsumeRateLimitedComm(bool& bSuccess); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.TryConsumeRateLimitedComm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChatMsgDupeCheck(enum class NonVerbalCommTypesEnum VO, bool& MakeChatMsg); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ChatMsgDupeCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateChatMsgWithRegions(enum class NonVerbalCommTypesEnum VO, struct FText& ChatMessageText); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.GenerateChatMsgWithRegions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RadioCommand(enum class NonVerbalCommTypesEnum RadioCommand); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.RadioCommand // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void I_GOT_DA_THING(struct UCharacterHandle* CharacterHandle); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.I_GOT_DA_THING // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ResetMessageLog(); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ResetMessageLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TacticalCommand(enum class TacticalCommTypesEnum Comm); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.TacticalCommand // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ServerPlayTacticalComm(int32_t WheelGroupIndex, int32_t WheelIndex, int32_t WheelItemIndex, struct FVector PingLocation); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ServerPlayTacticalComm // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerNonverbalChatComponent(int32_t EntryPoint); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ExecuteUbergraph_PlayerNonverbalChatComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


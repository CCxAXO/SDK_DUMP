// BlueprintGeneratedClass BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C
// Size: 0x2a8 (Inherited: 0x30)
struct UBaseNonVerbalCommWheelDefinitions_C : UNonVerbalCommGlobalsDataAssetDefinition {
	struct TMap<enum class NonVerbalCommWheelGroupTypes, struct UBaseNonVerbalCommsWheelGroup_C*> WheelGroups; // 0x30(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> AttackerSide_ToTacticalVO; // 0x80(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> DefenderSide_ToTacticalVO; // 0xd0(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> Mid_ToTacticalVO; // 0x120(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> A_ToTacticalVO; // 0x170(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> B_ToTacticalVO; // 0x1c0(0x50)
	struct TMap<enum class TacticalVOEnum, enum class TacticalVOEnum> C_ToTacticalVO; // 0x210(0x50)
	struct FText ChatText_UltimateIsReady; // 0x260(0x18)
	struct FText ChatText_UltimateIsAlmostReady; // 0x278(0x18)
	struct FText ChatText_UltimateIsNotReady; // 0x290(0x18)

	void GetRadialItemOverrides(struct ABaseController_C* BaseController, enum class NonVerbalCommTypesEnum CommVOLine, enum class TacticalVOEnum Voiceline, struct FText ChatText, enum class NonVerbalCommTypesEnum& NewCommVOLine, enum class TacticalVOEnum& NewVoiceline, struct FText& NewChatText); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.GetRadialItemOverrides // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetCalloutRegionText(struct AAresCalloutRegion* CalloutRegion, struct FText& SuperRegionName, struct FText& Region Name); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.GetCalloutRegionText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	struct FText GetWeaponNameFromPlayerState(struct AShooterPlayerState* State); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.GetWeaponNameFromPlayerState // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Player_GenerateChatMsgWithRegions(struct ABaseController_C* BaseController, struct AAresCalloutRegion* PlayerCalloutRegion, enum class NonVerbalCommTypesEnum NonVerbalCommType, struct FText ChatText, struct FText& ChatMessageText); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.Player_GenerateChatMsgWithRegions // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Ping_GenerateChatMsgWithRegions(struct ABaseController_C* BaseController, struct AAresCalloutRegion* PingCalloutRegion, struct AAresCalloutRegion* PlayerCalloutRegion, struct FText ChatText, struct FText& ChatMessageText); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.Ping_GenerateChatMsgWithRegions // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	enum class TacticalVOEnum TryFindTacticalVOForSuperRegion(struct AAresCalloutRegion* CalloutRegion, enum class TacticalVOEnum TacticalVO); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.TryFindTacticalVOForSuperRegion // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	struct AAresCalloutRegion* TryGetPingCalloutRegion(struct AShooterCharacter* ShooterCharacter, struct FVector Location); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.TryGetPingCalloutRegion // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void AuthPlayTacticalComm(int32_t WheelGroupIndex, int32_t WheelIndex, int32_t WheelItemIndex, struct FVector PingLocation, struct UObject* PlayerNonVerbalChatComponent); // Function BaseNonVerbalCommWheelDefinitions.BaseNonVerbalCommWheelDefinitions_C.AuthPlayTacticalComm // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};


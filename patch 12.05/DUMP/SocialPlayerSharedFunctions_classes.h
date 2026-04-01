// BlueprintGeneratedClass SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct USocialPlayerSharedFunctions_C : UBlueprintFunctionLibrary {

	bool IsLocalPlayerInNonCustomMatch(struct UObject* __WorldContext); // Function SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C.IsLocalPlayerInNonCustomMatch // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPartyQueueTimeText(struct FDateTime QueueEntryTime, struct UObject* __WorldContext, struct FText& NewParam); // Function SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C.GetPartyQueueTimeText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool InRelevantLobby(struct UPlatformPlayer* PlatformPlayer, struct UAresClientGameInstance* AresClientGameInstance, struct UObject* __WorldContext); // Function SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C.InRelevantLobby // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void LookupMapDisplayName(struct FName MapName, struct UAresClientGameInstance* AresClientGameInstance, struct UObject* __WorldContext, struct FText& MapDisplayName); // Function SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C.LookupMapDisplayName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetStatusText(struct UPlatformPlayer* PlatformPlayer, struct UAresClientGameInstance* AresClientGameInstance, struct UObject* __WorldContext, struct FText& Text, struct FSlateColor& Color); // Function SocialPlayerSharedFunctions.SocialPlayerSharedFunctions_C.GetStatusText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};


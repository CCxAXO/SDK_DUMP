// BlueprintGeneratedClass MatchHistorySharedFunctions.MatchHistorySharedFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct UMatchHistorySharedFunctions_C : UBlueprintFunctionLibrary {

	void Get Account Level Required for Ranked(struct UAresClientGameInstance* Game Instance, struct UObject* __WorldContext, int32_t& Account Levels Required For Ranked); // Function MatchHistorySharedFunctions.MatchHistorySharedFunctions_C.Get Account Level Required for Ranked // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Get Account Levels Remaining for Ranked(struct UAresClientGameInstance* Game Instance, struct FString Subject, struct UObject* __WorldContext, int32_t& Account Levels Remaining For Ranked); // Function MatchHistorySharedFunctions.MatchHistorySharedFunctions_C.Get Account Levels Remaining for Ranked // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPlacementMap(struct TArray<struct TMap<struct FString, struct UPartyPlayerModel*>>& SortedPoints, struct UObject* __WorldContext, struct TMap<int32_t, struct FText>& Placements); // Function MatchHistorySharedFunctions.MatchHistorySharedFunctions_C.GetPlacementMap // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTierVisibilityReason(int32_t Total Games Needed for Rating, int32_t Recent Games Needed for Rating, int32_t Current Season Games Needed for Rating, int32_t Account Levels Remaining For Ranked, int32_t Account Level Required For Ranked, struct UObject* __WorldContext, struct FText& Tier Visibility Explanation); // Function MatchHistorySharedFunctions.MatchHistorySharedFunctions_C.GetTierVisibilityReason // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
};


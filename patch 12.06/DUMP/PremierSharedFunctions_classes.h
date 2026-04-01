// BlueprintGeneratedClass PremierSharedFunctions.PremierSharedFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct UPremierSharedFunctions_C : UBlueprintFunctionLibrary {

	void GetPremierPrefixSeparator(enum class EPremierRosterType RosterType, struct UObject* __WorldContext, struct FString& Separator); // Function PremierSharedFunctions.PremierSharedFunctions_C.GetPremierPrefixSeparator // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsProPremierRoster(enum class EPremierRosterType RosterType, struct UObject* __WorldContext, bool& IsPro); // Function PremierSharedFunctions.PremierSharedFunctions_C.IsProPremierRoster // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Set Team Name And Tag Length Hint String(struct UTextBlock*& NameHintText, struct UTextBlock*& TagHintText, struct UObject* __WorldContext); // Function PremierSharedFunctions.PremierSharedFunctions_C.Set Team Name And Tag Length Hint String // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ConvertCreateTeamErrorTypeToText(enum class ERosterCreateErrorType ErrorType, struct UObject* __WorldContext, struct FText& ErrorText); // Function PremierSharedFunctions.PremierSharedFunctions_C.ConvertCreateTeamErrorTypeToText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ConvertPremierDivisionGroupEnumToDivisionGroupEnum(enum class EPremierDivisionGroup PremierDivisionGroup, struct UObject* __WorldContext, enum class EDivisionGroup& DivisionGroup); // Function PremierSharedFunctions.PremierSharedFunctions_C.ConvertPremierDivisionGroupEnumToDivisionGroupEnum // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsDivisionGroupPro(enum class EDivisionGroup DivisionGroup, struct UObject* __WorldContext, bool& IsProGroup); // Function PremierSharedFunctions.PremierSharedFunctions_C.IsDivisionGroupPro // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
};


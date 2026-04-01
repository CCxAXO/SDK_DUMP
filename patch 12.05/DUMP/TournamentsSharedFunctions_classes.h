// BlueprintGeneratedClass TournamentsSharedFunctions.TournamentsSharedFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct UTournamentsSharedFunctions_C : UBlueprintFunctionLibrary {

	void FixArabicNumerals(struct FText In Text, struct UObject* __WorldContext, struct FText& Out Text); // Function TournamentsSharedFunctions.TournamentsSharedFunctions_C.FixArabicNumerals // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetEventTimesFormattedText(struct FPremierEventDisplay EventData, struct FText DatesPattern, struct FText StartTimesPattern, struct FText EndTimesPattern, struct UAresClientGameInstance* AresClientGameInstance, struct UObject* __WorldContext, struct FText& EventTimesText, struct FText& EventDatesText); // Function TournamentsSharedFunctions.TournamentsSharedFunctions_C.GetEventTimesFormattedText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetUTCTimeForEventTime(struct FDateTime EventTime, struct UAresClientGameInstance* AresClientGameInstance, struct UObject* __WorldContext, struct FDateTime& EventUTCTime); // Function TournamentsSharedFunctions.TournamentsSharedFunctions_C.GetUTCTimeForEventTime // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};


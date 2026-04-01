// BlueprintGeneratedClass TimerFunctionLibrary.TimerFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UTimerFunctionLibrary_C : UBlueprintFunctionLibrary {

	void CalculateDisplayTime_Int(struct FHUDTimerConfig NewParam, double TimeRemaining, struct UObject* __WorldContext, int32_t& Seconds, int32_t& Milliseconds, int32_t& Minutes); // Function TimerFunctionLibrary.TimerFunctionLibrary_C.CalculateDisplayTime_Int // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CalculateCurrentDisplayTime(int32_t Minutes, int32_t Seconds, int32_t Milliseconds, struct UObject* __WorldContext, struct FText& Out Timer); // Function TimerFunctionLibrary.TimerFunctionLibrary_C.CalculateCurrentDisplayTime // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CalculateDisplayTime(struct FHUDTimerConfig TimerConfig, int32_t Minutes, int32_t Seconds, int32_t Milliseconds, struct UObject* __WorldContext, struct FText& Display Time); // Function TimerFunctionLibrary.TimerFunctionLibrary_C.CalculateDisplayTime // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};


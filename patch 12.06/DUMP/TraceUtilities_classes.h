// Class TraceUtilities.TraceUtilLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTraceUtilLibrary : UBlueprintFunctionLibrary {

	void TraceMarkRegionStart(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47d4b60
	void TraceMarkRegionEnd(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47d4b60
	void TraceBookmark(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceBookmark // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x47d4b60
	bool ToggleChannel(struct FString ChannelName, bool Enabled); // Function TraceUtilities.TraceUtilLibrary.ToggleChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8547e20
	bool StopTracing(); // Function TraceUtilities.TraceUtilLibrary.StopTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c6df80
	bool StartTraceToFile(struct FString Filename, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceToFile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8547fe0
	bool StartTraceSendTo(struct FString Target, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8547fe0
	bool ResumeTracing(); // Function TraceUtilities.TraceUtilLibrary.ResumeTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b52ca0
	bool PauseTracing(); // Function TraceUtilities.TraceUtilLibrary.PauseTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b52ca0
	bool IsTracing(); // Function TraceUtilities.TraceUtilLibrary.IsTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c6df80
	bool IsChannelEnabled(struct FString ChannelName); // Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8547d00
	struct TArray<struct FString> GetEnabledChannels(); // Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8547b20
	struct TArray<struct FString> GetAllChannels(); // Function TraceUtilities.TraceUtilLibrary.GetAllChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ca4d50
};


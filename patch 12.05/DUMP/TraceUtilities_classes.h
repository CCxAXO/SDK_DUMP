// Class TraceUtilities.TraceUtilLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTraceUtilLibrary : UBlueprintFunctionLibrary {

	void TraceMarkRegionStart(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780dd0
	void TraceMarkRegionEnd(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780dd0
	void TraceBookmark(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceBookmark // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4780dd0
	bool ToggleChannel(struct FString ChannelName, bool Enabled); // Function TraceUtilities.TraceUtilLibrary.ToggleChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x84b9bc0
	bool StopTracing(); // Function TraceUtilities.TraceUtilLibrary.StopTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c1f920
	bool StartTraceToFile(struct FString Filename, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceToFile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x84b9d80
	bool StartTraceSendTo(struct FString Target, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x84b9d80
	bool ResumeTracing(); // Function TraceUtilities.TraceUtilLibrary.ResumeTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b04850
	bool PauseTracing(); // Function TraceUtilities.TraceUtilLibrary.PauseTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b04850
	bool IsTracing(); // Function TraceUtilities.TraceUtilLibrary.IsTracing // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c1f920
	bool IsChannelEnabled(struct FString ChannelName); // Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x84b9aa0
	struct TArray<struct FString> GetEnabledChannels(); // Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x84b98c0
	struct TArray<struct FString> GetAllChannels(); // Function TraceUtilities.TraceUtilLibrary.GetAllChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c566e0
};


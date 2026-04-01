// Class Reflex.ReflexBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UReflexBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class EReflexMode Mode); // Function Reflex.ReflexBlueprintLibrary.SetReflexMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x721ccf0
	void SetFlashIndicatorEnabled(bool bEnabled); // Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x721ca60
	float GetRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721c5c0
	enum class EReflexMode GetReflexMode(); // Function Reflex.ReflexBlueprintLibrary.GetReflexMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721cbe0
	bool GetReflexAvailable(); // Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721cdd0
	float GetGameToRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721c820
	float GetGameLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721c6f0
	bool GetFlashIndicatorEnabled(); // Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x721c950
};


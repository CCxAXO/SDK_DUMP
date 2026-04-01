// Class WwiseResourceLoader.WwiseEventInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseEventInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseEventInfo SetWwiseShortId(struct FWwiseEventInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090870
	struct FWwiseEventInfo SetWwiseName(struct FWwiseEventInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090600
	struct FWwiseEventInfo SetWwiseGuid(struct FWwiseEventInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5090a60
	struct FWwiseEventInfo SetSwitchContainerLoading(struct FWwiseEventInfo& Ref, enum class EWwiseEventSwitchContainerLoading& SwitchContainerLoading); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090400
	struct FWwiseEventInfo SetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090010
	struct FWwiseEventInfo SetDestroyOptions(struct FWwiseEventInfo& Ref, enum class EWwiseEventDestroyOptions& DestroyOptions); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090200
	struct FWwiseEventInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading, enum class EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5091900
	int32_t GetWwiseShortId(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5091110
	struct FString GetWwiseName(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090f90
	struct FGuid GetWwiseGuid(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5091220
	enum class EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090e80
	int32_t GetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090c60
	enum class EWwiseEventDestroyOptions GetDestroyOptions(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5090d70
	void BreakStruct(struct FWwiseEventInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, enum class EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, enum class EWwiseEventDestroyOptions& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5091330
};

// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseGroupValueInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseGroupValueInfo SetWwiseShortId(struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5092d20
	struct FWwiseGroupValueInfo SetWwiseName(struct FWwiseGroupValueInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5092ac0
	struct FWwiseGroupValueInfo SetGroupShortId(struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5092f00
	struct FWwiseGroupValueInfo SetAssetGuid(struct FWwiseGroupValueInfo& Ref, struct FGuid& AssetGuid); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50930e0
	struct FWwiseGroupValueInfo MakeStruct(struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5093bb0
	int32_t GetWwiseShortId(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5093450
	struct FString GetWwiseName(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50932d0
	int32_t GetGroupShortId(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5093550
	struct FGuid GetAssetGuid(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5093650
	void BreakStruct(struct FWwiseGroupValueInfo Ref, struct FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, struct FString& OutWwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5093750
};

// Class WwiseResourceLoader.WwiseObjectInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseObjectInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseObjectInfo SetWwiseShortId(struct FWwiseObjectInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5095290
	struct FWwiseObjectInfo SetWwiseName(struct FWwiseObjectInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5095040
	struct FWwiseObjectInfo SetWwiseGuid(struct FWwiseObjectInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095480
	struct FWwiseObjectInfo SetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5094e50
	struct FWwiseObjectInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095f50
	int32_t GetWwiseShortId(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x50958f0
	struct FString GetWwiseName(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5095770
	struct FGuid GetWwiseGuid(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x50959f0
	int32_t GetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5095670
	void BreakStruct(struct FWwiseObjectInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095af0
};


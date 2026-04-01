// Class LocalizableMessageBlueprint.LocalizableMessageLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULocalizableMessageLibrary : UBlueprintFunctionLibrary {

	void Reset_LocalizableMessage(struct FLocalizableMessage& Message); // Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a895d0
	bool IsEmpty_LocalizableMessage(struct FLocalizableMessage& Message); // Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7a897c0
	struct FText Conv_LocalizableMessageToText(struct UObject* WorldContextObject, struct FLocalizableMessage& Message); // Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Conv_LocalizableMessageToText // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7a899e0
};


// Class PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPlayerFeedbackToolFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPlayerFeedbackToolManager* GetPlayerFeedbackToolManager(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolFunctionLibrary.GetPlayerFeedbackToolManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5561310
};

// Class PlayerFeedbackToolModule.PlayerFeedbackToolManager
// Size: 0x120 (Inherited: 0x30)
struct UPlayerFeedbackToolManager : UObject {
	struct FMulticastInlineDelegate OnSurveyReceivedEvent; // 0x30(0x10)
	char pad_40[0xe0]; // 0x40(0xe0)

	void SetQuestionResponse(int32_t questionId, struct FString Key, struct FString Value); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.SetQuestionResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x5562c30
	void SendSurveyResults(bool didOptOutOfSurvey); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.SendSurveyResults // (Final|Native|Public|BlueprintCallable) // @ game+0x5562b30
	void RequestSurveyForEvent(struct UPlayerFeedbackToolManager* pftManager, struct FString EventType, struct TFieldPath<FProperty> anyStruct); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurveyForEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5562680
	void RequestSurvey(struct FString EventType); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.RequestSurvey // (Final|Native|Public|BlueprintCallable) // @ game+0x5563200
	bool HasActiveSurvey(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.HasActiveSurvey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5562b00
	struct FPlayerFeedbackSurvey GetActiveSurvey(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.GetActiveSurvey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5562ad0
	void AddMetadataField(struct FString Key, struct FString Value); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddMetadataField // (Final|Native|Public|BlueprintCallable) // @ game+0x5562fc0
	void AddExpandedSurveyAction(); // Function PlayerFeedbackToolModule.PlayerFeedbackToolManager.AddExpandedSurveyAction // (Final|Native|Public|BlueprintCallable) // @ game+0x55631e0
};


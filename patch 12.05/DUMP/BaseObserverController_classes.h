// BlueprintGeneratedClass BaseObserverController.BaseObserverController_C
// Size: 0xe2c (Inherited: 0xe00)
struct ABaseObserverController_C : ALiveObserverPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct UComp_Controller_DeafenManager_C* Comp_Controller_DeafenManager; // 0xe08(0x08)
	struct FMulticastInlineDelegate OnScoreboardUpdated; // 0xe10(0x10)
	bool IsScoreboardVisible; // 0xe20(0x01)
	char pad_E21[0x3]; // 0xe21(0x03)
	struct FColor BlueTeamColor; // 0xe24(0x04)
	struct FColor RedTeamColor; // 0xe28(0x04)

	void ReceiveBeginPlay(); // Function BaseObserverController.BaseObserverController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseObserverController.BaseObserverController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreboardUpdatedEvent(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOutlines(); // Function BaseObserverController.BaseObserverController_C.UpdateOutlines // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseObserverController(int32_t EntryPoint); // Function BaseObserverController.BaseObserverController_C.ExecuteUbergraph_BaseObserverController // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnScoreboardUpdated__DelegateSignature(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


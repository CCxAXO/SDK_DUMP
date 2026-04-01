// WidgetBlueprintGeneratedClass LoginQueue.LoginQueue_C
// Size: 0x358 (Inherited: 0x318)
struct ULoginQueue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundTint; // 0x320(0x08)
	struct USharedButtonMaster_C* ExitButton; // 0x328(0x08)
	struct USharedButtonMaster_C* LogoutButton; // 0x330(0x08)
	struct UTextBlock* QueueInfoText; // 0x338(0x08)
	struct UTextBlock* QueueWaitText; // 0x340(0x08)
	int32_t QueuePosition; // 0x348(0x04)
	int32_t SecondsLeftInQueue; // 0x34c(0x04)
	struct FTimerHandle QueueCountdownTimer; // 0x350(0x08)

	void UpdateWaitTime(); // Function LoginQueue.LoginQueue_C.UpdateWaitTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueStatus(); // Function LoginQueue.LoginQueue_C.UpdateQueueStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function LoginQueue.LoginQueue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnQueueUpdated(); // Function LoginQueue.LoginQueue_C.OnQueueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoginReady(); // Function LoginQueue.LoginQueue_C.OnLoginReady // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function LoginQueue.LoginQueue_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function LoginQueue.LoginQueue_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSignoutAllowed(); // Function LoginQueue.LoginQueue_C.OnSignoutAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSignoutNotAllowed(); // Function LoginQueue.LoginQueue_C.OnSignoutNotAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LoginQueue(int32_t EntryPoint); // Function LoginQueue.LoginQueue_C.ExecuteUbergraph_LoginQueue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


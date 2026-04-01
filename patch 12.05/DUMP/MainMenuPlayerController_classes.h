// BlueprintGeneratedClass MainMenuPlayerController.MainMenuPlayerController_C
// Size: 0xae1 (Inherited: 0xaa0)
struct AMainMenuPlayerController_C : ABaseMainMenuPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0xaa8(0x08)
	struct FString StartedGameID; // 0xab0(0x10)
	struct FString TeamString; // 0xac0(0x10)
	bool MusicState_uncheckedoff_checkedon; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct UModalNotificationConsumer_C* ModalNotificationConsumer; // 0xad8(0x08)
	bool bAllowModals; // 0xae0(0x01)

	void SetModalNotificationsAllowed(bool AllowModals); // Function MainMenuPlayerController.MainMenuPlayerController_C.SetModalNotificationsAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupUIAutomation(); // Function MainMenuPlayerController.MainMenuPlayerController_C.SetupUIAutomation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript(); // Function MainMenuPlayerController.MainMenuPlayerController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function MainMenuPlayerController.MainMenuPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MainMenuPlayerController(int32_t EntryPoint); // Function MainMenuPlayerController.MainMenuPlayerController_C.ExecuteUbergraph_MainMenuPlayerController // (Final|UbergraphFunction) // @ game+0x1af5410
};


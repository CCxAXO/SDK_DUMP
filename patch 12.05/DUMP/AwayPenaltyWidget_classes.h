// WidgetBlueprintGeneratedClass AwayPenaltyWidget.AwayPenaltyWidget_C
// Size: 0x398 (Inherited: 0x330)
struct UAwayPenaltyWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UImage* Image_3; // 0x350(0x08)
	struct UImage* Image_4; // 0x358(0x08)
	struct UImage* Image_5; // 0x360(0x08)
	struct UImage* Image_78; // 0x368(0x08)
	struct UTextBlock* PlayerNotSpawnedText; // 0x370(0x08)
	struct UTextBlock* PlayerSpawnNextRoundText; // 0x378(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x380(0x08)
	bool Bound; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UAFKDetectionComponent* AFKComponent; // 0x390(0x08)

	void UpdateRespawnMessageText(); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.UpdateRespawnMessageText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAresPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.OnAresPlayerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowWillRespawnMessage(bool Condition); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.SetShowWillRespawnMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisible(bool Condition); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAFKStateChanged(struct AShooterPlayerState* Owner, bool bIsAFK); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.OnAFKStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAwayPenaltyStateChanged(struct AShooterPlayerState* Owner, bool bIsPenalizedForBeingAway); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.OnAwayPenaltyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AwayPenaltyWidget(int32_t EntryPoint); // Function AwayPenaltyWidget.AwayPenaltyWidget_C.ExecuteUbergraph_AwayPenaltyWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};


// WidgetBlueprintGeneratedClass BombIcon.BombIcon_C
// Size: 0x3c0 (Inherited: 0x322)
struct UBombIcon_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Ally_Defusing_fixed; // 0x330(0x08)
	struct UWidgetAnimation* Ally_Planting_fixed; // 0x338(0x08)
	struct UWidgetAnimation* FailedOrKilled; // 0x340(0x08)
	struct UWidgetAnimation* EnemyPlanted; // 0x348(0x08)
	struct UWidgetAnimation* AllyPlanted; // 0x350(0x08)
	struct UWidgetAnimation* AllyCharacterIcon; // 0x358(0x08)
	struct UWidgetAnimation* BombPickup; // 0x360(0x08)
	struct UImage* BGImg; // 0x368(0x08)
	struct UImage* brush1; // 0x370(0x08)
	struct UImage* CharacterIcon; // 0x378(0x08)
	struct UImage* KillOverlayImg; // 0x380(0x08)
	struct UImage* LeftBarImg; // 0x388(0x08)
	struct UImage* RightBarImg; // 0x390(0x08)
	struct UImage* SpikeRawTexture; // 0x398(0x08)
	struct UOverlay* TextOverlay; // 0x3a0(0x08)
	struct UTextBlock* TXT_Box; // 0x3a8(0x08)
	struct AShooterCharacter* Character; // 0x3b0(0x08)
	struct UObject* CharacterGlobals; // 0x3b8(0x08)

	void AssignCharacter(struct AShooterCharacter* InCharacter); // Function BombIcon.BombIcon_C.AssignCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BombIcon.BombIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombIcon.BombIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PickupBomb(); // Function BombIcon.BombIcon_C.PickupBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AllyPlantingBomb(); // Function BombIcon.BombIcon_C.AllyPlantingBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AllyPlantedBomb(); // Function BombIcon.BombIcon_C.AllyPlantedBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnemyPlantedBomb(); // Function BombIcon.BombIcon_C.EnemyPlantedBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombSpotted(); // Function BombIcon.BombIcon_C.BombSpotted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Killed(); // Function BombIcon.BombIcon_C.Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AllyDefusing(); // Function BombIcon.BombIcon_C.AllyDefusing // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombIcon(int32_t EntryPoint); // Function BombIcon.BombIcon_C.ExecuteUbergraph_BombIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};


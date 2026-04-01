// BlueprintGeneratedClass PlayerSprayComponent.PlayerSprayComponent_C
// Size: 0x120 (Inherited: 0xf0)
struct UPlayerSprayComponent_C : UPlayerSprayComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	double AuthWorldTimeLastSpray; // 0xf8(0x08)
	double SprayCooldownSeconds; // 0x100(0x08)
	int32_t MaxAllowedSprays; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FMulticastInlineDelegate OnSprayCooldown; // 0x110(0x10)

	bool AuthCanPlayerSpray(); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthCanPlayerSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthOnPlayerSprayed(struct AAresSpray* UsedSpray, struct USprayEquipSlotDataAsset* Context); // Function PlayerSprayComponent.PlayerSprayComponent_C.AuthOnPlayerSprayed // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpraySpawned(struct AEffectContainer* SpawnedSpray); // Function PlayerSprayComponent.PlayerSprayComponent_C.OnSpraySpawned // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On Round Phase Change(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function PlayerSprayComponent.PlayerSprayComponent_C.On Round Phase Change // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerSprayComponent.PlayerSprayComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerSprayComponent(int32_t EntryPoint); // Function PlayerSprayComponent.PlayerSprayComponent_C.ExecuteUbergraph_PlayerSprayComponent // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnSprayCooldown__DelegateSignature(double RemainingCooldown); // Function PlayerSprayComponent.PlayerSprayComponent_C.OnSprayCooldown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};


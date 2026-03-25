// BlueprintGeneratedClass CosmeticActionsComponent.CosmeticActionsComponent_C
// Size: 0x198 (Inherited: 0xd8)
struct UCosmeticActionsComponent_C : UAresInputBindingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	double SprayCooldown; // 0xe0(0x08)
	bool SprayAvailable; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	double CosmeticCooldownTimestamp; // 0xf0(0x08)
	double CosmeticCooldown; // 0xf8(0x08)
	struct TMap<struct AShooterPlayerState*, bool> Enemy Kill Map; // 0x100(0x50)
	struct AShooterCharacter* Shooter Character; // 0x150(0x08)
	struct FMulticastInlineDelegate InspectTriggered; // 0x158(0x10)
	struct FMulticastInlineDelegate List Kill Map; // 0x168(0x10)
	int32_t LastRandom; // 0x178(0x04)
	int32_t ColorIndex; // 0x17c(0x04)
	bool CanEmote; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FMulticastInlineDelegate StopEmote; // 0x188(0x10)

	void Cancel Inspect for Slot(enum class EAresItemSlot Slot); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.Cancel Inspect for Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartCosmeticCooldown(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.StartCosmeticCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CosmeticOnCooldown(bool& OnCooldown); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.CosmeticOnCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Check Fidget(enum class EAresItemSlot InventorySlot, bool& ShouldFidget); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.Check Fidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Server Play Inspect(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.Server Play Inspect // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuthGotKill_Event_1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.OnAuthGotKill_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ServerTriggerSpray(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ServerTriggerSpray // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LocalPlayInspect(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.LocalPlayInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryInspect(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.TryInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindDelegatesBlueprint(struct UInputComponent* InputComponent); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.BindDelegatesBlueprint // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void List Kill Map_Event(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.List Kill Map_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExternalComponentAdded(struct AShooterCharacter* Character, struct UActorComponent* Component); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.OnExternalComponentAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelInspect_Multicast(enum class EAresItemSlot JammedSlot); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.CancelInspect_Multicast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnJamBegin_Event(struct UJammedCharacterComponent* JammedCharacterComponent, enum class EAresItemSlot JammedSlot); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.OnJamBegin_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CosmeticActionsComponent(int32_t EntryPoint); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ExecuteUbergraph_CosmeticActionsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void StopEmote__DelegateSignature(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.StopEmote__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void List Kill Map__DelegateSignature(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.List Kill Map__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InspectTriggered__DelegateSignature(struct AShooterCharacter* Triggering Player); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.InspectTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

